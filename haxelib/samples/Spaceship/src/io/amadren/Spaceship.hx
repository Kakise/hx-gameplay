package io.amadren;

import cpp.Lib;
import org.gameplay3d.*;

/**
 * Crée par Amadren.
 * Sous licence MIT
 * Coyright Amadren 2014
 */
class Spaceship extends Game
{
	

	
    static function make():Spaceship 
    {
        return new Spaceship(Game.constructNativeObject, [ null ]);
    }

    /***************************************************************************
     * MEMBERS                                                                 *
     **************************************************************************/
	
	//var _backgroundSound:AudioSource = AudioSource.create_Str("res/game.audio#bgsound");
	var _font = Font.create("res/airstrip.gpb");
	var _fontColor = Vector4.make_FltX4(0, 0.5, 1, 1);
	
    override function initialize():Void 
    {

		//_backgroundSound.setLooped(true);
		
		_font.start();
		_font.drawText_Str_IntX2_V4_Int_Bool("Click to Play Again", Std.int(getWidth() / 2 - 175), Std.int(getHeight() / 2 - 40), _fontColor, _font.getSize());
		_font.finish();
    }


    override function finalize():Void 
    {

    }


    override function update(elapsedTime:Float):Void 
    {
	
		//_backgroundSound.play();
		
    }


    override function render(elapsedTime:Float):Void 
    {
		
		
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
