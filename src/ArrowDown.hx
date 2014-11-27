package;

import openfl.display.Sprite;
import openfl.Lib;




class ArrowDown extends Sprite
{
	
	var larg = Lib.current.stage.stageWidth;
	var alt = Lib.current.stage.stageHeight / 2;
	var altt = Lib.current.stage.stageHeight;


	public function new() 
	{
		super();
		this.graphics.beginFill(0xffff00);
		this.graphics.drawRect (0,0,larg,alt/4);
		this.graphics.endFill();
	}	
	
}