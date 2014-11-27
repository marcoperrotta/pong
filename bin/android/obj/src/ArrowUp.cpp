#include <hxcpp.h>

#ifndef INCLUDED_ArrowUp
#include <ArrowUp.h>
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

Void ArrowUp_obj::__construct()
{
HX_STACK_FRAME("ArrowUp","new",0x026f5356,"ArrowUp.new","ArrowUp.hx",8,0x1260e8da)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(13)
	this->altt = ::openfl::_v2::Lib_obj::get_current()->get_stage()->get_stageHeight();
	struct _Function_1_1{
		inline static Float Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ArrowUp.hx",12,0x1260e8da)
			{
				HX_STACK_LINE(12)
				int _g = ::openfl::_v2::Lib_obj::get_current()->get_stage()->get_stageHeight();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(12)
				return (Float(_g) / Float((int)2));
			}
			return null();
		}
	};
	HX_STACK_LINE(12)
	this->alt = _Function_1_1::Block();
	HX_STACK_LINE(11)
	this->larg = ::openfl::_v2::Lib_obj::get_current()->get_stage()->get_stageWidth();
	HX_STACK_LINE(17)
	super::__construct();
	HX_STACK_LINE(21)
	this->get_graphics()->beginFill((int)16776960,null());
	HX_STACK_LINE(22)
	this->get_graphics()->drawRect((int)0,(int)0,this->larg,(Float(this->alt) / Float((int)4)));
	HX_STACK_LINE(23)
	this->get_graphics()->endFill();
}
;
	return null();
}

//ArrowUp_obj::~ArrowUp_obj() { }

Dynamic ArrowUp_obj::__CreateEmpty() { return  new ArrowUp_obj; }
hx::ObjectPtr< ArrowUp_obj > ArrowUp_obj::__new()
{  hx::ObjectPtr< ArrowUp_obj > result = new ArrowUp_obj();
	result->__construct();
	return result;}

Dynamic ArrowUp_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ArrowUp_obj > result = new ArrowUp_obj();
	result->__construct();
	return result;}


ArrowUp_obj::ArrowUp_obj()
{
}

Dynamic ArrowUp_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ArrowUp_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
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

void ArrowUp_obj::__GetFields(Array< ::String> &outFields)
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
	{hx::fsInt,(int)offsetof(ArrowUp_obj,larg),HX_CSTRING("larg")},
	{hx::fsFloat,(int)offsetof(ArrowUp_obj,alt),HX_CSTRING("alt")},
	{hx::fsInt,(int)offsetof(ArrowUp_obj,altt),HX_CSTRING("altt")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("larg"),
	HX_CSTRING("alt"),
	HX_CSTRING("altt"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArrowUp_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArrowUp_obj::__mClass,"__mClass");
};

#endif

Class ArrowUp_obj::__mClass;

void ArrowUp_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("ArrowUp"), hx::TCanCast< ArrowUp_obj> ,sStaticFields,sMemberFields,
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

void ArrowUp_obj::__boot()
{
}

