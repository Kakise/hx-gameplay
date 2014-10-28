#include <hxcpp.h>

#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Ray
#include <org/gameplay3d/Ray.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Vector3
#include <org/gameplay3d/Vector3.h>
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
namespace org{
namespace gameplay3d{
namespace immutable{

HX_DEFINE_DYNAMIC_FUNC1(IBoundingSphere_obj,intersects_BBox,return )

HX_DEFINE_DYNAMIC_FUNC1(IBoundingSphere_obj,intersects_BSphr,return )

HX_DEFINE_DYNAMIC_FUNC1(IBoundingSphere_obj,intersects_Frstm,return )

HX_DEFINE_DYNAMIC_FUNC1(IBoundingSphere_obj,intersects_Plane,return )

HX_DEFINE_DYNAMIC_FUNC1(IBoundingSphere_obj,intersects_Ray,return )

HX_DEFINE_DYNAMIC_FUNC0(IBoundingSphere_obj,isEmpty,return )


static ::String sMemberFields[] = {
	HX_CSTRING("center"),
	HX_CSTRING("radius"),
	HX_CSTRING("intersects_BBox"),
	HX_CSTRING("intersects_BSphr"),
	HX_CSTRING("intersects_Frstm"),
	HX_CSTRING("intersects_Plane"),
	HX_CSTRING("intersects_Ray"),
	HX_CSTRING("isEmpty"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IBoundingSphere_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IBoundingSphere_obj::__mClass,"__mClass");
};

#endif

Class IBoundingSphere_obj::__mClass;

void IBoundingSphere_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.immutable.IBoundingSphere"), hx::TCanCast< IBoundingSphere_obj> ,0,sMemberFields,
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

void IBoundingSphere_obj::__boot()
{
}

} // end namespace org
} // end namespace gameplay3d
} // end namespace immutable
