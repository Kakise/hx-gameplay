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
#ifndef INCLUDED_org_gameplay3d_ScriptTarget
#include <org/gameplay3d/ScriptTarget.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_INativeBinding
#include <org/gameplay3d/intern/INativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_NativeBinding
#include <org/gameplay3d/intern/NativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_impl_AnimationTarget_ScriptTarget
#include <org/gameplay3d/intern/impl/AnimationTarget_ScriptTarget.h>
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

Void AnimationTarget_ScriptTarget_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.intern.impl.AnimationTarget_ScriptTarget","new",0x0ab0aef7,"org.gameplay3d.intern.impl.AnimationTarget_ScriptTarget.new","org/gameplay3d/intern/impl/AnimationTarget_ScriptTarget.hx",19,0x7ed12259)
HX_STACK_THIS(this)
HX_STACK_ARG(nativeObjectInitializer,"nativeObjectInitializer")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(19)
	super::__construct(nativeObjectInitializer,nativeObjectInitializerParams);
}
;
	return null();
}

//AnimationTarget_ScriptTarget_obj::~AnimationTarget_ScriptTarget_obj() { }

Dynamic AnimationTarget_ScriptTarget_obj::__CreateEmpty() { return  new AnimationTarget_ScriptTarget_obj; }
hx::ObjectPtr< AnimationTarget_ScriptTarget_obj > AnimationTarget_ScriptTarget_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< AnimationTarget_ScriptTarget_obj > result = new AnimationTarget_ScriptTarget_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic AnimationTarget_ScriptTarget_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AnimationTarget_ScriptTarget_obj > result = new AnimationTarget_ScriptTarget_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *AnimationTarget_ScriptTarget_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::AnimationTarget_obj)) return operator ::org::gameplay3d::AnimationTarget_obj *();
	if (inType==typeid( ::org::gameplay3d::intern::INativeBinding_obj)) return operator ::org::gameplay3d::intern::INativeBinding_obj *();
	if (inType==typeid( ::org::gameplay3d::ScriptTarget_obj)) return operator ::org::gameplay3d::ScriptTarget_obj *();
	return super::__ToInterface(inType);
}

::org::gameplay3d::Animation AnimationTarget_ScriptTarget_obj::createAnimation_Str_Prop( ::String id,::org::gameplay3d::Properties animationProperties){
	HX_STACK_FRAME("org.gameplay3d.intern.impl.AnimationTarget_ScriptTarget","createAnimation_Str_Prop",0x8a154371,"org.gameplay3d.intern.impl.AnimationTarget_ScriptTarget.createAnimation_Str_Prop","org/gameplay3d/intern/impl/AnimationTarget_ScriptTarget.hx",28,0x7ed12259)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(animationProperties,"animationProperties")
	HX_STACK_LINE(28)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Animation >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(28)
	Dynamic nativeObject = ::org::gameplay3d::intern::impl::AnimationTarget_ScriptTarget_obj::hx_AnimationTarget_createAnimation_Str_Prop(this->nativeObject,id,(  (((animationProperties == null()))) ? Dynamic(null()) : Dynamic(animationProperties->nativeObject) ));		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(28)
	if (((nativeObject == null()))){
		HX_STACK_LINE(28)
		return null();
	}
	else{
		HX_STACK_LINE(28)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(28)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(28)
			::org::gameplay3d::Animation result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(28)
			if (((result == null()))){
				HX_STACK_LINE(28)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(28)
				::org::gameplay3d::Animation _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(28)
				result = _g;
				HX_STACK_LINE(28)
				ref->set(result);
			}
			HX_STACK_LINE(28)
			return result;
		}
		else{
			HX_STACK_LINE(28)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(28)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AnimationTarget_ScriptTarget_obj,createAnimation_Str_Prop,return )

::org::gameplay3d::Animation AnimationTarget_ScriptTarget_obj::createAnimation_StrX2( ::String id,::String url){
	HX_STACK_FRAME("org.gameplay3d.intern.impl.AnimationTarget_ScriptTarget","createAnimation_StrX2",0x226031ab,"org.gameplay3d.intern.impl.AnimationTarget_ScriptTarget.createAnimation_StrX2","org/gameplay3d/intern/impl/AnimationTarget_ScriptTarget.hx",34,0x7ed12259)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(url,"url")
	HX_STACK_LINE(34)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Animation >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(34)
	Dynamic nativeObject = ::org::gameplay3d::intern::impl::AnimationTarget_ScriptTarget_obj::hx_AnimationTarget_createAnimation_StrX2(this->nativeObject,id,url);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(34)
	if (((nativeObject == null()))){
		HX_STACK_LINE(34)
		return null();
	}
	else{
		HX_STACK_LINE(34)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(34)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(34)
			::org::gameplay3d::Animation result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(34)
			if (((result == null()))){
				HX_STACK_LINE(34)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(34)
				::org::gameplay3d::Animation _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(34)
				result = _g;
				HX_STACK_LINE(34)
				ref->set(result);
			}
			HX_STACK_LINE(34)
			return result;
		}
		else{
			HX_STACK_LINE(34)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(34)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(34)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AnimationTarget_ScriptTarget_obj,createAnimation_StrX2,return )

::org::gameplay3d::Animation AnimationTarget_ScriptTarget_obj::createAnimation_Str_IntX2_ArrInt_ArrFlt_Int( ::String id,int propertyId,int keyCount,::org::gameplay3d::util::IMutableNativeArray keyTimes,::org::gameplay3d::util::IMutableNativeArray keyValues,int type){
	HX_STACK_FRAME("org.gameplay3d.intern.impl.AnimationTarget_ScriptTarget","createAnimation_Str_IntX2_ArrInt_ArrFlt_Int",0x9317872a,"org.gameplay3d.intern.impl.AnimationTarget_ScriptTarget.createAnimation_Str_IntX2_ArrInt_ArrFlt_Int","org/gameplay3d/intern/impl/AnimationTarget_ScriptTarget.hx",40,0x7ed12259)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(propertyId,"propertyId")
	HX_STACK_ARG(keyCount,"keyCount")
	HX_STACK_ARG(keyTimes,"keyTimes")
	HX_STACK_ARG(keyValues,"keyValues")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(40)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Animation >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(40)
	Dynamic nativeObject = ::org::gameplay3d::intern::impl::AnimationTarget_ScriptTarget_obj::hx_AnimationTarget_createAnimation_Str_IntX2_ArrInt_ArrFlt_Int(this->nativeObject,id,propertyId,keyCount,(  (((keyTimes == null()))) ? Dynamic(null()) : Dynamic(keyTimes->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((keyValues == null()))) ? Dynamic(null()) : Dynamic(keyValues->__Field(HX_CSTRING("nativeObject"),true)) ),type);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(40)
	if (((nativeObject == null()))){
		HX_STACK_LINE(40)
		return null();
	}
	else{
		HX_STACK_LINE(40)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(40)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(40)
			::org::gameplay3d::Animation result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(40)
			if (((result == null()))){
				HX_STACK_LINE(40)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(40)
				::org::gameplay3d::Animation _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(40)
				result = _g;
				HX_STACK_LINE(40)
				ref->set(result);
			}
			HX_STACK_LINE(40)
			return result;
		}
		else{
			HX_STACK_LINE(40)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(40)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(40)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC6(AnimationTarget_ScriptTarget_obj,createAnimation_Str_IntX2_ArrInt_ArrFlt_Int,return )

::org::gameplay3d::Animation AnimationTarget_ScriptTarget_obj::createAnimation_Str_IntX2_ArrInt_ArrFltX3_Int( ::String id,int propertyId,int keyCount,::org::gameplay3d::util::IMutableNativeArray keyTimes,::org::gameplay3d::util::IMutableNativeArray keyValues,::org::gameplay3d::util::IMutableNativeArray keyInValue,::org::gameplay3d::util::IMutableNativeArray keyOutValue,int type){
	HX_STACK_FRAME("org.gameplay3d.intern.impl.AnimationTarget_ScriptTarget","createAnimation_Str_IntX2_ArrInt_ArrFltX3_Int",0xac0c6805,"org.gameplay3d.intern.impl.AnimationTarget_ScriptTarget.createAnimation_Str_IntX2_ArrInt_ArrFltX3_Int","org/gameplay3d/intern/impl/AnimationTarget_ScriptTarget.hx",46,0x7ed12259)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(propertyId,"propertyId")
	HX_STACK_ARG(keyCount,"keyCount")
	HX_STACK_ARG(keyTimes,"keyTimes")
	HX_STACK_ARG(keyValues,"keyValues")
	HX_STACK_ARG(keyInValue,"keyInValue")
	HX_STACK_ARG(keyOutValue,"keyOutValue")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(46)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Animation >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(46)
	Dynamic nativeObject = ::org::gameplay3d::intern::impl::AnimationTarget_ScriptTarget_obj::hx_AnimationTarget_createAnimation_Str_IntX2_ArrInt_ArrFltX3_Int(this->nativeObject,id,propertyId,keyCount,(  (((keyTimes == null()))) ? Dynamic(null()) : Dynamic(keyTimes->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((keyValues == null()))) ? Dynamic(null()) : Dynamic(keyValues->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((keyInValue == null()))) ? Dynamic(null()) : Dynamic(keyInValue->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((keyOutValue == null()))) ? Dynamic(null()) : Dynamic(keyOutValue->__Field(HX_CSTRING("nativeObject"),true)) ),type);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(46)
	if (((nativeObject == null()))){
		HX_STACK_LINE(46)
		return null();
	}
	else{
		HX_STACK_LINE(46)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(46)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(46)
			::org::gameplay3d::Animation result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(46)
			if (((result == null()))){
				HX_STACK_LINE(46)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(46)
				::org::gameplay3d::Animation _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(46)
				result = _g;
				HX_STACK_LINE(46)
				ref->set(result);
			}
			HX_STACK_LINE(46)
			return result;
		}
		else{
			HX_STACK_LINE(46)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(46)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(46)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC8(AnimationTarget_ScriptTarget_obj,createAnimation_Str_IntX2_ArrInt_ArrFltX3_Int,return )

::org::gameplay3d::Animation AnimationTarget_ScriptTarget_obj::createAnimationFromBy( ::String id,int propertyId,::org::gameplay3d::util::IMutableNativeArray from,::org::gameplay3d::util::IMutableNativeArray by,int type,int duration){
	HX_STACK_FRAME("org.gameplay3d.intern.impl.AnimationTarget_ScriptTarget","createAnimationFromBy",0xf98e38c0,"org.gameplay3d.intern.impl.AnimationTarget_ScriptTarget.createAnimationFromBy","org/gameplay3d/intern/impl/AnimationTarget_ScriptTarget.hx",52,0x7ed12259)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(propertyId,"propertyId")
	HX_STACK_ARG(from,"from")
	HX_STACK_ARG(by,"by")
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(duration,"duration")
	HX_STACK_LINE(52)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Animation >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(52)
	Dynamic nativeObject = ::org::gameplay3d::intern::impl::AnimationTarget_ScriptTarget_obj::hx_AnimationTarget_createAnimationFromBy(this->nativeObject,id,propertyId,(  (((from == null()))) ? Dynamic(null()) : Dynamic(from->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((by == null()))) ? Dynamic(null()) : Dynamic(by->__Field(HX_CSTRING("nativeObject"),true)) ),type,duration);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(52)
	if (((nativeObject == null()))){
		HX_STACK_LINE(52)
		return null();
	}
	else{
		HX_STACK_LINE(52)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(52)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(52)
			::org::gameplay3d::Animation result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(52)
			if (((result == null()))){
				HX_STACK_LINE(52)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(52)
				::org::gameplay3d::Animation _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(52)
				result = _g;
				HX_STACK_LINE(52)
				ref->set(result);
			}
			HX_STACK_LINE(52)
			return result;
		}
		else{
			HX_STACK_LINE(52)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(52)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(52)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC6(AnimationTarget_ScriptTarget_obj,createAnimationFromBy,return )

::org::gameplay3d::Animation AnimationTarget_ScriptTarget_obj::createAnimationFromTo( ::String id,int propertyId,::org::gameplay3d::util::IMutableNativeArray from,::org::gameplay3d::util::IMutableNativeArray to,int type,int duration){
	HX_STACK_FRAME("org.gameplay3d.intern.impl.AnimationTarget_ScriptTarget","createAnimationFromTo",0xf98e4864,"org.gameplay3d.intern.impl.AnimationTarget_ScriptTarget.createAnimationFromTo","org/gameplay3d/intern/impl/AnimationTarget_ScriptTarget.hx",58,0x7ed12259)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(propertyId,"propertyId")
	HX_STACK_ARG(from,"from")
	HX_STACK_ARG(to,"to")
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(duration,"duration")
	HX_STACK_LINE(58)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Animation >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(58)
	Dynamic nativeObject = ::org::gameplay3d::intern::impl::AnimationTarget_ScriptTarget_obj::hx_AnimationTarget_createAnimationFromTo(this->nativeObject,id,propertyId,(  (((from == null()))) ? Dynamic(null()) : Dynamic(from->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((to == null()))) ? Dynamic(null()) : Dynamic(to->__Field(HX_CSTRING("nativeObject"),true)) ),type,duration);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(58)
	if (((nativeObject == null()))){
		HX_STACK_LINE(58)
		return null();
	}
	else{
		HX_STACK_LINE(58)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(58)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(58)
			::org::gameplay3d::Animation result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(58)
			if (((result == null()))){
				HX_STACK_LINE(58)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(58)
				::org::gameplay3d::Animation _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(58)
				result = _g;
				HX_STACK_LINE(58)
				ref->set(result);
			}
			HX_STACK_LINE(58)
			return result;
		}
		else{
			HX_STACK_LINE(58)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(58)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(58)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC6(AnimationTarget_ScriptTarget_obj,createAnimationFromTo,return )

Void AnimationTarget_ScriptTarget_obj::destroyAnimation( ::String id){
{
		HX_STACK_FRAME("org.gameplay3d.intern.impl.AnimationTarget_ScriptTarget","destroyAnimation",0x6bc1c1b3,"org.gameplay3d.intern.impl.AnimationTarget_ScriptTarget.destroyAnimation","org/gameplay3d/intern/impl/AnimationTarget_ScriptTarget.hx",64,0x7ed12259)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(64)
		::org::gameplay3d::intern::impl::AnimationTarget_ScriptTarget_obj::hx_AnimationTarget_destroyAnimation(this->nativeObject,id);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AnimationTarget_ScriptTarget_obj,destroyAnimation,(void))

::org::gameplay3d::Animation AnimationTarget_ScriptTarget_obj::getAnimation( ::String id){
	HX_STACK_FRAME("org.gameplay3d.intern.impl.AnimationTarget_ScriptTarget","getAnimation",0x248fa217,"org.gameplay3d.intern.impl.AnimationTarget_ScriptTarget.getAnimation","org/gameplay3d/intern/impl/AnimationTarget_ScriptTarget.hx",70,0x7ed12259)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(70)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Animation >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(70)
	Dynamic nativeObject = ::org::gameplay3d::intern::impl::AnimationTarget_ScriptTarget_obj::hx_AnimationTarget_getAnimation(this->nativeObject,id);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(70)
	if (((nativeObject == null()))){
		HX_STACK_LINE(70)
		return null();
	}
	else{
		HX_STACK_LINE(70)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(70)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(70)
			::org::gameplay3d::Animation result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(70)
			if (((result == null()))){
				HX_STACK_LINE(70)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(70)
				::org::gameplay3d::Animation _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(70)
				result = _g;
				HX_STACK_LINE(70)
				ref->set(result);
			}
			HX_STACK_LINE(70)
			return result;
		}
		else{
			HX_STACK_LINE(70)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(70)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(70)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AnimationTarget_ScriptTarget_obj,getAnimation,return )

int AnimationTarget_ScriptTarget_obj::getAnimationPropertyComponentCount( int propertyId){
	HX_STACK_FRAME("org.gameplay3d.intern.impl.AnimationTarget_ScriptTarget","getAnimationPropertyComponentCount",0x8411bd7e,"org.gameplay3d.intern.impl.AnimationTarget_ScriptTarget.getAnimationPropertyComponentCount","org/gameplay3d/intern/impl/AnimationTarget_ScriptTarget.hx",76,0x7ed12259)
	HX_STACK_THIS(this)
	HX_STACK_ARG(propertyId,"propertyId")
	HX_STACK_LINE(76)
	return ::org::gameplay3d::intern::impl::AnimationTarget_ScriptTarget_obj::hx_AnimationTarget_getAnimationPropertyComponentCount(this->nativeObject,propertyId);
}


HX_DEFINE_DYNAMIC_FUNC1(AnimationTarget_ScriptTarget_obj,getAnimationPropertyComponentCount,return )

Void AnimationTarget_ScriptTarget_obj::getAnimationPropertyValue( int propertyId,::org::gameplay3d::AnimationValue value){
{
		HX_STACK_FRAME("org.gameplay3d.intern.impl.AnimationTarget_ScriptTarget","getAnimationPropertyValue",0xde543e45,"org.gameplay3d.intern.impl.AnimationTarget_ScriptTarget.getAnimationPropertyValue","org/gameplay3d/intern/impl/AnimationTarget_ScriptTarget.hx",82,0x7ed12259)
		HX_STACK_THIS(this)
		HX_STACK_ARG(propertyId,"propertyId")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(82)
		::org::gameplay3d::intern::impl::AnimationTarget_ScriptTarget_obj::hx_AnimationTarget_getAnimationPropertyValue(this->nativeObject,propertyId,(  (((value == null()))) ? Dynamic(null()) : Dynamic(value->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AnimationTarget_ScriptTarget_obj,getAnimationPropertyValue,(void))

Void AnimationTarget_ScriptTarget_obj::setAnimationPropertyValue( int propertyId,::org::gameplay3d::AnimationValue value,hx::Null< Float >  __o_blendWeight){
Float blendWeight = __o_blendWeight.Default(1.0);
	HX_STACK_FRAME("org.gameplay3d.intern.impl.AnimationTarget_ScriptTarget","setAnimationPropertyValue",0x4aab0251,"org.gameplay3d.intern.impl.AnimationTarget_ScriptTarget.setAnimationPropertyValue","org/gameplay3d/intern/impl/AnimationTarget_ScriptTarget.hx",88,0x7ed12259)
	HX_STACK_THIS(this)
	HX_STACK_ARG(propertyId,"propertyId")
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(blendWeight,"blendWeight")
{
		HX_STACK_LINE(88)
		::org::gameplay3d::intern::impl::AnimationTarget_ScriptTarget_obj::hx_AnimationTarget_setAnimationPropertyValue(this->nativeObject,propertyId,(  (((value == null()))) ? Dynamic(null()) : Dynamic(value->nativeObject) ),blendWeight);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(AnimationTarget_ScriptTarget_obj,setAnimationPropertyValue,(void))

Void AnimationTarget_ScriptTarget_obj::addScriptCallback( ::String eventName,::String _function){
{
		HX_STACK_FRAME("org.gameplay3d.intern.impl.AnimationTarget_ScriptTarget","addScriptCallback",0xf0995dc8,"org.gameplay3d.intern.impl.AnimationTarget_ScriptTarget.addScriptCallback","org/gameplay3d/intern/impl/AnimationTarget_ScriptTarget.hx",94,0x7ed12259)
		HX_STACK_THIS(this)
		HX_STACK_ARG(eventName,"eventName")
		HX_STACK_ARG(_function,"_function")
		HX_STACK_LINE(94)
		::org::gameplay3d::intern::impl::AnimationTarget_ScriptTarget_obj::hx_ScriptTarget_addScriptCallback(this->nativeObject,eventName,_function);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AnimationTarget_ScriptTarget_obj,addScriptCallback,(void))

Void AnimationTarget_ScriptTarget_obj::removeScriptCallback( ::String eventName,::String _function){
{
		HX_STACK_FRAME("org.gameplay3d.intern.impl.AnimationTarget_ScriptTarget","removeScriptCallback",0x23bf0ddd,"org.gameplay3d.intern.impl.AnimationTarget_ScriptTarget.removeScriptCallback","org/gameplay3d/intern/impl/AnimationTarget_ScriptTarget.hx",100,0x7ed12259)
		HX_STACK_THIS(this)
		HX_STACK_ARG(eventName,"eventName")
		HX_STACK_ARG(_function,"_function")
		HX_STACK_LINE(100)
		::org::gameplay3d::intern::impl::AnimationTarget_ScriptTarget_obj::hx_ScriptTarget_removeScriptCallback(this->nativeObject,eventName,_function);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AnimationTarget_ScriptTarget_obj,removeScriptCallback,(void))

Dynamic AnimationTarget_ScriptTarget_obj::hx_AnimationTarget_createAnimation_Str_Prop;

Dynamic AnimationTarget_ScriptTarget_obj::hx_AnimationTarget_createAnimation_StrX2;

Dynamic AnimationTarget_ScriptTarget_obj::hx_AnimationTarget_createAnimation_Str_IntX2_ArrInt_ArrFlt_Int;

Dynamic AnimationTarget_ScriptTarget_obj::hx_AnimationTarget_createAnimation_Str_IntX2_ArrInt_ArrFltX3_Int;

Dynamic AnimationTarget_ScriptTarget_obj::hx_AnimationTarget_createAnimationFromBy;

Dynamic AnimationTarget_ScriptTarget_obj::hx_AnimationTarget_createAnimationFromTo;

Dynamic AnimationTarget_ScriptTarget_obj::hx_AnimationTarget_destroyAnimation;

Dynamic AnimationTarget_ScriptTarget_obj::hx_AnimationTarget_getAnimation;

Dynamic AnimationTarget_ScriptTarget_obj::hx_AnimationTarget_getAnimationPropertyComponentCount;

Dynamic AnimationTarget_ScriptTarget_obj::hx_AnimationTarget_getAnimationPropertyValue;

Dynamic AnimationTarget_ScriptTarget_obj::hx_AnimationTarget_setAnimationPropertyValue;

Dynamic AnimationTarget_ScriptTarget_obj::hx_ScriptTarget_addScriptCallback;

Dynamic AnimationTarget_ScriptTarget_obj::hx_ScriptTarget_removeScriptCallback;


AnimationTarget_ScriptTarget_obj::AnimationTarget_ScriptTarget_obj()
{
}

Dynamic AnimationTarget_ScriptTarget_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"getAnimation") ) { return getAnimation_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"destroyAnimation") ) { return destroyAnimation_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"addScriptCallback") ) { return addScriptCallback_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"removeScriptCallback") ) { return removeScriptCallback_dyn(); }
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
	case 33:
		if (HX_FIELD_EQ(inName,"hx_ScriptTarget_addScriptCallback") ) { return hx_ScriptTarget_addScriptCallback; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"getAnimationPropertyComponentCount") ) { return getAnimationPropertyComponentCount_dyn(); }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"hx_AnimationTarget_destroyAnimation") ) { return hx_AnimationTarget_destroyAnimation; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"hx_ScriptTarget_removeScriptCallback") ) { return hx_ScriptTarget_removeScriptCallback; }
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

Dynamic AnimationTarget_ScriptTarget_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 31:
		if (HX_FIELD_EQ(inName,"hx_AnimationTarget_getAnimation") ) { hx_AnimationTarget_getAnimation=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"hx_ScriptTarget_addScriptCallback") ) { hx_ScriptTarget_addScriptCallback=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"hx_AnimationTarget_destroyAnimation") ) { hx_AnimationTarget_destroyAnimation=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"hx_ScriptTarget_removeScriptCallback") ) { hx_ScriptTarget_removeScriptCallback=inValue.Cast< Dynamic >(); return inValue; }
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

void AnimationTarget_ScriptTarget_obj::__GetFields(Array< ::String> &outFields)
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
	HX_CSTRING("hx_ScriptTarget_addScriptCallback"),
	HX_CSTRING("hx_ScriptTarget_removeScriptCallback"),
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
	HX_CSTRING("addScriptCallback"),
	HX_CSTRING("removeScriptCallback"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AnimationTarget_ScriptTarget_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AnimationTarget_ScriptTarget_obj::hx_AnimationTarget_createAnimation_Str_Prop,"hx_AnimationTarget_createAnimation_Str_Prop");
	HX_MARK_MEMBER_NAME(AnimationTarget_ScriptTarget_obj::hx_AnimationTarget_createAnimation_StrX2,"hx_AnimationTarget_createAnimation_StrX2");
	HX_MARK_MEMBER_NAME(AnimationTarget_ScriptTarget_obj::hx_AnimationTarget_createAnimation_Str_IntX2_ArrInt_ArrFlt_Int,"hx_AnimationTarget_createAnimation_Str_IntX2_ArrInt_ArrFlt_Int");
	HX_MARK_MEMBER_NAME(AnimationTarget_ScriptTarget_obj::hx_AnimationTarget_createAnimation_Str_IntX2_ArrInt_ArrFltX3_Int,"hx_AnimationTarget_createAnimation_Str_IntX2_ArrInt_ArrFltX3_Int");
	HX_MARK_MEMBER_NAME(AnimationTarget_ScriptTarget_obj::hx_AnimationTarget_createAnimationFromBy,"hx_AnimationTarget_createAnimationFromBy");
	HX_MARK_MEMBER_NAME(AnimationTarget_ScriptTarget_obj::hx_AnimationTarget_createAnimationFromTo,"hx_AnimationTarget_createAnimationFromTo");
	HX_MARK_MEMBER_NAME(AnimationTarget_ScriptTarget_obj::hx_AnimationTarget_destroyAnimation,"hx_AnimationTarget_destroyAnimation");
	HX_MARK_MEMBER_NAME(AnimationTarget_ScriptTarget_obj::hx_AnimationTarget_getAnimation,"hx_AnimationTarget_getAnimation");
	HX_MARK_MEMBER_NAME(AnimationTarget_ScriptTarget_obj::hx_AnimationTarget_getAnimationPropertyComponentCount,"hx_AnimationTarget_getAnimationPropertyComponentCount");
	HX_MARK_MEMBER_NAME(AnimationTarget_ScriptTarget_obj::hx_AnimationTarget_getAnimationPropertyValue,"hx_AnimationTarget_getAnimationPropertyValue");
	HX_MARK_MEMBER_NAME(AnimationTarget_ScriptTarget_obj::hx_AnimationTarget_setAnimationPropertyValue,"hx_AnimationTarget_setAnimationPropertyValue");
	HX_MARK_MEMBER_NAME(AnimationTarget_ScriptTarget_obj::hx_ScriptTarget_addScriptCallback,"hx_ScriptTarget_addScriptCallback");
	HX_MARK_MEMBER_NAME(AnimationTarget_ScriptTarget_obj::hx_ScriptTarget_removeScriptCallback,"hx_ScriptTarget_removeScriptCallback");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AnimationTarget_ScriptTarget_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AnimationTarget_ScriptTarget_obj::hx_AnimationTarget_createAnimation_Str_Prop,"hx_AnimationTarget_createAnimation_Str_Prop");
	HX_VISIT_MEMBER_NAME(AnimationTarget_ScriptTarget_obj::hx_AnimationTarget_createAnimation_StrX2,"hx_AnimationTarget_createAnimation_StrX2");
	HX_VISIT_MEMBER_NAME(AnimationTarget_ScriptTarget_obj::hx_AnimationTarget_createAnimation_Str_IntX2_ArrInt_ArrFlt_Int,"hx_AnimationTarget_createAnimation_Str_IntX2_ArrInt_ArrFlt_Int");
	HX_VISIT_MEMBER_NAME(AnimationTarget_ScriptTarget_obj::hx_AnimationTarget_createAnimation_Str_IntX2_ArrInt_ArrFltX3_Int,"hx_AnimationTarget_createAnimation_Str_IntX2_ArrInt_ArrFltX3_Int");
	HX_VISIT_MEMBER_NAME(AnimationTarget_ScriptTarget_obj::hx_AnimationTarget_createAnimationFromBy,"hx_AnimationTarget_createAnimationFromBy");
	HX_VISIT_MEMBER_NAME(AnimationTarget_ScriptTarget_obj::hx_AnimationTarget_createAnimationFromTo,"hx_AnimationTarget_createAnimationFromTo");
	HX_VISIT_MEMBER_NAME(AnimationTarget_ScriptTarget_obj::hx_AnimationTarget_destroyAnimation,"hx_AnimationTarget_destroyAnimation");
	HX_VISIT_MEMBER_NAME(AnimationTarget_ScriptTarget_obj::hx_AnimationTarget_getAnimation,"hx_AnimationTarget_getAnimation");
	HX_VISIT_MEMBER_NAME(AnimationTarget_ScriptTarget_obj::hx_AnimationTarget_getAnimationPropertyComponentCount,"hx_AnimationTarget_getAnimationPropertyComponentCount");
	HX_VISIT_MEMBER_NAME(AnimationTarget_ScriptTarget_obj::hx_AnimationTarget_getAnimationPropertyValue,"hx_AnimationTarget_getAnimationPropertyValue");
	HX_VISIT_MEMBER_NAME(AnimationTarget_ScriptTarget_obj::hx_AnimationTarget_setAnimationPropertyValue,"hx_AnimationTarget_setAnimationPropertyValue");
	HX_VISIT_MEMBER_NAME(AnimationTarget_ScriptTarget_obj::hx_ScriptTarget_addScriptCallback,"hx_ScriptTarget_addScriptCallback");
	HX_VISIT_MEMBER_NAME(AnimationTarget_ScriptTarget_obj::hx_ScriptTarget_removeScriptCallback,"hx_ScriptTarget_removeScriptCallback");
};

#endif

Class AnimationTarget_ScriptTarget_obj::__mClass;

void AnimationTarget_ScriptTarget_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.intern.impl.AnimationTarget_ScriptTarget"), hx::TCanCast< AnimationTarget_ScriptTarget_obj> ,sStaticFields,sMemberFields,
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

void AnimationTarget_ScriptTarget_obj::__boot()
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
	hx_ScriptTarget_addScriptCallback= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ScriptTarget >(),HX_CSTRING("addScriptCallback"),(int)3);
	hx_ScriptTarget_removeScriptCallback= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ScriptTarget >(),HX_CSTRING("removeScriptCallback"),(int)3);
}

} // end namespace org
} // end namespace gameplay3d
} // end namespace intern
} // end namespace impl
