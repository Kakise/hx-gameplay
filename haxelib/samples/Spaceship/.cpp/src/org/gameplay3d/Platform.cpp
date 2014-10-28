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
#ifndef INCLUDED_org_gameplay3d_Game
#include <org/gameplay3d/Game.h>
#endif
#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Platform
#include <org/gameplay3d/Platform.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_INativeBinding
#include <org/gameplay3d/intern/INativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_NativeBinding
#include <org/gameplay3d/intern/NativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_Handle
#include <org/gameplay3d/util/Handle.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_NativeInterface
#include <org/gameplay3d/util/NativeInterface.h>
#endif
namespace org{
namespace gameplay3d{

Void Platform_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.Platform","new",0x6c630652,"org.gameplay3d.Platform.new","org/gameplay3d/Platform.hx",11,0x1887dfbe)
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

//Platform_obj::~Platform_obj() { }

Dynamic Platform_obj::__CreateEmpty() { return  new Platform_obj; }
hx::ObjectPtr< Platform_obj > Platform_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< Platform_obj > result = new Platform_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic Platform_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Platform_obj > result = new Platform_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

int Platform_obj::enterMessagePump( ){
	HX_STACK_FRAME("org.gameplay3d.Platform","enterMessagePump",0xdeff6aa5,"org.gameplay3d.Platform.enterMessagePump","org/gameplay3d/Platform.hx",26,0x1887dfbe)
	HX_STACK_THIS(this)
	HX_STACK_LINE(26)
	return ::org::gameplay3d::Platform_obj::hx_Platform_enterMessagePump(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Platform_obj,enterMessagePump,return )

::org::gameplay3d::Platform Platform_obj::create( ::org::gameplay3d::Game game,::org::gameplay3d::util::Handle attachToWindow){
	HX_STACK_FRAME("org.gameplay3d.Platform","create",0x6ba4f44a,"org.gameplay3d.Platform.create","org/gameplay3d/Platform.hx",20,0x1887dfbe)
	HX_STACK_ARG(game,"game")
	HX_STACK_ARG(attachToWindow,"attachToWindow")
	HX_STACK_LINE(20)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Platform >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(20)
	Dynamic nativeObject = ::org::gameplay3d::Platform_obj::hx_Platform_static_create((  (((game == null()))) ? Dynamic(null()) : Dynamic(game->nativeObject) ),(  (((attachToWindow == null()))) ? Dynamic(null()) : Dynamic(attachToWindow->nativeObject) ));		HX_STACK_VAR(nativeObject,"nativeObject");
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
			::org::gameplay3d::Platform result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(20)
			if (((result == null()))){
				HX_STACK_LINE(20)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(20)
				::org::gameplay3d::Platform _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Platform_obj,create,return )

Void Platform_obj::gamepadEventConnectedInternal( ::org::gameplay3d::util::Handle handle,int buttonCount,int joystickCount,int triggerCount,int vendorId,int productId,::String vendorString,::String productString){
{
		HX_STACK_FRAME("org.gameplay3d.Platform","gamepadEventConnectedInternal",0x297fe39f,"org.gameplay3d.Platform.gamepadEventConnectedInternal","org/gameplay3d/Platform.hx",32,0x1887dfbe)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(buttonCount,"buttonCount")
		HX_STACK_ARG(joystickCount,"joystickCount")
		HX_STACK_ARG(triggerCount,"triggerCount")
		HX_STACK_ARG(vendorId,"vendorId")
		HX_STACK_ARG(productId,"productId")
		HX_STACK_ARG(vendorString,"vendorString")
		HX_STACK_ARG(productString,"productString")
		HX_STACK_LINE(32)
		::org::gameplay3d::Platform_obj::hx_Platform_static_gamepadEventConnectedInternal((  (((handle == null()))) ? Dynamic(null()) : Dynamic(handle->nativeObject) ),buttonCount,joystickCount,triggerCount,vendorId,productId,vendorString,productString);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(Platform_obj,gamepadEventConnectedInternal,(void))

Void Platform_obj::gamepadEventDisconnectedInternal( ::org::gameplay3d::util::Handle handle){
{
		HX_STACK_FRAME("org.gameplay3d.Platform","gamepadEventDisconnectedInternal",0xe8b1473f,"org.gameplay3d.Platform.gamepadEventDisconnectedInternal","org/gameplay3d/Platform.hx",38,0x1887dfbe)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_LINE(38)
		::org::gameplay3d::Platform_obj::hx_Platform_static_gamepadEventDisconnectedInternal((  (((handle == null()))) ? Dynamic(null()) : Dynamic(handle->nativeObject) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Platform_obj,gamepadEventDisconnectedInternal,(void))

Void Platform_obj::keyEventInternal( int evt,int key){
{
		HX_STACK_FRAME("org.gameplay3d.Platform","keyEventInternal",0x1769ff26,"org.gameplay3d.Platform.keyEventInternal","org/gameplay3d/Platform.hx",44,0x1887dfbe)
		HX_STACK_ARG(evt,"evt")
		HX_STACK_ARG(key,"key")
		HX_STACK_LINE(44)
		::org::gameplay3d::Platform_obj::hx_Platform_static_keyEventInternal(evt,key);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Platform_obj,keyEventInternal,(void))

bool Platform_obj::mouseEventInternal( int evt,int x,int y,int wheelDelta){
	HX_STACK_FRAME("org.gameplay3d.Platform","mouseEventInternal",0x4bf76660,"org.gameplay3d.Platform.mouseEventInternal","org/gameplay3d/Platform.hx",50,0x1887dfbe)
	HX_STACK_ARG(evt,"evt")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(wheelDelta,"wheelDelta")
	HX_STACK_LINE(50)
	return ::org::gameplay3d::Platform_obj::hx_Platform_static_mouseEventInternal(evt,x,y,wheelDelta);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Platform_obj,mouseEventInternal,return )

Void Platform_obj::touchEventInternal( int evt,int x,int y,int contactIndex){
{
		HX_STACK_FRAME("org.gameplay3d.Platform","touchEventInternal",0xc500ec86,"org.gameplay3d.Platform.touchEventInternal","org/gameplay3d/Platform.hx",56,0x1887dfbe)
		HX_STACK_ARG(evt,"evt")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(contactIndex,"contactIndex")
		HX_STACK_LINE(56)
		::org::gameplay3d::Platform_obj::hx_Platform_static_touchEventInternal(evt,x,y,contactIndex);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Platform_obj,touchEventInternal,(void))

Dynamic Platform_obj::hx_Platform_static_create;

Dynamic Platform_obj::hx_Platform_enterMessagePump;

Dynamic Platform_obj::hx_Platform_static_gamepadEventConnectedInternal;

Dynamic Platform_obj::hx_Platform_static_gamepadEventDisconnectedInternal;

Dynamic Platform_obj::hx_Platform_static_keyEventInternal;

Dynamic Platform_obj::hx_Platform_static_mouseEventInternal;

Dynamic Platform_obj::hx_Platform_static_touchEventInternal;


Platform_obj::Platform_obj()
{
}

Dynamic Platform_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"keyEventInternal") ) { return keyEventInternal_dyn(); }
		if (HX_FIELD_EQ(inName,"enterMessagePump") ) { return enterMessagePump_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"mouseEventInternal") ) { return mouseEventInternal_dyn(); }
		if (HX_FIELD_EQ(inName,"touchEventInternal") ) { return touchEventInternal_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_Platform_static_create") ) { return hx_Platform_static_create; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_Platform_enterMessagePump") ) { return hx_Platform_enterMessagePump; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"gamepadEventConnectedInternal") ) { return gamepadEventConnectedInternal_dyn(); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"gamepadEventDisconnectedInternal") ) { return gamepadEventDisconnectedInternal_dyn(); }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"hx_Platform_static_keyEventInternal") ) { return hx_Platform_static_keyEventInternal; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"hx_Platform_static_mouseEventInternal") ) { return hx_Platform_static_mouseEventInternal; }
		if (HX_FIELD_EQ(inName,"hx_Platform_static_touchEventInternal") ) { return hx_Platform_static_touchEventInternal; }
		break;
	case 48:
		if (HX_FIELD_EQ(inName,"hx_Platform_static_gamepadEventConnectedInternal") ) { return hx_Platform_static_gamepadEventConnectedInternal; }
		break;
	case 51:
		if (HX_FIELD_EQ(inName,"hx_Platform_static_gamepadEventDisconnectedInternal") ) { return hx_Platform_static_gamepadEventDisconnectedInternal; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Platform_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 25:
		if (HX_FIELD_EQ(inName,"hx_Platform_static_create") ) { hx_Platform_static_create=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_Platform_enterMessagePump") ) { hx_Platform_enterMessagePump=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"hx_Platform_static_keyEventInternal") ) { hx_Platform_static_keyEventInternal=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"hx_Platform_static_mouseEventInternal") ) { hx_Platform_static_mouseEventInternal=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Platform_static_touchEventInternal") ) { hx_Platform_static_touchEventInternal=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 48:
		if (HX_FIELD_EQ(inName,"hx_Platform_static_gamepadEventConnectedInternal") ) { hx_Platform_static_gamepadEventConnectedInternal=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 51:
		if (HX_FIELD_EQ(inName,"hx_Platform_static_gamepadEventDisconnectedInternal") ) { hx_Platform_static_gamepadEventDisconnectedInternal=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Platform_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create"),
	HX_CSTRING("gamepadEventConnectedInternal"),
	HX_CSTRING("gamepadEventDisconnectedInternal"),
	HX_CSTRING("keyEventInternal"),
	HX_CSTRING("mouseEventInternal"),
	HX_CSTRING("touchEventInternal"),
	HX_CSTRING("hx_Platform_static_create"),
	HX_CSTRING("hx_Platform_enterMessagePump"),
	HX_CSTRING("hx_Platform_static_gamepadEventConnectedInternal"),
	HX_CSTRING("hx_Platform_static_gamepadEventDisconnectedInternal"),
	HX_CSTRING("hx_Platform_static_keyEventInternal"),
	HX_CSTRING("hx_Platform_static_mouseEventInternal"),
	HX_CSTRING("hx_Platform_static_touchEventInternal"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("enterMessagePump"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Platform_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Platform_obj::hx_Platform_static_create,"hx_Platform_static_create");
	HX_MARK_MEMBER_NAME(Platform_obj::hx_Platform_enterMessagePump,"hx_Platform_enterMessagePump");
	HX_MARK_MEMBER_NAME(Platform_obj::hx_Platform_static_gamepadEventConnectedInternal,"hx_Platform_static_gamepadEventConnectedInternal");
	HX_MARK_MEMBER_NAME(Platform_obj::hx_Platform_static_gamepadEventDisconnectedInternal,"hx_Platform_static_gamepadEventDisconnectedInternal");
	HX_MARK_MEMBER_NAME(Platform_obj::hx_Platform_static_keyEventInternal,"hx_Platform_static_keyEventInternal");
	HX_MARK_MEMBER_NAME(Platform_obj::hx_Platform_static_mouseEventInternal,"hx_Platform_static_mouseEventInternal");
	HX_MARK_MEMBER_NAME(Platform_obj::hx_Platform_static_touchEventInternal,"hx_Platform_static_touchEventInternal");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Platform_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Platform_obj::hx_Platform_static_create,"hx_Platform_static_create");
	HX_VISIT_MEMBER_NAME(Platform_obj::hx_Platform_enterMessagePump,"hx_Platform_enterMessagePump");
	HX_VISIT_MEMBER_NAME(Platform_obj::hx_Platform_static_gamepadEventConnectedInternal,"hx_Platform_static_gamepadEventConnectedInternal");
	HX_VISIT_MEMBER_NAME(Platform_obj::hx_Platform_static_gamepadEventDisconnectedInternal,"hx_Platform_static_gamepadEventDisconnectedInternal");
	HX_VISIT_MEMBER_NAME(Platform_obj::hx_Platform_static_keyEventInternal,"hx_Platform_static_keyEventInternal");
	HX_VISIT_MEMBER_NAME(Platform_obj::hx_Platform_static_mouseEventInternal,"hx_Platform_static_mouseEventInternal");
	HX_VISIT_MEMBER_NAME(Platform_obj::hx_Platform_static_touchEventInternal,"hx_Platform_static_touchEventInternal");
};

#endif

Class Platform_obj::__mClass;

void Platform_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.Platform"), hx::TCanCast< Platform_obj> ,sStaticFields,sMemberFields,
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

void Platform_obj::__boot()
{
	hx_Platform_static_create= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Platform >(),HX_CSTRING("static_create"),(int)2);
	hx_Platform_enterMessagePump= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Platform >(),HX_CSTRING("enterMessagePump"),(int)1);
	hx_Platform_static_gamepadEventConnectedInternal= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Platform >(),HX_CSTRING("static_gamepadEventConnectedInternal"),(int)-1);
	hx_Platform_static_gamepadEventDisconnectedInternal= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Platform >(),HX_CSTRING("static_gamepadEventDisconnectedInternal"),(int)1);
	hx_Platform_static_keyEventInternal= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Platform >(),HX_CSTRING("static_keyEventInternal"),(int)2);
	hx_Platform_static_mouseEventInternal= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Platform >(),HX_CSTRING("static_mouseEventInternal"),(int)4);
	hx_Platform_static_touchEventInternal= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Platform >(),HX_CSTRING("static_touchEventInternal"),(int)4);
}

} // end namespace org
} // end namespace gameplay3d
