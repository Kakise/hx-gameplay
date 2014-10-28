#include <hxcpp.h>

#ifndef INCLUDED_org_gameplay3d_AIAgent_Listener
#include <org/gameplay3d/AIAgent_Listener.h>
#endif
#ifndef INCLUDED_org_gameplay3d_AIMessage
#include <org/gameplay3d/AIMessage.h>
#endif
#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_INativeBinding
#include <org/gameplay3d/intern/INativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_NativeBinding
#include <org/gameplay3d/intern/NativeBinding.h>
#endif
namespace org{
namespace gameplay3d{

HX_DEFINE_DYNAMIC_FUNC1(AIAgent_Listener_obj,messageReceived,return )


static ::String sMemberFields[] = {
	HX_CSTRING("messageReceived"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AIAgent_Listener_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AIAgent_Listener_obj::__mClass,"__mClass");
};

#endif

Class AIAgent_Listener_obj::__mClass;

void AIAgent_Listener_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.AIAgent_Listener"), hx::TCanCast< AIAgent_Listener_obj> ,0,sMemberFields,
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

void AIAgent_Listener_obj::__boot()
{
}

} // end namespace org
} // end namespace gameplay3d
