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
#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Ref
#include <org/gameplay3d/Ref.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Theme
#include <org/gameplay3d/Theme.h>
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
#ifndef INCLUDED_org_gameplay3d_util_NativeInterface
#include <org/gameplay3d/util/NativeInterface.h>
#endif
namespace org{
namespace gameplay3d{

Void Theme_Style_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.Theme_Style","new",0xa6bd2e80,"org.gameplay3d.Theme_Style.new","org/gameplay3d/Theme_Style.hx",8,0x932c2690)
HX_STACK_THIS(this)
HX_STACK_ARG(nativeObjectInitializer,"nativeObjectInitializer")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(8)
	super::__construct(nativeObjectInitializer,nativeObjectInitializerParams);
}
;
	return null();
}

//Theme_Style_obj::~Theme_Style_obj() { }

Dynamic Theme_Style_obj::__CreateEmpty() { return  new Theme_Style_obj; }
hx::ObjectPtr< Theme_Style_obj > Theme_Style_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< Theme_Style_obj > result = new Theme_Style_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic Theme_Style_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Theme_Style_obj > result = new Theme_Style_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::org::gameplay3d::Theme Theme_Style_obj::getTheme( ){
	HX_STACK_FRAME("org.gameplay3d.Theme_Style","getTheme",0x43aafb73,"org.gameplay3d.Theme_Style.getTheme","org/gameplay3d/Theme_Style.hx",17,0x932c2690)
	HX_STACK_THIS(this)
	HX_STACK_LINE(17)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Theme >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(17)
	Dynamic nativeObject = ::org::gameplay3d::Theme_Style_obj::hx_Theme_Style_getTheme(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(17)
	if (((nativeObject == null()))){
		HX_STACK_LINE(17)
		return null();
	}
	else{
		HX_STACK_LINE(17)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(17)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(17)
			::org::gameplay3d::Theme result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(17)
			if (((result == null()))){
				HX_STACK_LINE(17)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(17)
				::org::gameplay3d::Theme _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(17)
				result = _g;
				HX_STACK_LINE(17)
				ref->set(result);
			}
			HX_STACK_LINE(17)
			return result;
		}
		else{
			HX_STACK_LINE(17)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(17)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(17)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Theme_Style_obj,getTheme,return )

Dynamic Theme_Style_obj::hx_Theme_Style_getTheme;


Theme_Style_obj::Theme_Style_obj()
{
}

Dynamic Theme_Style_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"getTheme") ) { return getTheme_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_Theme_Style_getTheme") ) { return hx_Theme_Style_getTheme; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Theme_Style_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 23:
		if (HX_FIELD_EQ(inName,"hx_Theme_Style_getTheme") ) { hx_Theme_Style_getTheme=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Theme_Style_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("hx_Theme_Style_getTheme"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("getTheme"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Theme_Style_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Theme_Style_obj::hx_Theme_Style_getTheme,"hx_Theme_Style_getTheme");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Theme_Style_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Theme_Style_obj::hx_Theme_Style_getTheme,"hx_Theme_Style_getTheme");
};

#endif

Class Theme_Style_obj::__mClass;

void Theme_Style_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.Theme_Style"), hx::TCanCast< Theme_Style_obj> ,sStaticFields,sMemberFields,
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

void Theme_Style_obj::__boot()
{
	hx_Theme_Style_getTheme= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Theme_Style >(),HX_CSTRING("getTheme"),(int)1);
}

} // end namespace org
} // end namespace gameplay3d
