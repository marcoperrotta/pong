package;

import openfl.display.Sprite;
import openfl.Lib;
import openfl.text.TextField;
import flash.text.Font;
import openfl.text.TextFormat;
import openfl.Assets;
import openfl.text.TextFormatAlign;
import flash.display.Bitmap;


class BottonPause extends Sprite
{
	
	var larg = Lib.current.stage.stageWidth;
	var alt = Lib.current.stage.stageHeight / 2;
	var altt = Lib.current.stage.stageHeight;
	var text:TextField;
	var font = Assets.getFont("assets/font/Roboto-Thin.ttf");

	public function new() 
	{
		super();
		
		/*
		var raggio = alt / 4;
		this.graphics.beginFill(0xffff00);
		this.graphics.drawCircle(0, 0, raggio);
		this.graphics.endFill();
		var messageFormat:TextFormat = new TextFormat(font.fontName, raggio/3, 0xFF0000);
		text = new TextField();
		text.defaultTextFormat = messageFormat;
		addChild(text);
		text.text = "PAUSA";
		text.y = -alt / 8;
		text.x = -raggio + 1 / 4 * raggio;
		text.width = raggio*2 - raggio/4;
		//text.height = alt / 4;
		messageFormat.align = TextFormatAlign.CENTER;
		text.autoSize = CENTER;
		*/
		
		var pause = new Bitmap(Assets.getBitmapData("assets/img/pause.png"));
		addChild(pause);
		pause.x = larg / 16;
		pause.y = alt + alt/4;
		pause.height = alt / 2;
		pause.width = alt / 2;
	}	
	
}