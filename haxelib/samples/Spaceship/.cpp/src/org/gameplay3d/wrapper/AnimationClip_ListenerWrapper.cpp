#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_cpp_vm_WeakRef
#include <cpp/vm/WeakRef.h>
#endif
#ifndef INCLUDED_org_gameplay3d_AnimationClip
#include <org/gameplay3d/AnimationClip.h>
#endif
#ifndef INCLUDED_org_gameplay3d_AnimationClip_Listener
#include <org/gameplay3d/AnimationClip_Listener.h>
#endif
#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Ref
#include <org/gameplay3d/Ref.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_INativeBinding
#include <org/gameplay3d/intern/INativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_ListenerWrapper
#include <org/gameplay3d/intern/ListenerWrapper.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_NativeBinding
#include <org/gameplay3d/intern/NativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_NativeInterface
#include <org/gameplay3d/util/NativeInterface.h>
#endif
#ifndef INCLUDED_org_gameplay3d_wrapper_AnimationClip_ListenerWrapper
#include <org/gameplay3d/wrapper/AnimationClip_ListenerWrapper.h>
#endif
namespace org{
namespace gameplay3d{
namespace wrapper{

Void AnimationClip_ListenerWrapper_obj::__construct(::org::gameplay3d::AnimationClip_Listener target,Dynamic nativeObject,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.wrapper.AnimationClip_ListenerWrapper","new",0x758f095e,"org.gameplay3d.wrapper.AnimationClip_ListenerWrapper.new","org/gameplay3d/wrapper/AnimationClip_ListenerWrapper.hx",11,0x6b63fd73)
HX_STACK_THIS(this)
HX_STACK_ARG(target,"target")
HX_STACK_ARG(nativeObject,"nativeObject")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(11)
	super::__construct(target,nativeObject,nativeObjectInitializerParams);
}
;
	return null();
}

//AnimationClip_ListenerWrapper_obj::~AnimationClip_ListenerWrapper_obj() { }

Dynamic AnimationClip_ListenerWrapper_obj::__CreateEmpty() { return  new AnimationClip_ListenerWrapper_obj; }
hx::ObjectPtr< AnimationClip_ListenerWrapper_obj > AnimationClip_ListenerWrapper_obj::__new(::org::gameplay3d::AnimationClip_Listener target,Dynamic nativeObject,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< AnimationClip_ListenerWrapper_obj > result = new AnimationClip_ListenerWrapper_obj();
	result->__construct(target,nativeObject,nativeObjectInitializerParams);
	return result;}

Dynamic AnimationClip_ListenerWrapper_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AnimationClip_ListenerWrapper_obj > result = new AnimationClip_ListenerWrapper_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

hx::Object *AnimationClip_ListenerWrapper_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::AnimationClip_Listener_obj)) return operator ::org::gameplay3d::AnimationClip_Listener_obj *();
	return super::__ToInterface(inType);
}

Void AnimationClip_ListenerWrapper_obj::animationEvent( ::org::gameplay3d::AnimationClip clip,int type){
{
		HX_STACK_FRAME("org.gameplay3d.wrapper.AnimationClip_ListenerWrapper","animationEvent",0x9076e638,"org.gameplay3d.wrapper.AnimationClip_ListenerWrapper.animationEvent","org/gameplay3d/wrapper/AnimationClip_ListenerWrapper.hx",26,0x6b63fd73)
		HX_STACK_THIS(this)
		HX_STACK_ARG(clip,"clip")
		HX_STACK_ARG(type,"type")
		HX_STACK_LINE(26)
		this->target->__Field(HX_CSTRING("animationEvent"),true)(clip,type);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AnimationClip_ListenerWrapper_obj,animationEvent,(void))

Void AnimationClip_ListenerWrapper_obj::animationEventWrapper( Dynamic clip,int type){
{
		HX_STACK_FRAME("org.gameplay3d.wrapper.AnimationClip_ListenerWrapper","animationEventWrapper",0xba90cdfb,"org.gameplay3d.wrapper.AnimationClip_ListenerWrapper.animationEventWrapper","org/gameplay3d/wrapper/AnimationClip_ListenerWrapper.hx",34,0x6b63fd73)
		HX_STACK_THIS(this)
		HX_STACK_ARG(clip,"clip")
		HX_STACK_ARG(type,"type")
		HX_STACK_LINE(35)
		::org::gameplay3d::AnimationClip _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(35)
		{
			HX_STACK_LINE(35)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::AnimationClip >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(35)
			if (((clip == null()))){
				HX_STACK_LINE(35)
				_g1 = null();
			}
			else{
				HX_STACK_LINE(35)
				if ((::Std_obj::is(clip,hx::ClassOf< ::cpp::vm::WeakRef >()))){
					HX_STACK_LINE(35)
					::cpp::vm::WeakRef ref = clip;		HX_STACK_VAR(ref,"ref");
					HX_STACK_LINE(35)
					::org::gameplay3d::AnimationClip result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(35)
					if (((result == null()))){
						HX_STACK_LINE(35)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(35)
						::org::gameplay3d::AnimationClip _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(35)
						result = _g;
						HX_STACK_LINE(35)
						ref->set(result);
					}
					HX_STACK_LINE(35)
					_g1 = result;
				}
				else{
					HX_STACK_LINE(35)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = clip;
					HX_STACK_LINE(35)
					_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
				}
			}
		}
		HX_STACK_LINE(35)
		this->animationEvent(_g1,type);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AnimationClip_ListenerWrapper_obj,animationEventWrapper,(void))

::org::gameplay3d::wrapper::AnimationClip_ListenerWrapper AnimationClip_ListenerWrapper_obj::make( ::org::gameplay3d::AnimationClip_Listener target){
	HX_STACK_FRAME("org.gameplay3d.wrapper.AnimationClip_ListenerWrapper","make",0x66ecdf30,"org.gameplay3d.wrapper.AnimationClip_ListenerWrapper.make","org/gameplay3d/wrapper/AnimationClip_ListenerWrapper.hx",20,0x6b63fd73)
	HX_STACK_ARG(target,"target")
	HX_STACK_LINE(20)
	return ::org::gameplay3d::wrapper::AnimationClip_ListenerWrapper_obj::__new(target,::org::gameplay3d::wrapper::AnimationClip_ListenerWrapper_obj::constructNativeObject_dyn(),Dynamic( Array_obj<Dynamic>::__new().Add(null())));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AnimationClip_ListenerWrapper_obj,make,return )

Dynamic AnimationClip_ListenerWrapper_obj::constructNativeObject( ::org::gameplay3d::wrapper::AnimationClip_ListenerWrapper thisObj){
	HX_STACK_FRAME("org.gameplay3d.wrapper.AnimationClip_ListenerWrapper","constructNativeObject",0xe068c2eb,"org.gameplay3d.wrapper.AnimationClip_ListenerWrapper.constructNativeObject","org/gameplay3d/wrapper/AnimationClip_ListenerWrapper.hx",41,0x6b63fd73)
	HX_STACK_ARG(thisObj,"thisObj")
	HX_STACK_LINE(41)
	return ::org::gameplay3d::wrapper::AnimationClip_ListenerWrapper_obj::hx_AnimationClip_Listener_Construct(thisObj->animationEventWrapper_dyn());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AnimationClip_ListenerWrapper_obj,constructNativeObject,return )

Dynamic AnimationClip_ListenerWrapper_obj::hx_AnimationClip_Listener_Construct;


AnimationClip_ListenerWrapper_obj::AnimationClip_ListenerWrapper_obj()
{
}

Dynamic AnimationClip_ListenerWrapper_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { return make_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"animationEvent") ) { return animationEvent_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"constructNativeObject") ) { return constructNativeObject_dyn(); }
		if (HX_FIELD_EQ(inName,"animationEventWrapper") ) { return animationEventWrapper_dyn(); }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"hx_AnimationClip_Listener_Construct") ) { return hx_AnimationClip_Listener_Construct; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AnimationClip_ListenerWrapper_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 35:
		if (HX_FIELD_EQ(inName,"hx_AnimationClip_Listener_Construct") ) { hx_AnimationClip_Listener_Construct=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AnimationClip_ListenerWrapper_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("make"),
	HX_CSTRING("constructNativeObject"),
	HX_CSTRING("hx_AnimationClip_Listener_Construct"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("animationEvent"),
	HX_CSTRING("animationEventWrapper"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AnimationClip_ListenerWrapper_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AnimationClip_ListenerWrapper_obj::hx_AnimationClip_Listener_Construct,"hx_AnimationClip_Listener_Construct");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AnimationClip_ListenerWrapper_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AnimationClip_ListenerWrapper_obj::hx_AnimationClip_Listener_Construct,"hx_AnimationClip_Listener_Construct");
};

#endif

Class AnimationClip_ListenerWrapper_obj::__mClass;

void AnimationClip_ListenerWrapper_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.wrapper.AnimationClip_ListenerWrapper"), hx::TCanCast< AnimationClip_ListenerWrapper_obj> ,sStaticFields,sMemberFields,
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

void AnimationClip_ListenerWrapper_obj::__boot()
{
	hx_AnimationClip_Listener_Construct= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AnimationClip_Listener >(),HX_CSTRING("Construct"),(int)1);
}

} // end namespace org
} // end namespace gameplay3d
} // end namespace wrapper
