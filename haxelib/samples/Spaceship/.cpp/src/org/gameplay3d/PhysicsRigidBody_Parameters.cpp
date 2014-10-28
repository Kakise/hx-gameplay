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
#ifndef INCLUDED_org_gameplay3d_PhysicsRigidBody_Parameters
#include <org/gameplay3d/PhysicsRigidBody_Parameters.h>
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

Void PhysicsRigidBody_Parameters_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody_Parameters","new",0x4820cbe8,"org.gameplay3d.PhysicsRigidBody_Parameters.new","org/gameplay3d/PhysicsRigidBody_Parameters.hx",12,0xb7ec6e28)
HX_STACK_THIS(this)
HX_STACK_ARG(nativeObjectInitializer,"nativeObjectInitializer")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(12)
	super::__construct(nativeObjectInitializer,nativeObjectInitializerParams);
}
;
	return null();
}

//PhysicsRigidBody_Parameters_obj::~PhysicsRigidBody_Parameters_obj() { }

Dynamic PhysicsRigidBody_Parameters_obj::__CreateEmpty() { return  new PhysicsRigidBody_Parameters_obj; }
hx::ObjectPtr< PhysicsRigidBody_Parameters_obj > PhysicsRigidBody_Parameters_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< PhysicsRigidBody_Parameters_obj > result = new PhysicsRigidBody_Parameters_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic PhysicsRigidBody_Parameters_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PhysicsRigidBody_Parameters_obj > result = new PhysicsRigidBody_Parameters_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Dynamic PhysicsRigidBody_Parameters_obj::impersonate( Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody_Parameters","impersonate",0xfd86fec1,"org.gameplay3d.PhysicsRigidBody_Parameters.impersonate","org/gameplay3d/PhysicsRigidBody_Parameters.hx",33,0xb7ec6e28)
	HX_STACK_THIS(this)
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(34)
	this->super::impersonate(nativeObject);
	HX_STACK_LINE(28)
	if (((this->anisotropicFriction == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(35)
			Dynamic nativeObject1 = ::org::gameplay3d::PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_anisotropicFriction_get(nativeObject);		HX_STACK_VAR(nativeObject1,"nativeObject1");
			HX_STACK_LINE(29)
			if (((nativeObject1 == null()))){
				HX_STACK_LINE(29)
				_g1 = null();
			}
			else{
				HX_STACK_LINE(29)
				if ((::Std_obj::is(nativeObject1,hx::ClassOf< ::cpp::vm::WeakRef >()))){
					HX_STACK_LINE(29)
					::cpp::vm::WeakRef ref = nativeObject1;		HX_STACK_VAR(ref,"ref");
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
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject1;
					HX_STACK_LINE(29)
					_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
				}
			}
		}
		HX_STACK_LINE(29)
		this->anisotropicFriction = _g1;
	}
	else{
		HX_STACK_LINE(35)
		Dynamic _g2 = ::org::gameplay3d::PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_anisotropicFriction_get(nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g3 = this->anisotropicFriction->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		this->anisotropicFriction = _g3;
	}
	HX_STACK_LINE(28)
	if (((this->linearFactor == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(36)
			Dynamic nativeObject1 = ::org::gameplay3d::PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_linearFactor_get(nativeObject);		HX_STACK_VAR(nativeObject1,"nativeObject1");
			HX_STACK_LINE(29)
			if (((nativeObject1 == null()))){
				HX_STACK_LINE(29)
				_g5 = null();
			}
			else{
				HX_STACK_LINE(29)
				if ((::Std_obj::is(nativeObject1,hx::ClassOf< ::cpp::vm::WeakRef >()))){
					HX_STACK_LINE(29)
					::cpp::vm::WeakRef ref = nativeObject1;		HX_STACK_VAR(ref,"ref");
					HX_STACK_LINE(29)
					::org::gameplay3d::Vector3 result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Vector3 _g4 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(29)
						result = _g4;
						HX_STACK_LINE(29)
						ref->set(result);
					}
					HX_STACK_LINE(29)
					_g5 = result;
				}
				else{
					HX_STACK_LINE(29)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject1;
					HX_STACK_LINE(29)
					_g5 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
				}
			}
		}
		HX_STACK_LINE(29)
		this->linearFactor = _g5;
	}
	else{
		HX_STACK_LINE(36)
		Dynamic _g6 = ::org::gameplay3d::PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_linearFactor_get(nativeObject);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g7 = this->linearFactor->impersonate(_g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(31)
		this->linearFactor = _g7;
	}
	HX_STACK_LINE(28)
	if (((this->angularFactor == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g9;		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(37)
			Dynamic nativeObject1 = ::org::gameplay3d::PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_angularFactor_get(nativeObject);		HX_STACK_VAR(nativeObject1,"nativeObject1");
			HX_STACK_LINE(29)
			if (((nativeObject1 == null()))){
				HX_STACK_LINE(29)
				_g9 = null();
			}
			else{
				HX_STACK_LINE(29)
				if ((::Std_obj::is(nativeObject1,hx::ClassOf< ::cpp::vm::WeakRef >()))){
					HX_STACK_LINE(29)
					::cpp::vm::WeakRef ref = nativeObject1;		HX_STACK_VAR(ref,"ref");
					HX_STACK_LINE(29)
					::org::gameplay3d::Vector3 result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Vector3 _g8 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(29)
						result = _g8;
						HX_STACK_LINE(29)
						ref->set(result);
					}
					HX_STACK_LINE(29)
					_g9 = result;
				}
				else{
					HX_STACK_LINE(29)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject1;
					HX_STACK_LINE(29)
					_g9 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
				}
			}
		}
		HX_STACK_LINE(29)
		this->angularFactor = _g9;
	}
	else{
		HX_STACK_LINE(37)
		Dynamic _g10 = ::org::gameplay3d::PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_angularFactor_get(nativeObject);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g11 = this->angularFactor->impersonate(_g10);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(31)
		this->angularFactor = _g11;
	}
	HX_STACK_LINE(38)
	return hx::ObjectPtr<OBJ_>(this);
}


Float PhysicsRigidBody_Parameters_obj::get_mass( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody_Parameters","get_mass",0xb0df33f5,"org.gameplay3d.PhysicsRigidBody_Parameters.get_mass","org/gameplay3d/PhysicsRigidBody_Parameters.hx",71,0xb7ec6e28)
	HX_STACK_THIS(this)
	HX_STACK_LINE(71)
	return ::org::gameplay3d::PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_mass_get(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsRigidBody_Parameters_obj,get_mass,return )

Float PhysicsRigidBody_Parameters_obj::set_mass( Float value){
	HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody_Parameters","set_mass",0x5f3c8d69,"org.gameplay3d.PhysicsRigidBody_Parameters.set_mass","org/gameplay3d/PhysicsRigidBody_Parameters.hx",76,0xb7ec6e28)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(76)
	return ::org::gameplay3d::PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_mass_set(this->nativeObject,value);
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsRigidBody_Parameters_obj,set_mass,return )

Float PhysicsRigidBody_Parameters_obj::get_friction( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody_Parameters","get_friction",0xd6ae807b,"org.gameplay3d.PhysicsRigidBody_Parameters.get_friction","org/gameplay3d/PhysicsRigidBody_Parameters.hx",81,0xb7ec6e28)
	HX_STACK_THIS(this)
	HX_STACK_LINE(81)
	return ::org::gameplay3d::PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_friction_get(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsRigidBody_Parameters_obj,get_friction,return )

Float PhysicsRigidBody_Parameters_obj::set_friction( Float value){
	HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody_Parameters","set_friction",0xeba7a3ef,"org.gameplay3d.PhysicsRigidBody_Parameters.set_friction","org/gameplay3d/PhysicsRigidBody_Parameters.hx",86,0xb7ec6e28)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(86)
	return ::org::gameplay3d::PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_friction_set(this->nativeObject,value);
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsRigidBody_Parameters_obj,set_friction,return )

Float PhysicsRigidBody_Parameters_obj::get_restitution( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody_Parameters","get_restitution",0x5c4b0b89,"org.gameplay3d.PhysicsRigidBody_Parameters.get_restitution","org/gameplay3d/PhysicsRigidBody_Parameters.hx",91,0xb7ec6e28)
	HX_STACK_THIS(this)
	HX_STACK_LINE(91)
	return ::org::gameplay3d::PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_restitution_get(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsRigidBody_Parameters_obj,get_restitution,return )

Float PhysicsRigidBody_Parameters_obj::set_restitution( Float value){
	HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody_Parameters","set_restitution",0x58168895,"org.gameplay3d.PhysicsRigidBody_Parameters.set_restitution","org/gameplay3d/PhysicsRigidBody_Parameters.hx",96,0xb7ec6e28)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(96)
	return ::org::gameplay3d::PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_restitution_set(this->nativeObject,value);
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsRigidBody_Parameters_obj,set_restitution,return )

Float PhysicsRigidBody_Parameters_obj::get_linearDamping( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody_Parameters","get_linearDamping",0x9f7dc23c,"org.gameplay3d.PhysicsRigidBody_Parameters.get_linearDamping","org/gameplay3d/PhysicsRigidBody_Parameters.hx",101,0xb7ec6e28)
	HX_STACK_THIS(this)
	HX_STACK_LINE(101)
	return ::org::gameplay3d::PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_linearDamping_get(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsRigidBody_Parameters_obj,get_linearDamping,return )

Float PhysicsRigidBody_Parameters_obj::set_linearDamping( Float value){
	HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody_Parameters","set_linearDamping",0xc2eb9a48,"org.gameplay3d.PhysicsRigidBody_Parameters.set_linearDamping","org/gameplay3d/PhysicsRigidBody_Parameters.hx",106,0xb7ec6e28)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(106)
	return ::org::gameplay3d::PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_linearDamping_set(this->nativeObject,value);
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsRigidBody_Parameters_obj,set_linearDamping,return )

Float PhysicsRigidBody_Parameters_obj::get_angularDamping( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody_Parameters","get_angularDamping",0x7ff4a841,"org.gameplay3d.PhysicsRigidBody_Parameters.get_angularDamping","org/gameplay3d/PhysicsRigidBody_Parameters.hx",111,0xb7ec6e28)
	HX_STACK_THIS(this)
	HX_STACK_LINE(111)
	return ::org::gameplay3d::PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_angularDamping_get(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsRigidBody_Parameters_obj,get_angularDamping,return )

Float PhysicsRigidBody_Parameters_obj::set_angularDamping( Float value){
	HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody_Parameters","set_angularDamping",0x5ca3dab5,"org.gameplay3d.PhysicsRigidBody_Parameters.set_angularDamping","org/gameplay3d/PhysicsRigidBody_Parameters.hx",116,0xb7ec6e28)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(116)
	return ::org::gameplay3d::PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_angularDamping_set(this->nativeObject,value);
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsRigidBody_Parameters_obj,set_angularDamping,return )

bool PhysicsRigidBody_Parameters_obj::get_kinematic( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody_Parameters","get_kinematic",0xad810264,"org.gameplay3d.PhysicsRigidBody_Parameters.get_kinematic","org/gameplay3d/PhysicsRigidBody_Parameters.hx",121,0xb7ec6e28)
	HX_STACK_THIS(this)
	HX_STACK_LINE(121)
	return ::org::gameplay3d::PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_kinematic_get(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsRigidBody_Parameters_obj,get_kinematic,return )

bool PhysicsRigidBody_Parameters_obj::set_kinematic( bool value){
	HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody_Parameters","set_kinematic",0xf286e470,"org.gameplay3d.PhysicsRigidBody_Parameters.set_kinematic","org/gameplay3d/PhysicsRigidBody_Parameters.hx",126,0xb7ec6e28)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(126)
	return ::org::gameplay3d::PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_kinematic_set(this->nativeObject,value);
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsRigidBody_Parameters_obj,set_kinematic,return )

::org::gameplay3d::PhysicsRigidBody_Parameters PhysicsRigidBody_Parameters_obj::make( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody_Parameters","make",0xd3e55566,"org.gameplay3d.PhysicsRigidBody_Parameters.make","org/gameplay3d/PhysicsRigidBody_Parameters.hx",43,0xb7ec6e28)
	HX_STACK_LINE(44)
	Dynamic _g = ::org::gameplay3d::PhysicsRigidBody_Parameters_obj::constructNativeObject();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(44)
	return ::org::gameplay3d::PhysicsRigidBody_Parameters_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PhysicsRigidBody_Parameters_obj,make,return )

::org::gameplay3d::PhysicsRigidBody_Parameters PhysicsRigidBody_Parameters_obj::make_FltX5_Bool_V3X3( Float mass,hx::Null< Float >  __o_friction,hx::Null< Float >  __o_restitution,hx::Null< Float >  __o_linearDamping,hx::Null< Float >  __o_angularDamping,hx::Null< bool >  __o_kinematic,::org::gameplay3d::immutable::IVector3 anisotropicFiltering){
Float friction = __o_friction.Default(0.5);
Float restitution = __o_restitution.Default(0.0);
Float linearDamping = __o_linearDamping.Default(0.0);
Float angularDamping = __o_angularDamping.Default(0.0);
bool kinematic = __o_kinematic.Default(false);
	HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody_Parameters","make_FltX5_Bool_V3X3",0x28ccd4a0,"org.gameplay3d.PhysicsRigidBody_Parameters.make_FltX5_Bool_V3X3","org/gameplay3d/PhysicsRigidBody_Parameters.hx",49,0xb7ec6e28)
	HX_STACK_ARG(mass,"mass")
	HX_STACK_ARG(friction,"friction")
	HX_STACK_ARG(restitution,"restitution")
	HX_STACK_ARG(linearDamping,"linearDamping")
	HX_STACK_ARG(angularDamping,"angularDamping")
	HX_STACK_ARG(kinematic,"kinematic")
	HX_STACK_ARG(anisotropicFiltering,"anisotropicFiltering")
{
		HX_STACK_LINE(50)
		::org::gameplay3d::PhysicsRigidBody_Parameters _g = ::org::gameplay3d::PhysicsRigidBody_Parameters_obj::constructNativeObject_FltX5_Bool_V3X3(mass,friction,restitution,linearDamping,angularDamping,kinematic,anisotropicFiltering);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(50)
		return ::org::gameplay3d::PhysicsRigidBody_Parameters_obj::__new(_g,null());
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(PhysicsRigidBody_Parameters_obj,make_FltX5_Bool_V3X3,return )

Dynamic PhysicsRigidBody_Parameters_obj::constructNativeObject( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody_Parameters","constructNativeObject",0x4d9feff5,"org.gameplay3d.PhysicsRigidBody_Parameters.constructNativeObject","org/gameplay3d/PhysicsRigidBody_Parameters.hx",56,0xb7ec6e28)
	HX_STACK_LINE(56)
	return ::org::gameplay3d::PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_Construct();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PhysicsRigidBody_Parameters_obj,constructNativeObject,return )

::org::gameplay3d::PhysicsRigidBody_Parameters PhysicsRigidBody_Parameters_obj::constructNativeObject_FltX5_Bool_V3X3( Float mass,Float friction,Float restitution,Float linearDamping,Float angularDamping,bool kinematic,::org::gameplay3d::immutable::IVector3 anisotropicFiltering){
	HX_STACK_FRAME("org.gameplay3d.PhysicsRigidBody_Parameters","constructNativeObject_FltX5_Bool_V3X3",0x090dbd2f,"org.gameplay3d.PhysicsRigidBody_Parameters.constructNativeObject_FltX5_Bool_V3X3","org/gameplay3d/PhysicsRigidBody_Parameters.hx",62,0xb7ec6e28)
	HX_STACK_ARG(mass,"mass")
	HX_STACK_ARG(friction,"friction")
	HX_STACK_ARG(restitution,"restitution")
	HX_STACK_ARG(linearDamping,"linearDamping")
	HX_STACK_ARG(angularDamping,"angularDamping")
	HX_STACK_ARG(kinematic,"kinematic")
	HX_STACK_ARG(anisotropicFiltering,"anisotropicFiltering")
	HX_STACK_LINE(62)
	return ::org::gameplay3d::PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_Construct_FltX5_Bool_V3X3(mass,friction,restitution,linearDamping,angularDamping,kinematic,anisotropicFiltering);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(PhysicsRigidBody_Parameters_obj,constructNativeObject_FltX5_Bool_V3X3,return )

Dynamic PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_Construct;

Dynamic PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_Construct_FltX5_Bool_V3X3;

Dynamic PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_mass_get;

Dynamic PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_mass_set;

Dynamic PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_friction_get;

Dynamic PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_friction_set;

Dynamic PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_restitution_get;

Dynamic PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_restitution_set;

Dynamic PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_linearDamping_get;

Dynamic PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_linearDamping_set;

Dynamic PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_angularDamping_get;

Dynamic PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_angularDamping_set;

Dynamic PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_kinematic_get;

Dynamic PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_kinematic_set;

Dynamic PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_anisotropicFriction_get;

Dynamic PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_linearFactor_get;

Dynamic PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_angularFactor_get;


PhysicsRigidBody_Parameters_obj::PhysicsRigidBody_Parameters_obj()
{
}

void PhysicsRigidBody_Parameters_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PhysicsRigidBody_Parameters);
	HX_MARK_MEMBER_NAME(anisotropicFriction,"anisotropicFriction");
	HX_MARK_MEMBER_NAME(linearFactor,"linearFactor");
	HX_MARK_MEMBER_NAME(angularFactor,"angularFactor");
	::org::gameplay3d::intern::NativeBinding_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PhysicsRigidBody_Parameters_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(anisotropicFriction,"anisotropicFriction");
	HX_VISIT_MEMBER_NAME(linearFactor,"linearFactor");
	HX_VISIT_MEMBER_NAME(angularFactor,"angularFactor");
	::org::gameplay3d::intern::NativeBinding_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PhysicsRigidBody_Parameters_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { return make_dyn(); }
		if (HX_FIELD_EQ(inName,"mass") ) { return get_mass(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"friction") ) { return get_friction(); }
		if (HX_FIELD_EQ(inName,"get_mass") ) { return get_mass_dyn(); }
		if (HX_FIELD_EQ(inName,"set_mass") ) { return set_mass_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"kinematic") ) { return get_kinematic(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"restitution") ) { return get_restitution(); }
		if (HX_FIELD_EQ(inName,"impersonate") ) { return impersonate_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"linearFactor") ) { return linearFactor; }
		if (HX_FIELD_EQ(inName,"get_friction") ) { return get_friction_dyn(); }
		if (HX_FIELD_EQ(inName,"set_friction") ) { return set_friction_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"linearDamping") ) { return get_linearDamping(); }
		if (HX_FIELD_EQ(inName,"angularFactor") ) { return angularFactor; }
		if (HX_FIELD_EQ(inName,"get_kinematic") ) { return get_kinematic_dyn(); }
		if (HX_FIELD_EQ(inName,"set_kinematic") ) { return set_kinematic_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"angularDamping") ) { return get_angularDamping(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_restitution") ) { return get_restitution_dyn(); }
		if (HX_FIELD_EQ(inName,"set_restitution") ) { return set_restitution_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_linearDamping") ) { return get_linearDamping_dyn(); }
		if (HX_FIELD_EQ(inName,"set_linearDamping") ) { return set_linearDamping_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_angularDamping") ) { return get_angularDamping_dyn(); }
		if (HX_FIELD_EQ(inName,"set_angularDamping") ) { return set_angularDamping_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"anisotropicFriction") ) { return anisotropicFriction; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"make_FltX5_Bool_V3X3") ) { return make_FltX5_Bool_V3X3_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"constructNativeObject") ) { return constructNativeObject_dyn(); }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"constructNativeObject_FltX5_Bool_V3X3") ) { return constructNativeObject_FltX5_Bool_V3X3_dyn(); }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_Parameters_Construct") ) { return hx_PhysicsRigidBody_Parameters_Construct; }
		break;
	case 48:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_Parameters_property_mass_get") ) { return hx_PhysicsRigidBody_Parameters_property_mass_get; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_Parameters_property_mass_set") ) { return hx_PhysicsRigidBody_Parameters_property_mass_set; }
		break;
	case 52:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_Parameters_property_friction_get") ) { return hx_PhysicsRigidBody_Parameters_property_friction_get; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_Parameters_property_friction_set") ) { return hx_PhysicsRigidBody_Parameters_property_friction_set; }
		break;
	case 53:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_Parameters_property_kinematic_get") ) { return hx_PhysicsRigidBody_Parameters_property_kinematic_get; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_Parameters_property_kinematic_set") ) { return hx_PhysicsRigidBody_Parameters_property_kinematic_set; }
		break;
	case 55:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_Parameters_property_restitution_get") ) { return hx_PhysicsRigidBody_Parameters_property_restitution_get; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_Parameters_property_restitution_set") ) { return hx_PhysicsRigidBody_Parameters_property_restitution_set; }
		break;
	case 56:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_Parameters_Construct_FltX5_Bool_V3X3") ) { return hx_PhysicsRigidBody_Parameters_Construct_FltX5_Bool_V3X3; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_Parameters_property_linearFactor_get") ) { return hx_PhysicsRigidBody_Parameters_property_linearFactor_get; }
		break;
	case 57:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_Parameters_property_linearDamping_get") ) { return hx_PhysicsRigidBody_Parameters_property_linearDamping_get; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_Parameters_property_linearDamping_set") ) { return hx_PhysicsRigidBody_Parameters_property_linearDamping_set; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_Parameters_property_angularFactor_get") ) { return hx_PhysicsRigidBody_Parameters_property_angularFactor_get; }
		break;
	case 58:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_Parameters_property_angularDamping_get") ) { return hx_PhysicsRigidBody_Parameters_property_angularDamping_get; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_Parameters_property_angularDamping_set") ) { return hx_PhysicsRigidBody_Parameters_property_angularDamping_set; }
		break;
	case 63:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_Parameters_property_anisotropicFriction_get") ) { return hx_PhysicsRigidBody_Parameters_property_anisotropicFriction_get; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PhysicsRigidBody_Parameters_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mass") ) { return set_mass(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"friction") ) { return set_friction(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"kinematic") ) { return set_kinematic(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"restitution") ) { return set_restitution(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"linearFactor") ) { linearFactor=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"linearDamping") ) { return set_linearDamping(inValue); }
		if (HX_FIELD_EQ(inName,"angularFactor") ) { angularFactor=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"angularDamping") ) { return set_angularDamping(inValue); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"anisotropicFriction") ) { anisotropicFriction=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_Parameters_Construct") ) { hx_PhysicsRigidBody_Parameters_Construct=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 48:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_Parameters_property_mass_get") ) { hx_PhysicsRigidBody_Parameters_property_mass_get=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_Parameters_property_mass_set") ) { hx_PhysicsRigidBody_Parameters_property_mass_set=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 52:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_Parameters_property_friction_get") ) { hx_PhysicsRigidBody_Parameters_property_friction_get=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_Parameters_property_friction_set") ) { hx_PhysicsRigidBody_Parameters_property_friction_set=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 53:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_Parameters_property_kinematic_get") ) { hx_PhysicsRigidBody_Parameters_property_kinematic_get=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_Parameters_property_kinematic_set") ) { hx_PhysicsRigidBody_Parameters_property_kinematic_set=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 55:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_Parameters_property_restitution_get") ) { hx_PhysicsRigidBody_Parameters_property_restitution_get=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_Parameters_property_restitution_set") ) { hx_PhysicsRigidBody_Parameters_property_restitution_set=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 56:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_Parameters_Construct_FltX5_Bool_V3X3") ) { hx_PhysicsRigidBody_Parameters_Construct_FltX5_Bool_V3X3=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_Parameters_property_linearFactor_get") ) { hx_PhysicsRigidBody_Parameters_property_linearFactor_get=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 57:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_Parameters_property_linearDamping_get") ) { hx_PhysicsRigidBody_Parameters_property_linearDamping_get=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_Parameters_property_linearDamping_set") ) { hx_PhysicsRigidBody_Parameters_property_linearDamping_set=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_Parameters_property_angularFactor_get") ) { hx_PhysicsRigidBody_Parameters_property_angularFactor_get=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 58:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_Parameters_property_angularDamping_get") ) { hx_PhysicsRigidBody_Parameters_property_angularDamping_get=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_Parameters_property_angularDamping_set") ) { hx_PhysicsRigidBody_Parameters_property_angularDamping_set=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 63:
		if (HX_FIELD_EQ(inName,"hx_PhysicsRigidBody_Parameters_property_anisotropicFriction_get") ) { hx_PhysicsRigidBody_Parameters_property_anisotropicFriction_get=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PhysicsRigidBody_Parameters_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("mass"));
	outFields->push(HX_CSTRING("friction"));
	outFields->push(HX_CSTRING("restitution"));
	outFields->push(HX_CSTRING("linearDamping"));
	outFields->push(HX_CSTRING("angularDamping"));
	outFields->push(HX_CSTRING("kinematic"));
	outFields->push(HX_CSTRING("anisotropicFriction"));
	outFields->push(HX_CSTRING("linearFactor"));
	outFields->push(HX_CSTRING("angularFactor"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("make"),
	HX_CSTRING("make_FltX5_Bool_V3X3"),
	HX_CSTRING("constructNativeObject"),
	HX_CSTRING("constructNativeObject_FltX5_Bool_V3X3"),
	HX_CSTRING("hx_PhysicsRigidBody_Parameters_Construct"),
	HX_CSTRING("hx_PhysicsRigidBody_Parameters_Construct_FltX5_Bool_V3X3"),
	HX_CSTRING("hx_PhysicsRigidBody_Parameters_property_mass_get"),
	HX_CSTRING("hx_PhysicsRigidBody_Parameters_property_mass_set"),
	HX_CSTRING("hx_PhysicsRigidBody_Parameters_property_friction_get"),
	HX_CSTRING("hx_PhysicsRigidBody_Parameters_property_friction_set"),
	HX_CSTRING("hx_PhysicsRigidBody_Parameters_property_restitution_get"),
	HX_CSTRING("hx_PhysicsRigidBody_Parameters_property_restitution_set"),
	HX_CSTRING("hx_PhysicsRigidBody_Parameters_property_linearDamping_get"),
	HX_CSTRING("hx_PhysicsRigidBody_Parameters_property_linearDamping_set"),
	HX_CSTRING("hx_PhysicsRigidBody_Parameters_property_angularDamping_get"),
	HX_CSTRING("hx_PhysicsRigidBody_Parameters_property_angularDamping_set"),
	HX_CSTRING("hx_PhysicsRigidBody_Parameters_property_kinematic_get"),
	HX_CSTRING("hx_PhysicsRigidBody_Parameters_property_kinematic_set"),
	HX_CSTRING("hx_PhysicsRigidBody_Parameters_property_anisotropicFriction_get"),
	HX_CSTRING("hx_PhysicsRigidBody_Parameters_property_linearFactor_get"),
	HX_CSTRING("hx_PhysicsRigidBody_Parameters_property_angularFactor_get"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(PhysicsRigidBody_Parameters_obj,anisotropicFriction),HX_CSTRING("anisotropicFriction")},
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(PhysicsRigidBody_Parameters_obj,linearFactor),HX_CSTRING("linearFactor")},
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(PhysicsRigidBody_Parameters_obj,angularFactor),HX_CSTRING("angularFactor")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("anisotropicFriction"),
	HX_CSTRING("linearFactor"),
	HX_CSTRING("angularFactor"),
	HX_CSTRING("impersonate"),
	HX_CSTRING("get_mass"),
	HX_CSTRING("set_mass"),
	HX_CSTRING("get_friction"),
	HX_CSTRING("set_friction"),
	HX_CSTRING("get_restitution"),
	HX_CSTRING("set_restitution"),
	HX_CSTRING("get_linearDamping"),
	HX_CSTRING("set_linearDamping"),
	HX_CSTRING("get_angularDamping"),
	HX_CSTRING("set_angularDamping"),
	HX_CSTRING("get_kinematic"),
	HX_CSTRING("set_kinematic"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_Parameters_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_Construct,"hx_PhysicsRigidBody_Parameters_Construct");
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_Construct_FltX5_Bool_V3X3,"hx_PhysicsRigidBody_Parameters_Construct_FltX5_Bool_V3X3");
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_mass_get,"hx_PhysicsRigidBody_Parameters_property_mass_get");
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_mass_set,"hx_PhysicsRigidBody_Parameters_property_mass_set");
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_friction_get,"hx_PhysicsRigidBody_Parameters_property_friction_get");
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_friction_set,"hx_PhysicsRigidBody_Parameters_property_friction_set");
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_restitution_get,"hx_PhysicsRigidBody_Parameters_property_restitution_get");
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_restitution_set,"hx_PhysicsRigidBody_Parameters_property_restitution_set");
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_linearDamping_get,"hx_PhysicsRigidBody_Parameters_property_linearDamping_get");
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_linearDamping_set,"hx_PhysicsRigidBody_Parameters_property_linearDamping_set");
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_angularDamping_get,"hx_PhysicsRigidBody_Parameters_property_angularDamping_get");
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_angularDamping_set,"hx_PhysicsRigidBody_Parameters_property_angularDamping_set");
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_kinematic_get,"hx_PhysicsRigidBody_Parameters_property_kinematic_get");
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_kinematic_set,"hx_PhysicsRigidBody_Parameters_property_kinematic_set");
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_anisotropicFriction_get,"hx_PhysicsRigidBody_Parameters_property_anisotropicFriction_get");
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_linearFactor_get,"hx_PhysicsRigidBody_Parameters_property_linearFactor_get");
	HX_MARK_MEMBER_NAME(PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_angularFactor_get,"hx_PhysicsRigidBody_Parameters_property_angularFactor_get");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_Parameters_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_Construct,"hx_PhysicsRigidBody_Parameters_Construct");
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_Construct_FltX5_Bool_V3X3,"hx_PhysicsRigidBody_Parameters_Construct_FltX5_Bool_V3X3");
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_mass_get,"hx_PhysicsRigidBody_Parameters_property_mass_get");
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_mass_set,"hx_PhysicsRigidBody_Parameters_property_mass_set");
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_friction_get,"hx_PhysicsRigidBody_Parameters_property_friction_get");
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_friction_set,"hx_PhysicsRigidBody_Parameters_property_friction_set");
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_restitution_get,"hx_PhysicsRigidBody_Parameters_property_restitution_get");
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_restitution_set,"hx_PhysicsRigidBody_Parameters_property_restitution_set");
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_linearDamping_get,"hx_PhysicsRigidBody_Parameters_property_linearDamping_get");
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_linearDamping_set,"hx_PhysicsRigidBody_Parameters_property_linearDamping_set");
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_angularDamping_get,"hx_PhysicsRigidBody_Parameters_property_angularDamping_get");
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_angularDamping_set,"hx_PhysicsRigidBody_Parameters_property_angularDamping_set");
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_kinematic_get,"hx_PhysicsRigidBody_Parameters_property_kinematic_get");
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_kinematic_set,"hx_PhysicsRigidBody_Parameters_property_kinematic_set");
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_anisotropicFriction_get,"hx_PhysicsRigidBody_Parameters_property_anisotropicFriction_get");
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_linearFactor_get,"hx_PhysicsRigidBody_Parameters_property_linearFactor_get");
	HX_VISIT_MEMBER_NAME(PhysicsRigidBody_Parameters_obj::hx_PhysicsRigidBody_Parameters_property_angularFactor_get,"hx_PhysicsRigidBody_Parameters_property_angularFactor_get");
};

#endif

Class PhysicsRigidBody_Parameters_obj::__mClass;

void PhysicsRigidBody_Parameters_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.PhysicsRigidBody_Parameters"), hx::TCanCast< PhysicsRigidBody_Parameters_obj> ,sStaticFields,sMemberFields,
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

void PhysicsRigidBody_Parameters_obj::__boot()
{
	hx_PhysicsRigidBody_Parameters_Construct= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody_Parameters >(),HX_CSTRING("Construct"),(int)0);
	hx_PhysicsRigidBody_Parameters_Construct_FltX5_Bool_V3X3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody_Parameters >(),HX_CSTRING("Construct_FltX5_Bool_V3X3"),(int)-1);
	hx_PhysicsRigidBody_Parameters_property_mass_get= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody_Parameters >(),HX_CSTRING("property_mass_get"),(int)1);
	hx_PhysicsRigidBody_Parameters_property_mass_set= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody_Parameters >(),HX_CSTRING("property_mass_set"),(int)2);
	hx_PhysicsRigidBody_Parameters_property_friction_get= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody_Parameters >(),HX_CSTRING("property_friction_get"),(int)1);
	hx_PhysicsRigidBody_Parameters_property_friction_set= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody_Parameters >(),HX_CSTRING("property_friction_set"),(int)2);
	hx_PhysicsRigidBody_Parameters_property_restitution_get= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody_Parameters >(),HX_CSTRING("property_restitution_get"),(int)1);
	hx_PhysicsRigidBody_Parameters_property_restitution_set= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody_Parameters >(),HX_CSTRING("property_restitution_set"),(int)2);
	hx_PhysicsRigidBody_Parameters_property_linearDamping_get= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody_Parameters >(),HX_CSTRING("property_linearDamping_get"),(int)1);
	hx_PhysicsRigidBody_Parameters_property_linearDamping_set= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody_Parameters >(),HX_CSTRING("property_linearDamping_set"),(int)2);
	hx_PhysicsRigidBody_Parameters_property_angularDamping_get= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody_Parameters >(),HX_CSTRING("property_angularDamping_get"),(int)1);
	hx_PhysicsRigidBody_Parameters_property_angularDamping_set= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody_Parameters >(),HX_CSTRING("property_angularDamping_set"),(int)2);
	hx_PhysicsRigidBody_Parameters_property_kinematic_get= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody_Parameters >(),HX_CSTRING("property_kinematic_get"),(int)1);
	hx_PhysicsRigidBody_Parameters_property_kinematic_set= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody_Parameters >(),HX_CSTRING("property_kinematic_set"),(int)2);
	hx_PhysicsRigidBody_Parameters_property_anisotropicFriction_get= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody_Parameters >(),HX_CSTRING("property_anisotropicFriction_get"),(int)1);
	hx_PhysicsRigidBody_Parameters_property_linearFactor_get= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody_Parameters >(),HX_CSTRING("property_linearFactor_get"),(int)1);
	hx_PhysicsRigidBody_Parameters_property_angularFactor_get= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody_Parameters >(),HX_CSTRING("property_angularFactor_get"),(int)1);
}

} // end namespace org
} // end namespace gameplay3d
