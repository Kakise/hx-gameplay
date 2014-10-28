#ifndef INCLUDED_org_gameplay3d_PhysicsVehicleWheel
#define INCLUDED_org_gameplay3d_PhysicsVehicleWheel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/PhysicsCollisionObject.h>
HX_DECLARE_CLASS2(org,gameplay3d,AnimationTarget)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Node)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsCollisionObject)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsVehicleWheel)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS2(org,gameplay3d,ScriptTarget)
HX_DECLARE_CLASS2(org,gameplay3d,Transform)
HX_DECLARE_CLASS2(org,gameplay3d,Vector3)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector3)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,AnimationTarget_ScriptTarget)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  PhysicsVehicleWheel_obj : public ::org::gameplay3d::PhysicsCollisionObject_obj{
	public:
		typedef ::org::gameplay3d::PhysicsCollisionObject_obj super;
		typedef PhysicsVehicleWheel_obj OBJ_;
		PhysicsVehicleWheel_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PhysicsVehicleWheel_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PhysicsVehicleWheel_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("PhysicsVehicleWheel"); }

		virtual Float getFrictionBreakout( );
		Dynamic getFrictionBreakout_dyn();

		virtual Float getRollInfluence( );
		Dynamic getRollInfluence_dyn();

		virtual Void getStrutConnectionOffset( ::org::gameplay3d::Vector3 strutConnectionOffset);
		Dynamic getStrutConnectionOffset_dyn();

		virtual Float getStrutDampingCompression( );
		Dynamic getStrutDampingCompression_dyn();

		virtual Float getStrutDampingRelaxation( );
		Dynamic getStrutDampingRelaxation_dyn();

		virtual Float getStrutForceMax( );
		Dynamic getStrutForceMax_dyn();

		virtual Float getStrutRestLength( );
		Dynamic getStrutRestLength_dyn();

		virtual Float getStrutStiffness( );
		Dynamic getStrutStiffness_dyn();

		virtual Float getStrutTravelMax( );
		Dynamic getStrutTravelMax_dyn();

		virtual int getType( );

		virtual Void getWheelAxle( ::org::gameplay3d::Vector3 wheelAxle);
		Dynamic getWheelAxle_dyn();

		virtual Void getWheelDirection( ::org::gameplay3d::Vector3 wheelDirection);
		Dynamic getWheelDirection_dyn();

		virtual Float getWheelRadius( );
		Dynamic getWheelRadius_dyn();

		virtual bool isSteerable( );
		Dynamic isSteerable_dyn();

		virtual Void setEnabled( bool enable);

		virtual Void setFrictionBreakout( Float frictionBreakout);
		Dynamic setFrictionBreakout_dyn();

		virtual Void setRollInfluence( Float rollInfluence);
		Dynamic setRollInfluence_dyn();

		virtual Void setSteerable( bool steerable);
		Dynamic setSteerable_dyn();

		virtual Void setStrutConnectionOffset( ::org::gameplay3d::immutable::IVector3 strutConnectionOffset);
		Dynamic setStrutConnectionOffset_dyn();

		virtual Void setStrutDampingCompression( Float strutDampingCompression);
		Dynamic setStrutDampingCompression_dyn();

		virtual Void setStrutDampingRelaxation( Float strutDampingRelaxation);
		Dynamic setStrutDampingRelaxation_dyn();

		virtual Void setStrutForceMax( Float strutForceMax);
		Dynamic setStrutForceMax_dyn();

		virtual Void setStrutRestLength( Float strutRestLength);
		Dynamic setStrutRestLength_dyn();

		virtual Void setStrutStiffness( Float strutStiffness);
		Dynamic setStrutStiffness_dyn();

		virtual Void setStrutTravelMax( Float strutTravelMax);
		Dynamic setStrutTravelMax_dyn();

		virtual Void setWheelAxle( ::org::gameplay3d::immutable::IVector3 wheelAxle);
		Dynamic setWheelAxle_dyn();

		virtual Void setWheelDirection( ::org::gameplay3d::immutable::IVector3 wheelDirection);
		Dynamic setWheelDirection_dyn();

		virtual Void setWheelRadius( Float wheelRadius);
		Dynamic setWheelRadius_dyn();

		virtual Void transform( ::org::gameplay3d::Node node);
		Dynamic transform_dyn();

		static Dynamic hx_PhysicsVehicleWheel_getFrictionBreakout;
		static Dynamic &hx_PhysicsVehicleWheel_getFrictionBreakout_dyn() { return hx_PhysicsVehicleWheel_getFrictionBreakout;}
		static Dynamic hx_PhysicsVehicleWheel_getRollInfluence;
		static Dynamic &hx_PhysicsVehicleWheel_getRollInfluence_dyn() { return hx_PhysicsVehicleWheel_getRollInfluence;}
		static Dynamic hx_PhysicsVehicleWheel_getStrutConnectionOffset;
		static Dynamic &hx_PhysicsVehicleWheel_getStrutConnectionOffset_dyn() { return hx_PhysicsVehicleWheel_getStrutConnectionOffset;}
		static Dynamic hx_PhysicsVehicleWheel_getStrutDampingCompression;
		static Dynamic &hx_PhysicsVehicleWheel_getStrutDampingCompression_dyn() { return hx_PhysicsVehicleWheel_getStrutDampingCompression;}
		static Dynamic hx_PhysicsVehicleWheel_getStrutDampingRelaxation;
		static Dynamic &hx_PhysicsVehicleWheel_getStrutDampingRelaxation_dyn() { return hx_PhysicsVehicleWheel_getStrutDampingRelaxation;}
		static Dynamic hx_PhysicsVehicleWheel_getStrutForceMax;
		static Dynamic &hx_PhysicsVehicleWheel_getStrutForceMax_dyn() { return hx_PhysicsVehicleWheel_getStrutForceMax;}
		static Dynamic hx_PhysicsVehicleWheel_getStrutRestLength;
		static Dynamic &hx_PhysicsVehicleWheel_getStrutRestLength_dyn() { return hx_PhysicsVehicleWheel_getStrutRestLength;}
		static Dynamic hx_PhysicsVehicleWheel_getStrutStiffness;
		static Dynamic &hx_PhysicsVehicleWheel_getStrutStiffness_dyn() { return hx_PhysicsVehicleWheel_getStrutStiffness;}
		static Dynamic hx_PhysicsVehicleWheel_getStrutTravelMax;
		static Dynamic &hx_PhysicsVehicleWheel_getStrutTravelMax_dyn() { return hx_PhysicsVehicleWheel_getStrutTravelMax;}
		static Dynamic hx_PhysicsVehicleWheel_getType;
		static Dynamic &hx_PhysicsVehicleWheel_getType_dyn() { return hx_PhysicsVehicleWheel_getType;}
		static Dynamic hx_PhysicsVehicleWheel_getWheelAxle;
		static Dynamic &hx_PhysicsVehicleWheel_getWheelAxle_dyn() { return hx_PhysicsVehicleWheel_getWheelAxle;}
		static Dynamic hx_PhysicsVehicleWheel_getWheelDirection;
		static Dynamic &hx_PhysicsVehicleWheel_getWheelDirection_dyn() { return hx_PhysicsVehicleWheel_getWheelDirection;}
		static Dynamic hx_PhysicsVehicleWheel_getWheelRadius;
		static Dynamic &hx_PhysicsVehicleWheel_getWheelRadius_dyn() { return hx_PhysicsVehicleWheel_getWheelRadius;}
		static Dynamic hx_PhysicsVehicleWheel_isSteerable;
		static Dynamic &hx_PhysicsVehicleWheel_isSteerable_dyn() { return hx_PhysicsVehicleWheel_isSteerable;}
		static Dynamic hx_PhysicsVehicleWheel_setEnabled;
		static Dynamic &hx_PhysicsVehicleWheel_setEnabled_dyn() { return hx_PhysicsVehicleWheel_setEnabled;}
		static Dynamic hx_PhysicsVehicleWheel_setFrictionBreakout;
		static Dynamic &hx_PhysicsVehicleWheel_setFrictionBreakout_dyn() { return hx_PhysicsVehicleWheel_setFrictionBreakout;}
		static Dynamic hx_PhysicsVehicleWheel_setRollInfluence;
		static Dynamic &hx_PhysicsVehicleWheel_setRollInfluence_dyn() { return hx_PhysicsVehicleWheel_setRollInfluence;}
		static Dynamic hx_PhysicsVehicleWheel_setSteerable;
		static Dynamic &hx_PhysicsVehicleWheel_setSteerable_dyn() { return hx_PhysicsVehicleWheel_setSteerable;}
		static Dynamic hx_PhysicsVehicleWheel_setStrutConnectionOffset;
		static Dynamic &hx_PhysicsVehicleWheel_setStrutConnectionOffset_dyn() { return hx_PhysicsVehicleWheel_setStrutConnectionOffset;}
		static Dynamic hx_PhysicsVehicleWheel_setStrutDampingCompression;
		static Dynamic &hx_PhysicsVehicleWheel_setStrutDampingCompression_dyn() { return hx_PhysicsVehicleWheel_setStrutDampingCompression;}
		static Dynamic hx_PhysicsVehicleWheel_setStrutDampingRelaxation;
		static Dynamic &hx_PhysicsVehicleWheel_setStrutDampingRelaxation_dyn() { return hx_PhysicsVehicleWheel_setStrutDampingRelaxation;}
		static Dynamic hx_PhysicsVehicleWheel_setStrutForceMax;
		static Dynamic &hx_PhysicsVehicleWheel_setStrutForceMax_dyn() { return hx_PhysicsVehicleWheel_setStrutForceMax;}
		static Dynamic hx_PhysicsVehicleWheel_setStrutRestLength;
		static Dynamic &hx_PhysicsVehicleWheel_setStrutRestLength_dyn() { return hx_PhysicsVehicleWheel_setStrutRestLength;}
		static Dynamic hx_PhysicsVehicleWheel_setStrutStiffness;
		static Dynamic &hx_PhysicsVehicleWheel_setStrutStiffness_dyn() { return hx_PhysicsVehicleWheel_setStrutStiffness;}
		static Dynamic hx_PhysicsVehicleWheel_setStrutTravelMax;
		static Dynamic &hx_PhysicsVehicleWheel_setStrutTravelMax_dyn() { return hx_PhysicsVehicleWheel_setStrutTravelMax;}
		static Dynamic hx_PhysicsVehicleWheel_setWheelAxle;
		static Dynamic &hx_PhysicsVehicleWheel_setWheelAxle_dyn() { return hx_PhysicsVehicleWheel_setWheelAxle;}
		static Dynamic hx_PhysicsVehicleWheel_setWheelDirection;
		static Dynamic &hx_PhysicsVehicleWheel_setWheelDirection_dyn() { return hx_PhysicsVehicleWheel_setWheelDirection;}
		static Dynamic hx_PhysicsVehicleWheel_setWheelRadius;
		static Dynamic &hx_PhysicsVehicleWheel_setWheelRadius_dyn() { return hx_PhysicsVehicleWheel_setWheelRadius;}
		static Dynamic hx_PhysicsVehicleWheel_transform;
		static Dynamic &hx_PhysicsVehicleWheel_transform_dyn() { return hx_PhysicsVehicleWheel_transform;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_PhysicsVehicleWheel */ 
