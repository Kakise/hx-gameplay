#include <hxcpp.h>

#ifndef INCLUDED_org_gameplay3d_Font_Justify
#include <org/gameplay3d/Font_Justify.h>
#endif
namespace org{
namespace gameplay3d{

Void Font_Justify_obj::__construct()
{
	return null();
}

//Font_Justify_obj::~Font_Justify_obj() { }

Dynamic Font_Justify_obj::__CreateEmpty() { return  new Font_Justify_obj; }
hx::ObjectPtr< Font_Justify_obj > Font_Justify_obj::__new()
{  hx::ObjectPtr< Font_Justify_obj > result = new Font_Justify_obj();
	result->__construct();
	return result;}

Dynamic Font_Justify_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Font_Justify_obj > result = new Font_Justify_obj();
	result->__construct();
	return result;}

int Font_Justify_obj::ALIGN_LEFT;

int Font_Justify_obj::ALIGN_HCENTER;

int Font_Justify_obj::ALIGN_RIGHT;

int Font_Justify_obj::ALIGN_TOP;

int Font_Justify_obj::ALIGN_VCENTER;

int Font_Justify_obj::ALIGN_BOTTOM;

int Font_Justify_obj::ALIGN_TOP_LEFT;

int Font_Justify_obj::ALIGN_VCENTER_LEFT;

int Font_Justify_obj::ALIGN_BOTTOM_LEFT;

int Font_Justify_obj::ALIGN_TOP_HCENTER;

int Font_Justify_obj::ALIGN_VCENTER_HCENTER;

int Font_Justify_obj::ALIGN_BOTTOM_HCENTER;

int Font_Justify_obj::ALIGN_TOP_RIGHT;

int Font_Justify_obj::ALIGN_VCENTER_RIGHT;

int Font_Justify_obj::ALIGN_BOTTOM_RIGHT;


Font_Justify_obj::Font_Justify_obj()
{
}

Dynamic Font_Justify_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Font_Justify_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Font_Justify_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("ALIGN_LEFT"),
	HX_CSTRING("ALIGN_HCENTER"),
	HX_CSTRING("ALIGN_RIGHT"),
	HX_CSTRING("ALIGN_TOP"),
	HX_CSTRING("ALIGN_VCENTER"),
	HX_CSTRING("ALIGN_BOTTOM"),
	HX_CSTRING("ALIGN_TOP_LEFT"),
	HX_CSTRING("ALIGN_VCENTER_LEFT"),
	HX_CSTRING("ALIGN_BOTTOM_LEFT"),
	HX_CSTRING("ALIGN_TOP_HCENTER"),
	HX_CSTRING("ALIGN_VCENTER_HCENTER"),
	HX_CSTRING("ALIGN_BOTTOM_HCENTER"),
	HX_CSTRING("ALIGN_TOP_RIGHT"),
	HX_CSTRING("ALIGN_VCENTER_RIGHT"),
	HX_CSTRING("ALIGN_BOTTOM_RIGHT"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Font_Justify_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Font_Justify_obj::ALIGN_LEFT,"ALIGN_LEFT");
	HX_MARK_MEMBER_NAME(Font_Justify_obj::ALIGN_HCENTER,"ALIGN_HCENTER");
	HX_MARK_MEMBER_NAME(Font_Justify_obj::ALIGN_RIGHT,"ALIGN_RIGHT");
	HX_MARK_MEMBER_NAME(Font_Justify_obj::ALIGN_TOP,"ALIGN_TOP");
	HX_MARK_MEMBER_NAME(Font_Justify_obj::ALIGN_VCENTER,"ALIGN_VCENTER");
	HX_MARK_MEMBER_NAME(Font_Justify_obj::ALIGN_BOTTOM,"ALIGN_BOTTOM");
	HX_MARK_MEMBER_NAME(Font_Justify_obj::ALIGN_TOP_LEFT,"ALIGN_TOP_LEFT");
	HX_MARK_MEMBER_NAME(Font_Justify_obj::ALIGN_VCENTER_LEFT,"ALIGN_VCENTER_LEFT");
	HX_MARK_MEMBER_NAME(Font_Justify_obj::ALIGN_BOTTOM_LEFT,"ALIGN_BOTTOM_LEFT");
	HX_MARK_MEMBER_NAME(Font_Justify_obj::ALIGN_TOP_HCENTER,"ALIGN_TOP_HCENTER");
	HX_MARK_MEMBER_NAME(Font_Justify_obj::ALIGN_VCENTER_HCENTER,"ALIGN_VCENTER_HCENTER");
	HX_MARK_MEMBER_NAME(Font_Justify_obj::ALIGN_BOTTOM_HCENTER,"ALIGN_BOTTOM_HCENTER");
	HX_MARK_MEMBER_NAME(Font_Justify_obj::ALIGN_TOP_RIGHT,"ALIGN_TOP_RIGHT");
	HX_MARK_MEMBER_NAME(Font_Justify_obj::ALIGN_VCENTER_RIGHT,"ALIGN_VCENTER_RIGHT");
	HX_MARK_MEMBER_NAME(Font_Justify_obj::ALIGN_BOTTOM_RIGHT,"ALIGN_BOTTOM_RIGHT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Font_Justify_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Font_Justify_obj::ALIGN_LEFT,"ALIGN_LEFT");
	HX_VISIT_MEMBER_NAME(Font_Justify_obj::ALIGN_HCENTER,"ALIGN_HCENTER");
	HX_VISIT_MEMBER_NAME(Font_Justify_obj::ALIGN_RIGHT,"ALIGN_RIGHT");
	HX_VISIT_MEMBER_NAME(Font_Justify_obj::ALIGN_TOP,"ALIGN_TOP");
	HX_VISIT_MEMBER_NAME(Font_Justify_obj::ALIGN_VCENTER,"ALIGN_VCENTER");
	HX_VISIT_MEMBER_NAME(Font_Justify_obj::ALIGN_BOTTOM,"ALIGN_BOTTOM");
	HX_VISIT_MEMBER_NAME(Font_Justify_obj::ALIGN_TOP_LEFT,"ALIGN_TOP_LEFT");
	HX_VISIT_MEMBER_NAME(Font_Justify_obj::ALIGN_VCENTER_LEFT,"ALIGN_VCENTER_LEFT");
	HX_VISIT_MEMBER_NAME(Font_Justify_obj::ALIGN_BOTTOM_LEFT,"ALIGN_BOTTOM_LEFT");
	HX_VISIT_MEMBER_NAME(Font_Justify_obj::ALIGN_TOP_HCENTER,"ALIGN_TOP_HCENTER");
	HX_VISIT_MEMBER_NAME(Font_Justify_obj::ALIGN_VCENTER_HCENTER,"ALIGN_VCENTER_HCENTER");
	HX_VISIT_MEMBER_NAME(Font_Justify_obj::ALIGN_BOTTOM_HCENTER,"ALIGN_BOTTOM_HCENTER");
	HX_VISIT_MEMBER_NAME(Font_Justify_obj::ALIGN_TOP_RIGHT,"ALIGN_TOP_RIGHT");
	HX_VISIT_MEMBER_NAME(Font_Justify_obj::ALIGN_VCENTER_RIGHT,"ALIGN_VCENTER_RIGHT");
	HX_VISIT_MEMBER_NAME(Font_Justify_obj::ALIGN_BOTTOM_RIGHT,"ALIGN_BOTTOM_RIGHT");
};

#endif

Class Font_Justify_obj::__mClass;

void Font_Justify_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.Font_Justify"), hx::TCanCast< Font_Justify_obj> ,sStaticFields,sMemberFields,
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

void Font_Justify_obj::__boot()
{
	ALIGN_LEFT= (int)1;
	ALIGN_HCENTER= (int)2;
	ALIGN_RIGHT= (int)4;
	ALIGN_TOP= (int)16;
	ALIGN_VCENTER= (int)32;
	ALIGN_BOTTOM= (int)64;
	ALIGN_TOP_LEFT= (int)17;
	ALIGN_VCENTER_LEFT= (int)33;
	ALIGN_BOTTOM_LEFT= (int)65;
	ALIGN_TOP_HCENTER= (int)18;
	ALIGN_VCENTER_HCENTER= (int)34;
	ALIGN_BOTTOM_HCENTER= (int)66;
	ALIGN_TOP_RIGHT= (int)20;
	ALIGN_VCENTER_RIGHT= (int)36;
	ALIGN_BOTTOM_RIGHT= (int)68;
}

} // end namespace org
} // end namespace gameplay3d
