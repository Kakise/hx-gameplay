package ;

import cpp.Lib;

import org.gameplay3d.*;

/**
 * Crée par Amadren.
 * Sous licence MIT
 * Coyright Amadren 2014
 */
class HelloWorld extends Game
{
    static function make():HelloWorld 
    {
        return new HelloWorld(Game.constructNativeObject, [ null ]);
    }

    /***************************************************************************
     * MEMBERS                                                                 *
     **************************************************************************/
    var font:Font;
    var fontColor:Vector4;

    /**
     * @inheritDoc
     */
    override function initialize():Void 
    {
		
		changeText();
		
    }

    /**
     * @inheritDoc
     */
    override function finalize():Void 
    {
        // TODO:
        //
    }

    /**
     * @inheritDoc
     */
    override function update(elapsedTime:Float):Void 
    {
        // TODO:
        //
    }

    /**
     * @inheritDoc
     */
    override function render(elapsedTime:Float):Void 
    {
        // TODO:
        //
    }

    /**
     * @inheritDoc
     */

    override public function keyEvent(evt:Int, key:Int):Void 
    {
        //if (evt == Keyboard_KeyEvent.KEY_PRESS)
        //{
            //switch (key)
            //{
            //case Keyboard_Key.KEY_RETURN: changeText();
            //}
        //}
    }

    /**
     * @inheritDoc
     */
    override public function touchEvent(evt:Int, x:Int, y:Int, contactIndex:Int):Void 
    {
        // TODO:
        //
    }

    /**
     * @inheritDoc
     */
    override public function mouseEvent(evt:Int, x:Int, y:Int, wheelDelta:Int):Bool 
    {
        // TODO:
        //

        return false;
    }
	
	function changeText():Void
	{        
		font = Font.create("res/arial40.gpb");
        fontColor = Vector4.make_FltX4(0, 0.5, 1, 1);
        font.start();
        font.drawText_Str_IntX2_V4_Int_Bool(Std.string("Hello World!"), 1, 1, fontColor, font.getSize());
        font.finish();
	}
    /***************************************************************************
     * ENTRY POINT                                                             *
     **************************************************************************/

	static function main():Void 
	{
		//, 1, 1, "#101010", 12, false
        Platform.create(HelloWorld.make()).enterMessagePump();
    }
}
