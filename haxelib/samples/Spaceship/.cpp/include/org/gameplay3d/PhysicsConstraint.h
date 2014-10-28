#ifndef INCLUDED_org_gameplay3d_PhysicsConstraint
#define INCLUDED_org_gameplay3d_PhysicsConstraint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
HX_DECLARE_CLASS2(org,gameplay3d,AnimationTarget)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Node)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsConstraint)
HX_DECLARE_CLASS2(org,gameplay3d,Quaternion)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS2(org,gameplay3d,ScriptTarget)
HX_DECLARE_CLASS2(org,gameplay3d,Transform)
HX_DECLARE_CLASS2(org,gameplay3d,Vector3)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IQuaternion)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector3)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,AnimationTarget_ScriptTarget)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  PhysicsConstraint_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef PhysicsConstraint_obj OBJ_;
		PhysicsConstraint_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PhysicsConstraint_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PhysicsConstraint_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("PhysicsConstraint"); }

		virtual Float getBreakingImpulse( );
		Dynamic getBreakingImpulse_dyn();

		virtual bool isEnabled( );
		Dynamic isEnabled_dyn();

		virtual Void setBreakingImpulse( Float impulse);
		Dynamic setBreakingImpulse_dyn();

		virtual Void setEnabled( bool enabled);
		Dynamic setEnabled_dyn();

		static ::org::gameplay3d::Quaternion _rotationOffset;
		static ::org::gameplay3d::Vector3 centerOfMassMidpoint( ::org::gameplay3d::Node a,::org::gameplay3d::Node b);
		static Dynamic centerOfMassMidpoint_dyn();

		static ::org::gameplay3d::Quaternion getRotationOffset( ::org::gameplay3d::Node node,::org::gameplay3d::immutable::IVector3 point);
		static Dynamic getRotationOffset_dyn();

		static ::org::gameplay3d::Vector3 getTranslationOffset( ::org::gameplay3d::Node node,::org::gameplay3d::immutable::IVector3 point);
		static Dynamic getTranslationOffset_dyn();

		static Dynamic hx_PhysicsConstraint_static_centerOfMassMidpoint;
		static Dynamic &hx_PhysicsConstraint_static_centerOfMassMidpoint_dyn() { return hx_PhysicsConstraint_static_centerOfMassMidpoint;}
		static Dynamic hx_PhysicsConstraint_getBreakingImpulse;
		static Dynamic &hx_PhysicsConstraint_getBreakingImpulse_dyn() { return hx_PhysicsConstraint_getBreakingImpulse;}
		static Dynamic hx_PhysicsConstraint_static_getRotationOffset;
		static Dynamic &hx_PhysicsConstraint_static_getRotationOffset_dyn() { return hx_PhysicsConstraint_static_getRotationOffset;}
		static Dynamic hx_PhysicsConstraint_static_getTranslationOffset;
		static Dynamic &hx_PhysicsConstraint_static_getTranslationOffset_dyn() { return hx_PhysicsConstraint_static_getTranslationOffset;}
		static Dynamic hx_PhysicsConstraint_isEnabled;
		static Dynamic &hx_PhysicsConstraint_isEnabled_dyn() { return hx_PhysicsConstraint_isEnabled;}
		static Dynamic hx_PhysicsConstraint_setBreakingImpulse;
		static Dynamic &hx_PhysicsConstraint_setBreakingImpulse_dyn() { return hx_PhysicsConstraint_setBreakingImpulse;}
		static Dynamic hx_PhysicsConstraint_setEnabled;
		static Dynamic &hx_PhysicsConstraint_setEnabled_dyn() { return hx_PhysicsConstraint_setEnabled;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_PhysicsConstraint */ 
