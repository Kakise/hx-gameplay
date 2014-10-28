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

Void AIState_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.AIState","new",0x805f4d0e,"org.gameplay3d.AIState.new","org/gameplay3d/AIState.hx",11,0x262e43c2)
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

//AIState_obj::~AIState_obj() { }

Dynamic AIState_obj::__CreateEmpty() { return  new AIState_obj; }
hx::ObjectPtr< AIState_obj > AIState_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< AIState_obj > result = new AIState_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic AIState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AIState_obj > result = new AIState_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *AIState_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::intern::INativeBinding_obj)) return operator ::org::gameplay3d::intern::INativeBinding_obj *();
	if (inType==typeid( ::org::gameplay3d::Ref_obj)) return operator ::org::gameplay3d::Ref_obj *();
	return super::__ToInterface(inType);
}

::String AIState_obj::getId( ){
	HX_STACK_FRAME("org.gameplay3d.AIState","getId",0xc8c7163f,"org.gameplay3d.AIState.getId","org/gameplay3d/AIState.hx",26,0x262e43c2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(26)
	return ::org::gameplay3d::AIState_obj::hx_AIState_getId(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(AIState_obj,getId,return )

Void AIState_obj::setListener( ::org::gameplay3d::wrapper::AIState_ListenerWrapper listener){
{
		HX_STACK_FRAME("org.gameplay3d.AIState","setListener",0xba8fa4e4,"org.gameplay3d.AIState.setListener","org/gameplay3d/AIState.hx",32,0x262e43c2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(listener,"listener")
		HX_STACK_LINE(32)
		::org::gameplay3d::AIState_obj::hx_AIState_setListener(this->nativeObject,(  (((listener == null()))) ? Dynamic(null()) : Dynamic(listener->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AIState_obj,setListener,(void))

::org::gameplay3d::AIState AIState_obj::create( ::String id){
	HX_STACK_FRAME("org.gameplay3d.AIState","create",0xbe5c8b0e,"org.gameplay3d.AIState.create","org/gameplay3d/AIState.hx",20,0x262e43c2)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(20)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::AIState >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(20)
	Dynamic nativeObject = ::org::gameplay3d::AIState_obj::hx_AIState_static_create(id);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(20)
	if (((nativeObject == null()))){
		HX_STACK_LINE(20)
		return null();
	}
	else{
		HX_STACK_LINE(20)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(20)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(20)
			::org::gameplay3d::AIState result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(20)
			if (((result == null()))){
				HX_STACK_LINE(20)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(20)
				::org::gameplay3d::AIState _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(20)
				result = _g;
				HX_STACK_LINE(20)
				ref->set(result);
			}
			HX_STACK_LINE(20)
			return result;
		}
		else{
			HX_STACK_LINE(20)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(20)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(20)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AIState_obj,create,return )

Dynamic AIState_obj::hx_AIState_static_create;

Dynamic AIState_obj::hx_AIState_getId;

Dynamic AIState_obj::hx_AIState_setListener;

Dynamic AIState_obj::hx_AIState_Listener_Construct;


AIState_obj::AIState_obj()
{
}

Dynamic AIState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"getId") ) { return getId_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setListener") ) { return setListener_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hx_AIState_getId") ) { return hx_AIState_getId; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_AIState_setListener") ) { return hx_AIState_setListener; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_AIState_static_create") ) { return hx_AIState_static_create; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_AIState_Listener_Construct") ) { return hx_AIState_Listener_Construct; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AIState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"hx_AIState_getId") ) { hx_AIState_getId=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_AIState_setListener") ) { hx_AIState_setListener=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_AIState_static_create") ) { hx_AIState_static_create=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_AIState_Listener_Construct") ) { hx_AIState_Listener_Construct=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AIState_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create"),
	HX_CSTRING("hx_AIState_static_create"),
	HX_CSTRING("hx_AIState_getId"),
	HX_CSTRING("hx_AIState_setListener"),
	HX_CSTRING("hx_AIState_Listener_Construct"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("getId"),
	HX_CSTRING("setListener"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AIState_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AIState_obj::hx_AIState_static_create,"hx_AIState_static_create");
	HX_MARK_MEMBER_NAME(AIState_obj::hx_AIState_getId,"hx_AIState_getId");
	HX_MARK_MEMBER_NAME(AIState_obj::hx_AIState_setListener,"hx_AIState_setListener");
	HX_MARK_MEMBER_NAME(AIState_obj::hx_AIState_Listener_Construct,"hx_AIState_Listener_Construct");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AIState_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AIState_obj::hx_AIState_static_create,"hx_AIState_static_create");
	HX_VISIT_MEMBER_NAME(AIState_obj::hx_AIState_getId,"hx_AIState_getId");
	HX_VISIT_MEMBER_NAME(AIState_obj::hx_AIState_setListener,"hx_AIState_setListener");
	HX_VISIT_MEMBER_NAME(AIState_obj::hx_AIState_Listener_Construct,"hx_AIState_Listener_Construct");
};

#endif

Class AIState_obj::__mClass;

void AIState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.AIState"), hx::TCanCast< AIState_obj> ,sStaticFields,sMemberFields,
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

void AIState_obj::__boot()
{
	hx_AIState_static_create= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AIState >(),HX_CSTRING("static_create"),(int)1);
	hx_AIState_getId= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AIState >(),HX_CSTRING("getId"),(int)1);
	hx_AIState_setListener= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AIState >(),HX_CSTRING("setListener"),(int)2);
	hx_AIState_Listener_Construct= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AIState_Listener >(),HX_CSTRING("Construct"),(int)3);
}

} // end namespace org
} // end namespace gameplay3d
