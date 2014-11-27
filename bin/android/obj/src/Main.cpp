#include <hxcpp.h>

#ifndef INCLUDED_ArrowDown
#include <ArrowDown.h>
#endif
#ifndef INCLUDED_ArrowUp
#include <ArrowUp.h>
#endif
#ifndef INCLUDED_Ball
#include <Ball.h>
#endif
#ifndef INCLUDED_BottonPause
#include <BottonPause.h>
#endif
#ifndef INCLUDED_GameState
#include <GameState.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Platform
#include <Platform.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_Prova
#include <Prova.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__v2_Lib
#include <openfl/_v2/Lib.h>
#endif
#ifndef INCLUDED_openfl__v2_display_CapsStyle
#include <openfl/_v2/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObjectContainer
#include <openfl/_v2/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Graphics
#include <openfl/_v2/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_JointStyle
#include <openfl/_v2/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl__v2_display_LineScaleMode
#include <openfl/_v2/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_openfl__v2_display_MovieClip
#include <openfl/_v2/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Stage
#include <openfl/_v2/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__v2_events_Event
#include <openfl/_v2/events/Event.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_KeyboardEvent
#include <openfl/_v2/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_openfl__v2_events_MouseEvent
#include <openfl/_v2/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl__v2_events_TouchEvent
#include <openfl/_v2/events/TouchEvent.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Point
#include <openfl/_v2/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextField
#include <openfl/_v2/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextFormat
#include <openfl/_v2/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextFormatAlign
#include <openfl/_v2/text/TextFormatAlign.h>
#endif
#ifndef INCLUDED_openfl_display_StageAlign
#include <openfl/display/StageAlign.h>
#endif
#ifndef INCLUDED_openfl_display_StageScaleMode
#include <openfl/display/StageScaleMode.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",47,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(60)
	this->palla = ::Prova_obj::__new();
	HX_STACK_LINE(56)
	this->altt = ::openfl::_v2::Lib_obj::get_current()->get_stage()->get_stageHeight();
	struct _Function_1_1{
		inline static Float Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",55,0x087e5c05)
			{
				HX_STACK_LINE(55)
				int _g = ::openfl::_v2::Lib_obj::get_current()->get_stage()->get_stageHeight();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(55)
				return (Float(_g) / Float((int)2));
			}
			return null();
		}
	};
	HX_STACK_LINE(55)
	this->alt = _Function_1_1::Block();
	HX_STACK_LINE(54)
	this->larg = ::openfl::_v2::Lib_obj::get_current()->get_stage()->get_stageWidth();
	HX_STACK_LINE(416)
	super::__construct();
	HX_STACK_LINE(417)
	this->addEventListener(::openfl::_v2::events::Event_obj::ADDED_TO_STAGE,this->added_dyn(),null(),null(),null());
}
;
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Void Main_obj::resize( Dynamic e){
{
		HX_STACK_FRAME("Main","resize",0x39257969,"Main.resize","Main.hx",106,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(106)
		if ((!(this->inited))){
			HX_STACK_LINE(106)
			this->init();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,resize,(void))

Void Main_obj::init( ){
{
		HX_STACK_FRAME("Main","init",0xea732345,"Main.init","Main.hx",110,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(119)
		this->get_graphics()->lineStyle((int)1,(int)16711680,null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(120)
		this->get_graphics()->beginFill((int)16711680,(int)0);
		HX_STACK_LINE(121)
		this->get_graphics()->drawRect((int)0,(int)0,this->larg,this->alt);
		HX_STACK_LINE(122)
		this->get_graphics()->lineStyle((int)1,(int)16776960,null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(123)
		this->get_graphics()->beginFill((int)16776960,(int)0);
		HX_STACK_LINE(124)
		this->get_graphics()->drawRect((int)0,(this->alt + (int)1),this->larg,this->alt);
		HX_STACK_LINE(125)
		this->get_graphics()->endFill();
		HX_STACK_LINE(128)
		if ((this->inited)){
			HX_STACK_LINE(128)
			return null();
		}
		HX_STACK_LINE(129)
		this->inited = true;
		HX_STACK_LINE(131)
		::Platform _g = ::Platform_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(131)
		this->platform1 = _g;
		HX_STACK_LINE(132)
		this->platform1->set_x((int)0);
		HX_STACK_LINE(133)
		this->platform1->set_y((Float(this->alt) / Float((int)2)));
		HX_STACK_LINE(134)
		this->addChild(this->platform1);
		HX_STACK_LINE(136)
		::Platform _g1 = ::Platform_obj::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(136)
		this->platform2 = _g1;
		HX_STACK_LINE(137)
		this->platform2->set_x((this->larg - (Float(this->larg) / Float((int)50))));
		HX_STACK_LINE(138)
		this->platform2->set_y((Float(this->alt) / Float((int)2)));
		HX_STACK_LINE(139)
		this->addChild(this->platform2);
		HX_STACK_LINE(141)
		::Ball _g2 = ::Ball_obj::__new();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(141)
		this->ball = _g2;
		HX_STACK_LINE(142)
		this->ball->set_x((Float(this->larg) / Float((int)2)));
		HX_STACK_LINE(143)
		this->ball->set_y((Float(this->alt) / Float((int)2)));
		HX_STACK_LINE(144)
		this->addChild(this->ball);
		HX_STACK_LINE(146)
		::ArrowUp _g3 = ::ArrowUp_obj::__new();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(146)
		this->arrowUp = _g3;
		HX_STACK_LINE(147)
		this->arrowUp->set_x((this->larg - (Float(this->larg) / Float((int)2))));
		HX_STACK_LINE(148)
		this->arrowUp->set_y(((this->altt - (Float(this->alt) / Float((int)2))) - (Float(this->alt) / Float((int)4))));
		HX_STACK_LINE(149)
		this->addChild(this->arrowUp);
		HX_STACK_LINE(151)
		::ArrowDown _g4 = ::ArrowDown_obj::__new();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(151)
		this->arrowDown = _g4;
		HX_STACK_LINE(152)
		this->arrowDown->set_x((this->larg - (Float(this->larg) / Float((int)2))));
		HX_STACK_LINE(153)
		this->arrowDown->set_y(((this->altt - (Float(this->alt) / Float((int)2))) + (Float(this->alt) / Float((int)4))));
		HX_STACK_LINE(154)
		this->addChild(this->arrowDown);
		HX_STACK_LINE(156)
		::BottonPause _g5 = ::BottonPause_obj::__new();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(156)
		this->bottonPause = _g5;
		HX_STACK_LINE(157)
		this->bottonPause->set_x((Float(this->larg) / Float((int)4)));
		HX_STACK_LINE(158)
		this->bottonPause->set_y((this->altt - (Float(this->alt) / Float((int)2))));
		HX_STACK_LINE(159)
		this->addChild(this->bottonPause);
		HX_STACK_LINE(161)
		::openfl::_v2::text::TextField _g6 = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(161)
		this->pause = _g6;
		HX_STACK_LINE(162)
		this->addChild(this->pause);
		HX_STACK_LINE(163)
		this->pause->set_x((Float(this->larg) / Float((int)4)));
		HX_STACK_LINE(164)
		this->pause->set_x((this->altt - (Float(this->alt) / Float((int)2))));
		HX_STACK_LINE(165)
		this->pause->set_selectable(false);
		HX_STACK_LINE(169)
		::openfl::_v2::text::TextFormat scoreFormat = ::openfl::_v2::text::TextFormat_obj::__new(HX_CSTRING("Verdana"),(int)24,(int)16711680,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(scoreFormat,"scoreFormat");
		HX_STACK_LINE(170)
		scoreFormat->align = ::openfl::_v2::text::TextFormatAlign_obj::CENTER;
		HX_STACK_LINE(172)
		::openfl::_v2::text::TextField _g7 = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(172)
		this->scoreField = _g7;
		HX_STACK_LINE(173)
		this->addChild(this->scoreField);
		HX_STACK_LINE(174)
		this->scoreField->set_width(this->larg);
		HX_STACK_LINE(175)
		this->scoreField->set_y((Float(this->alt) / Float((int)30)));
		HX_STACK_LINE(176)
		this->scoreField->set_defaultTextFormat(scoreFormat);
		HX_STACK_LINE(177)
		this->scoreField->set_selectable(false);
		HX_STACK_LINE(179)
		::openfl::_v2::text::TextFormat messageFormat = ::openfl::_v2::text::TextFormat_obj::__new(HX_CSTRING("Verdana"),(int)18,(int)16711680,true,null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(messageFormat,"messageFormat");
		HX_STACK_LINE(180)
		messageFormat->align = ::openfl::_v2::text::TextFormatAlign_obj::CENTER;
		HX_STACK_LINE(182)
		::openfl::_v2::text::TextField _g8 = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(182)
		this->messageField = _g8;
		HX_STACK_LINE(183)
		this->addChild(this->messageField);
		HX_STACK_LINE(184)
		this->messageField->set_width(this->larg);
		HX_STACK_LINE(185)
		this->messageField->set_y((this->alt + (Float(this->alt) / Float((int)20))));
		HX_STACK_LINE(186)
		this->messageField->set_defaultTextFormat(messageFormat);
		HX_STACK_LINE(187)
		this->messageField->set_selectable(false);
		HX_STACK_LINE(189)
		this->arrowKeyUp = false;
		HX_STACK_LINE(190)
		this->arrowKeyDown = false;
		HX_STACK_LINE(191)
		this->touchDown = false;
		HX_STACK_LINE(192)
		this->touchUp = false;
		HX_STACK_LINE(193)
		this->spaceKey = false;
		HX_STACK_LINE(194)
		this->platformSpeed = (int)7;
		HX_STACK_LINE(195)
		this->scorePlayer = (int)0;
		HX_STACK_LINE(196)
		this->scoreAI = (int)0;
		HX_STACK_LINE(197)
		this->ballSpeed = (int)10;
		HX_STACK_LINE(198)
		::openfl::_v2::geom::Point _g9 = ::openfl::_v2::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(198)
		this->ballMovement = _g9;
		HX_STACK_LINE(199)
		this->setGameState(::GameState_obj::Inizio);
		HX_STACK_LINE(202)
		this->get_stage()->addEventListener(::openfl::_v2::events::KeyboardEvent_obj::KEY_DOWN,this->keyDown_dyn(),null(),null(),null());
		HX_STACK_LINE(203)
		this->get_stage()->addEventListener(::openfl::_v2::events::KeyboardEvent_obj::KEY_UP,this->keyUp_dyn(),null(),null(),null());
		HX_STACK_LINE(204)
		this->addEventListener(::openfl::_v2::events::Event_obj::ENTER_FRAME,this->everyFrame_dyn(),null(),null(),null());
		HX_STACK_LINE(205)
		this->arrowDown->addEventListener(::openfl::_v2::events::TouchEvent_obj::TOUCH_BEGIN,this->onTouchMoveDown_dyn(),null(),null(),null());
		HX_STACK_LINE(206)
		this->arrowUp->addEventListener(::openfl::_v2::events::TouchEvent_obj::TOUCH_BEGIN,this->onTouchMoveUp_dyn(),null(),null(),null());
		HX_STACK_LINE(207)
		this->arrowDown->addEventListener(::openfl::_v2::events::TouchEvent_obj::TOUCH_END,this->onTouchEndDown_dyn(),null(),null(),null());
		HX_STACK_LINE(208)
		this->arrowUp->addEventListener(::openfl::_v2::events::TouchEvent_obj::TOUCH_END,this->onTouchEndUp_dyn(),null(),null(),null());
		HX_STACK_LINE(209)
		this->bottonPause->addEventListener(::openfl::_v2::events::TouchEvent_obj::TOUCH_BEGIN,this->onTouchBeginPause_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,init,(void))

Void Main_obj::setGameState( ::GameState state){
{
		HX_STACK_FRAME("Main","setGameState",0x0450c9f2,"Main.setGameState","Main.hx",217,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(state,"state")
		HX_STACK_LINE(218)
		this->currentGameState = state;
		HX_STACK_LINE(219)
		this->updateScore();
		HX_STACK_LINE(220)
		if (((state == ::GameState_obj::Paused))){
			HX_STACK_LINE(221)
			this->messageField->set_alpha((int)1);
			HX_STACK_LINE(222)
			this->messageField->set_text(HX_CSTRING("gioco in pausa"));
			HX_STACK_LINE(223)
			this->spaceKey = false;
		}
		else{
			HX_STACK_LINE(224)
			if (((state == ::GameState_obj::Inizio))){
				HX_STACK_LINE(225)
				this->platform1->set_y((Float(this->alt) / Float((int)2)));
				HX_STACK_LINE(226)
				this->platform2->set_y((Float(this->alt) / Float((int)2)));
				HX_STACK_LINE(227)
				this->ball->set_x((Float(this->larg) / Float((int)2)));
				HX_STACK_LINE(228)
				this->ball->set_y((Float(this->alt) / Float((int)2)));
				HX_STACK_LINE(229)
				Float _g = ::Math_obj::random();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(229)
				int direction;		HX_STACK_VAR(direction,"direction");
				HX_STACK_LINE(229)
				if (((_g > .5))){
					HX_STACK_LINE(229)
					direction = (int)1;
				}
				else{
					HX_STACK_LINE(229)
					direction = (int)-1;
				}
				HX_STACK_LINE(230)
				Float _g1 = ::Math_obj::random();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(230)
				Float _g2 = (_g1 * ::Math_obj::PI);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(230)
				Float _g3 = (Float(_g2) / Float((int)2));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(230)
				Float randomAngle = (_g3 - (int)45);		HX_STACK_VAR(randomAngle,"randomAngle");
				HX_STACK_LINE(231)
				Float _g4 = ::Math_obj::cos(randomAngle);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(231)
				Float _g5 = (_g4 * this->ballSpeed);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(231)
				this->ballMovement->x = _g5;
				HX_STACK_LINE(232)
				Float _g6 = ::Math_obj::sin(randomAngle);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(232)
				Float _g7 = (_g6 * this->ballSpeed);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(232)
				this->ballMovement->y = _g7;
				HX_STACK_LINE(233)
				this->messageField->set_alpha((int)1);
				HX_STACK_LINE(234)
				this->messageField->set_text(HX_CSTRING("Press SPACE to start\nUse ARROW KEYS to move your platform"));
			}
			else{
				HX_STACK_LINE(235)
				if (((state == ::GameState_obj::Playing))){
					HX_STACK_LINE(236)
					this->messageField->set_alpha((int)1);
					HX_STACK_LINE(237)
					this->messageField->set_text(HX_CSTRING("gioco iniziato"));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,setGameState,(void))

Void Main_obj::keyDown( ::openfl::_v2::events::KeyboardEvent event){
{
		HX_STACK_FRAME("Main","keyDown",0x0078d08c,"Main.keyDown","Main.hx",251,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(251)
		if (((bool(((bool((this->currentGameState == ::GameState_obj::Paused)) || bool((this->currentGameState == ::GameState_obj::Inizio))))) && bool((event->keyCode == (int)32))))){
			HX_STACK_LINE(252)
			this->setGameState(::GameState_obj::Playing);
		}
		else{
			HX_STACK_LINE(253)
			if (((event->keyCode == (int)38))){
				HX_STACK_LINE(254)
				this->arrowKeyUp = true;
			}
			else{
				HX_STACK_LINE(255)
				if (((event->keyCode == (int)40))){
					HX_STACK_LINE(256)
					this->arrowKeyDown = true;
				}
				else{
					HX_STACK_LINE(257)
					if (((event->keyCode == (int)32))){
						HX_STACK_LINE(258)
						this->spaceKey = true;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,keyDown,(void))

Void Main_obj::onTouchMoveDown( ::openfl::_v2::events::TouchEvent e){
{
		HX_STACK_FRAME("Main","onTouchMoveDown",0xa8bdc03e,"Main.onTouchMoveDown","Main.hx",263,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(263)
		if (((bool((this->currentGameState == ::GameState_obj::Paused)) || bool((this->currentGameState == ::GameState_obj::Inizio))))){
			HX_STACK_LINE(264)
			this->setGameState(::GameState_obj::Playing);
		}
		else{
			HX_STACK_LINE(267)
			this->touchDown = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,onTouchMoveDown,(void))

Void Main_obj::onTouchMoveUp( ::openfl::_v2::events::TouchEvent e){
{
		HX_STACK_FRAME("Main","onTouchMoveUp",0x6d433f37,"Main.onTouchMoveUp","Main.hx",272,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(272)
		if (((bool((this->currentGameState == ::GameState_obj::Paused)) || bool((this->currentGameState == ::GameState_obj::Inizio))))){
			HX_STACK_LINE(273)
			this->setGameState(::GameState_obj::Playing);
		}
		else{
			HX_STACK_LINE(276)
			this->touchUp = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,onTouchMoveUp,(void))

Void Main_obj::onTouchEndDown( ::openfl::_v2::events::TouchEvent e){
{
		HX_STACK_FRAME("Main","onTouchEndDown",0x079a4412,"Main.onTouchEndDown","Main.hx",281,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(281)
		this->touchDown = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,onTouchEndDown,(void))

Void Main_obj::onTouchEndUp( ::openfl::_v2::events::TouchEvent e){
{
		HX_STACK_FRAME("Main","onTouchEndUp",0x6929660b,"Main.onTouchEndUp","Main.hx",285,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(285)
		this->touchUp = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,onTouchEndUp,(void))

Void Main_obj::onTouchBeginPause( ::openfl::_v2::events::TouchEvent e){
{
		HX_STACK_FRAME("Main","onTouchBeginPause",0x52a8e4f8,"Main.onTouchBeginPause","Main.hx",289,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(289)
		if (((this->currentGameState == ::GameState_obj::Playing))){
			HX_STACK_LINE(290)
			this->setGameState(::GameState_obj::Paused);
		}
		else{
			HX_STACK_LINE(291)
			this->setGameState(::GameState_obj::Playing);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,onTouchBeginPause,(void))

Void Main_obj::keyUp( ::openfl::_v2::events::KeyboardEvent event){
{
		HX_STACK_FRAME("Main","keyUp",0x5b320005,"Main.keyUp","Main.hx",321,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(321)
		if (((event->keyCode == (int)38))){
			HX_STACK_LINE(322)
			this->arrowKeyUp = false;
		}
		else{
			HX_STACK_LINE(323)
			if (((event->keyCode == (int)40))){
				HX_STACK_LINE(324)
				this->arrowKeyDown = false;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,keyUp,(void))

Void Main_obj::everyFrame( ::openfl::_v2::events::Event event){
{
		HX_STACK_FRAME("Main","everyFrame",0xc084a887,"Main.everyFrame","Main.hx",330,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(330)
		if (((this->currentGameState == ::GameState_obj::Playing))){
			HX_STACK_LINE(332)
			if (((bool(this->arrowKeyUp) || bool(this->touchUp)))){
				HX_STACK_LINE(333)
				::Platform _g = this->platform1;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(333)
				Float _g1 = _g->get_y();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(333)
				Float _g11 = (_g1 - this->platformSpeed);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(333)
				_g->set_y(_g11);
			}
			HX_STACK_LINE(335)
			if (((bool(this->arrowKeyDown) || bool(this->touchDown)))){
				HX_STACK_LINE(336)
				::Platform _g = this->platform1;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(336)
				Float _g2 = _g->get_y();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(336)
				Float _g3 = (_g2 + this->platformSpeed);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(336)
				_g->set_y(_g3);
			}
			HX_STACK_LINE(338)
			if ((this->spaceKey)){
				HX_STACK_LINE(339)
				this->setGameState(::GameState_obj::Paused);
			}
			HX_STACK_LINE(342)
			Float _g4 = this->ball->get_x();		HX_STACK_VAR(_g4,"_g4");
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",342,0x087e5c05)
					{
						HX_STACK_LINE(342)
						Float _g5 = __this->ball->get_y();		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(342)
						Float _g6 = __this->platform2->get_y();		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(342)
						return (_g5 > _g6);
					}
					return null();
				}
			};
			HX_STACK_LINE(342)
			if (((  (((_g4 > (this->larg - (Float(this->larg) / Float((int)2)))))) ? bool(_Function_2_1::Block(this)) : bool(false) ))){
				HX_STACK_LINE(343)
				::Platform _g = this->platform2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(343)
				Float _g7 = _g->get_y();		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(343)
				Float _g8 = (_g7 + this->platformSpeed);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(343)
				_g->set_y(_g8);
			}
			HX_STACK_LINE(345)
			Float _g9 = this->ball->get_x();		HX_STACK_VAR(_g9,"_g9");
			struct _Function_2_2{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",345,0x087e5c05)
					{
						HX_STACK_LINE(345)
						Float _g10 = __this->ball->get_y();		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(345)
						Float _g11 = __this->platform2->get_y();		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(345)
						Float _g12 = (_g11 + (Float(__this->alt) / Float((int)10)));		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(345)
						return (_g10 < _g12);
					}
					return null();
				}
			};
			HX_STACK_LINE(345)
			if (((  (((_g9 > (this->larg - (Float(this->larg) / Float((int)2)))))) ? bool(_Function_2_2::Block(this)) : bool(false) ))){
				HX_STACK_LINE(346)
				::Platform _g = this->platform2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(346)
				Float _g13 = _g->get_y();		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(346)
				Float _g14 = (_g13 - this->platformSpeed);		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(346)
				_g->set_y(_g14);
			}
			HX_STACK_LINE(349)
			Float _g15 = this->platform1->get_y();		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(349)
			if (((_g15 < (int)0))){
				HX_STACK_LINE(349)
				this->platform1->set_y((int)0);
			}
			HX_STACK_LINE(350)
			Float _g16 = this->platform1->get_y();		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(350)
			if (((_g16 > (this->alt - (Float(this->alt) / Float((int)10)))))){
				HX_STACK_LINE(350)
				this->platform1->set_y((this->alt - (Float(this->alt) / Float((int)10))));
			}
			HX_STACK_LINE(352)
			Float _g17 = this->platform2->get_y();		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(352)
			if (((_g17 < (int)0))){
				HX_STACK_LINE(352)
				this->platform2->set_y((int)0);
			}
			HX_STACK_LINE(353)
			Float _g18 = this->platform2->get_y();		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(353)
			if (((_g18 > this->alt))){
				HX_STACK_LINE(353)
				this->platform2->set_y(this->alt);
			}
			HX_STACK_LINE(355)
			{
				HX_STACK_LINE(355)
				::Ball _g = this->ball;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(355)
				Float _g19 = _g->get_x();		HX_STACK_VAR(_g19,"_g19");
				HX_STACK_LINE(355)
				Float _g20 = (_g19 + this->ballMovement->x);		HX_STACK_VAR(_g20,"_g20");
				HX_STACK_LINE(355)
				_g->set_x(_g20);
			}
			HX_STACK_LINE(356)
			{
				HX_STACK_LINE(356)
				::Ball _g = this->ball;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(356)
				Float _g21 = _g->get_y();		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(356)
				Float _g22 = (_g21 + this->ballMovement->y);		HX_STACK_VAR(_g22,"_g22");
				HX_STACK_LINE(356)
				_g->set_y(_g22);
			}
			struct _Function_2_3{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",358,0x087e5c05)
					{
						HX_STACK_LINE(358)
						Float _g23 = __this->ball->get_x();		HX_STACK_VAR(_g23,"_g23");
						HX_STACK_LINE(358)
						return (_g23 < ((Float(__this->larg) / Float((int)50)) + (Float(__this->larg) / Float((int)50))));
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",358,0x087e5c05)
					{
						HX_STACK_LINE(358)
						Float _g24 = __this->ball->get_y();		HX_STACK_VAR(_g24,"_g24");
						HX_STACK_LINE(358)
						Float _g25 = __this->platform1->get_y();		HX_STACK_VAR(_g25,"_g25");
						HX_STACK_LINE(358)
						return (_g24 >= _g25);
					}
					return null();
				}
			};
			struct _Function_2_5{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",358,0x087e5c05)
					{
						HX_STACK_LINE(358)
						Float _g26 = __this->ball->get_y();		HX_STACK_VAR(_g26,"_g26");
						HX_STACK_LINE(358)
						Float _g27 = __this->platform1->get_y();		HX_STACK_VAR(_g27,"_g27");
						HX_STACK_LINE(358)
						Float _g28 = (_g27 + (Float(__this->alt) / Float((int)10)));		HX_STACK_VAR(_g28,"_g28");
						HX_STACK_LINE(358)
						return (_g26 <= _g28);
					}
					return null();
				}
			};
			HX_STACK_LINE(358)
			if (((  (((  (((  (((this->ballMovement->x < (int)0))) ? bool(_Function_2_3::Block(this)) : bool(false) ))) ? bool(_Function_2_4::Block(this)) : bool(false) ))) ? bool(_Function_2_5::Block(this)) : bool(false) ))){
				HX_STACK_LINE(359)
				this->bounceBall();
				HX_STACK_LINE(360)
				this->ball->set_x((Float(this->larg) / Float((int)50)));
			}
			struct _Function_2_6{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",362,0x087e5c05)
					{
						HX_STACK_LINE(362)
						Float _g29 = __this->ball->get_x();		HX_STACK_VAR(_g29,"_g29");
						HX_STACK_LINE(362)
						return (_g29 > ((__this->larg - (Float(__this->larg) / Float((int)50))) - (Float(__this->larg) / Float((int)50))));
					}
					return null();
				}
			};
			struct _Function_2_7{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",362,0x087e5c05)
					{
						HX_STACK_LINE(362)
						Float _g30 = __this->ball->get_y();		HX_STACK_VAR(_g30,"_g30");
						HX_STACK_LINE(362)
						Float _g31 = __this->platform2->get_y();		HX_STACK_VAR(_g31,"_g31");
						HX_STACK_LINE(362)
						return (_g30 >= _g31);
					}
					return null();
				}
			};
			struct _Function_2_8{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",362,0x087e5c05)
					{
						HX_STACK_LINE(362)
						Float _g32 = __this->ball->get_y();		HX_STACK_VAR(_g32,"_g32");
						HX_STACK_LINE(362)
						Float _g33 = __this->platform2->get_y();		HX_STACK_VAR(_g33,"_g33");
						HX_STACK_LINE(362)
						Float _g34 = (_g33 + (Float(__this->alt) / Float((int)10)));		HX_STACK_VAR(_g34,"_g34");
						HX_STACK_LINE(362)
						return (_g32 <= _g34);
					}
					return null();
				}
			};
			HX_STACK_LINE(362)
			if (((  (((  (((  (((this->ballMovement->x > (int)0))) ? bool(_Function_2_6::Block(this)) : bool(false) ))) ? bool(_Function_2_7::Block(this)) : bool(false) ))) ? bool(_Function_2_8::Block(this)) : bool(false) ))){
				HX_STACK_LINE(363)
				this->bounceBall();
				HX_STACK_LINE(364)
				this->ball->set_x((this->larg - (Float(this->larg) / Float((int)50))));
			}
			HX_STACK_LINE(367)
			Float _g35 = this->ball->get_y();		HX_STACK_VAR(_g35,"_g35");
			struct _Function_2_9{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",367,0x087e5c05)
					{
						HX_STACK_LINE(367)
						Float _g36 = __this->ball->get_y();		HX_STACK_VAR(_g36,"_g36");
						HX_STACK_LINE(367)
						return (_g36 > (__this->alt - (Float(__this->larg) / Float((int)50))));
					}
					return null();
				}
			};
			HX_STACK_LINE(367)
			if (((  ((!(((_g35 < (Float(this->larg) / Float((int)50))))))) ? bool(_Function_2_9::Block(this)) : bool(true) ))){
				HX_STACK_LINE(367)
				hx::MultEq(this->ballMovement->y,(int)-1);
			}
			HX_STACK_LINE(369)
			Float _g37 = this->ball->get_x();		HX_STACK_VAR(_g37,"_g37");
			HX_STACK_LINE(369)
			if (((_g37 < (Float(this->larg) / Float((int)50))))){
				HX_STACK_LINE(370)
				this->messageField->set_alpha((int)1);
				HX_STACK_LINE(371)
				this->messageField->set_text(HX_CSTRING("WIN!"));
				HX_STACK_LINE(372)
				this->winGame(::Player_obj::AI);
			}
			HX_STACK_LINE(374)
			Float _g38 = this->ball->get_x();		HX_STACK_VAR(_g38,"_g38");
			HX_STACK_LINE(374)
			if (((_g38 > (this->larg - (Float(this->larg) / Float((int)50)))))){
				HX_STACK_LINE(375)
				this->messageField->set_alpha((int)1);
				HX_STACK_LINE(376)
				this->messageField->set_text(HX_CSTRING("LOSE!"));
				HX_STACK_LINE(377)
				this->winGame(::Player_obj::Human);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,everyFrame,(void))

Void Main_obj::updateScore( ){
{
		HX_STACK_FRAME("Main","updateScore",0x5d7894f4,"Main.updateScore","Main.hx",384,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(384)
		this->scoreField->set_text(((this->scorePlayer + HX_CSTRING(":")) + this->scoreAI));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,updateScore,(void))

Void Main_obj::winGame( ::Player player){
{
		HX_STACK_FRAME("Main","winGame",0x39706d19,"Main.winGame","Main.hx",388,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(player,"player")
		HX_STACK_LINE(389)
		if (((player == ::Player_obj::Human))){
			HX_STACK_LINE(390)
			(this->scorePlayer)++;
		}
		else{
			HX_STACK_LINE(392)
			(this->scoreAI)++;
		}
		HX_STACK_LINE(394)
		this->setGameState(::GameState_obj::Inizio);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,winGame,(void))

Void Main_obj::bounceBall( ){
{
		HX_STACK_FRAME("Main","bounceBall",0x95b4759c,"Main.bounceBall","Main.hx",398,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(399)
		int direction;		HX_STACK_VAR(direction,"direction");
		HX_STACK_LINE(399)
		if (((this->ballMovement->x > (int)0))){
			HX_STACK_LINE(399)
			direction = (int)-1;
		}
		else{
			HX_STACK_LINE(399)
			direction = (int)1;
		}
		HX_STACK_LINE(400)
		Float _g = ::Math_obj::random();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(400)
		Float _g1 = (_g * ::Math_obj::PI);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(400)
		Float _g2 = (Float(_g1) / Float((int)2));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(400)
		Float randomAngle = (_g2 - (int)45);		HX_STACK_VAR(randomAngle,"randomAngle");
		HX_STACK_LINE(401)
		Float _g3 = ::Math_obj::cos(randomAngle);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(401)
		Float _g4 = (direction * _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(401)
		Float _g5 = (_g4 * this->ballSpeed);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(401)
		this->ballMovement->x = _g5;
		HX_STACK_LINE(402)
		Float _g6 = ::Math_obj::sin(randomAngle);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(402)
		Float _g7 = (_g6 * this->ballSpeed);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(402)
		this->ballMovement->y = _g7;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,bounceBall,(void))

Void Main_obj::added( Dynamic e){
{
		HX_STACK_FRAME("Main","added",0x98771aeb,"Main.added","Main.hx",421,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(422)
		this->removeEventListener(::openfl::_v2::events::Event_obj::ADDED_TO_STAGE,this->added_dyn(),null());
		HX_STACK_LINE(423)
		this->get_stage()->addEventListener(::openfl::_v2::events::Event_obj::RESIZE,this->resize_dyn(),null(),null(),null());
		HX_STACK_LINE(427)
		this->init();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,added,(void))

Void Main_obj::main( ){
{
		HX_STACK_FRAME("Main","main",0xed0e206e,"Main.main","Main.hx",432,0x087e5c05)
		HX_STACK_LINE(434)
		::openfl::_v2::Lib_obj::get_current()->get_stage()->set_align(::openfl::display::StageAlign_obj::TOP_LEFT);
		HX_STACK_LINE(435)
		::openfl::_v2::Lib_obj::get_current()->get_stage()->set_scaleMode(::openfl::display::StageScaleMode_obj::NO_SCALE);
		HX_STACK_LINE(436)
		::Main _g = ::Main_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(436)
		::openfl::_v2::Lib_obj::get_current()->addChild(_g);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,main,(void))


Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(larg,"larg");
	HX_MARK_MEMBER_NAME(alt,"alt");
	HX_MARK_MEMBER_NAME(altt,"altt");
	HX_MARK_MEMBER_NAME(inited,"inited");
	HX_MARK_MEMBER_NAME(palla,"palla");
	HX_MARK_MEMBER_NAME(platform1,"platform1");
	HX_MARK_MEMBER_NAME(platform2,"platform2");
	HX_MARK_MEMBER_NAME(ball,"ball");
	HX_MARK_MEMBER_NAME(currentGameState,"currentGameState");
	HX_MARK_MEMBER_NAME(scorePlayer,"scorePlayer");
	HX_MARK_MEMBER_NAME(scoreAI,"scoreAI");
	HX_MARK_MEMBER_NAME(scoreField,"scoreField");
	HX_MARK_MEMBER_NAME(messageField,"messageField");
	HX_MARK_MEMBER_NAME(test,"test");
	HX_MARK_MEMBER_NAME(pause,"pause");
	HX_MARK_MEMBER_NAME(arrowKeyUp,"arrowKeyUp");
	HX_MARK_MEMBER_NAME(arrowKeyDown,"arrowKeyDown");
	HX_MARK_MEMBER_NAME(spaceKey,"spaceKey");
	HX_MARK_MEMBER_NAME(touchDown,"touchDown");
	HX_MARK_MEMBER_NAME(touchUp,"touchUp");
	HX_MARK_MEMBER_NAME(platformSpeed,"platformSpeed");
	HX_MARK_MEMBER_NAME(ballMovement,"ballMovement");
	HX_MARK_MEMBER_NAME(ballSpeed,"ballSpeed");
	HX_MARK_MEMBER_NAME(arrowUp,"arrowUp");
	HX_MARK_MEMBER_NAME(arrowDown,"arrowDown");
	HX_MARK_MEMBER_NAME(bottonPause,"bottonPause");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(larg,"larg");
	HX_VISIT_MEMBER_NAME(alt,"alt");
	HX_VISIT_MEMBER_NAME(altt,"altt");
	HX_VISIT_MEMBER_NAME(inited,"inited");
	HX_VISIT_MEMBER_NAME(palla,"palla");
	HX_VISIT_MEMBER_NAME(platform1,"platform1");
	HX_VISIT_MEMBER_NAME(platform2,"platform2");
	HX_VISIT_MEMBER_NAME(ball,"ball");
	HX_VISIT_MEMBER_NAME(currentGameState,"currentGameState");
	HX_VISIT_MEMBER_NAME(scorePlayer,"scorePlayer");
	HX_VISIT_MEMBER_NAME(scoreAI,"scoreAI");
	HX_VISIT_MEMBER_NAME(scoreField,"scoreField");
	HX_VISIT_MEMBER_NAME(messageField,"messageField");
	HX_VISIT_MEMBER_NAME(test,"test");
	HX_VISIT_MEMBER_NAME(pause,"pause");
	HX_VISIT_MEMBER_NAME(arrowKeyUp,"arrowKeyUp");
	HX_VISIT_MEMBER_NAME(arrowKeyDown,"arrowKeyDown");
	HX_VISIT_MEMBER_NAME(spaceKey,"spaceKey");
	HX_VISIT_MEMBER_NAME(touchDown,"touchDown");
	HX_VISIT_MEMBER_NAME(touchUp,"touchUp");
	HX_VISIT_MEMBER_NAME(platformSpeed,"platformSpeed");
	HX_VISIT_MEMBER_NAME(ballMovement,"ballMovement");
	HX_VISIT_MEMBER_NAME(ballSpeed,"ballSpeed");
	HX_VISIT_MEMBER_NAME(arrowUp,"arrowUp");
	HX_VISIT_MEMBER_NAME(arrowDown,"arrowDown");
	HX_VISIT_MEMBER_NAME(bottonPause,"bottonPause");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"alt") ) { return alt; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
		if (HX_FIELD_EQ(inName,"larg") ) { return larg; }
		if (HX_FIELD_EQ(inName,"altt") ) { return altt; }
		if (HX_FIELD_EQ(inName,"ball") ) { return ball; }
		if (HX_FIELD_EQ(inName,"test") ) { return test; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"palla") ) { return palla; }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause; }
		if (HX_FIELD_EQ(inName,"keyUp") ) { return keyUp_dyn(); }
		if (HX_FIELD_EQ(inName,"added") ) { return added_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"inited") ) { return inited; }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scoreAI") ) { return scoreAI; }
		if (HX_FIELD_EQ(inName,"touchUp") ) { return touchUp; }
		if (HX_FIELD_EQ(inName,"arrowUp") ) { return arrowUp; }
		if (HX_FIELD_EQ(inName,"keyDown") ) { return keyDown_dyn(); }
		if (HX_FIELD_EQ(inName,"winGame") ) { return winGame_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"spaceKey") ) { return spaceKey; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"platform1") ) { return platform1; }
		if (HX_FIELD_EQ(inName,"platform2") ) { return platform2; }
		if (HX_FIELD_EQ(inName,"touchDown") ) { return touchDown; }
		if (HX_FIELD_EQ(inName,"ballSpeed") ) { return ballSpeed; }
		if (HX_FIELD_EQ(inName,"arrowDown") ) { return arrowDown; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scoreField") ) { return scoreField; }
		if (HX_FIELD_EQ(inName,"arrowKeyUp") ) { return arrowKeyUp; }
		if (HX_FIELD_EQ(inName,"everyFrame") ) { return everyFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"bounceBall") ) { return bounceBall_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scorePlayer") ) { return scorePlayer; }
		if (HX_FIELD_EQ(inName,"bottonPause") ) { return bottonPause; }
		if (HX_FIELD_EQ(inName,"updateScore") ) { return updateScore_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"messageField") ) { return messageField; }
		if (HX_FIELD_EQ(inName,"arrowKeyDown") ) { return arrowKeyDown; }
		if (HX_FIELD_EQ(inName,"ballMovement") ) { return ballMovement; }
		if (HX_FIELD_EQ(inName,"setGameState") ) { return setGameState_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchEndUp") ) { return onTouchEndUp_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"platformSpeed") ) { return platformSpeed; }
		if (HX_FIELD_EQ(inName,"onTouchMoveUp") ) { return onTouchMoveUp_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onTouchEndDown") ) { return onTouchEndDown_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onTouchMoveDown") ) { return onTouchMoveDown_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"currentGameState") ) { return currentGameState; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onTouchBeginPause") ) { return onTouchBeginPause_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"alt") ) { alt=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"larg") ) { larg=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"altt") ) { altt=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ball") ) { ball=inValue.Cast< ::Ball >(); return inValue; }
		if (HX_FIELD_EQ(inName,"test") ) { test=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"palla") ) { palla=inValue.Cast< ::Prova >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pause") ) { pause=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"inited") ) { inited=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scoreAI") ) { scoreAI=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"touchUp") ) { touchUp=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"arrowUp") ) { arrowUp=inValue.Cast< ::ArrowUp >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"spaceKey") ) { spaceKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"platform1") ) { platform1=inValue.Cast< ::Platform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"platform2") ) { platform2=inValue.Cast< ::Platform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"touchDown") ) { touchDown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ballSpeed") ) { ballSpeed=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"arrowDown") ) { arrowDown=inValue.Cast< ::ArrowDown >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scoreField") ) { scoreField=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"arrowKeyUp") ) { arrowKeyUp=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scorePlayer") ) { scorePlayer=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bottonPause") ) { bottonPause=inValue.Cast< ::BottonPause >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"messageField") ) { messageField=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"arrowKeyDown") ) { arrowKeyDown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ballMovement") ) { ballMovement=inValue.Cast< ::openfl::_v2::geom::Point >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"platformSpeed") ) { platformSpeed=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"currentGameState") ) { currentGameState=inValue.Cast< ::GameState >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("larg"));
	outFields->push(HX_CSTRING("alt"));
	outFields->push(HX_CSTRING("altt"));
	outFields->push(HX_CSTRING("inited"));
	outFields->push(HX_CSTRING("palla"));
	outFields->push(HX_CSTRING("platform1"));
	outFields->push(HX_CSTRING("platform2"));
	outFields->push(HX_CSTRING("ball"));
	outFields->push(HX_CSTRING("currentGameState"));
	outFields->push(HX_CSTRING("scorePlayer"));
	outFields->push(HX_CSTRING("scoreAI"));
	outFields->push(HX_CSTRING("scoreField"));
	outFields->push(HX_CSTRING("messageField"));
	outFields->push(HX_CSTRING("test"));
	outFields->push(HX_CSTRING("pause"));
	outFields->push(HX_CSTRING("arrowKeyUp"));
	outFields->push(HX_CSTRING("arrowKeyDown"));
	outFields->push(HX_CSTRING("spaceKey"));
	outFields->push(HX_CSTRING("touchDown"));
	outFields->push(HX_CSTRING("touchUp"));
	outFields->push(HX_CSTRING("platformSpeed"));
	outFields->push(HX_CSTRING("ballMovement"));
	outFields->push(HX_CSTRING("ballSpeed"));
	outFields->push(HX_CSTRING("arrowUp"));
	outFields->push(HX_CSTRING("arrowDown"));
	outFields->push(HX_CSTRING("bottonPause"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("main"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Main_obj,larg),HX_CSTRING("larg")},
	{hx::fsFloat,(int)offsetof(Main_obj,alt),HX_CSTRING("alt")},
	{hx::fsInt,(int)offsetof(Main_obj,altt),HX_CSTRING("altt")},
	{hx::fsBool,(int)offsetof(Main_obj,inited),HX_CSTRING("inited")},
	{hx::fsObject /*::Prova*/ ,(int)offsetof(Main_obj,palla),HX_CSTRING("palla")},
	{hx::fsObject /*::Platform*/ ,(int)offsetof(Main_obj,platform1),HX_CSTRING("platform1")},
	{hx::fsObject /*::Platform*/ ,(int)offsetof(Main_obj,platform2),HX_CSTRING("platform2")},
	{hx::fsObject /*::Ball*/ ,(int)offsetof(Main_obj,ball),HX_CSTRING("ball")},
	{hx::fsObject /*::GameState*/ ,(int)offsetof(Main_obj,currentGameState),HX_CSTRING("currentGameState")},
	{hx::fsInt,(int)offsetof(Main_obj,scorePlayer),HX_CSTRING("scorePlayer")},
	{hx::fsInt,(int)offsetof(Main_obj,scoreAI),HX_CSTRING("scoreAI")},
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(Main_obj,scoreField),HX_CSTRING("scoreField")},
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(Main_obj,messageField),HX_CSTRING("messageField")},
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(Main_obj,test),HX_CSTRING("test")},
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(Main_obj,pause),HX_CSTRING("pause")},
	{hx::fsBool,(int)offsetof(Main_obj,arrowKeyUp),HX_CSTRING("arrowKeyUp")},
	{hx::fsBool,(int)offsetof(Main_obj,arrowKeyDown),HX_CSTRING("arrowKeyDown")},
	{hx::fsBool,(int)offsetof(Main_obj,spaceKey),HX_CSTRING("spaceKey")},
	{hx::fsBool,(int)offsetof(Main_obj,touchDown),HX_CSTRING("touchDown")},
	{hx::fsBool,(int)offsetof(Main_obj,touchUp),HX_CSTRING("touchUp")},
	{hx::fsInt,(int)offsetof(Main_obj,platformSpeed),HX_CSTRING("platformSpeed")},
	{hx::fsObject /*::openfl::_v2::geom::Point*/ ,(int)offsetof(Main_obj,ballMovement),HX_CSTRING("ballMovement")},
	{hx::fsInt,(int)offsetof(Main_obj,ballSpeed),HX_CSTRING("ballSpeed")},
	{hx::fsObject /*::ArrowUp*/ ,(int)offsetof(Main_obj,arrowUp),HX_CSTRING("arrowUp")},
	{hx::fsObject /*::ArrowDown*/ ,(int)offsetof(Main_obj,arrowDown),HX_CSTRING("arrowDown")},
	{hx::fsObject /*::BottonPause*/ ,(int)offsetof(Main_obj,bottonPause),HX_CSTRING("bottonPause")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("larg"),
	HX_CSTRING("alt"),
	HX_CSTRING("altt"),
	HX_CSTRING("inited"),
	HX_CSTRING("palla"),
	HX_CSTRING("platform1"),
	HX_CSTRING("platform2"),
	HX_CSTRING("ball"),
	HX_CSTRING("currentGameState"),
	HX_CSTRING("scorePlayer"),
	HX_CSTRING("scoreAI"),
	HX_CSTRING("scoreField"),
	HX_CSTRING("messageField"),
	HX_CSTRING("test"),
	HX_CSTRING("pause"),
	HX_CSTRING("arrowKeyUp"),
	HX_CSTRING("arrowKeyDown"),
	HX_CSTRING("spaceKey"),
	HX_CSTRING("touchDown"),
	HX_CSTRING("touchUp"),
	HX_CSTRING("platformSpeed"),
	HX_CSTRING("ballMovement"),
	HX_CSTRING("ballSpeed"),
	HX_CSTRING("arrowUp"),
	HX_CSTRING("arrowDown"),
	HX_CSTRING("bottonPause"),
	HX_CSTRING("resize"),
	HX_CSTRING("init"),
	HX_CSTRING("setGameState"),
	HX_CSTRING("keyDown"),
	HX_CSTRING("onTouchMoveDown"),
	HX_CSTRING("onTouchMoveUp"),
	HX_CSTRING("onTouchEndDown"),
	HX_CSTRING("onTouchEndUp"),
	HX_CSTRING("onTouchBeginPause"),
	HX_CSTRING("keyUp"),
	HX_CSTRING("everyFrame"),
	HX_CSTRING("updateScore"),
	HX_CSTRING("winGame"),
	HX_CSTRING("bounceBall"),
	HX_CSTRING("added"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#endif

Class Main_obj::__mClass;

void Main_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Main"), hx::TCanCast< Main_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void Main_obj::__boot()
{
}

