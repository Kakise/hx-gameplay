#include <hxcpp.h>

#ifndef INCLUDED_org_gameplay3d_immutable_ITheme_SideRegions
#include <org/gameplay3d/immutable/ITheme_SideRegions.h>
#endif
namespace org{
namespace gameplay3d{
namespace immutable{


static ::String sMemberFields[] = {
	HX_CSTRING("top"),
	HX_CSTRING("left"),
	HX_CSTRING("bottom"),
	HX_CSTRING("right"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ITheme_SideRegions_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ITheme_SideRegions_obj::__mClass,"__mClass");
};

#endif

Class ITheme_SideRegions_obj::__mClass;

void ITheme_SideRegions_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.immutable.ITheme_SideRegions"), hx::TCanCast< ITheme_SideRegions_obj> ,0,sMemberFields,
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

void ITheme_SideRegions_obj::__boot()
{
}

} // end namespace org
} // end namespace gameplay3d
} // end namespace immutable
