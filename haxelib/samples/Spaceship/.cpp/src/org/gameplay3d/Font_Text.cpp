#include <hxcpp.h>

#ifndef INCLUDED_org_gameplay3d_Font_Text
#include <org/gameplay3d/Font_Text.h>
#endif
#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
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

Void Font_Text_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.Font_Text","new",0xa1771622,"org.gameplay3d.Font_Text.new","org/gameplay3d/Font_Text.hx",9,0x70fde12e)
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

//Font_Text_obj::~Font_Text_obj() { }

Dynamic Font_Text_obj::__CreateEmpty() { return  new Font_Text_obj; }
hx::ObjectPtr< Font_Text_obj > Font_Text_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< Font_Text_obj > result = new Font_Text_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic Font_Text_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Font_Text_obj > result = new Font_Text_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::String Font_Text_obj::getText( ){
	HX_STACK_FRAME("org.gameplay3d.Font_Text","getText",0xe7e2cb25,"org.gameplay3d.Font_Text.getText","org/gameplay3d/Font_Text.hx",24,0x70fde12e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(24)
	return ::org::gameplay3d::Font_Text_obj::hx_Font_Text_getText(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Font_Text_obj,getText,return )

::org::gameplay3d::Font_Text Font_Text_obj::make( ::String text){
	HX_STACK_FRAME("org.gameplay3d.Font_Text","make",0xa60ffdec,"org.gameplay3d.Font_Text.make","org/gameplay3d/Font_Text.hx",17,0x70fde12e)
	HX_STACK_ARG(text,"text")
	HX_STACK_LINE(18)
	Dynamic _g = ::org::gameplay3d::Font_Text_obj::constructNativeObject(text);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(18)
	return ::org::gameplay3d::Font_Text_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_Text_obj,make,return )

Dynamic Font_Text_obj::constructNativeObject( ::String text){
	HX_STACK_FRAME("org.gameplay3d.Font_Text","constructNativeObject",0xa14750af,"org.gameplay3d.Font_Text.constructNativeObject","org/gameplay3d/Font_Text.hx",34,0x70fde12e)
	HX_STACK_ARG(text,"text")
	HX_STACK_LINE(34)
	return ::org::gameplay3d::Font_Text_obj::hx_Font_Text_Construct(text);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_Text_obj,constructNativeObject,return )

Dynamic Font_Text_obj::hx_Font_Text_Construct;

Dynamic Font_Text_obj::hx_Font_Text_getText;


Font_Text_obj::Font_Text_obj()
{
}

Dynamic Font_Text_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { return make_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getText") ) { return getText_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Font_Text_getText") ) { return hx_Font_Text_getText; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"constructNativeObject") ) { return constructNativeObject_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Font_Text_Construct") ) { return hx_Font_Text_Construct; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Font_Text_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Font_Text_getText") ) { hx_Font_Text_getText=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Font_Text_Construct") ) { hx_Font_Text_Construct=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Font_Text_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("make"),
	HX_CSTRING("constructNativeObject"),
	HX_CSTRING("hx_Font_Text_Construct"),
	HX_CSTRING("hx_Font_Text_getText"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("getText"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Font_Text_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Font_Text_obj::hx_Font_Text_Construct,"hx_Font_Text_Construct");
	HX_MARK_MEMBER_NAME(Font_Text_obj::hx_Font_Text_getText,"hx_Font_Text_getText");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Font_Text_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Font_Text_obj::hx_Font_Text_Construct,"hx_Font_Text_Construct");
	HX_VISIT_MEMBER_NAME(Font_Text_obj::hx_Font_Text_getText,"hx_Font_Text_getText");
};

#endif

Class Font_Text_obj::__mClass;

void Font_Text_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.Font_Text"), hx::TCanCast< Font_Text_obj> ,sStaticFields,sMemberFields,
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

void Font_Text_obj::__boot()
{
	hx_Font_Text_Construct= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Font_Text >(),HX_CSTRING("Construct"),(int)1);
	hx_Font_Text_getText= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Font_Text >(),HX_CSTRING("getText"),(int)1);
}

} // end namespace org
} // end namespace gameplay3d
