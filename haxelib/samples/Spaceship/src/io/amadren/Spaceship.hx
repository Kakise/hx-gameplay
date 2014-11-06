package io.amadren;

import cpp.Lib;
import org.gameplay3d.*;
import org.gameplay3d.util.Handle;

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
	

    
	override function initialize():Void 
    {
		
		var _backgroundSound:AudioSource = AudioSource.create_Str("res/game.audio#bgsound");
		_backgroundSound.play();
		
		var _splash = ScreenDisplayer.make();
		var test:Handle->Void = null;
		var test2 = Handle.wrap(null);
		_splash.run(test, test2, 1000);

    }
	

    override function finalize():Void 
    {
		
    }


    override function update(elapsedTime:Float):Void 
    {
	
		
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
		
		var batch = SpriteBatch.create_Str_Eff_Int("res/logo_powered_white.png");
		batch.start();
		batch.draw_FltX9_V4_Bool(this.getWidth() * 0.5, this.getHeight() * 0.5, 0.0, 512.0, 512.0, 0.0, 1.0, 1.0, 0.0, Vector4.one(), true);
		batch.finish();
		//clear_Int_V4_Flt_Int(Game_ClearFlags.CLEAR_COLOR_DEPTH, Vector4(0, 0, 0, 1), 1.0, 0);
		
	}
	
    /***************************************************************************
     * ENTRY POINT                                                             *
     **************************************************************************/

	
	
	static function main():Void 
	{

        Platform.create(Spaceship.make()).enterMessagePump();
    }
}
