#include <hxcpp.h>

#ifndef INCLUDED_ArrowDown
#include <ArrowDown.h>
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

Void ArrowDown_obj::__construct()
{
HX_STACK_FRAME("ArrowDown","new",0x1128691d,"ArrowDown.new","ArrowDown.hx",9,0xfdc7e8f3)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14)
	this->altt = ::openfl::_v2::Lib_obj::get_current()->get_stage()->get_stageHeight();
	struct _Function_1_1{
		inline static Float Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ArrowDown.hx",13,0xfdc7e8f3)
			{
				HX_STACK_LINE(13)
				int _g = ::openfl::_v2::Lib_obj::get_current()->get_stage()->get_stageHeight();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(13)
				return (Float(_g) / Float((int)2));
			}
			return null();
		}
	};
	HX_STACK_LINE(13)
	this->alt = _Function_1_1::Block();
	HX_STACK_LINE(12)
	this->larg = ::openfl::_v2::Lib_obj::get_current()->get_stage()->get_stageWidth();
	HX_STACK_LINE(19)
	super::__construct();
	HX_STACK_LINE(20)
	this->get_graphics()->beginFill((int)16776960,null());
	HX_STACK_LINE(21)
	this->get_graphics()->drawRect((int)0,(int)0,this->larg,(Float(this->alt) / Float((int)4)));
	HX_STACK_LINE(22)
	this->get_graphics()->endFill();
}
;
	return null();
}

//ArrowDown_obj::~ArrowDown_obj() { }

Dynamic ArrowDown_obj::__CreateEmpty() { return  new ArrowDown_obj; }
hx::ObjectPtr< ArrowDown_obj > ArrowDown_obj::__new()
{  hx::ObjectPtr< ArrowDown_obj > result = new ArrowDown_obj();
	result->__construct();
	return result;}

Dynamic ArrowDown_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ArrowDown_obj > result = new ArrowDown_obj();
	result->__construct();
	return result;}


ArrowDown_obj::ArrowDown_obj()
{
}

Dynamic ArrowDown_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"alt") ) { return alt; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"larg") ) { return larg; }
		if (HX_FIELD_EQ(inName,"altt") ) { return altt; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ArrowDown_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"alt") ) { alt=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"larg") ) { larg=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"altt") ) { altt=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ArrowDown_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("larg"));
	outFields->push(HX_CSTRING("alt"));
	outFields->push(HX_CSTRING("altt"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ArrowDown_obj,larg),HX_CSTRING("larg")},
	{hx::fsFloat,(int)offsetof(ArrowDown_obj,alt),HX_CSTRING("alt")},
	{hx::fsInt,(int)offsetof(ArrowDown_obj,altt),HX_CSTRING("altt")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("larg"),
	HX_CSTRING("alt"),
	HX_CSTRING("altt"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArrowDown_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArrowDown_obj::__mClass,"__mClass");
};

#endif

Class ArrowDown_obj::__mClass;

void ArrowDown_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("ArrowDown"), hx::TCanCast< ArrowDown_obj> ,sStaticFields,sMemberFields,
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

void ArrowDown_obj::__boot()
{
}

