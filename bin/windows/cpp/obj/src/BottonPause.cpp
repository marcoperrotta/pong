#include <hxcpp.h>

#ifndef INCLUDED_BottonPause
#include <BottonPause.h>
#endif
#ifndef INCLUDED_openfl__v2_Assets
#include <openfl/_v2/Assets.h>
#endif
#ifndef INCLUDED_openfl__v2_Lib
#include <openfl/_v2/Lib.h>
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
#ifndef INCLUDED_openfl__v2_display_MovieClip
#include <openfl/_v2/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Stage
#include <openfl/_v2/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_text_Font
#include <openfl/_v2/text/Font.h>
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

Void BottonPause_obj::__construct()
{
HX_STACK_FRAME("BottonPause","new",0x9288ee3c,"BottonPause.new","BottonPause.hx",13,0x85d2acb4)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(20)
	this->font = ::openfl::_v2::Assets_obj::getFont(HX_CSTRING("assets/font/Roboto-Thin.ttf"),null());
	HX_STACK_LINE(18)
	this->altt = ::openfl::_v2::Lib_obj::get_current()->get_stage()->get_stageHeight();
	struct _Function_1_1{
		inline static Float Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","BottonPause.hx",17,0x85d2acb4)
			{
				HX_STACK_LINE(17)
				int _g = ::openfl::_v2::Lib_obj::get_current()->get_stage()->get_stageHeight();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(17)
				return (Float(_g) / Float((int)2));
			}
			return null();
		}
	};
	HX_STACK_LINE(17)
	this->alt = _Function_1_1::Block();
	HX_STACK_LINE(16)
	this->larg = ::openfl::_v2::Lib_obj::get_current()->get_stage()->get_stageWidth();
	HX_STACK_LINE(24)
	super::__construct();
	HX_STACK_LINE(25)
	Float raggio = (Float(this->alt) / Float((int)4));		HX_STACK_VAR(raggio,"raggio");
	HX_STACK_LINE(26)
	this->get_graphics()->beginFill((int)16776960,null());
	HX_STACK_LINE(27)
	this->get_graphics()->drawCircle((int)0,(int)0,raggio);
	HX_STACK_LINE(28)
	this->get_graphics()->endFill();
	HX_STACK_LINE(29)
	::openfl::_v2::text::TextFormat messageFormat = ::openfl::_v2::text::TextFormat_obj::__new(this->font->fontName,(Float(raggio) / Float((int)3)),(int)16711680,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(messageFormat,"messageFormat");
	HX_STACK_LINE(30)
	::openfl::_v2::text::TextField _g = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(30)
	this->text = _g;
	HX_STACK_LINE(31)
	this->text->set_defaultTextFormat(messageFormat);
	HX_STACK_LINE(32)
	this->addChild(this->text);
	HX_STACK_LINE(33)
	this->text->set_text(HX_CSTRING("PAUSA"));
	HX_STACK_LINE(34)
	this->text->set_y((Float(-(this->alt)) / Float((int)8)));
	HX_STACK_LINE(35)
	this->text->set_x((-(raggio) + (0.25 * raggio)));
	HX_STACK_LINE(36)
	this->text->set_width(((raggio * (int)2) - (Float(raggio) / Float((int)4))));
	HX_STACK_LINE(38)
	messageFormat->align = ::openfl::_v2::text::TextFormatAlign_obj::CENTER;
}
;
	return null();
}

//BottonPause_obj::~BottonPause_obj() { }

Dynamic BottonPause_obj::__CreateEmpty() { return  new BottonPause_obj; }
hx::ObjectPtr< BottonPause_obj > BottonPause_obj::__new()
{  hx::ObjectPtr< BottonPause_obj > result = new BottonPause_obj();
	result->__construct();
	return result;}

Dynamic BottonPause_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BottonPause_obj > result = new BottonPause_obj();
	result->__construct();
	return result;}


BottonPause_obj::BottonPause_obj()
{
}

void BottonPause_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BottonPause);
	HX_MARK_MEMBER_NAME(larg,"larg");
	HX_MARK_MEMBER_NAME(alt,"alt");
	HX_MARK_MEMBER_NAME(altt,"altt");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(font,"font");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BottonPause_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(larg,"larg");
	HX_VISIT_MEMBER_NAME(alt,"alt");
	HX_VISIT_MEMBER_NAME(altt,"altt");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(font,"font");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic BottonPause_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"alt") ) { return alt; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"larg") ) { return larg; }
		if (HX_FIELD_EQ(inName,"altt") ) { return altt; }
		if (HX_FIELD_EQ(inName,"text") ) { return text; }
		if (HX_FIELD_EQ(inName,"font") ) { return font; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BottonPause_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"alt") ) { alt=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"larg") ) { larg=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"altt") ) { altt=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"font") ) { font=inValue.Cast< ::openfl::_v2::text::Font >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BottonPause_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("larg"));
	outFields->push(HX_CSTRING("alt"));
	outFields->push(HX_CSTRING("altt"));
	outFields->push(HX_CSTRING("text"));
	outFields->push(HX_CSTRING("font"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(BottonPause_obj,larg),HX_CSTRING("larg")},
	{hx::fsFloat,(int)offsetof(BottonPause_obj,alt),HX_CSTRING("alt")},
	{hx::fsInt,(int)offsetof(BottonPause_obj,altt),HX_CSTRING("altt")},
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(BottonPause_obj,text),HX_CSTRING("text")},
	{hx::fsObject /*::openfl::_v2::text::Font*/ ,(int)offsetof(BottonPause_obj,font),HX_CSTRING("font")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("larg"),
	HX_CSTRING("alt"),
	HX_CSTRING("altt"),
	HX_CSTRING("text"),
	HX_CSTRING("font"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BottonPause_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BottonPause_obj::__mClass,"__mClass");
};

#endif

Class BottonPause_obj::__mClass;

void BottonPause_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("BottonPause"), hx::TCanCast< BottonPause_obj> ,sStaticFields,sMemberFields,
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

void BottonPause_obj::__boot()
{
}

