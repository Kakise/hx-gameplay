#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_cpp_vm_WeakRef
#include <cpp/vm/WeakRef.h>
#endif
#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsCollisionObject
#include <org/gameplay3d/PhysicsCollisionObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsRigidBody
#include <org/gameplay3d/PhysicsRigidBody.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsVehicle
#include <org/gameplay3d/PhysicsVehicle.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsVehicleWheel
#include <org/gameplay3d/PhysicsVehicleWheel.h>
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

Void PhysicsVehicle_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.PhysicsVehicle","new",0x5ffd6204,"org.gameplay3d.PhysicsVehicle.new","org/gameplay3d/PhysicsVehicle.hx",9,0xbf63084c)
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

//PhysicsVehicle_obj::~PhysicsVehicle_obj() { }

Dynamic PhysicsVehicle_obj::__CreateEmpty() { return  new PhysicsVehicle_obj; }
hx::ObjectPtr< PhysicsVehicle_obj > PhysicsVehicle_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< PhysicsVehicle_obj > result = new PhysicsVehicle_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic PhysicsVehicle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PhysicsVehicle_obj > result = new PhysicsVehicle_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void PhysicsVehicle_obj::addWheel( ::org::gameplay3d::PhysicsVehicleWheel wheel){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsVehicle","addWheel",0xd0a75696,"org.gameplay3d.PhysicsVehicle.addWheel","org/gameplay3d/PhysicsVehicle.hx",18,0xbf63084c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(wheel,"wheel")
		HX_STACK_LINE(18)
		::org::gameplay3d::PhysicsVehicle_obj::hx_PhysicsVehicle_addWheel(this->nativeObject,(  (((wheel == null()))) ? Dynamic(null()) : Dynamic(wheel->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsVehicle_obj,addWheel,(void))

Float PhysicsVehicle_obj::getBoostGain( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsVehicle","getBoostGain",0xd9fdc7a8,"org.gameplay3d.PhysicsVehicle.getBoostGain","org/gameplay3d/PhysicsVehicle.hx",24,0xbf63084c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(24)
	return ::org::gameplay3d::PhysicsVehicle_obj::hx_PhysicsVehicle_getBoostGain(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsVehicle_obj,getBoostGain,return )

Float PhysicsVehicle_obj::getBoostSpeed( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsVehicle","getBoostSpeed",0xd6c7043e,"org.gameplay3d.PhysicsVehicle.getBoostSpeed","org/gameplay3d/PhysicsVehicle.hx",30,0xbf63084c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(30)
	return ::org::gameplay3d::PhysicsVehicle_obj::hx_PhysicsVehicle_getBoostSpeed(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsVehicle_obj,getBoostSpeed,return )

Float PhysicsVehicle_obj::getBrakedownFull( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsVehicle","getBrakedownFull",0x785acfe2,"org.gameplay3d.PhysicsVehicle.getBrakedownFull","org/gameplay3d/PhysicsVehicle.hx",36,0xbf63084c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(36)
	return ::org::gameplay3d::PhysicsVehicle_obj::hx_PhysicsVehicle_getBrakedownFull(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsVehicle_obj,getBrakedownFull,return )

Float PhysicsVehicle_obj::getBrakedownStart( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsVehicle","getBrakedownStart",0x529f16af,"org.gameplay3d.PhysicsVehicle.getBrakedownStart","org/gameplay3d/PhysicsVehicle.hx",42,0xbf63084c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(42)
	return ::org::gameplay3d::PhysicsVehicle_obj::hx_PhysicsVehicle_getBrakedownStart(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsVehicle_obj,getBrakedownStart,return )

Float PhysicsVehicle_obj::getBrakingForce( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsVehicle","getBrakingForce",0x4259f7bd,"org.gameplay3d.PhysicsVehicle.getBrakingForce","org/gameplay3d/PhysicsVehicle.hx",48,0xbf63084c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(48)
	return ::org::gameplay3d::PhysicsVehicle_obj::hx_PhysicsVehicle_getBrakingForce(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsVehicle_obj,getBrakingForce,return )

Float PhysicsVehicle_obj::getDownForce( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsVehicle","getDownForce",0x6ad23c8f,"org.gameplay3d.PhysicsVehicle.getDownForce","org/gameplay3d/PhysicsVehicle.hx",54,0xbf63084c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(54)
	return ::org::gameplay3d::PhysicsVehicle_obj::hx_PhysicsVehicle_getDownForce(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsVehicle_obj,getDownForce,return )

Float PhysicsVehicle_obj::getDrivedownFull( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsVehicle","getDrivedownFull",0x4e024b81,"org.gameplay3d.PhysicsVehicle.getDrivedownFull","org/gameplay3d/PhysicsVehicle.hx",60,0xbf63084c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(60)
	return ::org::gameplay3d::PhysicsVehicle_obj::hx_PhysicsVehicle_getDrivedownFull(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsVehicle_obj,getDrivedownFull,return )

Float PhysicsVehicle_obj::getDrivedownStart( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsVehicle","getDrivedownStart",0x6f83c630,"org.gameplay3d.PhysicsVehicle.getDrivedownStart","org/gameplay3d/PhysicsVehicle.hx",66,0xbf63084c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(66)
	return ::org::gameplay3d::PhysicsVehicle_obj::hx_PhysicsVehicle_getDrivedownStart(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsVehicle_obj,getDrivedownStart,return )

Float PhysicsVehicle_obj::getDrivingForce( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsVehicle","getDrivingForce",0xd88c14fe,"org.gameplay3d.PhysicsVehicle.getDrivingForce","org/gameplay3d/PhysicsVehicle.hx",72,0xbf63084c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(72)
	return ::org::gameplay3d::PhysicsVehicle_obj::hx_PhysicsVehicle_getDrivingForce(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsVehicle_obj,getDrivingForce,return )

int PhysicsVehicle_obj::getNumWheels( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsVehicle","getNumWheels",0xba5cd4c4,"org.gameplay3d.PhysicsVehicle.getNumWheels","org/gameplay3d/PhysicsVehicle.hx",78,0xbf63084c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(78)
	return ::org::gameplay3d::PhysicsVehicle_obj::hx_PhysicsVehicle_getNumWheels(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsVehicle_obj,getNumWheels,return )

::org::gameplay3d::PhysicsRigidBody PhysicsVehicle_obj::getRigidBody( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsVehicle","getRigidBody",0x2bfb9b53,"org.gameplay3d.PhysicsVehicle.getRigidBody","org/gameplay3d/PhysicsVehicle.hx",84,0xbf63084c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(84)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(84)
	Dynamic nativeObject = ::org::gameplay3d::PhysicsVehicle_obj::hx_PhysicsVehicle_getRigidBody(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(84)
	if (((nativeObject == null()))){
		HX_STACK_LINE(84)
		return null();
	}
	else{
		HX_STACK_LINE(84)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(84)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(84)
			::org::gameplay3d::PhysicsRigidBody result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(84)
			if (((result == null()))){
				HX_STACK_LINE(84)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(84)
				::org::gameplay3d::PhysicsRigidBody _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(84)
				result = _g;
				HX_STACK_LINE(84)
				ref->set(result);
			}
			HX_STACK_LINE(84)
			return result;
		}
		else{
			HX_STACK_LINE(84)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(84)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(84)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsVehicle_obj,getRigidBody,return )

Float PhysicsVehicle_obj::getSpeedKph( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsVehicle","getSpeedKph",0x64a17a36,"org.gameplay3d.PhysicsVehicle.getSpeedKph","org/gameplay3d/PhysicsVehicle.hx",90,0xbf63084c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(90)
	return ::org::gameplay3d::PhysicsVehicle_obj::hx_PhysicsVehicle_getSpeedKph(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsVehicle_obj,getSpeedKph,return )

Float PhysicsVehicle_obj::getSpeedSmoothKph( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsVehicle","getSpeedSmoothKph",0x939a0ae8,"org.gameplay3d.PhysicsVehicle.getSpeedSmoothKph","org/gameplay3d/PhysicsVehicle.hx",96,0xbf63084c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(96)
	return ::org::gameplay3d::PhysicsVehicle_obj::hx_PhysicsVehicle_getSpeedSmoothKph(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsVehicle_obj,getSpeedSmoothKph,return )

Float PhysicsVehicle_obj::getSteerdownGain( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsVehicle","getSteerdownGain",0xd6393a78,"org.gameplay3d.PhysicsVehicle.getSteerdownGain","org/gameplay3d/PhysicsVehicle.hx",102,0xbf63084c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(102)
	return ::org::gameplay3d::PhysicsVehicle_obj::hx_PhysicsVehicle_getSteerdownGain(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsVehicle_obj,getSteerdownGain,return )

Float PhysicsVehicle_obj::getSteerdownSpeed( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsVehicle","getSteerdownSpeed",0x8e90076e,"org.gameplay3d.PhysicsVehicle.getSteerdownSpeed","org/gameplay3d/PhysicsVehicle.hx",108,0xbf63084c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(108)
	return ::org::gameplay3d::PhysicsVehicle_obj::hx_PhysicsVehicle_getSteerdownSpeed(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsVehicle_obj,getSteerdownSpeed,return )

Float PhysicsVehicle_obj::getSteeringGain( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsVehicle","getSteeringGain",0x966471ea,"org.gameplay3d.PhysicsVehicle.getSteeringGain","org/gameplay3d/PhysicsVehicle.hx",114,0xbf63084c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(114)
	return ::org::gameplay3d::PhysicsVehicle_obj::hx_PhysicsVehicle_getSteeringGain(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsVehicle_obj,getSteeringGain,return )

int PhysicsVehicle_obj::getType( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsVehicle","getType",0x8f88d614,"org.gameplay3d.PhysicsVehicle.getType","org/gameplay3d/PhysicsVehicle.hx",120,0xbf63084c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(120)
	return ::org::gameplay3d::PhysicsVehicle_obj::hx_PhysicsVehicle_getType(this->nativeObject);
}


::org::gameplay3d::PhysicsVehicleWheel PhysicsVehicle_obj::getWheel( int i){
	HX_STACK_FRAME("org.gameplay3d.PhysicsVehicle","getWheel",0xb7214001,"org.gameplay3d.PhysicsVehicle.getWheel","org/gameplay3d/PhysicsVehicle.hx",126,0xbf63084c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(126)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::PhysicsVehicleWheel >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(126)
	Dynamic nativeObject = ::org::gameplay3d::PhysicsVehicle_obj::hx_PhysicsVehicle_getWheel(this->nativeObject,i);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(126)
	if (((nativeObject == null()))){
		HX_STACK_LINE(126)
		return null();
	}
	else{
		HX_STACK_LINE(126)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(126)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(126)
			::org::gameplay3d::PhysicsVehicleWheel result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(126)
			if (((result == null()))){
				HX_STACK_LINE(126)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(126)
				::org::gameplay3d::PhysicsVehicleWheel _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(126)
				result = _g;
				HX_STACK_LINE(126)
				ref->set(result);
			}
			HX_STACK_LINE(126)
			return result;
		}
		else{
			HX_STACK_LINE(126)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(126)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(126)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsVehicle_obj,getWheel,return )

Void PhysicsVehicle_obj::reset( ){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsVehicle","reset",0xb1348c73,"org.gameplay3d.PhysicsVehicle.reset","org/gameplay3d/PhysicsVehicle.hx",132,0xbf63084c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(132)
		::org::gameplay3d::PhysicsVehicle_obj::hx_PhysicsVehicle_reset(this->nativeObject);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsVehicle_obj,reset,(void))

Void PhysicsVehicle_obj::setBoost( Float boostSpeed,Float boostGain){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsVehicle","setBoost",0x52bc8bfd,"org.gameplay3d.PhysicsVehicle.setBoost","org/gameplay3d/PhysicsVehicle.hx",138,0xbf63084c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(boostSpeed,"boostSpeed")
		HX_STACK_ARG(boostGain,"boostGain")
		HX_STACK_LINE(138)
		::org::gameplay3d::PhysicsVehicle_obj::hx_PhysicsVehicle_setBoost(this->nativeObject,boostSpeed,boostGain);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PhysicsVehicle_obj,setBoost,(void))

Void PhysicsVehicle_obj::setBrakedown( Float brakedownStart,Float brakedownFull){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsVehicle","setBrakedown",0x91ba0827,"org.gameplay3d.PhysicsVehicle.setBrakedown","org/gameplay3d/PhysicsVehicle.hx",144,0xbf63084c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(brakedownStart,"brakedownStart")
		HX_STACK_ARG(brakedownFull,"brakedownFull")
		HX_STACK_LINE(144)
		::org::gameplay3d::PhysicsVehicle_obj::hx_PhysicsVehicle_setBrakedown(this->nativeObject,brakedownStart,brakedownFull);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PhysicsVehicle_obj,setBrakedown,(void))

Void PhysicsVehicle_obj::setBrakingForce( Float brakingForce){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsVehicle","setBrakingForce",0x3e2574c9,"org.gameplay3d.PhysicsVehicle.setBrakingForce","org/gameplay3d/PhysicsVehicle.hx",150,0xbf63084c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(brakingForce,"brakingForce")
		HX_STACK_LINE(150)
		::org::gameplay3d::PhysicsVehicle_obj::hx_PhysicsVehicle_setBrakingForce(this->nativeObject,brakingForce);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsVehicle_obj,setBrakingForce,(void))

Void PhysicsVehicle_obj::setDownforce( Float downforce){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsVehicle","setDownforce",0xec9df023,"org.gameplay3d.PhysicsVehicle.setDownforce","org/gameplay3d/PhysicsVehicle.hx",156,0xbf63084c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(downforce,"downforce")
		HX_STACK_LINE(156)
		::org::gameplay3d::PhysicsVehicle_obj::hx_PhysicsVehicle_setDownforce(this->nativeObject,downforce);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsVehicle_obj,setDownforce,(void))

Void PhysicsVehicle_obj::setDrivedown( Float drivedownStart,Float drivedownFull){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsVehicle","setDrivedown",0xea358846,"org.gameplay3d.PhysicsVehicle.setDrivedown","org/gameplay3d/PhysicsVehicle.hx",162,0xbf63084c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(drivedownStart,"drivedownStart")
		HX_STACK_ARG(drivedownFull,"drivedownFull")
		HX_STACK_LINE(162)
		::org::gameplay3d::PhysicsVehicle_obj::hx_PhysicsVehicle_setDrivedown(this->nativeObject,drivedownStart,drivedownFull);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PhysicsVehicle_obj,setDrivedown,(void))

Void PhysicsVehicle_obj::setDrivingForce( Float drivingForce){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsVehicle","setDrivingForce",0xd457920a,"org.gameplay3d.PhysicsVehicle.setDrivingForce","org/gameplay3d/PhysicsVehicle.hx",168,0xbf63084c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(drivingForce,"drivingForce")
		HX_STACK_LINE(168)
		::org::gameplay3d::PhysicsVehicle_obj::hx_PhysicsVehicle_setDrivingForce(this->nativeObject,drivingForce);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsVehicle_obj,setDrivingForce,(void))

Void PhysicsVehicle_obj::setEnabled( bool enable){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsVehicle","setEnabled",0xdf7bd3db,"org.gameplay3d.PhysicsVehicle.setEnabled","org/gameplay3d/PhysicsVehicle.hx",174,0xbf63084c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(enable,"enable")
		HX_STACK_LINE(174)
		::org::gameplay3d::PhysicsVehicle_obj::hx_PhysicsVehicle_setEnabled(this->nativeObject,enable);
	}
return null();
}


Void PhysicsVehicle_obj::setSteerdown( Float steerdownSpeed,Float steerdownGain){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsVehicle","setSteerdown",0xc28e20cd,"org.gameplay3d.PhysicsVehicle.setSteerdown","org/gameplay3d/PhysicsVehicle.hx",180,0xbf63084c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(steerdownSpeed,"steerdownSpeed")
		HX_STACK_ARG(steerdownGain,"steerdownGain")
		HX_STACK_LINE(180)
		::org::gameplay3d::PhysicsVehicle_obj::hx_PhysicsVehicle_setSteerdown(this->nativeObject,steerdownSpeed,steerdownGain);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PhysicsVehicle_obj,setSteerdown,(void))

Void PhysicsVehicle_obj::setSteeringGain( Float steeringGain){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsVehicle","setSteeringGain",0x922feef6,"org.gameplay3d.PhysicsVehicle.setSteeringGain","org/gameplay3d/PhysicsVehicle.hx",186,0xbf63084c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(steeringGain,"steeringGain")
		HX_STACK_LINE(186)
		::org::gameplay3d::PhysicsVehicle_obj::hx_PhysicsVehicle_setSteeringGain(this->nativeObject,steeringGain);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsVehicle_obj,setSteeringGain,(void))

Void PhysicsVehicle_obj::update( Float elapsedTime,Float steering,Float braking,Float driving){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsVehicle","update",0xdb5392e5,"org.gameplay3d.PhysicsVehicle.update","org/gameplay3d/PhysicsVehicle.hx",192,0xbf63084c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsedTime,"elapsedTime")
		HX_STACK_ARG(steering,"steering")
		HX_STACK_ARG(braking,"braking")
		HX_STACK_ARG(driving,"driving")
		HX_STACK_LINE(192)
		::org::gameplay3d::PhysicsVehicle_obj::hx_PhysicsVehicle_update(this->nativeObject,elapsedTime,steering,braking,driving);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(PhysicsVehicle_obj,update,(void))

Dynamic PhysicsVehicle_obj::hx_PhysicsVehicle_addWheel;

Dynamic PhysicsVehicle_obj::hx_PhysicsVehicle_getBoostGain;

Dynamic PhysicsVehicle_obj::hx_PhysicsVehicle_getBoostSpeed;

Dynamic PhysicsVehicle_obj::hx_PhysicsVehicle_getBrakedownFull;

Dynamic PhysicsVehicle_obj::hx_PhysicsVehicle_getBrakedownStart;

Dynamic PhysicsVehicle_obj::hx_PhysicsVehicle_getBrakingForce;

Dynamic PhysicsVehicle_obj::hx_PhysicsVehicle_getDownForce;

Dynamic PhysicsVehicle_obj::hx_PhysicsVehicle_getDrivedownFull;

Dynamic PhysicsVehicle_obj::hx_PhysicsVehicle_getDrivedownStart;

Dynamic PhysicsVehicle_obj::hx_PhysicsVehicle_getDrivingForce;

Dynamic PhysicsVehicle_obj::hx_PhysicsVehicle_getNumWheels;

Dynamic PhysicsVehicle_obj::hx_PhysicsVehicle_getRigidBody;

Dynamic PhysicsVehicle_obj::hx_PhysicsVehicle_getSpeedKph;

Dynamic PhysicsVehicle_obj::hx_PhysicsVehicle_getSpeedSmoothKph;

Dynamic PhysicsVehicle_obj::hx_PhysicsVehicle_getSteerdownGain;

Dynamic PhysicsVehicle_obj::hx_PhysicsVehicle_getSteerdownSpeed;

Dynamic PhysicsVehicle_obj::hx_PhysicsVehicle_getSteeringGain;

Dynamic PhysicsVehicle_obj::hx_PhysicsVehicle_getType;

Dynamic PhysicsVehicle_obj::hx_PhysicsVehicle_getWheel;

Dynamic PhysicsVehicle_obj::hx_PhysicsVehicle_reset;

Dynamic PhysicsVehicle_obj::hx_PhysicsVehicle_setBoost;

Dynamic PhysicsVehicle_obj::hx_PhysicsVehicle_setBrakedown;

Dynamic PhysicsVehicle_obj::hx_PhysicsVehicle_setBrakingForce;

Dynamic PhysicsVehicle_obj::hx_PhysicsVehicle_setDownforce;

Dynamic PhysicsVehicle_obj::hx_PhysicsVehicle_setDrivedown;

Dynamic PhysicsVehicle_obj::hx_PhysicsVehicle_setDrivingForce;

Dynamic PhysicsVehicle_obj::hx_PhysicsVehicle_setEnabled;

Dynamic PhysicsVehicle_obj::hx_PhysicsVehicle_setSteerdown;

Dynamic PhysicsVehicle_obj::hx_PhysicsVehicle_setSteeringGain;

Dynamic PhysicsVehicle_obj::hx_PhysicsVehicle_update;


PhysicsVehicle_obj::PhysicsVehicle_obj()
{
}

Dynamic PhysicsVehicle_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addWheel") ) { return addWheel_dyn(); }
		if (HX_FIELD_EQ(inName,"getWheel") ) { return getWheel_dyn(); }
		if (HX_FIELD_EQ(inName,"setBoost") ) { return setBoost_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setEnabled") ) { return setEnabled_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getSpeedKph") ) { return getSpeedKph_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getBoostGain") ) { return getBoostGain_dyn(); }
		if (HX_FIELD_EQ(inName,"getDownForce") ) { return getDownForce_dyn(); }
		if (HX_FIELD_EQ(inName,"getNumWheels") ) { return getNumWheels_dyn(); }
		if (HX_FIELD_EQ(inName,"getRigidBody") ) { return getRigidBody_dyn(); }
		if (HX_FIELD_EQ(inName,"setBrakedown") ) { return setBrakedown_dyn(); }
		if (HX_FIELD_EQ(inName,"setDownforce") ) { return setDownforce_dyn(); }
		if (HX_FIELD_EQ(inName,"setDrivedown") ) { return setDrivedown_dyn(); }
		if (HX_FIELD_EQ(inName,"setSteerdown") ) { return setSteerdown_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getBoostSpeed") ) { return getBoostSpeed_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getBrakingForce") ) { return getBrakingForce_dyn(); }
		if (HX_FIELD_EQ(inName,"getDrivingForce") ) { return getDrivingForce_dyn(); }
		if (HX_FIELD_EQ(inName,"getSteeringGain") ) { return getSteeringGain_dyn(); }
		if (HX_FIELD_EQ(inName,"setBrakingForce") ) { return setBrakingForce_dyn(); }
		if (HX_FIELD_EQ(inName,"setDrivingForce") ) { return setDrivingForce_dyn(); }
		if (HX_FIELD_EQ(inName,"setSteeringGain") ) { return setSteeringGain_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getBrakedownFull") ) { return getBrakedownFull_dyn(); }
		if (HX_FIELD_EQ(inName,"getDrivedownFull") ) { return getDrivedownFull_dyn(); }
		if (HX_FIELD_EQ(inName,"getSteerdownGain") ) { return getSteerdownGain_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getBrakedownStart") ) { return getBrakedownStart_dyn(); }
		if (HX_FIELD_EQ(inName,"getDrivedownStart") ) { return getDrivedownStart_dyn(); }
		if (HX_FIELD_EQ(inName,"getSpeedSmoothKph") ) { return getSpeedSmoothKph_dyn(); }
		if (HX_FIELD_EQ(inName,"getSteerdownSpeed") ) { return getSteerdownSpeed_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_reset") ) { return hx_PhysicsVehicle_reset; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_update") ) { return hx_PhysicsVehicle_update; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_getType") ) { return hx_PhysicsVehicle_getType; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_addWheel") ) { return hx_PhysicsVehicle_addWheel; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_getWheel") ) { return hx_PhysicsVehicle_getWheel; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_setBoost") ) { return hx_PhysicsVehicle_setBoost; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_setEnabled") ) { return hx_PhysicsVehicle_setEnabled; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_getSpeedKph") ) { return hx_PhysicsVehicle_getSpeedKph; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_getBoostGain") ) { return hx_PhysicsVehicle_getBoostGain; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_getDownForce") ) { return hx_PhysicsVehicle_getDownForce; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_getNumWheels") ) { return hx_PhysicsVehicle_getNumWheels; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_getRigidBody") ) { return hx_PhysicsVehicle_getRigidBody; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_setBrakedown") ) { return hx_PhysicsVehicle_setBrakedown; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_setDownforce") ) { return hx_PhysicsVehicle_setDownforce; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_setDrivedown") ) { return hx_PhysicsVehicle_setDrivedown; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_setSteerdown") ) { return hx_PhysicsVehicle_setSteerdown; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_getBoostSpeed") ) { return hx_PhysicsVehicle_getBoostSpeed; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_getBrakingForce") ) { return hx_PhysicsVehicle_getBrakingForce; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_getDrivingForce") ) { return hx_PhysicsVehicle_getDrivingForce; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_getSteeringGain") ) { return hx_PhysicsVehicle_getSteeringGain; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_setBrakingForce") ) { return hx_PhysicsVehicle_setBrakingForce; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_setDrivingForce") ) { return hx_PhysicsVehicle_setDrivingForce; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_setSteeringGain") ) { return hx_PhysicsVehicle_setSteeringGain; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_getBrakedownFull") ) { return hx_PhysicsVehicle_getBrakedownFull; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_getDrivedownFull") ) { return hx_PhysicsVehicle_getDrivedownFull; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_getSteerdownGain") ) { return hx_PhysicsVehicle_getSteerdownGain; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_getBrakedownStart") ) { return hx_PhysicsVehicle_getBrakedownStart; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_getDrivedownStart") ) { return hx_PhysicsVehicle_getDrivedownStart; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_getSpeedSmoothKph") ) { return hx_PhysicsVehicle_getSpeedSmoothKph; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_getSteerdownSpeed") ) { return hx_PhysicsVehicle_getSteerdownSpeed; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PhysicsVehicle_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 23:
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_reset") ) { hx_PhysicsVehicle_reset=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_update") ) { hx_PhysicsVehicle_update=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_getType") ) { hx_PhysicsVehicle_getType=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_addWheel") ) { hx_PhysicsVehicle_addWheel=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_getWheel") ) { hx_PhysicsVehicle_getWheel=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_setBoost") ) { hx_PhysicsVehicle_setBoost=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_setEnabled") ) { hx_PhysicsVehicle_setEnabled=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_getSpeedKph") ) { hx_PhysicsVehicle_getSpeedKph=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_getBoostGain") ) { hx_PhysicsVehicle_getBoostGain=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_getDownForce") ) { hx_PhysicsVehicle_getDownForce=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_getNumWheels") ) { hx_PhysicsVehicle_getNumWheels=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_getRigidBody") ) { hx_PhysicsVehicle_getRigidBody=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_setBrakedown") ) { hx_PhysicsVehicle_setBrakedown=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_setDownforce") ) { hx_PhysicsVehicle_setDownforce=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_setDrivedown") ) { hx_PhysicsVehicle_setDrivedown=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_setSteerdown") ) { hx_PhysicsVehicle_setSteerdown=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_getBoostSpeed") ) { hx_PhysicsVehicle_getBoostSpeed=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_getBrakingForce") ) { hx_PhysicsVehicle_getBrakingForce=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_getDrivingForce") ) { hx_PhysicsVehicle_getDrivingForce=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_getSteeringGain") ) { hx_PhysicsVehicle_getSteeringGain=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_setBrakingForce") ) { hx_PhysicsVehicle_setBrakingForce=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_setDrivingForce") ) { hx_PhysicsVehicle_setDrivingForce=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_setSteeringGain") ) { hx_PhysicsVehicle_setSteeringGain=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_getBrakedownFull") ) { hx_PhysicsVehicle_getBrakedownFull=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_getDrivedownFull") ) { hx_PhysicsVehicle_getDrivedownFull=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_getSteerdownGain") ) { hx_PhysicsVehicle_getSteerdownGain=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_getBrakedownStart") ) { hx_PhysicsVehicle_getBrakedownStart=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_getDrivedownStart") ) { hx_PhysicsVehicle_getDrivedownStart=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_getSpeedSmoothKph") ) { hx_PhysicsVehicle_getSpeedSmoothKph=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicle_getSteerdownSpeed") ) { hx_PhysicsVehicle_getSteerdownSpeed=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PhysicsVehicle_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("hx_PhysicsVehicle_addWheel"),
	HX_CSTRING("hx_PhysicsVehicle_getBoostGain"),
	HX_CSTRING("hx_PhysicsVehicle_getBoostSpeed"),
	HX_CSTRING("hx_PhysicsVehicle_getBrakedownFull"),
	HX_CSTRING("hx_PhysicsVehicle_getBrakedownStart"),
	HX_CSTRING("hx_PhysicsVehicle_getBrakingForce"),
	HX_CSTRING("hx_PhysicsVehicle_getDownForce"),
	HX_CSTRING("hx_PhysicsVehicle_getDrivedownFull"),
	HX_CSTRING("hx_PhysicsVehicle_getDrivedownStart"),
	HX_CSTRING("hx_PhysicsVehicle_getDrivingForce"),
	HX_CSTRING("hx_PhysicsVehicle_getNumWheels"),
	HX_CSTRING("hx_PhysicsVehicle_getRigidBody"),
	HX_CSTRING("hx_PhysicsVehicle_getSpeedKph"),
	HX_CSTRING("hx_PhysicsVehicle_getSpeedSmoothKph"),
	HX_CSTRING("hx_PhysicsVehicle_getSteerdownGain"),
	HX_CSTRING("hx_PhysicsVehicle_getSteerdownSpeed"),
	HX_CSTRING("hx_PhysicsVehicle_getSteeringGain"),
	HX_CSTRING("hx_PhysicsVehicle_getType"),
	HX_CSTRING("hx_PhysicsVehicle_getWheel"),
	HX_CSTRING("hx_PhysicsVehicle_reset"),
	HX_CSTRING("hx_PhysicsVehicle_setBoost"),
	HX_CSTRING("hx_PhysicsVehicle_setBrakedown"),
	HX_CSTRING("hx_PhysicsVehicle_setBrakingForce"),
	HX_CSTRING("hx_PhysicsVehicle_setDownforce"),
	HX_CSTRING("hx_PhysicsVehicle_setDrivedown"),
	HX_CSTRING("hx_PhysicsVehicle_setDrivingForce"),
	HX_CSTRING("hx_PhysicsVehicle_setEnabled"),
	HX_CSTRING("hx_PhysicsVehicle_setSteerdown"),
	HX_CSTRING("hx_PhysicsVehicle_setSteeringGain"),
	HX_CSTRING("hx_PhysicsVehicle_update"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("addWheel"),
	HX_CSTRING("getBoostGain"),
	HX_CSTRING("getBoostSpeed"),
	HX_CSTRING("getBrakedownFull"),
	HX_CSTRING("getBrakedownStart"),
	HX_CSTRING("getBrakingForce"),
	HX_CSTRING("getDownForce"),
	HX_CSTRING("getDrivedownFull"),
	HX_CSTRING("getDrivedownStart"),
	HX_CSTRING("getDrivingForce"),
	HX_CSTRING("getNumWheels"),
	HX_CSTRING("getRigidBody"),
	HX_CSTRING("getSpeedKph"),
	HX_CSTRING("getSpeedSmoothKph"),
	HX_CSTRING("getSteerdownGain"),
	HX_CSTRING("getSteerdownSpeed"),
	HX_CSTRING("getSteeringGain"),
	HX_CSTRING("getType"),
	HX_CSTRING("getWheel"),
	HX_CSTRING("reset"),
	HX_CSTRING("setBoost"),
	HX_CSTRING("setBrakedown"),
	HX_CSTRING("setBrakingForce"),
	HX_CSTRING("setDownforce"),
	HX_CSTRING("setDrivedown"),
	HX_CSTRING("setDrivingForce"),
	HX_CSTRING("setEnabled"),
	HX_CSTRING("setSteerdown"),
	HX_CSTRING("setSteeringGain"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PhysicsVehicle_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_addWheel,"hx_PhysicsVehicle_addWheel");
	HX_MARK_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_getBoostGain,"hx_PhysicsVehicle_getBoostGain");
	HX_MARK_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_getBoostSpeed,"hx_PhysicsVehicle_getBoostSpeed");
	HX_MARK_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_getBrakedownFull,"hx_PhysicsVehicle_getBrakedownFull");
	HX_MARK_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_getBrakedownStart,"hx_PhysicsVehicle_getBrakedownStart");
	HX_MARK_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_getBrakingForce,"hx_PhysicsVehicle_getBrakingForce");
	HX_MARK_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_getDownForce,"hx_PhysicsVehicle_getDownForce");
	HX_MARK_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_getDrivedownFull,"hx_PhysicsVehicle_getDrivedownFull");
	HX_MARK_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_getDrivedownStart,"hx_PhysicsVehicle_getDrivedownStart");
	HX_MARK_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_getDrivingForce,"hx_PhysicsVehicle_getDrivingForce");
	HX_MARK_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_getNumWheels,"hx_PhysicsVehicle_getNumWheels");
	HX_MARK_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_getRigidBody,"hx_PhysicsVehicle_getRigidBody");
	HX_MARK_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_getSpeedKph,"hx_PhysicsVehicle_getSpeedKph");
	HX_MARK_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_getSpeedSmoothKph,"hx_PhysicsVehicle_getSpeedSmoothKph");
	HX_MARK_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_getSteerdownGain,"hx_PhysicsVehicle_getSteerdownGain");
	HX_MARK_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_getSteerdownSpeed,"hx_PhysicsVehicle_getSteerdownSpeed");
	HX_MARK_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_getSteeringGain,"hx_PhysicsVehicle_getSteeringGain");
	HX_MARK_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_getType,"hx_PhysicsVehicle_getType");
	HX_MARK_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_getWheel,"hx_PhysicsVehicle_getWheel");
	HX_MARK_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_reset,"hx_PhysicsVehicle_reset");
	HX_MARK_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_setBoost,"hx_PhysicsVehicle_setBoost");
	HX_MARK_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_setBrakedown,"hx_PhysicsVehicle_setBrakedown");
	HX_MARK_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_setBrakingForce,"hx_PhysicsVehicle_setBrakingForce");
	HX_MARK_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_setDownforce,"hx_PhysicsVehicle_setDownforce");
	HX_MARK_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_setDrivedown,"hx_PhysicsVehicle_setDrivedown");
	HX_MARK_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_setDrivingForce,"hx_PhysicsVehicle_setDrivingForce");
	HX_MARK_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_setEnabled,"hx_PhysicsVehicle_setEnabled");
	HX_MARK_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_setSteerdown,"hx_PhysicsVehicle_setSteerdown");
	HX_MARK_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_setSteeringGain,"hx_PhysicsVehicle_setSteeringGain");
	HX_MARK_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_update,"hx_PhysicsVehicle_update");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PhysicsVehicle_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_addWheel,"hx_PhysicsVehicle_addWheel");
	HX_VISIT_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_getBoostGain,"hx_PhysicsVehicle_getBoostGain");
	HX_VISIT_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_getBoostSpeed,"hx_PhysicsVehicle_getBoostSpeed");
	HX_VISIT_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_getBrakedownFull,"hx_PhysicsVehicle_getBrakedownFull");
	HX_VISIT_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_getBrakedownStart,"hx_PhysicsVehicle_getBrakedownStart");
	HX_VISIT_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_getBrakingForce,"hx_PhysicsVehicle_getBrakingForce");
	HX_VISIT_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_getDownForce,"hx_PhysicsVehicle_getDownForce");
	HX_VISIT_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_getDrivedownFull,"hx_PhysicsVehicle_getDrivedownFull");
	HX_VISIT_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_getDrivedownStart,"hx_PhysicsVehicle_getDrivedownStart");
	HX_VISIT_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_getDrivingForce,"hx_PhysicsVehicle_getDrivingForce");
	HX_VISIT_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_getNumWheels,"hx_PhysicsVehicle_getNumWheels");
	HX_VISIT_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_getRigidBody,"hx_PhysicsVehicle_getRigidBody");
	HX_VISIT_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_getSpeedKph,"hx_PhysicsVehicle_getSpeedKph");
	HX_VISIT_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_getSpeedSmoothKph,"hx_PhysicsVehicle_getSpeedSmoothKph");
	HX_VISIT_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_getSteerdownGain,"hx_PhysicsVehicle_getSteerdownGain");
	HX_VISIT_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_getSteerdownSpeed,"hx_PhysicsVehicle_getSteerdownSpeed");
	HX_VISIT_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_getSteeringGain,"hx_PhysicsVehicle_getSteeringGain");
	HX_VISIT_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_getType,"hx_PhysicsVehicle_getType");
	HX_VISIT_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_getWheel,"hx_PhysicsVehicle_getWheel");
	HX_VISIT_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_reset,"hx_PhysicsVehicle_reset");
	HX_VISIT_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_setBoost,"hx_PhysicsVehicle_setBoost");
	HX_VISIT_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_setBrakedown,"hx_PhysicsVehicle_setBrakedown");
	HX_VISIT_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_setBrakingForce,"hx_PhysicsVehicle_setBrakingForce");
	HX_VISIT_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_setDownforce,"hx_PhysicsVehicle_setDownforce");
	HX_VISIT_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_setDrivedown,"hx_PhysicsVehicle_setDrivedown");
	HX_VISIT_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_setDrivingForce,"hx_PhysicsVehicle_setDrivingForce");
	HX_VISIT_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_setEnabled,"hx_PhysicsVehicle_setEnabled");
	HX_VISIT_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_setSteerdown,"hx_PhysicsVehicle_setSteerdown");
	HX_VISIT_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_setSteeringGain,"hx_PhysicsVehicle_setSteeringGain");
	HX_VISIT_MEMBER_NAME(PhysicsVehicle_obj::hx_PhysicsVehicle_update,"hx_PhysicsVehicle_update");
};

#endif

Class PhysicsVehicle_obj::__mClass;

void PhysicsVehicle_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.PhysicsVehicle"), hx::TCanCast< PhysicsVehicle_obj> ,sStaticFields,sMemberFields,
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

void PhysicsVehicle_obj::__boot()
{
	hx_PhysicsVehicle_addWheel= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicle >(),HX_CSTRING("addWheel"),(int)2);
	hx_PhysicsVehicle_getBoostGain= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicle >(),HX_CSTRING("getBoostGain"),(int)1);
	hx_PhysicsVehicle_getBoostSpeed= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicle >(),HX_CSTRING("getBoostSpeed"),(int)1);
	hx_PhysicsVehicle_getBrakedownFull= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicle >(),HX_CSTRING("getBrakedownFull"),(int)1);
	hx_PhysicsVehicle_getBrakedownStart= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicle >(),HX_CSTRING("getBrakedownStart"),(int)1);
	hx_PhysicsVehicle_getBrakingForce= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicle >(),HX_CSTRING("getBrakingForce"),(int)1);
	hx_PhysicsVehicle_getDownForce= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicle >(),HX_CSTRING("getDownForce"),(int)1);
	hx_PhysicsVehicle_getDrivedownFull= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicle >(),HX_CSTRING("getDrivedownFull"),(int)1);
	hx_PhysicsVehicle_getDrivedownStart= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicle >(),HX_CSTRING("getDrivedownStart"),(int)1);
	hx_PhysicsVehicle_getDrivingForce= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicle >(),HX_CSTRING("getDrivingForce"),(int)1);
	hx_PhysicsVehicle_getNumWheels= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicle >(),HX_CSTRING("getNumWheels"),(int)1);
	hx_PhysicsVehicle_getRigidBody= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicle >(),HX_CSTRING("getRigidBody"),(int)1);
	hx_PhysicsVehicle_getSpeedKph= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicle >(),HX_CSTRING("getSpeedKph"),(int)1);
	hx_PhysicsVehicle_getSpeedSmoothKph= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicle >(),HX_CSTRING("getSpeedSmoothKph"),(int)1);
	hx_PhysicsVehicle_getSteerdownGain= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicle >(),HX_CSTRING("getSteerdownGain"),(int)1);
	hx_PhysicsVehicle_getSteerdownSpeed= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicle >(),HX_CSTRING("getSteerdownSpeed"),(int)1);
	hx_PhysicsVehicle_getSteeringGain= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicle >(),HX_CSTRING("getSteeringGain"),(int)1);
	hx_PhysicsVehicle_getType= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicle >(),HX_CSTRING("getType"),(int)1);
	hx_PhysicsVehicle_getWheel= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicle >(),HX_CSTRING("getWheel"),(int)2);
	hx_PhysicsVehicle_reset= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicle >(),HX_CSTRING("reset"),(int)1);
	hx_PhysicsVehicle_setBoost= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicle >(),HX_CSTRING("setBoost"),(int)3);
	hx_PhysicsVehicle_setBrakedown= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicle >(),HX_CSTRING("setBrakedown"),(int)3);
	hx_PhysicsVehicle_setBrakingForce= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicle >(),HX_CSTRING("setBrakingForce"),(int)2);
	hx_PhysicsVehicle_setDownforce= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicle >(),HX_CSTRING("setDownforce"),(int)2);
	hx_PhysicsVehicle_setDrivedown= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicle >(),HX_CSTRING("setDrivedown"),(int)3);
	hx_PhysicsVehicle_setDrivingForce= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicle >(),HX_CSTRING("setDrivingForce"),(int)2);
	hx_PhysicsVehicle_setEnabled= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicle >(),HX_CSTRING("setEnabled"),(int)2);
	hx_PhysicsVehicle_setSteerdown= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicle >(),HX_CSTRING("setSteerdown"),(int)3);
	hx_PhysicsVehicle_setSteeringGain= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicle >(),HX_CSTRING("setSteeringGain"),(int)2);
	hx_PhysicsVehicle_update= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicle >(),HX_CSTRING("update"),(int)5);
}

} // end namespace org
} // end namespace gameplay3d
