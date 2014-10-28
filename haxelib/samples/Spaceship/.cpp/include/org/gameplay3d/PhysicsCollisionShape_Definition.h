#ifndef INCLUDED_org_gameplay3d_PhysicsCollisionShape_Definition
#define INCLUDED_org_gameplay3d_PhysicsCollisionShape_Definition

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsCollisionShape_Definition)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  PhysicsCollisionShape_Definition_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef PhysicsCollisionShape_Definition_obj OBJ_;
		PhysicsCollisionShape_Definition_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PhysicsCollisionShape_Definition_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PhysicsCollisionShape_Definition_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("PhysicsCollisionShape_Definition"); }

		virtual bool isEmpty( );
		Dynamic isEmpty_dyn();

		static ::org::gameplay3d::PhysicsCollisionShape_Definition make( );
		static Dynamic make_dyn();

		static ::org::gameplay3d::PhysicsCollisionShape_Definition make_ColShpDef( ::org::gameplay3d::PhysicsCollisionShape_Definition definition);
		static Dynamic make_ColShpDef_dyn();

		static Dynamic constructNativeObject( );
		static Dynamic constructNativeObject_dyn();

		static Dynamic constructNativeObject_ColShpDef( ::org::gameplay3d::PhysicsCollisionShape_Definition definition);
		static Dynamic constructNativeObject_ColShpDef_dyn();

		static Dynamic hx_PhysicsCollisionShape_Definition_Construct;
		static Dynamic &hx_PhysicsCollisionShape_Definition_Construct_dyn() { return hx_PhysicsCollisionShape_Definition_Construct;}
		static Dynamic hx_PhysicsCollisionShape_Definition_Construct_ColShpDef;
		static Dynamic &hx_PhysicsCollisionShape_Definition_Construct_ColShpDef_dyn() { return hx_PhysicsCollisionShape_Definition_Construct_ColShpDef;}
		static Dynamic hx_PhysicsCollisionShape_Definition_isEmpty;
		static Dynamic &hx_PhysicsCollisionShape_Definition_isEmpty_dyn() { return hx_PhysicsCollisionShape_Definition_isEmpty;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_PhysicsCollisionShape_Definition */ 
