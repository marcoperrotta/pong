package;

import openfl.display.Sprite;
import openfl.Lib;

class Platform extends Sprite
{
	
	var larg = Lib.current.stage.stageWidth;
	var alt = Lib.current.stage.stageHeight /2;

	public function new() 
	{
		super();
		this.graphics.beginFill(0xffffff);
		this.graphics.drawRect(0, 0, larg/50, alt/10);
		this.graphics.endFill();
	}
	
}