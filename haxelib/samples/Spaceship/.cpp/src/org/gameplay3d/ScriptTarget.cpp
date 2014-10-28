#include <hxcpp.h>

#ifndef INCLUDED_org_gameplay3d_ScriptTarget
#include <org/gameplay3d/ScriptTarget.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_INativeBinding
#include <org/gameplay3d/intern/INativeBinding.h>
#endif
namespace org{
namespace gameplay3d{

HX_DEFINE_DYNAMIC_FUNC2(ScriptTarget_obj,addScriptCallback,)

HX_DEFINE_DYNAMIC_FUNC2(ScriptTarget_obj,removeScriptCallback,)


static ::String sMemberFields[] = {
	HX_CSTRING("addScriptCallback"),
	HX_CSTRING("removeScriptCallback"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScriptTarget_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScriptTarget_obj::__mClass,"__mClass");
};

#endif

Class ScriptTarget_obj::__mClass;

void ScriptTarget_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.ScriptTarget"), hx::TCanCast< ScriptTarget_obj> ,0,sMemberFields,
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

void ScriptTarget_obj::__boot()
{
}

} // end namespace org
} // end namespace gameplay3d
