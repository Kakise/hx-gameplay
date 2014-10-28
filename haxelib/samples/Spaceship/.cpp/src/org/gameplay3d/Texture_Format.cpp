#include <hxcpp.h>

#ifndef INCLUDED_org_gameplay3d_Texture_Format
#include <org/gameplay3d/Texture_Format.h>
#endif
namespace org{
namespace gameplay3d{

Void Texture_Format_obj::__construct()
{
	return null();
}

//Texture_Format_obj::~Texture_Format_obj() { }

Dynamic Texture_Format_obj::__CreateEmpty() { return  new Texture_Format_obj; }
hx::ObjectPtr< Texture_Format_obj > Texture_Format_obj::__new()
{  hx::ObjectPtr< Texture_Format_obj > result = new Texture_Format_obj();
	result->__construct();
	return result;}

Dynamic Texture_Format_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Texture_Format_obj > result = new Texture_Format_obj();
	result->__construct();
	return result;}

int Texture_Format_obj::UNKNOWN;

int Texture_Format_obj::RGB;

int Texture_Format_obj::RGBA;

int Texture_Format_obj::ALPHA;


Texture_Format_obj::Texture_Format_obj()
{
}

Dynamic Texture_Format_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Texture_Format_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Texture_Format_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("UNKNOWN"),
	HX_CSTRING("RGB"),
	HX_CSTRING("RGBA"),
	HX_CSTRING("ALPHA"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Texture_Format_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Texture_Format_obj::UNKNOWN,"UNKNOWN");
	HX_MARK_MEMBER_NAME(Texture_Format_obj::RGB,"RGB");
	HX_MARK_MEMBER_NAME(Texture_Format_obj::RGBA,"RGBA");
	HX_MARK_MEMBER_NAME(Texture_Format_obj::ALPHA,"ALPHA");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Texture_Format_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Texture_Format_obj::UNKNOWN,"UNKNOWN");
	HX_VISIT_MEMBER_NAME(Texture_Format_obj::RGB,"RGB");
	HX_VISIT_MEMBER_NAME(Texture_Format_obj::RGBA,"RGBA");
	HX_VISIT_MEMBER_NAME(Texture_Format_obj::ALPHA,"ALPHA");
};

#endif

Class Texture_Format_obj::__mClass;

void Texture_Format_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.Texture_Format"), hx::TCanCast< Texture_Format_obj> ,sStaticFields,sMemberFields,
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

void Texture_Format_obj::__boot()
{
	UNKNOWN= (int)0;
	RGB= (int)6407;
	RGBA= (int)6408;
	ALPHA= (int)6406;
}

} // end namespace org
} // end namespace gameplay3d
