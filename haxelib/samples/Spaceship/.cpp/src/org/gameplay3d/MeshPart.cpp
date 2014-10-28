#include <hxcpp.h>

#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_MeshPart
#include <org/gameplay3d/MeshPart.h>
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

Void MeshPart_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.MeshPart","new",0x9a47129f,"org.gameplay3d.MeshPart.new","org/gameplay3d/MeshPart.hx",11,0x53489c11)
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

//MeshPart_obj::~MeshPart_obj() { }

Dynamic MeshPart_obj::__CreateEmpty() { return  new MeshPart_obj; }
hx::ObjectPtr< MeshPart_obj > MeshPart_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< MeshPart_obj > result = new MeshPart_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic MeshPart_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MeshPart_obj > result = new MeshPart_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::org::gameplay3d::util::Handle MeshPart_obj::getIndexBuffer( ){
	HX_STACK_FRAME("org.gameplay3d.MeshPart","getIndexBuffer",0x1a90b0dd,"org.gameplay3d.MeshPart.getIndexBuffer","org/gameplay3d/MeshPart.hx",20,0x53489c11)
	HX_STACK_THIS(this)
	HX_STACK_LINE(20)
	Dynamic nativeObject = ::org::gameplay3d::MeshPart_obj::hx_MeshPart_getIndexBuffer(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(20)
	if (((nativeObject == null()))){
		HX_STACK_LINE(20)
		return null();
	}
	else{
		HX_STACK_LINE(20)
		return ::org::gameplay3d::util::Handle_obj::__new(nativeObject);
	}
	HX_STACK_LINE(20)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MeshPart_obj,getIndexBuffer,return )

int MeshPart_obj::getIndexCount( ){
	HX_STACK_FRAME("org.gameplay3d.MeshPart","getIndexCount",0x2cdf3b92,"org.gameplay3d.MeshPart.getIndexCount","org/gameplay3d/MeshPart.hx",26,0x53489c11)
	HX_STACK_THIS(this)
	HX_STACK_LINE(26)
	return ::org::gameplay3d::MeshPart_obj::hx_MeshPart_getIndexCount(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(MeshPart_obj,getIndexCount,return )

int MeshPart_obj::getIndexFormat( ){
	HX_STACK_FRAME("org.gameplay3d.MeshPart","getIndexFormat",0x478a8314,"org.gameplay3d.MeshPart.getIndexFormat","org/gameplay3d/MeshPart.hx",32,0x53489c11)
	HX_STACK_THIS(this)
	HX_STACK_LINE(32)
	return ::org::gameplay3d::MeshPart_obj::hx_MeshPart_getIndexFormat(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(MeshPart_obj,getIndexFormat,return )

int MeshPart_obj::getMeshIndex( ){
	HX_STACK_FRAME("org.gameplay3d.MeshPart","getMeshIndex",0x9a734050,"org.gameplay3d.MeshPart.getMeshIndex","org/gameplay3d/MeshPart.hx",38,0x53489c11)
	HX_STACK_THIS(this)
	HX_STACK_LINE(38)
	return ::org::gameplay3d::MeshPart_obj::hx_MeshPart_getMeshIndex(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(MeshPart_obj,getMeshIndex,return )

int MeshPart_obj::getPrimitiveType( ){
	HX_STACK_FRAME("org.gameplay3d.MeshPart","getPrimitiveType",0x7e7d32ec,"org.gameplay3d.MeshPart.getPrimitiveType","org/gameplay3d/MeshPart.hx",44,0x53489c11)
	HX_STACK_THIS(this)
	HX_STACK_LINE(44)
	return ::org::gameplay3d::MeshPart_obj::hx_MeshPart_getPrimitiveType(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(MeshPart_obj,getPrimitiveType,return )

bool MeshPart_obj::isDynamic( ){
	HX_STACK_FRAME("org.gameplay3d.MeshPart","isDynamic",0x10ad1834,"org.gameplay3d.MeshPart.isDynamic","org/gameplay3d/MeshPart.hx",50,0x53489c11)
	HX_STACK_THIS(this)
	HX_STACK_LINE(50)
	return ::org::gameplay3d::MeshPart_obj::hx_MeshPart_isDynamic(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(MeshPart_obj,isDynamic,return )

Void MeshPart_obj::setIndexData( Array< unsigned char > indexData,int indexStart,int indexCount){
{
		HX_STACK_FRAME("org.gameplay3d.MeshPart","setIndexData",0xb7a8cc3b,"org.gameplay3d.MeshPart.setIndexData","org/gameplay3d/MeshPart.hx",56,0x53489c11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(indexData,"indexData")
		HX_STACK_ARG(indexStart,"indexStart")
		HX_STACK_ARG(indexCount,"indexCount")
		HX_STACK_LINE(56)
		::org::gameplay3d::MeshPart_obj::hx_MeshPart_setIndexData(this->nativeObject,indexData,indexStart,indexCount);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(MeshPart_obj,setIndexData,(void))

Dynamic MeshPart_obj::hx_MeshPart_getIndexBuffer;

Dynamic MeshPart_obj::hx_MeshPart_getIndexCount;

Dynamic MeshPart_obj::hx_MeshPart_getIndexFormat;

Dynamic MeshPart_obj::hx_MeshPart_getMeshIndex;

Dynamic MeshPart_obj::hx_MeshPart_getPrimitiveType;

Dynamic MeshPart_obj::hx_MeshPart_isDynamic;

Dynamic MeshPart_obj::hx_MeshPart_setIndexData;


MeshPart_obj::MeshPart_obj()
{
}

Dynamic MeshPart_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"isDynamic") ) { return isDynamic_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getMeshIndex") ) { return getMeshIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"setIndexData") ) { return setIndexData_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getIndexCount") ) { return getIndexCount_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getIndexBuffer") ) { return getIndexBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"getIndexFormat") ) { return getIndexFormat_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getPrimitiveType") ) { return getPrimitiveType_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hx_MeshPart_isDynamic") ) { return hx_MeshPart_isDynamic; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_MeshPart_getMeshIndex") ) { return hx_MeshPart_getMeshIndex; }
		if (HX_FIELD_EQ(inName,"hx_MeshPart_setIndexData") ) { return hx_MeshPart_setIndexData; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_MeshPart_getIndexCount") ) { return hx_MeshPart_getIndexCount; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_MeshPart_getIndexBuffer") ) { return hx_MeshPart_getIndexBuffer; }
		if (HX_FIELD_EQ(inName,"hx_MeshPart_getIndexFormat") ) { return hx_MeshPart_getIndexFormat; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_MeshPart_getPrimitiveType") ) { return hx_MeshPart_getPrimitiveType; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MeshPart_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 21:
		if (HX_FIELD_EQ(inName,"hx_MeshPart_isDynamic") ) { hx_MeshPart_isDynamic=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_MeshPart_getMeshIndex") ) { hx_MeshPart_getMeshIndex=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_MeshPart_setIndexData") ) { hx_MeshPart_setIndexData=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_MeshPart_getIndexCount") ) { hx_MeshPart_getIndexCount=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_MeshPart_getIndexBuffer") ) { hx_MeshPart_getIndexBuffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_MeshPart_getIndexFormat") ) { hx_MeshPart_getIndexFormat=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_MeshPart_getPrimitiveType") ) { hx_MeshPart_getPrimitiveType=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MeshPart_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("hx_MeshPart_getIndexBuffer"),
	HX_CSTRING("hx_MeshPart_getIndexCount"),
	HX_CSTRING("hx_MeshPart_getIndexFormat"),
	HX_CSTRING("hx_MeshPart_getMeshIndex"),
	HX_CSTRING("hx_MeshPart_getPrimitiveType"),
	HX_CSTRING("hx_MeshPart_isDynamic"),
	HX_CSTRING("hx_MeshPart_setIndexData"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("getIndexBuffer"),
	HX_CSTRING("getIndexCount"),
	HX_CSTRING("getIndexFormat"),
	HX_CSTRING("getMeshIndex"),
	HX_CSTRING("getPrimitiveType"),
	HX_CSTRING("isDynamic"),
	HX_CSTRING("setIndexData"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MeshPart_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MeshPart_obj::hx_MeshPart_getIndexBuffer,"hx_MeshPart_getIndexBuffer");
	HX_MARK_MEMBER_NAME(MeshPart_obj::hx_MeshPart_getIndexCount,"hx_MeshPart_getIndexCount");
	HX_MARK_MEMBER_NAME(MeshPart_obj::hx_MeshPart_getIndexFormat,"hx_MeshPart_getIndexFormat");
	HX_MARK_MEMBER_NAME(MeshPart_obj::hx_MeshPart_getMeshIndex,"hx_MeshPart_getMeshIndex");
	HX_MARK_MEMBER_NAME(MeshPart_obj::hx_MeshPart_getPrimitiveType,"hx_MeshPart_getPrimitiveType");
	HX_MARK_MEMBER_NAME(MeshPart_obj::hx_MeshPart_isDynamic,"hx_MeshPart_isDynamic");
	HX_MARK_MEMBER_NAME(MeshPart_obj::hx_MeshPart_setIndexData,"hx_MeshPart_setIndexData");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MeshPart_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MeshPart_obj::hx_MeshPart_getIndexBuffer,"hx_MeshPart_getIndexBuffer");
	HX_VISIT_MEMBER_NAME(MeshPart_obj::hx_MeshPart_getIndexCount,"hx_MeshPart_getIndexCount");
	HX_VISIT_MEMBER_NAME(MeshPart_obj::hx_MeshPart_getIndexFormat,"hx_MeshPart_getIndexFormat");
	HX_VISIT_MEMBER_NAME(MeshPart_obj::hx_MeshPart_getMeshIndex,"hx_MeshPart_getMeshIndex");
	HX_VISIT_MEMBER_NAME(MeshPart_obj::hx_MeshPart_getPrimitiveType,"hx_MeshPart_getPrimitiveType");
	HX_VISIT_MEMBER_NAME(MeshPart_obj::hx_MeshPart_isDynamic,"hx_MeshPart_isDynamic");
	HX_VISIT_MEMBER_NAME(MeshPart_obj::hx_MeshPart_setIndexData,"hx_MeshPart_setIndexData");
};

#endif

Class MeshPart_obj::__mClass;

void MeshPart_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.MeshPart"), hx::TCanCast< MeshPart_obj> ,sStaticFields,sMemberFields,
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

void MeshPart_obj::__boot()
{
	hx_MeshPart_getIndexBuffer= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::MeshPart >(),HX_CSTRING("getIndexBuffer"),(int)1);
	hx_MeshPart_getIndexCount= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::MeshPart >(),HX_CSTRING("getIndexCount"),(int)1);
	hx_MeshPart_getIndexFormat= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::MeshPart >(),HX_CSTRING("getIndexFormat"),(int)1);
	hx_MeshPart_getMeshIndex= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::MeshPart >(),HX_CSTRING("getMeshIndex"),(int)1);
	hx_MeshPart_getPrimitiveType= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::MeshPart >(),HX_CSTRING("getPrimitiveType"),(int)1);
	hx_MeshPart_isDynamic= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::MeshPart >(),HX_CSTRING("isDynamic"),(int)1);
	hx_MeshPart_setIndexData= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::MeshPart >(),HX_CSTRING("setIndexData"),(int)4);
}

} // end namespace org
} // end namespace gameplay3d
