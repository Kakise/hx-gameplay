#include <hxcpp.h>

#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Quaternion
#include <org/gameplay3d/Quaternion.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Vector3
#include <org/gameplay3d/Vector3.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IQuaternion
#include <org/gameplay3d/immutable/IQuaternion.h>
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

HX_DEFINE_DYNAMIC_FUNC1(IQuaternion_obj,conjugate_Qtrn,)

HX_DEFINE_DYNAMIC_FUNC1(IQuaternion_obj,inverse_Qtrn,return )

HX_DEFINE_DYNAMIC_FUNC0(IQuaternion_obj,isIdentity,return )

HX_DEFINE_DYNAMIC_FUNC0(IQuaternion_obj,isZero,return )

HX_DEFINE_DYNAMIC_FUNC1(IQuaternion_obj,normalize_Qtrn,)

HX_DEFINE_DYNAMIC_FUNC1(IQuaternion_obj,toAxisAngle,return )


static ::String sMemberFields[] = {
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("z"),
	HX_CSTRING("w"),
	HX_CSTRING("conjugate_Qtrn"),
	HX_CSTRING("inverse_Qtrn"),
	HX_CSTRING("isIdentity"),
	HX_CSTRING("isZero"),
	HX_CSTRING("normalize_Qtrn"),
	HX_CSTRING("toAxisAngle"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IQuaternion_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IQuaternion_obj::__mClass,"__mClass");
};

#endif

Class IQuaternion_obj::__mClass;

void IQuaternion_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.immutable.IQuaternion"), hx::TCanCast< IQuaternion_obj> ,0,sMemberFields,
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

void IQuaternion_obj::__boot()
{
}

} // end namespace org
} // end namespace gameplay3d
} // end namespace immutable
