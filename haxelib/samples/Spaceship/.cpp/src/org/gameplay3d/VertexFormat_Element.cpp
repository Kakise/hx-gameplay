#include <hxcpp.h>

#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_VertexFormat_Element
#include <org/gameplay3d/VertexFormat_Element.h>
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

Void VertexFormat_Element_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.VertexFormat_Element","new",0x1dedbe77,"org.gameplay3d.VertexFormat_Element.new","org/gameplay3d/VertexFormat_Element.hx",9,0xab2e4339)
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

//VertexFormat_Element_obj::~VertexFormat_Element_obj() { }

Dynamic VertexFormat_Element_obj::__CreateEmpty() { return  new VertexFormat_Element_obj; }
hx::ObjectPtr< VertexFormat_Element_obj > VertexFormat_Element_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< VertexFormat_Element_obj > result = new VertexFormat_Element_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic VertexFormat_Element_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VertexFormat_Element_obj > result = new VertexFormat_Element_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

int VertexFormat_Element_obj::get_usage( ){
	HX_STACK_FRAME("org.gameplay3d.VertexFormat_Element","get_usage",0x7506d2cf,"org.gameplay3d.VertexFormat_Element.get_usage","org/gameplay3d/VertexFormat_Element.hx",56,0xab2e4339)
	HX_STACK_THIS(this)
	HX_STACK_LINE(56)
	return ::org::gameplay3d::VertexFormat_Element_obj::hx_VertexFormat_Element_property_usage_get(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(VertexFormat_Element_obj,get_usage,return )

int VertexFormat_Element_obj::set_usage( int value){
	HX_STACK_FRAME("org.gameplay3d.VertexFormat_Element","set_usage",0x5857bedb,"org.gameplay3d.VertexFormat_Element.set_usage","org/gameplay3d/VertexFormat_Element.hx",61,0xab2e4339)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(61)
	return ::org::gameplay3d::VertexFormat_Element_obj::hx_VertexFormat_Element_property_usage_set(this->nativeObject,value);
}


HX_DEFINE_DYNAMIC_FUNC1(VertexFormat_Element_obj,set_usage,return )

int VertexFormat_Element_obj::get_size( ){
	HX_STACK_FRAME("org.gameplay3d.VertexFormat_Element","get_size",0xe5eafad3,"org.gameplay3d.VertexFormat_Element.get_size","org/gameplay3d/VertexFormat_Element.hx",66,0xab2e4339)
	HX_STACK_THIS(this)
	HX_STACK_LINE(66)
	return ::org::gameplay3d::VertexFormat_Element_obj::hx_VertexFormat_Element_property_size_get(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(VertexFormat_Element_obj,get_size,return )

int VertexFormat_Element_obj::set_size( Float value){
	HX_STACK_FRAME("org.gameplay3d.VertexFormat_Element","set_size",0x94485447,"org.gameplay3d.VertexFormat_Element.set_size","org/gameplay3d/VertexFormat_Element.hx",71,0xab2e4339)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(71)
	return ::org::gameplay3d::VertexFormat_Element_obj::hx_VertexFormat_Element_property_size_set(this->nativeObject,value);
}


HX_DEFINE_DYNAMIC_FUNC1(VertexFormat_Element_obj,set_size,return )

::org::gameplay3d::VertexFormat_Element VertexFormat_Element_obj::make( ){
	HX_STACK_FRAME("org.gameplay3d.VertexFormat_Element","make",0x116c9ff7,"org.gameplay3d.VertexFormat_Element.make","org/gameplay3d/VertexFormat_Element.hx",24,0xab2e4339)
	HX_STACK_LINE(25)
	Dynamic _g = ::org::gameplay3d::VertexFormat_Element_obj::constructNativeObject();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(25)
	return ::org::gameplay3d::VertexFormat_Element_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(VertexFormat_Element_obj,make,return )

::org::gameplay3d::VertexFormat_Element VertexFormat_Element_obj::make_IntX2( int usage,int size){
	HX_STACK_FRAME("org.gameplay3d.VertexFormat_Element","make_IntX2",0x2b98dde1,"org.gameplay3d.VertexFormat_Element.make_IntX2","org/gameplay3d/VertexFormat_Element.hx",30,0xab2e4339)
	HX_STACK_ARG(usage,"usage")
	HX_STACK_ARG(size,"size")
	HX_STACK_LINE(31)
	Dynamic _g = ::org::gameplay3d::VertexFormat_Element_obj::constructNativeObject_IntX2(usage,size);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(31)
	return ::org::gameplay3d::VertexFormat_Element_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(VertexFormat_Element_obj,make_IntX2,return )

Dynamic VertexFormat_Element_obj::constructNativeObject( ){
	HX_STACK_FRAME("org.gameplay3d.VertexFormat_Element","constructNativeObject",0xb5dfb244,"org.gameplay3d.VertexFormat_Element.constructNativeObject","org/gameplay3d/VertexFormat_Element.hx",41,0xab2e4339)
	HX_STACK_LINE(41)
	return ::org::gameplay3d::VertexFormat_Element_obj::hx_VertexFormat_Element_Construct();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(VertexFormat_Element_obj,constructNativeObject,return )

Dynamic VertexFormat_Element_obj::constructNativeObject_IntX2( int usage,int size){
	HX_STACK_FRAME("org.gameplay3d.VertexFormat_Element","constructNativeObject_IntX2",0x2c9a27ee,"org.gameplay3d.VertexFormat_Element.constructNativeObject_IntX2","org/gameplay3d/VertexFormat_Element.hx",47,0xab2e4339)
	HX_STACK_ARG(usage,"usage")
	HX_STACK_ARG(size,"size")
	HX_STACK_LINE(47)
	return ::org::gameplay3d::VertexFormat_Element_obj::hx_VertexFormat_Element_Construct_IntX2(usage,size);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(VertexFormat_Element_obj,constructNativeObject_IntX2,return )

Dynamic VertexFormat_Element_obj::hx_VertexFormat_Element_Construct;

Dynamic VertexFormat_Element_obj::hx_VertexFormat_Element_Construct_IntX2;

Dynamic VertexFormat_Element_obj::hx_VertexFormat_Element_property_usage_get;

Dynamic VertexFormat_Element_obj::hx_VertexFormat_Element_property_usage_set;

Dynamic VertexFormat_Element_obj::hx_VertexFormat_Element_property_size_get;

Dynamic VertexFormat_Element_obj::hx_VertexFormat_Element_property_size_set;


VertexFormat_Element_obj::VertexFormat_Element_obj()
{
}

Dynamic VertexFormat_Element_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { return make_dyn(); }
		if (HX_FIELD_EQ(inName,"size") ) { return get_size(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"usage") ) { return get_usage(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_size") ) { return get_size_dyn(); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_usage") ) { return get_usage_dyn(); }
		if (HX_FIELD_EQ(inName,"set_usage") ) { return set_usage_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"make_IntX2") ) { return make_IntX2_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"constructNativeObject") ) { return constructNativeObject_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"constructNativeObject_IntX2") ) { return constructNativeObject_IntX2_dyn(); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"hx_VertexFormat_Element_Construct") ) { return hx_VertexFormat_Element_Construct; }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"hx_VertexFormat_Element_Construct_IntX2") ) { return hx_VertexFormat_Element_Construct_IntX2; }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"hx_VertexFormat_Element_property_size_get") ) { return hx_VertexFormat_Element_property_size_get; }
		if (HX_FIELD_EQ(inName,"hx_VertexFormat_Element_property_size_set") ) { return hx_VertexFormat_Element_property_size_set; }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"hx_VertexFormat_Element_property_usage_get") ) { return hx_VertexFormat_Element_property_usage_get; }
		if (HX_FIELD_EQ(inName,"hx_VertexFormat_Element_property_usage_set") ) { return hx_VertexFormat_Element_property_usage_set; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic VertexFormat_Element_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return set_size(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"usage") ) { return set_usage(inValue); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"hx_VertexFormat_Element_Construct") ) { hx_VertexFormat_Element_Construct=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"hx_VertexFormat_Element_Construct_IntX2") ) { hx_VertexFormat_Element_Construct_IntX2=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"hx_VertexFormat_Element_property_size_get") ) { hx_VertexFormat_Element_property_size_get=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_VertexFormat_Element_property_size_set") ) { hx_VertexFormat_Element_property_size_set=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"hx_VertexFormat_Element_property_usage_get") ) { hx_VertexFormat_Element_property_usage_get=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_VertexFormat_Element_property_usage_set") ) { hx_VertexFormat_Element_property_usage_set=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VertexFormat_Element_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("usage"));
	outFields->push(HX_CSTRING("size"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("make"),
	HX_CSTRING("make_IntX2"),
	HX_CSTRING("constructNativeObject"),
	HX_CSTRING("constructNativeObject_IntX2"),
	HX_CSTRING("hx_VertexFormat_Element_Construct"),
	HX_CSTRING("hx_VertexFormat_Element_Construct_IntX2"),
	HX_CSTRING("hx_VertexFormat_Element_property_usage_get"),
	HX_CSTRING("hx_VertexFormat_Element_property_usage_set"),
	HX_CSTRING("hx_VertexFormat_Element_property_size_get"),
	HX_CSTRING("hx_VertexFormat_Element_property_size_set"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("get_usage"),
	HX_CSTRING("set_usage"),
	HX_CSTRING("get_size"),
	HX_CSTRING("set_size"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VertexFormat_Element_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(VertexFormat_Element_obj::hx_VertexFormat_Element_Construct,"hx_VertexFormat_Element_Construct");
	HX_MARK_MEMBER_NAME(VertexFormat_Element_obj::hx_VertexFormat_Element_Construct_IntX2,"hx_VertexFormat_Element_Construct_IntX2");
	HX_MARK_MEMBER_NAME(VertexFormat_Element_obj::hx_VertexFormat_Element_property_usage_get,"hx_VertexFormat_Element_property_usage_get");
	HX_MARK_MEMBER_NAME(VertexFormat_Element_obj::hx_VertexFormat_Element_property_usage_set,"hx_VertexFormat_Element_property_usage_set");
	HX_MARK_MEMBER_NAME(VertexFormat_Element_obj::hx_VertexFormat_Element_property_size_get,"hx_VertexFormat_Element_property_size_get");
	HX_MARK_MEMBER_NAME(VertexFormat_Element_obj::hx_VertexFormat_Element_property_size_set,"hx_VertexFormat_Element_property_size_set");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VertexFormat_Element_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(VertexFormat_Element_obj::hx_VertexFormat_Element_Construct,"hx_VertexFormat_Element_Construct");
	HX_VISIT_MEMBER_NAME(VertexFormat_Element_obj::hx_VertexFormat_Element_Construct_IntX2,"hx_VertexFormat_Element_Construct_IntX2");
	HX_VISIT_MEMBER_NAME(VertexFormat_Element_obj::hx_VertexFormat_Element_property_usage_get,"hx_VertexFormat_Element_property_usage_get");
	HX_VISIT_MEMBER_NAME(VertexFormat_Element_obj::hx_VertexFormat_Element_property_usage_set,"hx_VertexFormat_Element_property_usage_set");
	HX_VISIT_MEMBER_NAME(VertexFormat_Element_obj::hx_VertexFormat_Element_property_size_get,"hx_VertexFormat_Element_property_size_get");
	HX_VISIT_MEMBER_NAME(VertexFormat_Element_obj::hx_VertexFormat_Element_property_size_set,"hx_VertexFormat_Element_property_size_set");
};

#endif

Class VertexFormat_Element_obj::__mClass;

void VertexFormat_Element_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.VertexFormat_Element"), hx::TCanCast< VertexFormat_Element_obj> ,sStaticFields,sMemberFields,
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

void VertexFormat_Element_obj::__boot()
{
	hx_VertexFormat_Element_Construct= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::VertexFormat_Element >(),HX_CSTRING("Construct"),(int)0);
	hx_VertexFormat_Element_Construct_IntX2= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::VertexFormat_Element >(),HX_CSTRING("Construct_IntX2"),(int)2);
	hx_VertexFormat_Element_property_usage_get= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::VertexFormat_Element >(),HX_CSTRING("property_usage_get"),(int)1);
	hx_VertexFormat_Element_property_usage_set= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::VertexFormat_Element >(),HX_CSTRING("property_usage_set"),(int)2);
	hx_VertexFormat_Element_property_size_get= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::VertexFormat_Element >(),HX_CSTRING("property_size_get"),(int)1);
	hx_VertexFormat_Element_property_size_set= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::VertexFormat_Element >(),HX_CSTRING("property_size_set"),(int)2);
}

} // end namespace org
} // end namespace gameplay3d
