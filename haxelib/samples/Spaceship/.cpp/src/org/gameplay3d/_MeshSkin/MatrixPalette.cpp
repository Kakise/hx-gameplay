#include <hxcpp.h>

#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Vector4
#include <org/gameplay3d/Vector4.h>
#endif
#ifndef INCLUDED_org_gameplay3d__MeshSkin_MatrixPalette
#include <org/gameplay3d/_MeshSkin/MatrixPalette.h>
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
#ifndef INCLUDED_org_gameplay3d_util_INativeArray
#include <org/gameplay3d/util/INativeArray.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_ObjectArray
#include <org/gameplay3d/util/ObjectArray.h>
#endif
namespace org{
namespace gameplay3d{
namespace _MeshSkin{

Void MatrixPalette_obj::__construct(Dynamic nativeObject,int length)
{
HX_STACK_FRAME("org.gameplay3d._MeshSkin.MatrixPalette","new",0xd0cb667a,"org.gameplay3d._MeshSkin.MatrixPalette.new","org/gameplay3d/MeshSkin.hx",111,0x9d081bc7)
HX_STACK_THIS(this)
HX_STACK_ARG(nativeObject,"nativeObject")
HX_STACK_ARG(length,"length")
{
	HX_STACK_LINE(111)
	super::__construct(hx::ClassOf< ::org::gameplay3d::Vector4 >(),nativeObject,length);
}
;
	return null();
}

//MatrixPalette_obj::~MatrixPalette_obj() { }

Dynamic MatrixPalette_obj::__CreateEmpty() { return  new MatrixPalette_obj; }
hx::ObjectPtr< MatrixPalette_obj > MatrixPalette_obj::__new(Dynamic nativeObject,int length)
{  hx::ObjectPtr< MatrixPalette_obj > result = new MatrixPalette_obj();
	result->__construct(nativeObject,length);
	return result;}

Dynamic MatrixPalette_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MatrixPalette_obj > result = new MatrixPalette_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


MatrixPalette_obj::MatrixPalette_obj()
{
}

Dynamic MatrixPalette_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic MatrixPalette_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void MatrixPalette_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(MatrixPalette_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MatrixPalette_obj::__mClass,"__mClass");
};

#endif

Class MatrixPalette_obj::__mClass;

void MatrixPalette_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d._MeshSkin.MatrixPalette"), hx::TCanCast< MatrixPalette_obj> ,sStaticFields,sMemberFields,
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

void MatrixPalette_obj::__boot()
{
}

} // end namespace org
} // end namespace gameplay3d
} // end namespace _MeshSkin
