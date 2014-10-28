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
#ifndef INCLUDED_org_gameplay3d_Theme_UVs
#include <org/gameplay3d/Theme_UVs.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_ITheme_UVs
#include <org/gameplay3d/immutable/ITheme_UVs.h>
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

Void Theme_UVs_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.Theme_UVs","new",0x7dd9ffa1,"org.gameplay3d.Theme_UVs.new","org/gameplay3d/Theme_UVs.hx",11,0x22c4ec8f)
HX_STACK_THIS(this)
HX_STACK_ARG(nativeObjectInitializer,"nativeObjectInitializer")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(11)
	super::__construct(nativeObjectInitializer,nativeObjectInitializerParams);
}
;
	return null();
}

//Theme_UVs_obj::~Theme_UVs_obj() { }

Dynamic Theme_UVs_obj::__CreateEmpty() { return  new Theme_UVs_obj; }
hx::ObjectPtr< Theme_UVs_obj > Theme_UVs_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< Theme_UVs_obj > result = new Theme_UVs_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic Theme_UVs_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Theme_UVs_obj > result = new Theme_UVs_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *Theme_UVs_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::intern::INativeBinding_obj)) return operator ::org::gameplay3d::intern::INativeBinding_obj *();
	if (inType==typeid( ::org::gameplay3d::immutable::ITheme_UVs_obj)) return operator ::org::gameplay3d::immutable::ITheme_UVs_obj *();
	return super::__ToInterface(inType);
}

Float Theme_UVs_obj::get_u1( ){
	HX_STACK_FRAME("org.gameplay3d.Theme_UVs","get_u1",0x19680cc4,"org.gameplay3d.Theme_UVs.get_u1","org/gameplay3d/Theme_UVs.hx",68,0x22c4ec8f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(68)
	return ::org::gameplay3d::Theme_UVs_obj::hx_Theme_UVs_property_u1_get(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Theme_UVs_obj,get_u1,return )

Float Theme_UVs_obj::set_u1( Float value){
	HX_STACK_FRAME("org.gameplay3d.Theme_UVs","set_u1",0xe5b06138,"org.gameplay3d.Theme_UVs.set_u1","org/gameplay3d/Theme_UVs.hx",73,0x22c4ec8f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(73)
	return ::org::gameplay3d::Theme_UVs_obj::hx_Theme_UVs_property_u1_set(this->nativeObject,value);
}


HX_DEFINE_DYNAMIC_FUNC1(Theme_UVs_obj,set_u1,return )

Float Theme_UVs_obj::get_v1( ){
	HX_STACK_FRAME("org.gameplay3d.Theme_UVs","get_v1",0x19680da3,"org.gameplay3d.Theme_UVs.get_v1","org/gameplay3d/Theme_UVs.hx",78,0x22c4ec8f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(78)
	return ::org::gameplay3d::Theme_UVs_obj::hx_Theme_UVs_property_v1_get(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Theme_UVs_obj,get_v1,return )

Float Theme_UVs_obj::set_v1( Float value){
	HX_STACK_FRAME("org.gameplay3d.Theme_UVs","set_v1",0xe5b06217,"org.gameplay3d.Theme_UVs.set_v1","org/gameplay3d/Theme_UVs.hx",83,0x22c4ec8f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(83)
	return ::org::gameplay3d::Theme_UVs_obj::hx_Theme_UVs_property_v1_set(this->nativeObject,value);
}


HX_DEFINE_DYNAMIC_FUNC1(Theme_UVs_obj,set_v1,return )

Float Theme_UVs_obj::get_u2( ){
	HX_STACK_FRAME("org.gameplay3d.Theme_UVs","get_u2",0x19680cc5,"org.gameplay3d.Theme_UVs.get_u2","org/gameplay3d/Theme_UVs.hx",88,0x22c4ec8f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(88)
	return ::org::gameplay3d::Theme_UVs_obj::hx_Theme_UVs_property_u2_get(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Theme_UVs_obj,get_u2,return )

Float Theme_UVs_obj::set_u2( Float value){
	HX_STACK_FRAME("org.gameplay3d.Theme_UVs","set_u2",0xe5b06139,"org.gameplay3d.Theme_UVs.set_u2","org/gameplay3d/Theme_UVs.hx",93,0x22c4ec8f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(93)
	return ::org::gameplay3d::Theme_UVs_obj::hx_Theme_UVs_property_u2_set(this->nativeObject,value);
}


HX_DEFINE_DYNAMIC_FUNC1(Theme_UVs_obj,set_u2,return )

Float Theme_UVs_obj::get_v2( ){
	HX_STACK_FRAME("org.gameplay3d.Theme_UVs","get_v2",0x19680da4,"org.gameplay3d.Theme_UVs.get_v2","org/gameplay3d/Theme_UVs.hx",98,0x22c4ec8f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(98)
	return ::org::gameplay3d::Theme_UVs_obj::hx_Theme_UVs_property_v2_get(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Theme_UVs_obj,get_v2,return )

Float Theme_UVs_obj::set_v2( Float value){
	HX_STACK_FRAME("org.gameplay3d.Theme_UVs","set_v2",0xe5b06218,"org.gameplay3d.Theme_UVs.set_v2","org/gameplay3d/Theme_UVs.hx",103,0x22c4ec8f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(103)
	return ::org::gameplay3d::Theme_UVs_obj::hx_Theme_UVs_property_v2_set(this->nativeObject,value);
}


HX_DEFINE_DYNAMIC_FUNC1(Theme_UVs_obj,set_v2,return )

::org::gameplay3d::Theme_UVs Theme_UVs_obj::_empty;

::org::gameplay3d::Theme_UVs Theme_UVs_obj::make( ){
	HX_STACK_FRAME("org.gameplay3d.Theme_UVs","make",0xa039638d,"org.gameplay3d.Theme_UVs.make","org/gameplay3d/Theme_UVs.hx",30,0x22c4ec8f)
	HX_STACK_LINE(31)
	Dynamic _g = ::org::gameplay3d::Theme_UVs_obj::constructNativeObject();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(31)
	return ::org::gameplay3d::Theme_UVs_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Theme_UVs_obj,make,return )

::org::gameplay3d::Theme_UVs Theme_UVs_obj::make_FltX4( Float u1,Float v1,Float u2,Float v2){
	HX_STACK_FRAME("org.gameplay3d.Theme_UVs","make_FltX4",0x56e74b38,"org.gameplay3d.Theme_UVs.make_FltX4","org/gameplay3d/Theme_UVs.hx",36,0x22c4ec8f)
	HX_STACK_ARG(u1,"u1")
	HX_STACK_ARG(v1,"v1")
	HX_STACK_ARG(u2,"u2")
	HX_STACK_ARG(v2,"v2")
	HX_STACK_LINE(37)
	Dynamic _g = ::org::gameplay3d::Theme_UVs_obj::constructNativeObject_FltX4(u1,v1,u2,v2);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(37)
	return ::org::gameplay3d::Theme_UVs_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Theme_UVs_obj,make_FltX4,return )

::org::gameplay3d::immutable::ITheme_UVs Theme_UVs_obj::empty( ){
	HX_STACK_FRAME("org.gameplay3d.Theme_UVs","empty",0xfebb7c0e,"org.gameplay3d.Theme_UVs.empty","org/gameplay3d/Theme_UVs.hx",43,0x22c4ec8f)
	HX_STACK_LINE(28)
	if (((::org::gameplay3d::Theme_UVs_obj::_empty == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Theme_UVs _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Theme_UVs >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(43)
			Dynamic nativeObject = ::org::gameplay3d::Theme_UVs_obj::hx_Theme_UVs_static_empty();		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::Theme_UVs result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Theme_UVs _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return ::org::gameplay3d::Theme_UVs_obj::_empty = _g1;
	}
	else{
		HX_STACK_LINE(43)
		Dynamic _g2 = ::org::gameplay3d::Theme_UVs_obj::hx_Theme_UVs_static_empty();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Theme_UVs _g3 = ::org::gameplay3d::Theme_UVs_obj::_empty->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return ::org::gameplay3d::Theme_UVs_obj::_empty = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Theme_UVs_obj,empty,return )

Dynamic Theme_UVs_obj::constructNativeObject( ){
	HX_STACK_FRAME("org.gameplay3d.Theme_UVs","constructNativeObject",0xa71585ee,"org.gameplay3d.Theme_UVs.constructNativeObject","org/gameplay3d/Theme_UVs.hx",53,0x22c4ec8f)
	HX_STACK_LINE(53)
	return ::org::gameplay3d::Theme_UVs_obj::hx_Theme_UVs_Construct();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Theme_UVs_obj,constructNativeObject,return )

Dynamic Theme_UVs_obj::constructNativeObject_FltX4( Float u1,Float v1,Float u2,Float v2){
	HX_STACK_FRAME("org.gameplay3d.Theme_UVs","constructNativeObject_FltX4",0x862aec59,"org.gameplay3d.Theme_UVs.constructNativeObject_FltX4","org/gameplay3d/Theme_UVs.hx",59,0x22c4ec8f)
	HX_STACK_ARG(u1,"u1")
	HX_STACK_ARG(v1,"v1")
	HX_STACK_ARG(u2,"u2")
	HX_STACK_ARG(v2,"v2")
	HX_STACK_LINE(59)
	return ::org::gameplay3d::Theme_UVs_obj::hx_Theme_UVs_Construct_FltX4(u1,v1,u2,v2);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Theme_UVs_obj,constructNativeObject_FltX4,return )

Dynamic Theme_UVs_obj::hx_Theme_UVs_Construct;

Dynamic Theme_UVs_obj::hx_Theme_UVs_Construct_FltX4;

Dynamic Theme_UVs_obj::hx_Theme_UVs_static_empty;

Dynamic Theme_UVs_obj::hx_Theme_UVs_property_u1_get;

Dynamic Theme_UVs_obj::hx_Theme_UVs_property_u1_set;

Dynamic Theme_UVs_obj::hx_Theme_UVs_property_v1_get;

Dynamic Theme_UVs_obj::hx_Theme_UVs_property_v1_set;

Dynamic Theme_UVs_obj::hx_Theme_UVs_property_u2_get;

Dynamic Theme_UVs_obj::hx_Theme_UVs_property_u2_set;

Dynamic Theme_UVs_obj::hx_Theme_UVs_property_v2_get;

Dynamic Theme_UVs_obj::hx_Theme_UVs_property_v2_set;


Theme_UVs_obj::Theme_UVs_obj()
{
}

Dynamic Theme_UVs_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"u1") ) { return get_u1(); }
		if (HX_FIELD_EQ(inName,"v1") ) { return get_v1(); }
		if (HX_FIELD_EQ(inName,"u2") ) { return get_u2(); }
		if (HX_FIELD_EQ(inName,"v2") ) { return get_v2(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { return make_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_empty") ) { return _empty; }
		if (HX_FIELD_EQ(inName,"get_u1") ) { return get_u1_dyn(); }
		if (HX_FIELD_EQ(inName,"set_u1") ) { return set_u1_dyn(); }
		if (HX_FIELD_EQ(inName,"get_v1") ) { return get_v1_dyn(); }
		if (HX_FIELD_EQ(inName,"set_v1") ) { return set_v1_dyn(); }
		if (HX_FIELD_EQ(inName,"get_u2") ) { return get_u2_dyn(); }
		if (HX_FIELD_EQ(inName,"set_u2") ) { return set_u2_dyn(); }
		if (HX_FIELD_EQ(inName,"get_v2") ) { return get_v2_dyn(); }
		if (HX_FIELD_EQ(inName,"set_v2") ) { return set_v2_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"make_FltX4") ) { return make_FltX4_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"constructNativeObject") ) { return constructNativeObject_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Theme_UVs_Construct") ) { return hx_Theme_UVs_Construct; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_Theme_UVs_static_empty") ) { return hx_Theme_UVs_static_empty; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"constructNativeObject_FltX4") ) { return constructNativeObject_FltX4_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_Theme_UVs_Construct_FltX4") ) { return hx_Theme_UVs_Construct_FltX4; }
		if (HX_FIELD_EQ(inName,"hx_Theme_UVs_property_u1_get") ) { return hx_Theme_UVs_property_u1_get; }
		if (HX_FIELD_EQ(inName,"hx_Theme_UVs_property_u1_set") ) { return hx_Theme_UVs_property_u1_set; }
		if (HX_FIELD_EQ(inName,"hx_Theme_UVs_property_v1_get") ) { return hx_Theme_UVs_property_v1_get; }
		if (HX_FIELD_EQ(inName,"hx_Theme_UVs_property_v1_set") ) { return hx_Theme_UVs_property_v1_set; }
		if (HX_FIELD_EQ(inName,"hx_Theme_UVs_property_u2_get") ) { return hx_Theme_UVs_property_u2_get; }
		if (HX_FIELD_EQ(inName,"hx_Theme_UVs_property_u2_set") ) { return hx_Theme_UVs_property_u2_set; }
		if (HX_FIELD_EQ(inName,"hx_Theme_UVs_property_v2_get") ) { return hx_Theme_UVs_property_v2_get; }
		if (HX_FIELD_EQ(inName,"hx_Theme_UVs_property_v2_set") ) { return hx_Theme_UVs_property_v2_set; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Theme_UVs_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"u1") ) { return set_u1(inValue); }
		if (HX_FIELD_EQ(inName,"v1") ) { return set_v1(inValue); }
		if (HX_FIELD_EQ(inName,"u2") ) { return set_u2(inValue); }
		if (HX_FIELD_EQ(inName,"v2") ) { return set_v2(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_empty") ) { _empty=inValue.Cast< ::org::gameplay3d::Theme_UVs >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Theme_UVs_Construct") ) { hx_Theme_UVs_Construct=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_Theme_UVs_static_empty") ) { hx_Theme_UVs_static_empty=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_Theme_UVs_Construct_FltX4") ) { hx_Theme_UVs_Construct_FltX4=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Theme_UVs_property_u1_get") ) { hx_Theme_UVs_property_u1_get=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Theme_UVs_property_u1_set") ) { hx_Theme_UVs_property_u1_set=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Theme_UVs_property_v1_get") ) { hx_Theme_UVs_property_v1_get=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Theme_UVs_property_v1_set") ) { hx_Theme_UVs_property_v1_set=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Theme_UVs_property_u2_get") ) { hx_Theme_UVs_property_u2_get=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Theme_UVs_property_u2_set") ) { hx_Theme_UVs_property_u2_set=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Theme_UVs_property_v2_get") ) { hx_Theme_UVs_property_v2_get=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Theme_UVs_property_v2_set") ) { hx_Theme_UVs_property_v2_set=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Theme_UVs_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("u1"));
	outFields->push(HX_CSTRING("v1"));
	outFields->push(HX_CSTRING("u2"));
	outFields->push(HX_CSTRING("v2"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_empty"),
	HX_CSTRING("make"),
	HX_CSTRING("make_FltX4"),
	HX_CSTRING("empty"),
	HX_CSTRING("constructNativeObject"),
	HX_CSTRING("constructNativeObject_FltX4"),
	HX_CSTRING("hx_Theme_UVs_Construct"),
	HX_CSTRING("hx_Theme_UVs_Construct_FltX4"),
	HX_CSTRING("hx_Theme_UVs_static_empty"),
	HX_CSTRING("hx_Theme_UVs_property_u1_get"),
	HX_CSTRING("hx_Theme_UVs_property_u1_set"),
	HX_CSTRING("hx_Theme_UVs_property_v1_get"),
	HX_CSTRING("hx_Theme_UVs_property_v1_set"),
	HX_CSTRING("hx_Theme_UVs_property_u2_get"),
	HX_CSTRING("hx_Theme_UVs_property_u2_set"),
	HX_CSTRING("hx_Theme_UVs_property_v2_get"),
	HX_CSTRING("hx_Theme_UVs_property_v2_set"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("get_u1"),
	HX_CSTRING("set_u1"),
	HX_CSTRING("get_v1"),
	HX_CSTRING("set_v1"),
	HX_CSTRING("get_u2"),
	HX_CSTRING("set_u2"),
	HX_CSTRING("get_v2"),
	HX_CSTRING("set_v2"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Theme_UVs_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Theme_UVs_obj::_empty,"_empty");
	HX_MARK_MEMBER_NAME(Theme_UVs_obj::hx_Theme_UVs_Construct,"hx_Theme_UVs_Construct");
	HX_MARK_MEMBER_NAME(Theme_UVs_obj::hx_Theme_UVs_Construct_FltX4,"hx_Theme_UVs_Construct_FltX4");
	HX_MARK_MEMBER_NAME(Theme_UVs_obj::hx_Theme_UVs_static_empty,"hx_Theme_UVs_static_empty");
	HX_MARK_MEMBER_NAME(Theme_UVs_obj::hx_Theme_UVs_property_u1_get,"hx_Theme_UVs_property_u1_get");
	HX_MARK_MEMBER_NAME(Theme_UVs_obj::hx_Theme_UVs_property_u1_set,"hx_Theme_UVs_property_u1_set");
	HX_MARK_MEMBER_NAME(Theme_UVs_obj::hx_Theme_UVs_property_v1_get,"hx_Theme_UVs_property_v1_get");
	HX_MARK_MEMBER_NAME(Theme_UVs_obj::hx_Theme_UVs_property_v1_set,"hx_Theme_UVs_property_v1_set");
	HX_MARK_MEMBER_NAME(Theme_UVs_obj::hx_Theme_UVs_property_u2_get,"hx_Theme_UVs_property_u2_get");
	HX_MARK_MEMBER_NAME(Theme_UVs_obj::hx_Theme_UVs_property_u2_set,"hx_Theme_UVs_property_u2_set");
	HX_MARK_MEMBER_NAME(Theme_UVs_obj::hx_Theme_UVs_property_v2_get,"hx_Theme_UVs_property_v2_get");
	HX_MARK_MEMBER_NAME(Theme_UVs_obj::hx_Theme_UVs_property_v2_set,"hx_Theme_UVs_property_v2_set");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Theme_UVs_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Theme_UVs_obj::_empty,"_empty");
	HX_VISIT_MEMBER_NAME(Theme_UVs_obj::hx_Theme_UVs_Construct,"hx_Theme_UVs_Construct");
	HX_VISIT_MEMBER_NAME(Theme_UVs_obj::hx_Theme_UVs_Construct_FltX4,"hx_Theme_UVs_Construct_FltX4");
	HX_VISIT_MEMBER_NAME(Theme_UVs_obj::hx_Theme_UVs_static_empty,"hx_Theme_UVs_static_empty");
	HX_VISIT_MEMBER_NAME(Theme_UVs_obj::hx_Theme_UVs_property_u1_get,"hx_Theme_UVs_property_u1_get");
	HX_VISIT_MEMBER_NAME(Theme_UVs_obj::hx_Theme_UVs_property_u1_set,"hx_Theme_UVs_property_u1_set");
	HX_VISIT_MEMBER_NAME(Theme_UVs_obj::hx_Theme_UVs_property_v1_get,"hx_Theme_UVs_property_v1_get");
	HX_VISIT_MEMBER_NAME(Theme_UVs_obj::hx_Theme_UVs_property_v1_set,"hx_Theme_UVs_property_v1_set");
	HX_VISIT_MEMBER_NAME(Theme_UVs_obj::hx_Theme_UVs_property_u2_get,"hx_Theme_UVs_property_u2_get");
	HX_VISIT_MEMBER_NAME(Theme_UVs_obj::hx_Theme_UVs_property_u2_set,"hx_Theme_UVs_property_u2_set");
	HX_VISIT_MEMBER_NAME(Theme_UVs_obj::hx_Theme_UVs_property_v2_get,"hx_Theme_UVs_property_v2_get");
	HX_VISIT_MEMBER_NAME(Theme_UVs_obj::hx_Theme_UVs_property_v2_set,"hx_Theme_UVs_property_v2_set");
};

#endif

Class Theme_UVs_obj::__mClass;

void Theme_UVs_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.Theme_UVs"), hx::TCanCast< Theme_UVs_obj> ,sStaticFields,sMemberFields,
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

void Theme_UVs_obj::__boot()
{
	hx_Theme_UVs_Construct= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Theme_UVs >(),HX_CSTRING("Construct"),(int)0);
	hx_Theme_UVs_Construct_FltX4= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Theme_UVs >(),HX_CSTRING("Construct_FltX4"),(int)4);
	hx_Theme_UVs_static_empty= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Theme_UVs >(),HX_CSTRING("static_empty"),(int)0);
	hx_Theme_UVs_property_u1_get= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Theme_UVs >(),HX_CSTRING("property_u1_get"),(int)1);
	hx_Theme_UVs_property_u1_set= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Theme_UVs >(),HX_CSTRING("property_u1_set"),(int)2);
	hx_Theme_UVs_property_v1_get= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Theme_UVs >(),HX_CSTRING("property_v1_get"),(int)1);
	hx_Theme_UVs_property_v1_set= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Theme_UVs >(),HX_CSTRING("property_v1_set"),(int)2);
	hx_Theme_UVs_property_u2_get= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Theme_UVs >(),HX_CSTRING("property_u2_get"),(int)1);
	hx_Theme_UVs_property_u2_set= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Theme_UVs >(),HX_CSTRING("property_u2_set"),(int)2);
	hx_Theme_UVs_property_v2_get= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Theme_UVs >(),HX_CSTRING("property_v2_get"),(int)1);
	hx_Theme_UVs_property_v2_set= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Theme_UVs >(),HX_CSTRING("property_v2_set"),(int)2);
}

} // end namespace org
} // end namespace gameplay3d
