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
#ifndef INCLUDED_org_gameplay3d_AIAgent
#include <org/gameplay3d/AIAgent.h>
#endif
#ifndef INCLUDED_org_gameplay3d_AIController
#include <org/gameplay3d/AIController.h>
#endif
#ifndef INCLUDED_org_gameplay3d_AIMessage
#include <org/gameplay3d/AIMessage.h>
#endif
#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Ref
#include <org/gameplay3d/Ref.h>
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

Void AIController_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.AIController","new",0x3debe623,"org.gameplay3d.AIController.new","org/gameplay3d/AIController.hx",9,0x9d16550d)
HX_STACK_THIS(this)
HX_STACK_ARG(nativeObjectInitializer,"nativeObjectInitializer")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(9)
	super::__construct(nativeObjectInitializer,nativeObjectInitializerParams);
}
;
	return null();
}

//AIController_obj::~AIController_obj() { }

Dynamic AIController_obj::__CreateEmpty() { return  new AIController_obj; }
hx::ObjectPtr< AIController_obj > AIController_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< AIController_obj > result = new AIController_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic AIController_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AIController_obj > result = new AIController_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::org::gameplay3d::AIAgent AIController_obj::findAgent( ::String id){
	HX_STACK_FRAME("org.gameplay3d.AIController","findAgent",0x7c66bdcf,"org.gameplay3d.AIController.findAgent","org/gameplay3d/AIController.hx",18,0x9d16550d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(18)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::AIAgent >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(18)
	Dynamic nativeObject = ::org::gameplay3d::AIController_obj::hx_AIController_findAgent(this->nativeObject,id);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(18)
	if (((nativeObject == null()))){
		HX_STACK_LINE(18)
		return null();
	}
	else{
		HX_STACK_LINE(18)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(18)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(18)
			::org::gameplay3d::AIAgent result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(18)
			if (((result == null()))){
				HX_STACK_LINE(18)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(18)
				::org::gameplay3d::AIAgent _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(18)
				result = _g;
				HX_STACK_LINE(18)
				ref->set(result);
			}
			HX_STACK_LINE(18)
			return result;
		}
		else{
			HX_STACK_LINE(18)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(18)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(18)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AIController_obj,findAgent,return )

Void AIController_obj::sendMessage( ::org::gameplay3d::AIMessage message,Float delay){
{
		HX_STACK_FRAME("org.gameplay3d.AIController","sendMessage",0x35359a22,"org.gameplay3d.AIController.sendMessage","org/gameplay3d/AIController.hx",24,0x9d16550d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(message,"message")
		HX_STACK_ARG(delay,"delay")
		HX_STACK_LINE(24)
		::org::gameplay3d::AIController_obj::hx_AIController_sendMessage(this->nativeObject,(  (((message == null()))) ? Dynamic(null()) : Dynamic(message->nativeObject) ),delay);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AIController_obj,sendMessage,(void))

Dynamic AIController_obj::hx_AIController_findAgent;

Dynamic AIController_obj::hx_AIController_sendMessage;


AIController_obj::AIController_obj()
{
}

Dynamic AIController_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"findAgent") ) { return findAgent_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"sendMessage") ) { return sendMessage_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_AIController_findAgent") ) { return hx_AIController_findAgent; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"hx_AIController_sendMessage") ) { return hx_AIController_sendMessage; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AIController_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 25:
		if (HX_FIELD_EQ(inName,"hx_AIController_findAgent") ) { hx_AIController_findAgent=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"hx_AIController_sendMessage") ) { hx_AIController_sendMessage=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AIController_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("hx_AIController_findAgent"),
	HX_CSTRING("hx_AIController_sendMessage"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("findAgent"),
	HX_CSTRING("sendMessage"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AIController_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AIController_obj::hx_AIController_findAgent,"hx_AIController_findAgent");
	HX_MARK_MEMBER_NAME(AIController_obj::hx_AIController_sendMessage,"hx_AIController_sendMessage");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AIController_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AIController_obj::hx_AIController_findAgent,"hx_AIController_findAgent");
	HX_VISIT_MEMBER_NAME(AIController_obj::hx_AIController_sendMessage,"hx_AIController_sendMessage");
};

#endif

Class AIController_obj::__mClass;

void AIController_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.AIController"), hx::TCanCast< AIController_obj> ,sStaticFields,sMemberFields,
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

void AIController_obj::__boot()
{
	hx_AIController_findAgent= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AIController >(),HX_CSTRING("findAgent"),(int)2);
	hx_AIController_sendMessage= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AIController >(),HX_CSTRING("sendMessage"),(int)3);
}

} // end namespace org
} // end namespace gameplay3d
