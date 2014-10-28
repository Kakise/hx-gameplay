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
#ifndef INCLUDED_org_gameplay3d_VerticalLayout
#include <org/gameplay3d/VerticalLayout.h>
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

Void VerticalLayout_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.VerticalLayout","new",0x124d999f,"org.gameplay3d.VerticalLayout.new","org/gameplay3d/VerticalLayout.hx",9,0x1648fd11)
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

//VerticalLayout_obj::~VerticalLayout_obj() { }

Dynamic VerticalLayout_obj::__CreateEmpty() { return  new VerticalLayout_obj; }
hx::ObjectPtr< VerticalLayout_obj > VerticalLayout_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< VerticalLayout_obj > result = new VerticalLayout_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic VerticalLayout_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VerticalLayout_obj > result = new VerticalLayout_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

bool VerticalLayout_obj::getBottomToTop( ){
	HX_STACK_FRAME("org.gameplay3d.VerticalLayout","getBottomToTop",0xab1dd11a,"org.gameplay3d.VerticalLayout.getBottomToTop","org/gameplay3d/VerticalLayout.hx",18,0x1648fd11)
	HX_STACK_THIS(this)
	HX_STACK_LINE(18)
	return ::org::gameplay3d::VerticalLayout_obj::hx_VerticalLayout_getBottomToTop(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(VerticalLayout_obj,getBottomToTop,return )

int VerticalLayout_obj::getType( ){
	HX_STACK_FRAME("org.gameplay3d.VerticalLayout","getType",0xf2dc772f,"org.gameplay3d.VerticalLayout.getType","org/gameplay3d/VerticalLayout.hx",24,0x1648fd11)
	HX_STACK_THIS(this)
	HX_STACK_LINE(24)
	return ::org::gameplay3d::VerticalLayout_obj::hx_VerticalLayout_getType(this->nativeObject);
}


Void VerticalLayout_obj::setBottomToTop( bool bottomToTop){
{
		HX_STACK_FRAME("org.gameplay3d.VerticalLayout","setBottomToTop",0xcb3db98e,"org.gameplay3d.VerticalLayout.setBottomToTop","org/gameplay3d/VerticalLayout.hx",30,0x1648fd11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bottomToTop,"bottomToTop")
		HX_STACK_LINE(30)
		::org::gameplay3d::VerticalLayout_obj::hx_VerticalLayout_setBottomToTop(this->nativeObject,bottomToTop);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VerticalLayout_obj,setBottomToTop,(void))

Dynamic VerticalLayout_obj::hx_VerticalLayout_getBottomToTop;

Dynamic VerticalLayout_obj::hx_VerticalLayout_getType;

Dynamic VerticalLayout_obj::hx_VerticalLayout_setBottomToTop;


VerticalLayout_obj::VerticalLayout_obj()
{
}

Dynamic VerticalLayout_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getBottomToTop") ) { return getBottomToTop_dyn(); }
		if (HX_FIELD_EQ(inName,"setBottomToTop") ) { return setBottomToTop_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_VerticalLayout_getType") ) { return hx_VerticalLayout_getType; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"hx_VerticalLayout_getBottomToTop") ) { return hx_VerticalLayout_getBottomToTop; }
		if (HX_FIELD_EQ(inName,"hx_VerticalLayout_setBottomToTop") ) { return hx_VerticalLayout_setBottomToTop; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic VerticalLayout_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 25:
		if (HX_FIELD_EQ(inName,"hx_VerticalLayout_getType") ) { hx_VerticalLayout_getType=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"hx_VerticalLayout_getBottomToTop") ) { hx_VerticalLayout_getBottomToTop=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_VerticalLayout_setBottomToTop") ) { hx_VerticalLayout_setBottomToTop=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VerticalLayout_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("hx_VerticalLayout_getBottomToTop"),
	HX_CSTRING("hx_VerticalLayout_getType"),
	HX_CSTRING("hx_VerticalLayout_setBottomToTop"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("getBottomToTop"),
	HX_CSTRING("getType"),
	HX_CSTRING("setBottomToTop"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VerticalLayout_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(VerticalLayout_obj::hx_VerticalLayout_getBottomToTop,"hx_VerticalLayout_getBottomToTop");
	HX_MARK_MEMBER_NAME(VerticalLayout_obj::hx_VerticalLayout_getType,"hx_VerticalLayout_getType");
	HX_MARK_MEMBER_NAME(VerticalLayout_obj::hx_VerticalLayout_setBottomToTop,"hx_VerticalLayout_setBottomToTop");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VerticalLayout_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(VerticalLayout_obj::hx_VerticalLayout_getBottomToTop,"hx_VerticalLayout_getBottomToTop");
	HX_VISIT_MEMBER_NAME(VerticalLayout_obj::hx_VerticalLayout_getType,"hx_VerticalLayout_getType");
	HX_VISIT_MEMBER_NAME(VerticalLayout_obj::hx_VerticalLayout_setBottomToTop,"hx_VerticalLayout_setBottomToTop");
};

#endif

Class VerticalLayout_obj::__mClass;

void VerticalLayout_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.VerticalLayout"), hx::TCanCast< VerticalLayout_obj> ,sStaticFields,sMemberFields,
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

void VerticalLayout_obj::__boot()
{
	hx_VerticalLayout_getBottomToTop= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::VerticalLayout >(),HX_CSTRING("getBottomToTop"),(int)1);
	hx_VerticalLayout_getType= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::VerticalLayout >(),HX_CSTRING("getType"),(int)1);
	hx_VerticalLayout_setBottomToTop= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::VerticalLayout >(),HX_CSTRING("setBottomToTop"),(int)2);
}

} // end namespace org
} // end namespace gameplay3d
