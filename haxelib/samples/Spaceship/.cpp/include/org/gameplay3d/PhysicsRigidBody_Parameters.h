#ifndef INCLUDED_org_gameplay3d_PhysicsRigidBody_Parameters
#define INCLUDED_org_gameplay3d_PhysicsRigidBody_Parameters

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsRigidBody_Parameters)
HX_DECLARE_CLASS2(org,gameplay3d,Vector3)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector3)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  PhysicsRigidBody_Parameters_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef PhysicsRigidBody_Parameters_obj OBJ_;
		PhysicsRigidBody_Parameters_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PhysicsRigidBody_Parameters_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PhysicsRigidBody_Parameters_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PhysicsRigidBody_Parameters"); }

		::org::gameplay3d::Vector3 anisotropicFriction;
		::org::gameplay3d::Vector3 linearFactor;
		::org::gameplay3d::Vector3 angularFactor;
		virtual Dynamic impersonate( Dynamic nativeObject);

		virtual Float get_mass( );
		Dynamic get_mass_dyn();

		virtual Float set_mass( Float value);
		Dynamic set_mass_dyn();

		virtual Float get_friction( );
		Dynamic get_friction_dyn();

		virtual Float set_friction( Float value);
		Dynamic set_friction_dyn();

		virtual Float get_restitution( );
		Dynamic get_restitution_dyn();

		virtual Float set_restitution( Float value);
		Dynamic set_restitution_dyn();

		virtual Float get_linearDamping( );
		Dynamic get_linearDamping_dyn();

		virtual Float set_linearDamping( Float value);
		Dynamic set_linearDamping_dyn();

		virtual Float get_angularDamping( );
		Dynamic get_angularDamping_dyn();

		virtual Float set_angularDamping( Float value);
		Dynamic set_angularDamping_dyn();

		virtual bool get_kinematic( );
		Dynamic get_kinematic_dyn();

		virtual bool set_kinematic( bool value);
		Dynamic set_kinematic_dyn();

		static ::org::gameplay3d::PhysicsRigidBody_Parameters make( );
		static Dynamic make_dyn();

		static ::org::gameplay3d::PhysicsRigidBody_Parameters make_FltX5_Bool_V3X3( Float mass,hx::Null< Float >  friction,hx::Null< Float >  restitution,hx::Null< Float >  linearDamping,hx::Null< Float >  angularDamping,hx::Null< bool >  kinematic,::org::gameplay3d::immutable::IVector3 anisotropicFiltering);
		static Dynamic make_FltX5_Bool_V3X3_dyn();

		static Dynamic constructNativeObject( );
		static Dynamic constructNativeObject_dyn();

		static ::org::gameplay3d::PhysicsRigidBody_Parameters constructNativeObject_FltX5_Bool_V3X3( Float mass,Float friction,Float restitution,Float linearDamping,Float angularDamping,bool kinematic,::org::gameplay3d::immutable::IVector3 anisotropicFiltering);
		static Dynamic constructNativeObject_FltX5_Bool_V3X3_dyn();

		static Dynamic hx_PhysicsRigidBody_Parameters_Construct;
		static Dynamic &hx_PhysicsRigidBody_Parameters_Construct_dyn() { return hx_PhysicsRigidBody_Parameters_Construct;}
		static Dynamic hx_PhysicsRigidBody_Parameters_Construct_FltX5_Bool_V3X3;
		static Dynamic &hx_PhysicsRigidBody_Parameters_Construct_FltX5_Bool_V3X3_dyn() { return hx_PhysicsRigidBody_Parameters_Construct_FltX5_Bool_V3X3;}
		static Dynamic hx_PhysicsRigidBody_Parameters_property_mass_get;
		static Dynamic &hx_PhysicsRigidBody_Parameters_property_mass_get_dyn() { return hx_PhysicsRigidBody_Parameters_property_mass_get;}
		static Dynamic hx_PhysicsRigidBody_Parameters_property_mass_set;
		static Dynamic &hx_PhysicsRigidBody_Parameters_property_mass_set_dyn() { return hx_PhysicsRigidBody_Parameters_property_mass_set;}
		static Dynamic hx_PhysicsRigidBody_Parameters_property_friction_get;
		static Dynamic &hx_PhysicsRigidBody_Parameters_property_friction_get_dyn() { return hx_PhysicsRigidBody_Parameters_property_friction_get;}
		static Dynamic hx_PhysicsRigidBody_Parameters_property_friction_set;
		static Dynamic &hx_PhysicsRigidBody_Parameters_property_friction_set_dyn() { return hx_PhysicsRigidBody_Parameters_property_friction_set;}
		static Dynamic hx_PhysicsRigidBody_Parameters_property_restitution_get;
		static Dynamic &hx_PhysicsRigidBody_Parameters_property_restitution_get_dyn() { return hx_PhysicsRigidBody_Parameters_property_restitution_get;}
		static Dynamic hx_PhysicsRigidBody_Parameters_property_restitution_set;
		static Dynamic &hx_PhysicsRigidBody_Parameters_property_restitution_set_dyn() { return hx_PhysicsRigidBody_Parameters_property_restitution_set;}
		static Dynamic hx_PhysicsRigidBody_Parameters_property_linearDamping_get;
		static Dynamic &hx_PhysicsRigidBody_Parameters_property_linearDamping_get_dyn() { return hx_PhysicsRigidBody_Parameters_property_linearDamping_get;}
		static Dynamic hx_PhysicsRigidBody_Parameters_property_linearDamping_set;
		static Dynamic &hx_PhysicsRigidBody_Parameters_property_linearDamping_set_dyn() { return hx_PhysicsRigidBody_Parameters_property_linearDamping_set;}
		static Dynamic hx_PhysicsRigidBody_Parameters_property_angularDamping_get;
		static Dynamic &hx_PhysicsRigidBody_Parameters_property_angularDamping_get_dyn() { return hx_PhysicsRigidBody_Parameters_property_angularDamping_get;}
		static Dynamic hx_PhysicsRigidBody_Parameters_property_angularDamping_set;
		static Dynamic &hx_PhysicsRigidBody_Parameters_property_angularDamping_set_dyn() { return hx_PhysicsRigidBody_Parameters_property_angularDamping_set;}
		static Dynamic hx_PhysicsRigidBody_Parameters_property_kinematic_get;
		static Dynamic &hx_PhysicsRigidBody_Parameters_property_kinematic_get_dyn() { return hx_PhysicsRigidBody_Parameters_property_kinematic_get;}
		static Dynamic hx_PhysicsRigidBody_Parameters_property_kinematic_set;
		static Dynamic &hx_PhysicsRigidBody_Parameters_property_kinematic_set_dyn() { return hx_PhysicsRigidBody_Parameters_property_kinematic_set;}
		static Dynamic hx_PhysicsRigidBody_Parameters_property_anisotropicFriction_get;
		static Dynamic &hx_PhysicsRigidBody_Parameters_property_anisotropicFriction_get_dyn() { return hx_PhysicsRigidBody_Parameters_property_anisotropicFriction_get;}
		static Dynamic hx_PhysicsRigidBody_Parameters_property_linearFactor_get;
		static Dynamic &hx_PhysicsRigidBody_Parameters_property_linearFactor_get_dyn() { return hx_PhysicsRigidBody_Parameters_property_linearFactor_get;}
		static Dynamic hx_PhysicsRigidBody_Parameters_property_angularFactor_get;
		static Dynamic &hx_PhysicsRigidBody_Parameters_property_angularFactor_get_dyn() { return hx_PhysicsRigidBody_Parameters_property_angularFactor_get;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_PhysicsRigidBody_Parameters */ 
