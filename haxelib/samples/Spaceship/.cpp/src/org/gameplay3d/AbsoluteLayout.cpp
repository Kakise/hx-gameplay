#include <hxcpp.h>

#ifndef INCLUDED_org_gameplay3d_AbsoluteLayout
#include <org/gameplay3d/AbsoluteLayout.h>
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

Void AbsoluteLayout_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.AbsoluteLayout","new",0x703696e0,"org.gameplay3d.AbsoluteLayout.new","org/gameplay3d/AbsoluteLayout.hx",9,0x898122f0)
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

//AbsoluteLayout_obj::~AbsoluteLayout_obj() { }

Dynamic AbsoluteLayout_obj::__CreateEmpty() { return  new AbsoluteLayout_obj; }
hx::ObjectPtr< AbsoluteLayout_obj > AbsoluteLayout_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< AbsoluteLayout_obj > result = new AbsoluteLayout_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic AbsoluteLayout_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AbsoluteLayout_obj > result = new AbsoluteLayout_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

int AbsoluteLayout_obj::getType( ){
	HX_STACK_FRAME("org.gameplay3d.AbsoluteLayout","getType",0x3293a8f0,"org.gameplay3d.AbsoluteLayout.getType","org/gameplay3d/AbsoluteLayout.hx",18,0x898122f0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(18)
	return ::org::gameplay3d::AbsoluteLayout_obj::hx_AbsoluteLayout_getType(this->nativeObject);
}


Dynamic AbsoluteLayout_obj::hx_AbsoluteLayout_getType;


AbsoluteLayout_obj::AbsoluteLayout_obj()
{
}

Dynamic AbsoluteLayout_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_AbsoluteLayout_getType") ) { return hx_AbsoluteLayout_getType; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AbsoluteLayout_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 25:
		if (HX_FIELD_EQ(inName,"hx_AbsoluteLayout_getType") ) { hx_AbsoluteLayout_getType=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AbsoluteLayout_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("hx_AbsoluteLayout_getType"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("getType"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AbsoluteLayout_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AbsoluteLayout_obj::hx_AbsoluteLayout_getType,"hx_AbsoluteLayout_getType");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AbsoluteLayout_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AbsoluteLayout_obj::hx_AbsoluteLayout_getType,"hx_AbsoluteLayout_getType");
};

#endif

Class AbsoluteLayout_obj::__mClass;

void AbsoluteLayout_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.AbsoluteLayout"), hx::TCanCast< AbsoluteLayout_obj> ,sStaticFields,sMemberFields,
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

void AbsoluteLayout_obj::__boot()
{
	hx_AbsoluteLayout_getType= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AbsoluteLayout >(),HX_CSTRING("getType"),(int)1);
}

} // end namespace org
} // end namespace gameplay3d
