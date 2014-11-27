package;

import openfl.display.Sprite;
import openfl.Lib;



class BottonPause extends Sprite
{
	
	var larg = Lib.current.stage.stageWidth;
	var alt = Lib.current.stage.stageHeight / 2;
	var altt = Lib.current.stage.stageHeight;


	public function new() 
	{
		super();
		this.graphics.beginFill(0xffff00);
		this.graphics.drawCircle(0, 0, alt/4);
		this.graphics.endFill();
	}	
	
}