#include <hxcpp.h>

#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsCollisionObject
#include <org/gameplay3d/PhysicsCollisionObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsGhostObject
#include <org/gameplay3d/PhysicsGhostObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_INativeBinding
#include <org/gameplay3d/intern/INativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_NativeBinding
#include <org/gameplay3d/intern/NativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_NativeInterface
#include <org/gameplay3d/util/NativeInterface.h>
#endif
namespace org{
namespace gameplay3d{

Void PhysicsGhostObject_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.PhysicsGhostObject","new",0x12dc15c6,"org.gameplay3d.PhysicsGhostObject.new","org/gameplay3d/PhysicsGhostObject.hx",9,0xd75e32ca)
HX_STACK_THIS(this)
HX_STACK_ARG(nativeObjectInitializer,"nativeObjectInitializer")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(9)
	super::__construct(nativeObjectInitializer,nativeObjectInitializerParams);
}
;
	return null();
}

//PhysicsGhostObject_obj::~PhysicsGhostObject_obj() { }

Dynamic PhysicsGhostObject_obj::__CreateEmpty() { return  new PhysicsGhostObject_obj; }
hx::ObjectPtr< PhysicsGhostObject_obj > PhysicsGhostObject_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< PhysicsGhostObject_obj > result = new PhysicsGhostObject_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic PhysicsGhostObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PhysicsGhostObject_obj > result = new PhysicsGhostObject_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

int PhysicsGhostObject_obj::getType( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsGhostObject","getType",0x76f992d6,"org.gameplay3d.PhysicsGhostObject.getType","org/gameplay3d/PhysicsGhostObject.hx",18,0xd75e32ca)
	HX_STACK_THIS(this)
	HX_STACK_LINE(18)
	return ::org::gameplay3d::PhysicsGhostObject_obj::hx_PhysicsGhostObject_getType(this->nativeObject);
}


Dynamic PhysicsGhostObject_obj::hx_PhysicsGhostObject_getType;


PhysicsGhostObject_obj::PhysicsGhostObject_obj()
{
}

Dynamic PhysicsGhostObject_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_PhysicsGhostObject_getType") ) { return hx_PhysicsGhostObject_getType; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PhysicsGhostObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 29:
		if (HX_FIELD_EQ(inName,"hx_PhysicsGhostObject_getType") ) { hx_PhysicsGhostObject_getType=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PhysicsGhostObject_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("hx_PhysicsGhostObject_getType"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("getType"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PhysicsGhostObject_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PhysicsGhostObject_obj::hx_PhysicsGhostObject_getType,"hx_PhysicsGhostObject_getType");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PhysicsGhostObject_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PhysicsGhostObject_obj::hx_PhysicsGhostObject_getType,"hx_PhysicsGhostObject_getType");
};

#endif

Class PhysicsGhostObject_obj::__mClass;

void PhysicsGhostObject_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.PhysicsGhostObject"), hx::TCanCast< PhysicsGhostObject_obj> ,sStaticFields,sMemberFields,
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

void PhysicsGhostObject_obj::__boot()
{
	hx_PhysicsGhostObject_getType= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsGhostObject >(),HX_CSTRING("getType"),(int)1);
}

} // end namespace org
} // end namespace gameplay3d
