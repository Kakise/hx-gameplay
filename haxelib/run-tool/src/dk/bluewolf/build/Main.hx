package dk.bluewolf.build;

import sys.FileSystem;
import sys.io.File;
import neko.Lib;

using StringTools;

/**
 * TODO
 */
private enum System
{
    Windows;
    Linux;
    MacOS;
}

/**
 * TODO
 */
class Main
{
	/***************************************************************************
	 * CONSTANTS                                                               *
	 **************************************************************************/

	public static inline var EXIT_SUCCESS = 0;
	public static inline var EXIT_FAILURE = 1;

	/***************************************************************************
	 * MEMBERS                                                                 *
	 **************************************************************************/

    static var system:System;
	static var arguments:Array<String>;
	static var command:String;
	static var invocationPath:String;

    /**
     * TODO
     */
	static function main()
	{
        // Determine the user's system.
        //

        system =
            if (Sys.systemName().toLowerCase().indexOf("windows") != -1)
                Windows;
            else if (Sys.systemName().toLowerCase().indexOf("linux") != -1)
                Linux;
            else
                MacOS;

		// Check and store the command line arguments.
		//

		arguments = Sys.args();
		
		if (arguments.length < 2)
		{
			Lib.println("Run-tool was expecting a command, received nothing.");
			Lib.println("");
			showUsage();
			Sys.exit(EXIT_FAILURE);
		}

		invocationPath = arguments[arguments.length - 1];
		var slash = invocationPath.substr(-1);
		if (slash=="/"|| slash=="\\")
			invocationPath = invocationPath.substr(0,invocationPath.length-1);

		// Process the requested command.
		//

		command = arguments[0];
		switch (command)
		{
        case "install": installLibrary();
		case "create-project": createProject();
		case "add-platform": addPlatform();
        case "install-flashdevelop-template": processFlashDevelopTemplate(true);
		case "remove-flashdevelop-template": processFlashDevelopTemplate(false);
		case "process-build-files": processBuildFiles();
		default:
			showUsage();
			Sys.exit(EXIT_FAILURE);
		}
	}

	static function showUsage()
	{
		Lib.println("Valid commands are:");
		Lib.println("");
		Lib.println("        install (no arguments) -- performs post-installational activities which");
        Lib.println("        could potentially save you some effort; for example making the shell");
        Lib.println("        scripts executable. This might require root privileges.");
        Lib.println("");
        Lib.println("        create-project name -- creates a new empty gameplay project in the");
        Lib.println("        current directory with the specified name.");
		Lib.println("");
        Lib.println("        add-platform platform -- adds the specified platform to the gameplay in");
        Lib.println("        the current directory.");
        Lib.println("");
		Lib.println("        install-flashdevelop-template (no arguments) -- installs the gameplay");
		Lib.println("        FlashDevelop project template.");
		Lib.println("");
		Lib.println("        remove-flashdevelop-template (no arguments) -- removes the gameplay");
		Lib.println("        FlashDevelop project template.");
		Lib.println("");
	}

    /**
     * TODO
     */
    static function installLibrary()
    {
        // Make all shell scripts executable.
        //

        var result =
            if (system == Windows)
                true;
            else
                makeScriptsExecutable(FileSystem.fullPath("."));

        Lib.println("");
        Lib.println(
                if (!result)
                    ("STATUS: Failed to install library.")
                else
                    ("STATUS: Library successfully installed.")
            );
        Lib.println("");

        if (!result)
            Sys.exit(EXIT_FAILURE);
    }

    /**
     * TODO
     */
    static function makeScriptsExecutable(directory)
    {
        for (file in FileSystem.readDirectory(directory))
        {
            file =
                if (system == Windows)
                    ('${directory}\\${file}');
                else
                    ('${directory}/${file}');

            if (!FileSystem.exists(file))
                continue;
            else if (FileSystem.isDirectory(file))
            {
                if (!makeScriptsExecutable(file))
                    return false;
            }
            else if (file.endsWith(".sh"))
            {
                var result = Sys.command(('chmod +x ${file}'));
                if (result != 0)
                    return false;
            }
        }

        return true;
    }

    /**
     * TODO
     */
	static function createProject()
	{
		if (arguments.length < 3)
        {
            Lib.println("The name of the projet to be added is not specified.");
            Lib.println("");
            showUsage();
            Sys.exit(EXIT_FAILURE);
        }

        // Copy the projet directory.
        //

        var name = arguments[1];
        var result =
            if (system == Windows)
            {
                copyDirectory(
                        ('templates\\Project'),
                        ('${invocationPath}\\${name}')
                    );
            }
            else
            {
                copyDirectory(
                        ('templates/Project'),
                        ('${invocationPath}/${name}')
                    );
            }

        // Copy a possibly required platform.
        //

        if (result)
        {
            if (system == Windows)
            {
                result =
                    copyDirectory(
                            ('templates\\platforms\\windows-x86'),
                            ('${invocationPath}\\${name}\\platforms\\windows-x86')
                        );

                if (result)
                {
                    result =
                        copyFile(
                                'templates\\platforms\\*windows-x86*.*',
                                ('${invocationPath}\\${name}')
                            );
                }
            }
            else if (system == Linux)
            {
                result =
                    copyDirectory(
                            ('templates/platforms/linux-x86'),
                            ('${invocationPath}/${name}/platforms/linux-x86')
                        );

                if (result)
                {
                    result =
                        copyFile(
                                'templates/platforms/*linux-x86*.*',
                                ('${invocationPath}/${name}')
                            );
                }
            }
            else
            {
                // TODO: probably MacOS.
                //
            }
        }

        // Output status.
        //

        Lib.println("");
        Lib.println(
                if (!result)
                    ('STATUS: Failed to create project \"${name}\".')
                else
                    ('STATUS: Project \"${name}\" successfully created.')
            );
        Lib.println("");

        if (!result)
            Sys.exit(EXIT_FAILURE);

	}

    /**
     * TODO
     */
    static function addPlatform()
    {
        if (arguments.length < 3)
        {
            Lib.println("The platform to be added is not specified.");
            Lib.println("");
            showUsage();
            Sys.exit(EXIT_FAILURE);
        }

        var platforms =
            [
                "windows-x86",
                "windows-x64",
                "linux-x86",
                "linux-x64",
                "android-arm",
                "android-arm7"
            ];

        var platform = arguments[1];
        if (!Lambda.has(platforms, platform))
        {
            Lib.println("Invalid platform specified, must be one of:");
            Lib.println("");
            for (_platform in platforms)
                Lib.println(('    $_platform'));
            Sys.exit(EXIT_FAILURE);
        }

        // Copy the platform directory.
        //

        var result =
            if (system == Windows)
            {
                copyDirectory(
                        ('templates\\platforms\\${platform}'),
                        ('${invocationPath}\\platforms\\${platform}')
                    );
            }
            else
            {
                copyDirectory(
                        ('templates/platforms/${platform}'),
                        ('${invocationPath}/platforms/${platform}')
                    );
            }

        // Copy platform scripts.
        //

        if (result)
        {
            result =
                if (system == Windows)
                    copyFile(('templates\\platforms\\*${platform}.*'), invocationPath);
                else
                    copyFile(('templates/platforms/*${platform}.*'), invocationPath);
        }

        Sys.println("");
        Sys.println(
                if (!result)
                    "STATUS: Failed to add platform."
                else
                    "STATUS: Platform successfully added."
            );
        Sys.println("");

        if (!result)
            Sys.exit(EXIT_FAILURE);
    }

    /**
     * TODO
     */
	static function processFlashDevelopTemplate(install)
	{
		if (system != Windows)
		{
			Sys.println("");
			Sys.println("STATUS: The FlashDevelop template can only be installed on Windows.");
			Sys.println("");
            Sys.exit(EXIT_FAILURE);
		}

		// Construct the installation path.
		//

		var dstPath = Sys.getEnv("LOCALAPPDATA");
		var slash = dstPath.substr(-1);
		if (slash=="/"|| slash=="\\")
			dstPath = dstPath.substr(0, dstPath.length - 1);
		
		var installationPath = dstPath + "\\FlashDevelop\\Projects\\399 Haxe - gameplay Project";
		
		// Install or remove the FlashDevelop template.
		//

		if (install)
		{
            var result = copyDirectory("templates\\FlashDevelop", installationPath);

            // Add the default platform: windows-x86
            //

            if (result)
            {
                result = copyDirectory(
                            "templates\\platforms\\windows-x86",
                            ('${installationPath}\\platforms\\windows-x86')
                        );
            }

			if (result)
			{
				result = copyFile(
							"templates\\platforms\\*windows-x86*.*",
							installationPath
						);
			}
			Sys.println("");
			Sys.println(
					if (result)
						"STATUS: FlashDevelop template successfully installed."
					else
						"STATUS: Failed to install the FlashDevelop template."
					);
			Sys.println("");

            if (!result)
                Sys.exit(EXIT_FAILURE);
		}
		else
		{
			var result = Sys.command(('rmdir /S /Q \"$installationPath\"'));
			Sys.println("");
			Sys.println(
					if (result == 0)
						"STATUS: FlashDevelop template successfully removed."
					else
						"STATUS: Failed to remove the FlashDevelop template."
				);
			Sys.println("");

            if (result != 0)
                Sys.exit(EXIT_FAILURE);
		}
	}

    /**
     * TODO
     */
	static function processBuildFiles()
	{
		if (arguments.length < 3)
		{
            Lib.println("The build target is not specified.");
            Lib.println("");
            showUsage();
            Sys.exit(EXIT_FAILURE);
		}

        // Create the output directory if it doesn't exist.
        //

        var target = arguments[1];
        var srcPath =
            if (system == Windows)
                ('${invocationPath}\\.cpp');
            else
                ('${invocationPath}/.cpp');
        var dstPath =
            if (system == Windows)
                ('${invocationPath}\\platforms\\.obj\\${target}');
            else
                ('${invocationPath}/platforms/.obj/${target}');

        var result =
            if (system == Windows)
                Sys.command(('IF NOT EXIST \"${dstPath}\" mkdir \"${dstPath}\"'));
            else
                Sys.command(('[ -d ${dstPath} ] || mkdir -p ${dstPath}'));

        // Copy the source directory for the specified target.
        //

        if (result == 0)
        {
            result =
                if (system == Windows)
                    Sys.command(('xcopy /s /e /h /d /y /q \"${srcPath}\" \"${dstPath}\"'));
                else
                    Sys.command(('rsync -rlpuq ${srcPath}/ ${dstPath}'));
        }

        if (result != 0)
            Sys.exit(EXIT_FAILURE);

        // Modify the build file.
        //

        var buildFile =
            if (system == Windows)
                ('${dstPath}\\Build.xml');
            else
                ('${dstPath}/Build.xml');

        try
        {
            var xml = Xml.parse(File.getContent(buildFile)).firstElement();

            for (element in xml.elementsNamed("set"))
            {
                if (element.get("name") == "HAXE_OUTPUT")
                    element.set("value", "game");
            }

            File.saveContent(buildFile, xml.toString());
        }
        catch (error:Dynamic)
        {
            Sys.println("ERROR: Failed to modify build file..");
            Sys.println("");
            Sys.exit(EXIT_FAILURE);
        }
	}

    /**
     * TODO
     */
    static function copyFile(file, destination)
    {
        var result =
            if (system == Windows)
                Sys.command(('copy /y \"${file}\" \"${destination}\"'));
            else
                Sys.command(('cp -p ${file} ${destination}'));

        return result == 0;
    }

    /**
     * TODO
     */
    static function copyDirectory(source, destination)
    {
        var result =
            if (system == Windows)
                Sys.command(('mkdir \"${destination}\"'));
            else
                Sys.command(('[ ! -d ${destination} ] && mkdir -p ${destination}'));

        if (result != 0)
            return false;

        result =
            if (system == Windows)
                Sys.command(('xcopy /s /e /y \"${source}\" \"${destination}\"'));
            else
                Sys.command(('rsync -rlp  ${source}/ ${destination}'));

        return result == 0;
    }
}
