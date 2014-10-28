#ifndef INCLUDED_org_gameplay3d_PhysicsGhostObject
#define INCLUDED_org_gameplay3d_PhysicsGhostObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/PhysicsCollisionObject.h>
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsCollisionObject)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsGhostObject)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  PhysicsGhostObject_obj : public ::org::gameplay3d::PhysicsCollisionObject_obj{
	public:
		typedef ::org::gameplay3d::PhysicsCollisionObject_obj super;
		typedef PhysicsGhostObject_obj OBJ_;
		PhysicsGhostObject_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PhysicsGhostObject_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PhysicsGhostObject_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("PhysicsGhostObject"); }

		virtual int getType( );

		static Dynamic hx_PhysicsGhostObject_getType;
		static Dynamic &hx_PhysicsGhostObject_getType_dyn() { return hx_PhysicsGhostObject_getType;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_PhysicsGhostObject */ 
