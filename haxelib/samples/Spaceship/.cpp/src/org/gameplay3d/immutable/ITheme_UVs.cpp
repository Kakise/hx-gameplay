#include <hxcpp.h>

#ifndef INCLUDED_org_gameplay3d_immutable_ITheme_UVs
#include <org/gameplay3d/immutable/ITheme_UVs.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_INativeBinding
#include <org/gameplay3d/intern/INativeBinding.h>
#endif
namespace org{
namespace gameplay3d{
namespace immutable{


static ::String sMemberFields[] = {
	HX_CSTRING("u1"),
	HX_CSTRING("v1"),
	HX_CSTRING("u2"),
	HX_CSTRING("v2"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ITheme_UVs_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ITheme_UVs_obj::__mClass,"__mClass");
};

#endif

Class ITheme_UVs_obj::__mClass;

void ITheme_UVs_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.immutable.ITheme_UVs"), hx::TCanCast< ITheme_UVs_obj> ,0,sMemberFields,
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

void ITheme_UVs_obj::__boot()
{
}

} // end namespace org
} // end namespace gameplay3d
} // end namespace immutable
