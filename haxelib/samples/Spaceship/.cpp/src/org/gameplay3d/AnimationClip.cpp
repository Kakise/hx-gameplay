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
#ifndef INCLUDED_org_gameplay3d_Animation
#include <org/gameplay3d/Animation.h>
#endif
#ifndef INCLUDED_org_gameplay3d_AnimationClip
#include <org/gameplay3d/AnimationClip.h>
#endif
#ifndef INCLUDED_org_gameplay3d_AnimationClip_Listener
#include <org/gameplay3d/AnimationClip_Listener.h>
#endif
#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Ref
#include <org/gameplay3d/Ref.h>
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
#ifndef INCLUDED_org_gameplay3d_wrapper_AnimationClip_ListenerWrapper
#include <org/gameplay3d/wrapper/AnimationClip_ListenerWrapper.h>
#endif
namespace org{
namespace gameplay3d{

Void AnimationClip_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.AnimationClip","new",0x1cb44699,"org.gameplay3d.AnimationClip.new","org/gameplay3d/AnimationClip.hx",10,0x3281fc97)
HX_STACK_THIS(this)
HX_STACK_ARG(nativeObjectInitializer,"nativeObjectInitializer")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(10)
	super::__construct(nativeObjectInitializer,nativeObjectInitializerParams);
}
;
	return null();
}

//AnimationClip_obj::~AnimationClip_obj() { }

Dynamic AnimationClip_obj::__CreateEmpty() { return  new AnimationClip_obj; }
hx::ObjectPtr< AnimationClip_obj > AnimationClip_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< AnimationClip_obj > result = new AnimationClip_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic AnimationClip_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AnimationClip_obj > result = new AnimationClip_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *AnimationClip_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::intern::INativeBinding_obj)) return operator ::org::gameplay3d::intern::INativeBinding_obj *();
	if (inType==typeid( ::org::gameplay3d::Ref_obj)) return operator ::org::gameplay3d::Ref_obj *();
	return super::__ToInterface(inType);
}

Void AnimationClip_obj::addBeginListener( ::org::gameplay3d::wrapper::AnimationClip_ListenerWrapper listener){
{
		HX_STACK_FRAME("org.gameplay3d.AnimationClip","addBeginListener",0xf5b1af03,"org.gameplay3d.AnimationClip.addBeginListener","org/gameplay3d/AnimationClip.hx",25,0x3281fc97)
		HX_STACK_THIS(this)
		HX_STACK_ARG(listener,"listener")
		HX_STACK_LINE(25)
		::org::gameplay3d::AnimationClip_obj::hx_AnimationClip_addBeginListener_Lsnr(this->nativeObject,(  (((listener == null()))) ? Dynamic(null()) : Dynamic(listener->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AnimationClip_obj,addBeginListener,(void))

Void AnimationClip_obj::addBeginListener_Str( ::String func){
{
		HX_STACK_FRAME("org.gameplay3d.AnimationClip","addBeginListener_Str",0x3af39215,"org.gameplay3d.AnimationClip.addBeginListener_Str","org/gameplay3d/AnimationClip.hx",31,0x3281fc97)
		HX_STACK_THIS(this)
		HX_STACK_ARG(func,"func")
		HX_STACK_LINE(31)
		::org::gameplay3d::AnimationClip_obj::hx_AnimationClip_addBeginListener_Str(this->nativeObject,func);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AnimationClip_obj,addBeginListener_Str,(void))

Void AnimationClip_obj::addEndListener_Lsnr( ::org::gameplay3d::wrapper::AnimationClip_ListenerWrapper listener){
{
		HX_STACK_FRAME("org.gameplay3d.AnimationClip","addEndListener_Lsnr",0xc909a935,"org.gameplay3d.AnimationClip.addEndListener_Lsnr","org/gameplay3d/AnimationClip.hx",37,0x3281fc97)
		HX_STACK_THIS(this)
		HX_STACK_ARG(listener,"listener")
		HX_STACK_LINE(37)
		::org::gameplay3d::AnimationClip_obj::hx_AnimationClip_addEndListener_Lsnr(this->nativeObject,(  (((listener == null()))) ? Dynamic(null()) : Dynamic(listener->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AnimationClip_obj,addEndListener_Lsnr,(void))

Void AnimationClip_obj::addEndListener_Str( ::String func){
{
		HX_STACK_FRAME("org.gameplay3d.AnimationClip","addEndListener_Str",0x62803147,"org.gameplay3d.AnimationClip.addEndListener_Str","org/gameplay3d/AnimationClip.hx",43,0x3281fc97)
		HX_STACK_THIS(this)
		HX_STACK_ARG(func,"func")
		HX_STACK_LINE(43)
		::org::gameplay3d::AnimationClip_obj::hx_AnimationClip_addEndListener_Str(this->nativeObject,func);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AnimationClip_obj,addEndListener_Str,(void))

Void AnimationClip_obj::addListener_Lsnr_Int( ::org::gameplay3d::wrapper::AnimationClip_ListenerWrapper listener,int eventTime){
{
		HX_STACK_FRAME("org.gameplay3d.AnimationClip","addListener_Lsnr_Int",0xd7bbb0ac,"org.gameplay3d.AnimationClip.addListener_Lsnr_Int","org/gameplay3d/AnimationClip.hx",49,0x3281fc97)
		HX_STACK_THIS(this)
		HX_STACK_ARG(listener,"listener")
		HX_STACK_ARG(eventTime,"eventTime")
		HX_STACK_LINE(49)
		::org::gameplay3d::AnimationClip_obj::hx_AnimationClip_addListener_Lsnr_Int(this->nativeObject,(  (((listener == null()))) ? Dynamic(null()) : Dynamic(listener->nativeObject) ),eventTime);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AnimationClip_obj,addListener_Lsnr_Int,(void))

Void AnimationClip_obj::addListener_Str_Int( ::String func,int eventTime){
{
		HX_STACK_FRAME("org.gameplay3d.AnimationClip","addListener_Str_Int",0x0a878d50,"org.gameplay3d.AnimationClip.addListener_Str_Int","org/gameplay3d/AnimationClip.hx",55,0x3281fc97)
		HX_STACK_THIS(this)
		HX_STACK_ARG(func,"func")
		HX_STACK_ARG(eventTime,"eventTime")
		HX_STACK_LINE(55)
		::org::gameplay3d::AnimationClip_obj::hx_AnimationClip_addListener_Str_Int(this->nativeObject,func,eventTime);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AnimationClip_obj,addListener_Str_Int,(void))

Void AnimationClip_obj::crossFade( ::org::gameplay3d::AnimationClip clip,int duration){
{
		HX_STACK_FRAME("org.gameplay3d.AnimationClip","crossFade",0x3fb36815,"org.gameplay3d.AnimationClip.crossFade","org/gameplay3d/AnimationClip.hx",61,0x3281fc97)
		HX_STACK_THIS(this)
		HX_STACK_ARG(clip,"clip")
		HX_STACK_ARG(duration,"duration")
		HX_STACK_LINE(61)
		::org::gameplay3d::AnimationClip_obj::hx_AnimationClip_crossFade(this->nativeObject,(  (((clip == null()))) ? Dynamic(null()) : Dynamic(clip->nativeObject) ),duration);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AnimationClip_obj,crossFade,(void))

int AnimationClip_obj::getActiveDuration( ){
	HX_STACK_FRAME("org.gameplay3d.AnimationClip","getActiveDuration",0xcb637a69,"org.gameplay3d.AnimationClip.getActiveDuration","org/gameplay3d/AnimationClip.hx",67,0x3281fc97)
	HX_STACK_THIS(this)
	HX_STACK_LINE(67)
	return ::org::gameplay3d::AnimationClip_obj::hx_AnimationClip_getActiveDuration(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationClip_obj,getActiveDuration,return )

::org::gameplay3d::Animation AnimationClip_obj::getAnimation( ){
	HX_STACK_FRAME("org.gameplay3d.AnimationClip","getAnimation",0xd6010635,"org.gameplay3d.AnimationClip.getAnimation","org/gameplay3d/AnimationClip.hx",73,0x3281fc97)
	HX_STACK_THIS(this)
	HX_STACK_LINE(73)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Animation >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(73)
	Dynamic nativeObject = ::org::gameplay3d::AnimationClip_obj::hx_AnimationClip_getAnimation(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(73)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(73)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(73)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(73)
			::org::gameplay3d::Animation result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(73)
			if (((result == null()))){
				HX_STACK_LINE(73)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(73)
				::org::gameplay3d::Animation _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(73)
				result = _g;
				HX_STACK_LINE(73)
				ref->set(result);
			}
			HX_STACK_LINE(73)
			return result;
		}
		else{
			HX_STACK_LINE(73)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(73)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(73)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationClip_obj,getAnimation,return )

Float AnimationClip_obj::getBlendWeight( ){
	HX_STACK_FRAME("org.gameplay3d.AnimationClip","getBlendWeight",0x9d7d661a,"org.gameplay3d.AnimationClip.getBlendWeight","org/gameplay3d/AnimationClip.hx",79,0x3281fc97)
	HX_STACK_THIS(this)
	HX_STACK_LINE(79)
	return ::org::gameplay3d::AnimationClip_obj::hx_AnimationClip_getBlendWeight(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationClip_obj,getBlendWeight,return )

int AnimationClip_obj::getDuration( ){
	HX_STACK_FRAME("org.gameplay3d.AnimationClip","getDuration",0xf508a943,"org.gameplay3d.AnimationClip.getDuration","org/gameplay3d/AnimationClip.hx",85,0x3281fc97)
	HX_STACK_THIS(this)
	HX_STACK_LINE(85)
	return ::org::gameplay3d::AnimationClip_obj::hx_AnimationClip_getDuration(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationClip_obj,getDuration,return )

Float AnimationClip_obj::getElaspedTime( ){
	HX_STACK_FRAME("org.gameplay3d.AnimationClip","getElaspedTime",0xdd0955f4,"org.gameplay3d.AnimationClip.getElaspedTime","org/gameplay3d/AnimationClip.hx",91,0x3281fc97)
	HX_STACK_THIS(this)
	HX_STACK_LINE(91)
	return ::org::gameplay3d::AnimationClip_obj::hx_AnimationClip_getElaspedTime(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationClip_obj,getElaspedTime,return )

int AnimationClip_obj::getEndTime( ){
	HX_STACK_FRAME("org.gameplay3d.AnimationClip","getEndTime",0xaaf8be79,"org.gameplay3d.AnimationClip.getEndTime","org/gameplay3d/AnimationClip.hx",97,0x3281fc97)
	HX_STACK_THIS(this)
	HX_STACK_LINE(97)
	return ::org::gameplay3d::AnimationClip_obj::hx_AnimationClip_getEndTime(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationClip_obj,getEndTime,return )

::String AnimationClip_obj::getId( ){
	HX_STACK_FRAME("org.gameplay3d.AnimationClip","getId",0xdf75c88a,"org.gameplay3d.AnimationClip.getId","org/gameplay3d/AnimationClip.hx",103,0x3281fc97)
	HX_STACK_THIS(this)
	HX_STACK_LINE(103)
	return ::org::gameplay3d::AnimationClip_obj::hx_AnimationClip_getId(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationClip_obj,getId,return )

Float AnimationClip_obj::getRepeatCount( ){
	HX_STACK_FRAME("org.gameplay3d.AnimationClip","getRepeatCount",0x02ef98e5,"org.gameplay3d.AnimationClip.getRepeatCount","org/gameplay3d/AnimationClip.hx",109,0x3281fc97)
	HX_STACK_THIS(this)
	HX_STACK_LINE(109)
	return ::org::gameplay3d::AnimationClip_obj::hx_AnimationClip_getRepeatCount(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationClip_obj,getRepeatCount,return )

Float AnimationClip_obj::getSpeed( ){
	HX_STACK_FRAME("org.gameplay3d.AnimationClip","getSpeed",0xcfcc0238,"org.gameplay3d.AnimationClip.getSpeed","org/gameplay3d/AnimationClip.hx",115,0x3281fc97)
	HX_STACK_THIS(this)
	HX_STACK_LINE(115)
	return ::org::gameplay3d::AnimationClip_obj::hx_AnimationClip_getSpeed(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationClip_obj,getSpeed,return )

int AnimationClip_obj::getStartTime( ){
	HX_STACK_FRAME("org.gameplay3d.AnimationClip","getStartTime",0x90bc5cc0,"org.gameplay3d.AnimationClip.getStartTime","org/gameplay3d/AnimationClip.hx",121,0x3281fc97)
	HX_STACK_THIS(this)
	HX_STACK_LINE(121)
	return ::org::gameplay3d::AnimationClip_obj::hx_AnimationClip_getStartTime(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationClip_obj,getStartTime,return )

bool AnimationClip_obj::isPlaying( ){
	HX_STACK_FRAME("org.gameplay3d.AnimationClip","isPlaying",0x597af39d,"org.gameplay3d.AnimationClip.isPlaying","org/gameplay3d/AnimationClip.hx",127,0x3281fc97)
	HX_STACK_THIS(this)
	HX_STACK_LINE(127)
	return ::org::gameplay3d::AnimationClip_obj::hx_AnimationClip_isPlaying(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationClip_obj,isPlaying,return )

Void AnimationClip_obj::pause( ){
{
		HX_STACK_FRAME("org.gameplay3d.AnimationClip","pause",0x0b6d0d6f,"org.gameplay3d.AnimationClip.pause","org/gameplay3d/AnimationClip.hx",133,0x3281fc97)
		HX_STACK_THIS(this)
		HX_STACK_LINE(133)
		::org::gameplay3d::AnimationClip_obj::hx_AnimationClip_pause(this->nativeObject);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationClip_obj,pause,(void))

Void AnimationClip_obj::play( ){
{
		HX_STACK_FRAME("org.gameplay3d.AnimationClip","play",0x0261299b,"org.gameplay3d.AnimationClip.play","org/gameplay3d/AnimationClip.hx",139,0x3281fc97)
		HX_STACK_THIS(this)
		HX_STACK_LINE(139)
		::org::gameplay3d::AnimationClip_obj::hx_AnimationClip_play(this->nativeObject);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationClip_obj,play,(void))

Void AnimationClip_obj::setActiveDuration( int duration){
{
		HX_STACK_FRAME("org.gameplay3d.AnimationClip","setActiveDuration",0xeed15275,"org.gameplay3d.AnimationClip.setActiveDuration","org/gameplay3d/AnimationClip.hx",145,0x3281fc97)
		HX_STACK_THIS(this)
		HX_STACK_ARG(duration,"duration")
		HX_STACK_LINE(145)
		::org::gameplay3d::AnimationClip_obj::hx_AnimationClip_setActiveDuration(this->nativeObject,duration);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AnimationClip_obj,setActiveDuration,(void))

Void AnimationClip_obj::setBlendWeight( Float blendWeight){
{
		HX_STACK_FRAME("org.gameplay3d.AnimationClip","setBlendWeight",0xbd9d4e8e,"org.gameplay3d.AnimationClip.setBlendWeight","org/gameplay3d/AnimationClip.hx",151,0x3281fc97)
		HX_STACK_THIS(this)
		HX_STACK_ARG(blendWeight,"blendWeight")
		HX_STACK_LINE(151)
		::org::gameplay3d::AnimationClip_obj::hx_AnimationClip_setBlendWeight(this->nativeObject,blendWeight);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AnimationClip_obj,setBlendWeight,(void))

Void AnimationClip_obj::setRepeatCount( Float repeatCount){
{
		HX_STACK_FRAME("org.gameplay3d.AnimationClip","setRepeatCount",0x230f8159,"org.gameplay3d.AnimationClip.setRepeatCount","org/gameplay3d/AnimationClip.hx",157,0x3281fc97)
		HX_STACK_THIS(this)
		HX_STACK_ARG(repeatCount,"repeatCount")
		HX_STACK_LINE(157)
		::org::gameplay3d::AnimationClip_obj::hx_AnimationClip_setRepeatCount(this->nativeObject,repeatCount);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AnimationClip_obj,setRepeatCount,(void))

Void AnimationClip_obj::setSpeed( Float speed){
{
		HX_STACK_FRAME("org.gameplay3d.AnimationClip","setSpeed",0x7e295bac,"org.gameplay3d.AnimationClip.setSpeed","org/gameplay3d/AnimationClip.hx",163,0x3281fc97)
		HX_STACK_THIS(this)
		HX_STACK_ARG(speed,"speed")
		HX_STACK_LINE(163)
		::org::gameplay3d::AnimationClip_obj::hx_AnimationClip_setSpeed(this->nativeObject,speed);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AnimationClip_obj,setSpeed,(void))

Void AnimationClip_obj::stop( ){
{
		HX_STACK_FRAME("org.gameplay3d.AnimationClip","stop",0x0462eba9,"org.gameplay3d.AnimationClip.stop","org/gameplay3d/AnimationClip.hx",169,0x3281fc97)
		HX_STACK_THIS(this)
		HX_STACK_LINE(169)
		::org::gameplay3d::AnimationClip_obj::hx_AnimationClip_stop(this->nativeObject);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationClip_obj,stop,(void))

int AnimationClip_obj::REPEAT_INDEFINITE;

Dynamic AnimationClip_obj::hx_AnimationClip_addBeginListener_Lsnr;

Dynamic AnimationClip_obj::hx_AnimationClip_addBeginListener_Str;

Dynamic AnimationClip_obj::hx_AnimationClip_addEndListener_Lsnr;

Dynamic AnimationClip_obj::hx_AnimationClip_addEndListener_Str;

Dynamic AnimationClip_obj::hx_AnimationClip_addListener_Lsnr_Int;

Dynamic AnimationClip_obj::hx_AnimationClip_addListener_Str_Int;

Dynamic AnimationClip_obj::hx_AnimationClip_crossFade;

Dynamic AnimationClip_obj::hx_AnimationClip_getActiveDuration;

Dynamic AnimationClip_obj::hx_AnimationClip_getAnimation;

Dynamic AnimationClip_obj::hx_AnimationClip_getBlendWeight;

Dynamic AnimationClip_obj::hx_AnimationClip_getDuration;

Dynamic AnimationClip_obj::hx_AnimationClip_getElaspedTime;

Dynamic AnimationClip_obj::hx_AnimationClip_getEndTime;

Dynamic AnimationClip_obj::hx_AnimationClip_getId;

Dynamic AnimationClip_obj::hx_AnimationClip_getRepeatCount;

Dynamic AnimationClip_obj::hx_AnimationClip_getSpeed;

Dynamic AnimationClip_obj::hx_AnimationClip_getStartTime;

Dynamic AnimationClip_obj::hx_AnimationClip_isPlaying;

Dynamic AnimationClip_obj::hx_AnimationClip_pause;

Dynamic AnimationClip_obj::hx_AnimationClip_play;

Dynamic AnimationClip_obj::hx_AnimationClip_setActiveDuration;

Dynamic AnimationClip_obj::hx_AnimationClip_setBlendWeight;

Dynamic AnimationClip_obj::hx_AnimationClip_setRepeatCount;

Dynamic AnimationClip_obj::hx_AnimationClip_setSpeed;

Dynamic AnimationClip_obj::hx_AnimationClip_stop;


AnimationClip_obj::AnimationClip_obj()
{
}

Dynamic AnimationClip_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"getId") ) { return getId_dyn(); }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getSpeed") ) { return getSpeed_dyn(); }
		if (HX_FIELD_EQ(inName,"setSpeed") ) { return setSpeed_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"crossFade") ) { return crossFade_dyn(); }
		if (HX_FIELD_EQ(inName,"isPlaying") ) { return isPlaying_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getEndTime") ) { return getEndTime_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getDuration") ) { return getDuration_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getAnimation") ) { return getAnimation_dyn(); }
		if (HX_FIELD_EQ(inName,"getStartTime") ) { return getStartTime_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getBlendWeight") ) { return getBlendWeight_dyn(); }
		if (HX_FIELD_EQ(inName,"getElaspedTime") ) { return getElaspedTime_dyn(); }
		if (HX_FIELD_EQ(inName,"getRepeatCount") ) { return getRepeatCount_dyn(); }
		if (HX_FIELD_EQ(inName,"setBlendWeight") ) { return setBlendWeight_dyn(); }
		if (HX_FIELD_EQ(inName,"setRepeatCount") ) { return setRepeatCount_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addBeginListener") ) { return addBeginListener_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getActiveDuration") ) { return getActiveDuration_dyn(); }
		if (HX_FIELD_EQ(inName,"setActiveDuration") ) { return setActiveDuration_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"addEndListener_Str") ) { return addEndListener_Str_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"addEndListener_Lsnr") ) { return addEndListener_Lsnr_dyn(); }
		if (HX_FIELD_EQ(inName,"addListener_Str_Int") ) { return addListener_Str_Int_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"addBeginListener_Str") ) { return addBeginListener_Str_dyn(); }
		if (HX_FIELD_EQ(inName,"addListener_Lsnr_Int") ) { return addListener_Lsnr_Int_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hx_AnimationClip_play") ) { return hx_AnimationClip_play; }
		if (HX_FIELD_EQ(inName,"hx_AnimationClip_stop") ) { return hx_AnimationClip_stop; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_AnimationClip_getId") ) { return hx_AnimationClip_getId; }
		if (HX_FIELD_EQ(inName,"hx_AnimationClip_pause") ) { return hx_AnimationClip_pause; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_AnimationClip_getSpeed") ) { return hx_AnimationClip_getSpeed; }
		if (HX_FIELD_EQ(inName,"hx_AnimationClip_setSpeed") ) { return hx_AnimationClip_setSpeed; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_AnimationClip_crossFade") ) { return hx_AnimationClip_crossFade; }
		if (HX_FIELD_EQ(inName,"hx_AnimationClip_isPlaying") ) { return hx_AnimationClip_isPlaying; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"hx_AnimationClip_getEndTime") ) { return hx_AnimationClip_getEndTime; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_AnimationClip_getDuration") ) { return hx_AnimationClip_getDuration; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_AnimationClip_getAnimation") ) { return hx_AnimationClip_getAnimation; }
		if (HX_FIELD_EQ(inName,"hx_AnimationClip_getStartTime") ) { return hx_AnimationClip_getStartTime; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"hx_AnimationClip_getBlendWeight") ) { return hx_AnimationClip_getBlendWeight; }
		if (HX_FIELD_EQ(inName,"hx_AnimationClip_getElaspedTime") ) { return hx_AnimationClip_getElaspedTime; }
		if (HX_FIELD_EQ(inName,"hx_AnimationClip_getRepeatCount") ) { return hx_AnimationClip_getRepeatCount; }
		if (HX_FIELD_EQ(inName,"hx_AnimationClip_setBlendWeight") ) { return hx_AnimationClip_setBlendWeight; }
		if (HX_FIELD_EQ(inName,"hx_AnimationClip_setRepeatCount") ) { return hx_AnimationClip_setRepeatCount; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"hx_AnimationClip_getActiveDuration") ) { return hx_AnimationClip_getActiveDuration; }
		if (HX_FIELD_EQ(inName,"hx_AnimationClip_setActiveDuration") ) { return hx_AnimationClip_setActiveDuration; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"hx_AnimationClip_addEndListener_Str") ) { return hx_AnimationClip_addEndListener_Str; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"hx_AnimationClip_addEndListener_Lsnr") ) { return hx_AnimationClip_addEndListener_Lsnr; }
		if (HX_FIELD_EQ(inName,"hx_AnimationClip_addListener_Str_Int") ) { return hx_AnimationClip_addListener_Str_Int; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"hx_AnimationClip_addBeginListener_Str") ) { return hx_AnimationClip_addBeginListener_Str; }
		if (HX_FIELD_EQ(inName,"hx_AnimationClip_addListener_Lsnr_Int") ) { return hx_AnimationClip_addListener_Lsnr_Int; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"hx_AnimationClip_addBeginListener_Lsnr") ) { return hx_AnimationClip_addBeginListener_Lsnr; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AnimationClip_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 21:
		if (HX_FIELD_EQ(inName,"hx_AnimationClip_play") ) { hx_AnimationClip_play=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_AnimationClip_stop") ) { hx_AnimationClip_stop=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_AnimationClip_getId") ) { hx_AnimationClip_getId=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_AnimationClip_pause") ) { hx_AnimationClip_pause=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_AnimationClip_getSpeed") ) { hx_AnimationClip_getSpeed=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_AnimationClip_setSpeed") ) { hx_AnimationClip_setSpeed=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_AnimationClip_crossFade") ) { hx_AnimationClip_crossFade=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_AnimationClip_isPlaying") ) { hx_AnimationClip_isPlaying=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"hx_AnimationClip_getEndTime") ) { hx_AnimationClip_getEndTime=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_AnimationClip_getDuration") ) { hx_AnimationClip_getDuration=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_AnimationClip_getAnimation") ) { hx_AnimationClip_getAnimation=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_AnimationClip_getStartTime") ) { hx_AnimationClip_getStartTime=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"hx_AnimationClip_getBlendWeight") ) { hx_AnimationClip_getBlendWeight=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_AnimationClip_getElaspedTime") ) { hx_AnimationClip_getElaspedTime=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_AnimationClip_getRepeatCount") ) { hx_AnimationClip_getRepeatCount=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_AnimationClip_setBlendWeight") ) { hx_AnimationClip_setBlendWeight=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_AnimationClip_setRepeatCount") ) { hx_AnimationClip_setRepeatCount=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"hx_AnimationClip_getActiveDuration") ) { hx_AnimationClip_getActiveDuration=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_AnimationClip_setActiveDuration") ) { hx_AnimationClip_setActiveDuration=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"hx_AnimationClip_addEndListener_Str") ) { hx_AnimationClip_addEndListener_Str=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"hx_AnimationClip_addEndListener_Lsnr") ) { hx_AnimationClip_addEndListener_Lsnr=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_AnimationClip_addListener_Str_Int") ) { hx_AnimationClip_addListener_Str_Int=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"hx_AnimationClip_addBeginListener_Str") ) { hx_AnimationClip_addBeginListener_Str=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_AnimationClip_addListener_Lsnr_Int") ) { hx_AnimationClip_addListener_Lsnr_Int=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"hx_AnimationClip_addBeginListener_Lsnr") ) { hx_AnimationClip_addBeginListener_Lsnr=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AnimationClip_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("REPEAT_INDEFINITE"),
	HX_CSTRING("hx_AnimationClip_addBeginListener_Lsnr"),
	HX_CSTRING("hx_AnimationClip_addBeginListener_Str"),
	HX_CSTRING("hx_AnimationClip_addEndListener_Lsnr"),
	HX_CSTRING("hx_AnimationClip_addEndListener_Str"),
	HX_CSTRING("hx_AnimationClip_addListener_Lsnr_Int"),
	HX_CSTRING("hx_AnimationClip_addListener_Str_Int"),
	HX_CSTRING("hx_AnimationClip_crossFade"),
	HX_CSTRING("hx_AnimationClip_getActiveDuration"),
	HX_CSTRING("hx_AnimationClip_getAnimation"),
	HX_CSTRING("hx_AnimationClip_getBlendWeight"),
	HX_CSTRING("hx_AnimationClip_getDuration"),
	HX_CSTRING("hx_AnimationClip_getElaspedTime"),
	HX_CSTRING("hx_AnimationClip_getEndTime"),
	HX_CSTRING("hx_AnimationClip_getId"),
	HX_CSTRING("hx_AnimationClip_getRepeatCount"),
	HX_CSTRING("hx_AnimationClip_getSpeed"),
	HX_CSTRING("hx_AnimationClip_getStartTime"),
	HX_CSTRING("hx_AnimationClip_isPlaying"),
	HX_CSTRING("hx_AnimationClip_pause"),
	HX_CSTRING("hx_AnimationClip_play"),
	HX_CSTRING("hx_AnimationClip_setActiveDuration"),
	HX_CSTRING("hx_AnimationClip_setBlendWeight"),
	HX_CSTRING("hx_AnimationClip_setRepeatCount"),
	HX_CSTRING("hx_AnimationClip_setSpeed"),
	HX_CSTRING("hx_AnimationClip_stop"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("addBeginListener"),
	HX_CSTRING("addBeginListener_Str"),
	HX_CSTRING("addEndListener_Lsnr"),
	HX_CSTRING("addEndListener_Str"),
	HX_CSTRING("addListener_Lsnr_Int"),
	HX_CSTRING("addListener_Str_Int"),
	HX_CSTRING("crossFade"),
	HX_CSTRING("getActiveDuration"),
	HX_CSTRING("getAnimation"),
	HX_CSTRING("getBlendWeight"),
	HX_CSTRING("getDuration"),
	HX_CSTRING("getElaspedTime"),
	HX_CSTRING("getEndTime"),
	HX_CSTRING("getId"),
	HX_CSTRING("getRepeatCount"),
	HX_CSTRING("getSpeed"),
	HX_CSTRING("getStartTime"),
	HX_CSTRING("isPlaying"),
	HX_CSTRING("pause"),
	HX_CSTRING("play"),
	HX_CSTRING("setActiveDuration"),
	HX_CSTRING("setBlendWeight"),
	HX_CSTRING("setRepeatCount"),
	HX_CSTRING("setSpeed"),
	HX_CSTRING("stop"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AnimationClip_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AnimationClip_obj::REPEAT_INDEFINITE,"REPEAT_INDEFINITE");
	HX_MARK_MEMBER_NAME(AnimationClip_obj::hx_AnimationClip_addBeginListener_Lsnr,"hx_AnimationClip_addBeginListener_Lsnr");
	HX_MARK_MEMBER_NAME(AnimationClip_obj::hx_AnimationClip_addBeginListener_Str,"hx_AnimationClip_addBeginListener_Str");
	HX_MARK_MEMBER_NAME(AnimationClip_obj::hx_AnimationClip_addEndListener_Lsnr,"hx_AnimationClip_addEndListener_Lsnr");
	HX_MARK_MEMBER_NAME(AnimationClip_obj::hx_AnimationClip_addEndListener_Str,"hx_AnimationClip_addEndListener_Str");
	HX_MARK_MEMBER_NAME(AnimationClip_obj::hx_AnimationClip_addListener_Lsnr_Int,"hx_AnimationClip_addListener_Lsnr_Int");
	HX_MARK_MEMBER_NAME(AnimationClip_obj::hx_AnimationClip_addListener_Str_Int,"hx_AnimationClip_addListener_Str_Int");
	HX_MARK_MEMBER_NAME(AnimationClip_obj::hx_AnimationClip_crossFade,"hx_AnimationClip_crossFade");
	HX_MARK_MEMBER_NAME(AnimationClip_obj::hx_AnimationClip_getActiveDuration,"hx_AnimationClip_getActiveDuration");
	HX_MARK_MEMBER_NAME(AnimationClip_obj::hx_AnimationClip_getAnimation,"hx_AnimationClip_getAnimation");
	HX_MARK_MEMBER_NAME(AnimationClip_obj::hx_AnimationClip_getBlendWeight,"hx_AnimationClip_getBlendWeight");
	HX_MARK_MEMBER_NAME(AnimationClip_obj::hx_AnimationClip_getDuration,"hx_AnimationClip_getDuration");
	HX_MARK_MEMBER_NAME(AnimationClip_obj::hx_AnimationClip_getElaspedTime,"hx_AnimationClip_getElaspedTime");
	HX_MARK_MEMBER_NAME(AnimationClip_obj::hx_AnimationClip_getEndTime,"hx_AnimationClip_getEndTime");
	HX_MARK_MEMBER_NAME(AnimationClip_obj::hx_AnimationClip_getId,"hx_AnimationClip_getId");
	HX_MARK_MEMBER_NAME(AnimationClip_obj::hx_AnimationClip_getRepeatCount,"hx_AnimationClip_getRepeatCount");
	HX_MARK_MEMBER_NAME(AnimationClip_obj::hx_AnimationClip_getSpeed,"hx_AnimationClip_getSpeed");
	HX_MARK_MEMBER_NAME(AnimationClip_obj::hx_AnimationClip_getStartTime,"hx_AnimationClip_getStartTime");
	HX_MARK_MEMBER_NAME(AnimationClip_obj::hx_AnimationClip_isPlaying,"hx_AnimationClip_isPlaying");
	HX_MARK_MEMBER_NAME(AnimationClip_obj::hx_AnimationClip_pause,"hx_AnimationClip_pause");
	HX_MARK_MEMBER_NAME(AnimationClip_obj::hx_AnimationClip_play,"hx_AnimationClip_play");
	HX_MARK_MEMBER_NAME(AnimationClip_obj::hx_AnimationClip_setActiveDuration,"hx_AnimationClip_setActiveDuration");
	HX_MARK_MEMBER_NAME(AnimationClip_obj::hx_AnimationClip_setBlendWeight,"hx_AnimationClip_setBlendWeight");
	HX_MARK_MEMBER_NAME(AnimationClip_obj::hx_AnimationClip_setRepeatCount,"hx_AnimationClip_setRepeatCount");
	HX_MARK_MEMBER_NAME(AnimationClip_obj::hx_AnimationClip_setSpeed,"hx_AnimationClip_setSpeed");
	HX_MARK_MEMBER_NAME(AnimationClip_obj::hx_AnimationClip_stop,"hx_AnimationClip_stop");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AnimationClip_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AnimationClip_obj::REPEAT_INDEFINITE,"REPEAT_INDEFINITE");
	HX_VISIT_MEMBER_NAME(AnimationClip_obj::hx_AnimationClip_addBeginListener_Lsnr,"hx_AnimationClip_addBeginListener_Lsnr");
	HX_VISIT_MEMBER_NAME(AnimationClip_obj::hx_AnimationClip_addBeginListener_Str,"hx_AnimationClip_addBeginListener_Str");
	HX_VISIT_MEMBER_NAME(AnimationClip_obj::hx_AnimationClip_addEndListener_Lsnr,"hx_AnimationClip_addEndListener_Lsnr");
	HX_VISIT_MEMBER_NAME(AnimationClip_obj::hx_AnimationClip_addEndListener_Str,"hx_AnimationClip_addEndListener_Str");
	HX_VISIT_MEMBER_NAME(AnimationClip_obj::hx_AnimationClip_addListener_Lsnr_Int,"hx_AnimationClip_addListener_Lsnr_Int");
	HX_VISIT_MEMBER_NAME(AnimationClip_obj::hx_AnimationClip_addListener_Str_Int,"hx_AnimationClip_addListener_Str_Int");
	HX_VISIT_MEMBER_NAME(AnimationClip_obj::hx_AnimationClip_crossFade,"hx_AnimationClip_crossFade");
	HX_VISIT_MEMBER_NAME(AnimationClip_obj::hx_AnimationClip_getActiveDuration,"hx_AnimationClip_getActiveDuration");
	HX_VISIT_MEMBER_NAME(AnimationClip_obj::hx_AnimationClip_getAnimation,"hx_AnimationClip_getAnimation");
	HX_VISIT_MEMBER_NAME(AnimationClip_obj::hx_AnimationClip_getBlendWeight,"hx_AnimationClip_getBlendWeight");
	HX_VISIT_MEMBER_NAME(AnimationClip_obj::hx_AnimationClip_getDuration,"hx_AnimationClip_getDuration");
	HX_VISIT_MEMBER_NAME(AnimationClip_obj::hx_AnimationClip_getElaspedTime,"hx_AnimationClip_getElaspedTime");
	HX_VISIT_MEMBER_NAME(AnimationClip_obj::hx_AnimationClip_getEndTime,"hx_AnimationClip_getEndTime");
	HX_VISIT_MEMBER_NAME(AnimationClip_obj::hx_AnimationClip_getId,"hx_AnimationClip_getId");
	HX_VISIT_MEMBER_NAME(AnimationClip_obj::hx_AnimationClip_getRepeatCount,"hx_AnimationClip_getRepeatCount");
	HX_VISIT_MEMBER_NAME(AnimationClip_obj::hx_AnimationClip_getSpeed,"hx_AnimationClip_getSpeed");
	HX_VISIT_MEMBER_NAME(AnimationClip_obj::hx_AnimationClip_getStartTime,"hx_AnimationClip_getStartTime");
	HX_VISIT_MEMBER_NAME(AnimationClip_obj::hx_AnimationClip_isPlaying,"hx_AnimationClip_isPlaying");
	HX_VISIT_MEMBER_NAME(AnimationClip_obj::hx_AnimationClip_pause,"hx_AnimationClip_pause");
	HX_VISIT_MEMBER_NAME(AnimationClip_obj::hx_AnimationClip_play,"hx_AnimationClip_play");
	HX_VISIT_MEMBER_NAME(AnimationClip_obj::hx_AnimationClip_setActiveDuration,"hx_AnimationClip_setActiveDuration");
	HX_VISIT_MEMBER_NAME(AnimationClip_obj::hx_AnimationClip_setBlendWeight,"hx_AnimationClip_setBlendWeight");
	HX_VISIT_MEMBER_NAME(AnimationClip_obj::hx_AnimationClip_setRepeatCount,"hx_AnimationClip_setRepeatCount");
	HX_VISIT_MEMBER_NAME(AnimationClip_obj::hx_AnimationClip_setSpeed,"hx_AnimationClip_setSpeed");
	HX_VISIT_MEMBER_NAME(AnimationClip_obj::hx_AnimationClip_stop,"hx_AnimationClip_stop");
};

#endif

Class AnimationClip_obj::__mClass;

void AnimationClip_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.AnimationClip"), hx::TCanCast< AnimationClip_obj> ,sStaticFields,sMemberFields,
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

void AnimationClip_obj::__boot()
{
	REPEAT_INDEFINITE= (int)0;
	hx_AnimationClip_addBeginListener_Lsnr= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AnimationClip >(),HX_CSTRING("addBeginListener_Lsnr"),(int)2);
	hx_AnimationClip_addBeginListener_Str= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AnimationClip >(),HX_CSTRING("addBeginListener_Str"),(int)2);
	hx_AnimationClip_addEndListener_Lsnr= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AnimationClip >(),HX_CSTRING("addEndListener_Lsnr"),(int)2);
	hx_AnimationClip_addEndListener_Str= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AnimationClip >(),HX_CSTRING("addEndListener_Str"),(int)2);
	hx_AnimationClip_addListener_Lsnr_Int= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AnimationClip >(),HX_CSTRING("addListener_Lsnr_Int"),(int)3);
	hx_AnimationClip_addListener_Str_Int= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AnimationClip >(),HX_CSTRING("addListener_Str_Int"),(int)3);
	hx_AnimationClip_crossFade= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AnimationClip >(),HX_CSTRING("crossFade"),(int)3);
	hx_AnimationClip_getActiveDuration= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AnimationClip >(),HX_CSTRING("getActiveDuration"),(int)1);
	hx_AnimationClip_getAnimation= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AnimationClip >(),HX_CSTRING("getAnimation"),(int)1);
	hx_AnimationClip_getBlendWeight= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AnimationClip >(),HX_CSTRING("getBlendWeight"),(int)1);
	hx_AnimationClip_getDuration= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AnimationClip >(),HX_CSTRING("getDuration"),(int)1);
	hx_AnimationClip_getElaspedTime= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AnimationClip >(),HX_CSTRING("getElaspedTime"),(int)1);
	hx_AnimationClip_getEndTime= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AnimationClip >(),HX_CSTRING("getEndTime"),(int)1);
	hx_AnimationClip_getId= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AnimationClip >(),HX_CSTRING("getId"),(int)1);
	hx_AnimationClip_getRepeatCount= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AnimationClip >(),HX_CSTRING("getRepeatCount"),(int)1);
	hx_AnimationClip_getSpeed= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AnimationClip >(),HX_CSTRING("getSpeed"),(int)1);
	hx_AnimationClip_getStartTime= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AnimationClip >(),HX_CSTRING("getStartTime"),(int)1);
	hx_AnimationClip_isPlaying= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AnimationClip >(),HX_CSTRING("isPlaying"),(int)1);
	hx_AnimationClip_pause= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AnimationClip >(),HX_CSTRING("pause"),(int)1);
	hx_AnimationClip_play= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AnimationClip >(),HX_CSTRING("play"),(int)1);
	hx_AnimationClip_setActiveDuration= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AnimationClip >(),HX_CSTRING("setActiveDuration"),(int)2);
	hx_AnimationClip_setBlendWeight= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AnimationClip >(),HX_CSTRING("setBlendWeight"),(int)2);
	hx_AnimationClip_setRepeatCount= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AnimationClip >(),HX_CSTRING("setRepeatCount"),(int)2);
	hx_AnimationClip_setSpeed= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AnimationClip >(),HX_CSTRING("setSpeed"),(int)2);
	hx_AnimationClip_stop= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AnimationClip >(),HX_CSTRING("stop"),(int)1);
}

} // end namespace org
} // end namespace gameplay3d
