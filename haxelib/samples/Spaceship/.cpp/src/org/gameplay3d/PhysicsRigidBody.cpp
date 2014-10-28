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
#ifndef INCLUDED_org_gameplay3d_Vector3
#include <org/gameplay3d/Vector3.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IVector3
#include <org/gameplay3d/immutable/IVector3.h>
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

Void PhysicsRigidBody_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody","new",0xab883945,"org.gameplay3d.PhysicsRigidBody.new","org/gameplay3d/PhysicsRigidBody.hx",13,0x6986ec2b)
HX_STACK_THIS(this)
HX_STACK_ARG(nativeObjectInitializer,"nativeObjectInitializer")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(13)
	super::__construct(nativeObjectInitializer,nativeObjectInitializerParams);
}
;
	return null();
}

//PhysicsRigidBody_obj::~PhysicsRigidBody_obj() { }

Dynamic PhysicsRigidBody_obj::__CreateEmpty() { return  new PhysicsRigidBody_obj; }
hx::ObjectPtr< PhysicsRigidBody_obj > PhysicsRigidBody_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< PhysicsRigidBody_obj > result = new PhysicsRigidBody_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic PhysicsRigidBody_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PhysicsRigidBody_obj > result = new PhysicsRigidBody_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void PhysicsRigidBody_obj::applyForce( ::org::gameplay3d::immutable::IVector3 force,::org::gameplay3d::Vector3 relativePosition){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody","applyForce",0x3baedb58,"org.gameplay3d.PhysicsRigidBody.applyForce","org/gameplay3d/PhysicsRigidBody.hx",29,0x6986ec2b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(force,"force")
		HX_STACK_ARG(relativePosition,"relativePosition")
		HX_STACK_LINE(29)
		::org::gameplay3d::PhysicsRigidBody_obj::hx_PhysicsRigidBody_applyForce(this->nativeObject,(  (((force == null()))) ? Dynamic(null()) : Dynamic(force->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((relativePosition == null()))) ? Dynamic(null()) : Dynamic(relativePosition->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PhysicsRigidBody_obj,applyForce,(void))

Void PhysicsRigidBody_obj::applyImpulse( ::org::gameplay3d::immutable::IVector3 impulse,::org::gameplay3d::Vector3 relativePosition){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody","applyImpulse",0x3ec66f62,"org.gameplay3d.PhysicsRigidBody.applyImpulse","org/gameplay3d/PhysicsRigidBody.hx",35,0x6986ec2b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(impulse,"impulse")
		HX_STACK_ARG(relativePosition,"relativePosition")
		HX_STACK_LINE(35)
		::org::gameplay3d::PhysicsRigidBody_obj::hx_PhysicsRigidBody_applyImpulse(this->nativeObject,(  (((impulse == null()))) ? Dynamic(null()) : Dynamic(impulse->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((relativePosition == null()))) ? Dynamic(null()) : Dynamic(relativePosition->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PhysicsRigidBody_obj,applyImpulse,(void))

Void PhysicsRigidBody_obj::applyTorque( ::org::gameplay3d::immutable::IVector3 torque){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody","applyTorque",0x965accbd,"org.gameplay3d.PhysicsRigidBody.applyTorque","org/gameplay3d/PhysicsRigidBody.hx",41,0x6986ec2b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(torque,"torque")
		HX_STACK_LINE(41)
		::org::gameplay3d::PhysicsRigidBody_obj::hx_PhysicsRigidBody_applyTorque(this->nativeObject,(  (((torque == null()))) ? Dynamic(null()) : Dynamic(torque->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsRigidBody_obj,applyTorque,(void))

Void PhysicsRigidBody_obj::applyTorqueImpulse( ::org::gameplay3d::immutable::IVector3 torque){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody","applyTorqueImpulse",0xf1236d78,"org.gameplay3d.PhysicsRigidBody.applyTorqueImpulse","org/gameplay3d/PhysicsRigidBody.hx",47,0x6986ec2b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(torque,"torque")
		HX_STACK_LINE(47)
		::org::gameplay3d::PhysicsRigidBody_obj::hx_PhysicsRigidBody_applyTorqueImpulse(this->nativeObject,(  (((torque == null()))) ? Dynamic(null()) : Dynamic(torque->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsRigidBody_obj,applyTorqueImpulse,(void))

Float PhysicsRigidBody_obj::getAngularDamping( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody","getAngularDamping",0xcb6388db,"org.gameplay3d.PhysicsRigidBody.getAngularDamping","org/gameplay3d/PhysicsRigidBody.hx",53,0x6986ec2b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(53)
	return ::org::gameplay3d::PhysicsRigidBody_obj::hx_PhysicsRigidBody_getAngularDamping(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsRigidBody_obj,getAngularDamping,return )

::org::gameplay3d::Vector3 PhysicsRigidBody_obj::getAngularFactor( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody","getAngularFactor",0x0e33e6d6,"org.gameplay3d.PhysicsRigidBody.getAngularFactor","org/gameplay3d/PhysicsRigidBody.hx",59,0x6986ec2b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_angularFactor == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(59)
			Dynamic nativeObject = ::org::gameplay3d::PhysicsRigidBody_obj::hx_PhysicsRigidBody_getAngularFactor(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
			HX_STACK_LINE(29)
			if (((nativeObject == null()))){
				HX_STACK_LINE(29)
				_g1 = null();
			}
			else{
				HX_STACK_LINE(29)
				if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
					HX_STACK_LINE(29)
					::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
					HX_STACK_LINE(29)
					::org::gameplay3d::Vector3 result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Vector3 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(29)
						result = _g;
						HX_STACK_LINE(29)
						ref->set(result);
					}
					HX_STACK_LINE(29)
					_g1 = result;
				}
				else{
					HX_STACK_LINE(29)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
					HX_STACK_LINE(29)
					_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
				}
			}
		}
		HX_STACK_LINE(29)
		return this->_angularFactor = _g1;
	}
	else{
		HX_STACK_LINE(59)
		Dynamic _g2 = ::org::gameplay3d::PhysicsRigidBody_obj::hx_PhysicsRigidBody_getAngularFactor(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g3 = this->_angularFactor->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_angularFactor = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsRigidBody_obj,getAngularFactor,return )

::org::gameplay3d::Vector3 PhysicsRigidBody_obj::getAngularVelocity( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody","getAngularVelocity",0xd9d91fe4,"org.gameplay3d.PhysicsRigidBody.getAngularVelocity","org/gameplay3d/PhysicsRigidBody.hx",65,0x6986ec2b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_angularVelocity == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(65)
			Dynamic nativeObject = ::org::gameplay3d::PhysicsRigidBody_obj::hx_PhysicsRigidBody_getAngularVelocity(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
			HX_STACK_LINE(29)
			if (((nativeObject == null()))){
				HX_STACK_LINE(29)
				_g1 = null();
			}
			else{
				HX_STACK_LINE(29)
				if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
					HX_STACK_LINE(29)
					::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
					HX_STACK_LINE(29)
					::org::gameplay3d::Vector3 result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Vector3 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(29)
						result = _g;
						HX_STACK_LINE(29)
						ref->set(result);
					}
					HX_STACK_LINE(29)
					_g1 = result;
				}
				else{
					HX_STACK_LINE(29)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
					HX_STACK_LINE(29)
					_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
				}
			}
		}
		HX_STACK_LINE(29)
		return this->_angularVelocity = _g1;
	}
	else{
		HX_STACK_LINE(65)
		Dynamic _g2 = ::org::gameplay3d::PhysicsRigidBody_obj::hx_PhysicsRigidBody_getAngularVelocity(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g3 = this->_angularVelocity->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_angularVelocity = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsRigidBody_obj,getAngularVelocity,return )

::org::gameplay3d::Vector3 PhysicsRigidBody_obj::getAnisotropicFriction( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody","getAnisotropicFriction",0x9fe19190,"org.gameplay3d.PhysicsRigidBody.getAnisotropicFriction","org/gameplay3d/PhysicsRigidBody.hx",71,0x6986ec2b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_anisotropicFriction == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(71)
			Dynamic nativeObject = ::org::gameplay3d::PhysicsRigidBody_obj::hx_PhysicsRigidBody_getAnisotropicFriction(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
			HX_STACK_LINE(29)
			if (((nativeObject == null()))){
				HX_STACK_LINE(29)
				_g1 = null();
			}
			else{
				HX_STACK_LINE(29)
				if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
					HX_STACK_LINE(29)
					::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
					HX_STACK_LINE(29)
					::org::gameplay3d::Vector3 result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Vector3 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(29)
						result = _g;
						HX_STACK_LINE(29)
						ref->set(result);
					}
					HX_STACK_LINE(29)
					_g1 = result;
				}
				else{
					HX_STACK_LINE(29)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
					HX_STACK_LINE(29)
					_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
				}
			}
		}
		HX_STACK_LINE(29)
		return this->_anisotropicFriction = _g1;
	}
	else{
		HX_STACK_LINE(71)
		Dynamic _g2 = ::org::gameplay3d::PhysicsRigidBody_obj::hx_PhysicsRigidBody_getAnisotropicFriction(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g3 = this->_anisotropicFriction->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_anisotropicFriction = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsRigidBody_obj,getAnisotropicFriction,return )

Float PhysicsRigidBody_obj::getFriction( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody","getFriction",0x818c9195,"org.gameplay3d.PhysicsRigidBody.getFriction","org/gameplay3d/PhysicsRigidBody.hx",77,0x6986ec2b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(77)
	return ::org::gameplay3d::PhysicsRigidBody_obj::hx_PhysicsRigidBody_getFriction(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsRigidBody_obj,getFriction,return )

::org::gameplay3d::Vector3 PhysicsRigidBody_obj::getGravity( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody","getGravity",0x5329a213,"org.gameplay3d.PhysicsRigidBody.getGravity","org/gameplay3d/PhysicsRigidBody.hx",83,0x6986ec2b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_gravity == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(83)
			Dynamic nativeObject = ::org::gameplay3d::PhysicsRigidBody_obj::hx_PhysicsRigidBody_getGravity(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
			HX_STACK_LINE(29)
			if (((nativeObject == null()))){
				HX_STACK_LINE(29)
				_g1 = null();
			}
			else{
				HX_STACK_LINE(29)
				if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
					HX_STACK_LINE(29)
					::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
					HX_STACK_LINE(29)
					::org::gameplay3d::Vector3 result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Vector3 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(29)
						result = _g;
						HX_STACK_LINE(29)
						ref->set(result);
					}
					HX_STACK_LINE(29)
					_g1 = result;
				}
				else{
					HX_STACK_LINE(29)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
					HX_STACK_LINE(29)
					_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
				}
			}
		}
		HX_STACK_LINE(29)
		return this->_gravity = _g1;
	}
	else{
		HX_STACK_LINE(83)
		Dynamic _g2 = ::org::gameplay3d::PhysicsRigidBody_obj::hx_PhysicsRigidBody_getGravity(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g3 = this->_gravity->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_gravity = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsRigidBody_obj,getGravity,return )

Float PhysicsRigidBody_obj::getHeight( Float x,Float z){
	HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody","getHeight",0x73c833c2,"org.gameplay3d.PhysicsRigidBody.getHeight","org/gameplay3d/PhysicsRigidBody.hx",89,0x6986ec2b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(z,"z")
	HX_STACK_LINE(89)
	return ::org::gameplay3d::PhysicsRigidBody_obj::hx_PhysicsRigidBody_getHeight(this->nativeObject,x,z);
}


HX_DEFINE_DYNAMIC_FUNC2(PhysicsRigidBody_obj,getHeight,return )

Float PhysicsRigidBody_obj::getLinearDamping( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody","getLinearDamping",0x464972e2,"org.gameplay3d.PhysicsRigidBody.getLinearDamping","org/gameplay3d/PhysicsRigidBody.hx",95,0x6986ec2b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(95)
	return ::org::gameplay3d::PhysicsRigidBody_obj::hx_PhysicsRigidBody_getLinearDamping(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsRigidBody_obj,getLinearDamping,return )

::org::gameplay3d::Vector3 PhysicsRigidBody_obj::getLinearFactor( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody","getLinearFactor",0x1ed35aaf,"org.gameplay3d.PhysicsRigidBody.getLinearFactor","org/gameplay3d/PhysicsRigidBody.hx",101,0x6986ec2b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_linearFactor == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(101)
			Dynamic nativeObject = ::org::gameplay3d::PhysicsRigidBody_obj::hx_PhysicsRigidBody_getLinearFactor(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
			HX_STACK_LINE(29)
			if (((nativeObject == null()))){
				HX_STACK_LINE(29)
				_g1 = null();
			}
			else{
				HX_STACK_LINE(29)
				if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
					HX_STACK_LINE(29)
					::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
					HX_STACK_LINE(29)
					::org::gameplay3d::Vector3 result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Vector3 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(29)
						result = _g;
						HX_STACK_LINE(29)
						ref->set(result);
					}
					HX_STACK_LINE(29)
					_g1 = result;
				}
				else{
					HX_STACK_LINE(29)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
					HX_STACK_LINE(29)
					_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
				}
			}
		}
		HX_STACK_LINE(29)
		return this->_linearFactor = _g1;
	}
	else{
		HX_STACK_LINE(101)
		Dynamic _g2 = ::org::gameplay3d::PhysicsRigidBody_obj::hx_PhysicsRigidBody_getLinearFactor(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g3 = this->_linearFactor->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_linearFactor = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsRigidBody_obj,getLinearFactor,return )

::org::gameplay3d::Vector3 PhysicsRigidBody_obj::getLinearVelocity( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody","getLinearVelocity",0xe81ffbfd,"org.gameplay3d.PhysicsRigidBody.getLinearVelocity","org/gameplay3d/PhysicsRigidBody.hx",107,0x6986ec2b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_linearVelocity == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(107)
			Dynamic nativeObject = ::org::gameplay3d::PhysicsRigidBody_obj::hx_PhysicsRigidBody_getLinearVelocity(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
			HX_STACK_LINE(29)
			if (((nativeObject == null()))){
				HX_STACK_LINE(29)
				_g1 = null();
			}
			else{
				HX_STACK_LINE(29)
				if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
					HX_STACK_LINE(29)
					::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
					HX_STACK_LINE(29)
					::org::gameplay3d::Vector3 result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Vector3 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(29)
						result = _g;
						HX_STACK_LINE(29)
						ref->set(result);
					}
					HX_STACK_LINE(29)
					_g1 = result;
				}
				else{
					HX_STACK_LINE(29)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
					HX_STACK_LINE(29)
					_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
				}
			}
		}
		HX_STACK_LINE(29)
		return this->_linearVelocity = _g1;
	}
	else{
		HX_STACK_LINE(107)
		Dynamic _g2 = ::org::gameplay3d::PhysicsRigidBody_obj::hx_PhysicsRigidBody_getLinearVelocity(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g3 = this->_linearVelocity->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_linearVelocity = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsRigidBody_obj,getLinearVelocity,return )

Float PhysicsRigidBody_obj::getMass( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody","getMass",0xf724300f,"org.gameplay3d.PhysicsRigidBody.getMass","org/gameplay3d/PhysicsRigidBody.hx",113,0x6986ec2b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(113)
	return ::org::gameplay3d::PhysicsRigidBody_obj::hx_PhysicsRigidBody_getMass(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsRigidBody_obj,getMass,return )

Float PhysicsRigidBody_obj::getRestitution( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody","getRestitution",0x9dfd26af,"org.gameplay3d.PhysicsRigidBody.getRestitution","org/gameplay3d/PhysicsRigidBody.hx",119,0x6986ec2b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(119)
	return ::org::gameplay3d::PhysicsRigidBody_obj::hx_PhysicsRigidBody_getRestitution(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsRigidBody_obj,getRestitution,return )

int PhysicsRigidBody_obj::getType( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody","getType",0xfbd6e1d5,"org.gameplay3d.PhysicsRigidBody.getType","org/gameplay3d/PhysicsRigidBody.hx",125,0x6986ec2b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(125)
	return ::org::gameplay3d::PhysicsRigidBody_obj::hx_PhysicsRigidBody_getType(this->nativeObject);
}


bool PhysicsRigidBody_obj::isStatic( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody","isStatic",0x43f1b133,"org.gameplay3d.PhysicsRigidBody.isStatic","org/gameplay3d/PhysicsRigidBody.hx",131,0x6986ec2b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(131)
	return ::org::gameplay3d::PhysicsRigidBody_obj::hx_PhysicsRigidBody_isStatic(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsRigidBody_obj,isStatic,return )

Void PhysicsRigidBody_obj::setAngularFactor_V3( ::org::gameplay3d::immutable::IVector3 angularFactor){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody","setAngularFactor_V3",0x6518d732,"org.gameplay3d.PhysicsRigidBody.setAngularFactor_V3","org/gameplay3d/PhysicsRigidBody.hx",137,0x6986ec2b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(angularFactor,"angularFactor")
		HX_STACK_LINE(137)
		::org::gameplay3d::PhysicsRigidBody_obj::hx_PhysicsRigidBody_setAngularFactor_V3(this->nativeObject,(  (((angularFactor == null()))) ? Dynamic(null()) : Dynamic(angularFactor->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsRigidBody_obj,setAngularFactor_V3,(void))

Void PhysicsRigidBody_obj::setAngularFactor_FltX3( Float x,Float y,Float z){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody","setAngularFactor_FltX3",0x077067b4,"org.gameplay3d.PhysicsRigidBody.setAngularFactor_FltX3","org/gameplay3d/PhysicsRigidBody.hx",143,0x6986ec2b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(143)
		::org::gameplay3d::PhysicsRigidBody_obj::hx_PhysicsRigidBody_setAngularFactor_FltX3(this->nativeObject,x,y,z);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(PhysicsRigidBody_obj,setAngularFactor_FltX3,(void))

Void PhysicsRigidBody_obj::setAngularVelocity_V3( ::org::gameplay3d::immutable::IVector3 velocity){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody","setAngularVelocity_V3",0x7c6a15e4,"org.gameplay3d.PhysicsRigidBody.setAngularVelocity_V3","org/gameplay3d/PhysicsRigidBody.hx",149,0x6986ec2b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(velocity,"velocity")
		HX_STACK_LINE(149)
		::org::gameplay3d::PhysicsRigidBody_obj::hx_PhysicsRigidBody_setAngularVelocity_V3(this->nativeObject,(  (((velocity == null()))) ? Dynamic(null()) : Dynamic(velocity->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsRigidBody_obj,setAngularVelocity_V3,(void))

Void PhysicsRigidBody_obj::setAngularVelocity_FltX3( Float x,Float y,Float z){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody","setAngularVelocity_FltX3",0x09a1e442,"org.gameplay3d.PhysicsRigidBody.setAngularVelocity_FltX3","org/gameplay3d/PhysicsRigidBody.hx",155,0x6986ec2b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(155)
		::org::gameplay3d::PhysicsRigidBody_obj::hx_PhysicsRigidBody_setAngularVelocity_FltX3(this->nativeObject,x,y,z);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(PhysicsRigidBody_obj,setAngularVelocity_FltX3,(void))

Void PhysicsRigidBody_obj::setAnisotropicFriction_V3( ::org::gameplay3d::immutable::IVector3 friction){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody","setAnisotropicFriction_V3",0x667cedb8,"org.gameplay3d.PhysicsRigidBody.setAnisotropicFriction_V3","org/gameplay3d/PhysicsRigidBody.hx",161,0x6986ec2b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(friction,"friction")
		HX_STACK_LINE(161)
		::org::gameplay3d::PhysicsRigidBody_obj::hx_PhysicsRigidBody_setAnisotropicFriction_V3(this->nativeObject,(  (((friction == null()))) ? Dynamic(null()) : Dynamic(friction->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsRigidBody_obj,setAnisotropicFriction_V3,(void))

Void PhysicsRigidBody_obj::setAnisotropicFriction_FltX3( Float x,Float y,Float z){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody","setAnisotropicFriction_FltX3",0xdfd0a8ee,"org.gameplay3d.PhysicsRigidBody.setAnisotropicFriction_FltX3","org/gameplay3d/PhysicsRigidBody.hx",167,0x6986ec2b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(167)
		::org::gameplay3d::PhysicsRigidBody_obj::hx_PhysicsRigidBody_setAnisotropicFriction_FltX3(this->nativeObject,x,y,z);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(PhysicsRigidBody_obj,setAnisotropicFriction_FltX3,(void))

Void PhysicsRigidBody_obj::setDamping( Float linearDamping,Float angularDamping){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody","setDamping",0xf2ad62fb,"org.gameplay3d.PhysicsRigidBody.setDamping","org/gameplay3d/PhysicsRigidBody.hx",173,0x6986ec2b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(linearDamping,"linearDamping")
		HX_STACK_ARG(angularDamping,"angularDamping")
		HX_STACK_LINE(173)
		::org::gameplay3d::PhysicsRigidBody_obj::hx_PhysicsRigidBody_setDamping(this->nativeObject,linearDamping,angularDamping);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PhysicsRigidBody_obj,setDamping,(void))

Void PhysicsRigidBody_obj::setEnabled( bool enable){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody","setEnabled",0x5cd8d6ba,"org.gameplay3d.PhysicsRigidBody.setEnabled","org/gameplay3d/PhysicsRigidBody.hx",179,0x6986ec2b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(enable,"enable")
		HX_STACK_LINE(179)
		::org::gameplay3d::PhysicsRigidBody_obj::hx_PhysicsRigidBody_setEnabled(this->nativeObject,enable);
	}
return null();
}


Void PhysicsRigidBody_obj::setFriction( Float friction){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody","setFriction",0x8bf998a1,"org.gameplay3d.PhysicsRigidBody.setFriction","org/gameplay3d/PhysicsRigidBody.hx",185,0x6986ec2b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(friction,"friction")
		HX_STACK_LINE(185)
		::org::gameplay3d::PhysicsRigidBody_obj::hx_PhysicsRigidBody_setFriction(this->nativeObject,friction);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsRigidBody_obj,setFriction,(void))

Void PhysicsRigidBody_obj::setGravity_V3( ::org::gameplay3d::immutable::IVector3 gravity){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody","setGravity_V3",0xb2e4ef15,"org.gameplay3d.PhysicsRigidBody.setGravity_V3","org/gameplay3d/PhysicsRigidBody.hx",191,0x6986ec2b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gravity,"gravity")
		HX_STACK_LINE(191)
		::org::gameplay3d::PhysicsRigidBody_obj::hx_PhysicsRigidBody_setGravity_V3(this->nativeObject,(  (((gravity == null()))) ? Dynamic(null()) : Dynamic(gravity->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsRigidBody_obj,setGravity_V3,(void))

Void PhysicsRigidBody_obj::setGravity_FltX3( Float x,Float y,Float z){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody","setGravity_FltX3",0x2b181fb1,"org.gameplay3d.PhysicsRigidBody.setGravity_FltX3","org/gameplay3d/PhysicsRigidBody.hx",197,0x6986ec2b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(197)
		::org::gameplay3d::PhysicsRigidBody_obj::hx_PhysicsRigidBody_setGravity_FltX3(this->nativeObject,x,y,z);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(PhysicsRigidBody_obj,setGravity_FltX3,(void))

Void PhysicsRigidBody_obj::setKinematic( bool kinematic){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody","setKinematic",0x99eb0b7e,"org.gameplay3d.PhysicsRigidBody.setKinematic","org/gameplay3d/PhysicsRigidBody.hx",203,0x6986ec2b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(kinematic,"kinematic")
		HX_STACK_LINE(203)
		::org::gameplay3d::PhysicsRigidBody_obj::hx_PhysicsRigidBody_setKinematic(this->nativeObject,kinematic);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsRigidBody_obj,setKinematic,(void))

Void PhysicsRigidBody_obj::setLinearFactor_V3( ::org::gameplay3d::immutable::IVector3 linearFactor){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody","setLinearFactor_V3",0x74e4d061,"org.gameplay3d.PhysicsRigidBody.setLinearFactor_V3","org/gameplay3d/PhysicsRigidBody.hx",209,0x6986ec2b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(linearFactor,"linearFactor")
		HX_STACK_LINE(209)
		::org::gameplay3d::PhysicsRigidBody_obj::hx_PhysicsRigidBody_setLinearFactor_V3(this->nativeObject,(  (((linearFactor == null()))) ? Dynamic(null()) : Dynamic(linearFactor->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsRigidBody_obj,setLinearFactor_V3,(void))

Void PhysicsRigidBody_obj::setLinearFactor_FltX3( Float x,Float y,Float z){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody","setLinearFactor_FltX3",0x5db715e5,"org.gameplay3d.PhysicsRigidBody.setLinearFactor_FltX3","org/gameplay3d/PhysicsRigidBody.hx",215,0x6986ec2b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(215)
		::org::gameplay3d::PhysicsRigidBody_obj::hx_PhysicsRigidBody_setLinearFactor_FltX3(this->nativeObject,x,y,z);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(PhysicsRigidBody_obj,setLinearFactor_FltX3,(void))

Void PhysicsRigidBody_obj::setLinearVelocity_V3( ::org::gameplay3d::immutable::IVector3 velocity){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody","setLinearVelocity_V3",0x1209f8d3,"org.gameplay3d.PhysicsRigidBody.setLinearVelocity_V3","org/gameplay3d/PhysicsRigidBody.hx",221,0x6986ec2b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(velocity,"velocity")
		HX_STACK_LINE(221)
		::org::gameplay3d::PhysicsRigidBody_obj::hx_PhysicsRigidBody_setLinearVelocity_V3(this->nativeObject,(  (((velocity == null()))) ? Dynamic(null()) : Dynamic(velocity->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsRigidBody_obj,setLinearVelocity_V3,(void))

Void PhysicsRigidBody_obj::setLinearVelocity_FltX3( Float x,Float y,Float z){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody","setLinearVelocity_FltX3",0x819540b3,"org.gameplay3d.PhysicsRigidBody.setLinearVelocity_FltX3","org/gameplay3d/PhysicsRigidBody.hx",227,0x6986ec2b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(227)
		::org::gameplay3d::PhysicsRigidBody_obj::hx_PhysicsRigidBody_setLinearVelocity_FltX3(this->nativeObject,x,y,z);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(PhysicsRigidBody_obj,setLinearVelocity_FltX3,(void))

Void PhysicsRigidBody_obj::setRestitution( Float restitution){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody","setRestitution",0xbe1d0f23,"org.gameplay3d.PhysicsRigidBody.setRestitution","org/gameplay3d/PhysicsRigidBody.hx",233,0x6986ec2b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(restitution,"restitution")
		HX_STACK_LINE(233)
		::org::gameplay3d::PhysicsRigidBody_obj::hx_PhysicsRigidBody_setRestitution(this->nativeObject,restitution);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsRigidBody_obj,setRestitution,(void))

Dynamic PhysicsRigidBody_obj::hx_PhysicsRigidBody_applyForce;

Dynamic PhysicsRigidBody_obj::hx_PhysicsRigidBody_applyImpulse;

Dynamic PhysicsRigidBody_obj::hx_PhysicsRigidBody_applyTorque;

Dynamic PhysicsRigidBody_obj::hx_PhysicsRigidBody_applyTorqueImpulse;

Dynamic PhysicsRigidBody_obj::hx_PhysicsRigidBody_getAngularDamping;

Dynamic PhysicsRigidBody_obj::hx_PhysicsRigidBody_getAngularFactor;

Dynamic PhysicsRigidBody_obj::hx_PhysicsRigidBody_getAngularVelocity;

Dynamic PhysicsRigidBody_obj::hx_PhysicsRigidBody_getAnisotropicFriction;

Dynamic PhysicsRigidBody_obj::hx_PhysicsRigidBody_getFriction;

Dynamic PhysicsRigidBody_obj::hx_PhysicsRigidBody_getGravity;

Dynamic PhysicsRigidBody_obj::hx_PhysicsRigidBody_getHeight;

Dynamic PhysicsRigidBody_obj::hx_PhysicsRigidBody_getLinearDamping;

Dynamic PhysicsRigidBody_obj::hx_PhysicsRigidBody_getLinearFactor;

Dynamic PhysicsRigidBody_obj::hx_PhysicsRigidBody_getLinearVelocity;

Dynamic PhysicsRigidBody_obj::hx_PhysicsRigidBody_getMass;

Dynamic PhysicsRigidBody_obj::hx_PhysicsRigidBody_getRestitution;

Dynamic PhysicsRigidBody_obj::hx_PhysicsRigidBody_getType;

Dynamic PhysicsRigidBody_obj::hx_PhysicsRigidBody_isStatic;

Dynamic PhysicsRigidBody_obj::hx_PhysicsRigidBody_setAngularFactor_V3;

Dynamic PhysicsRigidBody_obj::hx_PhysicsRigidBody_setAngularFactor_FltX3;

Dynamic PhysicsRigidBody_obj::hx_PhysicsRigidBody_setAngularVelocity_V3;

Dynamic PhysicsRigidBody_obj::hx_PhysicsRigidBody_setAngularVelocity_FltX3;

Dynamic PhysicsRigidBody_obj::hx_PhysicsRigidBody_setAnisotropicFriction_V3;

Dynamic PhysicsRigidBody_obj::hx_PhysicsRigidBody_setAnisotropicFriction_FltX3;

Dynamic PhysicsRigidBody_obj::hx_PhysicsRigidBody_setDamping;

Dynamic PhysicsRigidBody_obj::hx_PhysicsRigidBody_setEnabled;

Dynamic PhysicsRigidBody_obj::hx_PhysicsRigidBody_setFriction;

Dynamic PhysicsRigidBody_obj::hx_PhysicsRigidBody_setGravity_V3;

Dynamic PhysicsRigidBody_obj::hx_PhysicsRigidBody_setGravity_FltX3;

Dynamic PhysicsRigidBody_obj::hx_PhysicsRigidBody_setKinematic;

Dynamic PhysicsRigidBody_obj::hx_PhysicsRigidBody_setLinearFactor_V3;

Dynamic PhysicsRigidBody_obj::hx_PhysicsRigidBody_setLinearFactor_FltX3;

Dynamic PhysicsRigidBody_obj::hx_PhysicsRigidBody_setLinearVelocity_V3;

Dynamic PhysicsRigidBody_obj::hx_PhysicsRigidBody_setLinearVelocity_FltX3;

Dynamic PhysicsRigidBody_obj::hx_PhysicsRigidBody_setRestitution;


PhysicsRigidBody_obj::PhysicsRigidBody_obj()
{
}

void PhysicsRigidBody_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PhysicsRigidBody);
	HX_MARK_MEMBER_NAME(_angularFactor,"_angularFactor");
	HX_MARK_MEMBER_NAME(_angularVelocity,"_angularVelocity");
	HX_MARK_MEMBER_NAME(_anisotropicFriction,"_anisotropicFriction");
	HX_MARK_MEMBER_NAME(_gravity,"_gravity");
	HX_MARK_MEMBER_NAME(_linearFactor,"_linearFactor");
	HX_MARK_MEMBER_NAME(_linearVelocity,"_linearVelocity");
	::org::gameplay3d::PhysicsCollisionObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PhysicsRigidBody_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_angularFactor,"_angularFactor");
	HX_VISIT_MEMBER_NAME(_angularVelocity,"_angularVelocity");
	HX_VISIT_MEMBER_NAME(_anisotropicFriction,"_anisotropicFriction");
	HX_VISIT_MEMBER_NAME(_gravity,"_gravity");
	HX_VISIT_MEMBER_NAME(_linearFactor,"_linearFactor");
	HX_VISIT_MEMBER_NAME(_linearVelocity,"_linearVelocity");
	::org::gameplay3d::PhysicsCollisionObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PhysicsRigidBody_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getMass") ) { return getMass_dyn(); }
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_gravity") ) { return _gravity; }
		if (HX_FIELD_EQ(inName,"isStatic") ) { return isStatic_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getHeight") ) { return getHeight_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"applyForce") ) { return applyForce_dyn(); }
		if (HX_FIELD_EQ(inName,"getGravity") ) { return getGravity_dyn(); }
		if (HX_FIELD_EQ(inName,"setDamping") ) { return setDamping_dyn(); }
		if (HX_FIELD_EQ(inName,"setEnabled") ) { return setEnabled_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"applyTorque") ) { return applyTorque_dyn(); }
		if (HX_FIELD_EQ(inName,"getFriction") ) { return getFriction_dyn(); }
		if (HX_FIELD_EQ(inName,"setFriction") ) { return setFriction_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"applyImpulse") ) { return applyImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"setKinematic") ) { return setKinematic_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_linearFactor") ) { return _linearFactor; }
		if (HX_FIELD_EQ(inName,"setGravity_V3") ) { return setGravity_V3_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_angularFactor") ) { return _angularFactor; }
		if (HX_FIELD_EQ(inName,"getRestitution") ) { return getRestitution_dyn(); }
		if (HX_FIELD_EQ(inName,"setRestitution") ) { return setRestitution_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_linearVelocity") ) { return _linearVelocity; }
		if (HX_FIELD_EQ(inName,"getLinearFactor") ) { return getLinearFactor_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_angularVelocity") ) { return _angularVelocity; }
		if (HX_FIELD_EQ(inName,"getAngularFactor") ) { return getAngularFactor_dyn(); }
		if (HX_FIELD_EQ(inName,"getLinearDamping") ) { return getLinearDamping_dyn(); }
		if (HX_FIELD_EQ(inName,"setGravity_FltX3") ) { return setGravity_FltX3_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getAngularDamping") ) { return getAngularDamping_dyn(); }
		if (HX_FIELD_EQ(inName,"getLinearVelocity") ) { return getLinearVelocity_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"applyTorqueImpulse") ) { return applyTorqueImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"getAngularVelocity") ) { return getAngularVelocity_dyn(); }
		if (HX_FIELD_EQ(inName,"setLinearFactor_V3") ) { return setLinearFactor_V3_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"setAngularFactor_V3") ) { return setAngularFactor_V3_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_anisotropicFriction") ) { return _anisotropicFriction; }
		if (HX_FIELD_EQ(inName,"setLinearVelocity_V3") ) { return setLinearVelocity_V3_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"setAngularVelocity_V3") ) { return setAngularVelocity_V3_dyn(); }
		if (HX_FIELD_EQ(inName,"setLinearFactor_FltX3") ) { return setLinearFactor_FltX3_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"getAnisotropicFriction") ) { return getAnisotropicFriction_dyn(); }
		if (HX_FIELD_EQ(inName,"setAngularFactor_FltX3") ) { return setAngularFactor_FltX3_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"setLinearVelocity_FltX3") ) { return setLinearVelocity_FltX3_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"setAngularVelocity_FltX3") ) { return setAngularVelocity_FltX3_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"setAnisotropicFriction_V3") ) { return setAnisotropicFriction_V3_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_getMass") ) { return hx_PhysicsRigidBody_getMass; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_getType") ) { return hx_PhysicsRigidBody_getType; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_isStatic") ) { return hx_PhysicsRigidBody_isStatic; }
		if (HX_FIELD_EQ(inName,"setAnisotropicFriction_FltX3") ) { return setAnisotropicFriction_FltX3_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_getHeight") ) { return hx_PhysicsRigidBody_getHeight; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_applyForce") ) { return hx_PhysicsRigidBody_applyForce; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_getGravity") ) { return hx_PhysicsRigidBody_getGravity; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_setDamping") ) { return hx_PhysicsRigidBody_setDamping; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_setEnabled") ) { return hx_PhysicsRigidBody_setEnabled; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_applyTorque") ) { return hx_PhysicsRigidBody_applyTorque; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_getFriction") ) { return hx_PhysicsRigidBody_getFriction; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_setFriction") ) { return hx_PhysicsRigidBody_setFriction; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_applyImpulse") ) { return hx_PhysicsRigidBody_applyImpulse; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_setKinematic") ) { return hx_PhysicsRigidBody_setKinematic; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_setGravity_V3") ) { return hx_PhysicsRigidBody_setGravity_V3; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_getRestitution") ) { return hx_PhysicsRigidBody_getRestitution; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_setRestitution") ) { return hx_PhysicsRigidBody_setRestitution; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_getLinearFactor") ) { return hx_PhysicsRigidBody_getLinearFactor; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_getAngularFactor") ) { return hx_PhysicsRigidBody_getAngularFactor; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_getLinearDamping") ) { return hx_PhysicsRigidBody_getLinearDamping; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_setGravity_FltX3") ) { return hx_PhysicsRigidBody_setGravity_FltX3; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_getAngularDamping") ) { return hx_PhysicsRigidBody_getAngularDamping; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_getLinearVelocity") ) { return hx_PhysicsRigidBody_getLinearVelocity; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_applyTorqueImpulse") ) { return hx_PhysicsRigidBody_applyTorqueImpulse; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_getAngularVelocity") ) { return hx_PhysicsRigidBody_getAngularVelocity; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_setLinearFactor_V3") ) { return hx_PhysicsRigidBody_setLinearFactor_V3; }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_setAngularFactor_V3") ) { return hx_PhysicsRigidBody_setAngularFactor_V3; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_setLinearVelocity_V3") ) { return hx_PhysicsRigidBody_setLinearVelocity_V3; }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_setAngularVelocity_V3") ) { return hx_PhysicsRigidBody_setAngularVelocity_V3; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_setLinearFactor_FltX3") ) { return hx_PhysicsRigidBody_setLinearFactor_FltX3; }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_getAnisotropicFriction") ) { return hx_PhysicsRigidBody_getAnisotropicFriction; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_setAngularFactor_FltX3") ) { return hx_PhysicsRigidBody_setAngularFactor_FltX3; }
		break;
	case 43:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_setLinearVelocity_FltX3") ) { return hx_PhysicsRigidBody_setLinearVelocity_FltX3; }
		break;
	case 44:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_setAngularVelocity_FltX3") ) { return hx_PhysicsRigidBody_setAngularVelocity_FltX3; }
		break;
	case 45:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_setAnisotropicFriction_V3") ) { return hx_PhysicsRigidBody_setAnisotropicFriction_V3; }
		break;
	case 48:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_setAnisotropicFriction_FltX3") ) { return hx_PhysicsRigidBody_setAnisotropicFriction_FltX3; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PhysicsRigidBody_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_gravity") ) { _gravity=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_linearFactor") ) { _linearFactor=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_angularFactor") ) { _angularFactor=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_linearVelocity") ) { _linearVelocity=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_angularVelocity") ) { _angularVelocity=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_anisotropicFriction") ) { _anisotropicFriction=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_getMass") ) { hx_PhysicsRigidBody_getMass=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_getType") ) { hx_PhysicsRigidBody_getType=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_isStatic") ) { hx_PhysicsRigidBody_isStatic=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_getHeight") ) { hx_PhysicsRigidBody_getHeight=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_applyForce") ) { hx_PhysicsRigidBody_applyForce=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_getGravity") ) { hx_PhysicsRigidBody_getGravity=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_setDamping") ) { hx_PhysicsRigidBody_setDamping=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_setEnabled") ) { hx_PhysicsRigidBody_setEnabled=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_applyTorque") ) { hx_PhysicsRigidBody_applyTorque=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_getFriction") ) { hx_PhysicsRigidBody_getFriction=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_setFriction") ) { hx_PhysicsRigidBody_setFriction=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_applyImpulse") ) { hx_PhysicsRigidBody_applyImpulse=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_setKinematic") ) { hx_PhysicsRigidBody_setKinematic=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_setGravity_V3") ) { hx_PhysicsRigidBody_setGravity_V3=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_getRestitution") ) { hx_PhysicsRigidBody_getRestitution=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_setRestitution") ) { hx_PhysicsRigidBody_setRestitution=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_getLinearFactor") ) { hx_PhysicsRigidBody_getLinearFactor=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_getAngularFactor") ) { hx_PhysicsRigidBody_getAngularFactor=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_getLinearDamping") ) { hx_PhysicsRigidBody_getLinearDamping=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_setGravity_FltX3") ) { hx_PhysicsRigidBody_setGravity_FltX3=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_getAngularDamping") ) { hx_PhysicsRigidBody_getAngularDamping=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_getLinearVelocity") ) { hx_PhysicsRigidBody_getLinearVelocity=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_applyTorqueImpulse") ) { hx_PhysicsRigidBody_applyTorqueImpulse=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_getAngularVelocity") ) { hx_PhysicsRigidBody_getAngularVelocity=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_setLinearFactor_V3") ) { hx_PhysicsRigidBody_setLinearFactor_V3=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_setAngularFactor_V3") ) { hx_PhysicsRigidBody_setAngularFactor_V3=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_setLinearVelocity_V3") ) { hx_PhysicsRigidBody_setLinearVelocity_V3=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_setAngularVelocity_V3") ) { hx_PhysicsRigidBody_setAngularVelocity_V3=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_setLinearFactor_FltX3") ) { hx_PhysicsRigidBody_setLinearFactor_FltX3=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_getAnisotropicFriction") ) { hx_PhysicsRigidBody_getAnisotropicFriction=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_setAngularFactor_FltX3") ) { hx_PhysicsRigidBody_setAngularFactor_FltX3=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 43:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_setLinearVelocity_FltX3") ) { hx_PhysicsRigidBody_setLinearVelocity_FltX3=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 44:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_setAngularVelocity_FltX3") ) { hx_PhysicsRigidBody_setAngularVelocity_FltX3=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 45:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_setAnisotropicFriction_V3") ) { hx_PhysicsRigidBody_setAnisotropicFriction_V3=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 48:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_setAnisotropicFriction_FltX3") ) { hx_PhysicsRigidBody_setAnisotropicFriction_FltX3=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PhysicsRigidBody_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_angularFactor"));
	outFields->push(HX_CSTRING("_angularVelocity"));
	outFields->push(HX_CSTRING("_anisotropicFriction"));
	outFields->push(HX_CSTRING("_gravity"));
	outFields->push(HX_CSTRING("_linearFactor"));
	outFields->push(HX_CSTRING("_linearVelocity"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("hx_PhysicsRigidBody_applyForce"),
	HX_CSTRING("hx_PhysicsRigidBody_applyImpulse"),
	HX_CSTRING("hx_PhysicsRigidBody_applyTorque"),
	HX_CSTRING("hx_PhysicsRigidBody_applyTorqueImpulse"),
	HX_CSTRING("hx_PhysicsRigidBody_getAngularDamping"),
	HX_CSTRING("hx_PhysicsRigidBody_getAngularFactor"),
	HX_CSTRING("hx_PhysicsRigidBody_getAngularVelocity"),
	HX_CSTRING("hx_PhysicsRigidBody_getAnisotropicFriction"),
	HX_CSTRING("hx_PhysicsRigidBody_getFriction"),
	HX_CSTRING("hx_PhysicsRigidBody_getGravity"),
	HX_CSTRING("hx_PhysicsRigidBody_getHeight"),
	HX_CSTRING("hx_PhysicsRigidBody_getLinearDamping"),
	HX_CSTRING("hx_PhysicsRigidBody_getLinearFactor"),
	HX_CSTRING("hx_PhysicsRigidBody_getLinearVelocity"),
	HX_CSTRING("hx_PhysicsRigidBody_getMass"),
	HX_CSTRING("hx_PhysicsRigidBody_getRestitution"),
	HX_CSTRING("hx_PhysicsRigidBody_getType"),
	HX_CSTRING("hx_PhysicsRigidBody_isStatic"),
	HX_CSTRING("hx_PhysicsRigidBody_setAngularFactor_V3"),
	HX_CSTRING("hx_PhysicsRigidBody_setAngularFactor_FltX3"),
	HX_CSTRING("hx_PhysicsRigidBody_setAngularVelocity_V3"),
	HX_CSTRING("hx_PhysicsRigidBody_setAngularVelocity_FltX3"),
	HX_CSTRING("hx_PhysicsRigidBody_setAnisotropicFriction_V3"),
	HX_CSTRING("hx_PhysicsRigidBody_setAnisotropicFriction_FltX3"),
	HX_CSTRING("hx_PhysicsRigidBody_setDamping"),
	HX_CSTRING("hx_PhysicsRigidBody_setEnabled"),
	HX_CSTRING("hx_PhysicsRigidBody_setFriction"),
	HX_CSTRING("hx_PhysicsRigidBody_setGravity_V3"),
	HX_CSTRING("hx_PhysicsRigidBody_setGravity_FltX3"),
	HX_CSTRING("hx_PhysicsRigidBody_setKinematic"),
	HX_CSTRING("hx_PhysicsRigidBody_setLinearFactor_V3"),
	HX_CSTRING("hx_PhysicsRigidBody_setLinearFactor_FltX3"),
	HX_CSTRING("hx_PhysicsRigidBody_setLinearVelocity_V3"),
	HX_CSTRING("hx_PhysicsRigidBody_setLinearVelocity_FltX3"),
	HX_CSTRING("hx_PhysicsRigidBody_setRestitution"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(PhysicsRigidBody_obj,_angularFactor),HX_CSTRING("_angularFactor")},
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(PhysicsRigidBody_obj,_angularVelocity),HX_CSTRING("_angularVelocity")},
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(PhysicsRigidBody_obj,_anisotropicFriction),HX_CSTRING("_anisotropicFriction")},
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(PhysicsRigidBody_obj,_gravity),HX_CSTRING("_gravity")},
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(PhysicsRigidBody_obj,_linearFactor),HX_CSTRING("_linearFactor")},
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(PhysicsRigidBody_obj,_linearVelocity),HX_CSTRING("_linearVelocity")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_angularFactor"),
	HX_CSTRING("_angularVelocity"),
	HX_CSTRING("_anisotropicFriction"),
	HX_CSTRING("_gravity"),
	HX_CSTRING("_linearFactor"),
	HX_CSTRING("_linearVelocity"),
	HX_CSTRING("applyForce"),
	HX_CSTRING("applyImpulse"),
	HX_CSTRING("applyTorque"),
	HX_CSTRING("applyTorqueImpulse"),
	HX_CSTRING("getAngularDamping"),
	HX_CSTRING("getAngularFactor"),
	HX_CSTRING("getAngularVelocity"),
	HX_CSTRING("getAnisotropicFriction"),
	HX_CSTRING("getFriction"),
	HX_CSTRING("getGravity"),
	HX_CSTRING("getHeight"),
	HX_CSTRING("getLinearDamping"),
	HX_CSTRING("getLinearFactor"),
	HX_CSTRING("getLinearVelocity"),
	HX_CSTRING("getMass"),
	HX_CSTRING("getRestitution"),
	HX_CSTRING("getType"),
	HX_CSTRING("isStatic"),
	HX_CSTRING("setAngularFactor_V3"),
	HX_CSTRING("setAngularFactor_FltX3"),
	HX_CSTRING("setAngularVelocity_V3"),
	HX_CSTRING("setAngularVelocity_FltX3"),
	HX_CSTRING("setAnisotropicFriction_V3"),
	HX_CSTRING("setAnisotropicFriction_FltX3"),
	HX_CSTRING("setDamping"),
	HX_CSTRING("setEnabled"),
	HX_CSTRING("setFriction"),
	HX_CSTRING("setGravity_V3"),
	HX_CSTRING("setGravity_FltX3"),
	HX_CSTRING("setKinematic"),
	HX_CSTRING("setLinearFactor_V3"),
	HX_CSTRING("setLinearFactor_FltX3"),
	HX_CSTRING("setLinearVelocity_V3"),
	HX_CSTRING("setLinearVelocity_FltX3"),
	HX_CSTRING("setRestitution"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_applyForce,"hx_PhysicsRigidBody_applyForce");
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_applyImpulse,"hx_PhysicsRigidBody_applyImpulse");
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_applyTorque,"hx_PhysicsRigidBody_applyTorque");
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_applyTorqueImpulse,"hx_PhysicsRigidBody_applyTorqueImpulse");
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_getAngularDamping,"hx_PhysicsRigidBody_getAngularDamping");
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_getAngularFactor,"hx_PhysicsRigidBody_getAngularFactor");
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_getAngularVelocity,"hx_PhysicsRigidBody_getAngularVelocity");
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_getAnisotropicFriction,"hx_PhysicsRigidBody_getAnisotropicFriction");
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_getFriction,"hx_PhysicsRigidBody_getFriction");
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_getGravity,"hx_PhysicsRigidBody_getGravity");
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_getHeight,"hx_PhysicsRigidBody_getHeight");
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_getLinearDamping,"hx_PhysicsRigidBody_getLinearDamping");
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_getLinearFactor,"hx_PhysicsRigidBody_getLinearFactor");
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_getLinearVelocity,"hx_PhysicsRigidBody_getLinearVelocity");
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_getMass,"hx_PhysicsRigidBody_getMass");
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_getRestitution,"hx_PhysicsRigidBody_getRestitution");
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_getType,"hx_PhysicsRigidBody_getType");
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_isStatic,"hx_PhysicsRigidBody_isStatic");
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_setAngularFactor_V3,"hx_PhysicsRigidBody_setAngularFactor_V3");
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_setAngularFactor_FltX3,"hx_PhysicsRigidBody_setAngularFactor_FltX3");
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_setAngularVelocity_V3,"hx_PhysicsRigidBody_setAngularVelocity_V3");
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_setAngularVelocity_FltX3,"hx_PhysicsRigidBody_setAngularVelocity_FltX3");
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_setAnisotropicFriction_V3,"hx_PhysicsRigidBody_setAnisotropicFriction_V3");
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_setAnisotropicFriction_FltX3,"hx_PhysicsRigidBody_setAnisotropicFriction_FltX3");
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_setDamping,"hx_PhysicsRigidBody_setDamping");
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_setEnabled,"hx_PhysicsRigidBody_setEnabled");
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_setFriction,"hx_PhysicsRigidBody_setFriction");
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_setGravity_V3,"hx_PhysicsRigidBody_setGravity_V3");
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_setGravity_FltX3,"hx_PhysicsRigidBody_setGravity_FltX3");
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_setKinematic,"hx_PhysicsRigidBody_setKinematic");
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_setLinearFactor_V3,"hx_PhysicsRigidBody_setLinearFactor_V3");
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_setLinearFactor_FltX3,"hx_PhysicsRigidBody_setLinearFactor_FltX3");
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_setLinearVelocity_V3,"hx_PhysicsRigidBody_setLinearVelocity_V3");
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_setLinearVelocity_FltX3,"hx_PhysicsRigidBody_setLinearVelocity_FltX3");
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_setRestitution,"hx_PhysicsRigidBody_setRestitution");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_applyForce,"hx_PhysicsRigidBody_applyForce");
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_applyImpulse,"hx_PhysicsRigidBody_applyImpulse");
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_applyTorque,"hx_PhysicsRigidBody_applyTorque");
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_applyTorqueImpulse,"hx_PhysicsRigidBody_applyTorqueImpulse");
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_getAngularDamping,"hx_PhysicsRigidBody_getAngularDamping");
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_getAngularFactor,"hx_PhysicsRigidBody_getAngularFactor");
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_getAngularVelocity,"hx_PhysicsRigidBody_getAngularVelocity");
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_getAnisotropicFriction,"hx_PhysicsRigidBody_getAnisotropicFriction");
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_getFriction,"hx_PhysicsRigidBody_getFriction");
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_getGravity,"hx_PhysicsRigidBody_getGravity");
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_getHeight,"hx_PhysicsRigidBody_getHeight");
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_getLinearDamping,"hx_PhysicsRigidBody_getLinearDamping");
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_getLinearFactor,"hx_PhysicsRigidBody_getLinearFactor");
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_getLinearVelocity,"hx_PhysicsRigidBody_getLinearVelocity");
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_getMass,"hx_PhysicsRigidBody_getMass");
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_getRestitution,"hx_PhysicsRigidBody_getRestitution");
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_getType,"hx_PhysicsRigidBody_getType");
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_isStatic,"hx_PhysicsRigidBody_isStatic");
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_setAngularFactor_V3,"hx_PhysicsRigidBody_setAngularFactor_V3");
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_setAngularFactor_FltX3,"hx_PhysicsRigidBody_setAngularFactor_FltX3");
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_setAngularVelocity_V3,"hx_PhysicsRigidBody_setAngularVelocity_V3");
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_setAngularVelocity_FltX3,"hx_PhysicsRigidBody_setAngularVelocity_FltX3");
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_setAnisotropicFriction_V3,"hx_PhysicsRigidBody_setAnisotropicFriction_V3");
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_setAnisotropicFriction_FltX3,"hx_PhysicsRigidBody_setAnisotropicFriction_FltX3");
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_setDamping,"hx_PhysicsRigidBody_setDamping");
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_setEnabled,"hx_PhysicsRigidBody_setEnabled");
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_setFriction,"hx_PhysicsRigidBody_setFriction");
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_setGravity_V3,"hx_PhysicsRigidBody_setGravity_V3");
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_setGravity_FltX3,"hx_PhysicsRigidBody_setGravity_FltX3");
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_setKinematic,"hx_PhysicsRigidBody_setKinematic");
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_setLinearFactor_V3,"hx_PhysicsRigidBody_setLinearFactor_V3");
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_setLinearFactor_FltX3,"hx_PhysicsRigidBody_setLinearFactor_FltX3");
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_setLinearVelocity_V3,"hx_PhysicsRigidBody_setLinearVelocity_V3");
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_setLinearVelocity_FltX3,"hx_PhysicsRigidBody_setLinearVelocity_FltX3");
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_obj::hx_PhysicsRigidBody_setRestitution,"hx_PhysicsRigidBody_setRestitution");
};

#endif

Class PhysicsRigidBody_obj::__mClass;

void PhysicsRigidBody_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.PhysicsRigidBody"), hx::TCanCast< PhysicsRigidBody_obj> ,sStaticFields,sMemberFields,
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

void PhysicsRigidBody_obj::__boot()
{
	hx_PhysicsRigidBody_applyForce= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody >(),HX_CSTRING("applyForce"),(int)3);
	hx_PhysicsRigidBody_applyImpulse= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody >(),HX_CSTRING("applyImpulse"),(int)3);
	hx_PhysicsRigidBody_applyTorque= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody >(),HX_CSTRING("applyTorque"),(int)2);
	hx_PhysicsRigidBody_applyTorqueImpulse= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody >(),HX_CSTRING("applyTorqueImpulse"),(int)2);
	hx_PhysicsRigidBody_getAngularDamping= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody >(),HX_CSTRING("getAngularDamping"),(int)1);
	hx_PhysicsRigidBody_getAngularFactor= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody >(),HX_CSTRING("getAngularFactor"),(int)1);
	hx_PhysicsRigidBody_getAngularVelocity= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody >(),HX_CSTRING("getAngularVelocity"),(int)1);
	hx_PhysicsRigidBody_getAnisotropicFriction= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody >(),HX_CSTRING("getAnisotropicFriction"),(int)1);
	hx_PhysicsRigidBody_getFriction= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody >(),HX_CSTRING("getFriction"),(int)1);
	hx_PhysicsRigidBody_getGravity= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody >(),HX_CSTRING("getGravity"),(int)1);
	hx_PhysicsRigidBody_getHeight= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody >(),HX_CSTRING("getHeight"),(int)3);
	hx_PhysicsRigidBody_getLinearDamping= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody >(),HX_CSTRING("getLinearDamping"),(int)1);
	hx_PhysicsRigidBody_getLinearFactor= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody >(),HX_CSTRING("getLinearFactor"),(int)1);
	hx_PhysicsRigidBody_getLinearVelocity= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody >(),HX_CSTRING("getLinearVelocity"),(int)1);
	hx_PhysicsRigidBody_getMass= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody >(),HX_CSTRING("getMass"),(int)1);
	hx_PhysicsRigidBody_getRestitution= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody >(),HX_CSTRING("getRestitution"),(int)1);
	hx_PhysicsRigidBody_getType= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody >(),HX_CSTRING("getType"),(int)1);
	hx_PhysicsRigidBody_isStatic= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody >(),HX_CSTRING("isStatic"),(int)1);
	hx_PhysicsRigidBody_setAngularFactor_V3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody >(),HX_CSTRING("setAngularFactor_V3"),(int)2);
	hx_PhysicsRigidBody_setAngularFactor_FltX3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody >(),HX_CSTRING("setAngularFactor_FltX3"),(int)4);
	hx_PhysicsRigidBody_setAngularVelocity_V3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody >(),HX_CSTRING("setAngularVelocity_V3"),(int)2);
	hx_PhysicsRigidBody_setAngularVelocity_FltX3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody >(),HX_CSTRING("setAngularVelocity_FltX3"),(int)4);
	hx_PhysicsRigidBody_setAnisotropicFriction_V3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody >(),HX_CSTRING("setAnisotropicFriction_V3"),(int)2);
	hx_PhysicsRigidBody_setAnisotropicFriction_FltX3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody >(),HX_CSTRING("setAnisotropicFriction_FltX3"),(int)4);
	hx_PhysicsRigidBody_setDamping= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody >(),HX_CSTRING("setDamping"),(int)3);
	hx_PhysicsRigidBody_setEnabled= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody >(),HX_CSTRING("setEnabled"),(int)2);
	hx_PhysicsRigidBody_setFriction= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody >(),HX_CSTRING("setFriction"),(int)2);
	hx_PhysicsRigidBody_setGravity_V3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody >(),HX_CSTRING("setGravity_V3"),(int)2);
	hx_PhysicsRigidBody_setGravity_FltX3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody >(),HX_CSTRING("setGravity_FltX3"),(int)4);
	hx_PhysicsRigidBody_setKinematic= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody >(),HX_CSTRING("setKinematic"),(int)2);
	hx_PhysicsRigidBody_setLinearFactor_V3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody >(),HX_CSTRING("setLinearFactor_V3"),(int)2);
	hx_PhysicsRigidBody_setLinearFactor_FltX3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody >(),HX_CSTRING("setLinearFactor_FltX3"),(int)4);
	hx_PhysicsRigidBody_setLinearVelocity_V3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody >(),HX_CSTRING("setLinearVelocity_V3"),(int)2);
	hx_PhysicsRigidBody_setLinearVelocity_FltX3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody >(),HX_CSTRING("setLinearVelocity_FltX3"),(int)4);
	hx_PhysicsRigidBody_setRestitution= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody >(),HX_CSTRING("setRestitution"),(int)2);
}

} // end namespace org
} // end namespace gameplay3d
