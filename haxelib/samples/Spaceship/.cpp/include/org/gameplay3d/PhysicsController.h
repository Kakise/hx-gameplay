#ifndef INCLUDED_org_gameplay3d_PhysicsController
#define INCLUDED_org_gameplay3d_PhysicsController

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/intern/impl/ScriptTargetImpl.h>
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsCollisionObject)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsConstraint)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsController)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsController_HitFilter)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsController_HitResult)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsController_Listener)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsFixedConstraint)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsGenericConstraint)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsHingeConstraint)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsRigidBody)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsSocketConstraint)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsSpringConstraint)
HX_DECLARE_CLASS2(org,gameplay3d,Ray)
HX_DECLARE_CLASS2(org,gameplay3d,ScriptTarget)
HX_DECLARE_CLASS2(org,gameplay3d,Vector3)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IMatrix)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IQuaternion)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector3)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,ListenerWrapper)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,ScriptTargetImpl)
HX_DECLARE_CLASS3(org,gameplay3d,wrapper,PhysicsController_HitFilterWrapper)
HX_DECLARE_CLASS3(org,gameplay3d,wrapper,PhysicsController_ListenerWrapper)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  PhysicsController_obj : public ::org::gameplay3d::intern::impl::ScriptTargetImpl_obj{
	public:
		typedef ::org::gameplay3d::intern::impl::ScriptTargetImpl_obj super;
		typedef PhysicsController_obj OBJ_;
		PhysicsController_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PhysicsController_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PhysicsController_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PhysicsController"); }

		::org::gameplay3d::Vector3 _gravity;
		virtual Void addStatusListener( ::org::gameplay3d::wrapper::PhysicsController_ListenerWrapper listener);
		Dynamic addStatusListener_dyn();

		virtual ::org::gameplay3d::PhysicsFixedConstraint createFixedConstraint( ::org::gameplay3d::PhysicsRigidBody a,::org::gameplay3d::PhysicsRigidBody b);
		Dynamic createFixedConstraint_dyn();

		virtual ::org::gameplay3d::PhysicsGenericConstraint createGenericConstraint_RgdBodyX2( ::org::gameplay3d::PhysicsRigidBody a,::org::gameplay3d::PhysicsRigidBody b);
		Dynamic createGenericConstraint_RgdBodyX2_dyn();

		virtual ::org::gameplay3d::PhysicsGenericConstraint createGenericConstraint_RgdBody_Qtrn_V3_RgdBody_Qtrn_V3( ::org::gameplay3d::PhysicsRigidBody a,::org::gameplay3d::immutable::IQuaternion rotationOffsetA,::org::gameplay3d::immutable::IVector3 translationOffsetA,::org::gameplay3d::PhysicsRigidBody b,::org::gameplay3d::immutable::IQuaternion rotationOffsetB,::org::gameplay3d::immutable::IVector3 translationOffsetB);
		Dynamic createGenericConstraint_RgdBody_Qtrn_V3_RgdBody_Qtrn_V3_dyn();

		virtual ::org::gameplay3d::PhysicsHingeConstraint createHingeConstraint( ::org::gameplay3d::PhysicsRigidBody a,::org::gameplay3d::immutable::IQuaternion rotationOffsetA,::org::gameplay3d::immutable::IVector3 translationOffsetA,::org::gameplay3d::PhysicsRigidBody b,::org::gameplay3d::immutable::IQuaternion rotationOffsetB,::org::gameplay3d::immutable::IVector3 translationOffsetB);
		Dynamic createHingeConstraint_dyn();

		virtual ::org::gameplay3d::PhysicsSocketConstraint createSocketConstraintt_RgdBodyX2( ::org::gameplay3d::PhysicsRigidBody a,::org::gameplay3d::PhysicsRigidBody b);
		Dynamic createSocketConstraintt_RgdBodyX2_dyn();

		virtual ::org::gameplay3d::PhysicsSocketConstraint createSocketConstraint_RgdBody_Qtrn_V3_RgdBody_V3( ::org::gameplay3d::PhysicsRigidBody a,::org::gameplay3d::immutable::IVector3 translationOffsetA,::org::gameplay3d::PhysicsRigidBody b,::org::gameplay3d::immutable::IVector3 translationOffsetB);
		Dynamic createSocketConstraint_RgdBody_Qtrn_V3_RgdBody_V3_dyn();

		virtual ::org::gameplay3d::PhysicsSpringConstraint createSpringConstraintt_RgdBodyX2( ::org::gameplay3d::PhysicsRigidBody a,::org::gameplay3d::PhysicsRigidBody b);
		Dynamic createSpringConstraintt_RgdBodyX2_dyn();

		virtual ::org::gameplay3d::PhysicsSpringConstraint createSpringConstraint_RgdBody_Qtrn_V3_RgdBody_Qtrn_V3( ::org::gameplay3d::PhysicsRigidBody a,::org::gameplay3d::immutable::IQuaternion rotationOffsetA,::org::gameplay3d::immutable::IVector3 translationOffsetA,::org::gameplay3d::PhysicsRigidBody b,::org::gameplay3d::immutable::IQuaternion rotationOffsetB,::org::gameplay3d::immutable::IVector3 translationOffsetB);
		Dynamic createSpringConstraint_RgdBody_Qtrn_V3_RgdBody_Qtrn_V3_dyn();

		virtual Void drawDebug( ::org::gameplay3d::immutable::IMatrix viewProjection);
		Dynamic drawDebug_dyn();

		virtual ::org::gameplay3d::immutable::IVector3 getGravity( );
		Dynamic getGravity_dyn();

		virtual bool rayTest( ::org::gameplay3d::Ray ray,Float distance,::org::gameplay3d::PhysicsController_HitResult result,::org::gameplay3d::wrapper::PhysicsController_HitFilterWrapper filter);
		Dynamic rayTest_dyn();

		virtual Void removeStatusListener( ::org::gameplay3d::wrapper::PhysicsController_ListenerWrapper listener);
		Dynamic removeStatusListener_dyn();

		virtual Void setGravity( ::org::gameplay3d::immutable::IVector3 gravity);
		Dynamic setGravity_dyn();

		virtual bool sweepTest( ::org::gameplay3d::PhysicsCollisionObject object,::org::gameplay3d::immutable::IVector3 endPosition,::org::gameplay3d::PhysicsController_HitResult result,::org::gameplay3d::wrapper::PhysicsController_HitFilterWrapper filter);
		Dynamic sweepTest_dyn();

		static Dynamic hx_PhysicsController_addStatusListener;
		static Dynamic &hx_PhysicsController_addStatusListener_dyn() { return hx_PhysicsController_addStatusListener;}
		static Dynamic hx_PhysicsController_createFixedConstraint;
		static Dynamic &hx_PhysicsController_createFixedConstraint_dyn() { return hx_PhysicsController_createFixedConstraint;}
		static Dynamic hx_PhysicsController_createGenericConstraint_RgdBodyX2;
		static Dynamic &hx_PhysicsController_createGenericConstraint_RgdBodyX2_dyn() { return hx_PhysicsController_createGenericConstraint_RgdBodyX2;}
		static Dynamic hx_PhysicsController_createGenericConstraint_RgdBody_Qtrn_V3_RgdBody_Qtrn_V3;
		static Dynamic &hx_PhysicsController_createGenericConstraint_RgdBody_Qtrn_V3_RgdBody_Qtrn_V3_dyn() { return hx_PhysicsController_createGenericConstraint_RgdBody_Qtrn_V3_RgdBody_Qtrn_V3;}
		static Dynamic hx_PhysicsController_createHingeConstraint;
		static Dynamic &hx_PhysicsController_createHingeConstraint_dyn() { return hx_PhysicsController_createHingeConstraint;}
		static Dynamic hx_PhysicsController_createSocketConstraint_RgdBodyX2;
		static Dynamic &hx_PhysicsController_createSocketConstraint_RgdBodyX2_dyn() { return hx_PhysicsController_createSocketConstraint_RgdBodyX2;}
		static Dynamic hx_PhysicsController_createSocketConstraint_RgdBody_V3_RgdBody_V3;
		static Dynamic &hx_PhysicsController_createSocketConstraint_RgdBody_V3_RgdBody_V3_dyn() { return hx_PhysicsController_createSocketConstraint_RgdBody_V3_RgdBody_V3;}
		static Dynamic hx_PhysicsController_createSpringConstraint_RgdBodyX2;
		static Dynamic &hx_PhysicsController_createSpringConstraint_RgdBodyX2_dyn() { return hx_PhysicsController_createSpringConstraint_RgdBodyX2;}
		static Dynamic hx_PhysicsController_createSpringConstraint_RgdBody_Qtrn_V3_RgdBody_Qtrn_V3;
		static Dynamic &hx_PhysicsController_createSpringConstraint_RgdBody_Qtrn_V3_RgdBody_Qtrn_V3_dyn() { return hx_PhysicsController_createSpringConstraint_RgdBody_Qtrn_V3_RgdBody_Qtrn_V3;}
		static Dynamic hx_PhysicsController_drawDebug;
		static Dynamic &hx_PhysicsController_drawDebug_dyn() { return hx_PhysicsController_drawDebug;}
		static Dynamic hx_PhysicsController_getGravity;
		static Dynamic &hx_PhysicsController_getGravity_dyn() { return hx_PhysicsController_getGravity;}
		static Dynamic hx_PhysicsController_rayTest;
		static Dynamic &hx_PhysicsController_rayTest_dyn() { return hx_PhysicsController_rayTest;}
		static Dynamic hx_PhysicsController_removeStatusListener;
		static Dynamic &hx_PhysicsController_removeStatusListener_dyn() { return hx_PhysicsController_removeStatusListener;}
		static Dynamic hx_PhysicsController_setGravity;
		static Dynamic &hx_PhysicsController_setGravity_dyn() { return hx_PhysicsController_setGravity;}
		static Dynamic hx_PhysicsController_sweepTest;
		static Dynamic &hx_PhysicsController_sweepTest_dyn() { return hx_PhysicsController_sweepTest;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_PhysicsController */ 
