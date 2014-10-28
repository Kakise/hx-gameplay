#ifndef INCLUDED_org_gameplay3d_PhysicsCollisionObject_CollisionPair
#define INCLUDED_org_gameplay3d_PhysicsCollisionObject_CollisionPair

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsCollisionObject)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsCollisionObject_CollisionPair)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  PhysicsCollisionObject_CollisionPair_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef PhysicsCollisionObject_CollisionPair_obj OBJ_;
		PhysicsCollisionObject_CollisionPair_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PhysicsCollisionObject_CollisionPair_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PhysicsCollisionObject_CollisionPair_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PhysicsCollisionObject_CollisionPair"); }

		::org::gameplay3d::PhysicsCollisionObject objectA;
		::org::gameplay3d::PhysicsCollisionObject objectB;
		virtual Dynamic impersonate( Dynamic nativeObject);

		static ::org::gameplay3d::PhysicsCollisionObject_CollisionPair make( ::org::gameplay3d::PhysicsCollisionObject objectA,::org::gameplay3d::PhysicsCollisionObject objectB);
		static Dynamic make_dyn();

		static Dynamic constructNativeObject( ::org::gameplay3d::PhysicsCollisionObject objectA,::org::gameplay3d::PhysicsCollisionObject objectB);
		static Dynamic constructNativeObject_dyn();

		static Dynamic hx_PhysicsCollisionObject_CollisionPair_Construct;
		static Dynamic &hx_PhysicsCollisionObject_CollisionPair_Construct_dyn() { return hx_PhysicsCollisionObject_CollisionPair_Construct;}
		static Dynamic hx_PhysicsCollisionObject_CollisionPair_property_objectA_get;
		static Dynamic &hx_PhysicsCollisionObject_CollisionPair_property_objectA_get_dyn() { return hx_PhysicsCollisionObject_CollisionPair_property_objectA_get;}
		static Dynamic hx_PhysicsCollisionObject_CollisionPair_property_objectB_get;
		static Dynamic &hx_PhysicsCollisionObject_CollisionPair_property_objectB_get_dyn() { return hx_PhysicsCollisionObject_CollisionPair_property_objectB_get;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_PhysicsCollisionObject_CollisionPair */ 
