#include <hxcpp.h>

#ifndef INCLUDED_org_gameplay3d_intern_Macros
#include <org/gameplay3d/intern/Macros.h>
#endif
namespace org{
namespace gameplay3d{
namespace intern{

Void Macros_obj::__construct()
{
	return null();
}

//Macros_obj::~Macros_obj() { }

Dynamic Macros_obj::__CreateEmpty() { return  new Macros_obj; }
hx::ObjectPtr< Macros_obj > Macros_obj::__new()
{  hx::ObjectPtr< Macros_obj > result = new Macros_obj();
	result->__construct();
	return result;}

Dynamic Macros_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Macros_obj > result = new Macros_obj();
	result->__construct();
	return result;}


Macros_obj::Macros_obj()
{
}

Dynamic Macros_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Macros_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Macros_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Macros_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Macros_obj::__mClass,"__mClass");
};

#endif

Class Macros_obj::__mClass;

void Macros_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.intern.Macros"), hx::TCanCast< Macros_obj> ,sStaticFields,sMemberFields,
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

void Macros_obj::__boot()
{
}

} // end namespace org
} // end namespace gameplay3d
} // end namespace intern
