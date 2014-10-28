#include <hxcpp.h>

#ifndef INCLUDED_org_gameplay3d_Layout_Type
#include <org/gameplay3d/Layout_Type.h>
#endif
namespace org{
namespace gameplay3d{

Void Layout_Type_obj::__construct()
{
	return null();
}

//Layout_Type_obj::~Layout_Type_obj() { }

Dynamic Layout_Type_obj::__CreateEmpty() { return  new Layout_Type_obj; }
hx::ObjectPtr< Layout_Type_obj > Layout_Type_obj::__new()
{  hx::ObjectPtr< Layout_Type_obj > result = new Layout_Type_obj();
	result->__construct();
	return result;}

Dynamic Layout_Type_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Layout_Type_obj > result = new Layout_Type_obj();
	result->__construct();
	return result;}

int Layout_Type_obj::LAYOUT_FLOW;

int Layout_Type_obj::LAYOUT_VERTICAL;

int Layout_Type_obj::LAYOUT_ABSOLUTE;


Layout_Type_obj::Layout_Type_obj()
{
}

Dynamic Layout_Type_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Layout_Type_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Layout_Type_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("LAYOUT_FLOW"),
	HX_CSTRING("LAYOUT_VERTICAL"),
	HX_CSTRING("LAYOUT_ABSOLUTE"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Layout_Type_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Layout_Type_obj::LAYOUT_FLOW,"LAYOUT_FLOW");
	HX_MARK_MEMBER_NAME(Layout_Type_obj::LAYOUT_VERTICAL,"LAYOUT_VERTICAL");
	HX_MARK_MEMBER_NAME(Layout_Type_obj::LAYOUT_ABSOLUTE,"LAYOUT_ABSOLUTE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Layout_Type_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Layout_Type_obj::LAYOUT_FLOW,"LAYOUT_FLOW");
	HX_VISIT_MEMBER_NAME(Layout_Type_obj::LAYOUT_VERTICAL,"LAYOUT_VERTICAL");
	HX_VISIT_MEMBER_NAME(Layout_Type_obj::LAYOUT_ABSOLUTE,"LAYOUT_ABSOLUTE");
};

#endif

Class Layout_Type_obj::__mClass;

void Layout_Type_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.Layout_Type"), hx::TCanCast< Layout_Type_obj> ,sStaticFields,sMemberFields,
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

void Layout_Type_obj::__boot()
{
	LAYOUT_FLOW= (int)0;
	LAYOUT_VERTICAL= (int)1;
	LAYOUT_ABSOLUTE= (int)2;
}

} // end namespace org
} // end namespace gameplay3d
