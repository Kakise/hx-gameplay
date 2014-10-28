#include <hxcpp.h>

#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_INativeBinding
#include <org/gameplay3d/intern/INativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_ListenerWrapper
#include <org/gameplay3d/intern/ListenerWrapper.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_NativeBinding
#include <org/gameplay3d/intern/NativeBinding.h>
#endif
namespace org{
namespace gameplay3d{
namespace intern{

Void ListenerWrapper_obj::__construct(Dynamic target,Dynamic nativeObject,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.intern.ListenerWrapper","new",0x1558e8c2,"org.gameplay3d.intern.ListenerWrapper.new","org/gameplay3d/intern/ListenerWrapper.hx",21,0xf8a1978f)
HX_STACK_THIS(this)
HX_STACK_ARG(target,"target")
HX_STACK_ARG(nativeObject,"nativeObject")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(22)
	super::__construct(nativeObject,nativeObjectInitializerParams);
	HX_STACK_LINE(23)
	this->target = target;
}
;
	return null();
}

//ListenerWrapper_obj::~ListenerWrapper_obj() { }

Dynamic ListenerWrapper_obj::__CreateEmpty() { return  new ListenerWrapper_obj; }
hx::ObjectPtr< ListenerWrapper_obj > ListenerWrapper_obj::__new(Dynamic target,Dynamic nativeObject,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< ListenerWrapper_obj > result = new ListenerWrapper_obj();
	result->__construct(target,nativeObject,nativeObjectInitializerParams);
	return result;}

Dynamic ListenerWrapper_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ListenerWrapper_obj > result = new ListenerWrapper_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}


ListenerWrapper_obj::ListenerWrapper_obj()
{
}

void ListenerWrapper_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ListenerWrapper);
	HX_MARK_MEMBER_NAME(target,"target");
	::org::gameplay3d::intern::NativeBinding_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ListenerWrapper_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(target,"target");
	::org::gameplay3d::intern::NativeBinding_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ListenerWrapper_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return target; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ListenerWrapper_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ListenerWrapper_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("target"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ListenerWrapper_obj,target),HX_CSTRING("target")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("target"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ListenerWrapper_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ListenerWrapper_obj::__mClass,"__mClass");
};

#endif

Class ListenerWrapper_obj::__mClass;

void ListenerWrapper_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.intern.ListenerWrapper"), hx::TCanCast< ListenerWrapper_obj> ,sStaticFields,sMemberFields,
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

void ListenerWrapper_obj::__boot()
{
}

} // end namespace org
} // end namespace gameplay3d
} // end namespace intern
