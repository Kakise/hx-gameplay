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
#ifndef INCLUDED_org_gameplay3d_VertexFormat
#include <org/gameplay3d/VertexFormat.h>
#endif
#ifndef INCLUDED_org_gameplay3d_VertexFormat_Element
#include <org/gameplay3d/VertexFormat_Element.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_ConversionTools
#include <org/gameplay3d/intern/ConversionTools.h>
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

Void VertexFormat_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.VertexFormat","new",0xb00f93da,"org.gameplay3d.VertexFormat.new","org/gameplay3d/VertexFormat.hx",10,0x83320b36)
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

//VertexFormat_obj::~VertexFormat_obj() { }

Dynamic VertexFormat_obj::__CreateEmpty() { return  new VertexFormat_obj; }
hx::ObjectPtr< VertexFormat_obj > VertexFormat_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< VertexFormat_obj > result = new VertexFormat_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic VertexFormat_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VertexFormat_obj > result = new VertexFormat_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::org::gameplay3d::VertexFormat_Element VertexFormat_obj::getElement( int index){
	HX_STACK_FRAME("org.gameplay3d.VertexFormat","getElement",0x9253348c,"org.gameplay3d.VertexFormat.getElement","org/gameplay3d/VertexFormat.hx",25,0x83320b36)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(25)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::VertexFormat_Element >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(25)
	Dynamic nativeObject = ::org::gameplay3d::VertexFormat_obj::hx_VertexFormat_getElement(this->nativeObject,index);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(25)
	if (((nativeObject == null()))){
		HX_STACK_LINE(25)
		return null();
	}
	else{
		HX_STACK_LINE(25)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(25)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(25)
			::org::gameplay3d::VertexFormat_Element result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(25)
			if (((result == null()))){
				HX_STACK_LINE(25)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(25)
				::org::gameplay3d::VertexFormat_Element _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(25)
				result = _g;
				HX_STACK_LINE(25)
				ref->set(result);
			}
			HX_STACK_LINE(25)
			return result;
		}
		else{
			HX_STACK_LINE(25)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(25)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(25)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VertexFormat_obj,getElement,return )

int VertexFormat_obj::getElementCount( ){
	HX_STACK_FRAME("org.gameplay3d.VertexFormat","getElementCount",0x871784a3,"org.gameplay3d.VertexFormat.getElementCount","org/gameplay3d/VertexFormat.hx",31,0x83320b36)
	HX_STACK_THIS(this)
	HX_STACK_LINE(31)
	return ::org::gameplay3d::VertexFormat_obj::hx_VertexFormat_getElementCount(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(VertexFormat_obj,getElementCount,return )

int VertexFormat_obj::getVertexSize( ){
	HX_STACK_FRAME("org.gameplay3d.VertexFormat","getVertexSize",0xd6af2675,"org.gameplay3d.VertexFormat.getVertexSize","org/gameplay3d/VertexFormat.hx",37,0x83320b36)
	HX_STACK_THIS(this)
	HX_STACK_LINE(37)
	return ::org::gameplay3d::VertexFormat_obj::hx_VertexFormat_getVertexSize(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(VertexFormat_obj,getVertexSize,return )

::org::gameplay3d::VertexFormat VertexFormat_obj::make( Array< ::Dynamic > elements,int elementCount){
	HX_STACK_FRAME("org.gameplay3d.VertexFormat","make",0x5ce58134,"org.gameplay3d.VertexFormat.make","org/gameplay3d/VertexFormat.hx",18,0x83320b36)
	HX_STACK_ARG(elements,"elements")
	HX_STACK_ARG(elementCount,"elementCount")
	HX_STACK_LINE(19)
	Dynamic _g = ::org::gameplay3d::VertexFormat_obj::constructNativeObject(elements,elementCount);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(19)
	return ::org::gameplay3d::VertexFormat_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(VertexFormat_obj,make,return )

::String VertexFormat_obj::toString( int usage){
	HX_STACK_FRAME("org.gameplay3d.VertexFormat","toString",0x01ba32f2,"org.gameplay3d.VertexFormat.toString","org/gameplay3d/VertexFormat.hx",43,0x83320b36)
	HX_STACK_ARG(usage,"usage")
	HX_STACK_LINE(43)
	return ::org::gameplay3d::VertexFormat_obj::hx_VertexFormat_static_toString(usage);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(VertexFormat_obj,toString,return )

Dynamic VertexFormat_obj::constructNativeObject( Array< ::Dynamic > elements,int elementCount){
	HX_STACK_FRAME("org.gameplay3d.VertexFormat","constructNativeObject",0x3a299c67,"org.gameplay3d.VertexFormat.constructNativeObject","org/gameplay3d/VertexFormat.hx",52,0x83320b36)
	HX_STACK_ARG(elements,"elements")
	HX_STACK_ARG(elementCount,"elementCount")
	HX_STACK_LINE(53)
	Dynamic _g = ::org::gameplay3d::intern::ConversionTools_obj::insertArray(elements);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(53)
	return ::org::gameplay3d::VertexFormat_obj::hx_VertexFormat_Construct(_g,elementCount);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(VertexFormat_obj,constructNativeObject,return )

Dynamic VertexFormat_obj::hx_VertexFormat_Construct;

Dynamic VertexFormat_obj::hx_VertexFormat_getElement;

Dynamic VertexFormat_obj::hx_VertexFormat_getElementCount;

Dynamic VertexFormat_obj::hx_VertexFormat_getVertexSize;

Dynamic VertexFormat_obj::hx_VertexFormat_static_toString;


VertexFormat_obj::VertexFormat_obj()
{
}

Dynamic VertexFormat_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { return make_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getElement") ) { return getElement_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getVertexSize") ) { return getVertexSize_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getElementCount") ) { return getElementCount_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"constructNativeObject") ) { return constructNativeObject_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_VertexFormat_Construct") ) { return hx_VertexFormat_Construct; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_VertexFormat_getElement") ) { return hx_VertexFormat_getElement; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_VertexFormat_getVertexSize") ) { return hx_VertexFormat_getVertexSize; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"hx_VertexFormat_getElementCount") ) { return hx_VertexFormat_getElementCount; }
		if (HX_FIELD_EQ(inName,"hx_VertexFormat_static_toString") ) { return hx_VertexFormat_static_toString; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic VertexFormat_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 25:
		if (HX_FIELD_EQ(inName,"hx_VertexFormat_Construct") ) { hx_VertexFormat_Construct=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_VertexFormat_getElement") ) { hx_VertexFormat_getElement=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_VertexFormat_getVertexSize") ) { hx_VertexFormat_getVertexSize=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"hx_VertexFormat_getElementCount") ) { hx_VertexFormat_getElementCount=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_VertexFormat_static_toString") ) { hx_VertexFormat_static_toString=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VertexFormat_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("make"),
	HX_CSTRING("toString"),
	HX_CSTRING("constructNativeObject"),
	HX_CSTRING("hx_VertexFormat_Construct"),
	HX_CSTRING("hx_VertexFormat_getElement"),
	HX_CSTRING("hx_VertexFormat_getElementCount"),
	HX_CSTRING("hx_VertexFormat_getVertexSize"),
	HX_CSTRING("hx_VertexFormat_static_toString"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("getElement"),
	HX_CSTRING("getElementCount"),
	HX_CSTRING("getVertexSize"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VertexFormat_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(VertexFormat_obj::hx_VertexFormat_Construct,"hx_VertexFormat_Construct");
	HX_MARK_MEMBER_NAME(VertexFormat_obj::hx_VertexFormat_getElement,"hx_VertexFormat_getElement");
	HX_MARK_MEMBER_NAME(VertexFormat_obj::hx_VertexFormat_getElementCount,"hx_VertexFormat_getElementCount");
	HX_MARK_MEMBER_NAME(VertexFormat_obj::hx_VertexFormat_getVertexSize,"hx_VertexFormat_getVertexSize");
	HX_MARK_MEMBER_NAME(VertexFormat_obj::hx_VertexFormat_static_toString,"hx_VertexFormat_static_toString");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VertexFormat_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(VertexFormat_obj::hx_VertexFormat_Construct,"hx_VertexFormat_Construct");
	HX_VISIT_MEMBER_NAME(VertexFormat_obj::hx_VertexFormat_getElement,"hx_VertexFormat_getElement");
	HX_VISIT_MEMBER_NAME(VertexFormat_obj::hx_VertexFormat_getElementCount,"hx_VertexFormat_getElementCount");
	HX_VISIT_MEMBER_NAME(VertexFormat_obj::hx_VertexFormat_getVertexSize,"hx_VertexFormat_getVertexSize");
	HX_VISIT_MEMBER_NAME(VertexFormat_obj::hx_VertexFormat_static_toString,"hx_VertexFormat_static_toString");
};

#endif

Class VertexFormat_obj::__mClass;

void VertexFormat_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.VertexFormat"), hx::TCanCast< VertexFormat_obj> ,sStaticFields,sMemberFields,
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

void VertexFormat_obj::__boot()
{
	hx_VertexFormat_Construct= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::VertexFormat >(),HX_CSTRING("Construct"),(int)2);
	hx_VertexFormat_getElement= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::VertexFormat >(),HX_CSTRING("getElement"),(int)2);
	hx_VertexFormat_getElementCount= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::VertexFormat >(),HX_CSTRING("getElementCount"),(int)1);
	hx_VertexFormat_getVertexSize= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::VertexFormat >(),HX_CSTRING("getVertexSize"),(int)1);
	hx_VertexFormat_static_toString= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::VertexFormat >(),HX_CSTRING("static_toString"),(int)1);
}

} // end namespace org
} // end namespace gameplay3d
