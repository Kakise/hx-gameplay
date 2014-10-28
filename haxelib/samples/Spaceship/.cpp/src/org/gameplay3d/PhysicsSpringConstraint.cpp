#include <hxcpp.h>

#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsConstraint
#include <org/gameplay3d/PhysicsConstraint.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsGenericConstraint
#include <org/gameplay3d/PhysicsGenericConstraint.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsSpringConstraint
#include <org/gameplay3d/PhysicsSpringConstraint.h>
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

Void PhysicsSpringConstraint_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.PhysicsSpringConstraint","new",0x526abb56,"org.gameplay3d.PhysicsSpringConstraint.new","org/gameplay3d/PhysicsSpringConstraint.hx",9,0xb7d4767a)
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

//PhysicsSpringConstraint_obj::~PhysicsSpringConstraint_obj() { }

Dynamic PhysicsSpringConstraint_obj::__CreateEmpty() { return  new PhysicsSpringConstraint_obj; }
hx::ObjectPtr< PhysicsSpringConstraint_obj > PhysicsSpringConstraint_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< PhysicsSpringConstraint_obj > result = new PhysicsSpringConstraint_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic PhysicsSpringConstraint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PhysicsSpringConstraint_obj > result = new PhysicsSpringConstraint_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void PhysicsSpringConstraint_obj::setAngularDampingX( Float damping){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsSpringConstraint","setAngularDampingX",0x1ed5e2a0,"org.gameplay3d.PhysicsSpringConstraint.setAngularDampingX","org/gameplay3d/PhysicsSpringConstraint.hx",18,0xb7d4767a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(damping,"damping")
		HX_STACK_LINE(18)
		::org::gameplay3d::PhysicsSpringConstraint_obj::hx_PhysicsSpringConstraint_setAngularDampingX(this->nativeObject,damping);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsSpringConstraint_obj,setAngularDampingX,(void))

Void PhysicsSpringConstraint_obj::setAngularDampingY( Float damping){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsSpringConstraint","setAngularDampingY",0x1ed5e2a1,"org.gameplay3d.PhysicsSpringConstraint.setAngularDampingY","org/gameplay3d/PhysicsSpringConstraint.hx",24,0xb7d4767a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(damping,"damping")
		HX_STACK_LINE(24)
		::org::gameplay3d::PhysicsSpringConstraint_obj::hx_PhysicsSpringConstraint_setAngularDampingY(this->nativeObject,damping);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsSpringConstraint_obj,setAngularDampingY,(void))

Void PhysicsSpringConstraint_obj::setAngularDampingZ( Float damping){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsSpringConstraint","setAngularDampingZ",0x1ed5e2a2,"org.gameplay3d.PhysicsSpringConstraint.setAngularDampingZ","org/gameplay3d/PhysicsSpringConstraint.hx",30,0xb7d4767a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(damping,"damping")
		HX_STACK_LINE(30)
		::org::gameplay3d::PhysicsSpringConstraint_obj::hx_PhysicsSpringConstraint_setAngularDampingZ(this->nativeObject,damping);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsSpringConstraint_obj,setAngularDampingZ,(void))

Void PhysicsSpringConstraint_obj::setAngularStrengthX( Float strength){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsSpringConstraint","setAngularStrengthX",0xbd9cb62d,"org.gameplay3d.PhysicsSpringConstraint.setAngularStrengthX","org/gameplay3d/PhysicsSpringConstraint.hx",36,0xb7d4767a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(strength,"strength")
		HX_STACK_LINE(36)
		::org::gameplay3d::PhysicsSpringConstraint_obj::hx_PhysicsSpringConstraint_setAngularStrengthX(this->nativeObject,strength);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsSpringConstraint_obj,setAngularStrengthX,(void))

Void PhysicsSpringConstraint_obj::setAngularStrengthY( Float strength){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsSpringConstraint","setAngularStrengthY",0xbd9cb62e,"org.gameplay3d.PhysicsSpringConstraint.setAngularStrengthY","org/gameplay3d/PhysicsSpringConstraint.hx",42,0xb7d4767a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(strength,"strength")
		HX_STACK_LINE(42)
		::org::gameplay3d::PhysicsSpringConstraint_obj::hx_PhysicsSpringConstraint_setAngularStrengthY(this->nativeObject,strength);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsSpringConstraint_obj,setAngularStrengthY,(void))

Void PhysicsSpringConstraint_obj::setAngularStrengthZ( Float strength){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsSpringConstraint","setAngularStrengthZ",0xbd9cb62f,"org.gameplay3d.PhysicsSpringConstraint.setAngularStrengthZ","org/gameplay3d/PhysicsSpringConstraint.hx",48,0xb7d4767a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(strength,"strength")
		HX_STACK_LINE(48)
		::org::gameplay3d::PhysicsSpringConstraint_obj::hx_PhysicsSpringConstraint_setAngularStrengthZ(this->nativeObject,strength);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsSpringConstraint_obj,setAngularStrengthZ,(void))

Void PhysicsSpringConstraint_obj::setLinearDampingX( Float damping){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsSpringConstraint","setLinearDampingX",0x37a08913,"org.gameplay3d.PhysicsSpringConstraint.setLinearDampingX","org/gameplay3d/PhysicsSpringConstraint.hx",54,0xb7d4767a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(damping,"damping")
		HX_STACK_LINE(54)
		::org::gameplay3d::PhysicsSpringConstraint_obj::hx_PhysicsSpringConstraint_setLinearDampingX(this->nativeObject,damping);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsSpringConstraint_obj,setLinearDampingX,(void))

Void PhysicsSpringConstraint_obj::setLinearDampingY( Float damping){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsSpringConstraint","setLinearDampingY",0x37a08914,"org.gameplay3d.PhysicsSpringConstraint.setLinearDampingY","org/gameplay3d/PhysicsSpringConstraint.hx",60,0xb7d4767a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(damping,"damping")
		HX_STACK_LINE(60)
		::org::gameplay3d::PhysicsSpringConstraint_obj::hx_PhysicsSpringConstraint_setLinearDampingY(this->nativeObject,damping);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsSpringConstraint_obj,setLinearDampingY,(void))

Void PhysicsSpringConstraint_obj::setLinearDampingZ( Float damping){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsSpringConstraint","setLinearDampingZ",0x37a08915,"org.gameplay3d.PhysicsSpringConstraint.setLinearDampingZ","org/gameplay3d/PhysicsSpringConstraint.hx",66,0xb7d4767a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(damping,"damping")
		HX_STACK_LINE(66)
		::org::gameplay3d::PhysicsSpringConstraint_obj::hx_PhysicsSpringConstraint_setLinearDampingZ(this->nativeObject,damping);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsSpringConstraint_obj,setLinearDampingZ,(void))

Void PhysicsSpringConstraint_obj::setLinearStrengthX( Float strength){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsSpringConstraint","setLinearStrengthX",0x5623b45a,"org.gameplay3d.PhysicsSpringConstraint.setLinearStrengthX","org/gameplay3d/PhysicsSpringConstraint.hx",72,0xb7d4767a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(strength,"strength")
		HX_STACK_LINE(72)
		::org::gameplay3d::PhysicsSpringConstraint_obj::hx_PhysicsSpringConstraint_setLinearStrengthX(this->nativeObject,strength);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsSpringConstraint_obj,setLinearStrengthX,(void))

Void PhysicsSpringConstraint_obj::setLinearStrengthY( Float strength){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsSpringConstraint","setLinearStrengthY",0x5623b45b,"org.gameplay3d.PhysicsSpringConstraint.setLinearStrengthY","org/gameplay3d/PhysicsSpringConstraint.hx",78,0xb7d4767a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(strength,"strength")
		HX_STACK_LINE(78)
		::org::gameplay3d::PhysicsSpringConstraint_obj::hx_PhysicsSpringConstraint_setLinearStrengthY(this->nativeObject,strength);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsSpringConstraint_obj,setLinearStrengthY,(void))

Void PhysicsSpringConstraint_obj::setLinearStrengthZ( Float strength){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsSpringConstraint","setLinearStrengthZ",0x5623b45c,"org.gameplay3d.PhysicsSpringConstraint.setLinearStrengthZ","org/gameplay3d/PhysicsSpringConstraint.hx",84,0xb7d4767a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(strength,"strength")
		HX_STACK_LINE(84)
		::org::gameplay3d::PhysicsSpringConstraint_obj::hx_PhysicsSpringConstraint_setLinearStrengthZ(this->nativeObject,strength);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsSpringConstraint_obj,setLinearStrengthZ,(void))

Dynamic PhysicsSpringConstraint_obj::hx_PhysicsSpringConstraint_setAngularDampingX;

Dynamic PhysicsSpringConstraint_obj::hx_PhysicsSpringConstraint_setAngularDampingY;

Dynamic PhysicsSpringConstraint_obj::hx_PhysicsSpringConstraint_setAngularDampingZ;

Dynamic PhysicsSpringConstraint_obj::hx_PhysicsSpringConstraint_setAngularStrengthX;

Dynamic PhysicsSpringConstraint_obj::hx_PhysicsSpringConstraint_setAngularStrengthY;

Dynamic PhysicsSpringConstraint_obj::hx_PhysicsSpringConstraint_setAngularStrengthZ;

Dynamic PhysicsSpringConstraint_obj::hx_PhysicsSpringConstraint_setLinearDampingX;

Dynamic PhysicsSpringConstraint_obj::hx_PhysicsSpringConstraint_setLinearDampingY;

Dynamic PhysicsSpringConstraint_obj::hx_PhysicsSpringConstraint_setLinearDampingZ;

Dynamic PhysicsSpringConstraint_obj::hx_PhysicsSpringConstraint_setLinearStrengthX;

Dynamic PhysicsSpringConstraint_obj::hx_PhysicsSpringConstraint_setLinearStrengthY;

Dynamic PhysicsSpringConstraint_obj::hx_PhysicsSpringConstraint_setLinearStrengthZ;


PhysicsSpringConstraint_obj::PhysicsSpringConstraint_obj()
{
}

Dynamic PhysicsSpringConstraint_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"setLinearDampingX") ) { return setLinearDampingX_dyn(); }
		if (HX_FIELD_EQ(inName,"setLinearDampingY") ) { return setLinearDampingY_dyn(); }
		if (HX_FIELD_EQ(inName,"setLinearDampingZ") ) { return setLinearDampingZ_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"setAngularDampingX") ) { return setAngularDampingX_dyn(); }
		if (HX_FIELD_EQ(inName,"setAngularDampingY") ) { return setAngularDampingY_dyn(); }
		if (HX_FIELD_EQ(inName,"setAngularDampingZ") ) { return setAngularDampingZ_dyn(); }
		if (HX_FIELD_EQ(inName,"setLinearStrengthX") ) { return setLinearStrengthX_dyn(); }
		if (HX_FIELD_EQ(inName,"setLinearStrengthY") ) { return setLinearStrengthY_dyn(); }
		if (HX_FIELD_EQ(inName,"setLinearStrengthZ") ) { return setLinearStrengthZ_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"setAngularStrengthX") ) { return setAngularStrengthX_dyn(); }
		if (HX_FIELD_EQ(inName,"setAngularStrengthY") ) { return setAngularStrengthY_dyn(); }
		if (HX_FIELD_EQ(inName,"setAngularStrengthZ") ) { return setAngularStrengthZ_dyn(); }
		break;
	case 44:
		if (HX_FIELD_EQ(inName,"hx_PhysicsSpringConstraint_setLinearDampingX") ) { return hx_PhysicsSpringConstraint_setLinearDampingX; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsSpringConstraint_setLinearDampingY") ) { return hx_PhysicsSpringConstraint_setLinearDampingY; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsSpringConstraint_setLinearDampingZ") ) { return hx_PhysicsSpringConstraint_setLinearDampingZ; }
		break;
	case 45:
		if (HX_FIELD_EQ(inName,"hx_PhysicsSpringConstraint_setAngularDampingX") ) { return hx_PhysicsSpringConstraint_setAngularDampingX; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsSpringConstraint_setAngularDampingY") ) { return hx_PhysicsSpringConstraint_setAngularDampingY; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsSpringConstraint_setAngularDampingZ") ) { return hx_PhysicsSpringConstraint_setAngularDampingZ; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsSpringConstraint_setLinearStrengthX") ) { return hx_PhysicsSpringConstraint_setLinearStrengthX; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsSpringConstraint_setLinearStrengthY") ) { return hx_PhysicsSpringConstraint_setLinearStrengthY; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsSpringConstraint_setLinearStrengthZ") ) { return hx_PhysicsSpringConstraint_setLinearStrengthZ; }
		break;
	case 46:
		if (HX_FIELD_EQ(inName,"hx_PhysicsSpringConstraint_setAngularStrengthX") ) { return hx_PhysicsSpringConstraint_setAngularStrengthX; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsSpringConstraint_setAngularStrengthY") ) { return hx_PhysicsSpringConstraint_setAngularStrengthY; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsSpringConstraint_setAngularStrengthZ") ) { return hx_PhysicsSpringConstraint_setAngularStrengthZ; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PhysicsSpringConstraint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 44:
		if (HX_FIELD_EQ(inName,"hx_PhysicsSpringConstraint_setLinearDampingX") ) { hx_PhysicsSpringConstraint_setLinearDampingX=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsSpringConstraint_setLinearDampingY") ) { hx_PhysicsSpringConstraint_setLinearDampingY=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsSpringConstraint_setLinearDampingZ") ) { hx_PhysicsSpringConstraint_setLinearDampingZ=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 45:
		if (HX_FIELD_EQ(inName,"hx_PhysicsSpringConstraint_setAngularDampingX") ) { hx_PhysicsSpringConstraint_setAngularDampingX=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsSpringConstraint_setAngularDampingY") ) { hx_PhysicsSpringConstraint_setAngularDampingY=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsSpringConstraint_setAngularDampingZ") ) { hx_PhysicsSpringConstraint_setAngularDampingZ=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsSpringConstraint_setLinearStrengthX") ) { hx_PhysicsSpringConstraint_setLinearStrengthX=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsSpringConstraint_setLinearStrengthY") ) { hx_PhysicsSpringConstraint_setLinearStrengthY=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsSpringConstraint_setLinearStrengthZ") ) { hx_PhysicsSpringConstraint_setLinearStrengthZ=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 46:
		if (HX_FIELD_EQ(inName,"hx_PhysicsSpringConstraint_setAngularStrengthX") ) { hx_PhysicsSpringConstraint_setAngularStrengthX=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsSpringConstraint_setAngularStrengthY") ) { hx_PhysicsSpringConstraint_setAngularStrengthY=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsSpringConstraint_setAngularStrengthZ") ) { hx_PhysicsSpringConstraint_setAngularStrengthZ=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PhysicsSpringConstraint_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("hx_PhysicsSpringConstraint_setAngularDampingX"),
	HX_CSTRING("hx_PhysicsSpringConstraint_setAngularDampingY"),
	HX_CSTRING("hx_PhysicsSpringConstraint_setAngularDampingZ"),
	HX_CSTRING("hx_PhysicsSpringConstraint_setAngularStrengthX"),
	HX_CSTRING("hx_PhysicsSpringConstraint_setAngularStrengthY"),
	HX_CSTRING("hx_PhysicsSpringConstraint_setAngularStrengthZ"),
	HX_CSTRING("hx_PhysicsSpringConstraint_setLinearDampingX"),
	HX_CSTRING("hx_PhysicsSpringConstraint_setLinearDampingY"),
	HX_CSTRING("hx_PhysicsSpringConstraint_setLinearDampingZ"),
	HX_CSTRING("hx_PhysicsSpringConstraint_setLinearStrengthX"),
	HX_CSTRING("hx_PhysicsSpringConstraint_setLinearStrengthY"),
	HX_CSTRING("hx_PhysicsSpringConstraint_setLinearStrengthZ"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("setAngularDampingX"),
	HX_CSTRING("setAngularDampingY"),
	HX_CSTRING("setAngularDampingZ"),
	HX_CSTRING("setAngularStrengthX"),
	HX_CSTRING("setAngularStrengthY"),
	HX_CSTRING("setAngularStrengthZ"),
	HX_CSTRING("setLinearDampingX"),
	HX_CSTRING("setLinearDampingY"),
	HX_CSTRING("setLinearDampingZ"),
	HX_CSTRING("setLinearStrengthX"),
	HX_CSTRING("setLinearStrengthY"),
	HX_CSTRING("setLinearStrengthZ"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PhysicsSpringConstraint_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PhysicsSpringConstraint_obj::hx_PhysicsSpringConstraint_setAngularDampingX,"hx_PhysicsSpringConstraint_setAngularDampingX");
	HX_MARK_MEMBER_NAME(PhysicsSpringConstraint_obj::hx_PhysicsSpringConstraint_setAngularDampingY,"hx_PhysicsSpringConstraint_setAngularDampingY");
	HX_MARK_MEMBER_NAME(PhysicsSpringConstraint_obj::hx_PhysicsSpringConstraint_setAngularDampingZ,"hx_PhysicsSpringConstraint_setAngularDampingZ");
	HX_MARK_MEMBER_NAME(PhysicsSpringConstraint_obj::hx_PhysicsSpringConstraint_setAngularStrengthX,"hx_PhysicsSpringConstraint_setAngularStrengthX");
	HX_MARK_MEMBER_NAME(PhysicsSpringConstraint_obj::hx_PhysicsSpringConstraint_setAngularStrengthY,"hx_PhysicsSpringConstraint_setAngularStrengthY");
	HX_MARK_MEMBER_NAME(PhysicsSpringConstraint_obj::hx_PhysicsSpringConstraint_setAngularStrengthZ,"hx_PhysicsSpringConstraint_setAngularStrengthZ");
	HX_MARK_MEMBER_NAME(PhysicsSpringConstraint_obj::hx_PhysicsSpringConstraint_setLinearDampingX,"hx_PhysicsSpringConstraint_setLinearDampingX");
	HX_MARK_MEMBER_NAME(PhysicsSpringConstraint_obj::hx_PhysicsSpringConstraint_setLinearDampingY,"hx_PhysicsSpringConstraint_setLinearDampingY");
	HX_MARK_MEMBER_NAME(PhysicsSpringConstraint_obj::hx_PhysicsSpringConstraint_setLinearDampingZ,"hx_PhysicsSpringConstraint_setLinearDampingZ");
	HX_MARK_MEMBER_NAME(PhysicsSpringConstraint_obj::hx_PhysicsSpringConstraint_setLinearStrengthX,"hx_PhysicsSpringConstraint_setLinearStrengthX");
	HX_MARK_MEMBER_NAME(PhysicsSpringConstraint_obj::hx_PhysicsSpringConstraint_setLinearStrengthY,"hx_PhysicsSpringConstraint_setLinearStrengthY");
	HX_MARK_MEMBER_NAME(PhysicsSpringConstraint_obj::hx_PhysicsSpringConstraint_setLinearStrengthZ,"hx_PhysicsSpringConstraint_setLinearStrengthZ");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PhysicsSpringConstraint_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PhysicsSpringConstraint_obj::hx_PhysicsSpringConstraint_setAngularDampingX,"hx_PhysicsSpringConstraint_setAngularDampingX");
	HX_VISIT_MEMBER_NAME(PhysicsSpringConstraint_obj::hx_PhysicsSpringConstraint_setAngularDampingY,"hx_PhysicsSpringConstraint_setAngularDampingY");
	HX_VISIT_MEMBER_NAME(PhysicsSpringConstraint_obj::hx_PhysicsSpringConstraint_setAngularDampingZ,"hx_PhysicsSpringConstraint_setAngularDampingZ");
	HX_VISIT_MEMBER_NAME(PhysicsSpringConstraint_obj::hx_PhysicsSpringConstraint_setAngularStrengthX,"hx_PhysicsSpringConstraint_setAngularStrengthX");
	HX_VISIT_MEMBER_NAME(PhysicsSpringConstraint_obj::hx_PhysicsSpringConstraint_setAngularStrengthY,"hx_PhysicsSpringConstraint_setAngularStrengthY");
	HX_VISIT_MEMBER_NAME(PhysicsSpringConstraint_obj::hx_PhysicsSpringConstraint_setAngularStrengthZ,"hx_PhysicsSpringConstraint_setAngularStrengthZ");
	HX_VISIT_MEMBER_NAME(PhysicsSpringConstraint_obj::hx_PhysicsSpringConstraint_setLinearDampingX,"hx_PhysicsSpringConstraint_setLinearDampingX");
	HX_VISIT_MEMBER_NAME(PhysicsSpringConstraint_obj::hx_PhysicsSpringConstraint_setLinearDampingY,"hx_PhysicsSpringConstraint_setLinearDampingY");
	HX_VISIT_MEMBER_NAME(PhysicsSpringConstraint_obj::hx_PhysicsSpringConstraint_setLinearDampingZ,"hx_PhysicsSpringConstraint_setLinearDampingZ");
	HX_VISIT_MEMBER_NAME(PhysicsSpringConstraint_obj::hx_PhysicsSpringConstraint_setLinearStrengthX,"hx_PhysicsSpringConstraint_setLinearStrengthX");
	HX_VISIT_MEMBER_NAME(PhysicsSpringConstraint_obj::hx_PhysicsSpringConstraint_setLinearStrengthY,"hx_PhysicsSpringConstraint_setLinearStrengthY");
	HX_VISIT_MEMBER_NAME(PhysicsSpringConstraint_obj::hx_PhysicsSpringConstraint_setLinearStrengthZ,"hx_PhysicsSpringConstraint_setLinearStrengthZ");
};

#endif

Class PhysicsSpringConstraint_obj::__mClass;

void PhysicsSpringConstraint_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.PhysicsSpringConstraint"), hx::TCanCast< PhysicsSpringConstraint_obj> ,sStaticFields,sMemberFields,
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

void PhysicsSpringConstraint_obj::__boot()
{
	hx_PhysicsSpringConstraint_setAngularDampingX= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsSpringConstraint >(),HX_CSTRING("setAngularDampingX"),(int)2);
	hx_PhysicsSpringConstraint_setAngularDampingY= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsSpringConstraint >(),HX_CSTRING("setAngularDampingY"),(int)2);
	hx_PhysicsSpringConstraint_setAngularDampingZ= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsSpringConstraint >(),HX_CSTRING("setAngularDampingZ"),(int)2);
	hx_PhysicsSpringConstraint_setAngularStrengthX= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsSpringConstraint >(),HX_CSTRING("setAngularStrengthX"),(int)2);
	hx_PhysicsSpringConstraint_setAngularStrengthY= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsSpringConstraint >(),HX_CSTRING("setAngularStrengthY"),(int)2);
	hx_PhysicsSpringConstraint_setAngularStrengthZ= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsSpringConstraint >(),HX_CSTRING("setAngularStrengthZ"),(int)2);
	hx_PhysicsSpringConstraint_setLinearDampingX= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsSpringConstraint >(),HX_CSTRING("setLinearDampingX"),(int)2);
	hx_PhysicsSpringConstraint_setLinearDampingY= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsSpringConstraint >(),HX_CSTRING("setLinearDampingY"),(int)2);
	hx_PhysicsSpringConstraint_setLinearDampingZ= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsSpringConstraint >(),HX_CSTRING("setLinearDampingZ"),(int)2);
	hx_PhysicsSpringConstraint_setLinearStrengthX= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsSpringConstraint >(),HX_CSTRING("setLinearStrengthX"),(int)2);
	hx_PhysicsSpringConstraint_setLinearStrengthY= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsSpringConstraint >(),HX_CSTRING("setLinearStrengthY"),(int)2);
	hx_PhysicsSpringConstraint_setLinearStrengthZ= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsSpringConstraint >(),HX_CSTRING("setLinearStrengthZ"),(int)2);
}

} // end namespace org
} // end namespace gameplay3d
