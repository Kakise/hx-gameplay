package tk.amadren;

import cpp.Lib;

import org.gameplay3d.*;

/**
 * Crée par Amadren.
 * Sous licence MIT
 * Coyright Amadren 2014
 */
class Spaceship extends Game
{
	var _font:Font;
	var _x = 175;
	var _y = 40;
	
    static function make():Spaceship 
    {
        return new Spaceship(Game.constructNativeObject, [ null ]);
    }

    /***************************************************************************
     * MEMBERS                                                                 *
     **************************************************************************/

    override function initialize():Void 
    {
		
		//Initialisation de la font
		var _font = Font.create("res/arial40.gpb");

    }


    override function finalize():Void 
    {
        // TODO:
        //
    }


    override function update(elapsedTime:Float):Void 
    {
        // TODO:
        //
    }


    override function render(elapsedTime:Float):Void 
    {
		
		//Render du texte de base ("The Base" comme on dit en anglais :p)
		_font.start();
		_font.drawText_Str_IntX2_V4_Int_Bool("Click to Play Again", 25, 60, Vector4.one(), _font.getSize());
		_font.finish();
		
    }


    override public function keyEvent(evt:Int, key:Int):Void 
    {

    }


    override public function touchEvent(evt:Int, x:Int, y:Int, contactIndex:Int):Void 
    {
        // TODO:
        //
    }


    override public function mouseEvent(evt:Int, x:Int, y:Int, wheelDelta:Int):Bool 
    {
        // TODO:
        //

        return false;
    }
	
    /***************************************************************************
     * ENTRY POINT                                                             *
     **************************************************************************/

	static function main():Void 
	{

        Platform.create(Spaceship.make()).enterMessagePump();
    }
}
