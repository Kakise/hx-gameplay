#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_cpp_vm_WeakRef
#include <cpp/vm/WeakRef.h>
#endif
#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Theme_SideRegions
#include <org/gameplay3d/Theme_SideRegions.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_ITheme_SideRegions
#include <org/gameplay3d/immutable/ITheme_SideRegions.h>
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

Void Theme_SideRegions_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.Theme_SideRegions","new",0x7a2a34b7,"org.gameplay3d.Theme_SideRegions.new","org/gameplay3d/Theme_SideRegions.hx",15,0x4d0b0c39)
HX_STACK_THIS(this)
HX_STACK_ARG(nativeObjectInitializer,"nativeObjectInitializer")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(15)
	super::__construct(nativeObjectInitializer,nativeObjectInitializerParams);
}
;
	return null();
}

//Theme_SideRegions_obj::~Theme_SideRegions_obj() { }

Dynamic Theme_SideRegions_obj::__CreateEmpty() { return  new Theme_SideRegions_obj; }
hx::ObjectPtr< Theme_SideRegions_obj > Theme_SideRegions_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< Theme_SideRegions_obj > result = new Theme_SideRegions_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic Theme_SideRegions_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Theme_SideRegions_obj > result = new Theme_SideRegions_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *Theme_SideRegions_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::immutable::ITheme_SideRegions_obj)) return operator ::org::gameplay3d::immutable::ITheme_SideRegions_obj *();
	return super::__ToInterface(inType);
}

Float Theme_SideRegions_obj::get_top( ){
	HX_STACK_FRAME("org.gameplay3d.Theme_SideRegions","get_top",0x6d820b03,"org.gameplay3d.Theme_SideRegions.get_top","org/gameplay3d/Theme_SideRegions.hx",60,0x4d0b0c39)
	HX_STACK_THIS(this)
	HX_STACK_LINE(60)
	return ::org::gameplay3d::Theme_SideRegions_obj::hx_Theme_SideRegions_property_top_get(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Theme_SideRegions_obj,get_top,return )

Float Theme_SideRegions_obj::set_top( Float value){
	HX_STACK_FRAME("org.gameplay3d.Theme_SideRegions","set_top",0x60839c0f,"org.gameplay3d.Theme_SideRegions.set_top","org/gameplay3d/Theme_SideRegions.hx",65,0x4d0b0c39)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(65)
	return ::org::gameplay3d::Theme_SideRegions_obj::hx_Theme_SideRegions_property_top_set(this->nativeObject,value);
}


HX_DEFINE_DYNAMIC_FUNC1(Theme_SideRegions_obj,set_top,return )

Float Theme_SideRegions_obj::get_left( ){
	HX_STACK_FRAME("org.gameplay3d.Theme_SideRegions","get_left",0x5ef643d9,"org.gameplay3d.Theme_SideRegions.get_left","org/gameplay3d/Theme_SideRegions.hx",70,0x4d0b0c39)
	HX_STACK_THIS(this)
	HX_STACK_LINE(70)
	return ::org::gameplay3d::Theme_SideRegions_obj::hx_Theme_SideRegions_property_left_get(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Theme_SideRegions_obj,get_left,return )

Float Theme_SideRegions_obj::set_left( Float value){
	HX_STACK_FRAME("org.gameplay3d.Theme_SideRegions","set_left",0x0d539d4d,"org.gameplay3d.Theme_SideRegions.set_left","org/gameplay3d/Theme_SideRegions.hx",75,0x4d0b0c39)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(75)
	return ::org::gameplay3d::Theme_SideRegions_obj::hx_Theme_SideRegions_property_left_set(this->nativeObject,value);
}


HX_DEFINE_DYNAMIC_FUNC1(Theme_SideRegions_obj,set_left,return )

Float Theme_SideRegions_obj::get_bottom( ){
	HX_STACK_FRAME("org.gameplay3d.Theme_SideRegions","get_bottom",0x87a33b3d,"org.gameplay3d.Theme_SideRegions.get_bottom","org/gameplay3d/Theme_SideRegions.hx",80,0x4d0b0c39)
	HX_STACK_THIS(this)
	HX_STACK_LINE(80)
	return ::org::gameplay3d::Theme_SideRegions_obj::hx_Theme_SideRegions_property_bottom_get(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Theme_SideRegions_obj,get_bottom,return )

Float Theme_SideRegions_obj::set_bottom( Float value){
	HX_STACK_FRAME("org.gameplay3d.Theme_SideRegions","set_bottom",0x8b20d9b1,"org.gameplay3d.Theme_SideRegions.set_bottom","org/gameplay3d/Theme_SideRegions.hx",85,0x4d0b0c39)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(85)
	return ::org::gameplay3d::Theme_SideRegions_obj::hx_Theme_SideRegions_property_bottom_set(this->nativeObject,value);
}


HX_DEFINE_DYNAMIC_FUNC1(Theme_SideRegions_obj,set_bottom,return )

Float Theme_SideRegions_obj::get_right( ){
	HX_STACK_FRAME("org.gameplay3d.Theme_SideRegions","get_right",0x2f9227ca,"org.gameplay3d.Theme_SideRegions.get_right","org/gameplay3d/Theme_SideRegions.hx",90,0x4d0b0c39)
	HX_STACK_THIS(this)
	HX_STACK_LINE(90)
	return ::org::gameplay3d::Theme_SideRegions_obj::hx_Theme_SideRegions_property_right_get(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Theme_SideRegions_obj,get_right,return )

Float Theme_SideRegions_obj::set_right( Float value){
	HX_STACK_FRAME("org.gameplay3d.Theme_SideRegions","set_right",0x12e313d6,"org.gameplay3d.Theme_SideRegions.set_right","org/gameplay3d/Theme_SideRegions.hx",95,0x4d0b0c39)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(95)
	return ::org::gameplay3d::Theme_SideRegions_obj::hx_Theme_SideRegions_property_right_set(this->nativeObject,value);
}


HX_DEFINE_DYNAMIC_FUNC1(Theme_SideRegions_obj,set_right,return )

::org::gameplay3d::Theme_SideRegions Theme_SideRegions_obj::_empty;

::org::gameplay3d::Theme_SideRegions Theme_SideRegions_obj::make( ){
	HX_STACK_FRAME("org.gameplay3d.Theme_SideRegions","make",0x6a17a1b7,"org.gameplay3d.Theme_SideRegions.make","org/gameplay3d/Theme_SideRegions.hx",34,0x4d0b0c39)
	HX_STACK_LINE(35)
	Dynamic _g = ::org::gameplay3d::Theme_SideRegions_obj::constructNativeObject();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(35)
	return ::org::gameplay3d::Theme_SideRegions_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Theme_SideRegions_obj,make,return )

::org::gameplay3d::immutable::ITheme_SideRegions Theme_SideRegions_obj::empty( ){
	HX_STACK_FRAME("org.gameplay3d.Theme_SideRegions","empty",0xd753a2a4,"org.gameplay3d.Theme_SideRegions.empty","org/gameplay3d/Theme_SideRegions.hx",41,0x4d0b0c39)
	HX_STACK_LINE(28)
	if (((::org::gameplay3d::Theme_SideRegions_obj::_empty == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Theme_SideRegions _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Theme_SideRegions >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(41)
			Dynamic nativeObject = ::org::gameplay3d::Theme_SideRegions_obj::hx_Theme_SideRegions_static_empty();		HX_STACK_VAR(nativeObject,"nativeObject");
			HX_STACK_LINE(29)
			if (((nativeObject == null()))){
				HX_STACK_LINE(29)
				_g1 = null();
			}
			else{
				HX_STACK_LINE(29)
				if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
					HX_STACK_LINE(29)
					::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
					HX_STACK_LINE(29)
					::org::gameplay3d::Theme_SideRegions result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Theme_SideRegions _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(29)
						result = _g;
						HX_STACK_LINE(29)
						ref->set(result);
					}
					HX_STACK_LINE(29)
					_g1 = result;
				}
				else{
					HX_STACK_LINE(29)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
					HX_STACK_LINE(29)
					_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
				}
			}
		}
		HX_STACK_LINE(29)
		return ::org::gameplay3d::Theme_SideRegions_obj::_empty = _g1;
	}
	else{
		HX_STACK_LINE(41)
		Dynamic _g2 = ::org::gameplay3d::Theme_SideRegions_obj::hx_Theme_SideRegions_static_empty();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Theme_SideRegions _g3 = ::org::gameplay3d::Theme_SideRegions_obj::_empty->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return ::org::gameplay3d::Theme_SideRegions_obj::_empty = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Theme_SideRegions_obj,empty,return )

Dynamic Theme_SideRegions_obj::constructNativeObject( ){
	HX_STACK_FRAME("org.gameplay3d.Theme_SideRegions","constructNativeObject",0x1bb6b884,"org.gameplay3d.Theme_SideRegions.constructNativeObject","org/gameplay3d/Theme_SideRegions.hx",51,0x4d0b0c39)
	HX_STACK_LINE(51)
	return ::org::gameplay3d::Theme_SideRegions_obj::hx_Theme_SideRegions_Construct();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Theme_SideRegions_obj,constructNativeObject,return )

Dynamic Theme_SideRegions_obj::hx_Theme_SideRegions_Construct;

Dynamic Theme_SideRegions_obj::hx_Theme_SideRegions_static_empty;

Dynamic Theme_SideRegions_obj::hx_Theme_SideRegions_property_top_get;

Dynamic Theme_SideRegions_obj::hx_Theme_SideRegions_property_top_set;

Dynamic Theme_SideRegions_obj::hx_Theme_SideRegions_property_left_get;

Dynamic Theme_SideRegions_obj::hx_Theme_SideRegions_property_left_set;

Dynamic Theme_SideRegions_obj::hx_Theme_SideRegions_property_bottom_get;

Dynamic Theme_SideRegions_obj::hx_Theme_SideRegions_property_bottom_set;

Dynamic Theme_SideRegions_obj::hx_Theme_SideRegions_property_right_get;

Dynamic Theme_SideRegions_obj::hx_Theme_SideRegions_property_right_set;


Theme_SideRegions_obj::Theme_SideRegions_obj()
{
}

Dynamic Theme_SideRegions_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { return get_top(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { return make_dyn(); }
		if (HX_FIELD_EQ(inName,"left") ) { return get_left(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"right") ) { return get_right(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_empty") ) { return _empty; }
		if (HX_FIELD_EQ(inName,"bottom") ) { return get_bottom(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_top") ) { return get_top_dyn(); }
		if (HX_FIELD_EQ(inName,"set_top") ) { return set_top_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_left") ) { return get_left_dyn(); }
		if (HX_FIELD_EQ(inName,"set_left") ) { return set_left_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_right") ) { return get_right_dyn(); }
		if (HX_FIELD_EQ(inName,"set_right") ) { return set_right_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_bottom") ) { return get_bottom_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bottom") ) { return set_bottom_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"constructNativeObject") ) { return constructNativeObject_dyn(); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"hx_Theme_SideRegions_Construct") ) { return hx_Theme_SideRegions_Construct; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"hx_Theme_SideRegions_static_empty") ) { return hx_Theme_SideRegions_static_empty; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"hx_Theme_SideRegions_property_top_get") ) { return hx_Theme_SideRegions_property_top_get; }
		if (HX_FIELD_EQ(inName,"hx_Theme_SideRegions_property_top_set") ) { return hx_Theme_SideRegions_property_top_set; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"hx_Theme_SideRegions_property_left_get") ) { return hx_Theme_SideRegions_property_left_get; }
		if (HX_FIELD_EQ(inName,"hx_Theme_SideRegions_property_left_set") ) { return hx_Theme_SideRegions_property_left_set; }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"hx_Theme_SideRegions_property_right_get") ) { return hx_Theme_SideRegions_property_right_get; }
		if (HX_FIELD_EQ(inName,"hx_Theme_SideRegions_property_right_set") ) { return hx_Theme_SideRegions_property_right_set; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"hx_Theme_SideRegions_property_bottom_get") ) { return hx_Theme_SideRegions_property_bottom_get; }
		if (HX_FIELD_EQ(inName,"hx_Theme_SideRegions_property_bottom_set") ) { return hx_Theme_SideRegions_property_bottom_set; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Theme_SideRegions_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { return set_top(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return set_left(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { return set_right(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_empty") ) { _empty=inValue.Cast< ::org::gameplay3d::Theme_SideRegions >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bottom") ) { return set_bottom(inValue); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"hx_Theme_SideRegions_Construct") ) { hx_Theme_SideRegions_Construct=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"hx_Theme_SideRegions_static_empty") ) { hx_Theme_SideRegions_static_empty=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"hx_Theme_SideRegions_property_top_get") ) { hx_Theme_SideRegions_property_top_get=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Theme_SideRegions_property_top_set") ) { hx_Theme_SideRegions_property_top_set=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"hx_Theme_SideRegions_property_left_get") ) { hx_Theme_SideRegions_property_left_get=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Theme_SideRegions_property_left_set") ) { hx_Theme_SideRegions_property_left_set=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"hx_Theme_SideRegions_property_right_get") ) { hx_Theme_SideRegions_property_right_get=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Theme_SideRegions_property_right_set") ) { hx_Theme_SideRegions_property_right_set=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"hx_Theme_SideRegions_property_bottom_get") ) { hx_Theme_SideRegions_property_bottom_get=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Theme_SideRegions_property_bottom_set") ) { hx_Theme_SideRegions_property_bottom_set=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Theme_SideRegions_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("top"));
	outFields->push(HX_CSTRING("left"));
	outFields->push(HX_CSTRING("bottom"));
	outFields->push(HX_CSTRING("right"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_empty"),
	HX_CSTRING("make"),
	HX_CSTRING("empty"),
	HX_CSTRING("constructNativeObject"),
	HX_CSTRING("hx_Theme_SideRegions_Construct"),
	HX_CSTRING("hx_Theme_SideRegions_static_empty"),
	HX_CSTRING("hx_Theme_SideRegions_property_top_get"),
	HX_CSTRING("hx_Theme_SideRegions_property_top_set"),
	HX_CSTRING("hx_Theme_SideRegions_property_left_get"),
	HX_CSTRING("hx_Theme_SideRegions_property_left_set"),
	HX_CSTRING("hx_Theme_SideRegions_property_bottom_get"),
	HX_CSTRING("hx_Theme_SideRegions_property_bottom_set"),
	HX_CSTRING("hx_Theme_SideRegions_property_right_get"),
	HX_CSTRING("hx_Theme_SideRegions_property_right_set"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("get_top"),
	HX_CSTRING("set_top"),
	HX_CSTRING("get_left"),
	HX_CSTRING("set_left"),
	HX_CSTRING("get_bottom"),
	HX_CSTRING("set_bottom"),
	HX_CSTRING("get_right"),
	HX_CSTRING("set_right"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Theme_SideRegions_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Theme_SideRegions_obj::_empty,"_empty");
	HX_MARK_MEMBER_NAME(Theme_SideRegions_obj::hx_Theme_SideRegions_Construct,"hx_Theme_SideRegions_Construct");
	HX_MARK_MEMBER_NAME(Theme_SideRegions_obj::hx_Theme_SideRegions_static_empty,"hx_Theme_SideRegions_static_empty");
	HX_MARK_MEMBER_NAME(Theme_SideRegions_obj::hx_Theme_SideRegions_property_top_get,"hx_Theme_SideRegions_property_top_get");
	HX_MARK_MEMBER_NAME(Theme_SideRegions_obj::hx_Theme_SideRegions_property_top_set,"hx_Theme_SideRegions_property_top_set");
	HX_MARK_MEMBER_NAME(Theme_SideRegions_obj::hx_Theme_SideRegions_property_left_get,"hx_Theme_SideRegions_property_left_get");
	HX_MARK_MEMBER_NAME(Theme_SideRegions_obj::hx_Theme_SideRegions_property_left_set,"hx_Theme_SideRegions_property_left_set");
	HX_MARK_MEMBER_NAME(Theme_SideRegions_obj::hx_Theme_SideRegions_property_bottom_get,"hx_Theme_SideRegions_property_bottom_get");
	HX_MARK_MEMBER_NAME(Theme_SideRegions_obj::hx_Theme_SideRegions_property_bottom_set,"hx_Theme_SideRegions_property_bottom_set");
	HX_MARK_MEMBER_NAME(Theme_SideRegions_obj::hx_Theme_SideRegions_property_right_get,"hx_Theme_SideRegions_property_right_get");
	HX_MARK_MEMBER_NAME(Theme_SideRegions_obj::hx_Theme_SideRegions_property_right_set,"hx_Theme_SideRegions_property_right_set");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Theme_SideRegions_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Theme_SideRegions_obj::_empty,"_empty");
	HX_VISIT_MEMBER_NAME(Theme_SideRegions_obj::hx_Theme_SideRegions_Construct,"hx_Theme_SideRegions_Construct");
	HX_VISIT_MEMBER_NAME(Theme_SideRegions_obj::hx_Theme_SideRegions_static_empty,"hx_Theme_SideRegions_static_empty");
	HX_VISIT_MEMBER_NAME(Theme_SideRegions_obj::hx_Theme_SideRegions_property_top_get,"hx_Theme_SideRegions_property_top_get");
	HX_VISIT_MEMBER_NAME(Theme_SideRegions_obj::hx_Theme_SideRegions_property_top_set,"hx_Theme_SideRegions_property_top_set");
	HX_VISIT_MEMBER_NAME(Theme_SideRegions_obj::hx_Theme_SideRegions_property_left_get,"hx_Theme_SideRegions_property_left_get");
	HX_VISIT_MEMBER_NAME(Theme_SideRegions_obj::hx_Theme_SideRegions_property_left_set,"hx_Theme_SideRegions_property_left_set");
	HX_VISIT_MEMBER_NAME(Theme_SideRegions_obj::hx_Theme_SideRegions_property_bottom_get,"hx_Theme_SideRegions_property_bottom_get");
	HX_VISIT_MEMBER_NAME(Theme_SideRegions_obj::hx_Theme_SideRegions_property_bottom_set,"hx_Theme_SideRegions_property_bottom_set");
	HX_VISIT_MEMBER_NAME(Theme_SideRegions_obj::hx_Theme_SideRegions_property_right_get,"hx_Theme_SideRegions_property_right_get");
	HX_VISIT_MEMBER_NAME(Theme_SideRegions_obj::hx_Theme_SideRegions_property_right_set,"hx_Theme_SideRegions_property_right_set");
};

#endif

Class Theme_SideRegions_obj::__mClass;

void Theme_SideRegions_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.Theme_SideRegions"), hx::TCanCast< Theme_SideRegions_obj> ,sStaticFields,sMemberFields,
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

void Theme_SideRegions_obj::__boot()
{
	hx_Theme_SideRegions_Construct= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Theme_SideRegions >(),HX_CSTRING("Construct"),(int)0);
	hx_Theme_SideRegions_static_empty= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Theme_SideRegions >(),HX_CSTRING("static_empty"),(int)0);
	hx_Theme_SideRegions_property_top_get= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Theme_SideRegions >(),HX_CSTRING("property_top_get"),(int)1);
	hx_Theme_SideRegions_property_top_set= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Theme_SideRegions >(),HX_CSTRING("property_top_set"),(int)2);
	hx_Theme_SideRegions_property_left_get= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Theme_SideRegions >(),HX_CSTRING("property_left_get"),(int)1);
	hx_Theme_SideRegions_property_left_set= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Theme_SideRegions >(),HX_CSTRING("property_left_set"),(int)2);
	hx_Theme_SideRegions_property_bottom_get= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Theme_SideRegions >(),HX_CSTRING("property_bottom_get"),(int)1);
	hx_Theme_SideRegions_property_bottom_set= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Theme_SideRegions >(),HX_CSTRING("property_bottom_set"),(int)2);
	hx_Theme_SideRegions_property_right_get= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Theme_SideRegions >(),HX_CSTRING("property_right_get"),(int)1);
	hx_Theme_SideRegions_property_right_set= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Theme_SideRegions >(),HX_CSTRING("property_right_set"),(int)2);
}

} // end namespace org
} // end namespace gameplay3d
