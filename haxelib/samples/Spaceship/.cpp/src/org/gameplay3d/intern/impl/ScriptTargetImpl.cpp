#include <hxcpp.h>

#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_ScriptTarget
#include <org/gameplay3d/ScriptTarget.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_INativeBinding
#include <org/gameplay3d/intern/INativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_NativeBinding
#include <org/gameplay3d/intern/NativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_impl_ScriptTargetImpl
#include <org/gameplay3d/intern/impl/ScriptTargetImpl.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_NativeInterface
#include <org/gameplay3d/util/NativeInterface.h>
#endif
namespace org{
namespace gameplay3d{
namespace intern{
namespace impl{

Void ScriptTargetImpl_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.intern.impl.ScriptTargetImpl","new",0xc711700d,"org.gameplay3d.intern.impl.ScriptTargetImpl.new","org/gameplay3d/intern/impl/ScriptTargetImpl.hx",11,0xbc249603)
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

//ScriptTargetImpl_obj::~ScriptTargetImpl_obj() { }

Dynamic ScriptTargetImpl_obj::__CreateEmpty() { return  new ScriptTargetImpl_obj; }
hx::ObjectPtr< ScriptTargetImpl_obj > ScriptTargetImpl_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< ScriptTargetImpl_obj > result = new ScriptTargetImpl_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic ScriptTargetImpl_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ScriptTargetImpl_obj > result = new ScriptTargetImpl_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *ScriptTargetImpl_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::intern::INativeBinding_obj)) return operator ::org::gameplay3d::intern::INativeBinding_obj *();
	if (inType==typeid( ::org::gameplay3d::ScriptTarget_obj)) return operator ::org::gameplay3d::ScriptTarget_obj *();
	return super::__ToInterface(inType);
}

Void ScriptTargetImpl_obj::addScriptCallback( ::String eventName,::String _function){
{
		HX_STACK_FRAME("org.gameplay3d.intern.impl.ScriptTargetImpl","addScriptCallback",0x1609995e,"org.gameplay3d.intern.impl.ScriptTargetImpl.addScriptCallback","org/gameplay3d/intern/impl/ScriptTargetImpl.hx",20,0xbc249603)
		HX_STACK_THIS(this)
		HX_STACK_ARG(eventName,"eventName")
		HX_STACK_ARG(_function,"_function")
		HX_STACK_LINE(20)
		::org::gameplay3d::intern::impl::ScriptTargetImpl_obj::hx_ScriptTarget_addScriptCallback(this->nativeObject,eventName,_function);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ScriptTargetImpl_obj,addScriptCallback,(void))

Void ScriptTargetImpl_obj::removeScriptCallback( ::String eventName,::String _function){
{
		HX_STACK_FRAME("org.gameplay3d.intern.impl.ScriptTargetImpl","removeScriptCallback",0x670bb407,"org.gameplay3d.intern.impl.ScriptTargetImpl.removeScriptCallback","org/gameplay3d/intern/impl/ScriptTargetImpl.hx",26,0xbc249603)
		HX_STACK_THIS(this)
		HX_STACK_ARG(eventName,"eventName")
		HX_STACK_ARG(_function,"_function")
		HX_STACK_LINE(26)
		::org::gameplay3d::intern::impl::ScriptTargetImpl_obj::hx_ScriptTarget_removeScriptCallback(this->nativeObject,eventName,_function);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ScriptTargetImpl_obj,removeScriptCallback,(void))

Dynamic ScriptTargetImpl_obj::hx_ScriptTarget_addScriptCallback;

Dynamic ScriptTargetImpl_obj::hx_ScriptTarget_removeScriptCallback;


ScriptTargetImpl_obj::ScriptTargetImpl_obj()
{
}

Dynamic ScriptTargetImpl_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"addScriptCallback") ) { return addScriptCallback_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"removeScriptCallback") ) { return removeScriptCallback_dyn(); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"hx_ScriptTarget_addScriptCallback") ) { return hx_ScriptTarget_addScriptCallback; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"hx_ScriptTarget_removeScriptCallback") ) { return hx_ScriptTarget_removeScriptCallback; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ScriptTargetImpl_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 33:
		if (HX_FIELD_EQ(inName,"hx_ScriptTarget_addScriptCallback") ) { hx_ScriptTarget_addScriptCallback=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"hx_ScriptTarget_removeScriptCallback") ) { hx_ScriptTarget_removeScriptCallback=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScriptTargetImpl_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("hx_ScriptTarget_addScriptCallback"),
	HX_CSTRING("hx_ScriptTarget_removeScriptCallback"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("addScriptCallback"),
	HX_CSTRING("removeScriptCallback"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScriptTargetImpl_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ScriptTargetImpl_obj::hx_ScriptTarget_addScriptCallback,"hx_ScriptTarget_addScriptCallback");
	HX_MARK_MEMBER_NAME(ScriptTargetImpl_obj::hx_ScriptTarget_removeScriptCallback,"hx_ScriptTarget_removeScriptCallback");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScriptTargetImpl_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ScriptTargetImpl_obj::hx_ScriptTarget_addScriptCallback,"hx_ScriptTarget_addScriptCallback");
	HX_VISIT_MEMBER_NAME(ScriptTargetImpl_obj::hx_ScriptTarget_removeScriptCallback,"hx_ScriptTarget_removeScriptCallback");
};

#endif

Class ScriptTargetImpl_obj::__mClass;

void ScriptTargetImpl_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.intern.impl.ScriptTargetImpl"), hx::TCanCast< ScriptTargetImpl_obj> ,sStaticFields,sMemberFields,
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

void ScriptTargetImpl_obj::__boot()
{
	hx_ScriptTarget_addScriptCallback= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ScriptTarget >(),HX_CSTRING("addScriptCallback"),(int)3);
	hx_ScriptTarget_removeScriptCallback= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ScriptTarget >(),HX_CSTRING("removeScriptCallback"),(int)3);
}

} // end namespace org
} // end namespace gameplay3d
} // end namespace intern
} // end namespace impl
