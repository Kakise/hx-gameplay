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
#ifndef INCLUDED_org_gameplay3d_AudioListener
#include <org/gameplay3d/AudioListener.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Camera
#include <org/gameplay3d/Camera.h>
#endif
#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Ref
#include <org/gameplay3d/Ref.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Transform_Listener
#include <org/gameplay3d/Transform_Listener.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Vector3
#include <org/gameplay3d/Vector3.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IVector3
#include <org/gameplay3d/immutable/IVector3.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_INativeBinding
#include <org/gameplay3d/intern/INativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_NativeBinding
#include <org/gameplay3d/intern/NativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_impl_Transform_ListenerImpl
#include <org/gameplay3d/intern/impl/Transform_ListenerImpl.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_NativeInterface
#include <org/gameplay3d/util/NativeInterface.h>
#endif
namespace org{
namespace gameplay3d{

Void AudioListener_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.AudioListener","new",0x9213d90f,"org.gameplay3d.AudioListener.new","org/gameplay3d/AudioListener.hx",13,0x7ff2eae1)
HX_STACK_THIS(this)
HX_STACK_ARG(nativeObjectInitializer,"nativeObjectInitializer")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(13)
	super::__construct(nativeObjectInitializer,nativeObjectInitializerParams);
}
;
	return null();
}

//AudioListener_obj::~AudioListener_obj() { }

Dynamic AudioListener_obj::__CreateEmpty() { return  new AudioListener_obj; }
hx::ObjectPtr< AudioListener_obj > AudioListener_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< AudioListener_obj > result = new AudioListener_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic AudioListener_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AudioListener_obj > result = new AudioListener_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::org::gameplay3d::Camera AudioListener_obj::getCamera( ){
	HX_STACK_FRAME("org.gameplay3d.AudioListener","getCamera",0xae8505ca,"org.gameplay3d.AudioListener.getCamera","org/gameplay3d/AudioListener.hx",27,0x7ff2eae1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(27)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Camera >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(27)
	Dynamic nativeObject = ::org::gameplay3d::AudioListener_obj::hx_AudioListener_getCamera(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(27)
	if (((nativeObject == null()))){
		HX_STACK_LINE(27)
		return null();
	}
	else{
		HX_STACK_LINE(27)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(27)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(27)
			::org::gameplay3d::Camera result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(27)
			if (((result == null()))){
				HX_STACK_LINE(27)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(27)
				::org::gameplay3d::Camera _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(27)
				result = _g;
				HX_STACK_LINE(27)
				ref->set(result);
			}
			HX_STACK_LINE(27)
			return result;
		}
		else{
			HX_STACK_LINE(27)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(27)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(27)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioListener_obj,getCamera,return )

Float AudioListener_obj::getGain( ){
	HX_STACK_FRAME("org.gameplay3d.AudioListener","getGain",0x80652c64,"org.gameplay3d.AudioListener.getGain","org/gameplay3d/AudioListener.hx",33,0x7ff2eae1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(33)
	return ::org::gameplay3d::AudioListener_obj::hx_AudioListener_getGain(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(AudioListener_obj,getGain,return )

Float AudioListener_obj::getOrientation( ){
	HX_STACK_FRAME("org.gameplay3d.AudioListener","getOrientation",0xb926298b,"org.gameplay3d.AudioListener.getOrientation","org/gameplay3d/AudioListener.hx",45,0x7ff2eae1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(45)
	return ::org::gameplay3d::AudioListener_obj::hx_AudioListener_getOrientation(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(AudioListener_obj,getOrientation,return )

::org::gameplay3d::immutable::IVector3 AudioListener_obj::getOrientationForward( ){
	HX_STACK_FRAME("org.gameplay3d.AudioListener","getOrientationForward",0x2d60f77a,"org.gameplay3d.AudioListener.getOrientationForward","org/gameplay3d/AudioListener.hx",51,0x7ff2eae1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_orientationForward == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(51)
			Dynamic nativeObject = ::org::gameplay3d::AudioListener_obj::hx_AudioListener_getOrientationForward(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::Vector3 result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Vector3 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return this->_orientationForward = _g1;
	}
	else{
		HX_STACK_LINE(51)
		Dynamic _g2 = ::org::gameplay3d::AudioListener_obj::hx_AudioListener_getOrientationForward(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g3 = this->_orientationForward->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_orientationForward = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioListener_obj,getOrientationForward,return )

::org::gameplay3d::immutable::IVector3 AudioListener_obj::getOrientationUp( ){
	HX_STACK_FRAME("org.gameplay3d.AudioListener","getOrientationUp",0xee2c2cc6,"org.gameplay3d.AudioListener.getOrientationUp","org/gameplay3d/AudioListener.hx",57,0x7ff2eae1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_orientationUp == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(57)
			Dynamic nativeObject = ::org::gameplay3d::AudioListener_obj::hx_AudioListener_getOrientationUp(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::Vector3 result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Vector3 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return this->_orientationUp = _g1;
	}
	else{
		HX_STACK_LINE(57)
		Dynamic _g2 = ::org::gameplay3d::AudioListener_obj::hx_AudioListener_getOrientationUp(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g3 = this->_orientationUp->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_orientationUp = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioListener_obj,getOrientationUp,return )

::org::gameplay3d::immutable::IVector3 AudioListener_obj::getPosition( ){
	HX_STACK_FRAME("org.gameplay3d.AudioListener","getPosition",0x00fd330e,"org.gameplay3d.AudioListener.getPosition","org/gameplay3d/AudioListener.hx",63,0x7ff2eae1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_position == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(63)
			Dynamic nativeObject = ::org::gameplay3d::AudioListener_obj::hx_AudioListener_getPosition(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::Vector3 result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Vector3 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return this->_position = _g1;
	}
	else{
		HX_STACK_LINE(63)
		Dynamic _g2 = ::org::gameplay3d::AudioListener_obj::hx_AudioListener_getPosition(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g3 = this->_position->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_position = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioListener_obj,getPosition,return )

::org::gameplay3d::immutable::IVector3 AudioListener_obj::getVelocity( ){
	HX_STACK_FRAME("org.gameplay3d.AudioListener","getVelocity",0x55009482,"org.gameplay3d.AudioListener.getVelocity","org/gameplay3d/AudioListener.hx",69,0x7ff2eae1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_velocity == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(69)
			Dynamic nativeObject = ::org::gameplay3d::AudioListener_obj::hx_AudioListener_getVelocity(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::Vector3 result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Vector3 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return this->_velocity = _g1;
	}
	else{
		HX_STACK_LINE(69)
		Dynamic _g2 = ::org::gameplay3d::AudioListener_obj::hx_AudioListener_getVelocity(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g3 = this->_velocity->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_velocity = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioListener_obj,getVelocity,return )

Void AudioListener_obj::setCamera( ::org::gameplay3d::Camera camera){
{
		HX_STACK_FRAME("org.gameplay3d.AudioListener","setCamera",0x91d5f1d6,"org.gameplay3d.AudioListener.setCamera","org/gameplay3d/AudioListener.hx",75,0x7ff2eae1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(camera,"camera")
		HX_STACK_LINE(75)
		::org::gameplay3d::AudioListener_obj::hx_AudioListener_setCamera(this->nativeObject,(  (((camera == null()))) ? Dynamic(null()) : Dynamic(camera->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AudioListener_obj,setCamera,(void))

Void AudioListener_obj::setGain( Float gain){
{
		HX_STACK_FRAME("org.gameplay3d.AudioListener","setGain",0x7366bd70,"org.gameplay3d.AudioListener.setGain","org/gameplay3d/AudioListener.hx",81,0x7ff2eae1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gain,"gain")
		HX_STACK_LINE(81)
		::org::gameplay3d::AudioListener_obj::hx_AudioListener_setGain(this->nativeObject,gain);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AudioListener_obj,setGain,(void))

Void AudioListener_obj::setOrientation_V3X2( ::org::gameplay3d::immutable::IVector3 forward,::org::gameplay3d::immutable::IVector3 up){
{
		HX_STACK_FRAME("org.gameplay3d.AudioListener","setOrientation_V3X2",0xbb2dc6b7,"org.gameplay3d.AudioListener.setOrientation_V3X2","org/gameplay3d/AudioListener.hx",87,0x7ff2eae1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(forward,"forward")
		HX_STACK_ARG(up,"up")
		HX_STACK_LINE(87)
		::org::gameplay3d::AudioListener_obj::hx_AudioListener_setOrientation_V3X2(this->nativeObject,(  (((forward == null()))) ? Dynamic(null()) : Dynamic(forward->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((up == null()))) ? Dynamic(null()) : Dynamic(up->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AudioListener_obj,setOrientation_V3X2,(void))

Void AudioListener_obj::setOrientation_FltX6( Float forwardX,Float forwardY,Float forwardZ,Float upX,Float upY,Float upZ){
{
		HX_STACK_FRAME("org.gameplay3d.AudioListener","setOrientation_FltX6",0xfc395b2c,"org.gameplay3d.AudioListener.setOrientation_FltX6","org/gameplay3d/AudioListener.hx",93,0x7ff2eae1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(forwardX,"forwardX")
		HX_STACK_ARG(forwardY,"forwardY")
		HX_STACK_ARG(forwardZ,"forwardZ")
		HX_STACK_ARG(upX,"upX")
		HX_STACK_ARG(upY,"upY")
		HX_STACK_ARG(upZ,"upZ")
		HX_STACK_LINE(93)
		::org::gameplay3d::AudioListener_obj::hx_AudioListener_setOrientation_FltX6(this->nativeObject,forwardX,forwardY,forwardZ,upX,upY,upZ);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(AudioListener_obj,setOrientation_FltX6,(void))

Void AudioListener_obj::setPosition_V3( ::org::gameplay3d::immutable::IVector3 position){
{
		HX_STACK_FRAME("org.gameplay3d.AudioListener","setPosition_V3",0xdaadf362,"org.gameplay3d.AudioListener.setPosition_V3","org/gameplay3d/AudioListener.hx",99,0x7ff2eae1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(position,"position")
		HX_STACK_LINE(99)
		::org::gameplay3d::AudioListener_obj::hx_AudioListener_setPosition_V3(this->nativeObject,(  (((position == null()))) ? Dynamic(null()) : Dynamic(position->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AudioListener_obj,setPosition_V3,(void))

Void AudioListener_obj::setPosition_FltX3( Float x,Float y,Float z){
{
		HX_STACK_FRAME("org.gameplay3d.AudioListener","setPosition_FltX3",0x1eaf0984,"org.gameplay3d.AudioListener.setPosition_FltX3","org/gameplay3d/AudioListener.hx",105,0x7ff2eae1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(105)
		::org::gameplay3d::AudioListener_obj::hx_AudioListener_setPosition_FltX3(this->nativeObject,x,y,z);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(AudioListener_obj,setPosition_FltX3,(void))

Void AudioListener_obj::setVelocity_V3( ::org::gameplay3d::immutable::IVector3 velocity){
{
		HX_STACK_FRAME("org.gameplay3d.AudioListener","setVelocity_V3",0x14e9f26e,"org.gameplay3d.AudioListener.setVelocity_V3","org/gameplay3d/AudioListener.hx",111,0x7ff2eae1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(velocity,"velocity")
		HX_STACK_LINE(111)
		::org::gameplay3d::AudioListener_obj::hx_AudioListener_setVelocity_V3(this->nativeObject,(  (((velocity == null()))) ? Dynamic(null()) : Dynamic(velocity->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AudioListener_obj,setVelocity_V3,(void))

Void AudioListener_obj::setVelocity_FltX3( Float x,Float y,Float z){
{
		HX_STACK_FRAME("org.gameplay3d.AudioListener","setVelocity_FltX3",0x50aaf9f8,"org.gameplay3d.AudioListener.setVelocity_FltX3","org/gameplay3d/AudioListener.hx",117,0x7ff2eae1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(117)
		::org::gameplay3d::AudioListener_obj::hx_AudioListener_setVelocity_FltX3(this->nativeObject,x,y,z);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(AudioListener_obj,setVelocity_FltX3,(void))

::org::gameplay3d::AudioListener AudioListener_obj::getInstance( ){
	HX_STACK_FRAME("org.gameplay3d.AudioListener","getInstance",0x8fe3b1fa,"org.gameplay3d.AudioListener.getInstance","org/gameplay3d/AudioListener.hx",39,0x7ff2eae1)
	HX_STACK_LINE(39)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::AudioListener >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(39)
	Dynamic nativeObject = ::org::gameplay3d::AudioListener_obj::hx_AudioListener_static_getInstance();		HX_STACK_VAR(nativeObject,"nativeObject");
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
			::org::gameplay3d::AudioListener result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(39)
			if (((result == null()))){
				HX_STACK_LINE(39)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(39)
				::org::gameplay3d::AudioListener _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AudioListener_obj,getInstance,return )

Dynamic AudioListener_obj::hx_AudioListener_getCamera;

Dynamic AudioListener_obj::hx_AudioListener_getGain;

Dynamic AudioListener_obj::hx_AudioListener_static_getInstance;

Dynamic AudioListener_obj::hx_AudioListener_getOrientation;

Dynamic AudioListener_obj::hx_AudioListener_getOrientationForward;

Dynamic AudioListener_obj::hx_AudioListener_getOrientationUp;

Dynamic AudioListener_obj::hx_AudioListener_getPosition;

Dynamic AudioListener_obj::hx_AudioListener_getVelocity;

Dynamic AudioListener_obj::hx_AudioListener_setCamera;

Dynamic AudioListener_obj::hx_AudioListener_setGain;

Dynamic AudioListener_obj::hx_AudioListener_setOrientation_V3X2;

Dynamic AudioListener_obj::hx_AudioListener_setOrientation_FltX6;

Dynamic AudioListener_obj::hx_AudioListener_setPosition_V3;

Dynamic AudioListener_obj::hx_AudioListener_setPosition_FltX3;

Dynamic AudioListener_obj::hx_AudioListener_setVelocity_V3;

Dynamic AudioListener_obj::hx_AudioListener_setVelocity_FltX3;


AudioListener_obj::AudioListener_obj()
{
}

void AudioListener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AudioListener);
	HX_MARK_MEMBER_NAME(_orientationForward,"_orientationForward");
	HX_MARK_MEMBER_NAME(_orientationUp,"_orientationUp");
	HX_MARK_MEMBER_NAME(_position,"_position");
	HX_MARK_MEMBER_NAME(_velocity,"_velocity");
	::org::gameplay3d::intern::NativeBinding_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AudioListener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_orientationForward,"_orientationForward");
	HX_VISIT_MEMBER_NAME(_orientationUp,"_orientationUp");
	HX_VISIT_MEMBER_NAME(_position,"_position");
	HX_VISIT_MEMBER_NAME(_velocity,"_velocity");
	::org::gameplay3d::intern::NativeBinding_obj::__Visit(HX_VISIT_ARG);
}

Dynamic AudioListener_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getGain") ) { return getGain_dyn(); }
		if (HX_FIELD_EQ(inName,"setGain") ) { return setGain_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_position") ) { return _position; }
		if (HX_FIELD_EQ(inName,"_velocity") ) { return _velocity; }
		if (HX_FIELD_EQ(inName,"getCamera") ) { return getCamera_dyn(); }
		if (HX_FIELD_EQ(inName,"setCamera") ) { return setCamera_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getInstance") ) { return getInstance_dyn(); }
		if (HX_FIELD_EQ(inName,"getPosition") ) { return getPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"getVelocity") ) { return getVelocity_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_orientationUp") ) { return _orientationUp; }
		if (HX_FIELD_EQ(inName,"getOrientation") ) { return getOrientation_dyn(); }
		if (HX_FIELD_EQ(inName,"setPosition_V3") ) { return setPosition_V3_dyn(); }
		if (HX_FIELD_EQ(inName,"setVelocity_V3") ) { return setVelocity_V3_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getOrientationUp") ) { return getOrientationUp_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"setPosition_FltX3") ) { return setPosition_FltX3_dyn(); }
		if (HX_FIELD_EQ(inName,"setVelocity_FltX3") ) { return setVelocity_FltX3_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_orientationForward") ) { return _orientationForward; }
		if (HX_FIELD_EQ(inName,"setOrientation_V3X2") ) { return setOrientation_V3X2_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"setOrientation_FltX6") ) { return setOrientation_FltX6_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"getOrientationForward") ) { return getOrientationForward_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_AudioListener_getGain") ) { return hx_AudioListener_getGain; }
		if (HX_FIELD_EQ(inName,"hx_AudioListener_setGain") ) { return hx_AudioListener_setGain; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_AudioListener_getCamera") ) { return hx_AudioListener_getCamera; }
		if (HX_FIELD_EQ(inName,"hx_AudioListener_setCamera") ) { return hx_AudioListener_setCamera; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_AudioListener_getPosition") ) { return hx_AudioListener_getPosition; }
		if (HX_FIELD_EQ(inName,"hx_AudioListener_getVelocity") ) { return hx_AudioListener_getVelocity; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"hx_AudioListener_getOrientation") ) { return hx_AudioListener_getOrientation; }
		if (HX_FIELD_EQ(inName,"hx_AudioListener_setPosition_V3") ) { return hx_AudioListener_setPosition_V3; }
		if (HX_FIELD_EQ(inName,"hx_AudioListener_setVelocity_V3") ) { return hx_AudioListener_setVelocity_V3; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"hx_AudioListener_getOrientationUp") ) { return hx_AudioListener_getOrientationUp; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"hx_AudioListener_setPosition_FltX3") ) { return hx_AudioListener_setPosition_FltX3; }
		if (HX_FIELD_EQ(inName,"hx_AudioListener_setVelocity_FltX3") ) { return hx_AudioListener_setVelocity_FltX3; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"hx_AudioListener_static_getInstance") ) { return hx_AudioListener_static_getInstance; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"hx_AudioListener_setOrientation_V3X2") ) { return hx_AudioListener_setOrientation_V3X2; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"hx_AudioListener_setOrientation_FltX6") ) { return hx_AudioListener_setOrientation_FltX6; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"hx_AudioListener_getOrientationForward") ) { return hx_AudioListener_getOrientationForward; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AudioListener_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_position") ) { _position=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_velocity") ) { _velocity=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_orientationUp") ) { _orientationUp=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_orientationForward") ) { _orientationForward=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_AudioListener_getGain") ) { hx_AudioListener_getGain=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_AudioListener_setGain") ) { hx_AudioListener_setGain=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_AudioListener_getCamera") ) { hx_AudioListener_getCamera=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_AudioListener_setCamera") ) { hx_AudioListener_setCamera=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_AudioListener_getPosition") ) { hx_AudioListener_getPosition=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_AudioListener_getVelocity") ) { hx_AudioListener_getVelocity=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"hx_AudioListener_getOrientation") ) { hx_AudioListener_getOrientation=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_AudioListener_setPosition_V3") ) { hx_AudioListener_setPosition_V3=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_AudioListener_setVelocity_V3") ) { hx_AudioListener_setVelocity_V3=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"hx_AudioListener_getOrientationUp") ) { hx_AudioListener_getOrientationUp=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"hx_AudioListener_setPosition_FltX3") ) { hx_AudioListener_setPosition_FltX3=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_AudioListener_setVelocity_FltX3") ) { hx_AudioListener_setVelocity_FltX3=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"hx_AudioListener_static_getInstance") ) { hx_AudioListener_static_getInstance=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"hx_AudioListener_setOrientation_V3X2") ) { hx_AudioListener_setOrientation_V3X2=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"hx_AudioListener_setOrientation_FltX6") ) { hx_AudioListener_setOrientation_FltX6=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"hx_AudioListener_getOrientationForward") ) { hx_AudioListener_getOrientationForward=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AudioListener_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_orientationForward"));
	outFields->push(HX_CSTRING("_orientationUp"));
	outFields->push(HX_CSTRING("_position"));
	outFields->push(HX_CSTRING("_velocity"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("getInstance"),
	HX_CSTRING("hx_AudioListener_getCamera"),
	HX_CSTRING("hx_AudioListener_getGain"),
	HX_CSTRING("hx_AudioListener_static_getInstance"),
	HX_CSTRING("hx_AudioListener_getOrientation"),
	HX_CSTRING("hx_AudioListener_getOrientationForward"),
	HX_CSTRING("hx_AudioListener_getOrientationUp"),
	HX_CSTRING("hx_AudioListener_getPosition"),
	HX_CSTRING("hx_AudioListener_getVelocity"),
	HX_CSTRING("hx_AudioListener_setCamera"),
	HX_CSTRING("hx_AudioListener_setGain"),
	HX_CSTRING("hx_AudioListener_setOrientation_V3X2"),
	HX_CSTRING("hx_AudioListener_setOrientation_FltX6"),
	HX_CSTRING("hx_AudioListener_setPosition_V3"),
	HX_CSTRING("hx_AudioListener_setPosition_FltX3"),
	HX_CSTRING("hx_AudioListener_setVelocity_V3"),
	HX_CSTRING("hx_AudioListener_setVelocity_FltX3"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(AudioListener_obj,_orientationForward),HX_CSTRING("_orientationForward")},
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(AudioListener_obj,_orientationUp),HX_CSTRING("_orientationUp")},
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(AudioListener_obj,_position),HX_CSTRING("_position")},
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(AudioListener_obj,_velocity),HX_CSTRING("_velocity")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_orientationForward"),
	HX_CSTRING("_orientationUp"),
	HX_CSTRING("_position"),
	HX_CSTRING("_velocity"),
	HX_CSTRING("getCamera"),
	HX_CSTRING("getGain"),
	HX_CSTRING("getOrientation"),
	HX_CSTRING("getOrientationForward"),
	HX_CSTRING("getOrientationUp"),
	HX_CSTRING("getPosition"),
	HX_CSTRING("getVelocity"),
	HX_CSTRING("setCamera"),
	HX_CSTRING("setGain"),
	HX_CSTRING("setOrientation_V3X2"),
	HX_CSTRING("setOrientation_FltX6"),
	HX_CSTRING("setPosition_V3"),
	HX_CSTRING("setPosition_FltX3"),
	HX_CSTRING("setVelocity_V3"),
	HX_CSTRING("setVelocity_FltX3"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AudioListener_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AudioListener_obj::hx_AudioListener_getCamera,"hx_AudioListener_getCamera");
	HX_MARK_MEMBER_NAME(AudioListener_obj::hx_AudioListener_getGain,"hx_AudioListener_getGain");
	HX_MARK_MEMBER_NAME(AudioListener_obj::hx_AudioListener_static_getInstance,"hx_AudioListener_static_getInstance");
	HX_MARK_MEMBER_NAME(AudioListener_obj::hx_AudioListener_getOrientation,"hx_AudioListener_getOrientation");
	HX_MARK_MEMBER_NAME(AudioListener_obj::hx_AudioListener_getOrientationForward,"hx_AudioListener_getOrientationForward");
	HX_MARK_MEMBER_NAME(AudioListener_obj::hx_AudioListener_getOrientationUp,"hx_AudioListener_getOrientationUp");
	HX_MARK_MEMBER_NAME(AudioListener_obj::hx_AudioListener_getPosition,"hx_AudioListener_getPosition");
	HX_MARK_MEMBER_NAME(AudioListener_obj::hx_AudioListener_getVelocity,"hx_AudioListener_getVelocity");
	HX_MARK_MEMBER_NAME(AudioListener_obj::hx_AudioListener_setCamera,"hx_AudioListener_setCamera");
	HX_MARK_MEMBER_NAME(AudioListener_obj::hx_AudioListener_setGain,"hx_AudioListener_setGain");
	HX_MARK_MEMBER_NAME(AudioListener_obj::hx_AudioListener_setOrientation_V3X2,"hx_AudioListener_setOrientation_V3X2");
	HX_MARK_MEMBER_NAME(AudioListener_obj::hx_AudioListener_setOrientation_FltX6,"hx_AudioListener_setOrientation_FltX6");
	HX_MARK_MEMBER_NAME(AudioListener_obj::hx_AudioListener_setPosition_V3,"hx_AudioListener_setPosition_V3");
	HX_MARK_MEMBER_NAME(AudioListener_obj::hx_AudioListener_setPosition_FltX3,"hx_AudioListener_setPosition_FltX3");
	HX_MARK_MEMBER_NAME(AudioListener_obj::hx_AudioListener_setVelocity_V3,"hx_AudioListener_setVelocity_V3");
	HX_MARK_MEMBER_NAME(AudioListener_obj::hx_AudioListener_setVelocity_FltX3,"hx_AudioListener_setVelocity_FltX3");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AudioListener_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AudioListener_obj::hx_AudioListener_getCamera,"hx_AudioListener_getCamera");
	HX_VISIT_MEMBER_NAME(AudioListener_obj::hx_AudioListener_getGain,"hx_AudioListener_getGain");
	HX_VISIT_MEMBER_NAME(AudioListener_obj::hx_AudioListener_static_getInstance,"hx_AudioListener_static_getInstance");
	HX_VISIT_MEMBER_NAME(AudioListener_obj::hx_AudioListener_getOrientation,"hx_AudioListener_getOrientation");
	HX_VISIT_MEMBER_NAME(AudioListener_obj::hx_AudioListener_getOrientationForward,"hx_AudioListener_getOrientationForward");
	HX_VISIT_MEMBER_NAME(AudioListener_obj::hx_AudioListener_getOrientationUp,"hx_AudioListener_getOrientationUp");
	HX_VISIT_MEMBER_NAME(AudioListener_obj::hx_AudioListener_getPosition,"hx_AudioListener_getPosition");
	HX_VISIT_MEMBER_NAME(AudioListener_obj::hx_AudioListener_getVelocity,"hx_AudioListener_getVelocity");
	HX_VISIT_MEMBER_NAME(AudioListener_obj::hx_AudioListener_setCamera,"hx_AudioListener_setCamera");
	HX_VISIT_MEMBER_NAME(AudioListener_obj::hx_AudioListener_setGain,"hx_AudioListener_setGain");
	HX_VISIT_MEMBER_NAME(AudioListener_obj::hx_AudioListener_setOrientation_V3X2,"hx_AudioListener_setOrientation_V3X2");
	HX_VISIT_MEMBER_NAME(AudioListener_obj::hx_AudioListener_setOrientation_FltX6,"hx_AudioListener_setOrientation_FltX6");
	HX_VISIT_MEMBER_NAME(AudioListener_obj::hx_AudioListener_setPosition_V3,"hx_AudioListener_setPosition_V3");
	HX_VISIT_MEMBER_NAME(AudioListener_obj::hx_AudioListener_setPosition_FltX3,"hx_AudioListener_setPosition_FltX3");
	HX_VISIT_MEMBER_NAME(AudioListener_obj::hx_AudioListener_setVelocity_V3,"hx_AudioListener_setVelocity_V3");
	HX_VISIT_MEMBER_NAME(AudioListener_obj::hx_AudioListener_setVelocity_FltX3,"hx_AudioListener_setVelocity_FltX3");
};

#endif

Class AudioListener_obj::__mClass;

void AudioListener_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.AudioListener"), hx::TCanCast< AudioListener_obj> ,sStaticFields,sMemberFields,
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

void AudioListener_obj::__boot()
{
	hx_AudioListener_getCamera= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AudioListener >(),HX_CSTRING("getCamera"),(int)1);
	hx_AudioListener_getGain= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AudioListener >(),HX_CSTRING("getGain"),(int)1);
	hx_AudioListener_static_getInstance= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AudioListener >(),HX_CSTRING("static_getInstance"),(int)0);
	hx_AudioListener_getOrientation= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AudioListener >(),HX_CSTRING("getOrientation"),(int)1);
	hx_AudioListener_getOrientationForward= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AudioListener >(),HX_CSTRING("getOrientationForward"),(int)1);
	hx_AudioListener_getOrientationUp= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AudioListener >(),HX_CSTRING("getOrientationUp"),(int)1);
	hx_AudioListener_getPosition= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AudioListener >(),HX_CSTRING("getPosition"),(int)1);
	hx_AudioListener_getVelocity= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AudioListener >(),HX_CSTRING("getVelocity"),(int)1);
	hx_AudioListener_setCamera= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AudioListener >(),HX_CSTRING("setCamera"),(int)2);
	hx_AudioListener_setGain= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AudioListener >(),HX_CSTRING("setGain"),(int)2);
	hx_AudioListener_setOrientation_V3X2= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AudioListener >(),HX_CSTRING("setOrientation_V3X2"),(int)3);
	hx_AudioListener_setOrientation_FltX6= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AudioListener >(),HX_CSTRING("setOrientation_FltX6"),(int)-1);
	hx_AudioListener_setPosition_V3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AudioListener >(),HX_CSTRING("setPosition_V3"),(int)2);
	hx_AudioListener_setPosition_FltX3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AudioListener >(),HX_CSTRING("setPosition_FltX3"),(int)4);
	hx_AudioListener_setVelocity_V3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AudioListener >(),HX_CSTRING("setVelocity_V3"),(int)2);
	hx_AudioListener_setVelocity_FltX3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AudioListener >(),HX_CSTRING("setVelocity_FltX3"),(int)4);
}

} // end namespace org
} // end namespace gameplay3d
