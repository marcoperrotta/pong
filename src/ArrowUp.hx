package;

import openfl.display.Sprite;
import openfl.Lib;
import openfl.display.Graphics;
import openfl.Vector;
import flash.display.Bitmap;
import openfl.Assets;

class ArrowUp extends Sprite
{
	
	var larg = Lib.current.stage.stageWidth;
	var alt = Lib.current.stage.stageHeight / 2;
	var altt = Lib.current.stage.stageHeight;

	public function new() 
	{
		super();
		//this.graphics.beginFill(0xffff00);
		//this.graphics.drawTriangles(vertices:Vector( { x:10, y:20 }, { x:30, y:40 } , { x:50, y:60 } ));
		//this.graphics.endFill();
		
		
		//this.graphics.beginFill(0xffff00);
		//this.graphics.drawRect(0, 0, larg, alt / 4);
		//this.graphics.endFill();
		
		
		var arrowUp = new Bitmap(Assets.getBitmapData("assets/img/arrowUp.png"));
		addChild(arrowUp);
		arrowUp.x = larg / 2 + larg / 8;
		arrowUp.y = alt + alt / 8;
		arrowUp.height = alt / 3;
		arrowUp.width = larg / 3;
	}
	
}