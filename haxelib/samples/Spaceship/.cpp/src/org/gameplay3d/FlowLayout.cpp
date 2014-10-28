#include <hxcpp.h>

#ifndef INCLUDED_org_gameplay3d_FlowLayout
#include <org/gameplay3d/FlowLayout.h>
#endif
#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Layout
#include <org/gameplay3d/Layout.h>
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
#ifndef INCLUDED_org_gameplay3d_util_NativeInterface
#include <org/gameplay3d/util/NativeInterface.h>
#endif
namespace org{
namespace gameplay3d{

Void FlowLayout_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.FlowLayout","new",0x9661c097,"org.gameplay3d.FlowLayout.new","org/gameplay3d/FlowLayout.hx",9,0x11422d19)
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

//FlowLayout_obj::~FlowLayout_obj() { }

Dynamic FlowLayout_obj::__CreateEmpty() { return  new FlowLayout_obj; }
hx::ObjectPtr< FlowLayout_obj > FlowLayout_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< FlowLayout_obj > result = new FlowLayout_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic FlowLayout_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlowLayout_obj > result = new FlowLayout_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

int FlowLayout_obj::getType( ){
	HX_STACK_FRAME("org.gameplay3d.FlowLayout","getType",0x165b7a27,"org.gameplay3d.FlowLayout.getType","org/gameplay3d/FlowLayout.hx",18,0x11422d19)
	HX_STACK_THIS(this)
	HX_STACK_LINE(18)
	return ::org::gameplay3d::FlowLayout_obj::hx_FlowLayout_getType(this->nativeObject);
}


Dynamic FlowLayout_obj::hx_FlowLayout_getType;


FlowLayout_obj::FlowLayout_obj()
{
}

Dynamic FlowLayout_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hx_FlowLayout_getType") ) { return hx_FlowLayout_getType; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlowLayout_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 21:
		if (HX_FIELD_EQ(inName,"hx_FlowLayout_getType") ) { hx_FlowLayout_getType=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlowLayout_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("hx_FlowLayout_getType"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("getType"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlowLayout_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlowLayout_obj::hx_FlowLayout_getType,"hx_FlowLayout_getType");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlowLayout_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlowLayout_obj::hx_FlowLayout_getType,"hx_FlowLayout_getType");
};

#endif

Class FlowLayout_obj::__mClass;

void FlowLayout_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.FlowLayout"), hx::TCanCast< FlowLayout_obj> ,sStaticFields,sMemberFields,
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

void FlowLayout_obj::__boot()
{
	hx_FlowLayout_getType= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::FlowLayout >(),HX_CSTRING("getType"),(int)1);
}

} // end namespace org
} // end namespace gameplay3d
