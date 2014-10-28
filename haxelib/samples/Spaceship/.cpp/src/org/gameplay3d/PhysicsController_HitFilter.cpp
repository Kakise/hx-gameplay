#include <hxcpp.h>

#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsCollisionObject
#include <org/gameplay3d/PhysicsCollisionObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsController_HitFilter
#include <org/gameplay3d/PhysicsController_HitFilter.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsController_HitResult
#include <org/gameplay3d/PhysicsController_HitResult.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_INativeBinding
#include <org/gameplay3d/intern/INativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_NativeBinding
#include <org/gameplay3d/intern/NativeBinding.h>
#endif
namespace org{
namespace gameplay3d{

HX_DEFINE_DYNAMIC_FUNC1(PhysicsController_HitFilter_obj,filter,return )

HX_DEFINE_DYNAMIC_FUNC1(PhysicsController_HitFilter_obj,hit,return )


static ::String sMemberFields[] = {
	HX_CSTRING("filter"),
	HX_CSTRING("hit"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PhysicsController_HitFilter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PhysicsController_HitFilter_obj::__mClass,"__mClass");
};

#endif

Class PhysicsController_HitFilter_obj::__mClass;

void PhysicsController_HitFilter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.PhysicsController_HitFilter"), hx::TCanCast< PhysicsController_HitFilter_obj> ,0,sMemberFields,
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

void PhysicsController_HitFilter_obj::__boot()
{
}

} // end namespace org
} // end namespace gameplay3d
