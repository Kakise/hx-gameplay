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

Void Theme_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.Theme","new",0x378f2c2e,"org.gameplay3d.Theme.new","org/gameplay3d/Theme.hx",9,0x868000a2)
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

//Theme_obj::~Theme_obj() { }

Dynamic Theme_obj::__CreateEmpty() { return  new Theme_obj; }
hx::ObjectPtr< Theme_obj > Theme_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< Theme_obj > result = new Theme_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic Theme_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Theme_obj > result = new Theme_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *Theme_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::intern::INativeBinding_obj)) return operator ::org::gameplay3d::intern::INativeBinding_obj *();
	if (inType==typeid( ::org::gameplay3d::Ref_obj)) return operator ::org::gameplay3d::Ref_obj *();
	return super::__ToInterface(inType);
}

::org::gameplay3d::Theme_Style Theme_obj::getEmptyStyle( ){
	HX_STACK_FRAME("org.gameplay3d.Theme","getEmptyStyle",0xd2f840e8,"org.gameplay3d.Theme.getEmptyStyle","org/gameplay3d/Theme.hx",24,0x868000a2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(24)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Theme_Style >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(24)
	Dynamic nativeObject = ::org::gameplay3d::Theme_obj::hx_Theme_getEmptyStyle(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
			::org::gameplay3d::Theme_Style result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(24)
			if (((result == null()))){
				HX_STACK_LINE(24)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(24)
				::org::gameplay3d::Theme_Style _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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


HX_DEFINE_DYNAMIC_FUNC0(Theme_obj,getEmptyStyle,return )

::org::gameplay3d::Theme_Style Theme_obj::getStyle( ::String id){
	HX_STACK_FRAME("org.gameplay3d.Theme","getStyle",0x6e33ce2d,"org.gameplay3d.Theme.getStyle","org/gameplay3d/Theme.hx",30,0x868000a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(30)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Theme_Style >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(30)
	Dynamic nativeObject = ::org::gameplay3d::Theme_obj::hx_Theme_getStyle(this->nativeObject,id);		HX_STACK_VAR(nativeObject,"nativeObject");
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
			::org::gameplay3d::Theme_Style result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(30)
			if (((result == null()))){
				HX_STACK_LINE(30)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(30)
				::org::gameplay3d::Theme_Style _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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


HX_DEFINE_DYNAMIC_FUNC1(Theme_obj,getStyle,return )

::org::gameplay3d::Theme Theme_obj::create( ::String url){
	HX_STACK_FRAME("org.gameplay3d.Theme","create",0xea48dfee,"org.gameplay3d.Theme.create","org/gameplay3d/Theme.hx",18,0x868000a2)
	HX_STACK_ARG(url,"url")
	HX_STACK_LINE(18)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Theme >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(18)
	Dynamic nativeObject = ::org::gameplay3d::Theme_obj::hx_Theme_static_create(url);		HX_STACK_VAR(nativeObject,"nativeObject");
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
			::org::gameplay3d::Theme result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(18)
			if (((result == null()))){
				HX_STACK_LINE(18)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(18)
				::org::gameplay3d::Theme _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Theme_obj,create,return )

Dynamic Theme_obj::hx_Theme_static_create;

Dynamic Theme_obj::hx_Theme_getEmptyStyle;

Dynamic Theme_obj::hx_Theme_getStyle;


Theme_obj::Theme_obj()
{
}

Dynamic Theme_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getStyle") ) { return getStyle_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getEmptyStyle") ) { return getEmptyStyle_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"hx_Theme_getStyle") ) { return hx_Theme_getStyle; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Theme_static_create") ) { return hx_Theme_static_create; }
		if (HX_FIELD_EQ(inName,"hx_Theme_getEmptyStyle") ) { return hx_Theme_getEmptyStyle; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Theme_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"hx_Theme_getStyle") ) { hx_Theme_getStyle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Theme_static_create") ) { hx_Theme_static_create=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Theme_getEmptyStyle") ) { hx_Theme_getEmptyStyle=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Theme_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create"),
	HX_CSTRING("hx_Theme_static_create"),
	HX_CSTRING("hx_Theme_getEmptyStyle"),
	HX_CSTRING("hx_Theme_getStyle"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("getEmptyStyle"),
	HX_CSTRING("getStyle"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Theme_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Theme_obj::hx_Theme_static_create,"hx_Theme_static_create");
	HX_MARK_MEMBER_NAME(Theme_obj::hx_Theme_getEmptyStyle,"hx_Theme_getEmptyStyle");
	HX_MARK_MEMBER_NAME(Theme_obj::hx_Theme_getStyle,"hx_Theme_getStyle");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Theme_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Theme_obj::hx_Theme_static_create,"hx_Theme_static_create");
	HX_VISIT_MEMBER_NAME(Theme_obj::hx_Theme_getEmptyStyle,"hx_Theme_getEmptyStyle");
	HX_VISIT_MEMBER_NAME(Theme_obj::hx_Theme_getStyle,"hx_Theme_getStyle");
};

#endif

Class Theme_obj::__mClass;

void Theme_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.Theme"), hx::TCanCast< Theme_obj> ,sStaticFields,sMemberFields,
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

void Theme_obj::__boot()
{
	hx_Theme_static_create= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Theme >(),HX_CSTRING("static_create"),(int)1);
	hx_Theme_getEmptyStyle= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Theme >(),HX_CSTRING("getEmptyStyle"),(int)1);
	hx_Theme_getStyle= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Theme >(),HX_CSTRING("getStyle"),(int)2);
}

} // end namespace org
} // end namespace gameplay3d
