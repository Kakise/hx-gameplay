#ifndef INCLUDED_org_gameplay3d_PhysicsGenericConstraint
#define INCLUDED_org_gameplay3d_PhysicsGenericConstraint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/PhysicsConstraint.h>
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsConstraint)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsGenericConstraint)
HX_DECLARE_CLASS2(org,gameplay3d,Quaternion)
HX_DECLARE_CLASS2(org,gameplay3d,Vector3)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IQuaternion)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector3)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  PhysicsGenericConstraint_obj : public ::org::gameplay3d::PhysicsConstraint_obj{
	public:
		typedef ::org::gameplay3d::PhysicsConstraint_obj super;
		typedef PhysicsGenericConstraint_obj OBJ_;
		PhysicsGenericConstraint_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PhysicsGenericConstraint_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PhysicsGenericConstraint_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PhysicsGenericConstraint"); }

		::org::gameplay3d::Vector3 _translationOffsetA;
		::org::gameplay3d::Vector3 _translationOffsetB;
		::org::gameplay3d::Quaternion _rotationOffsetA;
		::org::gameplay3d::Quaternion _rotationOffsetB;
		virtual ::org::gameplay3d::immutable::IQuaternion getRotationOffsetA( );
		Dynamic getRotationOffsetA_dyn();

		virtual ::org::gameplay3d::immutable::IQuaternion getRotationOffsetB( );
		Dynamic getRotationOffsetB_dyn();

		virtual ::org::gameplay3d::immutable::IVector3 getTranslationOffsetA( );
		Dynamic getTranslationOffsetA_dyn();

		virtual ::org::gameplay3d::immutable::IVector3 getTranslationOffsetB( );
		Dynamic getTranslationOffsetB_dyn();

		virtual Void setAngularLowerLimit( ::org::gameplay3d::immutable::IVector3 limits);
		Dynamic setAngularLowerLimit_dyn();

		virtual Void setAngularUpperLimit( ::org::gameplay3d::immutable::IVector3 limits);
		Dynamic setAngularUpperLimit_dyn();

		virtual Void setLinearLowerLimit( ::org::gameplay3d::immutable::IVector3 limits);
		Dynamic setLinearLowerLimit_dyn();

		virtual Void setLinearUpperLimit( ::org::gameplay3d::immutable::IVector3 limits);
		Dynamic setLinearUpperLimit_dyn();

		virtual Void setRotationOffsetA( ::org::gameplay3d::immutable::IQuaternion rotationOffset);
		Dynamic setRotationOffsetA_dyn();

		virtual Void setRotationOffsetB( ::org::gameplay3d::immutable::IQuaternion rotationOffset);
		Dynamic setRotationOffsetB_dyn();

		virtual Void setTranslationOffsetA( ::org::gameplay3d::immutable::IVector3 translationOffset);
		Dynamic setTranslationOffsetA_dyn();

		virtual Void setTranslationOffsetB( ::org::gameplay3d::immutable::IVector3 translationOffset);
		Dynamic setTranslationOffsetB_dyn();

		static Dynamic hx_PhysicsGenericConstraint_getRotationOffsetA;
		static Dynamic &hx_PhysicsGenericConstraint_getRotationOffsetA_dyn() { return hx_PhysicsGenericConstraint_getRotationOffsetA;}
		static Dynamic hx_PhysicsGenericConstraint_getRotationOffsetB;
		static Dynamic &hx_PhysicsGenericConstraint_getRotationOffsetB_dyn() { return hx_PhysicsGenericConstraint_getRotationOffsetB;}
		static Dynamic hx_PhysicsGenericConstraint_getTranslationOffsetA;
		static Dynamic &hx_PhysicsGenericConstraint_getTranslationOffsetA_dyn() { return hx_PhysicsGenericConstraint_getTranslationOffsetA;}
		static Dynamic hx_PhysicsGenericConstraint_getTranslationOffsetB;
		static Dynamic &hx_PhysicsGenericConstraint_getTranslationOffsetB_dyn() { return hx_PhysicsGenericConstraint_getTranslationOffsetB;}
		static Dynamic hx_PhysicsGenericConstraint_setAngularLowerLimit;
		static Dynamic &hx_PhysicsGenericConstraint_setAngularLowerLimit_dyn() { return hx_PhysicsGenericConstraint_setAngularLowerLimit;}
		static Dynamic hx_PhysicsGenericConstraint_setAngularUpperLimit;
		static Dynamic &hx_PhysicsGenericConstraint_setAngularUpperLimit_dyn() { return hx_PhysicsGenericConstraint_setAngularUpperLimit;}
		static Dynamic hx_PhysicsGenericConstraint_setLinearLowerLimit;
		static Dynamic &hx_PhysicsGenericConstraint_setLinearLowerLimit_dyn() { return hx_PhysicsGenericConstraint_setLinearLowerLimit;}
		static Dynamic hx_PhysicsGenericConstraint_setLinearUpperLimit;
		static Dynamic &hx_PhysicsGenericConstraint_setLinearUpperLimit_dyn() { return hx_PhysicsGenericConstraint_setLinearUpperLimit;}
		static Dynamic hx_PhysicsGenericConstraint_setRotationOffsetA;
		static Dynamic &hx_PhysicsGenericConstraint_setRotationOffsetA_dyn() { return hx_PhysicsGenericConstraint_setRotationOffsetA;}
		static Dynamic hx_PhysicsGenericConstraint_setRotationOffsetB;
		static Dynamic &hx_PhysicsGenericConstraint_setRotationOffsetB_dyn() { return hx_PhysicsGenericConstraint_setRotationOffsetB;}
		static Dynamic hx_PhysicsGenericConstraint_setTranslationOffsetA;
		static Dynamic &hx_PhysicsGenericConstraint_setTranslationOffsetA_dyn() { return hx_PhysicsGenericConstraint_setTranslationOffsetA;}
		static Dynamic hx_PhysicsGenericConstraint_setTranslationOffsetB;
		static Dynamic &hx_PhysicsGenericConstraint_setTranslationOffsetB_dyn() { return hx_PhysicsGenericConstraint_setTranslationOffsetB;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_PhysicsGenericConstraint */ 
