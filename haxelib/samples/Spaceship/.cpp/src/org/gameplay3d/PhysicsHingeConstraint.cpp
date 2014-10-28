#include <hxcpp.h>

#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsConstraint
#include <org/gameplay3d/PhysicsConstraint.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsHingeConstraint
#include <org/gameplay3d/PhysicsHingeConstraint.h>
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

Void PhysicsHingeConstraint_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.PhysicsHingeConstraint","new",0xcf9b1440,"org.gameplay3d.PhysicsHingeConstraint.new","org/gameplay3d/PhysicsHingeConstraint.hx",9,0x0356d190)
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

//PhysicsHingeConstraint_obj::~PhysicsHingeConstraint_obj() { }

Dynamic PhysicsHingeConstraint_obj::__CreateEmpty() { return  new PhysicsHingeConstraint_obj; }
hx::ObjectPtr< PhysicsHingeConstraint_obj > PhysicsHingeConstraint_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< PhysicsHingeConstraint_obj > result = new PhysicsHingeConstraint_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic PhysicsHingeConstraint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PhysicsHingeConstraint_obj > result = new PhysicsHingeConstraint_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void PhysicsHingeConstraint_obj::setLimits( Float minAngle,Float maxAngle,hx::Null< Float >  __o_bounciness){
Float bounciness = __o_bounciness.Default(1.0);
	HX_STACK_FRAME("org.gameplay3d.PhysicsHingeConstraint","setLimits",0xcb0515fa,"org.gameplay3d.PhysicsHingeConstraint.setLimits","org/gameplay3d/PhysicsHingeConstraint.hx",18,0x0356d190)
	HX_STACK_THIS(this)
	HX_STACK_ARG(minAngle,"minAngle")
	HX_STACK_ARG(maxAngle,"maxAngle")
	HX_STACK_ARG(bounciness,"bounciness")
{
		HX_STACK_LINE(18)
		::org::gameplay3d::PhysicsHingeConstraint_obj::hx_PhysicsHingeConstraint_setLimits(this->nativeObject,minAngle,maxAngle,bounciness);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(PhysicsHingeConstraint_obj,setLimits,(void))

Dynamic PhysicsHingeConstraint_obj::hx_PhysicsHingeConstraint_setLimits;


PhysicsHingeConstraint_obj::PhysicsHingeConstraint_obj()
{
}

Dynamic PhysicsHingeConstraint_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"setLimits") ) { return setLimits_dyn(); }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"hx_PhysicsHingeConstraint_setLimits") ) { return hx_PhysicsHingeConstraint_setLimits; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PhysicsHingeConstraint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 35:
		if (HX_FIELD_EQ(inName,"hx_PhysicsHingeConstraint_setLimits") ) { hx_PhysicsHingeConstraint_setLimits=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PhysicsHingeConstraint_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("hx_PhysicsHingeConstraint_setLimits"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("setLimits"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PhysicsHingeConstraint_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PhysicsHingeConstraint_obj::hx_PhysicsHingeConstraint_setLimits,"hx_PhysicsHingeConstraint_setLimits");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PhysicsHingeConstraint_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PhysicsHingeConstraint_obj::hx_PhysicsHingeConstraint_setLimits,"hx_PhysicsHingeConstraint_setLimits");
};

#endif

Class PhysicsHingeConstraint_obj::__mClass;

void PhysicsHingeConstraint_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.PhysicsHingeConstraint"), hx::TCanCast< PhysicsHingeConstraint_obj> ,sStaticFields,sMemberFields,
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

void PhysicsHingeConstraint_obj::__boot()
{
	hx_PhysicsHingeConstraint_setLimits= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsHingeConstraint >(),HX_CSTRING("setLimits"),(int)4);
}

} // end namespace org
} // end namespace gameplay3d
