#ifndef INCLUDED_org_gameplay3d_PhysicsHingeConstraint
#define INCLUDED_org_gameplay3d_PhysicsHingeConstraint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/PhysicsConstraint.h>
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsConstraint)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsHingeConstraint)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  PhysicsHingeConstraint_obj : public ::org::gameplay3d::PhysicsConstraint_obj{
	public:
		typedef ::org::gameplay3d::PhysicsConstraint_obj super;
		typedef PhysicsHingeConstraint_obj OBJ_;
		PhysicsHingeConstraint_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PhysicsHingeConstraint_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PhysicsHingeConstraint_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("PhysicsHingeConstraint"); }

		virtual Void setLimits( Float minAngle,Float maxAngle,hx::Null< Float >  bounciness);
		Dynamic setLimits_dyn();

		static Dynamic hx_PhysicsHingeConstraint_setLimits;
		static Dynamic &hx_PhysicsHingeConstraint_setLimits_dyn() { return hx_PhysicsHingeConstraint_setLimits;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_PhysicsHingeConstraint */ 
