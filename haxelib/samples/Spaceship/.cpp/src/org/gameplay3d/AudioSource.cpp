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
#ifndef INCLUDED_org_gameplay3d_AnimationTarget
#include <org/gameplay3d/AnimationTarget.h>
#endif
#ifndef INCLUDED_org_gameplay3d_AudioSource
#include <org/gameplay3d/AudioSource.h>
#endif
#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Node
#include <org/gameplay3d/Node.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Properties
#include <org/gameplay3d/Properties.h>
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
#ifndef INCLUDED_org_gameplay3d_intern_impl_AnimationTarget_ScriptTarget
#include <org/gameplay3d/intern/impl/AnimationTarget_ScriptTarget.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_impl_Transform_ListenerImpl
#include <org/gameplay3d/intern/impl/Transform_ListenerImpl.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_NativeInterface
#include <org/gameplay3d/util/NativeInterface.h>
#endif
namespace org{
namespace gameplay3d{

Void AudioSource_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.AudioSource","new",0xc29f5cb6,"org.gameplay3d.AudioSource.new","org/gameplay3d/AudioSource.hx",13,0x7573311a)
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

//AudioSource_obj::~AudioSource_obj() { }

Dynamic AudioSource_obj::__CreateEmpty() { return  new AudioSource_obj; }
hx::ObjectPtr< AudioSource_obj > AudioSource_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< AudioSource_obj > result = new AudioSource_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic AudioSource_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AudioSource_obj > result = new AudioSource_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *AudioSource_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::intern::INativeBinding_obj)) return operator ::org::gameplay3d::intern::INativeBinding_obj *();
	if (inType==typeid( ::org::gameplay3d::Ref_obj)) return operator ::org::gameplay3d::Ref_obj *();
	return super::__ToInterface(inType);
}

Float AudioSource_obj::getGain( ){
	HX_STACK_FRAME("org.gameplay3d.AudioSource","getGain",0xf8590f8b,"org.gameplay3d.AudioSource.getGain","org/gameplay3d/AudioSource.hx",36,0x7573311a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(36)
	return ::org::gameplay3d::AudioSource_obj::hx_AudioSource_getGain(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,getGain,return )

::org::gameplay3d::Node AudioSource_obj::getNode( ){
	HX_STACK_FRAME("org.gameplay3d.AudioSource","getNode",0xfd04290e,"org.gameplay3d.AudioSource.getNode","org/gameplay3d/AudioSource.hx",42,0x7573311a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(42)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Node >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(42)
	Dynamic nativeObject = ::org::gameplay3d::AudioSource_obj::hx_AudioSource_getNode(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
			::org::gameplay3d::Node result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(42)
			if (((result == null()))){
				HX_STACK_LINE(42)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(42)
				::org::gameplay3d::Node _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,getNode,return )

Float AudioSource_obj::getPitch( ){
	HX_STACK_FRAME("org.gameplay3d.AudioSource","getPitch",0x8981c734,"org.gameplay3d.AudioSource.getPitch","org/gameplay3d/AudioSource.hx",48,0x7573311a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(48)
	return ::org::gameplay3d::AudioSource_obj::hx_AudioSource_getPitch(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,getPitch,return )

int AudioSource_obj::getState( ){
	HX_STACK_FRAME("org.gameplay3d.AudioSource","getState",0x4aec8185,"org.gameplay3d.AudioSource.getState","org/gameplay3d/AudioSource.hx",54,0x7573311a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(54)
	return ::org::gameplay3d::AudioSource_obj::hx_AudioSource_getState(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,getState,return )

::org::gameplay3d::immutable::IVector3 AudioSource_obj::getVelocity( ){
	HX_STACK_FRAME("org.gameplay3d.AudioSource","getVelocity",0xacc29729,"org.gameplay3d.AudioSource.getVelocity","org/gameplay3d/AudioSource.hx",60,0x7573311a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_velocity == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(60)
			Dynamic nativeObject = ::org::gameplay3d::AudioSource_obj::hx_AudioSource_getVelocity(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
		HX_STACK_LINE(60)
		Dynamic _g2 = ::org::gameplay3d::AudioSource_obj::hx_AudioSource_getVelocity(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g3 = this->_velocity->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_velocity = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,getVelocity,return )

bool AudioSource_obj::isLooped( ){
	HX_STACK_FRAME("org.gameplay3d.AudioSource","isLooped",0x212cf737,"org.gameplay3d.AudioSource.isLooped","org/gameplay3d/AudioSource.hx",66,0x7573311a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(66)
	return ::org::gameplay3d::AudioSource_obj::hx_AudioSource_isLooped(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,isLooped,return )

Void AudioSource_obj::pause( ){
{
		HX_STACK_FRAME("org.gameplay3d.AudioSource","pause",0x52dfa4cc,"org.gameplay3d.AudioSource.pause","org/gameplay3d/AudioSource.hx",72,0x7573311a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(72)
		::org::gameplay3d::AudioSource_obj::hx_AudioSource_pause(this->nativeObject);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,pause,(void))

Void AudioSource_obj::play( ){
{
		HX_STACK_FRAME("org.gameplay3d.AudioSource","play",0x8a296cde,"org.gameplay3d.AudioSource.play","org/gameplay3d/AudioSource.hx",78,0x7573311a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(78)
		::org::gameplay3d::AudioSource_obj::hx_AudioSource_play(this->nativeObject);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,play,(void))

Void AudioSource_obj::resume( ){
{
		HX_STACK_FRAME("org.gameplay3d.AudioSource","resume",0x49d0b717,"org.gameplay3d.AudioSource.resume","org/gameplay3d/AudioSource.hx",84,0x7573311a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(84)
		::org::gameplay3d::AudioSource_obj::hx_AudioSource_resume(this->nativeObject);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,resume,(void))

Void AudioSource_obj::rewind( ){
{
		HX_STACK_FRAME("org.gameplay3d.AudioSource","rewind",0x4c6c7765,"org.gameplay3d.AudioSource.rewind","org/gameplay3d/AudioSource.hx",90,0x7573311a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(90)
		::org::gameplay3d::AudioSource_obj::hx_AudioSource_rewind(this->nativeObject);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,rewind,(void))

Void AudioSource_obj::setGain( Float gain){
{
		HX_STACK_FRAME("org.gameplay3d.AudioSource","setGain",0xeb5aa097,"org.gameplay3d.AudioSource.setGain","org/gameplay3d/AudioSource.hx",96,0x7573311a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gain,"gain")
		HX_STACK_LINE(96)
		::org::gameplay3d::AudioSource_obj::hx_AudioSource_setGain(this->nativeObject,gain);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AudioSource_obj,setGain,(void))

Void AudioSource_obj::setLooped( bool looped){
{
		HX_STACK_FRAME("org.gameplay3d.AudioSource","setLooped",0x831345db,"org.gameplay3d.AudioSource.setLooped","org/gameplay3d/AudioSource.hx",102,0x7573311a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(looped,"looped")
		HX_STACK_LINE(102)
		::org::gameplay3d::AudioSource_obj::hx_AudioSource_setLooped(this->nativeObject,looped);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AudioSource_obj,setLooped,(void))

Void AudioSource_obj::setPitch( Float pitch){
{
		HX_STACK_FRAME("org.gameplay3d.AudioSource","setPitch",0x37df20a8,"org.gameplay3d.AudioSource.setPitch","org/gameplay3d/AudioSource.hx",108,0x7573311a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pitch,"pitch")
		HX_STACK_LINE(108)
		::org::gameplay3d::AudioSource_obj::hx_AudioSource_setPitch(this->nativeObject,pitch);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AudioSource_obj,setPitch,(void))

Void AudioSource_obj::setVelocity_V3( ::org::gameplay3d::immutable::IVector3 velocity){
{
		HX_STACK_FRAME("org.gameplay3d.AudioSource","setVelocity_V3",0x4337d227,"org.gameplay3d.AudioSource.setVelocity_V3","org/gameplay3d/AudioSource.hx",114,0x7573311a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(velocity,"velocity")
		HX_STACK_LINE(114)
		::org::gameplay3d::AudioSource_obj::hx_AudioSource_setVelocity_V3(this->nativeObject,(  (((velocity == null()))) ? Dynamic(null()) : Dynamic(velocity->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AudioSource_obj,setVelocity_V3,(void))

Void AudioSource_obj::setVelocity_FltX3( Float x,Float y,Float z){
{
		HX_STACK_FRAME("org.gameplay3d.AudioSource","setVelocity_FltX3",0x315af3df,"org.gameplay3d.AudioSource.setVelocity_FltX3","org/gameplay3d/AudioSource.hx",120,0x7573311a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(120)
		::org::gameplay3d::AudioSource_obj::hx_AudioSource_setVelocity_FltX3(this->nativeObject,x,y,z);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(AudioSource_obj,setVelocity_FltX3,(void))

Void AudioSource_obj::stop( ){
{
		HX_STACK_FRAME("org.gameplay3d.AudioSource","stop",0x8c2b2eec,"org.gameplay3d.AudioSource.stop","org/gameplay3d/AudioSource.hx",126,0x7573311a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(126)
		::org::gameplay3d::AudioSource_obj::hx_AudioSource_stop(this->nativeObject);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,stop,(void))

::org::gameplay3d::AudioSource AudioSource_obj::create_Prop( ::org::gameplay3d::Properties properties){
	HX_STACK_FRAME("org.gameplay3d.AudioSource","create_Prop",0xe667a97c,"org.gameplay3d.AudioSource.create_Prop","org/gameplay3d/AudioSource.hx",24,0x7573311a)
	HX_STACK_ARG(properties,"properties")
	HX_STACK_LINE(24)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::AudioSource >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(24)
	Dynamic nativeObject = ::org::gameplay3d::AudioSource_obj::hx_AudioSource_static_create_Prop((  (((properties == null()))) ? Dynamic(null()) : Dynamic(properties->nativeObject) ));		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(24)
	if (((nativeObject == null()))){
		HX_STACK_LINE(24)
		return null();
	}
	else{
		HX_STACK_LINE(24)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(24)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(24)
			::org::gameplay3d::AudioSource result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(24)
			if (((result == null()))){
				HX_STACK_LINE(24)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(24)
				::org::gameplay3d::AudioSource _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(24)
				result = _g;
				HX_STACK_LINE(24)
				ref->set(result);
			}
			HX_STACK_LINE(24)
			return result;
		}
		else{
			HX_STACK_LINE(24)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(24)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(24)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioSource_obj,create_Prop,return )

::org::gameplay3d::AudioSource AudioSource_obj::create_Str( ::String url){
	HX_STACK_FRAME("org.gameplay3d.AudioSource","create_Str",0x212f84f8,"org.gameplay3d.AudioSource.create_Str","org/gameplay3d/AudioSource.hx",30,0x7573311a)
	HX_STACK_ARG(url,"url")
	HX_STACK_LINE(30)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::AudioSource >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(30)
	Dynamic nativeObject = ::org::gameplay3d::AudioSource_obj::hx_AudioSource_static_create_Str(url);		HX_STACK_VAR(nativeObject,"nativeObject");
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
			::org::gameplay3d::AudioSource result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(30)
			if (((result == null()))){
				HX_STACK_LINE(30)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(30)
				::org::gameplay3d::AudioSource _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioSource_obj,create_Str,return )

Dynamic AudioSource_obj::hx_AudioSource_static_create_Prop;

Dynamic AudioSource_obj::hx_AudioSource_static_create_Str;

Dynamic AudioSource_obj::hx_AudioSource_getGain;

Dynamic AudioSource_obj::hx_AudioSource_getNode;

Dynamic AudioSource_obj::hx_AudioSource_getPitch;

Dynamic AudioSource_obj::hx_AudioSource_getState;

Dynamic AudioSource_obj::hx_AudioSource_getVelocity;

Dynamic AudioSource_obj::hx_AudioSource_isLooped;

Dynamic AudioSource_obj::hx_AudioSource_pause;

Dynamic AudioSource_obj::hx_AudioSource_play;

Dynamic AudioSource_obj::hx_AudioSource_resume;

Dynamic AudioSource_obj::hx_AudioSource_rewind;

Dynamic AudioSource_obj::hx_AudioSource_setGain;

Dynamic AudioSource_obj::hx_AudioSource_setLooped;

Dynamic AudioSource_obj::hx_AudioSource_setPitch;

Dynamic AudioSource_obj::hx_AudioSource_setVelocity_V3;

Dynamic AudioSource_obj::hx_AudioSource_setVelocity_FltX3;

Dynamic AudioSource_obj::hx_AudioSource_stop;


AudioSource_obj::AudioSource_obj()
{
}

void AudioSource_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AudioSource);
	HX_MARK_MEMBER_NAME(_velocity,"_velocity");
	::org::gameplay3d::intern::NativeBinding_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AudioSource_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_velocity,"_velocity");
	::org::gameplay3d::intern::NativeBinding_obj::__Visit(HX_VISIT_ARG);
}

Dynamic AudioSource_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		if (HX_FIELD_EQ(inName,"rewind") ) { return rewind_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getGain") ) { return getGain_dyn(); }
		if (HX_FIELD_EQ(inName,"getNode") ) { return getNode_dyn(); }
		if (HX_FIELD_EQ(inName,"setGain") ) { return setGain_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getPitch") ) { return getPitch_dyn(); }
		if (HX_FIELD_EQ(inName,"getState") ) { return getState_dyn(); }
		if (HX_FIELD_EQ(inName,"isLooped") ) { return isLooped_dyn(); }
		if (HX_FIELD_EQ(inName,"setPitch") ) { return setPitch_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_velocity") ) { return _velocity; }
		if (HX_FIELD_EQ(inName,"setLooped") ) { return setLooped_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"create_Str") ) { return create_Str_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"create_Prop") ) { return create_Prop_dyn(); }
		if (HX_FIELD_EQ(inName,"getVelocity") ) { return getVelocity_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setVelocity_V3") ) { return setVelocity_V3_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"setVelocity_FltX3") ) { return setVelocity_FltX3_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hx_AudioSource_play") ) { return hx_AudioSource_play; }
		if (HX_FIELD_EQ(inName,"hx_AudioSource_stop") ) { return hx_AudioSource_stop; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_AudioSource_pause") ) { return hx_AudioSource_pause; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hx_AudioSource_resume") ) { return hx_AudioSource_resume; }
		if (HX_FIELD_EQ(inName,"hx_AudioSource_rewind") ) { return hx_AudioSource_rewind; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_AudioSource_getGain") ) { return hx_AudioSource_getGain; }
		if (HX_FIELD_EQ(inName,"hx_AudioSource_getNode") ) { return hx_AudioSource_getNode; }
		if (HX_FIELD_EQ(inName,"hx_AudioSource_setGain") ) { return hx_AudioSource_setGain; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_AudioSource_getPitch") ) { return hx_AudioSource_getPitch; }
		if (HX_FIELD_EQ(inName,"hx_AudioSource_getState") ) { return hx_AudioSource_getState; }
		if (HX_FIELD_EQ(inName,"hx_AudioSource_isLooped") ) { return hx_AudioSource_isLooped; }
		if (HX_FIELD_EQ(inName,"hx_AudioSource_setPitch") ) { return hx_AudioSource_setPitch; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_AudioSource_setLooped") ) { return hx_AudioSource_setLooped; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_AudioSource_getVelocity") ) { return hx_AudioSource_getVelocity; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_AudioSource_setVelocity_V3") ) { return hx_AudioSource_setVelocity_V3; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"hx_AudioSource_static_create_Str") ) { return hx_AudioSource_static_create_Str; }
		if (HX_FIELD_EQ(inName,"hx_AudioSource_setVelocity_FltX3") ) { return hx_AudioSource_setVelocity_FltX3; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"hx_AudioSource_static_create_Prop") ) { return hx_AudioSource_static_create_Prop; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AudioSource_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_velocity") ) { _velocity=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hx_AudioSource_play") ) { hx_AudioSource_play=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_AudioSource_stop") ) { hx_AudioSource_stop=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_AudioSource_pause") ) { hx_AudioSource_pause=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hx_AudioSource_resume") ) { hx_AudioSource_resume=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_AudioSource_rewind") ) { hx_AudioSource_rewind=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_AudioSource_getGain") ) { hx_AudioSource_getGain=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_AudioSource_getNode") ) { hx_AudioSource_getNode=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_AudioSource_setGain") ) { hx_AudioSource_setGain=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_AudioSource_getPitch") ) { hx_AudioSource_getPitch=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_AudioSource_getState") ) { hx_AudioSource_getState=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_AudioSource_isLooped") ) { hx_AudioSource_isLooped=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_AudioSource_setPitch") ) { hx_AudioSource_setPitch=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_AudioSource_setLooped") ) { hx_AudioSource_setLooped=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_AudioSource_getVelocity") ) { hx_AudioSource_getVelocity=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_AudioSource_setVelocity_V3") ) { hx_AudioSource_setVelocity_V3=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"hx_AudioSource_static_create_Str") ) { hx_AudioSource_static_create_Str=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_AudioSource_setVelocity_FltX3") ) { hx_AudioSource_setVelocity_FltX3=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"hx_AudioSource_static_create_Prop") ) { hx_AudioSource_static_create_Prop=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AudioSource_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_velocity"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create_Prop"),
	HX_CSTRING("create_Str"),
	HX_CSTRING("hx_AudioSource_static_create_Prop"),
	HX_CSTRING("hx_AudioSource_static_create_Str"),
	HX_CSTRING("hx_AudioSource_getGain"),
	HX_CSTRING("hx_AudioSource_getNode"),
	HX_CSTRING("hx_AudioSource_getPitch"),
	HX_CSTRING("hx_AudioSource_getState"),
	HX_CSTRING("hx_AudioSource_getVelocity"),
	HX_CSTRING("hx_AudioSource_isLooped"),
	HX_CSTRING("hx_AudioSource_pause"),
	HX_CSTRING("hx_AudioSource_play"),
	HX_CSTRING("hx_AudioSource_resume"),
	HX_CSTRING("hx_AudioSource_rewind"),
	HX_CSTRING("hx_AudioSource_setGain"),
	HX_CSTRING("hx_AudioSource_setLooped"),
	HX_CSTRING("hx_AudioSource_setPitch"),
	HX_CSTRING("hx_AudioSource_setVelocity_V3"),
	HX_CSTRING("hx_AudioSource_setVelocity_FltX3"),
	HX_CSTRING("hx_AudioSource_stop"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(AudioSource_obj,_velocity),HX_CSTRING("_velocity")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_velocity"),
	HX_CSTRING("getGain"),
	HX_CSTRING("getNode"),
	HX_CSTRING("getPitch"),
	HX_CSTRING("getState"),
	HX_CSTRING("getVelocity"),
	HX_CSTRING("isLooped"),
	HX_CSTRING("pause"),
	HX_CSTRING("play"),
	HX_CSTRING("resume"),
	HX_CSTRING("rewind"),
	HX_CSTRING("setGain"),
	HX_CSTRING("setLooped"),
	HX_CSTRING("setPitch"),
	HX_CSTRING("setVelocity_V3"),
	HX_CSTRING("setVelocity_FltX3"),
	HX_CSTRING("stop"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AudioSource_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AudioSource_obj::hx_AudioSource_static_create_Prop,"hx_AudioSource_static_create_Prop");
	HX_MARK_MEMBER_NAME(AudioSource_obj::hx_AudioSource_static_create_Str,"hx_AudioSource_static_create_Str");
	HX_MARK_MEMBER_NAME(AudioSource_obj::hx_AudioSource_getGain,"hx_AudioSource_getGain");
	HX_MARK_MEMBER_NAME(AudioSource_obj::hx_AudioSource_getNode,"hx_AudioSource_getNode");
	HX_MARK_MEMBER_NAME(AudioSource_obj::hx_AudioSource_getPitch,"hx_AudioSource_getPitch");
	HX_MARK_MEMBER_NAME(AudioSource_obj::hx_AudioSource_getState,"hx_AudioSource_getState");
	HX_MARK_MEMBER_NAME(AudioSource_obj::hx_AudioSource_getVelocity,"hx_AudioSource_getVelocity");
	HX_MARK_MEMBER_NAME(AudioSource_obj::hx_AudioSource_isLooped,"hx_AudioSource_isLooped");
	HX_MARK_MEMBER_NAME(AudioSource_obj::hx_AudioSource_pause,"hx_AudioSource_pause");
	HX_MARK_MEMBER_NAME(AudioSource_obj::hx_AudioSource_play,"hx_AudioSource_play");
	HX_MARK_MEMBER_NAME(AudioSource_obj::hx_AudioSource_resume,"hx_AudioSource_resume");
	HX_MARK_MEMBER_NAME(AudioSource_obj::hx_AudioSource_rewind,"hx_AudioSource_rewind");
	HX_MARK_MEMBER_NAME(AudioSource_obj::hx_AudioSource_setGain,"hx_AudioSource_setGain");
	HX_MARK_MEMBER_NAME(AudioSource_obj::hx_AudioSource_setLooped,"hx_AudioSource_setLooped");
	HX_MARK_MEMBER_NAME(AudioSource_obj::hx_AudioSource_setPitch,"hx_AudioSource_setPitch");
	HX_MARK_MEMBER_NAME(AudioSource_obj::hx_AudioSource_setVelocity_V3,"hx_AudioSource_setVelocity_V3");
	HX_MARK_MEMBER_NAME(AudioSource_obj::hx_AudioSource_setVelocity_FltX3,"hx_AudioSource_setVelocity_FltX3");
	HX_MARK_MEMBER_NAME(AudioSource_obj::hx_AudioSource_stop,"hx_AudioSource_stop");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AudioSource_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AudioSource_obj::hx_AudioSource_static_create_Prop,"hx_AudioSource_static_create_Prop");
	HX_VISIT_MEMBER_NAME(AudioSource_obj::hx_AudioSource_static_create_Str,"hx_AudioSource_static_create_Str");
	HX_VISIT_MEMBER_NAME(AudioSource_obj::hx_AudioSource_getGain,"hx_AudioSource_getGain");
	HX_VISIT_MEMBER_NAME(AudioSource_obj::hx_AudioSource_getNode,"hx_AudioSource_getNode");
	HX_VISIT_MEMBER_NAME(AudioSource_obj::hx_AudioSource_getPitch,"hx_AudioSource_getPitch");
	HX_VISIT_MEMBER_NAME(AudioSource_obj::hx_AudioSource_getState,"hx_AudioSource_getState");
	HX_VISIT_MEMBER_NAME(AudioSource_obj::hx_AudioSource_getVelocity,"hx_AudioSource_getVelocity");
	HX_VISIT_MEMBER_NAME(AudioSource_obj::hx_AudioSource_isLooped,"hx_AudioSource_isLooped");
	HX_VISIT_MEMBER_NAME(AudioSource_obj::hx_AudioSource_pause,"hx_AudioSource_pause");
	HX_VISIT_MEMBER_NAME(AudioSource_obj::hx_AudioSource_play,"hx_AudioSource_play");
	HX_VISIT_MEMBER_NAME(AudioSource_obj::hx_AudioSource_resume,"hx_AudioSource_resume");
	HX_VISIT_MEMBER_NAME(AudioSource_obj::hx_AudioSource_rewind,"hx_AudioSource_rewind");
	HX_VISIT_MEMBER_NAME(AudioSource_obj::hx_AudioSource_setGain,"hx_AudioSource_setGain");
	HX_VISIT_MEMBER_NAME(AudioSource_obj::hx_AudioSource_setLooped,"hx_AudioSource_setLooped");
	HX_VISIT_MEMBER_NAME(AudioSource_obj::hx_AudioSource_setPitch,"hx_AudioSource_setPitch");
	HX_VISIT_MEMBER_NAME(AudioSource_obj::hx_AudioSource_setVelocity_V3,"hx_AudioSource_setVelocity_V3");
	HX_VISIT_MEMBER_NAME(AudioSource_obj::hx_AudioSource_setVelocity_FltX3,"hx_AudioSource_setVelocity_FltX3");
	HX_VISIT_MEMBER_NAME(AudioSource_obj::hx_AudioSource_stop,"hx_AudioSource_stop");
};

#endif

Class AudioSource_obj::__mClass;

void AudioSource_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.AudioSource"), hx::TCanCast< AudioSource_obj> ,sStaticFields,sMemberFields,
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

void AudioSource_obj::__boot()
{
	hx_AudioSource_static_create_Prop= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AudioSource >(),HX_CSTRING("static_create_Prop"),(int)1);
	hx_AudioSource_static_create_Str= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AudioSource >(),HX_CSTRING("static_create_Str"),(int)1);
	hx_AudioSource_getGain= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AudioSource >(),HX_CSTRING("getGain"),(int)1);
	hx_AudioSource_getNode= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AudioSource >(),HX_CSTRING("getNode"),(int)1);
	hx_AudioSource_getPitch= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AudioSource >(),HX_CSTRING("getPitch"),(int)1);
	hx_AudioSource_getState= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AudioSource >(),HX_CSTRING("getState"),(int)1);
	hx_AudioSource_getVelocity= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AudioSource >(),HX_CSTRING("getVelocity"),(int)1);
	hx_AudioSource_isLooped= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AudioSource >(),HX_CSTRING("isLooped"),(int)1);
	hx_AudioSource_pause= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AudioSource >(),HX_CSTRING("pause"),(int)1);
	hx_AudioSource_play= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AudioSource >(),HX_CSTRING("play"),(int)1);
	hx_AudioSource_resume= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AudioSource >(),HX_CSTRING("resume"),(int)1);
	hx_AudioSource_rewind= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AudioSource >(),HX_CSTRING("rewind"),(int)1);
	hx_AudioSource_setGain= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AudioSource >(),HX_CSTRING("setGain"),(int)2);
	hx_AudioSource_setLooped= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AudioSource >(),HX_CSTRING("setLooped"),(int)2);
	hx_AudioSource_setPitch= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AudioSource >(),HX_CSTRING("setPitch"),(int)2);
	hx_AudioSource_setVelocity_V3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AudioSource >(),HX_CSTRING("setVelocity_V3"),(int)2);
	hx_AudioSource_setVelocity_FltX3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AudioSource >(),HX_CSTRING("setVelocity_FltX3"),(int)4);
	hx_AudioSource_stop= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AudioSource >(),HX_CSTRING("stop"),(int)1);
}

} // end namespace org
} // end namespace gameplay3d
