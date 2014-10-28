#ifndef INCLUDED_org_gameplay3d_wrapper_PhysicsCollisionObject_CollisionListenerWrapper
#define INCLUDED_org_gameplay3d_wrapper_PhysicsCollisionObject_CollisionListenerWrapper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/intern/ListenerWrapper.h>
#include <org/gameplay3d/PhysicsCollisionObject_CollisionListener.h>
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsCollisionObject_CollisionListener)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsCollisionObject_CollisionPair)
HX_DECLARE_CLASS2(org,gameplay3d,Vector3)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector3)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,ListenerWrapper)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,wrapper,PhysicsCollisionObject_CollisionListenerWrapper)
namespace org{
namespace gameplay3d{
namespace wrapper{


class HXCPP_CLASS_ATTRIBUTES  PhysicsCollisionObject_CollisionListenerWrapper_obj : public ::org::gameplay3d::intern::ListenerWrapper_obj{
	public:
		typedef ::org::gameplay3d::intern::ListenerWrapper_obj super;
		typedef PhysicsCollisionObject_CollisionListenerWrapper_obj OBJ_;
		PhysicsCollisionObject_CollisionListenerWrapper_obj();
		Void __construct(::org::gameplay3d::PhysicsCollisionObject_CollisionListener target,Dynamic nativeObject,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PhysicsCollisionObject_CollisionListenerWrapper_obj > __new(::org::gameplay3d::PhysicsCollisionObject_CollisionListener target,Dynamic nativeObject,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PhysicsCollisionObject_CollisionListenerWrapper_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::org::gameplay3d::PhysicsCollisionObject_CollisionListener_obj *()
			{ return new ::org::gameplay3d::PhysicsCollisionObject_CollisionListener_delegate_< PhysicsCollisionObject_CollisionListenerWrapper_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("PhysicsCollisionObject_CollisionListenerWrapper"); }

		::org::gameplay3d::PhysicsCollisionObject_CollisionPair _collisionPair;
		::org::gameplay3d::Vector3 _contactPointA;
		::org::gameplay3d::Vector3 _contactPointB;
		virtual Void collisionEvent( int type,::org::gameplay3d::PhysicsCollisionObject_CollisionPair collisionPair,::org::gameplay3d::Vector3 contactPointA,::org::gameplay3d::Vector3 contactPointB);
		Dynamic collisionEvent_dyn();

		virtual Void collisionEventWrapper( int type,Dynamic collisionPair,Dynamic contactPointA,Dynamic contactPointB);
		Dynamic collisionEventWrapper_dyn();

		static ::org::gameplay3d::wrapper::PhysicsCollisionObject_CollisionListenerWrapper make( ::org::gameplay3d::PhysicsCollisionObject_CollisionListener target);
		static Dynamic make_dyn();

		static Dynamic constructNativeObject( ::org::gameplay3d::wrapper::PhysicsCollisionObject_CollisionListenerWrapper thisObj);
		static Dynamic constructNativeObject_dyn();

		static Dynamic hx_PhysicsCollisionObject_CollisionListener_Construct;
		static Dynamic &hx_PhysicsCollisionObject_CollisionListener_Construct_dyn() { return hx_PhysicsCollisionObject_CollisionListener_Construct;}
};

} // end namespace org
} // end namespace gameplay3d
} // end namespace wrapper

#endif /* INCLUDED_org_gameplay3d_wrapper_PhysicsCollisionObject_CollisionListenerWrapper */ 
