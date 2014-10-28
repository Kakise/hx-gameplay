#ifndef INCLUDED_org_gameplay3d_PhysicsSpringConstraint
#define INCLUDED_org_gameplay3d_PhysicsSpringConstraint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/PhysicsGenericConstraint.h>
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsConstraint)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsGenericConstraint)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsSpringConstraint)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  PhysicsSpringConstraint_obj : public ::org::gameplay3d::PhysicsGenericConstraint_obj{
	public:
		typedef ::org::gameplay3d::PhysicsGenericConstraint_obj super;
		typedef PhysicsSpringConstraint_obj OBJ_;
		PhysicsSpringConstraint_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PhysicsSpringConstraint_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PhysicsSpringConstraint_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("PhysicsSpringConstraint"); }

		virtual Void setAngularDampingX( Float damping);
		Dynamic setAngularDampingX_dyn();

		virtual Void setAngularDampingY( Float damping);
		Dynamic setAngularDampingY_dyn();

		virtual Void setAngularDampingZ( Float damping);
		Dynamic setAngularDampingZ_dyn();

		virtual Void setAngularStrengthX( Float strength);
		Dynamic setAngularStrengthX_dyn();

		virtual Void setAngularStrengthY( Float strength);
		Dynamic setAngularStrengthY_dyn();

		virtual Void setAngularStrengthZ( Float strength);
		Dynamic setAngularStrengthZ_dyn();

		virtual Void setLinearDampingX( Float damping);
		Dynamic setLinearDampingX_dyn();

		virtual Void setLinearDampingY( Float damping);
		Dynamic setLinearDampingY_dyn();

		virtual Void setLinearDampingZ( Float damping);
		Dynamic setLinearDampingZ_dyn();

		virtual Void setLinearStrengthX( Float strength);
		Dynamic setLinearStrengthX_dyn();

		virtual Void setLinearStrengthY( Float strength);
		Dynamic setLinearStrengthY_dyn();

		virtual Void setLinearStrengthZ( Float strength);
		Dynamic setLinearStrengthZ_dyn();

		static Dynamic hx_PhysicsSpringConstraint_setAngularDampingX;
		static Dynamic &hx_PhysicsSpringConstraint_setAngularDampingX_dyn() { return hx_PhysicsSpringConstraint_setAngularDampingX;}
		static Dynamic hx_PhysicsSpringConstraint_setAngularDampingY;
		static Dynamic &hx_PhysicsSpringConstraint_setAngularDampingY_dyn() { return hx_PhysicsSpringConstraint_setAngularDampingY;}
		static Dynamic hx_PhysicsSpringConstraint_setAngularDampingZ;
		static Dynamic &hx_PhysicsSpringConstraint_setAngularDampingZ_dyn() { return hx_PhysicsSpringConstraint_setAngularDampingZ;}
		static Dynamic hx_PhysicsSpringConstraint_setAngularStrengthX;
		static Dynamic &hx_PhysicsSpringConstraint_setAngularStrengthX_dyn() { return hx_PhysicsSpringConstraint_setAngularStrengthX;}
		static Dynamic hx_PhysicsSpringConstraint_setAngularStrengthY;
		static Dynamic &hx_PhysicsSpringConstraint_setAngularStrengthY_dyn() { return hx_PhysicsSpringConstraint_setAngularStrengthY;}
		static Dynamic hx_PhysicsSpringConstraint_setAngularStrengthZ;
		static Dynamic &hx_PhysicsSpringConstraint_setAngularStrengthZ_dyn() { return hx_PhysicsSpringConstraint_setAngularStrengthZ;}
		static Dynamic hx_PhysicsSpringConstraint_setLinearDampingX;
		static Dynamic &hx_PhysicsSpringConstraint_setLinearDampingX_dyn() { return hx_PhysicsSpringConstraint_setLinearDampingX;}
		static Dynamic hx_PhysicsSpringConstraint_setLinearDampingY;
		static Dynamic &hx_PhysicsSpringConstraint_setLinearDampingY_dyn() { return hx_PhysicsSpringConstraint_setLinearDampingY;}
		static Dynamic hx_PhysicsSpringConstraint_setLinearDampingZ;
		static Dynamic &hx_PhysicsSpringConstraint_setLinearDampingZ_dyn() { return hx_PhysicsSpringConstraint_setLinearDampingZ;}
		static Dynamic hx_PhysicsSpringConstraint_setLinearStrengthX;
		static Dynamic &hx_PhysicsSpringConstraint_setLinearStrengthX_dyn() { return hx_PhysicsSpringConstraint_setLinearStrengthX;}
		static Dynamic hx_PhysicsSpringConstraint_setLinearStrengthY;
		static Dynamic &hx_PhysicsSpringConstraint_setLinearStrengthY_dyn() { return hx_PhysicsSpringConstraint_setLinearStrengthY;}
		static Dynamic hx_PhysicsSpringConstraint_setLinearStrengthZ;
		static Dynamic &hx_PhysicsSpringConstraint_setLinearStrengthZ_dyn() { return hx_PhysicsSpringConstraint_setLinearStrengthZ;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_PhysicsSpringConstraint */ 
