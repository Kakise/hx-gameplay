#include <hxcpp.h>

#ifndef INCLUDED_org_gameplay3d_intern_INativeBinding
#include <org/gameplay3d/intern/INativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_IMutableNativeArray
#include <org/gameplay3d/util/IMutableNativeArray.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_INativeArray
#include <org/gameplay3d/util/INativeArray.h>
#endif
namespace org{
namespace gameplay3d{
namespace util{

HX_DEFINE_DYNAMIC_FUNC2(IMutableNativeArray_obj,setAt,)


static ::String sMemberFields[] = {
	HX_CSTRING("setAt"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IMutableNativeArray_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IMutableNativeArray_obj::__mClass,"__mClass");
};

#endif

Class IMutableNativeArray_obj::__mClass;

void IMutableNativeArray_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.util.IMutableNativeArray"), hx::TCanCast< IMutableNativeArray_obj> ,0,sMemberFields,
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

void IMutableNativeArray_obj::__boot()
{
}

} // end namespace org
} // end namespace gameplay3d
} // end namespace util
