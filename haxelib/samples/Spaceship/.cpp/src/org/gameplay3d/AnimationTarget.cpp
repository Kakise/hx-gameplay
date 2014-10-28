#include <hxcpp.h>

#ifndef INCLUDED_org_gameplay3d_Animation
#include <org/gameplay3d/Animation.h>
#endif
#ifndef INCLUDED_org_gameplay3d_AnimationTarget
#include <org/gameplay3d/AnimationTarget.h>
#endif
#ifndef INCLUDED_org_gameplay3d_AnimationValue
#include <org/gameplay3d/AnimationValue.h>
#endif
#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Properties
#include <org/gameplay3d/Properties.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Ref
#include <org/gameplay3d/Ref.h>
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

HX_DEFINE_DYNAMIC_FUNC2(AnimationTarget_obj,createAnimation_Str_Prop,return )

HX_DEFINE_DYNAMIC_FUNC2(AnimationTarget_obj,createAnimation_StrX2,return )

HX_DEFINE_DYNAMIC_FUNC6(AnimationTarget_obj,createAnimation_Str_IntX2_ArrInt_ArrFlt_Int,return )

HX_DEFINE_DYNAMIC_FUNC8(AnimationTarget_obj,createAnimation_Str_IntX2_ArrInt_ArrFltX3_Int,return )

HX_DEFINE_DYNAMIC_FUNC6(AnimationTarget_obj,createAnimationFromBy,return )

HX_DEFINE_DYNAMIC_FUNC6(AnimationTarget_obj,createAnimationFromTo,return )

HX_DEFINE_DYNAMIC_FUNC1(AnimationTarget_obj,destroyAnimation,)

HX_DEFINE_DYNAMIC_FUNC1(AnimationTarget_obj,getAnimation,return )

HX_DEFINE_DYNAMIC_FUNC1(AnimationTarget_obj,getAnimationPropertyComponentCount,return )

HX_DEFINE_DYNAMIC_FUNC2(AnimationTarget_obj,getAnimationPropertyValue,)

HX_DEFINE_DYNAMIC_FUNC3(AnimationTarget_obj,setAnimationPropertyValue,)


static ::String sMemberFields[] = {
	HX_CSTRING("createAnimation_Str_Prop"),
	HX_CSTRING("createAnimation_StrX2"),
	HX_CSTRING("createAnimation_Str_IntX2_ArrInt_ArrFlt_Int"),
	HX_CSTRING("createAnimation_Str_IntX2_ArrInt_ArrFltX3_Int"),
	HX_CSTRING("createAnimationFromBy"),
	HX_CSTRING("createAnimationFromTo"),
	HX_CSTRING("destroyAnimation"),
	HX_CSTRING("getAnimation"),
	HX_CSTRING("getAnimationPropertyComponentCount"),
	HX_CSTRING("getAnimationPropertyValue"),
	HX_CSTRING("setAnimationPropertyValue"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AnimationTarget_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AnimationTarget_obj::__mClass,"__mClass");
};

#endif

Class AnimationTarget_obj::__mClass;

void AnimationTarget_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.AnimationTarget"), hx::TCanCast< AnimationTarget_obj> ,0,sMemberFields,
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

void AnimationTarget_obj::__boot()
{
}

} // end namespace org
} // end namespace gameplay3d
