#include <hxcpp.h>

#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Vector2
#include <org/gameplay3d/Vector2.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IVector2
#include <org/gameplay3d/immutable/IVector2.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_INativeBinding
#include <org/gameplay3d/intern/INativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_NativeBinding
#include <org/gameplay3d/intern/NativeBinding.h>
#endif
namespace org{
namespace gameplay3d{
namespace immutable{

HX_DEFINE_DYNAMIC_FUNC1(IVector2_obj,distance,return )

HX_DEFINE_DYNAMIC_FUNC1(IVector2_obj,distanceSquared,return )

HX_DEFINE_DYNAMIC_FUNC1(IVector2_obj,dot_V2,return )

HX_DEFINE_DYNAMIC_FUNC0(IVector2_obj,isOne,return )

HX_DEFINE_DYNAMIC_FUNC0(IVector2_obj,isZero,return )

HX_DEFINE_DYNAMIC_FUNC0(IVector2_obj,length,return )

HX_DEFINE_DYNAMIC_FUNC0(IVector2_obj,lengthSquared,return )

HX_DEFINE_DYNAMIC_FUNC1(IVector2_obj,normalize_V2,)


static ::String sMemberFields[] = {
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("distance"),
	HX_CSTRING("distanceSquared"),
	HX_CSTRING("dot_V2"),
	HX_CSTRING("isOne"),
	HX_CSTRING("isZero"),
	HX_CSTRING("length"),
	HX_CSTRING("lengthSquared"),
	HX_CSTRING("normalize_V2"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IVector2_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IVector2_obj::__mClass,"__mClass");
};

#endif

Class IVector2_obj::__mClass;

void IVector2_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.immutable.IVector2"), hx::TCanCast< IVector2_obj> ,0,sMemberFields,
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

void IVector2_obj::__boot()
{
}

} // end namespace org
} // end namespace gameplay3d
} // end namespace immutable
