#include <hxcpp.h>

#ifndef INCLUDED_org_gameplay3d__Matrix_MatrixEntries
#include <org/gameplay3d/_Matrix/MatrixEntries.h>
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
namespace _Matrix{

Void MatrixEntries_obj::__construct(Dynamic nativeObject)
{
HX_STACK_FRAME("org.gameplay3d._Matrix.MatrixEntries","new",0x37bc2046,"org.gameplay3d._Matrix.MatrixEntries.new","org/gameplay3d/Matrix.hx",693,0xc2685e30)
HX_STACK_THIS(this)
HX_STACK_ARG(nativeObject,"nativeObject")
{
	HX_STACK_LINE(693)
	super::__construct(nativeObject,::org::gameplay3d::util::PrimitiveArray_obj::getNativeArrayElementFloat_dyn(),::org::gameplay3d::util::PrimitiveArray_obj::setNativeArrayElementFloat_dyn(),(int)16);
}
;
	return null();
}

//MatrixEntries_obj::~MatrixEntries_obj() { }

Dynamic MatrixEntries_obj::__CreateEmpty() { return  new MatrixEntries_obj; }
hx::ObjectPtr< MatrixEntries_obj > MatrixEntries_obj::__new(Dynamic nativeObject)
{  hx::ObjectPtr< MatrixEntries_obj > result = new MatrixEntries_obj();
	result->__construct(nativeObject);
	return result;}

Dynamic MatrixEntries_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MatrixEntries_obj > result = new MatrixEntries_obj();
	result->__construct(inArgs[0]);
	return result;}


MatrixEntries_obj::MatrixEntries_obj()
{
}

Dynamic MatrixEntries_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic MatrixEntries_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void MatrixEntries_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(MatrixEntries_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MatrixEntries_obj::__mClass,"__mClass");
};

#endif

Class MatrixEntries_obj::__mClass;

void MatrixEntries_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d._Matrix.MatrixEntries"), hx::TCanCast< MatrixEntries_obj> ,sStaticFields,sMemberFields,
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

void MatrixEntries_obj::__boot()
{
}

} // end namespace org
} // end namespace gameplay3d
} // end namespace _Matrix
