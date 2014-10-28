#include <hxcpp.h>

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

Void Layout_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.Layout","new",0xf3613489,"org.gameplay3d.Layout.new","org/gameplay3d/Layout.hx",9,0x727a4d67)
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

//Layout_obj::~Layout_obj() { }

Dynamic Layout_obj::__CreateEmpty() { return  new Layout_obj; }
hx::ObjectPtr< Layout_obj > Layout_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< Layout_obj > result = new Layout_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic Layout_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Layout_obj > result = new Layout_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *Layout_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::intern::INativeBinding_obj)) return operator ::org::gameplay3d::intern::INativeBinding_obj *();
	if (inType==typeid( ::org::gameplay3d::Ref_obj)) return operator ::org::gameplay3d::Ref_obj *();
	return super::__ToInterface(inType);
}

int Layout_obj::getType( ){
	HX_STACK_FRAME("org.gameplay3d.Layout","getType",0xca88cf19,"org.gameplay3d.Layout.getType","org/gameplay3d/Layout.hx",18,0x727a4d67)
	HX_STACK_THIS(this)
	HX_STACK_LINE(18)
	return ::org::gameplay3d::Layout_obj::hx_Layout_getType(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,getType,return )

Dynamic Layout_obj::hx_Layout_getType;


Layout_obj::Layout_obj()
{
}

Dynamic Layout_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"hx_Layout_getType") ) { return hx_Layout_getType; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Layout_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"hx_Layout_getType") ) { hx_Layout_getType=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Layout_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("hx_Layout_getType"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("getType"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Layout_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Layout_obj::hx_Layout_getType,"hx_Layout_getType");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Layout_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Layout_obj::hx_Layout_getType,"hx_Layout_getType");
};

#endif

Class Layout_obj::__mClass;

void Layout_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.Layout"), hx::TCanCast< Layout_obj> ,sStaticFields,sMemberFields,
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

void Layout_obj::__boot()
{
	hx_Layout_getType= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Layout >(),HX_CSTRING("getType"),(int)1);
}

} // end namespace org
} // end namespace gameplay3d
