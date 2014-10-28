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
#ifndef INCLUDED_org_gameplay3d_AIState
#include <org/gameplay3d/AIState.h>
#endif
#ifndef INCLUDED_org_gameplay3d_AIStateMachine
#include <org/gameplay3d/AIStateMachine.h>
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

Void AIStateMachine_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.AIStateMachine","new",0x4da9933d,"org.gameplay3d.AIStateMachine.new","org/gameplay3d/AIStateMachine.hx",9,0xf41ca133)
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

//AIStateMachine_obj::~AIStateMachine_obj() { }

Dynamic AIStateMachine_obj::__CreateEmpty() { return  new AIStateMachine_obj; }
hx::ObjectPtr< AIStateMachine_obj > AIStateMachine_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< AIStateMachine_obj > result = new AIStateMachine_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic AIStateMachine_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AIStateMachine_obj > result = new AIStateMachine_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::org::gameplay3d::AIState AIStateMachine_obj::addState_Str( ::String id){
	HX_STACK_FRAME("org.gameplay3d.AIStateMachine","addState_Str",0x85589345,"org.gameplay3d.AIStateMachine.addState_Str","org/gameplay3d/AIStateMachine.hx",18,0xf41ca133)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(18)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::AIState >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(18)
	Dynamic nativeObject = ::org::gameplay3d::AIStateMachine_obj::hx_AIStateMachine_addState_Str(this->nativeObject,id);		HX_STACK_VAR(nativeObject,"nativeObject");
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
			::org::gameplay3d::AIState result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(18)
			if (((result == null()))){
				HX_STACK_LINE(18)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(18)
				::org::gameplay3d::AIState _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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


HX_DEFINE_DYNAMIC_FUNC1(AIStateMachine_obj,addState_Str,return )

Void AIStateMachine_obj::addState_AIState( ::org::gameplay3d::AIState state){
{
		HX_STACK_FRAME("org.gameplay3d.AIStateMachine","addState_AIState",0x08f400bd,"org.gameplay3d.AIStateMachine.addState_AIState","org/gameplay3d/AIStateMachine.hx",24,0xf41ca133)
		HX_STACK_THIS(this)
		HX_STACK_ARG(state,"state")
		HX_STACK_LINE(24)
		::org::gameplay3d::AIStateMachine_obj::hx_AIStateMachine_addState_AIState(this->nativeObject,(  (((state == null()))) ? Dynamic(null()) : Dynamic(state->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AIStateMachine_obj,addState_AIState,(void))

::org::gameplay3d::AIState AIStateMachine_obj::getActiveState( ){
	HX_STACK_FRAME("org.gameplay3d.AIStateMachine","getActiveState",0x740de9b8,"org.gameplay3d.AIStateMachine.getActiveState","org/gameplay3d/AIStateMachine.hx",30,0xf41ca133)
	HX_STACK_THIS(this)
	HX_STACK_LINE(30)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::AIState >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(30)
	Dynamic nativeObject = ::org::gameplay3d::AIStateMachine_obj::hx_AIStateMachine_getActiveState(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(30)
	if (((nativeObject == null()))){
		HX_STACK_LINE(30)
		return null();
	}
	else{
		HX_STACK_LINE(30)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(30)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(30)
			::org::gameplay3d::AIState result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(30)
			if (((result == null()))){
				HX_STACK_LINE(30)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(30)
				::org::gameplay3d::AIState _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(30)
				result = _g;
				HX_STACK_LINE(30)
				ref->set(result);
			}
			HX_STACK_LINE(30)
			return result;
		}
		else{
			HX_STACK_LINE(30)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(30)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(30)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AIStateMachine_obj,getActiveState,return )

::org::gameplay3d::AIAgent AIStateMachine_obj::getAgent( ){
	HX_STACK_FRAME("org.gameplay3d.AIStateMachine","getAgent",0x55810e52,"org.gameplay3d.AIStateMachine.getAgent","org/gameplay3d/AIStateMachine.hx",36,0xf41ca133)
	HX_STACK_THIS(this)
	HX_STACK_LINE(36)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::AIAgent >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(36)
	Dynamic nativeObject = ::org::gameplay3d::AIStateMachine_obj::hx_AIStateMachine_getAgent(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(36)
	if (((nativeObject == null()))){
		HX_STACK_LINE(36)
		return null();
	}
	else{
		HX_STACK_LINE(36)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(36)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(36)
			::org::gameplay3d::AIAgent result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(36)
			if (((result == null()))){
				HX_STACK_LINE(36)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(36)
				::org::gameplay3d::AIAgent _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(36)
				result = _g;
				HX_STACK_LINE(36)
				ref->set(result);
			}
			HX_STACK_LINE(36)
			return result;
		}
		else{
			HX_STACK_LINE(36)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(36)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(36)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AIStateMachine_obj,getAgent,return )

::org::gameplay3d::AIState AIStateMachine_obj::getState( ::String id){
	HX_STACK_FRAME("org.gameplay3d.AIStateMachine","getState",0xbb4c419e,"org.gameplay3d.AIStateMachine.getState","org/gameplay3d/AIStateMachine.hx",42,0xf41ca133)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(42)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::AIState >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(42)
	Dynamic nativeObject = ::org::gameplay3d::AIStateMachine_obj::hx_AIStateMachine_getState(this->nativeObject,id);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(42)
	if (((nativeObject == null()))){
		HX_STACK_LINE(42)
		return null();
	}
	else{
		HX_STACK_LINE(42)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(42)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(42)
			::org::gameplay3d::AIState result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(42)
			if (((result == null()))){
				HX_STACK_LINE(42)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(42)
				::org::gameplay3d::AIState _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(42)
				result = _g;
				HX_STACK_LINE(42)
				ref->set(result);
			}
			HX_STACK_LINE(42)
			return result;
		}
		else{
			HX_STACK_LINE(42)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(42)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(42)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AIStateMachine_obj,getState,return )

Void AIStateMachine_obj::removeState( ::org::gameplay3d::AIState state){
{
		HX_STACK_FRAME("org.gameplay3d.AIStateMachine","removeState",0xb88ebb0a,"org.gameplay3d.AIStateMachine.removeState","org/gameplay3d/AIStateMachine.hx",48,0xf41ca133)
		HX_STACK_THIS(this)
		HX_STACK_ARG(state,"state")
		HX_STACK_LINE(48)
		::org::gameplay3d::AIStateMachine_obj::hx_AIStateMachine_removeState(this->nativeObject,(  (((state == null()))) ? Dynamic(null()) : Dynamic(state->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AIStateMachine_obj,removeState,(void))

::org::gameplay3d::AIState AIStateMachine_obj::setState_Str( ::String id){
	HX_STACK_FRAME("org.gameplay3d.AIStateMachine","setState_Str",0xaa5431a4,"org.gameplay3d.AIStateMachine.setState_Str","org/gameplay3d/AIStateMachine.hx",54,0xf41ca133)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(54)
	return ::org::gameplay3d::AIStateMachine_obj::hx_AIStateMachine_setState_Str(this->nativeObject,id);
}


HX_DEFINE_DYNAMIC_FUNC1(AIStateMachine_obj,setState_Str,return )

bool AIStateMachine_obj::setState_AIState( ::org::gameplay3d::AIState state){
	HX_STACK_FRAME("org.gameplay3d.AIStateMachine","setState_AIState",0xca27ba9c,"org.gameplay3d.AIStateMachine.setState_AIState","org/gameplay3d/AIStateMachine.hx",60,0xf41ca133)
	HX_STACK_THIS(this)
	HX_STACK_ARG(state,"state")
	HX_STACK_LINE(60)
	return ::org::gameplay3d::AIStateMachine_obj::hx_AIStateMachine_setState_AIState(this->nativeObject,(  (((state == null()))) ? Dynamic(null()) : Dynamic(state->nativeObject) ));
}


HX_DEFINE_DYNAMIC_FUNC1(AIStateMachine_obj,setState_AIState,return )

Dynamic AIStateMachine_obj::hx_AIStateMachine_addState_Str;

Dynamic AIStateMachine_obj::hx_AIStateMachine_addState_AIState;

Dynamic AIStateMachine_obj::hx_AIStateMachine_getActiveState;

Dynamic AIStateMachine_obj::hx_AIStateMachine_getAgent;

Dynamic AIStateMachine_obj::hx_AIStateMachine_getState;

Dynamic AIStateMachine_obj::hx_AIStateMachine_removeState;

Dynamic AIStateMachine_obj::hx_AIStateMachine_setState_Str;

Dynamic AIStateMachine_obj::hx_AIStateMachine_setState_AIState;


AIStateMachine_obj::AIStateMachine_obj()
{
}

Dynamic AIStateMachine_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"getAgent") ) { return getAgent_dyn(); }
		if (HX_FIELD_EQ(inName,"getState") ) { return getState_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeState") ) { return removeState_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addState_Str") ) { return addState_Str_dyn(); }
		if (HX_FIELD_EQ(inName,"setState_Str") ) { return setState_Str_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getActiveState") ) { return getActiveState_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addState_AIState") ) { return addState_AIState_dyn(); }
		if (HX_FIELD_EQ(inName,"setState_AIState") ) { return setState_AIState_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_AIStateMachine_getAgent") ) { return hx_AIStateMachine_getAgent; }
		if (HX_FIELD_EQ(inName,"hx_AIStateMachine_getState") ) { return hx_AIStateMachine_getState; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_AIStateMachine_removeState") ) { return hx_AIStateMachine_removeState; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"hx_AIStateMachine_addState_Str") ) { return hx_AIStateMachine_addState_Str; }
		if (HX_FIELD_EQ(inName,"hx_AIStateMachine_setState_Str") ) { return hx_AIStateMachine_setState_Str; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"hx_AIStateMachine_getActiveState") ) { return hx_AIStateMachine_getActiveState; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"hx_AIStateMachine_addState_AIState") ) { return hx_AIStateMachine_addState_AIState; }
		if (HX_FIELD_EQ(inName,"hx_AIStateMachine_setState_AIState") ) { return hx_AIStateMachine_setState_AIState; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AIStateMachine_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 26:
		if (HX_FIELD_EQ(inName,"hx_AIStateMachine_getAgent") ) { hx_AIStateMachine_getAgent=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_AIStateMachine_getState") ) { hx_AIStateMachine_getState=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_AIStateMachine_removeState") ) { hx_AIStateMachine_removeState=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"hx_AIStateMachine_addState_Str") ) { hx_AIStateMachine_addState_Str=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_AIStateMachine_setState_Str") ) { hx_AIStateMachine_setState_Str=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"hx_AIStateMachine_getActiveState") ) { hx_AIStateMachine_getActiveState=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"hx_AIStateMachine_addState_AIState") ) { hx_AIStateMachine_addState_AIState=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_AIStateMachine_setState_AIState") ) { hx_AIStateMachine_setState_AIState=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AIStateMachine_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("hx_AIStateMachine_addState_Str"),
	HX_CSTRING("hx_AIStateMachine_addState_AIState"),
	HX_CSTRING("hx_AIStateMachine_getActiveState"),
	HX_CSTRING("hx_AIStateMachine_getAgent"),
	HX_CSTRING("hx_AIStateMachine_getState"),
	HX_CSTRING("hx_AIStateMachine_removeState"),
	HX_CSTRING("hx_AIStateMachine_setState_Str"),
	HX_CSTRING("hx_AIStateMachine_setState_AIState"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("addState_Str"),
	HX_CSTRING("addState_AIState"),
	HX_CSTRING("getActiveState"),
	HX_CSTRING("getAgent"),
	HX_CSTRING("getState"),
	HX_CSTRING("removeState"),
	HX_CSTRING("setState_Str"),
	HX_CSTRING("setState_AIState"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AIStateMachine_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AIStateMachine_obj::hx_AIStateMachine_addState_Str,"hx_AIStateMachine_addState_Str");
	HX_MARK_MEMBER_NAME(AIStateMachine_obj::hx_AIStateMachine_addState_AIState,"hx_AIStateMachine_addState_AIState");
	HX_MARK_MEMBER_NAME(AIStateMachine_obj::hx_AIStateMachine_getActiveState,"hx_AIStateMachine_getActiveState");
	HX_MARK_MEMBER_NAME(AIStateMachine_obj::hx_AIStateMachine_getAgent,"hx_AIStateMachine_getAgent");
	HX_MARK_MEMBER_NAME(AIStateMachine_obj::hx_AIStateMachine_getState,"hx_AIStateMachine_getState");
	HX_MARK_MEMBER_NAME(AIStateMachine_obj::hx_AIStateMachine_removeState,"hx_AIStateMachine_removeState");
	HX_MARK_MEMBER_NAME(AIStateMachine_obj::hx_AIStateMachine_setState_Str,"hx_AIStateMachine_setState_Str");
	HX_MARK_MEMBER_NAME(AIStateMachine_obj::hx_AIStateMachine_setState_AIState,"hx_AIStateMachine_setState_AIState");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AIStateMachine_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AIStateMachine_obj::hx_AIStateMachine_addState_Str,"hx_AIStateMachine_addState_Str");
	HX_VISIT_MEMBER_NAME(AIStateMachine_obj::hx_AIStateMachine_addState_AIState,"hx_AIStateMachine_addState_AIState");
	HX_VISIT_MEMBER_NAME(AIStateMachine_obj::hx_AIStateMachine_getActiveState,"hx_AIStateMachine_getActiveState");
	HX_VISIT_MEMBER_NAME(AIStateMachine_obj::hx_AIStateMachine_getAgent,"hx_AIStateMachine_getAgent");
	HX_VISIT_MEMBER_NAME(AIStateMachine_obj::hx_AIStateMachine_getState,"hx_AIStateMachine_getState");
	HX_VISIT_MEMBER_NAME(AIStateMachine_obj::hx_AIStateMachine_removeState,"hx_AIStateMachine_removeState");
	HX_VISIT_MEMBER_NAME(AIStateMachine_obj::hx_AIStateMachine_setState_Str,"hx_AIStateMachine_setState_Str");
	HX_VISIT_MEMBER_NAME(AIStateMachine_obj::hx_AIStateMachine_setState_AIState,"hx_AIStateMachine_setState_AIState");
};

#endif

Class AIStateMachine_obj::__mClass;

void AIStateMachine_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.AIStateMachine"), hx::TCanCast< AIStateMachine_obj> ,sStaticFields,sMemberFields,
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

void AIStateMachine_obj::__boot()
{
	hx_AIStateMachine_addState_Str= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AIStateMachine >(),HX_CSTRING("addState_Str"),(int)2);
	hx_AIStateMachine_addState_AIState= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AIStateMachine >(),HX_CSTRING("addState_AIState"),(int)2);
	hx_AIStateMachine_getActiveState= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AIStateMachine >(),HX_CSTRING("getActiveState"),(int)1);
	hx_AIStateMachine_getAgent= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AIStateMachine >(),HX_CSTRING("getAgent"),(int)1);
	hx_AIStateMachine_getState= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AIStateMachine >(),HX_CSTRING("getState"),(int)2);
	hx_AIStateMachine_removeState= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AIStateMachine >(),HX_CSTRING("removeState"),(int)2);
	hx_AIStateMachine_setState_Str= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AIStateMachine >(),HX_CSTRING("setState_Str"),(int)2);
	hx_AIStateMachine_setState_AIState= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AIStateMachine >(),HX_CSTRING("setState_AIState"),(int)2);
}

} // end namespace org
} // end namespace gameplay3d
