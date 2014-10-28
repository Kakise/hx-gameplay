#ifndef INCLUDED_org_gameplay3d_PhysicsCharacter
#define INCLUDED_org_gameplay3d_PhysicsCharacter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/PhysicsGhostObject.h>
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsCharacter)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsCollisionObject)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsGhostObject)
HX_DECLARE_CLASS2(org,gameplay3d,Vector3)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IQuaternion)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector3)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  PhysicsCharacter_obj : public ::org::gameplay3d::PhysicsGhostObject_obj{
	public:
		typedef ::org::gameplay3d::PhysicsGhostObject_obj super;
		typedef PhysicsCharacter_obj OBJ_;
		PhysicsCharacter_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PhysicsCharacter_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PhysicsCharacter_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PhysicsCharacter"); }

		::org::gameplay3d::Vector3 _currentVelocity;
		virtual ::org::gameplay3d::Vector3 getCurrentVelocity( );
		Dynamic getCurrentVelocity_dyn();

		virtual Float getMaxSlopeAngle( );
		Dynamic getMaxSlopeAngle_dyn();

		virtual Float getMaxStepHeight( );
		Dynamic getMaxStepHeight_dyn();

		virtual int getType( );

		virtual bool isPhysicsEnabled( );
		Dynamic isPhysicsEnabled_dyn();

		virtual Void jump( Float height);
		Dynamic jump_dyn();

		virtual Void rotate_Qtrn( ::org::gameplay3d::immutable::IQuaternion rotation);
		Dynamic rotate_Qtrn_dyn();

		virtual Void rotate_V3_Flt( ::org::gameplay3d::immutable::IVector3 axis,Float angle);
		Dynamic rotate_V3_Flt_dyn();

		virtual Void setForwardVelocity( hx::Null< Float >  velocity);
		Dynamic setForwardVelocity_dyn();

		virtual Void setMaxSlopeAngle( Float angle);
		Dynamic setMaxSlopeAngle_dyn();

		virtual Void setMaxStepHeight( Float height);
		Dynamic setMaxStepHeight_dyn();

		virtual Void setPhysicsEnabled( bool enabled);
		Dynamic setPhysicsEnabled_dyn();

		virtual Void setRightVelocity( hx::Null< Float >  velocity);
		Dynamic setRightVelocity_dyn();

		virtual Void setRotation_Qtrn( ::org::gameplay3d::immutable::IQuaternion rotation);
		Dynamic setRotation_Qtrn_dyn();

		virtual Void setRotation_V3_Flt( ::org::gameplay3d::immutable::IVector3 axis,Float angle);
		Dynamic setRotation_V3_Flt_dyn();

		virtual Void setVelocity_V3( ::org::gameplay3d::immutable::IVector3 velocity);
		Dynamic setVelocity_V3_dyn();

		virtual Void setVelocity_FltX3( Float x,Float y,Float z);
		Dynamic setVelocity_FltX3_dyn();

		static Dynamic hx_PhysicsCharacter_getCurrentVelocity;
		static Dynamic &hx_PhysicsCharacter_getCurrentVelocity_dyn() { return hx_PhysicsCharacter_getCurrentVelocity;}
		static Dynamic hx_PhysicsCharacter_getMaxSlopeAngle;
		static Dynamic &hx_PhysicsCharacter_getMaxSlopeAngle_dyn() { return hx_PhysicsCharacter_getMaxSlopeAngle;}
		static Dynamic hx_PhysicsCharacter_getMaxStepHeight;
		static Dynamic &hx_PhysicsCharacter_getMaxStepHeight_dyn() { return hx_PhysicsCharacter_getMaxStepHeight;}
		static Dynamic hx_PhysicsCharacter_getType;
		static Dynamic &hx_PhysicsCharacter_getType_dyn() { return hx_PhysicsCharacter_getType;}
		static Dynamic hx_PhysicsCharacter_isPhysicsEnabled;
		static Dynamic &hx_PhysicsCharacter_isPhysicsEnabled_dyn() { return hx_PhysicsCharacter_isPhysicsEnabled;}
		static Dynamic hx_PhysicsCharacter_jump;
		static Dynamic &hx_PhysicsCharacter_jump_dyn() { return hx_PhysicsCharacter_jump;}
		static Dynamic hx_PhysicsCharacter_rotate_Qtrn;
		static Dynamic &hx_PhysicsCharacter_rotate_Qtrn_dyn() { return hx_PhysicsCharacter_rotate_Qtrn;}
		static Dynamic hx_PhysicsCharacter_rotate_V3_Flt;
		static Dynamic &hx_PhysicsCharacter_rotate_V3_Flt_dyn() { return hx_PhysicsCharacter_rotate_V3_Flt;}
		static Dynamic hx_PhysicsCharacter_setForwardVelocity;
		static Dynamic &hx_PhysicsCharacter_setForwardVelocity_dyn() { return hx_PhysicsCharacter_setForwardVelocity;}
		static Dynamic hx_PhysicsCharacter_setMaxSlopeAngle;
		static Dynamic &hx_PhysicsCharacter_setMaxSlopeAngle_dyn() { return hx_PhysicsCharacter_setMaxSlopeAngle;}
		static Dynamic hx_PhysicsCharacter_setMaxStepHeight;
		static Dynamic &hx_PhysicsCharacter_setMaxStepHeight_dyn() { return hx_PhysicsCharacter_setMaxStepHeight;}
		static Dynamic hx_PhysicsCharacter_setPhysicsEnabled;
		static Dynamic &hx_PhysicsCharacter_setPhysicsEnabled_dyn() { return hx_PhysicsCharacter_setPhysicsEnabled;}
		static Dynamic hx_PhysicsCharacter_setRightVelocity;
		static Dynamic &hx_PhysicsCharacter_setRightVelocity_dyn() { return hx_PhysicsCharacter_setRightVelocity;}
		static Dynamic hx_PhysicsCharacter_setRotation_Qtrn;
		static Dynamic &hx_PhysicsCharacter_setRotation_Qtrn_dyn() { return hx_PhysicsCharacter_setRotation_Qtrn;}
		static Dynamic hx_PhysicsCharacter_setRotation_V3_Flt;
		static Dynamic &hx_PhysicsCharacter_setRotation_V3_Flt_dyn() { return hx_PhysicsCharacter_setRotation_V3_Flt;}
		static Dynamic hx_PhysicsCharacter_setVelocity_V3;
		static Dynamic &hx_PhysicsCharacter_setVelocity_V3_dyn() { return hx_PhysicsCharacter_setVelocity_V3;}
		static Dynamic hx_PhysicsCharacter_setVelocity_FltX3;
		static Dynamic &hx_PhysicsCharacter_setVelocity_FltX3_dyn() { return hx_PhysicsCharacter_setVelocity_FltX3;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_PhysicsCharacter */ 
