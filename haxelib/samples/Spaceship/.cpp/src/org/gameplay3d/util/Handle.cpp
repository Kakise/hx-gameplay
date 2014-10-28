#include <hxcpp.h>

#ifndef INCLUDED_org_gameplay3d_intern_INativeBinding
#include <org/gameplay3d/intern/INativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_NativeBinding
#include <org/gameplay3d/intern/NativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_Handle
#include <org/gameplay3d/util/Handle.h>
#endif
namespace org{
namespace gameplay3d{
namespace util{

Void Handle_obj::__construct(Dynamic nativeObject)
{
HX_STACK_FRAME("org.gameplay3d.util.Handle","new",0xa2d7bab9,"org.gameplay3d.util.Handle.new","org/gameplay3d/util/Handle.hx",15,0xb5063c56)
HX_STACK_THIS(this)
HX_STACK_ARG(nativeObject,"nativeObject")
{
	HX_STACK_LINE(15)
	this->nativeObject = nativeObject;
}
;
	return null();
}

//Handle_obj::~Handle_obj() { }

Dynamic Handle_obj::__CreateEmpty() { return  new Handle_obj; }
hx::ObjectPtr< Handle_obj > Handle_obj::__new(Dynamic nativeObject)
{  hx::ObjectPtr< Handle_obj > result = new Handle_obj();
	result->__construct(nativeObject);
	return result;}

Dynamic Handle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Handle_obj > result = new Handle_obj();
	result->__construct(inArgs[0]);
	return result;}

::org::gameplay3d::util::Handle Handle_obj::wrap( Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.util.Handle","wrap",0xdfe85d51,"org.gameplay3d.util.Handle.wrap","org/gameplay3d/util/Handle.hx",23,0xb5063c56)
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(24)
	if (((nativeObject == null()))){
		HX_STACK_LINE(25)
		return null();
	}
	else{
		HX_STACK_LINE(27)
		return ::org::gameplay3d::util::Handle_obj::__new(nativeObject);
	}
	HX_STACK_LINE(24)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Handle_obj,wrap,return )


Handle_obj::Handle_obj()
{
}

Dynamic Handle_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"wrap") ) { return wrap_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Handle_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Handle_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("wrap"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Handle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Handle_obj::__mClass,"__mClass");
};

#endif

Class Handle_obj::__mClass;

void Handle_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.util.Handle"), hx::TCanCast< Handle_obj> ,sStaticFields,sMemberFields,
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

void Handle_obj::__boot()
{
}

} // end namespace org
} // end namespace gameplay3d
} // end namespace util
