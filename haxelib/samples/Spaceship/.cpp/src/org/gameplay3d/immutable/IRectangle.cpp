#include <hxcpp.h>

#ifndef INCLUDED_org_gameplay3d_immutable_IRectangle
#include <org/gameplay3d/immutable/IRectangle.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_INativeBinding
#include <org/gameplay3d/intern/INativeBinding.h>
#endif
namespace org{
namespace gameplay3d{
namespace immutable{

HX_DEFINE_DYNAMIC_FUNC0(IRectangle_obj,bottom,return )

HX_DEFINE_DYNAMIC_FUNC1(IRectangle_obj,contains_Rct,return )

HX_DEFINE_DYNAMIC_FUNC2(IRectangle_obj,contains_FltX2,return )

HX_DEFINE_DYNAMIC_FUNC4(IRectangle_obj,contains_FltX4,return )

HX_DEFINE_DYNAMIC_FUNC1(IRectangle_obj,intersects_Rct,return )

HX_DEFINE_DYNAMIC_FUNC4(IRectangle_obj,intersects_FltX4,return )

HX_DEFINE_DYNAMIC_FUNC0(IRectangle_obj,isEmpty,return )

HX_DEFINE_DYNAMIC_FUNC0(IRectangle_obj,left,return )

HX_DEFINE_DYNAMIC_FUNC0(IRectangle_obj,right,return )

HX_DEFINE_DYNAMIC_FUNC0(IRectangle_obj,top,return )


static ::String sMemberFields[] = {
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("bottom"),
	HX_CSTRING("contains_Rct"),
	HX_CSTRING("contains_FltX2"),
	HX_CSTRING("contains_FltX4"),
	HX_CSTRING("intersects_Rct"),
	HX_CSTRING("intersects_FltX4"),
	HX_CSTRING("isEmpty"),
	HX_CSTRING("left"),
	HX_CSTRING("right"),
	HX_CSTRING("top"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IRectangle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IRectangle_obj::__mClass,"__mClass");
};

#endif

Class IRectangle_obj::__mClass;

void IRectangle_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.immutable.IRectangle"), hx::TCanCast< IRectangle_obj> ,0,sMemberFields,
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

void IRectangle_obj::__boot()
{
}

} // end namespace org
} // end namespace gameplay3d
} // end namespace immutable
