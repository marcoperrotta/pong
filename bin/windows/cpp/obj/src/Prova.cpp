#include <hxcpp.h>

#ifndef INCLUDED_Prova
#include <Prova.h>
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
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif

Void Prova_obj::__construct()
{
HX_STACK_FRAME("Prova","new",0x926c996a,"Prova.new","Prova.hx",9,0xf7790146)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(10)
	super::__construct();
	HX_STACK_LINE(11)
	this->get_graphics()->beginFill((int)16777215,null());
	HX_STACK_LINE(12)
	this->get_graphics()->drawCircle((int)0,(int)0,(int)50);
	HX_STACK_LINE(13)
	this->get_graphics()->endFill();
}
;
	return null();
}

//Prova_obj::~Prova_obj() { }

Dynamic Prova_obj::__CreateEmpty() { return  new Prova_obj; }
hx::ObjectPtr< Prova_obj > Prova_obj::__new()
{  hx::ObjectPtr< Prova_obj > result = new Prova_obj();
	result->__construct();
	return result;}

Dynamic Prova_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Prova_obj > result = new Prova_obj();
	result->__construct();
	return result;}


Prova_obj::Prova_obj()
{
}

Dynamic Prova_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Prova_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Prova_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Prova_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Prova_obj::__mClass,"__mClass");
};

#endif

Class Prova_obj::__mClass;

void Prova_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Prova"), hx::TCanCast< Prova_obj> ,sStaticFields,sMemberFields,
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

void Prova_obj::__boot()
{
}

