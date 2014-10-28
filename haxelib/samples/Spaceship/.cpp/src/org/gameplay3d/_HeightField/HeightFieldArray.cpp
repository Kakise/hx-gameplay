#include <hxcpp.h>

#ifndef INCLUDED_org_gameplay3d__HeightField_HeightFieldArray
#include <org/gameplay3d/_HeightField/HeightFieldArray.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_INativeBinding
#include <org/gameplay3d/intern/INativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_NativeBinding
#include <org/gameplay3d/intern/NativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_IMutableNativeArray
#include <org/gameplay3d/util/IMutableNativeArray.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_INativeArray
#include <org/gameplay3d/util/INativeArray.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_PrimitiveArray
#include <org/gameplay3d/util/PrimitiveArray.h>
#endif
namespace org{
namespace gameplay3d{
namespace _HeightField{

Void HeightFieldArray_obj::__construct(Dynamic nativeObject,int rows,int columns)
{
HX_STACK_FRAME("org.gameplay3d._HeightField.HeightFieldArray","new",0x375260a5,"org.gameplay3d._HeightField.HeightFieldArray.new","org/gameplay3d/HeightField.hx",95,0x8176a958)
HX_STACK_THIS(this)
HX_STACK_ARG(nativeObject,"nativeObject")
HX_STACK_ARG(rows,"rows")
HX_STACK_ARG(columns,"columns")
{
	HX_STACK_LINE(95)
	super::__construct(nativeObject,::org::gameplay3d::util::PrimitiveArray_obj::getNativeArrayElementFloat_dyn(),::org::gameplay3d::util::PrimitiveArray_obj::setNativeArrayElementFloat_dyn(),(rows * columns));
}
;
	return null();
}

//HeightFieldArray_obj::~HeightFieldArray_obj() { }

Dynamic HeightFieldArray_obj::__CreateEmpty() { return  new HeightFieldArray_obj; }
hx::ObjectPtr< HeightFieldArray_obj > HeightFieldArray_obj::__new(Dynamic nativeObject,int rows,int columns)
{  hx::ObjectPtr< HeightFieldArray_obj > result = new HeightFieldArray_obj();
	result->__construct(nativeObject,rows,columns);
	return result;}

Dynamic HeightFieldArray_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HeightFieldArray_obj > result = new HeightFieldArray_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}


HeightFieldArray_obj::HeightFieldArray_obj()
{
}

Dynamic HeightFieldArray_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic HeightFieldArray_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void HeightFieldArray_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HeightFieldArray_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HeightFieldArray_obj::__mClass,"__mClass");
};

#endif

Class HeightFieldArray_obj::__mClass;

void HeightFieldArray_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d._HeightField.HeightFieldArray"), hx::TCanCast< HeightFieldArray_obj> ,sStaticFields,sMemberFields,
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

void HeightFieldArray_obj::__boot()
{
}

} // end namespace org
} // end namespace gameplay3d
} // end namespace _HeightField
