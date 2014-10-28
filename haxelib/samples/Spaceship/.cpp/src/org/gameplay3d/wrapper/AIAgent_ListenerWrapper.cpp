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
#ifndef INCLUDED_org_gameplay3d_AIAgent_Listener
#include <org/gameplay3d/AIAgent_Listener.h>
#endif
#ifndef INCLUDED_org_gameplay3d_AIMessage
#include <org/gameplay3d/AIMessage.h>
#endif
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
#ifndef INCLUDED_org_gameplay3d_util_NativeInterface
#include <org/gameplay3d/util/NativeInterface.h>
#endif
#ifndef INCLUDED_org_gameplay3d_wrapper_AIAgent_ListenerWrapper
#include <org/gameplay3d/wrapper/AIAgent_ListenerWrapper.h>
#endif
namespace org{
namespace gameplay3d{
namespace wrapper{

Void AIAgent_ListenerWrapper_obj::__construct(::org::gameplay3d::AIAgent_Listener target,Dynamic nativeObject,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.wrapper.AIAgent_ListenerWrapper","new",0x9d804ec7,"org.gameplay3d.wrapper.AIAgent_ListenerWrapper.new","org/gameplay3d/wrapper/AIAgent_ListenerWrapper.hx",11,0x2aa3396a)
HX_STACK_THIS(this)
HX_STACK_ARG(target,"target")
HX_STACK_ARG(nativeObject,"nativeObject")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(11)
	super::__construct(target,nativeObject,nativeObjectInitializerParams);
}
;
	return null();
}

//AIAgent_ListenerWrapper_obj::~AIAgent_ListenerWrapper_obj() { }

Dynamic AIAgent_ListenerWrapper_obj::__CreateEmpty() { return  new AIAgent_ListenerWrapper_obj; }
hx::ObjectPtr< AIAgent_ListenerWrapper_obj > AIAgent_ListenerWrapper_obj::__new(::org::gameplay3d::AIAgent_Listener target,Dynamic nativeObject,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< AIAgent_ListenerWrapper_obj > result = new AIAgent_ListenerWrapper_obj();
	result->__construct(target,nativeObject,nativeObjectInitializerParams);
	return result;}

Dynamic AIAgent_ListenerWrapper_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AIAgent_ListenerWrapper_obj > result = new AIAgent_ListenerWrapper_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

hx::Object *AIAgent_ListenerWrapper_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::AIAgent_Listener_obj)) return operator ::org::gameplay3d::AIAgent_Listener_obj *();
	return super::__ToInterface(inType);
}

bool AIAgent_ListenerWrapper_obj::messageReceived( ::org::gameplay3d::AIMessage message){
	HX_STACK_FRAME("org.gameplay3d.wrapper.AIAgent_ListenerWrapper","messageReceived",0xc189d2ef,"org.gameplay3d.wrapper.AIAgent_ListenerWrapper.messageReceived","org/gameplay3d/wrapper/AIAgent_ListenerWrapper.hx",26,0x2aa3396a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(message,"message")
	HX_STACK_LINE(26)
	return this->target->__Field(HX_CSTRING("messageReceived"),true)(message);
}


HX_DEFINE_DYNAMIC_FUNC1(AIAgent_ListenerWrapper_obj,messageReceived,return )

Void AIAgent_ListenerWrapper_obj::messageReceivedWrapper( Dynamic message){
{
		HX_STACK_FRAME("org.gameplay3d.wrapper.AIAgent_ListenerWrapper","messageReceivedWrapper",0x1402f624,"org.gameplay3d.wrapper.AIAgent_ListenerWrapper.messageReceivedWrapper","org/gameplay3d/wrapper/AIAgent_ListenerWrapper.hx",34,0x2aa3396a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(message,"message")
		HX_STACK_LINE(35)
		::org::gameplay3d::AIMessage _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(35)
		{
			HX_STACK_LINE(35)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::AIMessage >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(35)
			if (((message == null()))){
				HX_STACK_LINE(35)
				_g1 = null();
			}
			else{
				HX_STACK_LINE(35)
				if ((::Std_obj::is(message,hx::ClassOf< ::cpp::vm::WeakRef >()))){
					HX_STACK_LINE(35)
					::cpp::vm::WeakRef ref = message;		HX_STACK_VAR(ref,"ref");
					HX_STACK_LINE(35)
					::org::gameplay3d::AIMessage result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(35)
					if (((result == null()))){
						HX_STACK_LINE(35)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(35)
						::org::gameplay3d::AIMessage _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(35)
						result = _g;
						HX_STACK_LINE(35)
						ref->set(result);
					}
					HX_STACK_LINE(35)
					_g1 = result;
				}
				else{
					HX_STACK_LINE(35)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = message;
					HX_STACK_LINE(35)
					_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
				}
			}
		}
		HX_STACK_LINE(35)
		this->messageReceived(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AIAgent_ListenerWrapper_obj,messageReceivedWrapper,(void))

::org::gameplay3d::wrapper::AIAgent_ListenerWrapper AIAgent_ListenerWrapper_obj::make( ::org::gameplay3d::AIAgent_Listener target){
	HX_STACK_FRAME("org.gameplay3d.wrapper.AIAgent_ListenerWrapper","make",0x321855a7,"org.gameplay3d.wrapper.AIAgent_ListenerWrapper.make","org/gameplay3d/wrapper/AIAgent_ListenerWrapper.hx",20,0x2aa3396a)
	HX_STACK_ARG(target,"target")
	HX_STACK_LINE(20)
	return ::org::gameplay3d::wrapper::AIAgent_ListenerWrapper_obj::__new(target,::org::gameplay3d::wrapper::AIAgent_ListenerWrapper_obj::constructNativeObject_dyn(),Dynamic( Array_obj<Dynamic>::__new().Add(null())));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AIAgent_ListenerWrapper_obj,make,return )

Dynamic AIAgent_ListenerWrapper_obj::constructNativeObject( ::org::gameplay3d::wrapper::AIAgent_ListenerWrapper thisObj){
	HX_STACK_FRAME("org.gameplay3d.wrapper.AIAgent_ListenerWrapper","constructNativeObject",0x716c9694,"org.gameplay3d.wrapper.AIAgent_ListenerWrapper.constructNativeObject","org/gameplay3d/wrapper/AIAgent_ListenerWrapper.hx",41,0x2aa3396a)
	HX_STACK_ARG(thisObj,"thisObj")
	HX_STACK_LINE(41)
	return ::org::gameplay3d::wrapper::AIAgent_ListenerWrapper_obj::hx_AIAgent_Listener_Construct(thisObj->messageReceivedWrapper_dyn());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AIAgent_ListenerWrapper_obj,constructNativeObject,return )

Dynamic AIAgent_ListenerWrapper_obj::hx_AIAgent_Listener_Construct;


AIAgent_ListenerWrapper_obj::AIAgent_ListenerWrapper_obj()
{
}

Dynamic AIAgent_ListenerWrapper_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { return make_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"messageReceived") ) { return messageReceived_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"constructNativeObject") ) { return constructNativeObject_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"messageReceivedWrapper") ) { return messageReceivedWrapper_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_AIAgent_Listener_Construct") ) { return hx_AIAgent_Listener_Construct; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AIAgent_ListenerWrapper_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 29:
		if (HX_FIELD_EQ(inName,"hx_AIAgent_Listener_Construct") ) { hx_AIAgent_Listener_Construct=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AIAgent_ListenerWrapper_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("make"),
	HX_CSTRING("constructNativeObject"),
	HX_CSTRING("hx_AIAgent_Listener_Construct"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("messageReceived"),
	HX_CSTRING("messageReceivedWrapper"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AIAgent_ListenerWrapper_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AIAgent_ListenerWrapper_obj::hx_AIAgent_Listener_Construct,"hx_AIAgent_Listener_Construct");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AIAgent_ListenerWrapper_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AIAgent_ListenerWrapper_obj::hx_AIAgent_Listener_Construct,"hx_AIAgent_Listener_Construct");
};

#endif

Class AIAgent_ListenerWrapper_obj::__mClass;

void AIAgent_ListenerWrapper_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.wrapper.AIAgent_ListenerWrapper"), hx::TCanCast< AIAgent_ListenerWrapper_obj> ,sStaticFields,sMemberFields,
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

void AIAgent_ListenerWrapper_obj::__boot()
{
	hx_AIAgent_Listener_Construct= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AIAgent_Listener >(),HX_CSTRING("Construct"),(int)1);
}

} // end namespace org
} // end namespace gameplay3d
} // end namespace wrapper
