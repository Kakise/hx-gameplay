#include <hxcpp.h>

#ifndef INCLUDED_org_gameplay3d_AIAgent
#include <org/gameplay3d/AIAgent.h>
#endif
#ifndef INCLUDED_org_gameplay3d_AIState
#include <org/gameplay3d/AIState.h>
#endif
#ifndef INCLUDED_org_gameplay3d_AIState_Listener
#include <org/gameplay3d/AIState_Listener.h>
#endif
#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Ref
#include <org/gameplay3d/Ref.h>
#endif
#ifndef INCLUDED_org_gameplay3d_ScriptTarget
#include <org/gameplay3d/ScriptTarget.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_INativeBinding
#include <org/gameplay3d/intern/INativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_NativeBinding
#include <org/gameplay3d/intern/NativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_impl_ScriptTargetImpl
#include <org/gameplay3d/intern/impl/ScriptTargetImpl.h>
#endif
namespace org{
namespace gameplay3d{

HX_DEFINE_DYNAMIC_FUNC2(AIState_Listener_obj,stateEnter,)

HX_DEFINE_DYNAMIC_FUNC2(AIState_Listener_obj,stateExit,)

HX_DEFINE_DYNAMIC_FUNC3(AIState_Listener_obj,stateUpdate,)


static ::String sMemberFields[] = {
	HX_CSTRING("stateEnter"),
	HX_CSTRING("stateExit"),
	HX_CSTRING("stateUpdate"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AIState_Listener_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AIState_Listener_obj::__mClass,"__mClass");
};

#endif

Class AIState_Listener_obj::__mClass;

void AIState_Listener_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.AIState_Listener"), hx::TCanCast< AIState_Listener_obj> ,0,sMemberFields,
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

void AIState_Listener_obj::__boot()
{
}

} // end namespace org
} // end namespace gameplay3d
