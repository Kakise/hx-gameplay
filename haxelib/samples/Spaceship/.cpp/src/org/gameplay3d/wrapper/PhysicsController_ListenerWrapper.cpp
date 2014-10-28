#include <hxcpp.h>

#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsController_Listener
#include <org/gameplay3d/PhysicsController_Listener.h>
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
#ifndef INCLUDED_org_gameplay3d_util_NativeInterface
#include <org/gameplay3d/util/NativeInterface.h>
#endif
#ifndef INCLUDED_org_gameplay3d_wrapper_PhysicsController_ListenerWrapper
#include <org/gameplay3d/wrapper/PhysicsController_ListenerWrapper.h>
#endif
namespace org{
namespace gameplay3d{
namespace wrapper{

Void PhysicsController_ListenerWrapper_obj::__construct(::org::gameplay3d::PhysicsController_Listener target,Dynamic nativeObject,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.wrapper.PhysicsController_ListenerWrapper","new",0x8800cf2d,"org.gameplay3d.wrapper.PhysicsController_ListenerWrapper.new","org/gameplay3d/wrapper/PhysicsController_ListenerWrapper.hx",9,0x30c60b04)
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

//PhysicsController_ListenerWrapper_obj::~PhysicsController_ListenerWrapper_obj() { }

Dynamic PhysicsController_ListenerWrapper_obj::__CreateEmpty() { return  new PhysicsController_ListenerWrapper_obj; }
hx::ObjectPtr< PhysicsController_ListenerWrapper_obj > PhysicsController_ListenerWrapper_obj::__new(::org::gameplay3d::PhysicsController_Listener target,Dynamic nativeObject,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< PhysicsController_ListenerWrapper_obj > result = new PhysicsController_ListenerWrapper_obj();
	result->__construct(target,nativeObject,nativeObjectInitializerParams);
	return result;}

Dynamic PhysicsController_ListenerWrapper_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PhysicsController_ListenerWrapper_obj > result = new PhysicsController_ListenerWrapper_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

hx::Object *PhysicsController_ListenerWrapper_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::PhysicsController_Listener_obj)) return operator ::org::gameplay3d::PhysicsController_Listener_obj *();
	return super::__ToInterface(inType);
}

Void PhysicsController_ListenerWrapper_obj::statusEvent( int type){
{
		HX_STACK_FRAME("org.gameplay3d.wrapper.PhysicsController_ListenerWrapper","statusEvent",0x68750f55,"org.gameplay3d.wrapper.PhysicsController_ListenerWrapper.statusEvent","org/gameplay3d/wrapper/PhysicsController_ListenerWrapper.hx",24,0x30c60b04)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_LINE(24)
		this->target->__Field(HX_CSTRING("statusEvent"),true)(type);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsController_ListenerWrapper_obj,statusEvent,(void))

::org::gameplay3d::wrapper::PhysicsController_ListenerWrapper PhysicsController_ListenerWrapper_obj::make( ::org::gameplay3d::PhysicsController_Listener target){
	HX_STACK_FRAME("org.gameplay3d.wrapper.PhysicsController_ListenerWrapper","make",0x78082e81,"org.gameplay3d.wrapper.PhysicsController_ListenerWrapper.make","org/gameplay3d/wrapper/PhysicsController_ListenerWrapper.hx",18,0x30c60b04)
	HX_STACK_ARG(target,"target")
	HX_STACK_LINE(18)
	return ::org::gameplay3d::wrapper::PhysicsController_ListenerWrapper_obj::__new(target,::org::gameplay3d::wrapper::PhysicsController_ListenerWrapper_obj::constructNativeObject_dyn(),Dynamic( Array_obj<Dynamic>::__new().Add(null())));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PhysicsController_ListenerWrapper_obj,make,return )

Dynamic PhysicsController_ListenerWrapper_obj::constructNativeObject( ::org::gameplay3d::wrapper::PhysicsController_ListenerWrapper thisObj){
	HX_STACK_FRAME("org.gameplay3d.wrapper.PhysicsController_ListenerWrapper","constructNativeObject",0x8943287a,"org.gameplay3d.wrapper.PhysicsController_ListenerWrapper.constructNativeObject","org/gameplay3d/wrapper/PhysicsController_ListenerWrapper.hx",34,0x30c60b04)
	HX_STACK_ARG(thisObj,"thisObj")
	HX_STACK_LINE(34)
	return ::org::gameplay3d::wrapper::PhysicsController_ListenerWrapper_obj::hx_PhysicsController_Listener_Construct(thisObj->statusEvent_dyn());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PhysicsController_ListenerWrapper_obj,constructNativeObject,return )

Dynamic PhysicsController_ListenerWrapper_obj::hx_PhysicsController_Listener_Construct;


PhysicsController_ListenerWrapper_obj::PhysicsController_ListenerWrapper_obj()
{
}

Dynamic PhysicsController_ListenerWrapper_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { return make_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"statusEvent") ) { return statusEvent_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"constructNativeObject") ) { return constructNativeObject_dyn(); }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"hx_PhysicsController_Listener_Construct") ) { return hx_PhysicsController_Listener_Construct; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PhysicsController_ListenerWrapper_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 39:
		if (HX_FIELD_EQ(inName,"hx_PhysicsController_Listener_Construct") ) { hx_PhysicsController_Listener_Construct=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PhysicsController_ListenerWrapper_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("make"),
	HX_CSTRING("constructNativeObject"),
	HX_CSTRING("hx_PhysicsController_Listener_Construct"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("statusEvent"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PhysicsController_ListenerWrapper_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PhysicsController_ListenerWrapper_obj::hx_PhysicsController_Listener_Construct,"hx_PhysicsController_Listener_Construct");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PhysicsController_ListenerWrapper_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PhysicsController_ListenerWrapper_obj::hx_PhysicsController_Listener_Construct,"hx_PhysicsController_Listener_Construct");
};

#endif

Class PhysicsController_ListenerWrapper_obj::__mClass;

void PhysicsController_ListenerWrapper_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.wrapper.PhysicsController_ListenerWrapper"), hx::TCanCast< PhysicsController_ListenerWrapper_obj> ,sStaticFields,sMemberFields,
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

void PhysicsController_ListenerWrapper_obj::__boot()
{
	hx_PhysicsController_Listener_Construct= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsController_Listener >(),HX_CSTRING("Construct"),(int)1);
}

} // end namespace org
} // end namespace gameplay3d
} // end namespace wrapper
