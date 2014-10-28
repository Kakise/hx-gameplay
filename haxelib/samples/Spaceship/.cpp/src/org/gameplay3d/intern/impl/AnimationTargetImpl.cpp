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
#ifndef INCLUDED_org_gameplay3d_intern_impl_AnimationTargetImpl
#include <org/gameplay3d/intern/impl/AnimationTargetImpl.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_IMutableNativeArray
#include <org/gameplay3d/util/IMutableNativeArray.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_INativeArray
#include <org/gameplay3d/util/INativeArray.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_NativeInterface
#include <org/gameplay3d/util/NativeInterface.h>
#endif
namespace org{
namespace gameplay3d{
namespace intern{
namespace impl{

Void AnimationTargetImpl_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.intern.impl.AnimationTargetImpl","new",0x77f24768,"org.gameplay3d.intern.impl.AnimationTargetImpl.new","org/gameplay3d/intern/impl/AnimationTargetImpl.hx",15,0x7c6fd708)
HX_STACK_THIS(this)
HX_STACK_ARG(nativeObjectInitializer,"nativeObjectInitializer")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(15)
	super::__construct(nativeObjectInitializer,nativeObjectInitializerParams);
}
;
	return null();
}

//AnimationTargetImpl_obj::~AnimationTargetImpl_obj() { }

Dynamic AnimationTargetImpl_obj::__CreateEmpty() { return  new AnimationTargetImpl_obj; }
hx::ObjectPtr< AnimationTargetImpl_obj > AnimationTargetImpl_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< AnimationTargetImpl_obj > result = new AnimationTargetImpl_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic AnimationTargetImpl_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AnimationTargetImpl_obj > result = new AnimationTargetImpl_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *AnimationTargetImpl_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::AnimationTarget_obj)) return operator ::org::gameplay3d::AnimationTarget_obj *();
	if (inType==typeid( ::org::gameplay3d::intern::INativeBinding_obj)) return operator ::org::gameplay3d::intern::INativeBinding_obj *();
	return super::__ToInterface(inType);
}

::org::gameplay3d::Animation AnimationTargetImpl_obj::createAnimation_Str_Prop( ::String id,::org::gameplay3d::Properties animationProperties){
	HX_STACK_FRAME("org.gameplay3d.intern.impl.AnimationTargetImpl","createAnimation_Str_Prop",0x81eb7f60,"org.gameplay3d.intern.impl.AnimationTargetImpl.createAnimation_Str_Prop","org/gameplay3d/intern/impl/AnimationTargetImpl.hx",24,0x7c6fd708)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(animationProperties,"animationProperties")
	HX_STACK_LINE(24)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Animation >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(24)
	Dynamic nativeObject = ::org::gameplay3d::intern::impl::AnimationTargetImpl_obj::hx_AnimationTarget_createAnimation_Str_Prop(this->nativeObject,id,(  (((animationProperties == null()))) ? Dynamic(null()) : Dynamic(animationProperties->nativeObject) ));		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(24)
	if (((nativeObject == null()))){
		HX_STACK_LINE(24)
		return null();
	}
	else{
		HX_STACK_LINE(24)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(24)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(24)
			::org::gameplay3d::Animation result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(24)
			if (((result == null()))){
				HX_STACK_LINE(24)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(24)
				::org::gameplay3d::Animation _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(24)
				result = _g;
				HX_STACK_LINE(24)
				ref->set(result);
			}
			HX_STACK_LINE(24)
			return result;
		}
		else{
			HX_STACK_LINE(24)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(24)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(24)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AnimationTargetImpl_obj,createAnimation_Str_Prop,return )

::org::gameplay3d::Animation AnimationTargetImpl_obj::createAnimation_StrX2( ::String id,::String url){
	HX_STACK_FRAME("org.gameplay3d.intern.impl.AnimationTargetImpl","createAnimation_StrX2",0xf2adba5c,"org.gameplay3d.intern.impl.AnimationTargetImpl.createAnimation_StrX2","org/gameplay3d/intern/impl/AnimationTargetImpl.hx",30,0x7c6fd708)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(url,"url")
	HX_STACK_LINE(30)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Animation >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(30)
	Dynamic nativeObject = ::org::gameplay3d::intern::impl::AnimationTargetImpl_obj::hx_AnimationTarget_createAnimation_StrX2(this->nativeObject,id,url);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(30)
	if (((nativeObject == null()))){
		HX_STACK_LINE(30)
		return null();
	}
	else{
		HX_STACK_LINE(30)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(30)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(30)
			::org::gameplay3d::Animation result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(30)
			if (((result == null()))){
				HX_STACK_LINE(30)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(30)
				::org::gameplay3d::Animation _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(30)
				result = _g;
				HX_STACK_LINE(30)
				ref->set(result);
			}
			HX_STACK_LINE(30)
			return result;
		}
		else{
			HX_STACK_LINE(30)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(30)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(30)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AnimationTargetImpl_obj,createAnimation_StrX2,return )

::org::gameplay3d::Animation AnimationTargetImpl_obj::createAnimation_Str_IntX2_ArrInt_ArrFlt_Int( ::String id,int propertyId,int keyCount,::org::gameplay3d::util::IMutableNativeArray keyTimes,::org::gameplay3d::util::IMutableNativeArray keyValues,int type){
	HX_STACK_FRAME("org.gameplay3d.intern.impl.AnimationTargetImpl","createAnimation_Str_IntX2_ArrInt_ArrFlt_Int",0x62e7dc9b,"org.gameplay3d.intern.impl.AnimationTargetImpl.createAnimation_Str_IntX2_ArrInt_ArrFlt_Int","org/gameplay3d/intern/impl/AnimationTargetImpl.hx",36,0x7c6fd708)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(propertyId,"propertyId")
	HX_STACK_ARG(keyCount,"keyCount")
	HX_STACK_ARG(keyTimes,"keyTimes")
	HX_STACK_ARG(keyValues,"keyValues")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(36)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Animation >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(36)
	Dynamic nativeObject = ::org::gameplay3d::intern::impl::AnimationTargetImpl_obj::hx_AnimationTarget_createAnimation_Str_IntX2_ArrInt_ArrFlt_Int(this->nativeObject,id,propertyId,keyCount,(  (((keyTimes == null()))) ? Dynamic(null()) : Dynamic(keyTimes->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((keyValues == null()))) ? Dynamic(null()) : Dynamic(keyValues->__Field(HX_CSTRING("nativeObject"),true)) ),type);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(36)
	if (((nativeObject == null()))){
		HX_STACK_LINE(36)
		return null();
	}
	else{
		HX_STACK_LINE(36)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(36)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(36)
			::org::gameplay3d::Animation result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(36)
			if (((result == null()))){
				HX_STACK_LINE(36)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(36)
				::org::gameplay3d::Animation _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(36)
				result = _g;
				HX_STACK_LINE(36)
				ref->set(result);
			}
			HX_STACK_LINE(36)
			return result;
		}
		else{
			HX_STACK_LINE(36)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(36)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(36)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC6(AnimationTargetImpl_obj,createAnimation_Str_IntX2_ArrInt_ArrFlt_Int,return )

::org::gameplay3d::Animation AnimationTargetImpl_obj::createAnimation_Str_IntX2_ArrInt_ArrFltX3_Int( ::String id,int propertyId,int keyCount,::org::gameplay3d::util::IMutableNativeArray keyTimes,::org::gameplay3d::util::IMutableNativeArray keyValues,::org::gameplay3d::util::IMutableNativeArray keyInValue,::org::gameplay3d::util::IMutableNativeArray keyOutValue,int type){
	HX_STACK_FRAME("org.gameplay3d.intern.impl.AnimationTargetImpl","createAnimation_Str_IntX2_ArrInt_ArrFltX3_Int",0x50b1bbb6,"org.gameplay3d.intern.impl.AnimationTargetImpl.createAnimation_Str_IntX2_ArrInt_ArrFltX3_Int","org/gameplay3d/intern/impl/AnimationTargetImpl.hx",42,0x7c6fd708)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(propertyId,"propertyId")
	HX_STACK_ARG(keyCount,"keyCount")
	HX_STACK_ARG(keyTimes,"keyTimes")
	HX_STACK_ARG(keyValues,"keyValues")
	HX_STACK_ARG(keyInValue,"keyInValue")
	HX_STACK_ARG(keyOutValue,"keyOutValue")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(42)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Animation >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(42)
	Dynamic nativeObject = ::org::gameplay3d::intern::impl::AnimationTargetImpl_obj::hx_AnimationTarget_createAnimation_Str_IntX2_ArrInt_ArrFltX3_Int(this->nativeObject,id,propertyId,keyCount,(  (((keyTimes == null()))) ? Dynamic(null()) : Dynamic(keyTimes->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((keyValues == null()))) ? Dynamic(null()) : Dynamic(keyValues->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((keyInValue == null()))) ? Dynamic(null()) : Dynamic(keyInValue->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((keyOutValue == null()))) ? Dynamic(null()) : Dynamic(keyOutValue->__Field(HX_CSTRING("nativeObject"),true)) ),type);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(42)
	if (((nativeObject == null()))){
		HX_STACK_LINE(42)
		return null();
	}
	else{
		HX_STACK_LINE(42)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(42)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(42)
			::org::gameplay3d::Animation result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(42)
			if (((result == null()))){
				HX_STACK_LINE(42)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(42)
				::org::gameplay3d::Animation _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(42)
				result = _g;
				HX_STACK_LINE(42)
				ref->set(result);
			}
			HX_STACK_LINE(42)
			return result;
		}
		else{
			HX_STACK_LINE(42)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(42)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(42)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC8(AnimationTargetImpl_obj,createAnimation_Str_IntX2_ArrInt_ArrFltX3_Int,return )

::org::gameplay3d::Animation AnimationTargetImpl_obj::createAnimationFromBy( ::String id,int propertyId,::org::gameplay3d::util::IMutableNativeArray from,::org::gameplay3d::util::IMutableNativeArray by,int type,int duration){
	HX_STACK_FRAME("org.gameplay3d.intern.impl.AnimationTargetImpl","createAnimationFromBy",0xc9dbc171,"org.gameplay3d.intern.impl.AnimationTargetImpl.createAnimationFromBy","org/gameplay3d/intern/impl/AnimationTargetImpl.hx",48,0x7c6fd708)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(propertyId,"propertyId")
	HX_STACK_ARG(from,"from")
	HX_STACK_ARG(by,"by")
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(duration,"duration")
	HX_STACK_LINE(48)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Animation >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(48)
	Dynamic nativeObject = ::org::gameplay3d::intern::impl::AnimationTargetImpl_obj::hx_AnimationTarget_createAnimationFromBy(this->nativeObject,id,propertyId,(  (((from == null()))) ? Dynamic(null()) : Dynamic(from->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((by == null()))) ? Dynamic(null()) : Dynamic(by->__Field(HX_CSTRING("nativeObject"),true)) ),type,duration);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(48)
	if (((nativeObject == null()))){
		HX_STACK_LINE(48)
		return null();
	}
	else{
		HX_STACK_LINE(48)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(48)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(48)
			::org::gameplay3d::Animation result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(48)
			if (((result == null()))){
				HX_STACK_LINE(48)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(48)
				::org::gameplay3d::Animation _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(48)
				result = _g;
				HX_STACK_LINE(48)
				ref->set(result);
			}
			HX_STACK_LINE(48)
			return result;
		}
		else{
			HX_STACK_LINE(48)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(48)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(48)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC6(AnimationTargetImpl_obj,createAnimationFromBy,return )

::org::gameplay3d::Animation AnimationTargetImpl_obj::createAnimationFromTo( ::String id,int propertyId,::org::gameplay3d::util::IMutableNativeArray from,::org::gameplay3d::util::IMutableNativeArray to,int type,int duration){
	HX_STACK_FRAME("org.gameplay3d.intern.impl.AnimationTargetImpl","createAnimationFromTo",0xc9dbd115,"org.gameplay3d.intern.impl.AnimationTargetImpl.createAnimationFromTo","org/gameplay3d/intern/impl/AnimationTargetImpl.hx",54,0x7c6fd708)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(propertyId,"propertyId")
	HX_STACK_ARG(from,"from")
	HX_STACK_ARG(to,"to")
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(duration,"duration")
	HX_STACK_LINE(54)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Animation >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(54)
	Dynamic nativeObject = ::org::gameplay3d::intern::impl::AnimationTargetImpl_obj::hx_AnimationTarget_createAnimationFromTo(this->nativeObject,id,propertyId,(  (((from == null()))) ? Dynamic(null()) : Dynamic(from->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((to == null()))) ? Dynamic(null()) : Dynamic(to->__Field(HX_CSTRING("nativeObject"),true)) ),type,duration);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(54)
	if (((nativeObject == null()))){
		HX_STACK_LINE(54)
		return null();
	}
	else{
		HX_STACK_LINE(54)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(54)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(54)
			::org::gameplay3d::Animation result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(54)
			if (((result == null()))){
				HX_STACK_LINE(54)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(54)
				::org::gameplay3d::Animation _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(54)
				result = _g;
				HX_STACK_LINE(54)
				ref->set(result);
			}
			HX_STACK_LINE(54)
			return result;
		}
		else{
			HX_STACK_LINE(54)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(54)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(54)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC6(AnimationTargetImpl_obj,createAnimationFromTo,return )

Void AnimationTargetImpl_obj::destroyAnimation( ::String id){
{
		HX_STACK_FRAME("org.gameplay3d.intern.impl.AnimationTargetImpl","destroyAnimation",0xe1e2f6a2,"org.gameplay3d.intern.impl.AnimationTargetImpl.destroyAnimation","org/gameplay3d/intern/impl/AnimationTargetImpl.hx",60,0x7c6fd708)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(60)
		::org::gameplay3d::intern::impl::AnimationTargetImpl_obj::hx_AnimationTarget_destroyAnimation(this->nativeObject,id);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AnimationTargetImpl_obj,destroyAnimation,(void))

::org::gameplay3d::Animation AnimationTargetImpl_obj::getAnimation( ::String id){
	HX_STACK_FRAME("org.gameplay3d.intern.impl.AnimationTargetImpl","getAnimation",0x9f39f386,"org.gameplay3d.intern.impl.AnimationTargetImpl.getAnimation","org/gameplay3d/intern/impl/AnimationTargetImpl.hx",66,0x7c6fd708)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(66)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Animation >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(66)
	Dynamic nativeObject = ::org::gameplay3d::intern::impl::AnimationTargetImpl_obj::hx_AnimationTarget_getAnimation(this->nativeObject,id);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(66)
	if (((nativeObject == null()))){
		HX_STACK_LINE(66)
		return null();
	}
	else{
		HX_STACK_LINE(66)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(66)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(66)
			::org::gameplay3d::Animation result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(66)
			if (((result == null()))){
				HX_STACK_LINE(66)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(66)
				::org::gameplay3d::Animation _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(66)
				result = _g;
				HX_STACK_LINE(66)
				ref->set(result);
			}
			HX_STACK_LINE(66)
			return result;
		}
		else{
			HX_STACK_LINE(66)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(66)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(66)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AnimationTargetImpl_obj,getAnimation,return )

int AnimationTargetImpl_obj::getAnimationPropertyComponentCount( int propertyId){
	HX_STACK_FRAME("org.gameplay3d.intern.impl.AnimationTargetImpl","getAnimationPropertyComponentCount",0x75c5da2d,"org.gameplay3d.intern.impl.AnimationTargetImpl.getAnimationPropertyComponentCount","org/gameplay3d/intern/impl/AnimationTargetImpl.hx",72,0x7c6fd708)
	HX_STACK_THIS(this)
	HX_STACK_ARG(propertyId,"propertyId")
	HX_STACK_LINE(72)
	return ::org::gameplay3d::intern::impl::AnimationTargetImpl_obj::hx_AnimationTarget_getAnimationPropertyComponentCount(this->nativeObject,propertyId);
}


HX_DEFINE_DYNAMIC_FUNC1(AnimationTargetImpl_obj,getAnimationPropertyComponentCount,return )

Void AnimationTargetImpl_obj::getAnimationPropertyValue( int propertyId,::org::gameplay3d::AnimationValue value){
{
		HX_STACK_FRAME("org.gameplay3d.intern.impl.AnimationTargetImpl","getAnimationPropertyValue",0xc1f27376,"org.gameplay3d.intern.impl.AnimationTargetImpl.getAnimationPropertyValue","org/gameplay3d/intern/impl/AnimationTargetImpl.hx",78,0x7c6fd708)
		HX_STACK_THIS(this)
		HX_STACK_ARG(propertyId,"propertyId")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(78)
		::org::gameplay3d::intern::impl::AnimationTargetImpl_obj::hx_AnimationTarget_getAnimationPropertyValue(this->nativeObject,propertyId,(  (((value == null()))) ? Dynamic(null()) : Dynamic(value->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AnimationTargetImpl_obj,getAnimationPropertyValue,(void))

Void AnimationTargetImpl_obj::setAnimationPropertyValue( int propertyId,::org::gameplay3d::AnimationValue value,hx::Null< Float >  __o_blendWeight){
Float blendWeight = __o_blendWeight.Default(1.0);
	HX_STACK_FRAME("org.gameplay3d.intern.impl.AnimationTargetImpl","setAnimationPropertyValue",0x2e493782,"org.gameplay3d.intern.impl.AnimationTargetImpl.setAnimationPropertyValue","org/gameplay3d/intern/impl/AnimationTargetImpl.hx",84,0x7c6fd708)
	HX_STACK_THIS(this)
	HX_STACK_ARG(propertyId,"propertyId")
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(blendWeight,"blendWeight")
{
		HX_STACK_LINE(84)
		::org::gameplay3d::intern::impl::AnimationTargetImpl_obj::hx_AnimationTarget_setAnimationPropertyValue(this->nativeObject,propertyId,(  (((value == null()))) ? Dynamic(null()) : Dynamic(value->nativeObject) ),blendWeight);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(AnimationTargetImpl_obj,setAnimationPropertyValue,(void))

Dynamic AnimationTargetImpl_obj::hx_AnimationTarget_createAnimation_Str_Prop;

Dynamic AnimationTargetImpl_obj::hx_AnimationTarget_createAnimation_StrX2;

Dynamic AnimationTargetImpl_obj::hx_AnimationTarget_createAnimation_Str_IntX2_ArrInt_ArrFlt_Int;

Dynamic AnimationTargetImpl_obj::hx_AnimationTarget_createAnimation_Str_IntX2_ArrInt_ArrFltX3_Int;

Dynamic AnimationTargetImpl_obj::hx_AnimationTarget_createAnimationFromBy;

Dynamic AnimationTargetImpl_obj::hx_AnimationTarget_createAnimationFromTo;

Dynamic AnimationTargetImpl_obj::hx_AnimationTarget_destroyAnimation;

Dynamic AnimationTargetImpl_obj::hx_AnimationTarget_getAnimation;

Dynamic AnimationTargetImpl_obj::hx_AnimationTarget_getAnimationPropertyComponentCount;

Dynamic AnimationTargetImpl_obj::hx_AnimationTarget_getAnimationPropertyValue;

Dynamic AnimationTargetImpl_obj::hx_AnimationTarget_setAnimationPropertyValue;


AnimationTargetImpl_obj::AnimationTargetImpl_obj()
{
}

Dynamic AnimationTargetImpl_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"getAnimation") ) { return getAnimation_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"destroyAnimation") ) { return destroyAnimation_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"createAnimation_StrX2") ) { return createAnimation_StrX2_dyn(); }
		if (HX_FIELD_EQ(inName,"createAnimationFromBy") ) { return createAnimationFromBy_dyn(); }
		if (HX_FIELD_EQ(inName,"createAnimationFromTo") ) { return createAnimationFromTo_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"createAnimation_Str_Prop") ) { return createAnimation_Str_Prop_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"getAnimationPropertyValue") ) { return getAnimationPropertyValue_dyn(); }
		if (HX_FIELD_EQ(inName,"setAnimationPropertyValue") ) { return setAnimationPropertyValue_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"hx_AnimationTarget_getAnimation") ) { return hx_AnimationTarget_getAnimation; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"getAnimationPropertyComponentCount") ) { return getAnimationPropertyComponentCount_dyn(); }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"hx_AnimationTarget_destroyAnimation") ) { return hx_AnimationTarget_destroyAnimation; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"hx_AnimationTarget_createAnimation_StrX2") ) { return hx_AnimationTarget_createAnimation_StrX2; }
		if (HX_FIELD_EQ(inName,"hx_AnimationTarget_createAnimationFromBy") ) { return hx_AnimationTarget_createAnimationFromBy; }
		if (HX_FIELD_EQ(inName,"hx_AnimationTarget_createAnimationFromTo") ) { return hx_AnimationTarget_createAnimationFromTo; }
		break;
	case 43:
		if (HX_FIELD_EQ(inName,"hx_AnimationTarget_createAnimation_Str_Prop") ) { return hx_AnimationTarget_createAnimation_Str_Prop; }
		if (HX_FIELD_EQ(inName,"createAnimation_Str_IntX2_ArrInt_ArrFlt_Int") ) { return createAnimation_Str_IntX2_ArrInt_ArrFlt_Int_dyn(); }
		break;
	case 44:
		if (HX_FIELD_EQ(inName,"hx_AnimationTarget_getAnimationPropertyValue") ) { return hx_AnimationTarget_getAnimationPropertyValue; }
		if (HX_FIELD_EQ(inName,"hx_AnimationTarget_setAnimationPropertyValue") ) { return hx_AnimationTarget_setAnimationPropertyValue; }
		break;
	case 45:
		if (HX_FIELD_EQ(inName,"createAnimation_Str_IntX2_ArrInt_ArrFltX3_Int") ) { return createAnimation_Str_IntX2_ArrInt_ArrFltX3_Int_dyn(); }
		break;
	case 53:
		if (HX_FIELD_EQ(inName,"hx_AnimationTarget_getAnimationPropertyComponentCount") ) { return hx_AnimationTarget_getAnimationPropertyComponentCount; }
		break;
	case 62:
		if (HX_FIELD_EQ(inName,"hx_AnimationTarget_createAnimation_Str_IntX2_ArrInt_ArrFlt_Int") ) { return hx_AnimationTarget_createAnimation_Str_IntX2_ArrInt_ArrFlt_Int; }
		break;
	case 64:
		if (HX_FIELD_EQ(inName,"hx_AnimationTarget_createAnimation_Str_IntX2_ArrInt_ArrFltX3_Int") ) { return hx_AnimationTarget_createAnimation_Str_IntX2_ArrInt_ArrFltX3_Int; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AnimationTargetImpl_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 31:
		if (HX_FIELD_EQ(inName,"hx_AnimationTarget_getAnimation") ) { hx_AnimationTarget_getAnimation=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"hx_AnimationTarget_destroyAnimation") ) { hx_AnimationTarget_destroyAnimation=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"hx_AnimationTarget_createAnimation_StrX2") ) { hx_AnimationTarget_createAnimation_StrX2=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_AnimationTarget_createAnimationFromBy") ) { hx_AnimationTarget_createAnimationFromBy=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_AnimationTarget_createAnimationFromTo") ) { hx_AnimationTarget_createAnimationFromTo=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 43:
		if (HX_FIELD_EQ(inName,"hx_AnimationTarget_createAnimation_Str_Prop") ) { hx_AnimationTarget_createAnimation_Str_Prop=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 44:
		if (HX_FIELD_EQ(inName,"hx_AnimationTarget_getAnimationPropertyValue") ) { hx_AnimationTarget_getAnimationPropertyValue=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_AnimationTarget_setAnimationPropertyValue") ) { hx_AnimationTarget_setAnimationPropertyValue=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 53:
		if (HX_FIELD_EQ(inName,"hx_AnimationTarget_getAnimationPropertyComponentCount") ) { hx_AnimationTarget_getAnimationPropertyComponentCount=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 62:
		if (HX_FIELD_EQ(inName,"hx_AnimationTarget_createAnimation_Str_IntX2_ArrInt_ArrFlt_Int") ) { hx_AnimationTarget_createAnimation_Str_IntX2_ArrInt_ArrFlt_Int=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 64:
		if (HX_FIELD_EQ(inName,"hx_AnimationTarget_createAnimation_Str_IntX2_ArrInt_ArrFltX3_Int") ) { hx_AnimationTarget_createAnimation_Str_IntX2_ArrInt_ArrFltX3_Int=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AnimationTargetImpl_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("hx_AnimationTarget_createAnimation_Str_Prop"),
	HX_CSTRING("hx_AnimationTarget_createAnimation_StrX2"),
	HX_CSTRING("hx_AnimationTarget_createAnimation_Str_IntX2_ArrInt_ArrFlt_Int"),
	HX_CSTRING("hx_AnimationTarget_createAnimation_Str_IntX2_ArrInt_ArrFltX3_Int"),
	HX_CSTRING("hx_AnimationTarget_createAnimationFromBy"),
	HX_CSTRING("hx_AnimationTarget_createAnimationFromTo"),
	HX_CSTRING("hx_AnimationTarget_destroyAnimation"),
	HX_CSTRING("hx_AnimationTarget_getAnimation"),
	HX_CSTRING("hx_AnimationTarget_getAnimationPropertyComponentCount"),
	HX_CSTRING("hx_AnimationTarget_getAnimationPropertyValue"),
	HX_CSTRING("hx_AnimationTarget_setAnimationPropertyValue"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

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
	HX_MARK_MEMBER_NAME(AnimationTargetImpl_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AnimationTargetImpl_obj::hx_AnimationTarget_createAnimation_Str_Prop,"hx_AnimationTarget_createAnimation_Str_Prop");
	HX_MARK_MEMBER_NAME(AnimationTargetImpl_obj::hx_AnimationTarget_createAnimation_StrX2,"hx_AnimationTarget_createAnimation_StrX2");
	HX_MARK_MEMBER_NAME(AnimationTargetImpl_obj::hx_AnimationTarget_createAnimation_Str_IntX2_ArrInt_ArrFlt_Int,"hx_AnimationTarget_createAnimation_Str_IntX2_ArrInt_ArrFlt_Int");
	HX_MARK_MEMBER_NAME(AnimationTargetImpl_obj::hx_AnimationTarget_createAnimation_Str_IntX2_ArrInt_ArrFltX3_Int,"hx_AnimationTarget_createAnimation_Str_IntX2_ArrInt_ArrFltX3_Int");
	HX_MARK_MEMBER_NAME(AnimationTargetImpl_obj::hx_AnimationTarget_createAnimationFromBy,"hx_AnimationTarget_createAnimationFromBy");
	HX_MARK_MEMBER_NAME(AnimationTargetImpl_obj::hx_AnimationTarget_createAnimationFromTo,"hx_AnimationTarget_createAnimationFromTo");
	HX_MARK_MEMBER_NAME(AnimationTargetImpl_obj::hx_AnimationTarget_destroyAnimation,"hx_AnimationTarget_destroyAnimation");
	HX_MARK_MEMBER_NAME(AnimationTargetImpl_obj::hx_AnimationTarget_getAnimation,"hx_AnimationTarget_getAnimation");
	HX_MARK_MEMBER_NAME(AnimationTargetImpl_obj::hx_AnimationTarget_getAnimationPropertyComponentCount,"hx_AnimationTarget_getAnimationPropertyComponentCount");
	HX_MARK_MEMBER_NAME(AnimationTargetImpl_obj::hx_AnimationTarget_getAnimationPropertyValue,"hx_AnimationTarget_getAnimationPropertyValue");
	HX_MARK_MEMBER_NAME(AnimationTargetImpl_obj::hx_AnimationTarget_setAnimationPropertyValue,"hx_AnimationTarget_setAnimationPropertyValue");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AnimationTargetImpl_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AnimationTargetImpl_obj::hx_AnimationTarget_createAnimation_Str_Prop,"hx_AnimationTarget_createAnimation_Str_Prop");
	HX_VISIT_MEMBER_NAME(AnimationTargetImpl_obj::hx_AnimationTarget_createAnimation_StrX2,"hx_AnimationTarget_createAnimation_StrX2");
	HX_VISIT_MEMBER_NAME(AnimationTargetImpl_obj::hx_AnimationTarget_createAnimation_Str_IntX2_ArrInt_ArrFlt_Int,"hx_AnimationTarget_createAnimation_Str_IntX2_ArrInt_ArrFlt_Int");
	HX_VISIT_MEMBER_NAME(AnimationTargetImpl_obj::hx_AnimationTarget_createAnimation_Str_IntX2_ArrInt_ArrFltX3_Int,"hx_AnimationTarget_createAnimation_Str_IntX2_ArrInt_ArrFltX3_Int");
	HX_VISIT_MEMBER_NAME(AnimationTargetImpl_obj::hx_AnimationTarget_createAnimationFromBy,"hx_AnimationTarget_createAnimationFromBy");
	HX_VISIT_MEMBER_NAME(AnimationTargetImpl_obj::hx_AnimationTarget_createAnimationFromTo,"hx_AnimationTarget_createAnimationFromTo");
	HX_VISIT_MEMBER_NAME(AnimationTargetImpl_obj::hx_AnimationTarget_destroyAnimation,"hx_AnimationTarget_destroyAnimation");
	HX_VISIT_MEMBER_NAME(AnimationTargetImpl_obj::hx_AnimationTarget_getAnimation,"hx_AnimationTarget_getAnimation");
	HX_VISIT_MEMBER_NAME(AnimationTargetImpl_obj::hx_AnimationTarget_getAnimationPropertyComponentCount,"hx_AnimationTarget_getAnimationPropertyComponentCount");
	HX_VISIT_MEMBER_NAME(AnimationTargetImpl_obj::hx_AnimationTarget_getAnimationPropertyValue,"hx_AnimationTarget_getAnimationPropertyValue");
	HX_VISIT_MEMBER_NAME(AnimationTargetImpl_obj::hx_AnimationTarget_setAnimationPropertyValue,"hx_AnimationTarget_setAnimationPropertyValue");
};

#endif

Class AnimationTargetImpl_obj::__mClass;

void AnimationTargetImpl_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.intern.impl.AnimationTargetImpl"), hx::TCanCast< AnimationTargetImpl_obj> ,sStaticFields,sMemberFields,
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

void AnimationTargetImpl_obj::__boot()
{
	hx_AnimationTarget_createAnimation_Str_Prop= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AnimationTarget >(),HX_CSTRING("createAnimation_Str_Prop"),(int)3);
	hx_AnimationTarget_createAnimation_StrX2= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AnimationTarget >(),HX_CSTRING("createAnimation_StrX2"),(int)3);
	hx_AnimationTarget_createAnimation_Str_IntX2_ArrInt_ArrFlt_Int= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AnimationTarget >(),HX_CSTRING("createAnimation_Str_IntX2_ArrInt_ArrFlt_Int"),(int)-1);
	hx_AnimationTarget_createAnimation_Str_IntX2_ArrInt_ArrFltX3_Int= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AnimationTarget >(),HX_CSTRING("createAnimation_Str_IntX2_ArrInt_ArrFltX3_Int"),(int)-1);
	hx_AnimationTarget_createAnimationFromBy= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AnimationTarget >(),HX_CSTRING("createAnimationFromBy"),(int)-1);
	hx_AnimationTarget_createAnimationFromTo= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AnimationTarget >(),HX_CSTRING("createAnimationFromTo"),(int)-1);
	hx_AnimationTarget_destroyAnimation= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AnimationTarget >(),HX_CSTRING("destroyAnimation"),(int)2);
	hx_AnimationTarget_getAnimation= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AnimationTarget >(),HX_CSTRING("getAnimation"),(int)2);
	hx_AnimationTarget_getAnimationPropertyComponentCount= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AnimationTarget >(),HX_CSTRING("getAnimationPropertyComponentCount"),(int)2);
	hx_AnimationTarget_getAnimationPropertyValue= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AnimationTarget >(),HX_CSTRING("getAnimationPropertyValue"),(int)3);
	hx_AnimationTarget_setAnimationPropertyValue= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AnimationTarget >(),HX_CSTRING("setAnimationPropertyValue"),(int)4);
}

} // end namespace org
} // end namespace gameplay3d
} // end namespace intern
} // end namespace impl
