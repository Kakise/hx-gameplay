#include <hxcpp.h>

#ifndef INCLUDED_org_gameplay3d_intern_INativeBinding
#include <org/gameplay3d/intern/INativeBinding.h>
#endif
namespace org{
namespace gameplay3d{
namespace intern{

HX_DEFINE_DYNAMIC_FUNC1(INativeBinding_obj,isEquivalentTo,return )


static ::String sMemberFields[] = {
	HX_CSTRING("nativeObject"),
	HX_CSTRING("isEquivalentTo"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(INativeBinding_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(INativeBinding_obj::__mClass,"__mClass");
};

#endif

Class INativeBinding_obj::__mClass;

void INativeBinding_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.intern.INativeBinding"), hx::TCanCast< INativeBinding_obj> ,0,sMemberFields,
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

void INativeBinding_obj::__boot()
{
}

} // end namespace org
} // end namespace gameplay3d
} // end namespace intern
