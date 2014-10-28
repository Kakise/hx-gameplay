#include <hxcpp.h>

#ifndef INCLUDED_org_gameplay3d_AnimationController
#include <org/gameplay3d/AnimationController.h>
#endif
#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_INativeBinding
#include <org/gameplay3d/intern/INativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_NativeBinding
#include <org/gameplay3d/intern/NativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_NativeInterface
#include <org/gameplay3d/util/NativeInterface.h>
#endif
namespace org{
namespace gameplay3d{

Void AnimationController_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.AnimationController","new",0x441c81a5,"org.gameplay3d.AnimationController.new","org/gameplay3d/AnimationController.hx",9,0xc310df0b)
HX_STACK_THIS(this)
HX_STACK_ARG(nativeObjectInitializer,"nativeObjectInitializer")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(9)
	super::__construct(nativeObjectInitializer,nativeObjectInitializerParams);
}
;
	return null();
}

//AnimationController_obj::~AnimationController_obj() { }

Dynamic AnimationController_obj::__CreateEmpty() { return  new AnimationController_obj; }
hx::ObjectPtr< AnimationController_obj > AnimationController_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< AnimationController_obj > result = new AnimationController_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic AnimationController_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AnimationController_obj > result = new AnimationController_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void AnimationController_obj::stopAllAnimations( ){
{
		HX_STACK_FRAME("org.gameplay3d.AnimationController","stopAllAnimations",0x979bcc13,"org.gameplay3d.AnimationController.stopAllAnimations","org/gameplay3d/AnimationController.hx",18,0xc310df0b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(18)
		::org::gameplay3d::AnimationController_obj::hx_AnimationController_stopAllAnimations(this->nativeObject);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationController_obj,stopAllAnimations,(void))

Dynamic AnimationController_obj::hx_AnimationController_stopAllAnimations;


AnimationController_obj::AnimationController_obj()
{
}

Dynamic AnimationController_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"stopAllAnimations") ) { return stopAllAnimations_dyn(); }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"hx_AnimationController_stopAllAnimations") ) { return hx_AnimationController_stopAllAnimations; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AnimationController_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 40:
		if (HX_FIELD_EQ(inName,"hx_AnimationController_stopAllAnimations") ) { hx_AnimationController_stopAllAnimations=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AnimationController_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("hx_AnimationController_stopAllAnimations"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("stopAllAnimations"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AnimationController_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AnimationController_obj::hx_AnimationController_stopAllAnimations,"hx_AnimationController_stopAllAnimations");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AnimationController_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AnimationController_obj::hx_AnimationController_stopAllAnimations,"hx_AnimationController_stopAllAnimations");
};

#endif

Class AnimationController_obj::__mClass;

void AnimationController_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.AnimationController"), hx::TCanCast< AnimationController_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void AnimationController_obj::__boot()
{
	hx_AnimationController_stopAllAnimations= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AnimationController >(),HX_CSTRING("stopAllAnimations"),(int)1);
}

} // end namespace org
} // end namespace gameplay3d
