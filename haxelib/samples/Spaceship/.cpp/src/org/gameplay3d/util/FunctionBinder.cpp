#include <hxcpp.h>

#ifndef INCLUDED_org_gameplay3d_intern_INativeBinding
#include <org/gameplay3d/intern/INativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_NativeBinding
#include <org/gameplay3d/intern/NativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_FunctionBinder
#include <org/gameplay3d/util/FunctionBinder.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_NativeInterface
#include <org/gameplay3d/util/NativeInterface.h>
#endif
namespace org{
namespace gameplay3d{
namespace util{

Void FunctionBinder_obj::__construct(Dynamic func,::String type,hx::Null< bool >  __o_native)
{
HX_STACK_FRAME("org.gameplay3d.util.FunctionBinder","new",0x2b096bb3,"org.gameplay3d.util.FunctionBinder.new","org/gameplay3d/util/FunctionBinder.hx",22,0x16c75f9c)
HX_STACK_THIS(this)
HX_STACK_ARG(func,"func")
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_native,"native")
bool native = __o_native.Default(true);
{
	HX_STACK_LINE(22)
	Dynamic func1 = Dynamic( Array_obj<Dynamic>::__new().Add(func));		HX_STACK_VAR(func1,"func1");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Dynamic,func1)
	Dynamic run(){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/gameplay3d/util/FunctionBinder.hx",31,0x16c75f9c)
		{
			HX_STACK_LINE(31)
			return func1->__GetItem((int)0)()->__Field(HX_CSTRING("nativeObject"),true);
		}
		return null();
	}
	HX_END_LOCAL_FUNC0(return)

	HX_STACK_LINE(24)
	Dynamic _g = ::org::gameplay3d::util::FunctionBinder_obj::createFunctionBinder((  ((native)) ? Dynamic(func1->__GetItem((int)0)) : Dynamic( Dynamic(new _Function_1_1(func1))) ));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(24)
	this->nativeObject = _g;
	HX_STACK_LINE(35)
	this->type = type;
	HX_STACK_LINE(36)
	this->func = func1->__GetItem((int)0);
}
;
	return null();
}

//FunctionBinder_obj::~FunctionBinder_obj() { }

Dynamic FunctionBinder_obj::__CreateEmpty() { return  new FunctionBinder_obj; }
hx::ObjectPtr< FunctionBinder_obj > FunctionBinder_obj::__new(Dynamic func,::String type,hx::Null< bool >  __o_native)
{  hx::ObjectPtr< FunctionBinder_obj > result = new FunctionBinder_obj();
	result->__construct(func,type,__o_native);
	return result;}

Dynamic FunctionBinder_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FunctionBinder_obj > result = new FunctionBinder_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Dynamic FunctionBinder_obj::createFunctionBinder;


FunctionBinder_obj::FunctionBinder_obj()
{
}

void FunctionBinder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FunctionBinder);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(func,"func");
	::org::gameplay3d::intern::NativeBinding_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FunctionBinder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(func,"func");
	::org::gameplay3d::intern::NativeBinding_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FunctionBinder_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"func") ) { return func; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"createFunctionBinder") ) { return createFunctionBinder; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FunctionBinder_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"func") ) { func=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"createFunctionBinder") ) { createFunctionBinder=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FunctionBinder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("type"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("createFunctionBinder"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(FunctionBinder_obj,type),HX_CSTRING("type")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FunctionBinder_obj,func),HX_CSTRING("func")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("type"),
	HX_CSTRING("func"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FunctionBinder_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FunctionBinder_obj::createFunctionBinder,"createFunctionBinder");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FunctionBinder_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FunctionBinder_obj::createFunctionBinder,"createFunctionBinder");
};

#endif

Class FunctionBinder_obj::__mClass;

void FunctionBinder_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.util.FunctionBinder"), hx::TCanCast< FunctionBinder_obj> ,sStaticFields,sMemberFields,
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

void FunctionBinder_obj::__boot()
{
	createFunctionBinder= ::org::gameplay3d::util::NativeInterface_obj::load(HX_CSTRING("createFunctionBinder"),(int)1);
}

} // end namespace org
} // end namespace gameplay3d
} // end namespace util
