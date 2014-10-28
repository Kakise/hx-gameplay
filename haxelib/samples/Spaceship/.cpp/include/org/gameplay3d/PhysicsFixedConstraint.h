#ifndef INCLUDED_org_gameplay3d_PhysicsFixedConstraint
#define INCLUDED_org_gameplay3d_PhysicsFixedConstraint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/PhysicsGenericConstraint.h>
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsConstraint)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsFixedConstraint)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsGenericConstraint)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  PhysicsFixedConstraint_obj : public ::org::gameplay3d::PhysicsGenericConstraint_obj{
	public:
		typedef ::org::gameplay3d::PhysicsGenericConstraint_obj super;
		typedef PhysicsFixedConstraint_obj OBJ_;
		PhysicsFixedConstraint_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PhysicsFixedConstraint_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PhysicsFixedConstraint_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("PhysicsFixedConstraint"); }

};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_PhysicsFixedConstraint */ 
