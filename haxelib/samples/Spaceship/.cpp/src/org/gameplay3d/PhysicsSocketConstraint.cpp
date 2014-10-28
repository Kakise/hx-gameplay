#include <hxcpp.h>

#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsConstraint
#include <org/gameplay3d/PhysicsConstraint.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsSocketConstraint
#include <org/gameplay3d/PhysicsSocketConstraint.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_INativeBinding
#include <org/gameplay3d/intern/INativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_NativeBinding
#include <org/gameplay3d/intern/NativeBinding.h>
#endif
namespace org{
namespace gameplay3d{

Void PhysicsSocketConstraint_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.PhysicsSocketConstraint","new",0xcf7ff6bc,"org.gameplay3d.PhysicsSocketConstraint.new","org/gameplay3d/PhysicsSocketConstraint.hx",7,0x2d7c29d4)
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

//PhysicsSocketConstraint_obj::~PhysicsSocketConstraint_obj() { }

Dynamic PhysicsSocketConstraint_obj::__CreateEmpty() { return  new PhysicsSocketConstraint_obj; }
hx::ObjectPtr< PhysicsSocketConstraint_obj > PhysicsSocketConstraint_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< PhysicsSocketConstraint_obj > result = new PhysicsSocketConstraint_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic PhysicsSocketConstraint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PhysicsSocketConstraint_obj > result = new PhysicsSocketConstraint_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


PhysicsSocketConstraint_obj::PhysicsSocketConstraint_obj()
{
}

Dynamic PhysicsSocketConstraint_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic PhysicsSocketConstraint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void PhysicsSocketConstraint_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(PhysicsSocketConstraint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PhysicsSocketConstraint_obj::__mClass,"__mClass");
};

#endif

Class PhysicsSocketConstraint_obj::__mClass;

void PhysicsSocketConstraint_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.PhysicsSocketConstraint"), hx::TCanCast< PhysicsSocketConstraint_obj> ,sStaticFields,sMemberFields,
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

void PhysicsSocketConstraint_obj::__boot()
{
}

} // end namespace org
} // end namespace gameplay3d
