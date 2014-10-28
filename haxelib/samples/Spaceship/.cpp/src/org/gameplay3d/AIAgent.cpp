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
#ifndef INCLUDED_org_gameplay3d_AIAgent_Listener
#include <org/gameplay3d/AIAgent_Listener.h>
#endif
#ifndef INCLUDED_org_gameplay3d_AIStateMachine
#include <org/gameplay3d/AIStateMachine.h>
#endif
#ifndef INCLUDED_org_gameplay3d_AnimationTarget
#include <org/gameplay3d/AnimationTarget.h>
#endif
#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Node
#include <org/gameplay3d/Node.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Ref
#include <org/gameplay3d/Ref.h>
#endif
#ifndef INCLUDED_org_gameplay3d_ScriptTarget
#include <org/gameplay3d/ScriptTarget.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Transform
#include <org/gameplay3d/Transform.h>
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
#ifndef INCLUDED_org_gameplay3d_intern_impl_AnimationTarget_ScriptTarget
#include <org/gameplay3d/intern/impl/AnimationTarget_ScriptTarget.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_impl_ScriptTargetImpl
#include <org/gameplay3d/intern/impl/ScriptTargetImpl.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_NativeInterface
#include <org/gameplay3d/util/NativeInterface.h>
#endif
#ifndef INCLUDED_org_gameplay3d_wrapper_AIAgent_ListenerWrapper
#include <org/gameplay3d/wrapper/AIAgent_ListenerWrapper.h>
#endif
namespace org{
namespace gameplay3d{

Void AIAgent_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.AIAgent","new",0xa70a83c2,"org.gameplay3d.AIAgent.new","org/gameplay3d/AIAgent.hx",11,0x32fb5f8e)
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

//AIAgent_obj::~AIAgent_obj() { }

Dynamic AIAgent_obj::__CreateEmpty() { return  new AIAgent_obj; }
hx::ObjectPtr< AIAgent_obj > AIAgent_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< AIAgent_obj > result = new AIAgent_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic AIAgent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AIAgent_obj > result = new AIAgent_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *AIAgent_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::intern::INativeBinding_obj)) return operator ::org::gameplay3d::intern::INativeBinding_obj *();
	if (inType==typeid( ::org::gameplay3d::Ref_obj)) return operator ::org::gameplay3d::Ref_obj *();
	return super::__ToInterface(inType);
}

::String AIAgent_obj::getId( ){
	HX_STACK_FRAME("org.gameplay3d.AIAgent","getId",0x59b461f3,"org.gameplay3d.AIAgent.getId","org/gameplay3d/AIAgent.hx",27,0x32fb5f8e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(27)
	return ::org::gameplay3d::AIAgent_obj::hx_AIAgent_getId(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(AIAgent_obj,getId,return )

::org::gameplay3d::Node AIAgent_obj::getNode( ){
	HX_STACK_FRAME("org.gameplay3d.AIAgent","getNode",0x7c5dc61a,"org.gameplay3d.AIAgent.getNode","org/gameplay3d/AIAgent.hx",33,0x32fb5f8e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(33)
	return ::org::gameplay3d::AIAgent_obj::hx_AIAgent_getNode(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(AIAgent_obj,getNode,return )

::org::gameplay3d::AIStateMachine AIAgent_obj::getStateMachine( ){
	HX_STACK_FRAME("org.gameplay3d.AIAgent","getStateMachine",0xcea6d58e,"org.gameplay3d.AIAgent.getStateMachine","org/gameplay3d/AIAgent.hx",39,0x32fb5f8e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(39)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::AIStateMachine >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(39)
	Dynamic nativeObject = ::org::gameplay3d::AIAgent_obj::hx_AIAgent_getStateMachine(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(39)
	if (((nativeObject == null()))){
		HX_STACK_LINE(39)
		return null();
	}
	else{
		HX_STACK_LINE(39)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(39)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(39)
			::org::gameplay3d::AIStateMachine result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(39)
			if (((result == null()))){
				HX_STACK_LINE(39)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(39)
				::org::gameplay3d::AIStateMachine _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(39)
				result = _g;
				HX_STACK_LINE(39)
				ref->set(result);
			}
			HX_STACK_LINE(39)
			return result;
		}
		else{
			HX_STACK_LINE(39)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(39)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(39)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AIAgent_obj,getStateMachine,return )

bool AIAgent_obj::isEnabled( ){
	HX_STACK_FRAME("org.gameplay3d.AIAgent","isEnabled",0x82a5ea99,"org.gameplay3d.AIAgent.isEnabled","org/gameplay3d/AIAgent.hx",45,0x32fb5f8e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(45)
	return ::org::gameplay3d::AIAgent_obj::hx_AIAgent_isEnabled(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(AIAgent_obj,isEnabled,return )

Void AIAgent_obj::setEnabled( bool enabled){
{
		HX_STACK_FRAME("org.gameplay3d.AIAgent","setEnabled",0x383585dd,"org.gameplay3d.AIAgent.setEnabled","org/gameplay3d/AIAgent.hx",51,0x32fb5f8e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(enabled,"enabled")
		HX_STACK_LINE(51)
		::org::gameplay3d::AIAgent_obj::hx_AIAgent_setEnabled(this->nativeObject,enabled);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AIAgent_obj,setEnabled,(void))

Void AIAgent_obj::setListener( ::org::gameplay3d::wrapper::AIAgent_ListenerWrapper listener){
{
		HX_STACK_FRAME("org.gameplay3d.AIAgent","setListener",0x421eaf98,"org.gameplay3d.AIAgent.setListener","org/gameplay3d/AIAgent.hx",57,0x32fb5f8e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(listener,"listener")
		HX_STACK_LINE(57)
		::org::gameplay3d::AIAgent_obj::hx_AIAgent_setListener(this->nativeObject,(  (((listener == null()))) ? Dynamic(null()) : Dynamic(listener->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AIAgent_obj,setListener,(void))

::org::gameplay3d::AIAgent AIAgent_obj::create( ){
	HX_STACK_FRAME("org.gameplay3d.AIAgent","create",0xfd117cda,"org.gameplay3d.AIAgent.create","org/gameplay3d/AIAgent.hx",21,0x32fb5f8e)
	HX_STACK_LINE(21)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::AIAgent >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(21)
	Dynamic nativeObject = ::org::gameplay3d::AIAgent_obj::hx_AIAgent_static_create();		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(21)
	if (((nativeObject == null()))){
		HX_STACK_LINE(21)
		return null();
	}
	else{
		HX_STACK_LINE(21)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(21)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(21)
			::org::gameplay3d::AIAgent result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(21)
			if (((result == null()))){
				HX_STACK_LINE(21)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(21)
				::org::gameplay3d::AIAgent _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(21)
				result = _g;
				HX_STACK_LINE(21)
				ref->set(result);
			}
			HX_STACK_LINE(21)
			return result;
		}
		else{
			HX_STACK_LINE(21)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(21)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(21)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AIAgent_obj,create,return )

Dynamic AIAgent_obj::hx_AIAgent_static_create;

Dynamic AIAgent_obj::hx_AIAgent_getId;

Dynamic AIAgent_obj::hx_AIAgent_getNode;

Dynamic AIAgent_obj::hx_AIAgent_getStateMachine;

Dynamic AIAgent_obj::hx_AIAgent_isEnabled;

Dynamic AIAgent_obj::hx_AIAgent_setEnabled;

Dynamic AIAgent_obj::hx_AIAgent_setListener;


AIAgent_obj::AIAgent_obj()
{
}

Dynamic AIAgent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"getId") ) { return getId_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getNode") ) { return getNode_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isEnabled") ) { return isEnabled_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setEnabled") ) { return setEnabled_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setListener") ) { return setListener_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getStateMachine") ) { return getStateMachine_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hx_AIAgent_getId") ) { return hx_AIAgent_getId; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hx_AIAgent_getNode") ) { return hx_AIAgent_getNode; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_AIAgent_isEnabled") ) { return hx_AIAgent_isEnabled; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hx_AIAgent_setEnabled") ) { return hx_AIAgent_setEnabled; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_AIAgent_setListener") ) { return hx_AIAgent_setListener; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_AIAgent_static_create") ) { return hx_AIAgent_static_create; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_AIAgent_getStateMachine") ) { return hx_AIAgent_getStateMachine; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AIAgent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"hx_AIAgent_getId") ) { hx_AIAgent_getId=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hx_AIAgent_getNode") ) { hx_AIAgent_getNode=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_AIAgent_isEnabled") ) { hx_AIAgent_isEnabled=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hx_AIAgent_setEnabled") ) { hx_AIAgent_setEnabled=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_AIAgent_setListener") ) { hx_AIAgent_setListener=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_AIAgent_static_create") ) { hx_AIAgent_static_create=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_AIAgent_getStateMachine") ) { hx_AIAgent_getStateMachine=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AIAgent_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create"),
	HX_CSTRING("hx_AIAgent_static_create"),
	HX_CSTRING("hx_AIAgent_getId"),
	HX_CSTRING("hx_AIAgent_getNode"),
	HX_CSTRING("hx_AIAgent_getStateMachine"),
	HX_CSTRING("hx_AIAgent_isEnabled"),
	HX_CSTRING("hx_AIAgent_setEnabled"),
	HX_CSTRING("hx_AIAgent_setListener"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("getId"),
	HX_CSTRING("getNode"),
	HX_CSTRING("getStateMachine"),
	HX_CSTRING("isEnabled"),
	HX_CSTRING("setEnabled"),
	HX_CSTRING("setListener"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AIAgent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AIAgent_obj::hx_AIAgent_static_create,"hx_AIAgent_static_create");
	HX_MARK_MEMBER_NAME(AIAgent_obj::hx_AIAgent_getId,"hx_AIAgent_getId");
	HX_MARK_MEMBER_NAME(AIAgent_obj::hx_AIAgent_getNode,"hx_AIAgent_getNode");
	HX_MARK_MEMBER_NAME(AIAgent_obj::hx_AIAgent_getStateMachine,"hx_AIAgent_getStateMachine");
	HX_MARK_MEMBER_NAME(AIAgent_obj::hx_AIAgent_isEnabled,"hx_AIAgent_isEnabled");
	HX_MARK_MEMBER_NAME(AIAgent_obj::hx_AIAgent_setEnabled,"hx_AIAgent_setEnabled");
	HX_MARK_MEMBER_NAME(AIAgent_obj::hx_AIAgent_setListener,"hx_AIAgent_setListener");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AIAgent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AIAgent_obj::hx_AIAgent_static_create,"hx_AIAgent_static_create");
	HX_VISIT_MEMBER_NAME(AIAgent_obj::hx_AIAgent_getId,"hx_AIAgent_getId");
	HX_VISIT_MEMBER_NAME(AIAgent_obj::hx_AIAgent_getNode,"hx_AIAgent_getNode");
	HX_VISIT_MEMBER_NAME(AIAgent_obj::hx_AIAgent_getStateMachine,"hx_AIAgent_getStateMachine");
	HX_VISIT_MEMBER_NAME(AIAgent_obj::hx_AIAgent_isEnabled,"hx_AIAgent_isEnabled");
	HX_VISIT_MEMBER_NAME(AIAgent_obj::hx_AIAgent_setEnabled,"hx_AIAgent_setEnabled");
	HX_VISIT_MEMBER_NAME(AIAgent_obj::hx_AIAgent_setListener,"hx_AIAgent_setListener");
};

#endif

Class AIAgent_obj::__mClass;

void AIAgent_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.AIAgent"), hx::TCanCast< AIAgent_obj> ,sStaticFields,sMemberFields,
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

void AIAgent_obj::__boot()
{
	hx_AIAgent_static_create= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AIAgent >(),HX_CSTRING("static_create"),(int)0);
	hx_AIAgent_getId= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AIAgent >(),HX_CSTRING("getId"),(int)1);
	hx_AIAgent_getNode= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AIAgent >(),HX_CSTRING("getNode"),(int)1);
	hx_AIAgent_getStateMachine= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AIAgent >(),HX_CSTRING("getStateMachine"),(int)1);
	hx_AIAgent_isEnabled= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AIAgent >(),HX_CSTRING("isEnabled"),(int)1);
	hx_AIAgent_setEnabled= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AIAgent >(),HX_CSTRING("setEnabled"),(int)2);
	hx_AIAgent_setListener= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AIAgent >(),HX_CSTRING("setListener"),(int)2);
}

} // end namespace org
} // end namespace gameplay3d
