#include <hxcpp.h>

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
namespace intern{

Void NativeBinding_obj::__construct()
{
	return null();
}

//NativeBinding_obj::~NativeBinding_obj() { }

Dynamic NativeBinding_obj::__CreateEmpty() { return  new NativeBinding_obj; }
hx::ObjectPtr< NativeBinding_obj > NativeBinding_obj::__new()
{  hx::ObjectPtr< NativeBinding_obj > result = new NativeBinding_obj();
	result->__construct();
	return result;}

Dynamic NativeBinding_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NativeBinding_obj > result = new NativeBinding_obj();
	result->__construct();
	return result;}

hx::Object *NativeBinding_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::intern::INativeBinding_obj)) return operator ::org::gameplay3d::intern::INativeBinding_obj *();
	return super::__ToInterface(inType);
}

Dynamic NativeBinding_obj::impersonate( Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.intern.NativeBinding","impersonate",0x77a3610a,"org.gameplay3d.intern.NativeBinding.impersonate","org/gameplay3d/intern/NativeBinding.hx",19,0x9a324bc0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(20)
	this->nativeObject = nativeObject;
	HX_STACK_LINE(21)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(NativeBinding_obj,impersonate,return )

bool NativeBinding_obj::isEquivalentTo( ::org::gameplay3d::intern::INativeBinding object){
	HX_STACK_FRAME("org.gameplay3d.intern.NativeBinding","isEquivalentTo",0xb6c4d35e,"org.gameplay3d.intern.NativeBinding.isEquivalentTo","org/gameplay3d/intern/NativeBinding.hx",29,0x9a324bc0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(object,"object")
	HX_STACK_LINE(29)
	return ::org::gameplay3d::intern::NativeBinding_obj::testEquivalence(this->nativeObject,(  (((object == null()))) ? Dynamic(null()) : Dynamic(object->__Field(HX_CSTRING("nativeObject"),true)) ));
}


HX_DEFINE_DYNAMIC_FUNC1(NativeBinding_obj,isEquivalentTo,return )

Dynamic NativeBinding_obj::native( ::org::gameplay3d::intern::INativeBinding object){
	HX_STACK_FRAME("org.gameplay3d.intern.NativeBinding","native",0xa9347566,"org.gameplay3d.intern.NativeBinding.native","org/gameplay3d/intern/NativeBinding.hx",37,0x9a324bc0)
	HX_STACK_ARG(object,"object")
	HX_STACK_LINE(37)
	if (((object == null()))){
		HX_STACK_LINE(37)
		return null();
	}
	else{
		HX_STACK_LINE(37)
		return object->__Field(HX_CSTRING("nativeObject"),true);
	}
	HX_STACK_LINE(37)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeBinding_obj,native,return )

Dynamic NativeBinding_obj::testEquivalence;


NativeBinding_obj::NativeBinding_obj()
{
}

void NativeBinding_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NativeBinding);
	HX_MARK_MEMBER_NAME(nativeObject,"nativeObject");
	HX_MARK_END_CLASS();
}

void NativeBinding_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(nativeObject,"nativeObject");
}

Dynamic NativeBinding_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"native") ) { return native_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"impersonate") ) { return impersonate_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"nativeObject") ) { return nativeObject; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"isEquivalentTo") ) { return isEquivalentTo_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"testEquivalence") ) { return testEquivalence; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic NativeBinding_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"nativeObject") ) { nativeObject=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"testEquivalence") ) { testEquivalence=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NativeBinding_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("nativeObject"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("native"),
	HX_CSTRING("testEquivalence"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(NativeBinding_obj,nativeObject),HX_CSTRING("nativeObject")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("nativeObject"),
	HX_CSTRING("impersonate"),
	HX_CSTRING("isEquivalentTo"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NativeBinding_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(NativeBinding_obj::testEquivalence,"testEquivalence");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NativeBinding_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(NativeBinding_obj::testEquivalence,"testEquivalence");
};

#endif

Class NativeBinding_obj::__mClass;

void NativeBinding_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.intern.NativeBinding"), hx::TCanCast< NativeBinding_obj> ,sStaticFields,sMemberFields,
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

void NativeBinding_obj::__boot()
{
	testEquivalence= ::org::gameplay3d::util::NativeInterface_obj::load(HX_CSTRING("testEquivalence"),(int)2);
}

} // end namespace org
} // end namespace gameplay3d
} // end namespace intern
