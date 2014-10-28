#include <hxcpp.h>

#ifndef INCLUDED_org_gameplay3d_Control_State
#include <org/gameplay3d/Control_State.h>
#endif
namespace org{
namespace gameplay3d{

Void Control_State_obj::__construct()
{
	return null();
}

//Control_State_obj::~Control_State_obj() { }

Dynamic Control_State_obj::__CreateEmpty() { return  new Control_State_obj; }
hx::ObjectPtr< Control_State_obj > Control_State_obj::__new()
{  hx::ObjectPtr< Control_State_obj > result = new Control_State_obj();
	result->__construct();
	return result;}

Dynamic Control_State_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Control_State_obj > result = new Control_State_obj();
	result->__construct();
	return result;}

int Control_State_obj::NORMAL;

int Control_State_obj::FOCUS;

int Control_State_obj::ACTIVE;

int Control_State_obj::DISABLED;


Control_State_obj::Control_State_obj()
{
}

Dynamic Control_State_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Control_State_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Control_State_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NORMAL"),
	HX_CSTRING("FOCUS"),
	HX_CSTRING("ACTIVE"),
	HX_CSTRING("DISABLED"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Control_State_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Control_State_obj::NORMAL,"NORMAL");
	HX_MARK_MEMBER_NAME(Control_State_obj::FOCUS,"FOCUS");
	HX_MARK_MEMBER_NAME(Control_State_obj::ACTIVE,"ACTIVE");
	HX_MARK_MEMBER_NAME(Control_State_obj::DISABLED,"DISABLED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Control_State_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Control_State_obj::NORMAL,"NORMAL");
	HX_VISIT_MEMBER_NAME(Control_State_obj::FOCUS,"FOCUS");
	HX_VISIT_MEMBER_NAME(Control_State_obj::ACTIVE,"ACTIVE");
	HX_VISIT_MEMBER_NAME(Control_State_obj::DISABLED,"DISABLED");
};

#endif

Class Control_State_obj::__mClass;

void Control_State_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.Control_State"), hx::TCanCast< Control_State_obj> ,sStaticFields,sMemberFields,
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

void Control_State_obj::__boot()
{
	NORMAL= (int)1;
	FOCUS= (int)2;
	ACTIVE= (int)4;
	DISABLED= (int)8;
}

} // end namespace org
} // end namespace gameplay3d
