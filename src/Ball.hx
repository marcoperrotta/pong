package;

import openfl.display.Sprite;
import openfl.Lib;


class Ball extends Sprite
{
	var larg = Lib.current.stage.stageWidth;
	var alt = Lib.current.stage.stageHeight;

	public function new() 
	{
		super();
		this.graphics.beginFill(0xffffff);
		this.graphics.drawCircle(0, 0, larg/50);
		this.graphics.endFill();
	}
	
}