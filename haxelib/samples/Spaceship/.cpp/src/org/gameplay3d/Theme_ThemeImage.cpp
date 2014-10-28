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
#ifndef INCLUDED_org_gameplay3d_Rectangle
#include <org/gameplay3d/Rectangle.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Ref
#include <org/gameplay3d/Ref.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Theme_ThemeImage
#include <org/gameplay3d/Theme_ThemeImage.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Theme_UVs
#include <org/gameplay3d/Theme_UVs.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Vector4
#include <org/gameplay3d/Vector4.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IRectangle
#include <org/gameplay3d/immutable/IRectangle.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_ITheme_UVs
#include <org/gameplay3d/immutable/ITheme_UVs.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IVector4
#include <org/gameplay3d/immutable/IVector4.h>
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

Void Theme_ThemeImage_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.Theme_ThemeImage","new",0x8067c587,"org.gameplay3d.Theme_ThemeImage.new","org/gameplay3d/Theme_ThemeImage.hx",14,0xa7531e29)
HX_STACK_THIS(this)
HX_STACK_ARG(nativeObjectInitializer,"nativeObjectInitializer")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(14)
	super::__construct(nativeObjectInitializer,nativeObjectInitializerParams);
}
;
	return null();
}

//Theme_ThemeImage_obj::~Theme_ThemeImage_obj() { }

Dynamic Theme_ThemeImage_obj::__CreateEmpty() { return  new Theme_ThemeImage_obj; }
hx::ObjectPtr< Theme_ThemeImage_obj > Theme_ThemeImage_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< Theme_ThemeImage_obj > result = new Theme_ThemeImage_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic Theme_ThemeImage_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Theme_ThemeImage_obj > result = new Theme_ThemeImage_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *Theme_ThemeImage_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::intern::INativeBinding_obj)) return operator ::org::gameplay3d::intern::INativeBinding_obj *();
	if (inType==typeid( ::org::gameplay3d::Ref_obj)) return operator ::org::gameplay3d::Ref_obj *();
	return super::__ToInterface(inType);
}

::org::gameplay3d::immutable::IVector4 Theme_ThemeImage_obj::getColor( ){
	HX_STACK_FRAME("org.gameplay3d.Theme_ThemeImage","getColor",0x0c927e66,"org.gameplay3d.Theme_ThemeImage.getColor","org/gameplay3d/Theme_ThemeImage.hx",27,0xa7531e29)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_color == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector4 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector4 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(27)
			Dynamic nativeObject = ::org::gameplay3d::Theme_ThemeImage_obj::hx_Theme_ThemeImage_getColor(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::Vector4 result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Vector4 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return this->_color = _g1;
	}
	else{
		HX_STACK_LINE(27)
		Dynamic _g2 = ::org::gameplay3d::Theme_ThemeImage_obj::hx_Theme_ThemeImage_getColor(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector4 _g3 = this->_color->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_color = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Theme_ThemeImage_obj,getColor,return )

::String Theme_ThemeImage_obj::getId( ){
	HX_STACK_FRAME("org.gameplay3d.Theme_ThemeImage","getId",0x36395ef8,"org.gameplay3d.Theme_ThemeImage.getId","org/gameplay3d/Theme_ThemeImage.hx",33,0xa7531e29)
	HX_STACK_THIS(this)
	HX_STACK_LINE(33)
	return ::org::gameplay3d::Theme_ThemeImage_obj::hx_Theme_ThemeImage_getId(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Theme_ThemeImage_obj,getId,return )

::org::gameplay3d::immutable::IRectangle Theme_ThemeImage_obj::getRegion( ){
	HX_STACK_FRAME("org.gameplay3d.Theme_ThemeImage","getRegion",0x2da21691,"org.gameplay3d.Theme_ThemeImage.getRegion","org/gameplay3d/Theme_ThemeImage.hx",39,0xa7531e29)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_region == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Rectangle _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Rectangle >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(39)
			Dynamic nativeObject = ::org::gameplay3d::Theme_ThemeImage_obj::hx_Theme_ThemeImage_getRegion(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::Rectangle result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Rectangle _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return this->_region = _g1;
	}
	else{
		HX_STACK_LINE(39)
		Dynamic _g2 = ::org::gameplay3d::Theme_ThemeImage_obj::hx_Theme_ThemeImage_getRegion(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Rectangle _g3 = this->_region->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_region = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Theme_ThemeImage_obj,getRegion,return )

::org::gameplay3d::immutable::ITheme_UVs Theme_ThemeImage_obj::getUVs( ){
	HX_STACK_FRAME("org.gameplay3d.Theme_ThemeImage","getUVs",0x3c02c955,"org.gameplay3d.Theme_ThemeImage.getUVs","org/gameplay3d/Theme_ThemeImage.hx",45,0xa7531e29)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_uvs == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Theme_UVs _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Theme_UVs >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(45)
			Dynamic nativeObject = ::org::gameplay3d::Theme_ThemeImage_obj::hx_Theme_ThemeImage_getUVs(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
		return this->_uvs = _g1;
	}
	else{
		HX_STACK_LINE(45)
		Dynamic _g2 = ::org::gameplay3d::Theme_ThemeImage_obj::hx_Theme_ThemeImage_getUVs(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Theme_UVs _g3 = this->_uvs->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_uvs = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Theme_ThemeImage_obj,getUVs,return )

Dynamic Theme_ThemeImage_obj::hx_Theme_ThemeImage_getColor;

Dynamic Theme_ThemeImage_obj::hx_Theme_ThemeImage_getId;

Dynamic Theme_ThemeImage_obj::hx_Theme_ThemeImage_getRegion;

Dynamic Theme_ThemeImage_obj::hx_Theme_ThemeImage_getUVs;


Theme_ThemeImage_obj::Theme_ThemeImage_obj()
{
}

void Theme_ThemeImage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Theme_ThemeImage);
	HX_MARK_MEMBER_NAME(_color,"_color");
	HX_MARK_MEMBER_NAME(_region,"_region");
	HX_MARK_MEMBER_NAME(_uvs,"_uvs");
	::org::gameplay3d::intern::NativeBinding_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Theme_ThemeImage_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_color,"_color");
	HX_VISIT_MEMBER_NAME(_region,"_region");
	HX_VISIT_MEMBER_NAME(_uvs,"_uvs");
	::org::gameplay3d::intern::NativeBinding_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Theme_ThemeImage_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_uvs") ) { return _uvs; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"getId") ) { return getId_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_color") ) { return _color; }
		if (HX_FIELD_EQ(inName,"getUVs") ) { return getUVs_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_region") ) { return _region; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getColor") ) { return getColor_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getRegion") ) { return getRegion_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_Theme_ThemeImage_getId") ) { return hx_Theme_ThemeImage_getId; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_Theme_ThemeImage_getUVs") ) { return hx_Theme_ThemeImage_getUVs; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_Theme_ThemeImage_getColor") ) { return hx_Theme_ThemeImage_getColor; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_Theme_ThemeImage_getRegion") ) { return hx_Theme_ThemeImage_getRegion; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Theme_ThemeImage_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_uvs") ) { _uvs=inValue.Cast< ::org::gameplay3d::Theme_UVs >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_color") ) { _color=inValue.Cast< ::org::gameplay3d::Vector4 >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_region") ) { _region=inValue.Cast< ::org::gameplay3d::Rectangle >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_Theme_ThemeImage_getId") ) { hx_Theme_ThemeImage_getId=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_Theme_ThemeImage_getUVs") ) { hx_Theme_ThemeImage_getUVs=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_Theme_ThemeImage_getColor") ) { hx_Theme_ThemeImage_getColor=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_Theme_ThemeImage_getRegion") ) { hx_Theme_ThemeImage_getRegion=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Theme_ThemeImage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_color"));
	outFields->push(HX_CSTRING("_region"));
	outFields->push(HX_CSTRING("_uvs"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("hx_Theme_ThemeImage_getColor"),
	HX_CSTRING("hx_Theme_ThemeImage_getId"),
	HX_CSTRING("hx_Theme_ThemeImage_getRegion"),
	HX_CSTRING("hx_Theme_ThemeImage_getUVs"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::org::gameplay3d::Vector4*/ ,(int)offsetof(Theme_ThemeImage_obj,_color),HX_CSTRING("_color")},
	{hx::fsObject /*::org::gameplay3d::Rectangle*/ ,(int)offsetof(Theme_ThemeImage_obj,_region),HX_CSTRING("_region")},
	{hx::fsObject /*::org::gameplay3d::Theme_UVs*/ ,(int)offsetof(Theme_ThemeImage_obj,_uvs),HX_CSTRING("_uvs")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_color"),
	HX_CSTRING("_region"),
	HX_CSTRING("_uvs"),
	HX_CSTRING("getColor"),
	HX_CSTRING("getId"),
	HX_CSTRING("getRegion"),
	HX_CSTRING("getUVs"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Theme_ThemeImage_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Theme_ThemeImage_obj::hx_Theme_ThemeImage_getColor,"hx_Theme_ThemeImage_getColor");
	HX_MARK_MEMBER_NAME(Theme_ThemeImage_obj::hx_Theme_ThemeImage_getId,"hx_Theme_ThemeImage_getId");
	HX_MARK_MEMBER_NAME(Theme_ThemeImage_obj::hx_Theme_ThemeImage_getRegion,"hx_Theme_ThemeImage_getRegion");
	HX_MARK_MEMBER_NAME(Theme_ThemeImage_obj::hx_Theme_ThemeImage_getUVs,"hx_Theme_ThemeImage_getUVs");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Theme_ThemeImage_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Theme_ThemeImage_obj::hx_Theme_ThemeImage_getColor,"hx_Theme_ThemeImage_getColor");
	HX_VISIT_MEMBER_NAME(Theme_ThemeImage_obj::hx_Theme_ThemeImage_getId,"hx_Theme_ThemeImage_getId");
	HX_VISIT_MEMBER_NAME(Theme_ThemeImage_obj::hx_Theme_ThemeImage_getRegion,"hx_Theme_ThemeImage_getRegion");
	HX_VISIT_MEMBER_NAME(Theme_ThemeImage_obj::hx_Theme_ThemeImage_getUVs,"hx_Theme_ThemeImage_getUVs");
};

#endif

Class Theme_ThemeImage_obj::__mClass;

void Theme_ThemeImage_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.Theme_ThemeImage"), hx::TCanCast< Theme_ThemeImage_obj> ,sStaticFields,sMemberFields,
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

void Theme_ThemeImage_obj::__boot()
{
	hx_Theme_ThemeImage_getColor= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Theme_ThemeImage >(),HX_CSTRING("getColor"),(int)1);
	hx_Theme_ThemeImage_getId= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Theme_ThemeImage >(),HX_CSTRING("getId"),(int)1);
	hx_Theme_ThemeImage_getRegion= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Theme_ThemeImage >(),HX_CSTRING("getRegion"),(int)1);
	hx_Theme_ThemeImage_getUVs= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Theme_ThemeImage >(),HX_CSTRING("getUVs"),(int)1);
}

} // end namespace org
} // end namespace gameplay3d
