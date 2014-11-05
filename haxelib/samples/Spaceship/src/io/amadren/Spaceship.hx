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
	var _screenDisplayer = ScreenDisplayer.make();
	
    override function initialize():Void 
    {
		var _screenDisplayer = ScreenDisplayer.make();
		//_backgroundSound.setLooped(true);
		_screenDisplayer.run(Handle.new(), drawsplash(), 1000);
		
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
		var x = Std.int(getWidth() / 2 - 175);
		var y = Std.int(getHeight() / 2 - 40);
		
		var _font = Font.create("res/airstrip.gpb");
		var _fontColor = Vector4.make_FltX4(0, 0.5, 1, 1);
		
		_font.start();
		_font.drawText_Str_IntX2_V4_Int_Bool("Click to Play Again", x, y, _fontColor, _font.getSize());
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

	public function drawsplash():Void
	{
		
		var batch:SpriteBatch = SpriteBatch.create_Str_Eff_Int("res/logo_powered_white.png");
		batch.start();
		batch.draw_FltX9_V4_Bool(getWidth() * 0.5, this.getHeight() * 0.5, 0.0, 512.0, 512.0, 0.0, 1.0, 1.0, 0.0, Vector4.one(), true);
		batch.finish();
		
	}
	
    /***************************************************************************
     * ENTRY POINT                                                             *
     **************************************************************************/

	
	
	static function main():Void 
	{

        Platform.create(Spaceship.make()).enterMessagePump();
    }
}
