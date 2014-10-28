#include <hxcpp.h>

#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsCollisionObject_CollisionListener
#include <org/gameplay3d/PhysicsCollisionObject_CollisionListener.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsCollisionObject_CollisionPair
#include <org/gameplay3d/PhysicsCollisionObject_CollisionPair.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Vector3
#include <org/gameplay3d/Vector3.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IVector3
#include <org/gameplay3d/immutable/IVector3.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_INativeBinding
#include <org/gameplay3d/intern/INativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_NativeBinding
#include <org/gameplay3d/intern/NativeBinding.h>
#endif
namespace org{
namespace gameplay3d{

HX_DEFINE_DYNAMIC_FUNC4(PhysicsCollisionObject_CollisionListener_obj,collisionEvent,)


static ::String sMemberFields[] = {
	HX_CSTRING("collisionEvent"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PhysicsCollisionObject_CollisionListener_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PhysicsCollisionObject_CollisionListener_obj::__mClass,"__mClass");
};

#endif

Class PhysicsCollisionObject_CollisionListener_obj::__mClass;

void PhysicsCollisionObject_CollisionListener_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.PhysicsCollisionObject_CollisionListener"), hx::TCanCast< PhysicsCollisionObject_CollisionListener_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void PhysicsCollisionObject_CollisionListener_obj::__boot()
{
}

} // end namespace org
} // end namespace gameplay3d
