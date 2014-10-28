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
#ifndef INCLUDED_org_gameplay3d_Image
#include <org/gameplay3d/Image.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Ref
#include <org/gameplay3d/Ref.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Texture
#include <org/gameplay3d/Texture.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_INativeBinding
#include <org/gameplay3d/intern/INativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_NativeBinding
#include <org/gameplay3d/intern/NativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_Handle
#include <org/gameplay3d/util/Handle.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_NativeInterface
#include <org/gameplay3d/util/NativeInterface.h>
#endif
namespace org{
namespace gameplay3d{

Void Texture_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.Texture","new",0x08e11ac0,"org.gameplay3d.Texture.new","org/gameplay3d/Texture.hx",11,0x9abd3250)
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

//Texture_obj::~Texture_obj() { }

Dynamic Texture_obj::__CreateEmpty() { return  new Texture_obj; }
hx::ObjectPtr< Texture_obj > Texture_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< Texture_obj > result = new Texture_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic Texture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Texture_obj > result = new Texture_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *Texture_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::intern::INativeBinding_obj)) return operator ::org::gameplay3d::intern::INativeBinding_obj *();
	if (inType==typeid( ::org::gameplay3d::Ref_obj)) return operator ::org::gameplay3d::Ref_obj *();
	return super::__ToInterface(inType);
}

Void Texture_obj::generateMipmaps( ){
{
		HX_STACK_FRAME("org.gameplay3d.Texture","generateMipmaps",0x45914d96,"org.gameplay3d.Texture.generateMipmaps","org/gameplay3d/Texture.hx",44,0x9abd3250)
		HX_STACK_THIS(this)
		HX_STACK_LINE(44)
		::org::gameplay3d::Texture_obj::hx_Texture_generateMipmaps(this->nativeObject);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,generateMipmaps,(void))

int Texture_obj::getFormat( ){
	HX_STACK_FRAME("org.gameplay3d.Texture","getFormat",0xb6926acd,"org.gameplay3d.Texture.getFormat","org/gameplay3d/Texture.hx",50,0x9abd3250)
	HX_STACK_THIS(this)
	HX_STACK_LINE(50)
	return ::org::gameplay3d::Texture_obj::hx_Texture_getFormat(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,getFormat,return )

::org::gameplay3d::util::Handle Texture_obj::getHandle( ){
	HX_STACK_FRAME("org.gameplay3d.Texture","getHandle",0x71015f3e,"org.gameplay3d.Texture.getHandle","org/gameplay3d/Texture.hx",56,0x9abd3250)
	HX_STACK_THIS(this)
	HX_STACK_LINE(56)
	Dynamic nativeObject = ::org::gameplay3d::Texture_obj::hx_Texture_getHandle(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(56)
	if (((nativeObject == null()))){
		HX_STACK_LINE(56)
		return null();
	}
	else{
		HX_STACK_LINE(56)
		return ::org::gameplay3d::util::Handle_obj::__new(nativeObject);
	}
	HX_STACK_LINE(56)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,getHandle,return )

int Texture_obj::getHeight( ){
	HX_STACK_FRAME("org.gameplay3d.Texture","getHeight",0xbb4fe37d,"org.gameplay3d.Texture.getHeight","org/gameplay3d/Texture.hx",62,0x9abd3250)
	HX_STACK_THIS(this)
	HX_STACK_LINE(62)
	return ::org::gameplay3d::Texture_obj::hx_Texture_getHeight(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,getHeight,return )

::String Texture_obj::getPath( ){
	HX_STACK_FRAME("org.gameplay3d.Texture","getPath",0xdd468fbb,"org.gameplay3d.Texture.getPath","org/gameplay3d/Texture.hx",68,0x9abd3250)
	HX_STACK_THIS(this)
	HX_STACK_LINE(68)
	return ::org::gameplay3d::Texture_obj::hx_Texture_getPath(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,getPath,return )

int Texture_obj::getWidth( ){
	HX_STACK_FRAME("org.gameplay3d.Texture","getWidth",0xcd82df30,"org.gameplay3d.Texture.getWidth","org/gameplay3d/Texture.hx",74,0x9abd3250)
	HX_STACK_THIS(this)
	HX_STACK_LINE(74)
	return ::org::gameplay3d::Texture_obj::hx_Texture_getWidth(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,getWidth,return )

bool Texture_obj::isCompressed( ){
	HX_STACK_FRAME("org.gameplay3d.Texture","isCompressed",0xda5fdeab,"org.gameplay3d.Texture.isCompressed","org/gameplay3d/Texture.hx",80,0x9abd3250)
	HX_STACK_THIS(this)
	HX_STACK_LINE(80)
	return ::org::gameplay3d::Texture_obj::hx_Texture_isCompressed(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,isCompressed,return )

bool Texture_obj::isMipmapped( ){
	HX_STACK_FRAME("org.gameplay3d.Texture","isMipmapped",0xcfefad5d,"org.gameplay3d.Texture.isMipmapped","org/gameplay3d/Texture.hx",86,0x9abd3250)
	HX_STACK_THIS(this)
	HX_STACK_LINE(86)
	return ::org::gameplay3d::Texture_obj::hx_Texture_isMipmapped(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,isMipmapped,return )

Void Texture_obj::setFilterMode( int minificationFilter,int magnificationFilter){
{
		HX_STACK_FRAME("org.gameplay3d.Texture","setFilterMode",0xaf539bdd,"org.gameplay3d.Texture.setFilterMode","org/gameplay3d/Texture.hx",92,0x9abd3250)
		HX_STACK_THIS(this)
		HX_STACK_ARG(minificationFilter,"minificationFilter")
		HX_STACK_ARG(magnificationFilter,"magnificationFilter")
		HX_STACK_LINE(92)
		::org::gameplay3d::Texture_obj::hx_Texture_setFilterMode(this->nativeObject,minificationFilter,magnificationFilter);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Texture_obj,setFilterMode,(void))

Void Texture_obj::setWrapMode( int wrapS,int wrapT){
{
		HX_STACK_FRAME("org.gameplay3d.Texture","setWrapMode",0x848a5a6f,"org.gameplay3d.Texture.setWrapMode","org/gameplay3d/Texture.hx",98,0x9abd3250)
		HX_STACK_THIS(this)
		HX_STACK_ARG(wrapS,"wrapS")
		HX_STACK_ARG(wrapT,"wrapT")
		HX_STACK_LINE(98)
		::org::gameplay3d::Texture_obj::hx_Texture_setWrapMode(this->nativeObject,wrapS,wrapT);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Texture_obj,setWrapMode,(void))

::org::gameplay3d::Texture Texture_obj::create_IntX3_Dat_Bool( int format,int width,int height,Array< unsigned char > data,hx::Null< bool >  __o_generateMipmaps){
bool generateMipmaps = __o_generateMipmaps.Default(false);
	HX_STACK_FRAME("org.gameplay3d.Texture","create_IntX3_Dat_Bool",0x33c08cca,"org.gameplay3d.Texture.create_IntX3_Dat_Bool","org/gameplay3d/Texture.hx",20,0x9abd3250)
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(generateMipmaps,"generateMipmaps")
{
		HX_STACK_LINE(20)
		::Class classObj = hx::ClassOf< ::org::gameplay3d::Texture >();		HX_STACK_VAR(classObj,"classObj");
		HX_STACK_LINE(20)
		Dynamic nativeObject = ::org::gameplay3d::Texture_obj::hx_Texture_static_create_IntX3_Dat_Bool(format,width,height,data,generateMipmaps);		HX_STACK_VAR(nativeObject,"nativeObject");
		HX_STACK_LINE(20)
		if (((nativeObject == null()))){
			HX_STACK_LINE(20)
			return null();
		}
		else{
			HX_STACK_LINE(20)
			if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
				HX_STACK_LINE(20)
				::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
				HX_STACK_LINE(20)
				::org::gameplay3d::Texture result = ref->get();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(20)
				if (((result == null()))){
					HX_STACK_LINE(20)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
					HX_STACK_LINE(20)
					::org::gameplay3d::Texture _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(20)
					result = _g;
					HX_STACK_LINE(20)
					ref->set(result);
				}
				HX_STACK_LINE(20)
				return result;
			}
			else{
				HX_STACK_LINE(20)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
				HX_STACK_LINE(20)
				return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
			}
		}
		HX_STACK_LINE(20)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Texture_obj,create_IntX3_Dat_Bool,return )

::org::gameplay3d::Texture Texture_obj::create_Img_Bool( ::org::gameplay3d::Image image,hx::Null< bool >  __o_generateMipmaps){
bool generateMipmaps = __o_generateMipmaps.Default(false);
	HX_STACK_FRAME("org.gameplay3d.Texture","create_Img_Bool",0x4d093ca9,"org.gameplay3d.Texture.create_Img_Bool","org/gameplay3d/Texture.hx",26,0x9abd3250)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(generateMipmaps,"generateMipmaps")
{
		HX_STACK_LINE(26)
		::Class classObj = hx::ClassOf< ::org::gameplay3d::Texture >();		HX_STACK_VAR(classObj,"classObj");
		HX_STACK_LINE(26)
		Dynamic nativeObject = ::org::gameplay3d::Texture_obj::hx_Texture_static_create_Img_Bool((  (((image == null()))) ? Dynamic(null()) : Dynamic(image->nativeObject) ),generateMipmaps);		HX_STACK_VAR(nativeObject,"nativeObject");
		HX_STACK_LINE(26)
		if (((nativeObject == null()))){
			HX_STACK_LINE(26)
			return null();
		}
		else{
			HX_STACK_LINE(26)
			if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
				HX_STACK_LINE(26)
				::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
				HX_STACK_LINE(26)
				::org::gameplay3d::Texture result = ref->get();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(26)
				if (((result == null()))){
					HX_STACK_LINE(26)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
					HX_STACK_LINE(26)
					::org::gameplay3d::Texture _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(26)
					result = _g;
					HX_STACK_LINE(26)
					ref->set(result);
				}
				HX_STACK_LINE(26)
				return result;
			}
			else{
				HX_STACK_LINE(26)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
				HX_STACK_LINE(26)
				return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
			}
		}
		HX_STACK_LINE(26)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Texture_obj,create_Img_Bool,return )

::org::gameplay3d::Texture Texture_obj::create_Hndl_IntX3( ::org::gameplay3d::util::Handle handle,int width,int height,hx::Null< int >  __o_format){
int format = __o_format.Default(0);
	HX_STACK_FRAME("org.gameplay3d.Texture","create_Hndl_IntX3",0xc973af5c,"org.gameplay3d.Texture.create_Hndl_IntX3","org/gameplay3d/Texture.hx",32,0x9abd3250)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(format,"format")
{
		HX_STACK_LINE(32)
		::Class classObj = hx::ClassOf< ::org::gameplay3d::Texture >();		HX_STACK_VAR(classObj,"classObj");
		HX_STACK_LINE(32)
		Dynamic nativeObject = ::org::gameplay3d::Texture_obj::hx_Texture_static_create_Hndl_IntX3((  (((handle == null()))) ? Dynamic(null()) : Dynamic(handle->nativeObject) ),width,height,format);		HX_STACK_VAR(nativeObject,"nativeObject");
		HX_STACK_LINE(32)
		if (((nativeObject == null()))){
			HX_STACK_LINE(32)
			return null();
		}
		else{
			HX_STACK_LINE(32)
			if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
				HX_STACK_LINE(32)
				::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
				HX_STACK_LINE(32)
				::org::gameplay3d::Texture result = ref->get();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(32)
				if (((result == null()))){
					HX_STACK_LINE(32)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
					HX_STACK_LINE(32)
					::org::gameplay3d::Texture _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(32)
					result = _g;
					HX_STACK_LINE(32)
					ref->set(result);
				}
				HX_STACK_LINE(32)
				return result;
			}
			else{
				HX_STACK_LINE(32)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
				HX_STACK_LINE(32)
				return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
			}
		}
		HX_STACK_LINE(32)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Texture_obj,create_Hndl_IntX3,return )

::org::gameplay3d::Texture Texture_obj::create_Str_Bool( ::String path,hx::Null< bool >  __o_generateMipmaps){
bool generateMipmaps = __o_generateMipmaps.Default(false);
	HX_STACK_FRAME("org.gameplay3d.Texture","create_Str_Bool",0x1204e93b,"org.gameplay3d.Texture.create_Str_Bool","org/gameplay3d/Texture.hx",38,0x9abd3250)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(generateMipmaps,"generateMipmaps")
{
		HX_STACK_LINE(38)
		::Class classObj = hx::ClassOf< ::org::gameplay3d::Texture >();		HX_STACK_VAR(classObj,"classObj");
		HX_STACK_LINE(38)
		Dynamic nativeObject = ::org::gameplay3d::Texture_obj::hx_Texture_static_create_Str_Bool(path,generateMipmaps);		HX_STACK_VAR(nativeObject,"nativeObject");
		HX_STACK_LINE(38)
		if (((nativeObject == null()))){
			HX_STACK_LINE(38)
			return null();
		}
		else{
			HX_STACK_LINE(38)
			if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
				HX_STACK_LINE(38)
				::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
				HX_STACK_LINE(38)
				::org::gameplay3d::Texture result = ref->get();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(38)
				if (((result == null()))){
					HX_STACK_LINE(38)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
					HX_STACK_LINE(38)
					::org::gameplay3d::Texture _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(38)
					result = _g;
					HX_STACK_LINE(38)
					ref->set(result);
				}
				HX_STACK_LINE(38)
				return result;
			}
			else{
				HX_STACK_LINE(38)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
				HX_STACK_LINE(38)
				return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
			}
		}
		HX_STACK_LINE(38)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Texture_obj,create_Str_Bool,return )

Dynamic Texture_obj::hx_Texture_static_create_IntX3_Dat_Bool;

Dynamic Texture_obj::hx_Texture_static_create_Img_Bool;

Dynamic Texture_obj::hx_Texture_static_create_Hndl_IntX3;

Dynamic Texture_obj::hx_Texture_static_create_Str_Bool;

Dynamic Texture_obj::hx_Texture_generateMipmaps;

Dynamic Texture_obj::hx_Texture_getFormat;

Dynamic Texture_obj::hx_Texture_getHandle;

Dynamic Texture_obj::hx_Texture_getHeight;

Dynamic Texture_obj::hx_Texture_getPath;

Dynamic Texture_obj::hx_Texture_getWidth;

Dynamic Texture_obj::hx_Texture_isCompressed;

Dynamic Texture_obj::hx_Texture_isMipmapped;

Dynamic Texture_obj::hx_Texture_setFilterMode;

Dynamic Texture_obj::hx_Texture_setWrapMode;


Texture_obj::Texture_obj()
{
}

Dynamic Texture_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getPath") ) { return getPath_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getWidth") ) { return getWidth_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getFormat") ) { return getFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"getHandle") ) { return getHandle_dyn(); }
		if (HX_FIELD_EQ(inName,"getHeight") ) { return getHeight_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isMipmapped") ) { return isMipmapped_dyn(); }
		if (HX_FIELD_EQ(inName,"setWrapMode") ) { return setWrapMode_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isCompressed") ) { return isCompressed_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setFilterMode") ) { return setFilterMode_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"create_Img_Bool") ) { return create_Img_Bool_dyn(); }
		if (HX_FIELD_EQ(inName,"create_Str_Bool") ) { return create_Str_Bool_dyn(); }
		if (HX_FIELD_EQ(inName,"generateMipmaps") ) { return generateMipmaps_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"create_Hndl_IntX3") ) { return create_Hndl_IntX3_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hx_Texture_getPath") ) { return hx_Texture_getPath; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hx_Texture_getWidth") ) { return hx_Texture_getWidth; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Texture_getFormat") ) { return hx_Texture_getFormat; }
		if (HX_FIELD_EQ(inName,"hx_Texture_getHandle") ) { return hx_Texture_getHandle; }
		if (HX_FIELD_EQ(inName,"hx_Texture_getHeight") ) { return hx_Texture_getHeight; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"create_IntX3_Dat_Bool") ) { return create_IntX3_Dat_Bool_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Texture_isMipmapped") ) { return hx_Texture_isMipmapped; }
		if (HX_FIELD_EQ(inName,"hx_Texture_setWrapMode") ) { return hx_Texture_setWrapMode; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_Texture_isCompressed") ) { return hx_Texture_isCompressed; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_Texture_setFilterMode") ) { return hx_Texture_setFilterMode; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_Texture_generateMipmaps") ) { return hx_Texture_generateMipmaps; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"hx_Texture_static_create_Img_Bool") ) { return hx_Texture_static_create_Img_Bool; }
		if (HX_FIELD_EQ(inName,"hx_Texture_static_create_Str_Bool") ) { return hx_Texture_static_create_Str_Bool; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"hx_Texture_static_create_Hndl_IntX3") ) { return hx_Texture_static_create_Hndl_IntX3; }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"hx_Texture_static_create_IntX3_Dat_Bool") ) { return hx_Texture_static_create_IntX3_Dat_Bool; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Texture_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"hx_Texture_getPath") ) { hx_Texture_getPath=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hx_Texture_getWidth") ) { hx_Texture_getWidth=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Texture_getFormat") ) { hx_Texture_getFormat=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Texture_getHandle") ) { hx_Texture_getHandle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Texture_getHeight") ) { hx_Texture_getHeight=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Texture_isMipmapped") ) { hx_Texture_isMipmapped=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Texture_setWrapMode") ) { hx_Texture_setWrapMode=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_Texture_isCompressed") ) { hx_Texture_isCompressed=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_Texture_setFilterMode") ) { hx_Texture_setFilterMode=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_Texture_generateMipmaps") ) { hx_Texture_generateMipmaps=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"hx_Texture_static_create_Img_Bool") ) { hx_Texture_static_create_Img_Bool=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Texture_static_create_Str_Bool") ) { hx_Texture_static_create_Str_Bool=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"hx_Texture_static_create_Hndl_IntX3") ) { hx_Texture_static_create_Hndl_IntX3=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"hx_Texture_static_create_IntX3_Dat_Bool") ) { hx_Texture_static_create_IntX3_Dat_Bool=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Texture_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create_IntX3_Dat_Bool"),
	HX_CSTRING("create_Img_Bool"),
	HX_CSTRING("create_Hndl_IntX3"),
	HX_CSTRING("create_Str_Bool"),
	HX_CSTRING("hx_Texture_static_create_IntX3_Dat_Bool"),
	HX_CSTRING("hx_Texture_static_create_Img_Bool"),
	HX_CSTRING("hx_Texture_static_create_Hndl_IntX3"),
	HX_CSTRING("hx_Texture_static_create_Str_Bool"),
	HX_CSTRING("hx_Texture_generateMipmaps"),
	HX_CSTRING("hx_Texture_getFormat"),
	HX_CSTRING("hx_Texture_getHandle"),
	HX_CSTRING("hx_Texture_getHeight"),
	HX_CSTRING("hx_Texture_getPath"),
	HX_CSTRING("hx_Texture_getWidth"),
	HX_CSTRING("hx_Texture_isCompressed"),
	HX_CSTRING("hx_Texture_isMipmapped"),
	HX_CSTRING("hx_Texture_setFilterMode"),
	HX_CSTRING("hx_Texture_setWrapMode"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("generateMipmaps"),
	HX_CSTRING("getFormat"),
	HX_CSTRING("getHandle"),
	HX_CSTRING("getHeight"),
	HX_CSTRING("getPath"),
	HX_CSTRING("getWidth"),
	HX_CSTRING("isCompressed"),
	HX_CSTRING("isMipmapped"),
	HX_CSTRING("setFilterMode"),
	HX_CSTRING("setWrapMode"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Texture_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Texture_obj::hx_Texture_static_create_IntX3_Dat_Bool,"hx_Texture_static_create_IntX3_Dat_Bool");
	HX_MARK_MEMBER_NAME(Texture_obj::hx_Texture_static_create_Img_Bool,"hx_Texture_static_create_Img_Bool");
	HX_MARK_MEMBER_NAME(Texture_obj::hx_Texture_static_create_Hndl_IntX3,"hx_Texture_static_create_Hndl_IntX3");
	HX_MARK_MEMBER_NAME(Texture_obj::hx_Texture_static_create_Str_Bool,"hx_Texture_static_create_Str_Bool");
	HX_MARK_MEMBER_NAME(Texture_obj::hx_Texture_generateMipmaps,"hx_Texture_generateMipmaps");
	HX_MARK_MEMBER_NAME(Texture_obj::hx_Texture_getFormat,"hx_Texture_getFormat");
	HX_MARK_MEMBER_NAME(Texture_obj::hx_Texture_getHandle,"hx_Texture_getHandle");
	HX_MARK_MEMBER_NAME(Texture_obj::hx_Texture_getHeight,"hx_Texture_getHeight");
	HX_MARK_MEMBER_NAME(Texture_obj::hx_Texture_getPath,"hx_Texture_getPath");
	HX_MARK_MEMBER_NAME(Texture_obj::hx_Texture_getWidth,"hx_Texture_getWidth");
	HX_MARK_MEMBER_NAME(Texture_obj::hx_Texture_isCompressed,"hx_Texture_isCompressed");
	HX_MARK_MEMBER_NAME(Texture_obj::hx_Texture_isMipmapped,"hx_Texture_isMipmapped");
	HX_MARK_MEMBER_NAME(Texture_obj::hx_Texture_setFilterMode,"hx_Texture_setFilterMode");
	HX_MARK_MEMBER_NAME(Texture_obj::hx_Texture_setWrapMode,"hx_Texture_setWrapMode");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Texture_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Texture_obj::hx_Texture_static_create_IntX3_Dat_Bool,"hx_Texture_static_create_IntX3_Dat_Bool");
	HX_VISIT_MEMBER_NAME(Texture_obj::hx_Texture_static_create_Img_Bool,"hx_Texture_static_create_Img_Bool");
	HX_VISIT_MEMBER_NAME(Texture_obj::hx_Texture_static_create_Hndl_IntX3,"hx_Texture_static_create_Hndl_IntX3");
	HX_VISIT_MEMBER_NAME(Texture_obj::hx_Texture_static_create_Str_Bool,"hx_Texture_static_create_Str_Bool");
	HX_VISIT_MEMBER_NAME(Texture_obj::hx_Texture_generateMipmaps,"hx_Texture_generateMipmaps");
	HX_VISIT_MEMBER_NAME(Texture_obj::hx_Texture_getFormat,"hx_Texture_getFormat");
	HX_VISIT_MEMBER_NAME(Texture_obj::hx_Texture_getHandle,"hx_Texture_getHandle");
	HX_VISIT_MEMBER_NAME(Texture_obj::hx_Texture_getHeight,"hx_Texture_getHeight");
	HX_VISIT_MEMBER_NAME(Texture_obj::hx_Texture_getPath,"hx_Texture_getPath");
	HX_VISIT_MEMBER_NAME(Texture_obj::hx_Texture_getWidth,"hx_Texture_getWidth");
	HX_VISIT_MEMBER_NAME(Texture_obj::hx_Texture_isCompressed,"hx_Texture_isCompressed");
	HX_VISIT_MEMBER_NAME(Texture_obj::hx_Texture_isMipmapped,"hx_Texture_isMipmapped");
	HX_VISIT_MEMBER_NAME(Texture_obj::hx_Texture_setFilterMode,"hx_Texture_setFilterMode");
	HX_VISIT_MEMBER_NAME(Texture_obj::hx_Texture_setWrapMode,"hx_Texture_setWrapMode");
};

#endif

Class Texture_obj::__mClass;

void Texture_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.Texture"), hx::TCanCast< Texture_obj> ,sStaticFields,sMemberFields,
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

void Texture_obj::__boot()
{
	hx_Texture_static_create_IntX3_Dat_Bool= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Texture >(),HX_CSTRING("static_create_IntX3_Dat_Bool"),(int)5);
	hx_Texture_static_create_Img_Bool= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Texture >(),HX_CSTRING("static_create_Img_Bool"),(int)2);
	hx_Texture_static_create_Hndl_IntX3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Texture >(),HX_CSTRING("static_create_Hndl_IntX3"),(int)4);
	hx_Texture_static_create_Str_Bool= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Texture >(),HX_CSTRING("static_create_Str_Bool"),(int)2);
	hx_Texture_generateMipmaps= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Texture >(),HX_CSTRING("generateMipmaps"),(int)1);
	hx_Texture_getFormat= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Texture >(),HX_CSTRING("getFormat"),(int)1);
	hx_Texture_getHandle= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Texture >(),HX_CSTRING("getHandle"),(int)1);
	hx_Texture_getHeight= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Texture >(),HX_CSTRING("getHeight"),(int)1);
	hx_Texture_getPath= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Texture >(),HX_CSTRING("getPath"),(int)1);
	hx_Texture_getWidth= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Texture >(),HX_CSTRING("getWidth"),(int)1);
	hx_Texture_isCompressed= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Texture >(),HX_CSTRING("isCompressed"),(int)1);
	hx_Texture_isMipmapped= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Texture >(),HX_CSTRING("isMipmapped"),(int)1);
	hx_Texture_setFilterMode= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Texture >(),HX_CSTRING("setFilterMode"),(int)3);
	hx_Texture_setWrapMode= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Texture >(),HX_CSTRING("setWrapMode"),(int)3);
}

} // end namespace org
} // end namespace gameplay3d
