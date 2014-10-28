#include <hxcpp.h>

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
#ifndef INCLUDED_org_gameplay3d_intern_NativeBinding
#include <org/gameplay3d/intern/NativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_impl_AnimationTarget_ScriptTarget
#include <org/gameplay3d/intern/impl/AnimationTarget_ScriptTarget.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_impl_Transform_ListenerImpl
#include <org/gameplay3d/intern/impl/Transform_ListenerImpl.h>
#endif
namespace org{
namespace gameplay3d{
namespace intern{
namespace impl{

Void Transform_ListenerImpl_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.intern.impl.Transform_ListenerImpl","new",0xa1946d98,"org.gameplay3d.intern.impl.Transform_ListenerImpl.new","org/gameplay3d/intern/impl/Transform_ListenerImpl.hx",7,0xf5ff52d8)
HX_STACK_THIS(this)
HX_STACK_ARG(nativeObjectInitializer,"nativeObjectInitializer")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(7)
	super::__construct(nativeObjectInitializer,nativeObjectInitializerParams);
}
;
	return null();
}

//Transform_ListenerImpl_obj::~Transform_ListenerImpl_obj() { }

Dynamic Transform_ListenerImpl_obj::__CreateEmpty() { return  new Transform_ListenerImpl_obj; }
hx::ObjectPtr< Transform_ListenerImpl_obj > Transform_ListenerImpl_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< Transform_ListenerImpl_obj > result = new Transform_ListenerImpl_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic Transform_ListenerImpl_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Transform_ListenerImpl_obj > result = new Transform_ListenerImpl_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *Transform_ListenerImpl_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::Transform_Listener_obj)) return operator ::org::gameplay3d::Transform_Listener_obj *();
	return super::__ToInterface(inType);
}

Void Transform_ListenerImpl_obj::transformChanged( ::org::gameplay3d::Transform transform,int cookie){
{
		HX_STACK_FRAME("org.gameplay3d.intern.impl.Transform_ListenerImpl","transformChanged",0xf50df0b0,"org.gameplay3d.intern.impl.Transform_ListenerImpl.transformChanged","org/gameplay3d/intern/impl/Transform_ListenerImpl.hx",15,0xf5ff52d8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transform,"transform")
		HX_STACK_ARG(cookie,"cookie")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Transform_ListenerImpl_obj,transformChanged,(void))


Transform_ListenerImpl_obj::Transform_ListenerImpl_obj()
{
}

Dynamic Transform_ListenerImpl_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"transformChanged") ) { return transformChanged_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Transform_ListenerImpl_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Transform_ListenerImpl_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("transformChanged"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Transform_ListenerImpl_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Transform_ListenerImpl_obj::__mClass,"__mClass");
};

#endif

Class Transform_ListenerImpl_obj::__mClass;

void Transform_ListenerImpl_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.intern.impl.Transform_ListenerImpl"), hx::TCanCast< Transform_ListenerImpl_obj> ,sStaticFields,sMemberFields,
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

void Transform_ListenerImpl_obj::__boot()
{
}

} // end namespace org
} // end namespace gameplay3d
} // end namespace intern
} // end namespace impl
