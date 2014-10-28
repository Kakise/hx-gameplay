#include <hxcpp.h>

#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Matrix
#include <org/gameplay3d/Matrix.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Quaternion
#include <org/gameplay3d/Quaternion.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Vector3
#include <org/gameplay3d/Vector3.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Vector4
#include <org/gameplay3d/Vector4.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IMatrix
#include <org/gameplay3d/immutable/IMatrix.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IQuaternion
#include <org/gameplay3d/immutable/IQuaternion.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IVector3
#include <org/gameplay3d/immutable/IVector3.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IVector4
#include <org/gameplay3d/immutable/IVector4.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_INativeBinding
#include <org/gameplay3d/intern/INativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_NativeBinding
#include <org/gameplay3d/intern/NativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_INativeArray
#include <org/gameplay3d/util/INativeArray.h>
#endif
namespace org{
namespace gameplay3d{
namespace immutable{

HX_DEFINE_DYNAMIC_FUNC3(IMatrix_obj,decompose,return )

HX_DEFINE_DYNAMIC_FUNC0(IMatrix_obj,determinant,return )

HX_DEFINE_DYNAMIC_FUNC1(IMatrix_obj,getBackVector,)

HX_DEFINE_DYNAMIC_FUNC1(IMatrix_obj,getDownVector,)

HX_DEFINE_DYNAMIC_FUNC1(IMatrix_obj,getForwardVector,)

HX_DEFINE_DYNAMIC_FUNC1(IMatrix_obj,getLeftVector,)

HX_DEFINE_DYNAMIC_FUNC1(IMatrix_obj,getRightVector,)

HX_DEFINE_DYNAMIC_FUNC1(IMatrix_obj,getRotation,return )

HX_DEFINE_DYNAMIC_FUNC1(IMatrix_obj,getScale,)

HX_DEFINE_DYNAMIC_FUNC1(IMatrix_obj,getTranslation,)

HX_DEFINE_DYNAMIC_FUNC1(IMatrix_obj,getUpVector,)

HX_DEFINE_DYNAMIC_FUNC1(IMatrix_obj,invert_Mat,return )

HX_DEFINE_DYNAMIC_FUNC0(IMatrix_obj,isIdentity,return )

HX_DEFINE_DYNAMIC_FUNC2(IMatrix_obj,multiply_Flt_Mat,)

HX_DEFINE_DYNAMIC_FUNC1(IMatrix_obj,negate_Mat,)

HX_DEFINE_DYNAMIC_FUNC2(IMatrix_obj,rotate_Qtrn_Mat,)

HX_DEFINE_DYNAMIC_FUNC3(IMatrix_obj,rotate_V3_Flt_Mat,)

HX_DEFINE_DYNAMIC_FUNC2(IMatrix_obj,rotateX_Flt_Mat,)

HX_DEFINE_DYNAMIC_FUNC2(IMatrix_obj,rotateY_Flt_Mat,)

HX_DEFINE_DYNAMIC_FUNC2(IMatrix_obj,rotateZ_Flt_Mat,)

HX_DEFINE_DYNAMIC_FUNC2(IMatrix_obj,scale_V3_Mat,)

HX_DEFINE_DYNAMIC_FUNC2(IMatrix_obj,scale_Flt_Mat,)

HX_DEFINE_DYNAMIC_FUNC4(IMatrix_obj,scale_FltX3_Mat,)

HX_DEFINE_DYNAMIC_FUNC1(IMatrix_obj,transformPoint_V3,)

HX_DEFINE_DYNAMIC_FUNC2(IMatrix_obj,transformPoint_V3X2,)

HX_DEFINE_DYNAMIC_FUNC1(IMatrix_obj,transformVector_V3,)

HX_DEFINE_DYNAMIC_FUNC1(IMatrix_obj,transformVector_V4,)

HX_DEFINE_DYNAMIC_FUNC2(IMatrix_obj,transformVector_V3X2,)

HX_DEFINE_DYNAMIC_FUNC2(IMatrix_obj,transformVector_V4X2,)

HX_DEFINE_DYNAMIC_FUNC5(IMatrix_obj,transformVector_FltX4_V3,)

HX_DEFINE_DYNAMIC_FUNC2(IMatrix_obj,translate_V3_Mat,)

HX_DEFINE_DYNAMIC_FUNC4(IMatrix_obj,translate_FltX3_Mat,)

HX_DEFINE_DYNAMIC_FUNC1(IMatrix_obj,transpose_Mat,)


static ::String sMemberFields[] = {
	HX_CSTRING("mat"),
	HX_CSTRING("decompose"),
	HX_CSTRING("determinant"),
	HX_CSTRING("getBackVector"),
	HX_CSTRING("getDownVector"),
	HX_CSTRING("getForwardVector"),
	HX_CSTRING("getLeftVector"),
	HX_CSTRING("getRightVector"),
	HX_CSTRING("getRotation"),
	HX_CSTRING("getScale"),
	HX_CSTRING("getTranslation"),
	HX_CSTRING("getUpVector"),
	HX_CSTRING("invert_Mat"),
	HX_CSTRING("isIdentity"),
	HX_CSTRING("multiply_Flt_Mat"),
	HX_CSTRING("negate_Mat"),
	HX_CSTRING("rotate_Qtrn_Mat"),
	HX_CSTRING("rotate_V3_Flt_Mat"),
	HX_CSTRING("rotateX_Flt_Mat"),
	HX_CSTRING("rotateY_Flt_Mat"),
	HX_CSTRING("rotateZ_Flt_Mat"),
	HX_CSTRING("scale_V3_Mat"),
	HX_CSTRING("scale_Flt_Mat"),
	HX_CSTRING("scale_FltX3_Mat"),
	HX_CSTRING("transformPoint_V3"),
	HX_CSTRING("transformPoint_V3X2"),
	HX_CSTRING("transformVector_V3"),
	HX_CSTRING("transformVector_V4"),
	HX_CSTRING("transformVector_V3X2"),
	HX_CSTRING("transformVector_V4X2"),
	HX_CSTRING("transformVector_FltX4_V3"),
	HX_CSTRING("translate_V3_Mat"),
	HX_CSTRING("translate_FltX3_Mat"),
	HX_CSTRING("transpose_Mat"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IMatrix_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IMatrix_obj::__mClass,"__mClass");
};

#endif

Class IMatrix_obj::__mClass;

void IMatrix_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.immutable.IMatrix"), hx::TCanCast< IMatrix_obj> ,0,sMemberFields,
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

void IMatrix_obj::__boot()
{
}

} // end namespace org
} // end namespace gameplay3d
} // end namespace immutable
