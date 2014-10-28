#include <hxcpp.h>

#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Matrix
#include <org/gameplay3d/Matrix.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Ray
#include <org/gameplay3d/Ray.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IBoundingBox
#include <org/gameplay3d/immutable/IBoundingBox.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IBoundingSphere
#include <org/gameplay3d/immutable/IBoundingSphere.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IFrustum
#include <org/gameplay3d/immutable/IFrustum.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IMatrix
#include <org/gameplay3d/immutable/IMatrix.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IPlane
#include <org/gameplay3d/immutable/IPlane.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IVector3
#include <org/gameplay3d/immutable/IVector3.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_INativeBinding
#include <org/gameplay3d/intern/INativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_NativeBinding
#include <org/gameplay3d/intern/NativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_IMutableNativeArray
#include <org/gameplay3d/util/IMutableNativeArray.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_INativeArray
#include <org/gameplay3d/util/INativeArray.h>
#endif
namespace org{
namespace gameplay3d{
namespace immutable{

HX_DEFINE_DYNAMIC_FUNC0(IFrustum_obj,getBottom,return )

HX_DEFINE_DYNAMIC_FUNC1(IFrustum_obj,getCorners,)

HX_DEFINE_DYNAMIC_FUNC0(IFrustum_obj,getFar,return )

HX_DEFINE_DYNAMIC_FUNC0(IFrustum_obj,getLeft,return )

HX_DEFINE_DYNAMIC_FUNC1(IFrustum_obj,getMatrix,)

HX_DEFINE_DYNAMIC_FUNC0(IFrustum_obj,getNear,return )

HX_DEFINE_DYNAMIC_FUNC0(IFrustum_obj,getRight,return )

HX_DEFINE_DYNAMIC_FUNC0(IFrustum_obj,getTop,return )

HX_DEFINE_DYNAMIC_FUNC1(IFrustum_obj,intersects_BBox,return )

HX_DEFINE_DYNAMIC_FUNC1(IFrustum_obj,intersects_BSphr,return )

HX_DEFINE_DYNAMIC_FUNC1(IFrustum_obj,intersects_V3,return )

HX_DEFINE_DYNAMIC_FUNC3(IFrustum_obj,intersects_FltX3,return )

HX_DEFINE_DYNAMIC_FUNC1(IFrustum_obj,intersects_Plane,return )

HX_DEFINE_DYNAMIC_FUNC1(IFrustum_obj,intersects_Ray,return )


static ::String sMemberFields[] = {
	HX_CSTRING("getBottom"),
	HX_CSTRING("getCorners"),
	HX_CSTRING("getFar"),
	HX_CSTRING("getLeft"),
	HX_CSTRING("getMatrix"),
	HX_CSTRING("getNear"),
	HX_CSTRING("getRight"),
	HX_CSTRING("getTop"),
	HX_CSTRING("intersects_BBox"),
	HX_CSTRING("intersects_BSphr"),
	HX_CSTRING("intersects_V3"),
	HX_CSTRING("intersects_FltX3"),
	HX_CSTRING("intersects_Plane"),
	HX_CSTRING("intersects_Ray"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IFrustum_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IFrustum_obj::__mClass,"__mClass");
};

#endif

Class IFrustum_obj::__mClass;

void IFrustum_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.immutable.IFrustum"), hx::TCanCast< IFrustum_obj> ,0,sMemberFields,
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

void IFrustum_obj::__boot()
{
}

} // end namespace org
} // end namespace gameplay3d
} // end namespace immutable
