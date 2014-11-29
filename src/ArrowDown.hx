package;

import openfl.display.Sprite;
import openfl.Lib;
import flash.display.BitmapData;
import flash.display.Bitmap;
import openfl.Assets;



class ArrowDown extends Sprite
{
	
	var larg = Lib.current.stage.stageWidth;
	var alt = Lib.current.stage.stageHeight / 2;
	var altt = Lib.current.stage.stageHeight;


	public function new() 
	{
		super();
		
		var arrowDown = new Bitmap(Assets.getBitmapData("assets/img/arrowDown.png"));
		addChild(arrowDown);
		arrowDown.x = larg / 2 + larg / 8;
		arrowDown.y = altt - alt / 8 - alt / 3;
		arrowDown.height = alt / 3;
		arrowDown.width = larg / 3;
		//this.graphics.beginFill(0xffff00);
		//this.graphics.drawRect (0,0,larg,alt/4);
		//this.graphics.endFill();
	}	
	
}