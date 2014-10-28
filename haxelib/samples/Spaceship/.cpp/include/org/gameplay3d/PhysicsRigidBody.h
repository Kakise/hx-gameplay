#ifndef INCLUDED_org_gameplay3d_PhysicsRigidBody
#define INCLUDED_org_gameplay3d_PhysicsRigidBody

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/PhysicsCollisionObject.h>
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsCollisionObject)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsRigidBody)
HX_DECLARE_CLASS2(org,gameplay3d,Vector3)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector3)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  PhysicsRigidBody_obj : public ::org::gameplay3d::PhysicsCollisionObject_obj{
	public:
		typedef ::org::gameplay3d::PhysicsCollisionObject_obj super;
		typedef PhysicsRigidBody_obj OBJ_;
		PhysicsRigidBody_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PhysicsRigidBody_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PhysicsRigidBody_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PhysicsRigidBody"); }

		::org::gameplay3d::Vector3 _angularFactor;
		::org::gameplay3d::Vector3 _angularVelocity;
		::org::gameplay3d::Vector3 _anisotropicFriction;
		::org::gameplay3d::Vector3 _gravity;
		::org::gameplay3d::Vector3 _linearFactor;
		::org::gameplay3d::Vector3 _linearVelocity;
		virtual Void applyForce( ::org::gameplay3d::immutable::IVector3 force,::org::gameplay3d::Vector3 relativePosition);
		Dynamic applyForce_dyn();

		virtual Void applyImpulse( ::org::gameplay3d::immutable::IVector3 impulse,::org::gameplay3d::Vector3 relativePosition);
		Dynamic applyImpulse_dyn();

		virtual Void applyTorque( ::org::gameplay3d::immutable::IVector3 torque);
		Dynamic applyTorque_dyn();

		virtual Void applyTorqueImpulse( ::org::gameplay3d::immutable::IVector3 torque);
		Dynamic applyTorqueImpulse_dyn();

		virtual Float getAngularDamping( );
		Dynamic getAngularDamping_dyn();

		virtual ::org::gameplay3d::Vector3 getAngularFactor( );
		Dynamic getAngularFactor_dyn();

		virtual ::org::gameplay3d::Vector3 getAngularVelocity( );
		Dynamic getAngularVelocity_dyn();

		virtual ::org::gameplay3d::Vector3 getAnisotropicFriction( );
		Dynamic getAnisotropicFriction_dyn();

		virtual Float getFriction( );
		Dynamic getFriction_dyn();

		virtual ::org::gameplay3d::Vector3 getGravity( );
		Dynamic getGravity_dyn();

		virtual Float getHeight( Float x,Float z);
		Dynamic getHeight_dyn();

		virtual Float getLinearDamping( );
		Dynamic getLinearDamping_dyn();

		virtual ::org::gameplay3d::Vector3 getLinearFactor( );
		Dynamic getLinearFactor_dyn();

		virtual ::org::gameplay3d::Vector3 getLinearVelocity( );
		Dynamic getLinearVelocity_dyn();

		virtual Float getMass( );
		Dynamic getMass_dyn();

		virtual Float getRestitution( );
		Dynamic getRestitution_dyn();

		virtual int getType( );

		virtual bool isStatic( );
		Dynamic isStatic_dyn();

		virtual Void setAngularFactor_V3( ::org::gameplay3d::immutable::IVector3 angularFactor);
		Dynamic setAngularFactor_V3_dyn();

		virtual Void setAngularFactor_FltX3( Float x,Float y,Float z);
		Dynamic setAngularFactor_FltX3_dyn();

		virtual Void setAngularVelocity_V3( ::org::gameplay3d::immutable::IVector3 velocity);
		Dynamic setAngularVelocity_V3_dyn();

		virtual Void setAngularVelocity_FltX3( Float x,Float y,Float z);
		Dynamic setAngularVelocity_FltX3_dyn();

		virtual Void setAnisotropicFriction_V3( ::org::gameplay3d::immutable::IVector3 friction);
		Dynamic setAnisotropicFriction_V3_dyn();

		virtual Void setAnisotropicFriction_FltX3( Float x,Float y,Float z);
		Dynamic setAnisotropicFriction_FltX3_dyn();

		virtual Void setDamping( Float linearDamping,Float angularDamping);
		Dynamic setDamping_dyn();

		virtual Void setEnabled( bool enable);

		virtual Void setFriction( Float friction);
		Dynamic setFriction_dyn();

		virtual Void setGravity_V3( ::org::gameplay3d::immutable::IVector3 gravity);
		Dynamic setGravity_V3_dyn();

		virtual Void setGravity_FltX3( Float x,Float y,Float z);
		Dynamic setGravity_FltX3_dyn();

		virtual Void setKinematic( bool kinematic);
		Dynamic setKinematic_dyn();

		virtual Void setLinearFactor_V3( ::org::gameplay3d::immutable::IVector3 linearFactor);
		Dynamic setLinearFactor_V3_dyn();

		virtual Void setLinearFactor_FltX3( Float x,Float y,Float z);
		Dynamic setLinearFactor_FltX3_dyn();

		virtual Void setLinearVelocity_V3( ::org::gameplay3d::immutable::IVector3 velocity);
		Dynamic setLinearVelocity_V3_dyn();

		virtual Void setLinearVelocity_FltX3( Float x,Float y,Float z);
		Dynamic setLinearVelocity_FltX3_dyn();

		virtual Void setRestitution( Float restitution);
		Dynamic setRestitution_dyn();

		static Dynamic hx_PhysicsRigidBody_applyForce;
		static Dynamic &hx_PhysicsRigidBody_applyForce_dyn() { return hx_PhysicsRigidBody_applyForce;}
		static Dynamic hx_PhysicsRigidBody_applyImpulse;
		static Dynamic &hx_PhysicsRigidBody_applyImpulse_dyn() { return hx_PhysicsRigidBody_applyImpulse;}
		static Dynamic hx_PhysicsRigidBody_applyTorque;
		static Dynamic &hx_PhysicsRigidBody_applyTorque_dyn() { return hx_PhysicsRigidBody_applyTorque;}
		static Dynamic hx_PhysicsRigidBody_applyTorqueImpulse;
		static Dynamic &hx_PhysicsRigidBody_applyTorqueImpulse_dyn() { return hx_PhysicsRigidBody_applyTorqueImpulse;}
		static Dynamic hx_PhysicsRigidBody_getAngularDamping;
		static Dynamic &hx_PhysicsRigidBody_getAngularDamping_dyn() { return hx_PhysicsRigidBody_getAngularDamping;}
		static Dynamic hx_PhysicsRigidBody_getAngularFactor;
		static Dynamic &hx_PhysicsRigidBody_getAngularFactor_dyn() { return hx_PhysicsRigidBody_getAngularFactor;}
		static Dynamic hx_PhysicsRigidBody_getAngularVelocity;
		static Dynamic &hx_PhysicsRigidBody_getAngularVelocity_dyn() { return hx_PhysicsRigidBody_getAngularVelocity;}
		static Dynamic hx_PhysicsRigidBody_getAnisotropicFriction;
		static Dynamic &hx_PhysicsRigidBody_getAnisotropicFriction_dyn() { return hx_PhysicsRigidBody_getAnisotropicFriction;}
		static Dynamic hx_PhysicsRigidBody_getFriction;
		static Dynamic &hx_PhysicsRigidBody_getFriction_dyn() { return hx_PhysicsRigidBody_getFriction;}
		static Dynamic hx_PhysicsRigidBody_getGravity;
		static Dynamic &hx_PhysicsRigidBody_getGravity_dyn() { return hx_PhysicsRigidBody_getGravity;}
		static Dynamic hx_PhysicsRigidBody_getHeight;
		static Dynamic &hx_PhysicsRigidBody_getHeight_dyn() { return hx_PhysicsRigidBody_getHeight;}
		static Dynamic hx_PhysicsRigidBody_getLinearDamping;
		static Dynamic &hx_PhysicsRigidBody_getLinearDamping_dyn() { return hx_PhysicsRigidBody_getLinearDamping;}
		static Dynamic hx_PhysicsRigidBody_getLinearFactor;
		static Dynamic &hx_PhysicsRigidBody_getLinearFactor_dyn() { return hx_PhysicsRigidBody_getLinearFactor;}
		static Dynamic hx_PhysicsRigidBody_getLinearVelocity;
		static Dynamic &hx_PhysicsRigidBody_getLinearVelocity_dyn() { return hx_PhysicsRigidBody_getLinearVelocity;}
		static Dynamic hx_PhysicsRigidBody_getMass;
		static Dynamic &hx_PhysicsRigidBody_getMass_dyn() { return hx_PhysicsRigidBody_getMass;}
		static Dynamic hx_PhysicsRigidBody_getRestitution;
		static Dynamic &hx_PhysicsRigidBody_getRestitution_dyn() { return hx_PhysicsRigidBody_getRestitution;}
		static Dynamic hx_PhysicsRigidBody_getType;
		static Dynamic &hx_PhysicsRigidBody_getType_dyn() { return hx_PhysicsRigidBody_getType;}
		static Dynamic hx_PhysicsRigidBody_isStatic;
		static Dynamic &hx_PhysicsRigidBody_isStatic_dyn() { return hx_PhysicsRigidBody_isStatic;}
		static Dynamic hx_PhysicsRigidBody_setAngularFactor_V3;
		static Dynamic &hx_PhysicsRigidBody_setAngularFactor_V3_dyn() { return hx_PhysicsRigidBody_setAngularFactor_V3;}
		static Dynamic hx_PhysicsRigidBody_setAngularFactor_FltX3;
		static Dynamic &hx_PhysicsRigidBody_setAngularFactor_FltX3_dyn() { return hx_PhysicsRigidBody_setAngularFactor_FltX3;}
		static Dynamic hx_PhysicsRigidBody_setAngularVelocity_V3;
		static Dynamic &hx_PhysicsRigidBody_setAngularVelocity_V3_dyn() { return hx_PhysicsRigidBody_setAngularVelocity_V3;}
		static Dynamic hx_PhysicsRigidBody_setAngularVelocity_FltX3;
		static Dynamic &hx_PhysicsRigidBody_setAngularVelocity_FltX3_dyn() { return hx_PhysicsRigidBody_setAngularVelocity_FltX3;}
		static Dynamic hx_PhysicsRigidBody_setAnisotropicFriction_V3;
		static Dynamic &hx_PhysicsRigidBody_setAnisotropicFriction_V3_dyn() { return hx_PhysicsRigidBody_setAnisotropicFriction_V3;}
		static Dynamic hx_PhysicsRigidBody_setAnisotropicFriction_FltX3;
		static Dynamic &hx_PhysicsRigidBody_setAnisotropicFriction_FltX3_dyn() { return hx_PhysicsRigidBody_setAnisotropicFriction_FltX3;}
		static Dynamic hx_PhysicsRigidBody_setDamping;
		static Dynamic &hx_PhysicsRigidBody_setDamping_dyn() { return hx_PhysicsRigidBody_setDamping;}
		static Dynamic hx_PhysicsRigidBody_setEnabled;
		static Dynamic &hx_PhysicsRigidBody_setEnabled_dyn() { return hx_PhysicsRigidBody_setEnabled;}
		static Dynamic hx_PhysicsRigidBody_setFriction;
		static Dynamic &hx_PhysicsRigidBody_setFriction_dyn() { return hx_PhysicsRigidBody_setFriction;}
		static Dynamic hx_PhysicsRigidBody_setGravity_V3;
		static Dynamic &hx_PhysicsRigidBody_setGravity_V3_dyn() { return hx_PhysicsRigidBody_setGravity_V3;}
		static Dynamic hx_PhysicsRigidBody_setGravity_FltX3;
		static Dynamic &hx_PhysicsRigidBody_setGravity_FltX3_dyn() { return hx_PhysicsRigidBody_setGravity_FltX3;}
		static Dynamic hx_PhysicsRigidBody_setKinematic;
		static Dynamic &hx_PhysicsRigidBody_setKinematic_dyn() { return hx_PhysicsRigidBody_setKinematic;}
		static Dynamic hx_PhysicsRigidBody_setLinearFactor_V3;
		static Dynamic &hx_PhysicsRigidBody_setLinearFactor_V3_dyn() { return hx_PhysicsRigidBody_setLinearFactor_V3;}
		static Dynamic hx_PhysicsRigidBody_setLinearFactor_FltX3;
		static Dynamic &hx_PhysicsRigidBody_setLinearFactor_FltX3_dyn() { return hx_PhysicsRigidBody_setLinearFactor_FltX3;}
		static Dynamic hx_PhysicsRigidBody_setLinearVelocity_V3;
		static Dynamic &hx_PhysicsRigidBody_setLinearVelocity_V3_dyn() { return hx_PhysicsRigidBody_setLinearVelocity_V3;}
		static Dynamic hx_PhysicsRigidBody_setLinearVelocity_FltX3;
		static Dynamic &hx_PhysicsRigidBody_setLinearVelocity_FltX3_dyn() { return hx_PhysicsRigidBody_setLinearVelocity_FltX3;}
		static Dynamic hx_PhysicsRigidBody_setRestitution;
		static Dynamic &hx_PhysicsRigidBody_setRestitution_dyn() { return hx_PhysicsRigidBody_setRestitution;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_PhysicsRigidBody */ 
