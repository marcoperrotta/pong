package;

import openfl.display.Sprite;
import openfl.Lib;
import flash.display.Graphics;
import openfl.Vector;

class ArrowUp extends Sprite
{
	
	var larg = Lib.current.stage.stageWidth;
	var alt = Lib.current.stage.stageHeight / 2;
	var altt = Lib.current.stage.stageHeight;

	public function new() 
	{
		super();
		//this.graphics.beginFill(0xffff00);
		//this.graphics.drawTriangles(Vector( { x:200, y:100 }, { x:150, y:50 }, { x:100, y:100 } ));
		//this.graphics.endFill();
		this.graphics.beginFill(0xffff00);
		this.graphics.drawRect(0, 0, larg, alt / 4);
		this.graphics.endFill();
	}
	
}