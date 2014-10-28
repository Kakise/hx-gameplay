#include <hxcpp.h>

#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsConstraint
#include <org/gameplay3d/PhysicsConstraint.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsFixedConstraint
#include <org/gameplay3d/PhysicsFixedConstraint.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsGenericConstraint
#include <org/gameplay3d/PhysicsGenericConstraint.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_INativeBinding
#include <org/gameplay3d/intern/INativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_NativeBinding
#include <org/gameplay3d/intern/NativeBinding.h>
#endif
namespace org{
namespace gameplay3d{

Void PhysicsFixedConstraint_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.PhysicsFixedConstraint","new",0xbfab2dc9,"org.gameplay3d.PhysicsFixedConstraint.new","org/gameplay3d/PhysicsFixedConstraint.hx",7,0xb9cbfc27)
HX_STACK_THIS(this)
HX_STACK_ARG(nativeObjectInitializer,"nativeObjectInitializer")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(7)
	super::__construct(nativeObjectInitializer,nativeObjectInitializerParams);
}
;
	return null();
}

//PhysicsFixedConstraint_obj::~PhysicsFixedConstraint_obj() { }

Dynamic PhysicsFixedConstraint_obj::__CreateEmpty() { return  new PhysicsFixedConstraint_obj; }
hx::ObjectPtr< PhysicsFixedConstraint_obj > PhysicsFixedConstraint_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< PhysicsFixedConstraint_obj > result = new PhysicsFixedConstraint_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic PhysicsFixedConstraint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PhysicsFixedConstraint_obj > result = new PhysicsFixedConstraint_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


PhysicsFixedConstraint_obj::PhysicsFixedConstraint_obj()
{
}

Dynamic PhysicsFixedConstraint_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic PhysicsFixedConstraint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void PhysicsFixedConstraint_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(PhysicsFixedConstraint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PhysicsFixedConstraint_obj::__mClass,"__mClass");
};

#endif

Class PhysicsFixedConstraint_obj::__mClass;

void PhysicsFixedConstraint_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.PhysicsFixedConstraint"), hx::TCanCast< PhysicsFixedConstraint_obj> ,sStaticFields,sMemberFields,
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

void PhysicsFixedConstraint_obj::__boot()
{
}

} // end namespace org
} // end namespace gameplay3d
