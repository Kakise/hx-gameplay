package org.gameplay3d;

import org.gameplay3d.util.Handle;
import org.gameplay3d.util.NativeInterface;
import org.gameplay3d.util.OutParameter;

using org.gameplay3d.intern.NativeBinding;
using org.gameplay3d.GameplayObject;

// DECL: class FileSystem : public GameplayObject
class FileSystem extends GameplayObject
{
    /***************************************************************************
     * MEMBERS                                                                 *
     **************************************************************************/

    // DECL: static void createFileFromAsset(const char* path);
    public static function createFileFromAsset(path:String):Void
    {
        hx_FileSystem_static_createFileFromAsset(path);
    }

    // DECL: static bool fileExists(const char* filePath);
    public static function fileExists(filePath:String):Bool
    {
        return hx_FileSystem_static_fileExists(filePath);
    }

    // DECL: static std::string getExtension(const char* path);
    public static function getExtension(path:String):String
    {
        return hx_FileSystem_static_getExtension(path);
    }

    // DECL: static const char* getResourcePath();
    public static function getResourcePath():String
    {
        return hx_FileSystem_static_getResourcePath();
    }

    // DECL: static bool isAbsolutePath(const char* filePath);
    public static function isAbsolutePath(filePath:String):Bool
    {
        return hx_FileSystem_static_isAbsolutePath(filePath);
    }

    // DECL: static bool listFiles(const char* dirPath, std::vector<std::string>& files);
    public static function listFiles(dirPath:String, files:OutParameter<Array<String>>):Bool
    {
        var _files = { value: null };
        var result = hx_FileSystem_static_listFiles(dirPath, _files);
        if (result)
            files.value = _files.value;
        return result;
    }

    // DECL: static void loadResourceAliases(Properties* properties);
    public static function loadResourceAliases_Prop(properties:Properties):Void
    {
        hx_FileSystem_static_loadResourceAliases_Prop(properties.native());
    }

    // DECL: static void loadResourceAliases(const char* aliasFilePath);
    public static function loadResourceAliases_Str(aliasFilePath:String):Void
    {
        hx_FileSystem_static_loadResourceAliases_Str(aliasFilePath);
    }

    // DECL: static Stream* open(const char* path, size_t mode = READ);
    public static function open(path:String, mode:Int = FileSystem_StreamMode.READ):Stream
    {
        return Stream.wrap(hx_FileSystem_static_open(path, mode));
    }

    // DECL: static FILE* openFile(const char* filePath, const char* mode);
    public static function openFile(filePath:String, mode:String):Handle
    {
        return Handle.wrap(hx_FileSystem_static_openFile(filePath, mode));
    }

    // DECL: static char* readAll(const char* filePath, int* fileSize = NULL);
    public static function readAll(filePath:String, fileSize:OutParameter<Int> = null):String
    {
        return hx_FileSystem_static_readAll(filePath, fileSize);
    }

    // DECL: static const char* resolvePath(const char* path);
    public static function resolvePath(path:String):String
    {
        return hx_FileSystem_static_resolvePath(path);
    }

    // DECL: static void setResourcePath(const char* path);
    public static function setResourcePath(path:String):Void
    {
        hx_FileSystem_static_setResourcePath(path);
    }

    /***************************************************************************
     * NATIVE INTERFACE                                                        *
     **************************************************************************/

    static var hx_FileSystem_static_createFileFromAsset = NativeInterface.loadMember(FileSystem, "static_createFileFromAsset", 1);
    static var hx_FileSystem_static_fileExists = NativeInterface.loadMember(FileSystem, "static_fileExists", 1);
    static var hx_FileSystem_static_getExtension = NativeInterface.loadMember(FileSystem, "static_getExtension", 1);
    static var hx_FileSystem_static_getResourcePath = NativeInterface.loadMember(FileSystem, "static_getResourcePath", 0);
    static var hx_FileSystem_static_isAbsolutePath = NativeInterface.loadMember(FileSystem, "static_isAbsolutePath", 1);
    static var hx_FileSystem_static_listFiles = NativeInterface.loadMember(FileSystem, "static_listFiles", 2);
    static var hx_FileSystem_static_loadResourceAliases_Prop = NativeInterface.loadMember(FileSystem, "static_loadResourceAliases_Prop", 1);
    static var hx_FileSystem_static_loadResourceAliases_Str = NativeInterface.loadMember(FileSystem, "static_loadResourceAliases_Str", 1);
    static var hx_FileSystem_static_open = NativeInterface.loadMember(FileSystem, "static_open", 2);
    static var hx_FileSystem_static_openFile = NativeInterface.loadMember(FileSystem, "static_openFile", 2);
    static var hx_FileSystem_static_readAll = NativeInterface.loadMember(FileSystem, "static_readAll", 2);
    static var hx_FileSystem_static_resolvePath = NativeInterface.loadMember(FileSystem, "static_resolvePath", 1);
    static var hx_FileSystem_static_setResourcePath = NativeInterface.loadMember(FileSystem, "static_setResourcePath", 1);
}

// END
