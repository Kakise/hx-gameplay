#include <hxcpp.h>

#ifndef INCLUDED_org_gameplay3d_PhysicsController_Listener
#include <org/gameplay3d/PhysicsController_Listener.h>
#endif
namespace org{
namespace gameplay3d{

HX_DEFINE_DYNAMIC_FUNC1(PhysicsController_Listener_obj,statusEvent,)


static ::String sMemberFields[] = {
	HX_CSTRING("statusEvent"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PhysicsController_Listener_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PhysicsController_Listener_obj::__mClass,"__mClass");
};

#endif

Class PhysicsController_Listener_obj::__mClass;

void PhysicsController_Listener_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.PhysicsController_Listener"), hx::TCanCast< PhysicsController_Listener_obj> ,0,sMemberFields,
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

void PhysicsController_Listener_obj::__boot()
{
}

} // end namespace org
} // end namespace gameplay3d
