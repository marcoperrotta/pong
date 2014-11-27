package;

import flash.events.TouchEvent;
import openfl.Assets;
import flash.display.Sprite;
import flash.display.StageScaleMode;
import flash.events.Event;
import flash.Lib;
import openfl._v2.events.MouseEvent;
//import lime.ui.KeyCode;
import openfl._v2.ui.Keyboard;
import openfl.text.TextField;
//import openfl.text.TextFormat;
import openfl.text.TextFormatAlign;
import openfl.events.KeyboardEvent;
import openfl.geom.Point;
import openfl.Lib;
import flash.events.MouseEvent;
import flash.display.Stage;
import flash.display.StageAlign;
import flash.text.TextFormat;
import flash.text.Font;
import flash.display.BitmapData;
import flash.display.Bitmap;

/**
 * ...
 * @author Marco
 */

 

enum GameState {
	Paused;
	Playing;
	Inizio;
}

enum Player {
	Human;
	AI;
}


 
 
class Main extends Sprite 
{
	
	//var bd:BitmapData = Assets.getBitmapData("img/arrowUp.png");
	//var bd2:BitmapData = Assets.getBitmapData("img/arrowDown.png");
	
	
	var larg = Lib.current.stage.stageWidth;
	var alt = Lib.current.stage.stageHeight / 2;
	var altt = Lib.current.stage.stageHeight;
	
	var inited:Bool;
	
	var palla = new Prova();

	 
	public var platform1:Platform;
	public var platform2:Platform;
	private var ball:Ball;

	
	
	private var currentGameState:GameState;
	
	private var scorePlayer:Int;
	private var scoreAI:Int;
	
	private var scoreField:TextField;
	private var messageField:TextField;
	private var test:TextField;
	private var pause:TextField;
	
	
	private var arrowKeyUp:Bool;
	private var arrowKeyDown:Bool;
	private var spaceKey:Bool;
	private var touchDown:Bool;
	private var touchUp:Bool;
	
	public var platformSpeed:Int;
	
	
	private var ballMovement:Point;
	private var ballSpeed:Int;
	
	
	
	private var arrowUp:ArrowUp;
	private var arrowDown:ArrowDown;
	private var bottonPause:BottonPause;
	
	
	
	//private var event:KeyCode;

	/* ENTRY POINT */
	
	function resize(e) 
	{
		if (!inited) init();
		// else (resize or orientation change)
	}
	
	function init() {
		
		
		//var b:Bitmap = new Bitmap(bd);
		//addChild(b);
		//var b2:Bitmap = new Bitmap(bd2);
		//addChild(b2);
		

		this.graphics.lineStyle(1, 0xFF0000);
		this.graphics.beginFill(0xFF0000, 0);
		this.graphics.drawRect(0, 0, larg, alt);
		this.graphics.lineStyle(1, 0xFFFF00);
		this.graphics.beginFill(0xFFFF00, 0);
		this.graphics.drawRect(0, alt+1, larg, alt);
		this.graphics.endFill();
		
		
		if (inited) return;
		inited = true;

		platform1 = new Platform();
		platform1.x = 0;
		platform1.y = alt/2;
		this.addChild(platform1);
		
		platform2 = new Platform();
		platform2.x = larg - larg/50;//480;
		platform2.y = alt/2;
		this.addChild(platform2);

		ball = new Ball();
		ball.x = larg/2;
		ball.y = alt/2;
		this.addChild(ball);
		
		arrowUp = new ArrowUp();
		arrowUp.x = larg - larg / 2;
		arrowUp.y = altt - alt / 2 - alt / 4;
		this.addChild(arrowUp);
		
		arrowDown = new ArrowDown();
		arrowDown.x = larg - larg / 2;
		arrowDown.y = altt - alt / 2 + alt / 4;
		this.addChild(arrowDown);
		
		bottonPause = new BottonPause();
		bottonPause.x = larg / 4;
		bottonPause.y = altt - alt / 2;
		this.addChild(bottonPause);
		
		pause = new TextField();
		addChild(pause);
		pause.x = larg / 4;
		pause.x = altt - alt / 2;
		pause.selectable = false;


		
		var scoreFormat:TextFormat = new TextFormat("Verdana", 24, 0xFF0000, true);
		scoreFormat.align = TextFormatAlign.CENTER;

		scoreField = new TextField();
		addChild(scoreField);
		scoreField.width = larg;
		scoreField.y = alt / 30;
		scoreField.defaultTextFormat = scoreFormat;
		scoreField.selectable = false;
		
		var messageFormat:TextFormat = new TextFormat("Verdana", 18, 0xFF0000, true);
		messageFormat.align = TextFormatAlign.CENTER;

		messageField = new TextField();
		addChild(messageField);
		messageField.width = larg;
		messageField.y = alt + alt/20;
		messageField.defaultTextFormat = messageFormat;
		messageField.selectable = false;

		arrowKeyUp = false;
		arrowKeyDown = false;
		touchDown = false;
		touchUp = false;
		spaceKey = false;
		platformSpeed = 7;
		scorePlayer = 0;
		scoreAI = 0;
		ballSpeed = 10;
		ballMovement = new Point(0, 0);
		setGameState(Inizio);
		
		
		stage.addEventListener(KeyboardEvent.KEY_DOWN, keyDown);
		stage.addEventListener(KeyboardEvent.KEY_UP, keyUp);
		this.addEventListener(Event.ENTER_FRAME, everyFrame);
		arrowDown.addEventListener(TouchEvent.TOUCH_BEGIN, onTouchMoveDown);
		arrowUp.addEventListener(TouchEvent.TOUCH_BEGIN, onTouchMoveUp);
		arrowDown.addEventListener(TouchEvent.TOUCH_END, onTouchEndDown);
		arrowUp.addEventListener(TouchEvent.TOUCH_END, onTouchEndUp);
		bottonPause.addEventListener(TouchEvent.TOUCH_BEGIN, onTouchBeginPause);
		//pause.addEventListener(TouchEvent.TOUCH_BEGIN, onTouchEndPause);
		//stage.addEventListener(MouseEvent.CLICK, leftClick);

	}
	

	
	private function setGameState(state:GameState):Void {
		currentGameState = state;
		updateScore();
		if (state == Paused) {
			messageField.alpha = 1;
			messageField.text = "gioco in pausa";
			spaceKey = false;
		}else if (state == Inizio) {
			messageField.alpha = 1;
			messageField.text = "Press SPACE to start\nUse ARROW KEYS to move your platform";
		}else if (state == Playing){
			messageField.alpha = 1;
			messageField.text = "gioco iniziato";
			platform1.y = alt/2;
			platform2.y = alt/2;
			ball.x = larg / 2;
			ball.y = alt / 2;
			var direction:Int = (Math.random() > .5)?(1):( -1);
			var randomAngle:Float = (Math.random() * Math.PI / 2) - 45;
			ballMovement.x = Math.cos(randomAngle) * ballSpeed;
			ballMovement.y = Math.sin(randomAngle) * ballSpeed;
		}
	}
			

	private function keyDown(event:KeyboardEvent):Void {
		if ((currentGameState == Paused || currentGameState == Inizio) && (event.keyCode == 32)){
			setGameState(Playing);
		}else if (event.keyCode == 38) { // Up
			arrowKeyUp = true;
		}else if (event.keyCode == 40) { // Down
			arrowKeyDown = true;
		}else if (event.keyCode == 32) {
			spaceKey = true;
		}
	}

	private function onTouchMoveDown(e:TouchEvent):Void {
		if ((currentGameState == Paused || currentGameState == Inizio)) {
				setGameState(Playing);
				//touchDown = true;
		}else{
		touchDown = true;
		}
	}
	
	private function onTouchMoveUp(e:TouchEvent):Void {
		if ((currentGameState == Paused || currentGameState == Inizio)) {
			setGameState(Playing);
			//touchUp = true;
		}else{
		touchUp = true;
		}
	}
	
	private function onTouchEndDown(e:TouchEvent):Void {
			touchDown = false;
	}
	
	private function onTouchEndUp(e:TouchEvent):Void {
			touchUp = false;
	}
	
	private function onTouchBeginPause(e:TouchEvent):Void {
			if (currentGameState == Playing){
				setGameState(Paused);
			}else setGameState(Playing);
	}
	
	/*
	private function onTouchMove(e:TouchEvent):Void {
		platform1.y = e.stageY - larg / 2;
		palla.x = e.stageX;
		palla.y = e.stageY;
	}
	*/
	/*
	private function onTouchEnd(e:TouchEvent):Void {
		setGameState(Paused);
		removeChild(palla);
	}
	*/
	/*
	private function leftClick(e:MouseEvent):Void {
		var testo = new TextField();
		var testoFormat:TextFormat = new TextFormat("Roboto", 24, 0xFF0000, true);
		testo.defaultTextFormat = testoFormat;

		addChild(testo);
		testo.text = "hai cliccato qui";
		testo.y = e.stageY - 20;
		testo.x = e.stageX;
	}
	*/

	private function keyUp(event:KeyboardEvent):Void {
		if (event.keyCode == 38) { // Up
			arrowKeyUp = false;
		}else if (event.keyCode == 40) { // Down
			arrowKeyDown = false;
		}
	}
			

	private function everyFrame(event:Event):Void {
		if (currentGameState == Playing) {
			//player platform movement
			if ((arrowKeyUp) || (touchUp)){
				platform1.y -= platformSpeed;
			}
			if ((arrowKeyDown) || (touchDown)){
				platform1.y += platformSpeed;
			}
			if (spaceKey) {
				setGameState(Paused);
			}
			//AI platform movement
			if (ball.x > (larg - larg/2) && ball.y > platform2.y + 70) {	//va giù
				platform2.y += platformSpeed;
			}
			if (ball.x > (larg - larg/2) && ball.y < platform2.y + 30) {	//va su
				platform2.y -= platformSpeed;
			}
			// player platform limits
			if (platform1.y < 0) platform1.y = 0;
			if (platform1.y > alt-(alt/10)) platform1.y = alt-(alt/10);
			// AI platform limits
			if (platform2.y < 0) platform2.y = 0;
			if (platform2.y > alt) platform2.y = alt;
			//ball movement
			ball.x += ballMovement.x;
			ball.y += ballMovement.y;
			// ball platform bounce
			if (ballMovement.x < 0 && ball.x < larg/50+(larg/50) && ball.y >= platform1.y && ball.y <= platform1.y + alt/10) {
				bounceBall();
				ball.x = larg/50;
			}
			if (ballMovement.x > 0 && ball.x > (larg-larg/50-(larg/50)) && ball.y >= platform2.y && ball.y <= platform2.y + alt/10) {
				bounceBall();
				ball.x = larg - larg/50;
			}
			//ball edge bounce
			if (ball.y < larg/50 || ball.y > alt-larg/50) ballMovement.y *= -1;
			//ball goal
			if (ball.x < larg/50) {
				messageField.alpha = 1;
				messageField.text = "WIN!";
				winGame(AI);
			}
			if (ball.x > larg-larg/50) {
				messageField.alpha = 1;
				messageField.text = "LOSE!";
				winGame(Human);
			}
		}
	}
	
	
	private function updateScore():Void {
		scoreField.text = scorePlayer + ":" + scoreAI;
	}
	
		
	private function winGame(player:Player):Void {
	if (player == Human) {
		scorePlayer++;
	} else {
		scoreAI++;
	}
	setGameState(Paused);
}
	
	
	private function bounceBall():Void {
		var direction:Int = (ballMovement.x > 0)?( -1):(1);
		var randomAngle:Float = (Math.random() * Math.PI / 2) - 45;
		ballMovement.x = direction * Math.cos(randomAngle) * ballSpeed;
		ballMovement.y = Math.sin(randomAngle) * ballSpeed;
	}
	
	
	
	
	
	
	
	
	
	
	public function new() 
	{
		super();	
		addEventListener(Event.ADDED_TO_STAGE, added);
	}

	function added(e) 
	{
		removeEventListener(Event.ADDED_TO_STAGE, added);
		stage.addEventListener(Event.RESIZE, resize);
		#if ios
		haxe.Timer.delay(init, 100); // iOS 6
		#else
		init();
		#end 
	}
	
	public static function main() 
	{
		// static entry point
		Lib.current.stage.align = flash.display.StageAlign.TOP_LEFT;
		Lib.current.stage.scaleMode = flash.display.StageScaleMode.NO_SCALE;
		Lib.current.addChild(new Main());
	}
}
