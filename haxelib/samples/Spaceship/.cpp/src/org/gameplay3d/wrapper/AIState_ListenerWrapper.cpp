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
#ifndef INCLUDED_org_gameplay3d_AIState_Listener
#include <org/gameplay3d/AIState_Listener.h>
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
#ifndef INCLUDED_org_gameplay3d_intern_ListenerWrapper
#include <org/gameplay3d/intern/ListenerWrapper.h>
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
#ifndef INCLUDED_org_gameplay3d_wrapper_AIState_ListenerWrapper
#include <org/gameplay3d/wrapper/AIState_ListenerWrapper.h>
#endif
namespace org{
namespace gameplay3d{
namespace wrapper{

Void AIState_ListenerWrapper_obj::__construct(::org::gameplay3d::AIState_Listener target,Dynamic nativeObject,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.wrapper.AIState_ListenerWrapper","new",0xaf197013,"org.gameplay3d.wrapper.AIState_ListenerWrapper.new","org/gameplay3d/wrapper/AIState_ListenerWrapper.hx",12,0xe264c59e)
HX_STACK_THIS(this)
HX_STACK_ARG(target,"target")
HX_STACK_ARG(nativeObject,"nativeObject")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(12)
	super::__construct(target,nativeObject,nativeObjectInitializerParams);
}
;
	return null();
}

//AIState_ListenerWrapper_obj::~AIState_ListenerWrapper_obj() { }

Dynamic AIState_ListenerWrapper_obj::__CreateEmpty() { return  new AIState_ListenerWrapper_obj; }
hx::ObjectPtr< AIState_ListenerWrapper_obj > AIState_ListenerWrapper_obj::__new(::org::gameplay3d::AIState_Listener target,Dynamic nativeObject,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< AIState_ListenerWrapper_obj > result = new AIState_ListenerWrapper_obj();
	result->__construct(target,nativeObject,nativeObjectInitializerParams);
	return result;}

Dynamic AIState_ListenerWrapper_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AIState_ListenerWrapper_obj > result = new AIState_ListenerWrapper_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

hx::Object *AIState_ListenerWrapper_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::AIState_Listener_obj)) return operator ::org::gameplay3d::AIState_Listener_obj *();
	return super::__ToInterface(inType);
}

Void AIState_ListenerWrapper_obj::stateEnter( ::org::gameplay3d::AIAgent agent,::org::gameplay3d::AIState state){
{
		HX_STACK_FRAME("org.gameplay3d.wrapper.AIState_ListenerWrapper","stateEnter",0x176fd5f4,"org.gameplay3d.wrapper.AIState_ListenerWrapper.stateEnter","org/gameplay3d/wrapper/AIState_ListenerWrapper.hx",27,0xe264c59e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(agent,"agent")
		HX_STACK_ARG(state,"state")
		HX_STACK_LINE(27)
		this->target->__Field(HX_CSTRING("stateEnter"),true)(agent,state);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AIState_ListenerWrapper_obj,stateEnter,(void))

Void AIState_ListenerWrapper_obj::stateExit( ::org::gameplay3d::AIAgent agent,::org::gameplay3d::AIState state){
{
		HX_STACK_FRAME("org.gameplay3d.wrapper.AIState_ListenerWrapper","stateExit",0x9e8e5dc2,"org.gameplay3d.wrapper.AIState_ListenerWrapper.stateExit","org/gameplay3d/wrapper/AIState_ListenerWrapper.hx",33,0xe264c59e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(agent,"agent")
		HX_STACK_ARG(state,"state")
		HX_STACK_LINE(33)
		this->target->__Field(HX_CSTRING("stateExit"),true)(agent,state);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AIState_ListenerWrapper_obj,stateExit,(void))

Void AIState_ListenerWrapper_obj::stateUpdate( ::org::gameplay3d::AIAgent agent,::org::gameplay3d::AIState state,Float elapsedTime){
{
		HX_STACK_FRAME("org.gameplay3d.wrapper.AIState_ListenerWrapper","stateUpdate",0xec57ddad,"org.gameplay3d.wrapper.AIState_ListenerWrapper.stateUpdate","org/gameplay3d/wrapper/AIState_ListenerWrapper.hx",39,0xe264c59e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(agent,"agent")
		HX_STACK_ARG(state,"state")
		HX_STACK_ARG(elapsedTime,"elapsedTime")
		HX_STACK_LINE(39)
		this->target->__Field(HX_CSTRING("stateUpdate"),true)(agent,state,elapsedTime);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(AIState_ListenerWrapper_obj,stateUpdate,(void))

Void AIState_ListenerWrapper_obj::stateEnterWrapper( Dynamic agent,Dynamic state){
{
		HX_STACK_FRAME("org.gameplay3d.wrapper.AIState_ListenerWrapper","stateEnterWrapper",0x9c2f8dbf,"org.gameplay3d.wrapper.AIState_ListenerWrapper.stateEnterWrapper","org/gameplay3d/wrapper/AIState_ListenerWrapper.hx",47,0xe264c59e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(agent,"agent")
		HX_STACK_ARG(state,"state")
		HX_STACK_LINE(48)
		::org::gameplay3d::AIAgent _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(48)
		{
			HX_STACK_LINE(48)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::AIAgent >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(48)
			if (((agent == null()))){
				HX_STACK_LINE(48)
				_g1 = null();
			}
			else{
				HX_STACK_LINE(48)
				if ((::Std_obj::is(agent,hx::ClassOf< ::cpp::vm::WeakRef >()))){
					HX_STACK_LINE(48)
					::cpp::vm::WeakRef ref = agent;		HX_STACK_VAR(ref,"ref");
					HX_STACK_LINE(48)
					::org::gameplay3d::AIAgent result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(48)
					if (((result == null()))){
						HX_STACK_LINE(48)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(48)
						::org::gameplay3d::AIAgent _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(48)
						result = _g;
						HX_STACK_LINE(48)
						ref->set(result);
					}
					HX_STACK_LINE(48)
					_g1 = result;
				}
				else{
					HX_STACK_LINE(48)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = agent;
					HX_STACK_LINE(48)
					_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
				}
			}
		}
		HX_STACK_LINE(48)
		::org::gameplay3d::AIState _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(48)
		{
			HX_STACK_LINE(48)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::AIState >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(48)
			if (((state == null()))){
				HX_STACK_LINE(48)
				_g3 = null();
			}
			else{
				HX_STACK_LINE(48)
				if ((::Std_obj::is(state,hx::ClassOf< ::cpp::vm::WeakRef >()))){
					HX_STACK_LINE(48)
					::cpp::vm::WeakRef ref = state;		HX_STACK_VAR(ref,"ref");
					HX_STACK_LINE(48)
					::org::gameplay3d::AIState result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(48)
					if (((result == null()))){
						HX_STACK_LINE(48)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(48)
						::org::gameplay3d::AIState _g2 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(48)
						result = _g2;
						HX_STACK_LINE(48)
						ref->set(result);
					}
					HX_STACK_LINE(48)
					_g3 = result;
				}
				else{
					HX_STACK_LINE(48)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = state;
					HX_STACK_LINE(48)
					_g3 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
				}
			}
		}
		HX_STACK_LINE(48)
		this->stateEnter(_g1,_g3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AIState_ListenerWrapper_obj,stateEnterWrapper,(void))

Void AIState_ListenerWrapper_obj::stateExitWrapper( Dynamic agent,Dynamic state){
{
		HX_STACK_FRAME("org.gameplay3d.wrapper.AIState_ListenerWrapper","stateExitWrapper",0xf597bbb1,"org.gameplay3d.wrapper.AIState_ListenerWrapper.stateExitWrapper","org/gameplay3d/wrapper/AIState_ListenerWrapper.hx",52,0xe264c59e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(agent,"agent")
		HX_STACK_ARG(state,"state")
		HX_STACK_LINE(53)
		::org::gameplay3d::AIAgent _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(53)
		{
			HX_STACK_LINE(53)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::AIAgent >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(53)
			if (((agent == null()))){
				HX_STACK_LINE(53)
				_g1 = null();
			}
			else{
				HX_STACK_LINE(53)
				if ((::Std_obj::is(agent,hx::ClassOf< ::cpp::vm::WeakRef >()))){
					HX_STACK_LINE(53)
					::cpp::vm::WeakRef ref = agent;		HX_STACK_VAR(ref,"ref");
					HX_STACK_LINE(53)
					::org::gameplay3d::AIAgent result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(53)
					if (((result == null()))){
						HX_STACK_LINE(53)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(53)
						::org::gameplay3d::AIAgent _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(53)
						result = _g;
						HX_STACK_LINE(53)
						ref->set(result);
					}
					HX_STACK_LINE(53)
					_g1 = result;
				}
				else{
					HX_STACK_LINE(53)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = agent;
					HX_STACK_LINE(53)
					_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
				}
			}
		}
		HX_STACK_LINE(53)
		::org::gameplay3d::AIState _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(53)
		{
			HX_STACK_LINE(53)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::AIState >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(53)
			if (((state == null()))){
				HX_STACK_LINE(53)
				_g3 = null();
			}
			else{
				HX_STACK_LINE(53)
				if ((::Std_obj::is(state,hx::ClassOf< ::cpp::vm::WeakRef >()))){
					HX_STACK_LINE(53)
					::cpp::vm::WeakRef ref = state;		HX_STACK_VAR(ref,"ref");
					HX_STACK_LINE(53)
					::org::gameplay3d::AIState result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(53)
					if (((result == null()))){
						HX_STACK_LINE(53)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(53)
						::org::gameplay3d::AIState _g2 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(53)
						result = _g2;
						HX_STACK_LINE(53)
						ref->set(result);
					}
					HX_STACK_LINE(53)
					_g3 = result;
				}
				else{
					HX_STACK_LINE(53)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = state;
					HX_STACK_LINE(53)
					_g3 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
				}
			}
		}
		HX_STACK_LINE(53)
		this->stateExit(_g1,_g3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AIState_ListenerWrapper_obj,stateExitWrapper,(void))

Void AIState_ListenerWrapper_obj::stateUpdateWrapper( Dynamic agent,Dynamic state,Float elapsedTime){
{
		HX_STACK_FRAME("org.gameplay3d.wrapper.AIState_ListenerWrapper","stateUpdateWrapper",0x6adadf26,"org.gameplay3d.wrapper.AIState_ListenerWrapper.stateUpdateWrapper","org/gameplay3d/wrapper/AIState_ListenerWrapper.hx",57,0xe264c59e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(agent,"agent")
		HX_STACK_ARG(state,"state")
		HX_STACK_ARG(elapsedTime,"elapsedTime")
		HX_STACK_LINE(58)
		::org::gameplay3d::AIAgent _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(58)
		{
			HX_STACK_LINE(58)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::AIAgent >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(58)
			if (((agent == null()))){
				HX_STACK_LINE(58)
				_g1 = null();
			}
			else{
				HX_STACK_LINE(58)
				if ((::Std_obj::is(agent,hx::ClassOf< ::cpp::vm::WeakRef >()))){
					HX_STACK_LINE(58)
					::cpp::vm::WeakRef ref = agent;		HX_STACK_VAR(ref,"ref");
					HX_STACK_LINE(58)
					::org::gameplay3d::AIAgent result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(58)
					if (((result == null()))){
						HX_STACK_LINE(58)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(58)
						::org::gameplay3d::AIAgent _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(58)
						result = _g;
						HX_STACK_LINE(58)
						ref->set(result);
					}
					HX_STACK_LINE(58)
					_g1 = result;
				}
				else{
					HX_STACK_LINE(58)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = agent;
					HX_STACK_LINE(58)
					_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
				}
			}
		}
		HX_STACK_LINE(58)
		::org::gameplay3d::AIState _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(58)
		{
			HX_STACK_LINE(58)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::AIState >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(58)
			if (((state == null()))){
				HX_STACK_LINE(58)
				_g3 = null();
			}
			else{
				HX_STACK_LINE(58)
				if ((::Std_obj::is(state,hx::ClassOf< ::cpp::vm::WeakRef >()))){
					HX_STACK_LINE(58)
					::cpp::vm::WeakRef ref = state;		HX_STACK_VAR(ref,"ref");
					HX_STACK_LINE(58)
					::org::gameplay3d::AIState result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(58)
					if (((result == null()))){
						HX_STACK_LINE(58)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(58)
						::org::gameplay3d::AIState _g2 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(58)
						result = _g2;
						HX_STACK_LINE(58)
						ref->set(result);
					}
					HX_STACK_LINE(58)
					_g3 = result;
				}
				else{
					HX_STACK_LINE(58)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = state;
					HX_STACK_LINE(58)
					_g3 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
				}
			}
		}
		HX_STACK_LINE(58)
		this->stateUpdate(_g1,_g3,elapsedTime);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(AIState_ListenerWrapper_obj,stateUpdateWrapper,(void))

::org::gameplay3d::wrapper::AIState_ListenerWrapper AIState_ListenerWrapper_obj::make( ::org::gameplay3d::AIState_Listener target){
	HX_STACK_FRAME("org.gameplay3d.wrapper.AIState_ListenerWrapper","make",0x867c56db,"org.gameplay3d.wrapper.AIState_ListenerWrapper.make","org/gameplay3d/wrapper/AIState_ListenerWrapper.hx",21,0xe264c59e)
	HX_STACK_ARG(target,"target")
	HX_STACK_LINE(21)
	return ::org::gameplay3d::wrapper::AIState_ListenerWrapper_obj::__new(target,::org::gameplay3d::wrapper::AIState_ListenerWrapper_obj::constructNativeObject_dyn(),Dynamic( Array_obj<Dynamic>::__new().Add(null())));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AIState_ListenerWrapper_obj,make,return )

Dynamic AIState_ListenerWrapper_obj::constructNativeObject( ::org::gameplay3d::wrapper::AIState_ListenerWrapper thisObj){
	HX_STACK_FRAME("org.gameplay3d.wrapper.AIState_ListenerWrapper","constructNativeObject",0x0cc3fae0,"org.gameplay3d.wrapper.AIState_ListenerWrapper.constructNativeObject","org/gameplay3d/wrapper/AIState_ListenerWrapper.hx",64,0xe264c59e)
	HX_STACK_ARG(thisObj,"thisObj")
	HX_STACK_LINE(64)
	return ::org::gameplay3d::wrapper::AIState_ListenerWrapper_obj::hx_AIState_Listener_Construct(thisObj->stateEnterWrapper_dyn(),thisObj->stateExitWrapper_dyn(),thisObj->stateUpdateWrapper_dyn());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AIState_ListenerWrapper_obj,constructNativeObject,return )

Dynamic AIState_ListenerWrapper_obj::hx_AIState_Listener_Construct;


AIState_ListenerWrapper_obj::AIState_ListenerWrapper_obj()
{
}

Dynamic AIState_ListenerWrapper_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { return make_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"stateExit") ) { return stateExit_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"stateEnter") ) { return stateEnter_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stateUpdate") ) { return stateUpdate_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"stateExitWrapper") ) { return stateExitWrapper_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"stateEnterWrapper") ) { return stateEnterWrapper_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"stateUpdateWrapper") ) { return stateUpdateWrapper_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"constructNativeObject") ) { return constructNativeObject_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_AIState_Listener_Construct") ) { return hx_AIState_Listener_Construct; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AIState_ListenerWrapper_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 29:
		if (HX_FIELD_EQ(inName,"hx_AIState_Listener_Construct") ) { hx_AIState_Listener_Construct=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AIState_ListenerWrapper_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("make"),
	HX_CSTRING("constructNativeObject"),
	HX_CSTRING("hx_AIState_Listener_Construct"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("stateEnter"),
	HX_CSTRING("stateExit"),
	HX_CSTRING("stateUpdate"),
	HX_CSTRING("stateEnterWrapper"),
	HX_CSTRING("stateExitWrapper"),
	HX_CSTRING("stateUpdateWrapper"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AIState_ListenerWrapper_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AIState_ListenerWrapper_obj::hx_AIState_Listener_Construct,"hx_AIState_Listener_Construct");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AIState_ListenerWrapper_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AIState_ListenerWrapper_obj::hx_AIState_Listener_Construct,"hx_AIState_Listener_Construct");
};

#endif

Class AIState_ListenerWrapper_obj::__mClass;

void AIState_ListenerWrapper_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.wrapper.AIState_ListenerWrapper"), hx::TCanCast< AIState_ListenerWrapper_obj> ,sStaticFields,sMemberFields,
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

void AIState_ListenerWrapper_obj::__boot()
{
	hx_AIState_Listener_Construct= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AIState_Listener >(),HX_CSTRING("Construct"),(int)3);
}

} // end namespace org
} // end namespace gameplay3d
} // end namespace wrapper
