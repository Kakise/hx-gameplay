#ifndef INCLUDED_org_gameplay3d_PhysicsVehicle
#define INCLUDED_org_gameplay3d_PhysicsVehicle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/PhysicsCollisionObject.h>
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsCollisionObject)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsRigidBody)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsVehicle)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsVehicleWheel)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  PhysicsVehicle_obj : public ::org::gameplay3d::PhysicsCollisionObject_obj{
	public:
		typedef ::org::gameplay3d::PhysicsCollisionObject_obj super;
		typedef PhysicsVehicle_obj OBJ_;
		PhysicsVehicle_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PhysicsVehicle_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PhysicsVehicle_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("PhysicsVehicle"); }

		virtual Void addWheel( ::org::gameplay3d::PhysicsVehicleWheel wheel);
		Dynamic addWheel_dyn();

		virtual Float getBoostGain( );
		Dynamic getBoostGain_dyn();

		virtual Float getBoostSpeed( );
		Dynamic getBoostSpeed_dyn();

		virtual Float getBrakedownFull( );
		Dynamic getBrakedownFull_dyn();

		virtual Float getBrakedownStart( );
		Dynamic getBrakedownStart_dyn();

		virtual Float getBrakingForce( );
		Dynamic getBrakingForce_dyn();

		virtual Float getDownForce( );
		Dynamic getDownForce_dyn();

		virtual Float getDrivedownFull( );
		Dynamic getDrivedownFull_dyn();

		virtual Float getDrivedownStart( );
		Dynamic getDrivedownStart_dyn();

		virtual Float getDrivingForce( );
		Dynamic getDrivingForce_dyn();

		virtual int getNumWheels( );
		Dynamic getNumWheels_dyn();

		virtual ::org::gameplay3d::PhysicsRigidBody getRigidBody( );
		Dynamic getRigidBody_dyn();

		virtual Float getSpeedKph( );
		Dynamic getSpeedKph_dyn();

		virtual Float getSpeedSmoothKph( );
		Dynamic getSpeedSmoothKph_dyn();

		virtual Float getSteerdownGain( );
		Dynamic getSteerdownGain_dyn();

		virtual Float getSteerdownSpeed( );
		Dynamic getSteerdownSpeed_dyn();

		virtual Float getSteeringGain( );
		Dynamic getSteeringGain_dyn();

		virtual int getType( );

		virtual ::org::gameplay3d::PhysicsVehicleWheel getWheel( int i);
		Dynamic getWheel_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void setBoost( Float boostSpeed,Float boostGain);
		Dynamic setBoost_dyn();

		virtual Void setBrakedown( Float brakedownStart,Float brakedownFull);
		Dynamic setBrakedown_dyn();

		virtual Void setBrakingForce( Float brakingForce);
		Dynamic setBrakingForce_dyn();

		virtual Void setDownforce( Float downforce);
		Dynamic setDownforce_dyn();

		virtual Void setDrivedown( Float drivedownStart,Float drivedownFull);
		Dynamic setDrivedown_dyn();

		virtual Void setDrivingForce( Float drivingForce);
		Dynamic setDrivingForce_dyn();

		virtual Void setEnabled( bool enable);

		virtual Void setSteerdown( Float steerdownSpeed,Float steerdownGain);
		Dynamic setSteerdown_dyn();

		virtual Void setSteeringGain( Float steeringGain);
		Dynamic setSteeringGain_dyn();

		virtual Void update( Float elapsedTime,Float steering,Float braking,Float driving);
		Dynamic update_dyn();

		static Dynamic hx_PhysicsVehicle_addWheel;
		static Dynamic &hx_PhysicsVehicle_addWheel_dyn() { return hx_PhysicsVehicle_addWheel;}
		static Dynamic hx_PhysicsVehicle_getBoostGain;
		static Dynamic &hx_PhysicsVehicle_getBoostGain_dyn() { return hx_PhysicsVehicle_getBoostGain;}
		static Dynamic hx_PhysicsVehicle_getBoostSpeed;
		static Dynamic &hx_PhysicsVehicle_getBoostSpeed_dyn() { return hx_PhysicsVehicle_getBoostSpeed;}
		static Dynamic hx_PhysicsVehicle_getBrakedownFull;
		static Dynamic &hx_PhysicsVehicle_getBrakedownFull_dyn() { return hx_PhysicsVehicle_getBrakedownFull;}
		static Dynamic hx_PhysicsVehicle_getBrakedownStart;
		static Dynamic &hx_PhysicsVehicle_getBrakedownStart_dyn() { return hx_PhysicsVehicle_getBrakedownStart;}
		static Dynamic hx_PhysicsVehicle_getBrakingForce;
		static Dynamic &hx_PhysicsVehicle_getBrakingForce_dyn() { return hx_PhysicsVehicle_getBrakingForce;}
		static Dynamic hx_PhysicsVehicle_getDownForce;
		static Dynamic &hx_PhysicsVehicle_getDownForce_dyn() { return hx_PhysicsVehicle_getDownForce;}
		static Dynamic hx_PhysicsVehicle_getDrivedownFull;
		static Dynamic &hx_PhysicsVehicle_getDrivedownFull_dyn() { return hx_PhysicsVehicle_getDrivedownFull;}
		static Dynamic hx_PhysicsVehicle_getDrivedownStart;
		static Dynamic &hx_PhysicsVehicle_getDrivedownStart_dyn() { return hx_PhysicsVehicle_getDrivedownStart;}
		static Dynamic hx_PhysicsVehicle_getDrivingForce;
		static Dynamic &hx_PhysicsVehicle_getDrivingForce_dyn() { return hx_PhysicsVehicle_getDrivingForce;}
		static Dynamic hx_PhysicsVehicle_getNumWheels;
		static Dynamic &hx_PhysicsVehicle_getNumWheels_dyn() { return hx_PhysicsVehicle_getNumWheels;}
		static Dynamic hx_PhysicsVehicle_getRigidBody;
		static Dynamic &hx_PhysicsVehicle_getRigidBody_dyn() { return hx_PhysicsVehicle_getRigidBody;}
		static Dynamic hx_PhysicsVehicle_getSpeedKph;
		static Dynamic &hx_PhysicsVehicle_getSpeedKph_dyn() { return hx_PhysicsVehicle_getSpeedKph;}
		static Dynamic hx_PhysicsVehicle_getSpeedSmoothKph;
		static Dynamic &hx_PhysicsVehicle_getSpeedSmoothKph_dyn() { return hx_PhysicsVehicle_getSpeedSmoothKph;}
		static Dynamic hx_PhysicsVehicle_getSteerdownGain;
		static Dynamic &hx_PhysicsVehicle_getSteerdownGain_dyn() { return hx_PhysicsVehicle_getSteerdownGain;}
		static Dynamic hx_PhysicsVehicle_getSteerdownSpeed;
		static Dynamic &hx_PhysicsVehicle_getSteerdownSpeed_dyn() { return hx_PhysicsVehicle_getSteerdownSpeed;}
		static Dynamic hx_PhysicsVehicle_getSteeringGain;
		static Dynamic &hx_PhysicsVehicle_getSteeringGain_dyn() { return hx_PhysicsVehicle_getSteeringGain;}
		static Dynamic hx_PhysicsVehicle_getType;
		static Dynamic &hx_PhysicsVehicle_getType_dyn() { return hx_PhysicsVehicle_getType;}
		static Dynamic hx_PhysicsVehicle_getWheel;
		static Dynamic &hx_PhysicsVehicle_getWheel_dyn() { return hx_PhysicsVehicle_getWheel;}
		static Dynamic hx_PhysicsVehicle_reset;
		static Dynamic &hx_PhysicsVehicle_reset_dyn() { return hx_PhysicsVehicle_reset;}
		static Dynamic hx_PhysicsVehicle_setBoost;
		static Dynamic &hx_PhysicsVehicle_setBoost_dyn() { return hx_PhysicsVehicle_setBoost;}
		static Dynamic hx_PhysicsVehicle_setBrakedown;
		static Dynamic &hx_PhysicsVehicle_setBrakedown_dyn() { return hx_PhysicsVehicle_setBrakedown;}
		static Dynamic hx_PhysicsVehicle_setBrakingForce;
		static Dynamic &hx_PhysicsVehicle_setBrakingForce_dyn() { return hx_PhysicsVehicle_setBrakingForce;}
		static Dynamic hx_PhysicsVehicle_setDownforce;
		static Dynamic &hx_PhysicsVehicle_setDownforce_dyn() { return hx_PhysicsVehicle_setDownforce;}
		static Dynamic hx_PhysicsVehicle_setDrivedown;
		static Dynamic &hx_PhysicsVehicle_setDrivedown_dyn() { return hx_PhysicsVehicle_setDrivedown;}
		static Dynamic hx_PhysicsVehicle_setDrivingForce;
		static Dynamic &hx_PhysicsVehicle_setDrivingForce_dyn() { return hx_PhysicsVehicle_setDrivingForce;}
		static Dynamic hx_PhysicsVehicle_setEnabled;
		static Dynamic &hx_PhysicsVehicle_setEnabled_dyn() { return hx_PhysicsVehicle_setEnabled;}
		static Dynamic hx_PhysicsVehicle_setSteerdown;
		static Dynamic &hx_PhysicsVehicle_setSteerdown_dyn() { return hx_PhysicsVehicle_setSteerdown;}
		static Dynamic hx_PhysicsVehicle_setSteeringGain;
		static Dynamic &hx_PhysicsVehicle_setSteeringGain_dyn() { return hx_PhysicsVehicle_setSteeringGain;}
		static Dynamic hx_PhysicsVehicle_update;
		static Dynamic &hx_PhysicsVehicle_update_dyn() { return hx_PhysicsVehicle_update;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_PhysicsVehicle */ 
