#include <hxcpp.h>

#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_TimeListener
#include <org/gameplay3d/TimeListener.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_INativeBinding
#include <org/gameplay3d/intern/INativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_ListenerWrapper
#include <org/gameplay3d/intern/ListenerWrapper.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_NativeBinding
#include <org/gameplay3d/intern/NativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_Handle
#include <org/gameplay3d/util/Handle.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_NativeInterface
#include <org/gameplay3d/util/NativeInterface.h>
#endif
#ifndef INCLUDED_org_gameplay3d_wrapper_TimeListenerWrapper
#include <org/gameplay3d/wrapper/TimeListenerWrapper.h>
#endif
namespace org{
namespace gameplay3d{
namespace wrapper{

Void TimeListenerWrapper_obj::__construct(::org::gameplay3d::TimeListener target,Dynamic nativeObject,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.wrapper.TimeListenerWrapper","new",0x4dc1767c,"org.gameplay3d.wrapper.TimeListenerWrapper.new","org/gameplay3d/wrapper/TimeListenerWrapper.hx",9,0x83e9fad5)
HX_STACK_THIS(this)
HX_STACK_ARG(target,"target")
HX_STACK_ARG(nativeObject,"nativeObject")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(9)
	super::__construct(target,nativeObject,nativeObjectInitializerParams);
}
;
	return null();
}

//TimeListenerWrapper_obj::~TimeListenerWrapper_obj() { }

Dynamic TimeListenerWrapper_obj::__CreateEmpty() { return  new TimeListenerWrapper_obj; }
hx::ObjectPtr< TimeListenerWrapper_obj > TimeListenerWrapper_obj::__new(::org::gameplay3d::TimeListener target,Dynamic nativeObject,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< TimeListenerWrapper_obj > result = new TimeListenerWrapper_obj();
	result->__construct(target,nativeObject,nativeObjectInitializerParams);
	return result;}

Dynamic TimeListenerWrapper_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TimeListenerWrapper_obj > result = new TimeListenerWrapper_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

hx::Object *TimeListenerWrapper_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::TimeListener_obj)) return operator ::org::gameplay3d::TimeListener_obj *();
	return super::__ToInterface(inType);
}

Void TimeListenerWrapper_obj::timeEvent( int timeDiff,::org::gameplay3d::util::Handle cookie){
{
		HX_STACK_FRAME("org.gameplay3d.wrapper.TimeListenerWrapper","timeEvent",0x3f3cbfe9,"org.gameplay3d.wrapper.TimeListenerWrapper.timeEvent","org/gameplay3d/wrapper/TimeListenerWrapper.hx",24,0x83e9fad5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(timeDiff,"timeDiff")
		HX_STACK_ARG(cookie,"cookie")
		HX_STACK_LINE(24)
		this->target->__Field(HX_CSTRING("timeEvent"),true)(timeDiff,cookie);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TimeListenerWrapper_obj,timeEvent,(void))

Void TimeListenerWrapper_obj::timeEventWrapper( int timeDiff,Dynamic cookie){
{
		HX_STACK_FRAME("org.gameplay3d.wrapper.TimeListenerWrapper","timeEventWrapper",0xed08fc6a,"org.gameplay3d.wrapper.TimeListenerWrapper.timeEventWrapper","org/gameplay3d/wrapper/TimeListenerWrapper.hx",32,0x83e9fad5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(timeDiff,"timeDiff")
		HX_STACK_ARG(cookie,"cookie")
		HX_STACK_LINE(33)
		::org::gameplay3d::util::Handle _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(33)
		if (((cookie == null()))){
			HX_STACK_LINE(33)
			_g = null();
		}
		else{
			HX_STACK_LINE(33)
			_g = ::org::gameplay3d::util::Handle_obj::__new(cookie);
		}
		HX_STACK_LINE(33)
		this->timeEvent(timeDiff,_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TimeListenerWrapper_obj,timeEventWrapper,(void))

::org::gameplay3d::wrapper::TimeListenerWrapper TimeListenerWrapper_obj::make( ::org::gameplay3d::TimeListener target){
	HX_STACK_FRAME("org.gameplay3d.wrapper.TimeListenerWrapper","make",0xbad9ec52,"org.gameplay3d.wrapper.TimeListenerWrapper.make","org/gameplay3d/wrapper/TimeListenerWrapper.hx",18,0x83e9fad5)
	HX_STACK_ARG(target,"target")
	HX_STACK_LINE(18)
	return ::org::gameplay3d::wrapper::TimeListenerWrapper_obj::__new(target,::org::gameplay3d::wrapper::TimeListenerWrapper_obj::constructNativeObject_dyn(),Dynamic( Array_obj<Dynamic>::__new().Add(null())));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TimeListenerWrapper_obj,make,return )

Dynamic TimeListenerWrapper_obj::constructNativeObject( ::org::gameplay3d::wrapper::TimeListenerWrapper thisObj){
	HX_STACK_FRAME("org.gameplay3d.wrapper.TimeListenerWrapper","constructNativeObject",0xd642cf89,"org.gameplay3d.wrapper.TimeListenerWrapper.constructNativeObject","org/gameplay3d/wrapper/TimeListenerWrapper.hx",39,0x83e9fad5)
	HX_STACK_ARG(thisObj,"thisObj")
	HX_STACK_LINE(39)
	return ::org::gameplay3d::wrapper::TimeListenerWrapper_obj::hx_TimeListener_Construct(thisObj->timeEventWrapper_dyn());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TimeListenerWrapper_obj,constructNativeObject,return )

Dynamic TimeListenerWrapper_obj::hx_TimeListener_Construct;


TimeListenerWrapper_obj::TimeListenerWrapper_obj()
{
}

Dynamic TimeListenerWrapper_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { return make_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timeEvent") ) { return timeEvent_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"timeEventWrapper") ) { return timeEventWrapper_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"constructNativeObject") ) { return constructNativeObject_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_TimeListener_Construct") ) { return hx_TimeListener_Construct; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TimeListenerWrapper_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 25:
		if (HX_FIELD_EQ(inName,"hx_TimeListener_Construct") ) { hx_TimeListener_Construct=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TimeListenerWrapper_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("make"),
	HX_CSTRING("constructNativeObject"),
	HX_CSTRING("hx_TimeListener_Construct"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("timeEvent"),
	HX_CSTRING("timeEventWrapper"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TimeListenerWrapper_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TimeListenerWrapper_obj::hx_TimeListener_Construct,"hx_TimeListener_Construct");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TimeListenerWrapper_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TimeListenerWrapper_obj::hx_TimeListener_Construct,"hx_TimeListener_Construct");
};

#endif

Class TimeListenerWrapper_obj::__mClass;

void TimeListenerWrapper_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.wrapper.TimeListenerWrapper"), hx::TCanCast< TimeListenerWrapper_obj> ,sStaticFields,sMemberFields,
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

void TimeListenerWrapper_obj::__boot()
{
	hx_TimeListener_Construct= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::TimeListener >(),HX_CSTRING("Construct"),(int)1);
}

} // end namespace org
} // end namespace gameplay3d
} // end namespace wrapper
