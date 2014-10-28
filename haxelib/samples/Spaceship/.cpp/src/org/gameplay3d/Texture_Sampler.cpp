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
#ifndef INCLUDED_org_gameplay3d_Ref
#include <org/gameplay3d/Ref.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Texture
#include <org/gameplay3d/Texture.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Texture_Sampler
#include <org/gameplay3d/Texture_Sampler.h>
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

Void Texture_Sampler_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.Texture_Sampler","new",0x80c5c7a9,"org.gameplay3d.Texture_Sampler.new","org/gameplay3d/Texture_Sampler.hx",8,0x4fd5f587)
HX_STACK_THIS(this)
HX_STACK_ARG(nativeObjectInitializer,"nativeObjectInitializer")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(8)
	super::__construct(nativeObjectInitializer,nativeObjectInitializerParams);
}
;
	return null();
}

//Texture_Sampler_obj::~Texture_Sampler_obj() { }

Dynamic Texture_Sampler_obj::__CreateEmpty() { return  new Texture_Sampler_obj; }
hx::ObjectPtr< Texture_Sampler_obj > Texture_Sampler_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< Texture_Sampler_obj > result = new Texture_Sampler_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic Texture_Sampler_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Texture_Sampler_obj > result = new Texture_Sampler_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *Texture_Sampler_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::intern::INativeBinding_obj)) return operator ::org::gameplay3d::intern::INativeBinding_obj *();
	if (inType==typeid( ::org::gameplay3d::Ref_obj)) return operator ::org::gameplay3d::Ref_obj *();
	return super::__ToInterface(inType);
}

Void Texture_Sampler_obj::bind( ){
{
		HX_STACK_FRAME("org.gameplay3d.Texture_Sampler","bind",0x245d5e54,"org.gameplay3d.Texture_Sampler.bind","org/gameplay3d/Texture_Sampler.hx",17,0x4fd5f587)
		HX_STACK_THIS(this)
		HX_STACK_LINE(17)
		::org::gameplay3d::Texture_Sampler_obj::hx_Texture_Sampler_bind(this->nativeObject);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Texture_Sampler_obj,bind,(void))

::org::gameplay3d::Texture Texture_Sampler_obj::getTexture( ){
	HX_STACK_FRAME("org.gameplay3d.Texture_Sampler","getTexture",0xc96fc2bc,"org.gameplay3d.Texture_Sampler.getTexture","org/gameplay3d/Texture_Sampler.hx",35,0x4fd5f587)
	HX_STACK_THIS(this)
	HX_STACK_LINE(35)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Texture >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(35)
	Dynamic nativeObject = ::org::gameplay3d::Texture_Sampler_obj::hx_Texture_Sampler_getTexture(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(35)
	if (((nativeObject == null()))){
		HX_STACK_LINE(35)
		return null();
	}
	else{
		HX_STACK_LINE(35)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(35)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(35)
			::org::gameplay3d::Texture result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(35)
			if (((result == null()))){
				HX_STACK_LINE(35)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(35)
				::org::gameplay3d::Texture _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(35)
				result = _g;
				HX_STACK_LINE(35)
				ref->set(result);
			}
			HX_STACK_LINE(35)
			return result;
		}
		else{
			HX_STACK_LINE(35)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(35)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(35)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Texture_Sampler_obj,getTexture,return )

Void Texture_Sampler_obj::setFilterMode( int minificationFilter,int magnificationFilter){
{
		HX_STACK_FRAME("org.gameplay3d.Texture_Sampler","setFilterMode",0x26b6e606,"org.gameplay3d.Texture_Sampler.setFilterMode","org/gameplay3d/Texture_Sampler.hx",41,0x4fd5f587)
		HX_STACK_THIS(this)
		HX_STACK_ARG(minificationFilter,"minificationFilter")
		HX_STACK_ARG(magnificationFilter,"magnificationFilter")
		HX_STACK_LINE(41)
		::org::gameplay3d::Texture_Sampler_obj::hx_Texture_Sampler_setFilterMode(this->nativeObject,minificationFilter,magnificationFilter);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Texture_Sampler_obj,setFilterMode,(void))

Void Texture_Sampler_obj::setWrapMode( int wrapS,int wrapT){
{
		HX_STACK_FRAME("org.gameplay3d.Texture_Sampler","setWrapMode",0xb0b39858,"org.gameplay3d.Texture_Sampler.setWrapMode","org/gameplay3d/Texture_Sampler.hx",47,0x4fd5f587)
		HX_STACK_THIS(this)
		HX_STACK_ARG(wrapS,"wrapS")
		HX_STACK_ARG(wrapT,"wrapT")
		HX_STACK_LINE(47)
		::org::gameplay3d::Texture_Sampler_obj::hx_Texture_Sampler_setWrapMode(this->nativeObject,wrapS,wrapT);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Texture_Sampler_obj,setWrapMode,(void))

::org::gameplay3d::Texture_Sampler Texture_Sampler_obj::create_Tex( ::org::gameplay3d::Texture texture){
	HX_STACK_FRAME("org.gameplay3d.Texture_Sampler","create_Tex",0x41ed639b,"org.gameplay3d.Texture_Sampler.create_Tex","org/gameplay3d/Texture_Sampler.hx",23,0x4fd5f587)
	HX_STACK_ARG(texture,"texture")
	HX_STACK_LINE(23)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Texture_Sampler >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(23)
	Dynamic nativeObject = ::org::gameplay3d::Texture_Sampler_obj::hx_Texture_Sampler_static_create_Tex((  (((texture == null()))) ? Dynamic(null()) : Dynamic(texture->nativeObject) ));		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(23)
	if (((nativeObject == null()))){
		HX_STACK_LINE(23)
		return null();
	}
	else{
		HX_STACK_LINE(23)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(23)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(23)
			::org::gameplay3d::Texture_Sampler result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(23)
			if (((result == null()))){
				HX_STACK_LINE(23)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(23)
				::org::gameplay3d::Texture_Sampler _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(23)
				result = _g;
				HX_STACK_LINE(23)
				ref->set(result);
			}
			HX_STACK_LINE(23)
			return result;
		}
		else{
			HX_STACK_LINE(23)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(23)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(23)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Texture_Sampler_obj,create_Tex,return )

::org::gameplay3d::Texture_Sampler Texture_Sampler_obj::create_Str_Bool( ::String path,hx::Null< bool >  __o_generateMipmaps){
bool generateMipmaps = __o_generateMipmaps.Default(false);
	HX_STACK_FRAME("org.gameplay3d.Texture_Sampler","create_Str_Bool",0xa06dcfa4,"org.gameplay3d.Texture_Sampler.create_Str_Bool","org/gameplay3d/Texture_Sampler.hx",29,0x4fd5f587)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(generateMipmaps,"generateMipmaps")
{
		HX_STACK_LINE(29)
		::Class classObj = hx::ClassOf< ::org::gameplay3d::Texture_Sampler >();		HX_STACK_VAR(classObj,"classObj");
		HX_STACK_LINE(29)
		Dynamic nativeObject = ::org::gameplay3d::Texture_Sampler_obj::hx_Texture_Sampler_static_create_Str_Bool(path,generateMipmaps);		HX_STACK_VAR(nativeObject,"nativeObject");
		HX_STACK_LINE(29)
		if (((nativeObject == null()))){
			HX_STACK_LINE(29)
			return null();
		}
		else{
			HX_STACK_LINE(29)
			if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
				HX_STACK_LINE(29)
				::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
				HX_STACK_LINE(29)
				::org::gameplay3d::Texture_Sampler result = ref->get();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(29)
				if (((result == null()))){
					HX_STACK_LINE(29)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
					HX_STACK_LINE(29)
					::org::gameplay3d::Texture_Sampler _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(29)
					result = _g;
					HX_STACK_LINE(29)
					ref->set(result);
				}
				HX_STACK_LINE(29)
				return result;
			}
			else{
				HX_STACK_LINE(29)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
				HX_STACK_LINE(29)
				return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
			}
		}
		HX_STACK_LINE(29)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Texture_Sampler_obj,create_Str_Bool,return )

Dynamic Texture_Sampler_obj::hx_Texture_Sampler_bind;

Dynamic Texture_Sampler_obj::hx_Texture_Sampler_static_create_Tex;

Dynamic Texture_Sampler_obj::hx_Texture_Sampler_static_create_Str_Bool;

Dynamic Texture_Sampler_obj::hx_Texture_Sampler_getTexture;

Dynamic Texture_Sampler_obj::hx_Texture_Sampler_setFilterMode;

Dynamic Texture_Sampler_obj::hx_Texture_Sampler_setWrapMode;


Texture_Sampler_obj::Texture_Sampler_obj()
{
}

Dynamic Texture_Sampler_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bind") ) { return bind_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"create_Tex") ) { return create_Tex_dyn(); }
		if (HX_FIELD_EQ(inName,"getTexture") ) { return getTexture_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setWrapMode") ) { return setWrapMode_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setFilterMode") ) { return setFilterMode_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"create_Str_Bool") ) { return create_Str_Bool_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_Texture_Sampler_bind") ) { return hx_Texture_Sampler_bind; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_Texture_Sampler_getTexture") ) { return hx_Texture_Sampler_getTexture; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"hx_Texture_Sampler_setWrapMode") ) { return hx_Texture_Sampler_setWrapMode; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"hx_Texture_Sampler_setFilterMode") ) { return hx_Texture_Sampler_setFilterMode; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"hx_Texture_Sampler_static_create_Tex") ) { return hx_Texture_Sampler_static_create_Tex; }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"hx_Texture_Sampler_static_create_Str_Bool") ) { return hx_Texture_Sampler_static_create_Str_Bool; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Texture_Sampler_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 23:
		if (HX_FIELD_EQ(inName,"hx_Texture_Sampler_bind") ) { hx_Texture_Sampler_bind=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_Texture_Sampler_getTexture") ) { hx_Texture_Sampler_getTexture=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"hx_Texture_Sampler_setWrapMode") ) { hx_Texture_Sampler_setWrapMode=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"hx_Texture_Sampler_setFilterMode") ) { hx_Texture_Sampler_setFilterMode=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"hx_Texture_Sampler_static_create_Tex") ) { hx_Texture_Sampler_static_create_Tex=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"hx_Texture_Sampler_static_create_Str_Bool") ) { hx_Texture_Sampler_static_create_Str_Bool=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Texture_Sampler_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create_Tex"),
	HX_CSTRING("create_Str_Bool"),
	HX_CSTRING("hx_Texture_Sampler_bind"),
	HX_CSTRING("hx_Texture_Sampler_static_create_Tex"),
	HX_CSTRING("hx_Texture_Sampler_static_create_Str_Bool"),
	HX_CSTRING("hx_Texture_Sampler_getTexture"),
	HX_CSTRING("hx_Texture_Sampler_setFilterMode"),
	HX_CSTRING("hx_Texture_Sampler_setWrapMode"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("bind"),
	HX_CSTRING("getTexture"),
	HX_CSTRING("setFilterMode"),
	HX_CSTRING("setWrapMode"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Texture_Sampler_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Texture_Sampler_obj::hx_Texture_Sampler_bind,"hx_Texture_Sampler_bind");
	HX_MARK_MEMBER_NAME(Texture_Sampler_obj::hx_Texture_Sampler_static_create_Tex,"hx_Texture_Sampler_static_create_Tex");
	HX_MARK_MEMBER_NAME(Texture_Sampler_obj::hx_Texture_Sampler_static_create_Str_Bool,"hx_Texture_Sampler_static_create_Str_Bool");
	HX_MARK_MEMBER_NAME(Texture_Sampler_obj::hx_Texture_Sampler_getTexture,"hx_Texture_Sampler_getTexture");
	HX_MARK_MEMBER_NAME(Texture_Sampler_obj::hx_Texture_Sampler_setFilterMode,"hx_Texture_Sampler_setFilterMode");
	HX_MARK_MEMBER_NAME(Texture_Sampler_obj::hx_Texture_Sampler_setWrapMode,"hx_Texture_Sampler_setWrapMode");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Texture_Sampler_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Texture_Sampler_obj::hx_Texture_Sampler_bind,"hx_Texture_Sampler_bind");
	HX_VISIT_MEMBER_NAME(Texture_Sampler_obj::hx_Texture_Sampler_static_create_Tex,"hx_Texture_Sampler_static_create_Tex");
	HX_VISIT_MEMBER_NAME(Texture_Sampler_obj::hx_Texture_Sampler_static_create_Str_Bool,"hx_Texture_Sampler_static_create_Str_Bool");
	HX_VISIT_MEMBER_NAME(Texture_Sampler_obj::hx_Texture_Sampler_getTexture,"hx_Texture_Sampler_getTexture");
	HX_VISIT_MEMBER_NAME(Texture_Sampler_obj::hx_Texture_Sampler_setFilterMode,"hx_Texture_Sampler_setFilterMode");
	HX_VISIT_MEMBER_NAME(Texture_Sampler_obj::hx_Texture_Sampler_setWrapMode,"hx_Texture_Sampler_setWrapMode");
};

#endif

Class Texture_Sampler_obj::__mClass;

void Texture_Sampler_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.Texture_Sampler"), hx::TCanCast< Texture_Sampler_obj> ,sStaticFields,sMemberFields,
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

void Texture_Sampler_obj::__boot()
{
	hx_Texture_Sampler_bind= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Texture_Sampler >(),HX_CSTRING("bind"),(int)1);
	hx_Texture_Sampler_static_create_Tex= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Texture_Sampler >(),HX_CSTRING("static_create_Tex"),(int)1);
	hx_Texture_Sampler_static_create_Str_Bool= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Texture_Sampler >(),HX_CSTRING("static_create_Str_Bool"),(int)2);
	hx_Texture_Sampler_getTexture= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Texture_Sampler >(),HX_CSTRING("getTexture"),(int)1);
	hx_Texture_Sampler_setFilterMode= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Texture_Sampler >(),HX_CSTRING("setFilterMode"),(int)3);
	hx_Texture_Sampler_setWrapMode= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Texture_Sampler >(),HX_CSTRING("setWrapMode"),(int)3);
}

} // end namespace org
} // end namespace gameplay3d
