package;

import openfl.display.Sprite;

class Prova extends Sprite
{

	public function new() 
	{
		super();
		this.graphics.beginFill(0xffffff);
		this.graphics.drawCircle(0, 0, 50);
		this.graphics.endFill();
	}
	
}