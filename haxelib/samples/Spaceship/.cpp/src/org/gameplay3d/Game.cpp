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
#ifndef INCLUDED_org_gameplay3d_AIController
#include <org/gameplay3d/AIController.h>
#endif
#ifndef INCLUDED_org_gameplay3d_AnimationController
#include <org/gameplay3d/AnimationController.h>
#endif
#ifndef INCLUDED_org_gameplay3d_AudioController
#include <org/gameplay3d/AudioController.h>
#endif
#ifndef INCLUDED_org_gameplay3d_AudioListener
#include <org/gameplay3d/AudioListener.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Game
#include <org/gameplay3d/Game.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Gamepad
#include <org/gameplay3d/Gamepad.h>
#endif
#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsController
#include <org/gameplay3d/PhysicsController.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Properties
#include <org/gameplay3d/Properties.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Rectangle
#include <org/gameplay3d/Rectangle.h>
#endif
#ifndef INCLUDED_org_gameplay3d_ScriptTarget
#include <org/gameplay3d/ScriptTarget.h>
#endif
#ifndef INCLUDED_org_gameplay3d_TimeListener
#include <org/gameplay3d/TimeListener.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Transform_Listener
#include <org/gameplay3d/Transform_Listener.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IRectangle
#include <org/gameplay3d/immutable/IRectangle.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IVector4
#include <org/gameplay3d/immutable/IVector4.h>
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
#ifndef INCLUDED_org_gameplay3d_intern_impl_Transform_ListenerImpl
#include <org/gameplay3d/intern/impl/Transform_ListenerImpl.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_Handle
#include <org/gameplay3d/util/Handle.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_NativeInterface
#include <org/gameplay3d/util/NativeInterface.h>
#endif
#ifndef INCLUDED_org_gameplay3d_wrapper_TimeListenerWrapper
#include <org/gameplay3d/wrapper/TimeListenerWrapper.h>
#endif
namespace org{
namespace gameplay3d{

Void Game_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.Game","new",0xb5fff891,"org.gameplay3d.Game.new","org/gameplay3d/Game.hx",16,0x6f478a5f)
HX_STACK_THIS(this)
HX_STACK_ARG(nativeObjectInitializer,"nativeObjectInitializer")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(16)
	super::__construct(nativeObjectInitializer,nativeObjectInitializerParams);
}
;
	return null();
}

//Game_obj::~Game_obj() { }

Dynamic Game_obj::__CreateEmpty() { return  new Game_obj; }
hx::ObjectPtr< Game_obj > Game_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< Game_obj > result = new Game_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic Game_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Game_obj > result = new Game_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Game_obj::initialize( ){
{
		HX_STACK_FRAME("org.gameplay3d.Game","initialize",0x590be13f,"org.gameplay3d.Game.initialize","org/gameplay3d/Game.hx",26,0x6f478a5f)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,initialize,(void))

Void Game_obj::finalize( ){
{
		HX_STACK_FRAME("org.gameplay3d.Game","finalize",0x0df9cbcd,"org.gameplay3d.Game.finalize","org/gameplay3d/Game.hx",31,0x6f478a5f)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,finalize,(void))

Void Game_obj::update( Float elapsedTime){
{
		HX_STACK_FRAME("org.gameplay3d.Game","update",0x35c5d278,"org.gameplay3d.Game.update","org/gameplay3d/Game.hx",36,0x6f478a5f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsedTime,"elapsedTime")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,update,(void))

Void Game_obj::render( Float elapsedTime){
{
		HX_STACK_FRAME("org.gameplay3d.Game","render",0xb3e9b7c5,"org.gameplay3d.Game.render","org/gameplay3d/Game.hx",41,0x6f478a5f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsedTime,"elapsedTime")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,render,(void))

bool Game_obj::canExit( ){
	HX_STACK_FRAME("org.gameplay3d.Game","canExit",0x9af873ff,"org.gameplay3d.Game.canExit","org/gameplay3d/Game.hx",47,0x6f478a5f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(47)
	return ::org::gameplay3d::Game_obj::hx_Game_canExit(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,canExit,return )

Void Game_obj::clear_Int_V4_Flt_Int( int flags,::org::gameplay3d::immutable::IVector4 clearColor,Float clearDepth,int clearStencil){
{
		HX_STACK_FRAME("org.gameplay3d.Game","clear_Int_V4_Flt_Int",0x3e7212ce,"org.gameplay3d.Game.clear_Int_V4_Flt_Int","org/gameplay3d/Game.hx",53,0x6f478a5f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(flags,"flags")
		HX_STACK_ARG(clearColor,"clearColor")
		HX_STACK_ARG(clearDepth,"clearDepth")
		HX_STACK_ARG(clearStencil,"clearStencil")
		HX_STACK_LINE(53)
		::org::gameplay3d::Game_obj::hx_Game_clear_Int_V4_Flt_Int(this->nativeObject,flags,(  (((clearColor == null()))) ? Dynamic(null()) : Dynamic(clearColor->__Field(HX_CSTRING("nativeObject"),true)) ),clearDepth,clearStencil);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Game_obj,clear_Int_V4_Flt_Int,(void))

Void Game_obj::clear_Int_FltX5_Int( int flags,Float red,Float green,Float blue,Float alpha,Float clearDepth,int clearStencil){
{
		HX_STACK_FRAME("org.gameplay3d.Game","clear_Int_FltX5_Int",0xe56ba60a,"org.gameplay3d.Game.clear_Int_FltX5_Int","org/gameplay3d/Game.hx",59,0x6f478a5f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(flags,"flags")
		HX_STACK_ARG(red,"red")
		HX_STACK_ARG(green,"green")
		HX_STACK_ARG(blue,"blue")
		HX_STACK_ARG(alpha,"alpha")
		HX_STACK_ARG(clearDepth,"clearDepth")
		HX_STACK_ARG(clearStencil,"clearStencil")
		HX_STACK_LINE(59)
		::org::gameplay3d::Game_obj::hx_Game_clear_Int_FltX5_Int(this->nativeObject,flags,red,green,blue,alpha,clearDepth,clearStencil);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(Game_obj,clear_Int_FltX5_Int,(void))

Void Game_obj::displayKeyboard( bool display){
{
		HX_STACK_FRAME("org.gameplay3d.Game","displayKeyboard",0x49bce2ba,"org.gameplay3d.Game.displayKeyboard","org/gameplay3d/Game.hx",65,0x6f478a5f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(display,"display")
		HX_STACK_LINE(65)
		::org::gameplay3d::Game_obj::hx_Game_displayKeyboard(this->nativeObject,display);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,displayKeyboard,(void))

Void Game_obj::exit( ){
{
		HX_STACK_FRAME("org.gameplay3d.Game","exit",0x8414f9cd,"org.gameplay3d.Game.exit","org/gameplay3d/Game.hx",71,0x6f478a5f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(71)
		::org::gameplay3d::Game_obj::hx_Game_exit(this->nativeObject);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,exit,(void))

Void Game_obj::frame( ){
{
		HX_STACK_FRAME("org.gameplay3d.Game","frame",0x9daece9e,"org.gameplay3d.Game.frame","org/gameplay3d/Game.hx",77,0x6f478a5f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(77)
		::org::gameplay3d::Game_obj::hx_Game_frame(this->nativeObject);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,frame,(void))

Void Game_obj::gamepadEvent( int evt,::org::gameplay3d::Gamepad gamepad){
{
		HX_STACK_FRAME("org.gameplay3d.Game","gamepadEvent",0xd3653968,"org.gameplay3d.Game.gamepadEvent","org/gameplay3d/Game.hx",82,0x6f478a5f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(evt,"evt")
		HX_STACK_ARG(gamepad,"gamepad")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Game_obj,gamepadEvent,(void))

Void Game_obj::gesturePinchEvent( int x,int y,Float scale){
{
		HX_STACK_FRAME("org.gameplay3d.Game","gesturePinchEvent",0xec43b75a,"org.gameplay3d.Game.gesturePinchEvent","org/gameplay3d/Game.hx",87,0x6f478a5f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(scale,"scale")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Game_obj,gesturePinchEvent,(void))

Void Game_obj::gestureSwipeEvent( int x,int y,int direction){
{
		HX_STACK_FRAME("org.gameplay3d.Game","gestureSwipeEvent",0x81df951a,"org.gameplay3d.Game.gestureSwipeEvent","org/gameplay3d/Game.hx",92,0x6f478a5f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(direction,"direction")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Game_obj,gestureSwipeEvent,(void))

Void Game_obj::gestureTapEvent( int x,int y){
{
		HX_STACK_FRAME("org.gameplay3d.Game","gestureTapEvent",0xec1e4c11,"org.gameplay3d.Game.gestureTapEvent","org/gameplay3d/Game.hx",97,0x6f478a5f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Game_obj,gestureTapEvent,(void))

::org::gameplay3d::AIController Game_obj::getAIController( ){
	HX_STACK_FRAME("org.gameplay3d.Game","getAIController",0xbc6f3eeb,"org.gameplay3d.Game.getAIController","org/gameplay3d/Game.hx",103,0x6f478a5f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(103)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::AIController >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(103)
	Dynamic nativeObject = ::org::gameplay3d::Game_obj::hx_Game_getAIController();		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(103)
	if (((nativeObject == null()))){
		HX_STACK_LINE(103)
		return null();
	}
	else{
		HX_STACK_LINE(103)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(103)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(103)
			::org::gameplay3d::AIController result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(103)
			if (((result == null()))){
				HX_STACK_LINE(103)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(103)
				::org::gameplay3d::AIController _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(103)
				result = _g;
				HX_STACK_LINE(103)
				ref->set(result);
			}
			HX_STACK_LINE(103)
			return result;
		}
		else{
			HX_STACK_LINE(103)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(103)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(103)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,getAIController,return )

Void Game_obj::getAccelerometerValues( Dynamic pitch,Dynamic roll){
{
		HX_STACK_FRAME("org.gameplay3d.Game","getAccelerometerValues",0x9747e38a,"org.gameplay3d.Game.getAccelerometerValues","org/gameplay3d/Game.hx",115,0x6f478a5f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pitch,"pitch")
		HX_STACK_ARG(roll,"roll")
		HX_STACK_LINE(115)
		::org::gameplay3d::Game_obj::hx_Game_getAccelerometerValues(this->nativeObject,pitch,roll);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Game_obj,getAccelerometerValues,(void))

::org::gameplay3d::AnimationController Game_obj::getAnimationController( ){
	HX_STACK_FRAME("org.gameplay3d.Game","getAnimationController",0xaa26c039,"org.gameplay3d.Game.getAnimationController","org/gameplay3d/Game.hx",121,0x6f478a5f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(121)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::AnimationController >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(121)
	Dynamic nativeObject = ::org::gameplay3d::Game_obj::hx_Game_getAnimationController(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(121)
	if (((nativeObject == null()))){
		HX_STACK_LINE(121)
		return null();
	}
	else{
		HX_STACK_LINE(121)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(121)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(121)
			::org::gameplay3d::AnimationController result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(121)
			if (((result == null()))){
				HX_STACK_LINE(121)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(121)
				::org::gameplay3d::AnimationController _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(121)
				result = _g;
				HX_STACK_LINE(121)
				ref->set(result);
			}
			HX_STACK_LINE(121)
			return result;
		}
		else{
			HX_STACK_LINE(121)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(121)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(121)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,getAnimationController,return )

Float Game_obj::getAspectRatio( ){
	HX_STACK_FRAME("org.gameplay3d.Game","getAspectRatio",0x15fb068c,"org.gameplay3d.Game.getAspectRatio","org/gameplay3d/Game.hx",127,0x6f478a5f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(127)
	return ::org::gameplay3d::Game_obj::hx_Game_getAspectRatio(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,getAspectRatio,return )

::org::gameplay3d::AudioController Game_obj::getAudioController( ){
	HX_STACK_FRAME("org.gameplay3d.Game","getAudioController",0x6462140b,"org.gameplay3d.Game.getAudioController","org/gameplay3d/Game.hx",133,0x6f478a5f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(133)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::AudioController >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(133)
	Dynamic nativeObject = ::org::gameplay3d::Game_obj::hx_Game_getAudioController(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(133)
	if (((nativeObject == null()))){
		HX_STACK_LINE(133)
		return null();
	}
	else{
		HX_STACK_LINE(133)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(133)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(133)
			::org::gameplay3d::AudioController result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(133)
			if (((result == null()))){
				HX_STACK_LINE(133)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(133)
				::org::gameplay3d::AudioController _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(133)
				result = _g;
				HX_STACK_LINE(133)
				ref->set(result);
			}
			HX_STACK_LINE(133)
			return result;
		}
		else{
			HX_STACK_LINE(133)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(133)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(133)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,getAudioController,return )

::org::gameplay3d::AudioListener Game_obj::getAudioListener( ){
	HX_STACK_FRAME("org.gameplay3d.Game","getAudioListener",0x29927223,"org.gameplay3d.Game.getAudioListener","org/gameplay3d/Game.hx",140,0x6f478a5f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(140)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::AudioListener >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(140)
	Dynamic nativeObject = ::org::gameplay3d::Game_obj::hx_Game_getAudioListener(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(140)
	if (((nativeObject == null()))){
		HX_STACK_LINE(140)
		return null();
	}
	else{
		HX_STACK_LINE(140)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(140)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(140)
			::org::gameplay3d::AudioListener result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(140)
			if (((result == null()))){
				HX_STACK_LINE(140)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(140)
				::org::gameplay3d::AudioListener _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(140)
				result = _g;
				HX_STACK_LINE(140)
				ref->set(result);
			}
			HX_STACK_LINE(140)
			return result;
		}
		else{
			HX_STACK_LINE(140)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(140)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(140)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,getAudioListener,return )

::org::gameplay3d::Properties Game_obj::getConfig( ){
	HX_STACK_FRAME("org.gameplay3d.Game","getConfig",0xd2fec2e9,"org.gameplay3d.Game.getConfig","org/gameplay3d/Game.hx",146,0x6f478a5f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(146)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Properties >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(146)
	Dynamic nativeObject = ::org::gameplay3d::Game_obj::hx_Game_getConfig(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(146)
	if (((nativeObject == null()))){
		HX_STACK_LINE(146)
		return null();
	}
	else{
		HX_STACK_LINE(146)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(146)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(146)
			::org::gameplay3d::Properties result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(146)
			if (((result == null()))){
				HX_STACK_LINE(146)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(146)
				::org::gameplay3d::Properties _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(146)
				result = _g;
				HX_STACK_LINE(146)
				ref->set(result);
			}
			HX_STACK_LINE(146)
			return result;
		}
		else{
			HX_STACK_LINE(146)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(146)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(146)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,getConfig,return )

int Game_obj::getFrameRate( ){
	HX_STACK_FRAME("org.gameplay3d.Game","getFrameRate",0xee4b77e6,"org.gameplay3d.Game.getFrameRate","org/gameplay3d/Game.hx",152,0x6f478a5f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(152)
	return ::org::gameplay3d::Game_obj::hx_Game_getFrameRate(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,getFrameRate,return )

::org::gameplay3d::Gamepad Game_obj::getGamepad( int index){
	HX_STACK_FRAME("org.gameplay3d.Game","getGamepad",0x4538169a,"org.gameplay3d.Game.getGamepad","org/gameplay3d/Game.hx",164,0x6f478a5f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(164)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Gamepad >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(164)
	Dynamic nativeObject = ::org::gameplay3d::Game_obj::hx_Game_getGamepad(this->nativeObject,index);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(164)
	if (((nativeObject == null()))){
		HX_STACK_LINE(164)
		return null();
	}
	else{
		HX_STACK_LINE(164)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(164)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(164)
			::org::gameplay3d::Gamepad result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(164)
			if (((result == null()))){
				HX_STACK_LINE(164)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(164)
				::org::gameplay3d::Gamepad _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(164)
				result = _g;
				HX_STACK_LINE(164)
				ref->set(result);
			}
			HX_STACK_LINE(164)
			return result;
		}
		else{
			HX_STACK_LINE(164)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(164)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(164)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,getGamepad,return )

int Game_obj::getGamepadCount( ){
	HX_STACK_FRAME("org.gameplay3d.Game","getGamepadCount",0x1a3e6fd5,"org.gameplay3d.Game.getGamepadCount","org/gameplay3d/Game.hx",170,0x6f478a5f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(170)
	return ::org::gameplay3d::Game_obj::hx_Game_getGamepadCount(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,getGamepadCount,return )

int Game_obj::getHeight( ){
	HX_STACK_FRAME("org.gameplay3d.Game","getHeight",0x0d78740e,"org.gameplay3d.Game.getHeight","org/gameplay3d/Game.hx",176,0x6f478a5f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(176)
	return ::org::gameplay3d::Game_obj::hx_Game_getHeight(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,getHeight,return )

::org::gameplay3d::PhysicsController Game_obj::getPhysicsController( ){
	HX_STACK_FRAME("org.gameplay3d.Game","getPhysicsController",0x7018fb7c,"org.gameplay3d.Game.getPhysicsController","org/gameplay3d/Game.hx",188,0x6f478a5f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(188)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::PhysicsController >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(188)
	Dynamic nativeObject = ::org::gameplay3d::Game_obj::hx_Game_getPhysicsController(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(188)
	if (((nativeObject == null()))){
		HX_STACK_LINE(188)
		return null();
	}
	else{
		HX_STACK_LINE(188)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(188)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(188)
			::org::gameplay3d::PhysicsController result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(188)
			if (((result == null()))){
				HX_STACK_LINE(188)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(188)
				::org::gameplay3d::PhysicsController _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(188)
				result = _g;
				HX_STACK_LINE(188)
				ref->set(result);
			}
			HX_STACK_LINE(188)
			return result;
		}
		else{
			HX_STACK_LINE(188)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(188)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(188)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,getPhysicsController,return )

int Game_obj::getState( ){
	HX_STACK_FRAME("org.gameplay3d.Game","getState",0xfca20bca,"org.gameplay3d.Game.getState","org/gameplay3d/Game.hx",201,0x6f478a5f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(201)
	return ::org::gameplay3d::Game_obj::hx_Game_getState(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,getState,return )

::org::gameplay3d::immutable::IRectangle Game_obj::getViewport( ){
	HX_STACK_FRAME("org.gameplay3d.Game","getViewport",0x1ce2504d,"org.gameplay3d.Game.getViewport","org/gameplay3d/Game.hx",207,0x6f478a5f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_viewport == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Rectangle _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Rectangle >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(207)
			Dynamic nativeObject = ::org::gameplay3d::Game_obj::hx_Game_getViewport(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
			HX_STACK_LINE(29)
			if (((nativeObject == null()))){
				HX_STACK_LINE(29)
				_g1 = null();
			}
			else{
				HX_STACK_LINE(29)
				if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
					HX_STACK_LINE(29)
					::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
					HX_STACK_LINE(29)
					::org::gameplay3d::Rectangle result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Rectangle _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(29)
						result = _g;
						HX_STACK_LINE(29)
						ref->set(result);
					}
					HX_STACK_LINE(29)
					_g1 = result;
				}
				else{
					HX_STACK_LINE(29)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
					HX_STACK_LINE(29)
					_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
				}
			}
		}
		HX_STACK_LINE(29)
		return this->_viewport = _g1;
	}
	else{
		HX_STACK_LINE(207)
		Dynamic _g2 = ::org::gameplay3d::Game_obj::hx_Game_getViewport(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Rectangle _g3 = this->_viewport->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_viewport = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,getViewport,return )

int Game_obj::getWidth( ){
	HX_STACK_FRAME("org.gameplay3d.Game","getWidth",0x42f94bbf,"org.gameplay3d.Game.getWidth","org/gameplay3d/Game.hx",213,0x6f478a5f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(213)
	return ::org::gameplay3d::Game_obj::hx_Game_getWidth(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,getWidth,return )

bool Game_obj::hasMouse( ){
	HX_STACK_FRAME("org.gameplay3d.Game","hasMouse",0xb17ce69a,"org.gameplay3d.Game.hasMouse","org/gameplay3d/Game.hx",219,0x6f478a5f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(219)
	return ::org::gameplay3d::Game_obj::hx_Game_hasMouse(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,hasMouse,return )

bool Game_obj::isCursorVisible( ){
	HX_STACK_FRAME("org.gameplay3d.Game","isCursorVisible",0xf627afa3,"org.gameplay3d.Game.isCursorVisible","org/gameplay3d/Game.hx",225,0x6f478a5f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(225)
	return ::org::gameplay3d::Game_obj::hx_Game_isCursorVisible(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,isCursorVisible,return )

bool Game_obj::isGestureRegistered( int evt){
	HX_STACK_FRAME("org.gameplay3d.Game","isGestureRegistered",0x42e51852,"org.gameplay3d.Game.isGestureRegistered","org/gameplay3d/Game.hx",231,0x6f478a5f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(evt,"evt")
	HX_STACK_LINE(231)
	return ::org::gameplay3d::Game_obj::hx_Game_isGestureRegistered(this->nativeObject,evt);
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,isGestureRegistered,return )

bool Game_obj::isGestureSupported( int evt){
	HX_STACK_FRAME("org.gameplay3d.Game","isGestureSupported",0xa97a955e,"org.gameplay3d.Game.isGestureSupported","org/gameplay3d/Game.hx",237,0x6f478a5f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(evt,"evt")
	HX_STACK_LINE(237)
	return ::org::gameplay3d::Game_obj::hx_Game_isGestureSupported(this->nativeObject,evt);
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,isGestureSupported,return )

bool Game_obj::isInitialized( ){
	HX_STACK_FRAME("org.gameplay3d.Game","isInitialized",0xb034f4bb,"org.gameplay3d.Game.isInitialized","org/gameplay3d/Game.hx",243,0x6f478a5f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(243)
	return ::org::gameplay3d::Game_obj::hx_Game_isInitialized(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,isInitialized,return )

bool Game_obj::isMouseCaptured( ){
	HX_STACK_FRAME("org.gameplay3d.Game","isMouseCaptured",0x1b671bca,"org.gameplay3d.Game.isMouseCaptured","org/gameplay3d/Game.hx",249,0x6f478a5f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(249)
	return ::org::gameplay3d::Game_obj::hx_Game_isMouseCaptured(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,isMouseCaptured,return )

bool Game_obj::isMultiTouch( ){
	HX_STACK_FRAME("org.gameplay3d.Game","isMultiTouch",0x5bd458bf,"org.gameplay3d.Game.isMultiTouch","org/gameplay3d/Game.hx",255,0x6f478a5f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(255)
	return ::org::gameplay3d::Game_obj::hx_Game_isMultiTouch(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,isMultiTouch,return )

Void Game_obj::keyEvent( int evt,int key){
{
		HX_STACK_FRAME("org.gameplay3d.Game","keyEvent",0xd2edf42a,"org.gameplay3d.Game.keyEvent","org/gameplay3d/Game.hx",266,0x6f478a5f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(evt,"evt")
		HX_STACK_ARG(key,"key")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Game_obj,keyEvent,(void))

bool Game_obj::launchURL( ::String url){
	HX_STACK_FRAME("org.gameplay3d.Game","launchURL",0x7b06c9ed,"org.gameplay3d.Game.launchURL","org/gameplay3d/Game.hx",272,0x6f478a5f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(url,"url")
	HX_STACK_LINE(272)
	return ::org::gameplay3d::Game_obj::hx_Game_launchURL(this->nativeObject,url);
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,launchURL,return )

Void Game_obj::menuEvent( ){
{
		HX_STACK_FRAME("org.gameplay3d.Game","menuEvent",0x9f7314ec,"org.gameplay3d.Game.menuEvent","org/gameplay3d/Game.hx",277,0x6f478a5f)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,menuEvent,(void))

bool Game_obj::mouseEvent( int evt,int x,int y,int wheelDelta){
	HX_STACK_FRAME("org.gameplay3d.Game","mouseEvent",0xffe26ba4,"org.gameplay3d.Game.mouseEvent","org/gameplay3d/Game.hx",283,0x6f478a5f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(evt,"evt")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(wheelDelta,"wheelDelta")
	HX_STACK_LINE(283)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC4(Game_obj,mouseEvent,return )

Void Game_obj::pause( ){
{
		HX_STACK_FRAME("org.gameplay3d.Game","pause",0x54832d67,"org.gameplay3d.Game.pause","org/gameplay3d/Game.hx",289,0x6f478a5f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(289)
		::org::gameplay3d::Game_obj::hx_Game_pause(this->nativeObject);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,pause,(void))

Void Game_obj::registerGesture( int evt){
{
		HX_STACK_FRAME("org.gameplay3d.Game","registerGesture",0x497d6c17,"org.gameplay3d.Game.registerGesture","org/gameplay3d/Game.hx",295,0x6f478a5f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(evt,"evt")
		HX_STACK_LINE(295)
		::org::gameplay3d::Game_obj::hx_Game_registerGesture(this->nativeObject,evt);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,registerGesture,(void))

Void Game_obj::resume( ){
{
		HX_STACK_FRAME("org.gameplay3d.Game","resume",0xb744b61c,"org.gameplay3d.Game.resume","org/gameplay3d/Game.hx",301,0x6f478a5f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(301)
		::org::gameplay3d::Game_obj::hx_Game_resume(this->nativeObject);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,resume,(void))

int Game_obj::run( ){
	HX_STACK_FRAME("org.gameplay3d.Game","run",0xb6030f7c,"org.gameplay3d.Game.run","org/gameplay3d/Game.hx",307,0x6f478a5f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(307)
	return ::org::gameplay3d::Game_obj::hx_Game_run(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,run,return )

Void Game_obj::schedule_Flt_Lsnr_Hndl( Float timeOffset,::org::gameplay3d::wrapper::TimeListenerWrapper timeListener,::org::gameplay3d::util::Handle cookie){
{
		HX_STACK_FRAME("org.gameplay3d.Game","schedule_Flt_Lsnr_Hndl",0x21ba6658,"org.gameplay3d.Game.schedule_Flt_Lsnr_Hndl","org/gameplay3d/Game.hx",313,0x6f478a5f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(timeOffset,"timeOffset")
		HX_STACK_ARG(timeListener,"timeListener")
		HX_STACK_ARG(cookie,"cookie")
		HX_STACK_LINE(313)
		::org::gameplay3d::Game_obj::hx_Game_schedule_Flt_Lsnr_Hndl(this->nativeObject,timeOffset,(  (((timeListener == null()))) ? Dynamic(null()) : Dynamic(timeListener->nativeObject) ),(  (((cookie == null()))) ? Dynamic(null()) : Dynamic(cookie->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Game_obj,schedule_Flt_Lsnr_Hndl,(void))

Void Game_obj::schedule_Flt_Str( Float timeOffset,::String _function){
{
		HX_STACK_FRAME("org.gameplay3d.Game","schedule_Flt_Str",0xf81300e7,"org.gameplay3d.Game.schedule_Flt_Str","org/gameplay3d/Game.hx",319,0x6f478a5f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(timeOffset,"timeOffset")
		HX_STACK_ARG(_function,"_function")
		HX_STACK_LINE(319)
		::org::gameplay3d::Game_obj::hx_Game_schedule_Flt_Str(this->nativeObject,timeOffset,_function);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Game_obj,schedule_Flt_Str,(void))

Void Game_obj::setCursorVisible( bool visible){
{
		HX_STACK_FRAME("org.gameplay3d.Game","setCursorVisible",0x71709c69,"org.gameplay3d.Game.setCursorVisible","org/gameplay3d/Game.hx",325,0x6f478a5f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(visible,"visible")
		HX_STACK_LINE(325)
		::org::gameplay3d::Game_obj::hx_Game_setCursorVisible(this->nativeObject,visible);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,setCursorVisible,(void))

Void Game_obj::setMouseCaptured( bool captured){
{
		HX_STACK_FRAME("org.gameplay3d.Game","setMouseCaptured",0x96b00890,"org.gameplay3d.Game.setMouseCaptured","org/gameplay3d/Game.hx",331,0x6f478a5f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(captured,"captured")
		HX_STACK_LINE(331)
		::org::gameplay3d::Game_obj::hx_Game_setMouseCaptured(this->nativeObject,captured);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,setMouseCaptured,(void))

Void Game_obj::setMultiTouch( bool enabled){
{
		HX_STACK_FRAME("org.gameplay3d.Game","setMultiTouch",0xf55e5439,"org.gameplay3d.Game.setMultiTouch","org/gameplay3d/Game.hx",337,0x6f478a5f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(enabled,"enabled")
		HX_STACK_LINE(337)
		::org::gameplay3d::Game_obj::hx_Game_setMultiTouch(this->nativeObject,enabled);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,setMultiTouch,(void))

Void Game_obj::setViewport( ::org::gameplay3d::immutable::IRectangle viewport){
{
		HX_STACK_FRAME("org.gameplay3d.Game","setViewport",0x274f5759,"org.gameplay3d.Game.setViewport","org/gameplay3d/Game.hx",343,0x6f478a5f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(viewport,"viewport")
		HX_STACK_LINE(343)
		::org::gameplay3d::Game_obj::hx_Game_setViewport(this->nativeObject,(  (((viewport == null()))) ? Dynamic(null()) : Dynamic(viewport->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,setViewport,(void))

Void Game_obj::touchEvent( int evt,int x,int y,int contactIndex){
{
		HX_STACK_FRAME("org.gameplay3d.Game","touchEvent",0xdba65bca,"org.gameplay3d.Game.touchEvent","org/gameplay3d/Game.hx",354,0x6f478a5f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(evt,"evt")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(contactIndex,"contactIndex")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Game_obj,touchEvent,(void))

Void Game_obj::unregisterGesture( int evt){
{
		HX_STACK_FRAME("org.gameplay3d.Game","unregisterGesture",0x6449a01e,"org.gameplay3d.Game.unregisterGesture","org/gameplay3d/Game.hx",360,0x6f478a5f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(evt,"evt")
		HX_STACK_LINE(360)
		::org::gameplay3d::Game_obj::hx_Game_unregisterGesture(this->nativeObject,evt);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,unregisterGesture,(void))

Float Game_obj::getAbsoluteTime( ){
	HX_STACK_FRAME("org.gameplay3d.Game","getAbsoluteTime",0x1224518b,"org.gameplay3d.Game.getAbsoluteTime","org/gameplay3d/Game.hx",109,0x6f478a5f)
	HX_STACK_LINE(109)
	return ::org::gameplay3d::Game_obj::hx_Game_static_getAbsoluteTime();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Game_obj,getAbsoluteTime,return )

Float Game_obj::getGameTime( ){
	HX_STACK_FRAME("org.gameplay3d.Game","getGameTime",0x395fd106,"org.gameplay3d.Game.getGameTime","org/gameplay3d/Game.hx",158,0x6f478a5f)
	HX_STACK_LINE(158)
	return ::org::gameplay3d::Game_obj::hx_Game_static_getGameTime();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Game_obj,getGameTime,return )

::org::gameplay3d::Game Game_obj::getInstance( ){
	HX_STACK_FRAME("org.gameplay3d.Game","getInstance",0xda1e237c,"org.gameplay3d.Game.getInstance","org/gameplay3d/Game.hx",182,0x6f478a5f)
	HX_STACK_LINE(182)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Game >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(182)
	Dynamic nativeObject = ::org::gameplay3d::Game_obj::hx_Game_static_getInstance();		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(182)
	if (((nativeObject == null()))){
		HX_STACK_LINE(182)
		return null();
	}
	else{
		HX_STACK_LINE(182)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(182)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(182)
			::org::gameplay3d::Game result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(182)
			if (((result == null()))){
				HX_STACK_LINE(182)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(182)
				::org::gameplay3d::Game _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(182)
				result = _g;
				HX_STACK_LINE(182)
				ref->set(result);
			}
			HX_STACK_LINE(182)
			return result;
		}
		else{
			HX_STACK_LINE(182)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(182)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(182)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Game_obj,getInstance,return )

bool Game_obj::isVsync( ){
	HX_STACK_FRAME("org.gameplay3d.Game","isVsync",0x13b06638,"org.gameplay3d.Game.isVsync","org/gameplay3d/Game.hx",261,0x6f478a5f)
	HX_STACK_LINE(261)
	return ::org::gameplay3d::Game_obj::hx_Game_static_isVsync();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Game_obj,isVsync,return )

Void Game_obj::setVsync( bool enable){
{
		HX_STACK_FRAME("org.gameplay3d.Game","setVsync",0x649c1cfe,"org.gameplay3d.Game.setVsync","org/gameplay3d/Game.hx",349,0x6f478a5f)
		HX_STACK_ARG(enable,"enable")
		HX_STACK_LINE(349)
		::org::gameplay3d::Game_obj::hx_Game_static_setVsync(enable);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Game_obj,setVsync,(void))

Dynamic Game_obj::constructNativeObject( ::org::gameplay3d::Game thisObj){
	HX_STACK_FRAME("org.gameplay3d.Game","constructNativeObject",0x345c7ade,"org.gameplay3d.Game.constructNativeObject","org/gameplay3d/Game.hx",370,0x6f478a5f)
	HX_STACK_ARG(thisObj,"thisObj")
	HX_STACK_LINE(370)
	return ::org::gameplay3d::Game_obj::hx_Game_Construct(thisObj->initialize_dyn(),thisObj->finalize_dyn(),thisObj->update_dyn(),thisObj->render_dyn(),thisObj->gamepadEvent_dyn(),thisObj->gesturePinchEvent_dyn(),thisObj->gestureSwipeEvent_dyn(),thisObj->gestureTapEvent_dyn(),thisObj->keyEvent_dyn(),thisObj->menuEvent_dyn(),thisObj->mouseEvent_dyn(),thisObj->touchEvent_dyn());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Game_obj,constructNativeObject,return )

Dynamic Game_obj::hx_Game_Construct;

Dynamic Game_obj::hx_Game_canExit;

Dynamic Game_obj::hx_Game_clear_Int_V4_Flt_Int;

Dynamic Game_obj::hx_Game_clear_Int_FltX5_Int;

Dynamic Game_obj::hx_Game_displayKeyboard;

Dynamic Game_obj::hx_Game_exit;

Dynamic Game_obj::hx_Game_frame;

Dynamic Game_obj::hx_Game_getAIController;

Dynamic Game_obj::hx_Game_static_getAbsoluteTime;

Dynamic Game_obj::hx_Game_getAccelerometerValues;

Dynamic Game_obj::hx_Game_getAnimationController;

Dynamic Game_obj::hx_Game_getAspectRatio;

Dynamic Game_obj::hx_Game_getAudioController;

Dynamic Game_obj::hx_Game_getAudioListener;

Dynamic Game_obj::hx_Game_getConfig;

Dynamic Game_obj::hx_Game_getFrameRate;

Dynamic Game_obj::hx_Game_static_getGameTime;

Dynamic Game_obj::hx_Game_getGamepad;

Dynamic Game_obj::hx_Game_getGamepadCount;

Dynamic Game_obj::hx_Game_getHeight;

Dynamic Game_obj::hx_Game_static_getInstance;

Dynamic Game_obj::hx_Game_getPhysicsController;

Dynamic Game_obj::hx_Game_getScriptController;

Dynamic Game_obj::hx_Game_getState;

Dynamic Game_obj::hx_Game_getViewport;

Dynamic Game_obj::hx_Game_getWidth;

Dynamic Game_obj::hx_Game_hasMouse;

Dynamic Game_obj::hx_Game_isCursorVisible;

Dynamic Game_obj::hx_Game_isGestureRegistered;

Dynamic Game_obj::hx_Game_isGestureSupported;

Dynamic Game_obj::hx_Game_isInitialized;

Dynamic Game_obj::hx_Game_isMouseCaptured;

Dynamic Game_obj::hx_Game_isMultiTouch;

Dynamic Game_obj::hx_Game_launchURL;

Dynamic Game_obj::hx_Game_static_isVsync;

Dynamic Game_obj::hx_Game_pause;

Dynamic Game_obj::hx_Game_registerGesture;

Dynamic Game_obj::hx_Game_resume;

Dynamic Game_obj::hx_Game_run;

Dynamic Game_obj::hx_Game_schedule_Flt_Lsnr_Hndl;

Dynamic Game_obj::hx_Game_schedule_Flt_Str;

Dynamic Game_obj::hx_Game_setCursorVisible;

Dynamic Game_obj::hx_Game_setMouseCaptured;

Dynamic Game_obj::hx_Game_setMultiTouch;

Dynamic Game_obj::hx_Game_setViewport;

Dynamic Game_obj::hx_Game_static_setVsync;

Dynamic Game_obj::hx_Game_unregisterGesture;


Game_obj::Game_obj()
{
}

void Game_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Game);
	HX_MARK_MEMBER_NAME(_viewport,"_viewport");
	::org::gameplay3d::intern::NativeBinding_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Game_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_viewport,"_viewport");
	::org::gameplay3d::intern::NativeBinding_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Game_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return run_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"exit") ) { return exit_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { return frame_dyn(); }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isVsync") ) { return isVsync_dyn(); }
		if (HX_FIELD_EQ(inName,"canExit") ) { return canExit_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setVsync") ) { return setVsync_dyn(); }
		if (HX_FIELD_EQ(inName,"finalize") ) { return finalize_dyn(); }
		if (HX_FIELD_EQ(inName,"getState") ) { return getState_dyn(); }
		if (HX_FIELD_EQ(inName,"getWidth") ) { return getWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"hasMouse") ) { return hasMouse_dyn(); }
		if (HX_FIELD_EQ(inName,"keyEvent") ) { return keyEvent_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_viewport") ) { return _viewport; }
		if (HX_FIELD_EQ(inName,"getConfig") ) { return getConfig_dyn(); }
		if (HX_FIELD_EQ(inName,"getHeight") ) { return getHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"launchURL") ) { return launchURL_dyn(); }
		if (HX_FIELD_EQ(inName,"menuEvent") ) { return menuEvent_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"getGamepad") ) { return getGamepad_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseEvent") ) { return mouseEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"touchEvent") ) { return touchEvent_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getGameTime") ) { return getGameTime_dyn(); }
		if (HX_FIELD_EQ(inName,"getInstance") ) { return getInstance_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Game_run") ) { return hx_Game_run; }
		if (HX_FIELD_EQ(inName,"getViewport") ) { return getViewport_dyn(); }
		if (HX_FIELD_EQ(inName,"setViewport") ) { return setViewport_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hx_Game_exit") ) { return hx_Game_exit; }
		if (HX_FIELD_EQ(inName,"gamepadEvent") ) { return gamepadEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"getFrameRate") ) { return getFrameRate_dyn(); }
		if (HX_FIELD_EQ(inName,"isMultiTouch") ) { return isMultiTouch_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"hx_Game_frame") ) { return hx_Game_frame; }
		if (HX_FIELD_EQ(inName,"hx_Game_pause") ) { return hx_Game_pause; }
		if (HX_FIELD_EQ(inName,"isInitialized") ) { return isInitialized_dyn(); }
		if (HX_FIELD_EQ(inName,"setMultiTouch") ) { return setMultiTouch_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"hx_Game_resume") ) { return hx_Game_resume; }
		if (HX_FIELD_EQ(inName,"getAspectRatio") ) { return getAspectRatio_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getAbsoluteTime") ) { return getAbsoluteTime_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Game_canExit") ) { return hx_Game_canExit; }
		if (HX_FIELD_EQ(inName,"displayKeyboard") ) { return displayKeyboard_dyn(); }
		if (HX_FIELD_EQ(inName,"gestureTapEvent") ) { return gestureTapEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"getAIController") ) { return getAIController_dyn(); }
		if (HX_FIELD_EQ(inName,"getGamepadCount") ) { return getGamepadCount_dyn(); }
		if (HX_FIELD_EQ(inName,"isCursorVisible") ) { return isCursorVisible_dyn(); }
		if (HX_FIELD_EQ(inName,"isMouseCaptured") ) { return isMouseCaptured_dyn(); }
		if (HX_FIELD_EQ(inName,"registerGesture") ) { return registerGesture_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hx_Game_getState") ) { return hx_Game_getState; }
		if (HX_FIELD_EQ(inName,"hx_Game_getWidth") ) { return hx_Game_getWidth; }
		if (HX_FIELD_EQ(inName,"hx_Game_hasMouse") ) { return hx_Game_hasMouse; }
		if (HX_FIELD_EQ(inName,"getAudioListener") ) { return getAudioListener_dyn(); }
		if (HX_FIELD_EQ(inName,"schedule_Flt_Str") ) { return schedule_Flt_Str_dyn(); }
		if (HX_FIELD_EQ(inName,"setCursorVisible") ) { return setCursorVisible_dyn(); }
		if (HX_FIELD_EQ(inName,"setMouseCaptured") ) { return setMouseCaptured_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"hx_Game_Construct") ) { return hx_Game_Construct; }
		if (HX_FIELD_EQ(inName,"hx_Game_getConfig") ) { return hx_Game_getConfig; }
		if (HX_FIELD_EQ(inName,"hx_Game_getHeight") ) { return hx_Game_getHeight; }
		if (HX_FIELD_EQ(inName,"hx_Game_launchURL") ) { return hx_Game_launchURL; }
		if (HX_FIELD_EQ(inName,"gesturePinchEvent") ) { return gesturePinchEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"gestureSwipeEvent") ) { return gestureSwipeEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"unregisterGesture") ) { return unregisterGesture_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hx_Game_getGamepad") ) { return hx_Game_getGamepad; }
		if (HX_FIELD_EQ(inName,"getAudioController") ) { return getAudioController_dyn(); }
		if (HX_FIELD_EQ(inName,"isGestureSupported") ) { return isGestureSupported_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hx_Game_getViewport") ) { return hx_Game_getViewport; }
		if (HX_FIELD_EQ(inName,"hx_Game_setViewport") ) { return hx_Game_setViewport; }
		if (HX_FIELD_EQ(inName,"clear_Int_FltX5_Int") ) { return clear_Int_FltX5_Int_dyn(); }
		if (HX_FIELD_EQ(inName,"isGestureRegistered") ) { return isGestureRegistered_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Game_getFrameRate") ) { return hx_Game_getFrameRate; }
		if (HX_FIELD_EQ(inName,"hx_Game_isMultiTouch") ) { return hx_Game_isMultiTouch; }
		if (HX_FIELD_EQ(inName,"clear_Int_V4_Flt_Int") ) { return clear_Int_V4_Flt_Int_dyn(); }
		if (HX_FIELD_EQ(inName,"getPhysicsController") ) { return getPhysicsController_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"constructNativeObject") ) { return constructNativeObject_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Game_isInitialized") ) { return hx_Game_isInitialized; }
		if (HX_FIELD_EQ(inName,"hx_Game_setMultiTouch") ) { return hx_Game_setMultiTouch; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Game_getAspectRatio") ) { return hx_Game_getAspectRatio; }
		if (HX_FIELD_EQ(inName,"hx_Game_static_isVsync") ) { return hx_Game_static_isVsync; }
		if (HX_FIELD_EQ(inName,"getAccelerometerValues") ) { return getAccelerometerValues_dyn(); }
		if (HX_FIELD_EQ(inName,"getAnimationController") ) { return getAnimationController_dyn(); }
		if (HX_FIELD_EQ(inName,"schedule_Flt_Lsnr_Hndl") ) { return schedule_Flt_Lsnr_Hndl_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_Game_displayKeyboard") ) { return hx_Game_displayKeyboard; }
		if (HX_FIELD_EQ(inName,"hx_Game_getAIController") ) { return hx_Game_getAIController; }
		if (HX_FIELD_EQ(inName,"hx_Game_getGamepadCount") ) { return hx_Game_getGamepadCount; }
		if (HX_FIELD_EQ(inName,"hx_Game_isCursorVisible") ) { return hx_Game_isCursorVisible; }
		if (HX_FIELD_EQ(inName,"hx_Game_isMouseCaptured") ) { return hx_Game_isMouseCaptured; }
		if (HX_FIELD_EQ(inName,"hx_Game_registerGesture") ) { return hx_Game_registerGesture; }
		if (HX_FIELD_EQ(inName,"hx_Game_static_setVsync") ) { return hx_Game_static_setVsync; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_Game_getAudioListener") ) { return hx_Game_getAudioListener; }
		if (HX_FIELD_EQ(inName,"hx_Game_schedule_Flt_Str") ) { return hx_Game_schedule_Flt_Str; }
		if (HX_FIELD_EQ(inName,"hx_Game_setCursorVisible") ) { return hx_Game_setCursorVisible; }
		if (HX_FIELD_EQ(inName,"hx_Game_setMouseCaptured") ) { return hx_Game_setMouseCaptured; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_Game_unregisterGesture") ) { return hx_Game_unregisterGesture; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_Game_getAudioController") ) { return hx_Game_getAudioController; }
		if (HX_FIELD_EQ(inName,"hx_Game_static_getGameTime") ) { return hx_Game_static_getGameTime; }
		if (HX_FIELD_EQ(inName,"hx_Game_static_getInstance") ) { return hx_Game_static_getInstance; }
		if (HX_FIELD_EQ(inName,"hx_Game_isGestureSupported") ) { return hx_Game_isGestureSupported; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"hx_Game_clear_Int_FltX5_Int") ) { return hx_Game_clear_Int_FltX5_Int; }
		if (HX_FIELD_EQ(inName,"hx_Game_getScriptController") ) { return hx_Game_getScriptController; }
		if (HX_FIELD_EQ(inName,"hx_Game_isGestureRegistered") ) { return hx_Game_isGestureRegistered; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_Game_clear_Int_V4_Flt_Int") ) { return hx_Game_clear_Int_V4_Flt_Int; }
		if (HX_FIELD_EQ(inName,"hx_Game_getPhysicsController") ) { return hx_Game_getPhysicsController; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"hx_Game_static_getAbsoluteTime") ) { return hx_Game_static_getAbsoluteTime; }
		if (HX_FIELD_EQ(inName,"hx_Game_getAccelerometerValues") ) { return hx_Game_getAccelerometerValues; }
		if (HX_FIELD_EQ(inName,"hx_Game_getAnimationController") ) { return hx_Game_getAnimationController; }
		if (HX_FIELD_EQ(inName,"hx_Game_schedule_Flt_Lsnr_Hndl") ) { return hx_Game_schedule_Flt_Lsnr_Hndl; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Game_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_viewport") ) { _viewport=inValue.Cast< ::org::gameplay3d::Rectangle >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"hx_Game_run") ) { hx_Game_run=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hx_Game_exit") ) { hx_Game_exit=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"hx_Game_frame") ) { hx_Game_frame=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Game_pause") ) { hx_Game_pause=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"hx_Game_resume") ) { hx_Game_resume=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hx_Game_canExit") ) { hx_Game_canExit=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hx_Game_getState") ) { hx_Game_getState=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Game_getWidth") ) { hx_Game_getWidth=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Game_hasMouse") ) { hx_Game_hasMouse=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"hx_Game_Construct") ) { hx_Game_Construct=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Game_getConfig") ) { hx_Game_getConfig=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Game_getHeight") ) { hx_Game_getHeight=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Game_launchURL") ) { hx_Game_launchURL=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hx_Game_getGamepad") ) { hx_Game_getGamepad=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hx_Game_getViewport") ) { hx_Game_getViewport=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Game_setViewport") ) { hx_Game_setViewport=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Game_getFrameRate") ) { hx_Game_getFrameRate=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Game_isMultiTouch") ) { hx_Game_isMultiTouch=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hx_Game_isInitialized") ) { hx_Game_isInitialized=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Game_setMultiTouch") ) { hx_Game_setMultiTouch=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Game_getAspectRatio") ) { hx_Game_getAspectRatio=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Game_static_isVsync") ) { hx_Game_static_isVsync=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_Game_displayKeyboard") ) { hx_Game_displayKeyboard=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Game_getAIController") ) { hx_Game_getAIController=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Game_getGamepadCount") ) { hx_Game_getGamepadCount=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Game_isCursorVisible") ) { hx_Game_isCursorVisible=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Game_isMouseCaptured") ) { hx_Game_isMouseCaptured=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Game_registerGesture") ) { hx_Game_registerGesture=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Game_static_setVsync") ) { hx_Game_static_setVsync=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_Game_getAudioListener") ) { hx_Game_getAudioListener=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Game_schedule_Flt_Str") ) { hx_Game_schedule_Flt_Str=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Game_setCursorVisible") ) { hx_Game_setCursorVisible=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Game_setMouseCaptured") ) { hx_Game_setMouseCaptured=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_Game_unregisterGesture") ) { hx_Game_unregisterGesture=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_Game_getAudioController") ) { hx_Game_getAudioController=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Game_static_getGameTime") ) { hx_Game_static_getGameTime=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Game_static_getInstance") ) { hx_Game_static_getInstance=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Game_isGestureSupported") ) { hx_Game_isGestureSupported=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"hx_Game_clear_Int_FltX5_Int") ) { hx_Game_clear_Int_FltX5_Int=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Game_getScriptController") ) { hx_Game_getScriptController=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Game_isGestureRegistered") ) { hx_Game_isGestureRegistered=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_Game_clear_Int_V4_Flt_Int") ) { hx_Game_clear_Int_V4_Flt_Int=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Game_getPhysicsController") ) { hx_Game_getPhysicsController=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"hx_Game_static_getAbsoluteTime") ) { hx_Game_static_getAbsoluteTime=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Game_getAccelerometerValues") ) { hx_Game_getAccelerometerValues=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Game_getAnimationController") ) { hx_Game_getAnimationController=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Game_schedule_Flt_Lsnr_Hndl") ) { hx_Game_schedule_Flt_Lsnr_Hndl=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Game_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_viewport"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("getAbsoluteTime"),
	HX_CSTRING("getGameTime"),
	HX_CSTRING("getInstance"),
	HX_CSTRING("isVsync"),
	HX_CSTRING("setVsync"),
	HX_CSTRING("constructNativeObject"),
	HX_CSTRING("hx_Game_Construct"),
	HX_CSTRING("hx_Game_canExit"),
	HX_CSTRING("hx_Game_clear_Int_V4_Flt_Int"),
	HX_CSTRING("hx_Game_clear_Int_FltX5_Int"),
	HX_CSTRING("hx_Game_displayKeyboard"),
	HX_CSTRING("hx_Game_exit"),
	HX_CSTRING("hx_Game_frame"),
	HX_CSTRING("hx_Game_getAIController"),
	HX_CSTRING("hx_Game_static_getAbsoluteTime"),
	HX_CSTRING("hx_Game_getAccelerometerValues"),
	HX_CSTRING("hx_Game_getAnimationController"),
	HX_CSTRING("hx_Game_getAspectRatio"),
	HX_CSTRING("hx_Game_getAudioController"),
	HX_CSTRING("hx_Game_getAudioListener"),
	HX_CSTRING("hx_Game_getConfig"),
	HX_CSTRING("hx_Game_getFrameRate"),
	HX_CSTRING("hx_Game_static_getGameTime"),
	HX_CSTRING("hx_Game_getGamepad"),
	HX_CSTRING("hx_Game_getGamepadCount"),
	HX_CSTRING("hx_Game_getHeight"),
	HX_CSTRING("hx_Game_static_getInstance"),
	HX_CSTRING("hx_Game_getPhysicsController"),
	HX_CSTRING("hx_Game_getScriptController"),
	HX_CSTRING("hx_Game_getState"),
	HX_CSTRING("hx_Game_getViewport"),
	HX_CSTRING("hx_Game_getWidth"),
	HX_CSTRING("hx_Game_hasMouse"),
	HX_CSTRING("hx_Game_isCursorVisible"),
	HX_CSTRING("hx_Game_isGestureRegistered"),
	HX_CSTRING("hx_Game_isGestureSupported"),
	HX_CSTRING("hx_Game_isInitialized"),
	HX_CSTRING("hx_Game_isMouseCaptured"),
	HX_CSTRING("hx_Game_isMultiTouch"),
	HX_CSTRING("hx_Game_launchURL"),
	HX_CSTRING("hx_Game_static_isVsync"),
	HX_CSTRING("hx_Game_pause"),
	HX_CSTRING("hx_Game_registerGesture"),
	HX_CSTRING("hx_Game_resume"),
	HX_CSTRING("hx_Game_run"),
	HX_CSTRING("hx_Game_schedule_Flt_Lsnr_Hndl"),
	HX_CSTRING("hx_Game_schedule_Flt_Str"),
	HX_CSTRING("hx_Game_setCursorVisible"),
	HX_CSTRING("hx_Game_setMouseCaptured"),
	HX_CSTRING("hx_Game_setMultiTouch"),
	HX_CSTRING("hx_Game_setViewport"),
	HX_CSTRING("hx_Game_static_setVsync"),
	HX_CSTRING("hx_Game_unregisterGesture"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::org::gameplay3d::Rectangle*/ ,(int)offsetof(Game_obj,_viewport),HX_CSTRING("_viewport")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_viewport"),
	HX_CSTRING("initialize"),
	HX_CSTRING("finalize"),
	HX_CSTRING("update"),
	HX_CSTRING("render"),
	HX_CSTRING("canExit"),
	HX_CSTRING("clear_Int_V4_Flt_Int"),
	HX_CSTRING("clear_Int_FltX5_Int"),
	HX_CSTRING("displayKeyboard"),
	HX_CSTRING("exit"),
	HX_CSTRING("frame"),
	HX_CSTRING("gamepadEvent"),
	HX_CSTRING("gesturePinchEvent"),
	HX_CSTRING("gestureSwipeEvent"),
	HX_CSTRING("gestureTapEvent"),
	HX_CSTRING("getAIController"),
	HX_CSTRING("getAccelerometerValues"),
	HX_CSTRING("getAnimationController"),
	HX_CSTRING("getAspectRatio"),
	HX_CSTRING("getAudioController"),
	HX_CSTRING("getAudioListener"),
	HX_CSTRING("getConfig"),
	HX_CSTRING("getFrameRate"),
	HX_CSTRING("getGamepad"),
	HX_CSTRING("getGamepadCount"),
	HX_CSTRING("getHeight"),
	HX_CSTRING("getPhysicsController"),
	HX_CSTRING("getState"),
	HX_CSTRING("getViewport"),
	HX_CSTRING("getWidth"),
	HX_CSTRING("hasMouse"),
	HX_CSTRING("isCursorVisible"),
	HX_CSTRING("isGestureRegistered"),
	HX_CSTRING("isGestureSupported"),
	HX_CSTRING("isInitialized"),
	HX_CSTRING("isMouseCaptured"),
	HX_CSTRING("isMultiTouch"),
	HX_CSTRING("keyEvent"),
	HX_CSTRING("launchURL"),
	HX_CSTRING("menuEvent"),
	HX_CSTRING("mouseEvent"),
	HX_CSTRING("pause"),
	HX_CSTRING("registerGesture"),
	HX_CSTRING("resume"),
	HX_CSTRING("run"),
	HX_CSTRING("schedule_Flt_Lsnr_Hndl"),
	HX_CSTRING("schedule_Flt_Str"),
	HX_CSTRING("setCursorVisible"),
	HX_CSTRING("setMouseCaptured"),
	HX_CSTRING("setMultiTouch"),
	HX_CSTRING("setViewport"),
	HX_CSTRING("touchEvent"),
	HX_CSTRING("unregisterGesture"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Game_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Game_obj::hx_Game_Construct,"hx_Game_Construct");
	HX_MARK_MEMBER_NAME(Game_obj::hx_Game_canExit,"hx_Game_canExit");
	HX_MARK_MEMBER_NAME(Game_obj::hx_Game_clear_Int_V4_Flt_Int,"hx_Game_clear_Int_V4_Flt_Int");
	HX_MARK_MEMBER_NAME(Game_obj::hx_Game_clear_Int_FltX5_Int,"hx_Game_clear_Int_FltX5_Int");
	HX_MARK_MEMBER_NAME(Game_obj::hx_Game_displayKeyboard,"hx_Game_displayKeyboard");
	HX_MARK_MEMBER_NAME(Game_obj::hx_Game_exit,"hx_Game_exit");
	HX_MARK_MEMBER_NAME(Game_obj::hx_Game_frame,"hx_Game_frame");
	HX_MARK_MEMBER_NAME(Game_obj::hx_Game_getAIController,"hx_Game_getAIController");
	HX_MARK_MEMBER_NAME(Game_obj::hx_Game_static_getAbsoluteTime,"hx_Game_static_getAbsoluteTime");
	HX_MARK_MEMBER_NAME(Game_obj::hx_Game_getAccelerometerValues,"hx_Game_getAccelerometerValues");
	HX_MARK_MEMBER_NAME(Game_obj::hx_Game_getAnimationController,"hx_Game_getAnimationController");
	HX_MARK_MEMBER_NAME(Game_obj::hx_Game_getAspectRatio,"hx_Game_getAspectRatio");
	HX_MARK_MEMBER_NAME(Game_obj::hx_Game_getAudioController,"hx_Game_getAudioController");
	HX_MARK_MEMBER_NAME(Game_obj::hx_Game_getAudioListener,"hx_Game_getAudioListener");
	HX_MARK_MEMBER_NAME(Game_obj::hx_Game_getConfig,"hx_Game_getConfig");
	HX_MARK_MEMBER_NAME(Game_obj::hx_Game_getFrameRate,"hx_Game_getFrameRate");
	HX_MARK_MEMBER_NAME(Game_obj::hx_Game_static_getGameTime,"hx_Game_static_getGameTime");
	HX_MARK_MEMBER_NAME(Game_obj::hx_Game_getGamepad,"hx_Game_getGamepad");
	HX_MARK_MEMBER_NAME(Game_obj::hx_Game_getGamepadCount,"hx_Game_getGamepadCount");
	HX_MARK_MEMBER_NAME(Game_obj::hx_Game_getHeight,"hx_Game_getHeight");
	HX_MARK_MEMBER_NAME(Game_obj::hx_Game_static_getInstance,"hx_Game_static_getInstance");
	HX_MARK_MEMBER_NAME(Game_obj::hx_Game_getPhysicsController,"hx_Game_getPhysicsController");
	HX_MARK_MEMBER_NAME(Game_obj::hx_Game_getScriptController,"hx_Game_getScriptController");
	HX_MARK_MEMBER_NAME(Game_obj::hx_Game_getState,"hx_Game_getState");
	HX_MARK_MEMBER_NAME(Game_obj::hx_Game_getViewport,"hx_Game_getViewport");
	HX_MARK_MEMBER_NAME(Game_obj::hx_Game_getWidth,"hx_Game_getWidth");
	HX_MARK_MEMBER_NAME(Game_obj::hx_Game_hasMouse,"hx_Game_hasMouse");
	HX_MARK_MEMBER_NAME(Game_obj::hx_Game_isCursorVisible,"hx_Game_isCursorVisible");
	HX_MARK_MEMBER_NAME(Game_obj::hx_Game_isGestureRegistered,"hx_Game_isGestureRegistered");
	HX_MARK_MEMBER_NAME(Game_obj::hx_Game_isGestureSupported,"hx_Game_isGestureSupported");
	HX_MARK_MEMBER_NAME(Game_obj::hx_Game_isInitialized,"hx_Game_isInitialized");
	HX_MARK_MEMBER_NAME(Game_obj::hx_Game_isMouseCaptured,"hx_Game_isMouseCaptured");
	HX_MARK_MEMBER_NAME(Game_obj::hx_Game_isMultiTouch,"hx_Game_isMultiTouch");
	HX_MARK_MEMBER_NAME(Game_obj::hx_Game_launchURL,"hx_Game_launchURL");
	HX_MARK_MEMBER_NAME(Game_obj::hx_Game_static_isVsync,"hx_Game_static_isVsync");
	HX_MARK_MEMBER_NAME(Game_obj::hx_Game_pause,"hx_Game_pause");
	HX_MARK_MEMBER_NAME(Game_obj::hx_Game_registerGesture,"hx_Game_registerGesture");
	HX_MARK_MEMBER_NAME(Game_obj::hx_Game_resume,"hx_Game_resume");
	HX_MARK_MEMBER_NAME(Game_obj::hx_Game_run,"hx_Game_run");
	HX_MARK_MEMBER_NAME(Game_obj::hx_Game_schedule_Flt_Lsnr_Hndl,"hx_Game_schedule_Flt_Lsnr_Hndl");
	HX_MARK_MEMBER_NAME(Game_obj::hx_Game_schedule_Flt_Str,"hx_Game_schedule_Flt_Str");
	HX_MARK_MEMBER_NAME(Game_obj::hx_Game_setCursorVisible,"hx_Game_setCursorVisible");
	HX_MARK_MEMBER_NAME(Game_obj::hx_Game_setMouseCaptured,"hx_Game_setMouseCaptured");
	HX_MARK_MEMBER_NAME(Game_obj::hx_Game_setMultiTouch,"hx_Game_setMultiTouch");
	HX_MARK_MEMBER_NAME(Game_obj::hx_Game_setViewport,"hx_Game_setViewport");
	HX_MARK_MEMBER_NAME(Game_obj::hx_Game_static_setVsync,"hx_Game_static_setVsync");
	HX_MARK_MEMBER_NAME(Game_obj::hx_Game_unregisterGesture,"hx_Game_unregisterGesture");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Game_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Game_obj::hx_Game_Construct,"hx_Game_Construct");
	HX_VISIT_MEMBER_NAME(Game_obj::hx_Game_canExit,"hx_Game_canExit");
	HX_VISIT_MEMBER_NAME(Game_obj::hx_Game_clear_Int_V4_Flt_Int,"hx_Game_clear_Int_V4_Flt_Int");
	HX_VISIT_MEMBER_NAME(Game_obj::hx_Game_clear_Int_FltX5_Int,"hx_Game_clear_Int_FltX5_Int");
	HX_VISIT_MEMBER_NAME(Game_obj::hx_Game_displayKeyboard,"hx_Game_displayKeyboard");
	HX_VISIT_MEMBER_NAME(Game_obj::hx_Game_exit,"hx_Game_exit");
	HX_VISIT_MEMBER_NAME(Game_obj::hx_Game_frame,"hx_Game_frame");
	HX_VISIT_MEMBER_NAME(Game_obj::hx_Game_getAIController,"hx_Game_getAIController");
	HX_VISIT_MEMBER_NAME(Game_obj::hx_Game_static_getAbsoluteTime,"hx_Game_static_getAbsoluteTime");
	HX_VISIT_MEMBER_NAME(Game_obj::hx_Game_getAccelerometerValues,"hx_Game_getAccelerometerValues");
	HX_VISIT_MEMBER_NAME(Game_obj::hx_Game_getAnimationController,"hx_Game_getAnimationController");
	HX_VISIT_MEMBER_NAME(Game_obj::hx_Game_getAspectRatio,"hx_Game_getAspectRatio");
	HX_VISIT_MEMBER_NAME(Game_obj::hx_Game_getAudioController,"hx_Game_getAudioController");
	HX_VISIT_MEMBER_NAME(Game_obj::hx_Game_getAudioListener,"hx_Game_getAudioListener");
	HX_VISIT_MEMBER_NAME(Game_obj::hx_Game_getConfig,"hx_Game_getConfig");
	HX_VISIT_MEMBER_NAME(Game_obj::hx_Game_getFrameRate,"hx_Game_getFrameRate");
	HX_VISIT_MEMBER_NAME(Game_obj::hx_Game_static_getGameTime,"hx_Game_static_getGameTime");
	HX_VISIT_MEMBER_NAME(Game_obj::hx_Game_getGamepad,"hx_Game_getGamepad");
	HX_VISIT_MEMBER_NAME(Game_obj::hx_Game_getGamepadCount,"hx_Game_getGamepadCount");
	HX_VISIT_MEMBER_NAME(Game_obj::hx_Game_getHeight,"hx_Game_getHeight");
	HX_VISIT_MEMBER_NAME(Game_obj::hx_Game_static_getInstance,"hx_Game_static_getInstance");
	HX_VISIT_MEMBER_NAME(Game_obj::hx_Game_getPhysicsController,"hx_Game_getPhysicsController");
	HX_VISIT_MEMBER_NAME(Game_obj::hx_Game_getScriptController,"hx_Game_getScriptController");
	HX_VISIT_MEMBER_NAME(Game_obj::hx_Game_getState,"hx_Game_getState");
	HX_VISIT_MEMBER_NAME(Game_obj::hx_Game_getViewport,"hx_Game_getViewport");
	HX_VISIT_MEMBER_NAME(Game_obj::hx_Game_getWidth,"hx_Game_getWidth");
	HX_VISIT_MEMBER_NAME(Game_obj::hx_Game_hasMouse,"hx_Game_hasMouse");
	HX_VISIT_MEMBER_NAME(Game_obj::hx_Game_isCursorVisible,"hx_Game_isCursorVisible");
	HX_VISIT_MEMBER_NAME(Game_obj::hx_Game_isGestureRegistered,"hx_Game_isGestureRegistered");
	HX_VISIT_MEMBER_NAME(Game_obj::hx_Game_isGestureSupported,"hx_Game_isGestureSupported");
	HX_VISIT_MEMBER_NAME(Game_obj::hx_Game_isInitialized,"hx_Game_isInitialized");
	HX_VISIT_MEMBER_NAME(Game_obj::hx_Game_isMouseCaptured,"hx_Game_isMouseCaptured");
	HX_VISIT_MEMBER_NAME(Game_obj::hx_Game_isMultiTouch,"hx_Game_isMultiTouch");
	HX_VISIT_MEMBER_NAME(Game_obj::hx_Game_launchURL,"hx_Game_launchURL");
	HX_VISIT_MEMBER_NAME(Game_obj::hx_Game_static_isVsync,"hx_Game_static_isVsync");
	HX_VISIT_MEMBER_NAME(Game_obj::hx_Game_pause,"hx_Game_pause");
	HX_VISIT_MEMBER_NAME(Game_obj::hx_Game_registerGesture,"hx_Game_registerGesture");
	HX_VISIT_MEMBER_NAME(Game_obj::hx_Game_resume,"hx_Game_resume");
	HX_VISIT_MEMBER_NAME(Game_obj::hx_Game_run,"hx_Game_run");
	HX_VISIT_MEMBER_NAME(Game_obj::hx_Game_schedule_Flt_Lsnr_Hndl,"hx_Game_schedule_Flt_Lsnr_Hndl");
	HX_VISIT_MEMBER_NAME(Game_obj::hx_Game_schedule_Flt_Str,"hx_Game_schedule_Flt_Str");
	HX_VISIT_MEMBER_NAME(Game_obj::hx_Game_setCursorVisible,"hx_Game_setCursorVisible");
	HX_VISIT_MEMBER_NAME(Game_obj::hx_Game_setMouseCaptured,"hx_Game_setMouseCaptured");
	HX_VISIT_MEMBER_NAME(Game_obj::hx_Game_setMultiTouch,"hx_Game_setMultiTouch");
	HX_VISIT_MEMBER_NAME(Game_obj::hx_Game_setViewport,"hx_Game_setViewport");
	HX_VISIT_MEMBER_NAME(Game_obj::hx_Game_static_setVsync,"hx_Game_static_setVsync");
	HX_VISIT_MEMBER_NAME(Game_obj::hx_Game_unregisterGesture,"hx_Game_unregisterGesture");
};

#endif

Class Game_obj::__mClass;

void Game_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.Game"), hx::TCanCast< Game_obj> ,sStaticFields,sMemberFields,
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

void Game_obj::__boot()
{
	hx_Game_Construct= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Game >(),HX_CSTRING("Construct"),(int)-1);
	hx_Game_canExit= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Game >(),HX_CSTRING("canExit"),(int)1);
	hx_Game_clear_Int_V4_Flt_Int= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Game >(),HX_CSTRING("clear_Int_V4_Flt_Int"),(int)5);
	hx_Game_clear_Int_FltX5_Int= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Game >(),HX_CSTRING("clear_Int_FltX5_Int"),(int)-1);
	hx_Game_displayKeyboard= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Game >(),HX_CSTRING("displayKeyboard"),(int)2);
	hx_Game_exit= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Game >(),HX_CSTRING("exit"),(int)1);
	hx_Game_frame= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Game >(),HX_CSTRING("frame"),(int)1);
	hx_Game_getAIController= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Game >(),HX_CSTRING("getAIController"),(int)1);
	hx_Game_static_getAbsoluteTime= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Game >(),HX_CSTRING("static_getAbsoluteTime"),(int)0);
	hx_Game_getAccelerometerValues= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Game >(),HX_CSTRING("getAccelerometerValues"),(int)3);
	hx_Game_getAnimationController= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Game >(),HX_CSTRING("getAnimationController"),(int)1);
	hx_Game_getAspectRatio= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Game >(),HX_CSTRING("getAspectRatio"),(int)1);
	hx_Game_getAudioController= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Game >(),HX_CSTRING("getAudioController"),(int)1);
	hx_Game_getAudioListener= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Game >(),HX_CSTRING("getAudioListener"),(int)1);
	hx_Game_getConfig= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Game >(),HX_CSTRING("getConfig"),(int)1);
	hx_Game_getFrameRate= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Game >(),HX_CSTRING("getFrameRate"),(int)1);
	hx_Game_static_getGameTime= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Game >(),HX_CSTRING("static_getGameTime"),(int)0);
	hx_Game_getGamepad= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Game >(),HX_CSTRING("getGamepad"),(int)2);
	hx_Game_getGamepadCount= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Game >(),HX_CSTRING("getGamepadCount"),(int)1);
	hx_Game_getHeight= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Game >(),HX_CSTRING("getHeight"),(int)1);
	hx_Game_static_getInstance= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Game >(),HX_CSTRING("static_getInstance"),(int)0);
	hx_Game_getPhysicsController= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Game >(),HX_CSTRING("getPhysicsController"),(int)1);
	hx_Game_getScriptController= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Game >(),HX_CSTRING("getScriptController"),(int)1);
	hx_Game_getState= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Game >(),HX_CSTRING("getState"),(int)1);
	hx_Game_getViewport= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Game >(),HX_CSTRING("getViewport"),(int)1);
	hx_Game_getWidth= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Game >(),HX_CSTRING("getWidth"),(int)1);
	hx_Game_hasMouse= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Game >(),HX_CSTRING("hasMouse"),(int)1);
	hx_Game_isCursorVisible= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Game >(),HX_CSTRING("isCursorVisible"),(int)1);
	hx_Game_isGestureRegistered= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Game >(),HX_CSTRING("isGestureRegistered"),(int)2);
	hx_Game_isGestureSupported= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Game >(),HX_CSTRING("isGestureSupported"),(int)2);
	hx_Game_isInitialized= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Game >(),HX_CSTRING("isInitialized"),(int)1);
	hx_Game_isMouseCaptured= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Game >(),HX_CSTRING("isMouseCaptured"),(int)1);
	hx_Game_isMultiTouch= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Game >(),HX_CSTRING("isMultiTouch"),(int)1);
	hx_Game_launchURL= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Game >(),HX_CSTRING("launchURL"),(int)2);
	hx_Game_static_isVsync= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Game >(),HX_CSTRING("static_isVsync"),(int)0);
	hx_Game_pause= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Game >(),HX_CSTRING("pause"),(int)1);
	hx_Game_registerGesture= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Game >(),HX_CSTRING("registerGesture"),(int)2);
	hx_Game_resume= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Game >(),HX_CSTRING("resume"),(int)1);
	hx_Game_run= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Game >(),HX_CSTRING("run"),(int)1);
	hx_Game_schedule_Flt_Lsnr_Hndl= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Game >(),HX_CSTRING("schedule_Flt_Lsnr_Hndl"),(int)4);
	hx_Game_schedule_Flt_Str= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Game >(),HX_CSTRING("schedule_Flt_Str"),(int)3);
	hx_Game_setCursorVisible= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Game >(),HX_CSTRING("setCursorVisible"),(int)2);
	hx_Game_setMouseCaptured= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Game >(),HX_CSTRING("setMouseCaptured"),(int)2);
	hx_Game_setMultiTouch= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Game >(),HX_CSTRING("setMultiTouch"),(int)2);
	hx_Game_setViewport= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Game >(),HX_CSTRING("setViewport"),(int)2);
	hx_Game_static_setVsync= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Game >(),HX_CSTRING("static_setVsync"),(int)1);
	hx_Game_unregisterGesture= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Game >(),HX_CSTRING("unregisterGesture"),(int)2);
}

} // end namespace org
} // end namespace gameplay3d
