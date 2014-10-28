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
#ifndef INCLUDED_org_gameplay3d_AnimationTarget
#include <org/gameplay3d/AnimationTarget.h>
#endif
#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_ScriptTarget
#include <org/gameplay3d/ScriptTarget.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Transform
#include <org/gameplay3d/Transform.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Transform_Listener
#include <org/gameplay3d/Transform_Listener.h>
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
#ifndef INCLUDED_org_gameplay3d_intern_impl_AnimationTarget_ScriptTarget
#include <org/gameplay3d/intern/impl/AnimationTarget_ScriptTarget.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_NativeInterface
#include <org/gameplay3d/util/NativeInterface.h>
#endif
#ifndef INCLUDED_org_gameplay3d_wrapper_Transform_ListenerWrapper
#include <org/gameplay3d/wrapper/Transform_ListenerWrapper.h>
#endif
namespace org{
namespace gameplay3d{
namespace wrapper{

Void Transform_ListenerWrapper_obj::__construct(::org::gameplay3d::Transform_Listener target,Dynamic nativeObject,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.wrapper.Transform_ListenerWrapper","new",0x646d1ad6,"org.gameplay3d.wrapper.Transform_ListenerWrapper.new","org/gameplay3d/wrapper/Transform_ListenerWrapper.hx",11,0x5d6f1e7b)
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

//Transform_ListenerWrapper_obj::~Transform_ListenerWrapper_obj() { }

Dynamic Transform_ListenerWrapper_obj::__CreateEmpty() { return  new Transform_ListenerWrapper_obj; }
hx::ObjectPtr< Transform_ListenerWrapper_obj > Transform_ListenerWrapper_obj::__new(::org::gameplay3d::Transform_Listener target,Dynamic nativeObject,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< Transform_ListenerWrapper_obj > result = new Transform_ListenerWrapper_obj();
	result->__construct(target,nativeObject,nativeObjectInitializerParams);
	return result;}

Dynamic Transform_ListenerWrapper_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Transform_ListenerWrapper_obj > result = new Transform_ListenerWrapper_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

hx::Object *Transform_ListenerWrapper_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::Transform_Listener_obj)) return operator ::org::gameplay3d::Transform_Listener_obj *();
	return super::__ToInterface(inType);
}

Void Transform_ListenerWrapper_obj::transformChanged( ::org::gameplay3d::Transform transform,int cookie){
{
		HX_STACK_FRAME("org.gameplay3d.wrapper.Transform_ListenerWrapper","transformChanged",0x928754b2,"org.gameplay3d.wrapper.Transform_ListenerWrapper.transformChanged","org/gameplay3d/wrapper/Transform_ListenerWrapper.hx",26,0x5d6f1e7b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transform,"transform")
		HX_STACK_ARG(cookie,"cookie")
		HX_STACK_LINE(26)
		this->target->__Field(HX_CSTRING("transformChanged"),true)(transform,cookie);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Transform_ListenerWrapper_obj,transformChanged,(void))

Void Transform_ListenerWrapper_obj::transformChangedWrapper( Dynamic transform,int cookie){
{
		HX_STACK_FRAME("org.gameplay3d.wrapper.Transform_ListenerWrapper","transformChangedWrapper",0x099482c1,"org.gameplay3d.wrapper.Transform_ListenerWrapper.transformChangedWrapper","org/gameplay3d/wrapper/Transform_ListenerWrapper.hx",34,0x5d6f1e7b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transform,"transform")
		HX_STACK_ARG(cookie,"cookie")
		HX_STACK_LINE(35)
		::org::gameplay3d::Transform _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(35)
		{
			HX_STACK_LINE(35)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Transform >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(35)
			if (((transform == null()))){
				HX_STACK_LINE(35)
				_g1 = null();
			}
			else{
				HX_STACK_LINE(35)
				if ((::Std_obj::is(transform,hx::ClassOf< ::cpp::vm::WeakRef >()))){
					HX_STACK_LINE(35)
					::cpp::vm::WeakRef ref = transform;		HX_STACK_VAR(ref,"ref");
					HX_STACK_LINE(35)
					::org::gameplay3d::Transform result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(35)
					if (((result == null()))){
						HX_STACK_LINE(35)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(35)
						::org::gameplay3d::Transform _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = transform;
					HX_STACK_LINE(35)
					_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
				}
			}
		}
		HX_STACK_LINE(35)
		this->transformChanged(_g1,cookie);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Transform_ListenerWrapper_obj,transformChangedWrapper,(void))

::org::gameplay3d::wrapper::Transform_ListenerWrapper Transform_ListenerWrapper_obj::make( ::org::gameplay3d::Transform_Listener target){
	HX_STACK_FRAME("org.gameplay3d.wrapper.Transform_ListenerWrapper","make",0x7a5e16b8,"org.gameplay3d.wrapper.Transform_ListenerWrapper.make","org/gameplay3d/wrapper/Transform_ListenerWrapper.hx",20,0x5d6f1e7b)
	HX_STACK_ARG(target,"target")
	HX_STACK_LINE(20)
	return ::org::gameplay3d::wrapper::Transform_ListenerWrapper_obj::__new(target,::org::gameplay3d::wrapper::Transform_ListenerWrapper_obj::constructNativeObject_dyn(),Dynamic( Array_obj<Dynamic>::__new().Add(null())));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Transform_ListenerWrapper_obj,make,return )

Dynamic Transform_ListenerWrapper_obj::constructNativeObject( ::org::gameplay3d::wrapper::Transform_ListenerWrapper thisObj){
	HX_STACK_FRAME("org.gameplay3d.wrapper.Transform_ListenerWrapper","constructNativeObject",0x1b409263,"org.gameplay3d.wrapper.Transform_ListenerWrapper.constructNativeObject","org/gameplay3d/wrapper/Transform_ListenerWrapper.hx",41,0x5d6f1e7b)
	HX_STACK_ARG(thisObj,"thisObj")
	HX_STACK_LINE(41)
	return ::org::gameplay3d::wrapper::Transform_ListenerWrapper_obj::hx_Transform_Listener_Construct(thisObj->transformChangedWrapper_dyn());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Transform_ListenerWrapper_obj,constructNativeObject,return )

Dynamic Transform_ListenerWrapper_obj::hx_Transform_Listener_Construct;


Transform_ListenerWrapper_obj::Transform_ListenerWrapper_obj()
{
}

Dynamic Transform_ListenerWrapper_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { return make_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"transformChanged") ) { return transformChanged_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"constructNativeObject") ) { return constructNativeObject_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"transformChangedWrapper") ) { return transformChangedWrapper_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"hx_Transform_Listener_Construct") ) { return hx_Transform_Listener_Construct; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Transform_ListenerWrapper_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 31:
		if (HX_FIELD_EQ(inName,"hx_Transform_Listener_Construct") ) { hx_Transform_Listener_Construct=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Transform_ListenerWrapper_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("make"),
	HX_CSTRING("constructNativeObject"),
	HX_CSTRING("hx_Transform_Listener_Construct"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("transformChanged"),
	HX_CSTRING("transformChangedWrapper"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Transform_ListenerWrapper_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Transform_ListenerWrapper_obj::hx_Transform_Listener_Construct,"hx_Transform_Listener_Construct");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Transform_ListenerWrapper_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Transform_ListenerWrapper_obj::hx_Transform_Listener_Construct,"hx_Transform_Listener_Construct");
};

#endif

Class Transform_ListenerWrapper_obj::__mClass;

void Transform_ListenerWrapper_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.wrapper.Transform_ListenerWrapper"), hx::TCanCast< Transform_ListenerWrapper_obj> ,sStaticFields,sMemberFields,
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

void Transform_ListenerWrapper_obj::__boot()
{
	hx_Transform_Listener_Construct= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform_Listener >(),HX_CSTRING("Construct"),(int)1);
}

} // end namespace org
} // end namespace gameplay3d
} // end namespace wrapper
