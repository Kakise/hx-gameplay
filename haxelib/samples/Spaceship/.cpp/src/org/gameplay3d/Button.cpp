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
#ifndef INCLUDED_org_gameplay3d_Button
#include <org/gameplay3d/Button.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Control
#include <org/gameplay3d/Control.h>
#endif
#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Label
#include <org/gameplay3d/Label.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Ref
#include <org/gameplay3d/Ref.h>
#endif
#ifndef INCLUDED_org_gameplay3d_ScriptTarget
#include <org/gameplay3d/ScriptTarget.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Theme_Style
#include <org/gameplay3d/Theme_Style.h>
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
#ifndef INCLUDED_org_gameplay3d_util_NativeInterface
#include <org/gameplay3d/util/NativeInterface.h>
#endif
namespace org{
namespace gameplay3d{

Void Button_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.Button","new",0xc2b82bd1,"org.gameplay3d.Button.new","org/gameplay3d/Button.hx",9,0x647bd71f)
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

//Button_obj::~Button_obj() { }

Dynamic Button_obj::__CreateEmpty() { return  new Button_obj; }
hx::ObjectPtr< Button_obj > Button_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< Button_obj > result = new Button_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic Button_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Button_obj > result = new Button_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::org::gameplay3d::Button Button_obj::create( ::String id,::org::gameplay3d::Theme_Style style){
	HX_STACK_FRAME("org.gameplay3d.Button","create",0xc147082b,"org.gameplay3d.Button.create","org/gameplay3d/Button.hx",18,0x647bd71f)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(style,"style")
	HX_STACK_LINE(18)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Button >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(18)
	Dynamic nativeObject = ::org::gameplay3d::Button_obj::hx_Button_static_create(id,(  (((style == null()))) ? Dynamic(null()) : Dynamic(style->nativeObject) ));		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(18)
	if (((nativeObject == null()))){
		HX_STACK_LINE(18)
		return null();
	}
	else{
		HX_STACK_LINE(18)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(18)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(18)
			::org::gameplay3d::Button result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(18)
			if (((result == null()))){
				HX_STACK_LINE(18)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(18)
				::org::gameplay3d::Button _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(18)
				result = _g;
				HX_STACK_LINE(18)
				ref->set(result);
			}
			HX_STACK_LINE(18)
			return result;
		}
		else{
			HX_STACK_LINE(18)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(18)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(18)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Button_obj,create,return )

Dynamic Button_obj::hx_Button_static_create;


Button_obj::Button_obj()
{
}

Dynamic Button_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_Button_static_create") ) { return hx_Button_static_create; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Button_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 23:
		if (HX_FIELD_EQ(inName,"hx_Button_static_create") ) { hx_Button_static_create=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Button_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create"),
	HX_CSTRING("hx_Button_static_create"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Button_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Button_obj::hx_Button_static_create,"hx_Button_static_create");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Button_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Button_obj::hx_Button_static_create,"hx_Button_static_create");
};

#endif

Class Button_obj::__mClass;

void Button_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.Button"), hx::TCanCast< Button_obj> ,sStaticFields,sMemberFields,
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

void Button_obj::__boot()
{
	hx_Button_static_create= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Button >(),HX_CSTRING("static_create"),(int)2);
}

} // end namespace org
} // end namespace gameplay3d
