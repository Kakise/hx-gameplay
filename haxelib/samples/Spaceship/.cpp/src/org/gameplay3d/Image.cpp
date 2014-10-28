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

Void Image_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.Image","new",0x38b1de80,"org.gameplay3d.Image.new","org/gameplay3d/Image.hx",10,0xd36b7e90)
HX_STACK_THIS(this)
HX_STACK_ARG(nativeObjectInitializer,"nativeObjectInitializer")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(10)
	super::__construct(nativeObjectInitializer,nativeObjectInitializerParams);
}
;
	return null();
}

//Image_obj::~Image_obj() { }

Dynamic Image_obj::__CreateEmpty() { return  new Image_obj; }
hx::ObjectPtr< Image_obj > Image_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< Image_obj > result = new Image_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic Image_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Image_obj > result = new Image_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *Image_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::intern::INativeBinding_obj)) return operator ::org::gameplay3d::intern::INativeBinding_obj *();
	if (inType==typeid( ::org::gameplay3d::Ref_obj)) return operator ::org::gameplay3d::Ref_obj *();
	return super::__ToInterface(inType);
}

Array< unsigned char > Image_obj::getData( ){
	HX_STACK_FRAME("org.gameplay3d.Image","getData",0xdd35a400,"org.gameplay3d.Image.getData","org/gameplay3d/Image.hx",25,0xd36b7e90)
	HX_STACK_THIS(this)
	HX_STACK_LINE(25)
	return ::org::gameplay3d::Image_obj::hx_Image_getData(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,getData,return )

int Image_obj::getFormat( ){
	HX_STACK_FRAME("org.gameplay3d.Image","getFormat",0xabf07e8d,"org.gameplay3d.Image.getFormat","org/gameplay3d/Image.hx",31,0xd36b7e90)
	HX_STACK_THIS(this)
	HX_STACK_LINE(31)
	return ::org::gameplay3d::Image_obj::hx_Image_getFormat(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,getFormat,return )

int Image_obj::getHeight( ){
	HX_STACK_FRAME("org.gameplay3d.Image","getHeight",0xb0adf73d,"org.gameplay3d.Image.getHeight","org/gameplay3d/Image.hx",37,0xd36b7e90)
	HX_STACK_THIS(this)
	HX_STACK_LINE(37)
	return ::org::gameplay3d::Image_obj::hx_Image_getHeight(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,getHeight,return )

int Image_obj::getWidth( ){
	HX_STACK_FRAME("org.gameplay3d.Image","getWidth",0xa7948370,"org.gameplay3d.Image.getWidth","org/gameplay3d/Image.hx",43,0xd36b7e90)
	HX_STACK_THIS(this)
	HX_STACK_LINE(43)
	return ::org::gameplay3d::Image_obj::hx_Image_getWidth(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,getWidth,return )

::org::gameplay3d::Image Image_obj::create( ::String path){
	HX_STACK_FRAME("org.gameplay3d.Image","create",0xa894ecdc,"org.gameplay3d.Image.create","org/gameplay3d/Image.hx",19,0xd36b7e90)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(19)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Image >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(19)
	Dynamic nativeObject = ::org::gameplay3d::Image_obj::hx_Image_static_create(path);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(19)
	if (((nativeObject == null()))){
		HX_STACK_LINE(19)
		return null();
	}
	else{
		HX_STACK_LINE(19)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(19)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(19)
			::org::gameplay3d::Image result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(19)
			if (((result == null()))){
				HX_STACK_LINE(19)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(19)
				::org::gameplay3d::Image _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(19)
				result = _g;
				HX_STACK_LINE(19)
				ref->set(result);
			}
			HX_STACK_LINE(19)
			return result;
		}
		else{
			HX_STACK_LINE(19)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(19)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(19)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,create,return )

Dynamic Image_obj::hx_Image_static_create;

Dynamic Image_obj::hx_Image_getData;

Dynamic Image_obj::hx_Image_getFormat;

Dynamic Image_obj::hx_Image_getHeight;

Dynamic Image_obj::hx_Image_getWidth;


Image_obj::Image_obj()
{
}

Dynamic Image_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getData") ) { return getData_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getWidth") ) { return getWidth_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getFormat") ) { return getFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"getHeight") ) { return getHeight_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hx_Image_getData") ) { return hx_Image_getData; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"hx_Image_getWidth") ) { return hx_Image_getWidth; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hx_Image_getFormat") ) { return hx_Image_getFormat; }
		if (HX_FIELD_EQ(inName,"hx_Image_getHeight") ) { return hx_Image_getHeight; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Image_static_create") ) { return hx_Image_static_create; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Image_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"hx_Image_getData") ) { hx_Image_getData=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"hx_Image_getWidth") ) { hx_Image_getWidth=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hx_Image_getFormat") ) { hx_Image_getFormat=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Image_getHeight") ) { hx_Image_getHeight=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Image_static_create") ) { hx_Image_static_create=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Image_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create"),
	HX_CSTRING("hx_Image_static_create"),
	HX_CSTRING("hx_Image_getData"),
	HX_CSTRING("hx_Image_getFormat"),
	HX_CSTRING("hx_Image_getHeight"),
	HX_CSTRING("hx_Image_getWidth"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("getData"),
	HX_CSTRING("getFormat"),
	HX_CSTRING("getHeight"),
	HX_CSTRING("getWidth"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Image_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Image_obj::hx_Image_static_create,"hx_Image_static_create");
	HX_MARK_MEMBER_NAME(Image_obj::hx_Image_getData,"hx_Image_getData");
	HX_MARK_MEMBER_NAME(Image_obj::hx_Image_getFormat,"hx_Image_getFormat");
	HX_MARK_MEMBER_NAME(Image_obj::hx_Image_getHeight,"hx_Image_getHeight");
	HX_MARK_MEMBER_NAME(Image_obj::hx_Image_getWidth,"hx_Image_getWidth");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Image_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Image_obj::hx_Image_static_create,"hx_Image_static_create");
	HX_VISIT_MEMBER_NAME(Image_obj::hx_Image_getData,"hx_Image_getData");
	HX_VISIT_MEMBER_NAME(Image_obj::hx_Image_getFormat,"hx_Image_getFormat");
	HX_VISIT_MEMBER_NAME(Image_obj::hx_Image_getHeight,"hx_Image_getHeight");
	HX_VISIT_MEMBER_NAME(Image_obj::hx_Image_getWidth,"hx_Image_getWidth");
};

#endif

Class Image_obj::__mClass;

void Image_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.Image"), hx::TCanCast< Image_obj> ,sStaticFields,sMemberFields,
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

void Image_obj::__boot()
{
	hx_Image_static_create= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Image >(),HX_CSTRING("static_create"),(int)1);
	hx_Image_getData= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Image >(),HX_CSTRING("getData"),(int)1);
	hx_Image_getFormat= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Image >(),HX_CSTRING("getFormat"),(int)1);
	hx_Image_getHeight= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Image >(),HX_CSTRING("getHeight"),(int)1);
	hx_Image_getWidth= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Image >(),HX_CSTRING("getWidth"),(int)1);
}

} // end namespace org
} // end namespace gameplay3d
