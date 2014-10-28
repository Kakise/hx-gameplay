#ifndef INCLUDED_org_gameplay3d_PhysicsCollisionObject_CollisionListener
#define INCLUDED_org_gameplay3d_PhysicsCollisionObject_CollisionListener

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsCollisionObject_CollisionListener)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsCollisionObject_CollisionPair)
HX_DECLARE_CLASS2(org,gameplay3d,Vector3)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector3)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  PhysicsCollisionObject_CollisionListener_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef PhysicsCollisionObject_CollisionListener_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Void collisionEvent( int type,::org::gameplay3d::PhysicsCollisionObject_CollisionPair collisionPair,::org::gameplay3d::Vector3 contactPointA,::org::gameplay3d::Vector3 contactPointB)=0;
		Dynamic collisionEvent_dyn();
};

#define DELEGATE_org_gameplay3d_PhysicsCollisionObject_CollisionListener \
virtual Void collisionEvent( int type,::org::gameplay3d::PhysicsCollisionObject_CollisionPair collisionPair,::org::gameplay3d::Vector3 contactPointA,::org::gameplay3d::Vector3 contactPointB) { return mDelegate->collisionEvent(type,collisionPair,contactPointA,contactPointB);}  \
virtual Dynamic collisionEvent_dyn() { return mDelegate->collisionEvent_dyn();}  \


template<typename IMPL>
class PhysicsCollisionObject_CollisionListener_delegate_ : public PhysicsCollisionObject_CollisionListener_obj
{
	protected:
		IMPL *mDelegate;
	public:
		PhysicsCollisionObject_CollisionListener_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_org_gameplay3d_PhysicsCollisionObject_CollisionListener
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_PhysicsCollisionObject_CollisionListener */ 
