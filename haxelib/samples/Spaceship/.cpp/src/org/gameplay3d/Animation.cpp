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
#ifndef INCLUDED_org_gameplay3d_AnimationTarget
#include <org/gameplay3d/AnimationTarget.h>
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
#ifndef INCLUDED_org_gameplay3d_intern_NativeBinding
#include <org/gameplay3d/intern/NativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_NativeInterface
#include <org/gameplay3d/util/NativeInterface.h>
#endif
namespace org{
namespace gameplay3d{

Void Animation_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.Animation","new",0xa17d0c29,"org.gameplay3d.Animation.new","org/gameplay3d/Animation.hx",9,0x2d42c907)
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

//Animation_obj::~Animation_obj() { }

Dynamic Animation_obj::__CreateEmpty() { return  new Animation_obj; }
hx::ObjectPtr< Animation_obj > Animation_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< Animation_obj > result = new Animation_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic Animation_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Animation_obj > result = new Animation_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *Animation_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::intern::INativeBinding_obj)) return operator ::org::gameplay3d::intern::INativeBinding_obj *();
	if (inType==typeid( ::org::gameplay3d::Ref_obj)) return operator ::org::gameplay3d::Ref_obj *();
	return super::__ToInterface(inType);
}

::org::gameplay3d::AnimationClip Animation_obj::createClip( ::String id,int start,int end){
	HX_STACK_FRAME("org.gameplay3d.Animation","createClip",0xa32fef43,"org.gameplay3d.Animation.createClip","org/gameplay3d/Animation.hx",18,0x2d42c907)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(18)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::AnimationClip >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(18)
	Dynamic nativeObject = ::org::gameplay3d::Animation_obj::hx_Animation_createClip(this->nativeObject,id,start,end);		HX_STACK_VAR(nativeObject,"nativeObject");
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
			::org::gameplay3d::AnimationClip result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(18)
			if (((result == null()))){
				HX_STACK_LINE(18)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(18)
				::org::gameplay3d::AnimationClip _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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


HX_DEFINE_DYNAMIC_FUNC3(Animation_obj,createClip,return )

Void Animation_obj::createClips( ::String url){
{
		HX_STACK_FRAME("org.gameplay3d.Animation","createClips",0x26c16bd0,"org.gameplay3d.Animation.createClips","org/gameplay3d/Animation.hx",24,0x2d42c907)
		HX_STACK_THIS(this)
		HX_STACK_ARG(url,"url")
		HX_STACK_LINE(24)
		::org::gameplay3d::Animation_obj::hx_Animation_createClips(this->nativeObject,url);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,createClips,(void))

::org::gameplay3d::AnimationClip Animation_obj::getClip_Str( ::String clipId){
	HX_STACK_FRAME("org.gameplay3d.Animation","getClip_Str",0x3bd02be1,"org.gameplay3d.Animation.getClip_Str","org/gameplay3d/Animation.hx",30,0x2d42c907)
	HX_STACK_THIS(this)
	HX_STACK_ARG(clipId,"clipId")
	HX_STACK_LINE(30)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::AnimationClip >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(30)
	Dynamic nativeObject = ::org::gameplay3d::Animation_obj::hx_Animation_getClip_Str(this->nativeObject,clipId);		HX_STACK_VAR(nativeObject,"nativeObject");
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
			::org::gameplay3d::AnimationClip result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(30)
			if (((result == null()))){
				HX_STACK_LINE(30)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(30)
				::org::gameplay3d::AnimationClip _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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


HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,getClip_Str,return )

::org::gameplay3d::AnimationClip Animation_obj::getClip_Int( int index){
	HX_STACK_FRAME("org.gameplay3d.Animation","getClip_Int",0x3bc8901f,"org.gameplay3d.Animation.getClip_Int","org/gameplay3d/Animation.hx",36,0x2d42c907)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(36)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::AnimationClip >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(36)
	Dynamic nativeObject = ::org::gameplay3d::Animation_obj::hx_Animation_getClip_Int(this->nativeObject,index);		HX_STACK_VAR(nativeObject,"nativeObject");
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
			::org::gameplay3d::AnimationClip result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(36)
			if (((result == null()))){
				HX_STACK_LINE(36)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(36)
				::org::gameplay3d::AnimationClip _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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


HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,getClip_Int,return )

int Animation_obj::getClipCount( ){
	HX_STACK_FRAME("org.gameplay3d.Animation","getClipCount",0x0da0b380,"org.gameplay3d.Animation.getClipCount","org/gameplay3d/Animation.hx",42,0x2d42c907)
	HX_STACK_THIS(this)
	HX_STACK_LINE(42)
	return ::org::gameplay3d::Animation_obj::hx_Animation_getClipCount(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,getClipCount,return )

int Animation_obj::getDuration( ){
	HX_STACK_FRAME("org.gameplay3d.Animation","getDuration",0xef697ed3,"org.gameplay3d.Animation.getDuration","org/gameplay3d/Animation.hx",48,0x2d42c907)
	HX_STACK_THIS(this)
	HX_STACK_LINE(48)
	return ::org::gameplay3d::Animation_obj::hx_Animation_getDuration(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,getDuration,return )

::String Animation_obj::getId( ){
	HX_STACK_FRAME("org.gameplay3d.Animation","getId",0xbc27121a,"org.gameplay3d.Animation.getId","org/gameplay3d/Animation.hx",54,0x2d42c907)
	HX_STACK_THIS(this)
	HX_STACK_LINE(54)
	return ::org::gameplay3d::Animation_obj::hx_Animation_getId(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,getId,return )

Void Animation_obj::pause( ::String clipId){
{
		HX_STACK_FRAME("org.gameplay3d.Animation","pause",0xe81e56ff,"org.gameplay3d.Animation.pause","org/gameplay3d/Animation.hx",60,0x2d42c907)
		HX_STACK_THIS(this)
		HX_STACK_ARG(clipId,"clipId")
		HX_STACK_LINE(60)
		::org::gameplay3d::Animation_obj::hx_Animation_pause(this->nativeObject,clipId);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,pause,(void))

Void Animation_obj::play( ::String clipId){
{
		HX_STACK_FRAME("org.gameplay3d.Animation","play",0xad45420b,"org.gameplay3d.Animation.play","org/gameplay3d/Animation.hx",66,0x2d42c907)
		HX_STACK_THIS(this)
		HX_STACK_ARG(clipId,"clipId")
		HX_STACK_LINE(66)
		::org::gameplay3d::Animation_obj::hx_Animation_play(this->nativeObject,clipId);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,play,(void))

Void Animation_obj::stop( ::String clipId){
{
		HX_STACK_FRAME("org.gameplay3d.Animation","stop",0xaf470419,"org.gameplay3d.Animation.stop","org/gameplay3d/Animation.hx",72,0x2d42c907)
		HX_STACK_THIS(this)
		HX_STACK_ARG(clipId,"clipId")
		HX_STACK_LINE(72)
		::org::gameplay3d::Animation_obj::hx_Animation_stop(this->nativeObject,clipId);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,stop,(void))

bool Animation_obj::targets( ::org::gameplay3d::AnimationTarget target){
	HX_STACK_FRAME("org.gameplay3d.Animation","targets",0xd1d5484b,"org.gameplay3d.Animation.targets","org/gameplay3d/Animation.hx",78,0x2d42c907)
	HX_STACK_THIS(this)
	HX_STACK_ARG(target,"target")
	HX_STACK_LINE(78)
	return ::org::gameplay3d::Animation_obj::hx_Animation_targets(this->nativeObject,(  (((target == null()))) ? Dynamic(null()) : Dynamic(target->__Field(HX_CSTRING("nativeObject"),true)) ));
}


HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,targets,return )

Dynamic Animation_obj::hx_Animation_createClip;

Dynamic Animation_obj::hx_Animation_createClips;

Dynamic Animation_obj::hx_Animation_getClip_Str;

Dynamic Animation_obj::hx_Animation_getClip_Int;

Dynamic Animation_obj::hx_Animation_getClipCount;

Dynamic Animation_obj::hx_Animation_getDuration;

Dynamic Animation_obj::hx_Animation_getId;

Dynamic Animation_obj::hx_Animation_pause;

Dynamic Animation_obj::hx_Animation_play;

Dynamic Animation_obj::hx_Animation_stop;

Dynamic Animation_obj::hx_Animation_targets;


Animation_obj::Animation_obj()
{
}

Dynamic Animation_obj::__Field(const ::String &inName,bool inCallProp)
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
	case 7:
		if (HX_FIELD_EQ(inName,"targets") ) { return targets_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"createClip") ) { return createClip_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"createClips") ) { return createClips_dyn(); }
		if (HX_FIELD_EQ(inName,"getClip_Str") ) { return getClip_Str_dyn(); }
		if (HX_FIELD_EQ(inName,"getClip_Int") ) { return getClip_Int_dyn(); }
		if (HX_FIELD_EQ(inName,"getDuration") ) { return getDuration_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getClipCount") ) { return getClipCount_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"hx_Animation_play") ) { return hx_Animation_play; }
		if (HX_FIELD_EQ(inName,"hx_Animation_stop") ) { return hx_Animation_stop; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hx_Animation_getId") ) { return hx_Animation_getId; }
		if (HX_FIELD_EQ(inName,"hx_Animation_pause") ) { return hx_Animation_pause; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Animation_targets") ) { return hx_Animation_targets; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_Animation_createClip") ) { return hx_Animation_createClip; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_Animation_createClips") ) { return hx_Animation_createClips; }
		if (HX_FIELD_EQ(inName,"hx_Animation_getClip_Str") ) { return hx_Animation_getClip_Str; }
		if (HX_FIELD_EQ(inName,"hx_Animation_getClip_Int") ) { return hx_Animation_getClip_Int; }
		if (HX_FIELD_EQ(inName,"hx_Animation_getDuration") ) { return hx_Animation_getDuration; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_Animation_getClipCount") ) { return hx_Animation_getClipCount; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Animation_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"hx_Animation_play") ) { hx_Animation_play=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Animation_stop") ) { hx_Animation_stop=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hx_Animation_getId") ) { hx_Animation_getId=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Animation_pause") ) { hx_Animation_pause=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Animation_targets") ) { hx_Animation_targets=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_Animation_createClip") ) { hx_Animation_createClip=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_Animation_createClips") ) { hx_Animation_createClips=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Animation_getClip_Str") ) { hx_Animation_getClip_Str=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Animation_getClip_Int") ) { hx_Animation_getClip_Int=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Animation_getDuration") ) { hx_Animation_getDuration=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_Animation_getClipCount") ) { hx_Animation_getClipCount=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Animation_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("hx_Animation_createClip"),
	HX_CSTRING("hx_Animation_createClips"),
	HX_CSTRING("hx_Animation_getClip_Str"),
	HX_CSTRING("hx_Animation_getClip_Int"),
	HX_CSTRING("hx_Animation_getClipCount"),
	HX_CSTRING("hx_Animation_getDuration"),
	HX_CSTRING("hx_Animation_getId"),
	HX_CSTRING("hx_Animation_pause"),
	HX_CSTRING("hx_Animation_play"),
	HX_CSTRING("hx_Animation_stop"),
	HX_CSTRING("hx_Animation_targets"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("createClip"),
	HX_CSTRING("createClips"),
	HX_CSTRING("getClip_Str"),
	HX_CSTRING("getClip_Int"),
	HX_CSTRING("getClipCount"),
	HX_CSTRING("getDuration"),
	HX_CSTRING("getId"),
	HX_CSTRING("pause"),
	HX_CSTRING("play"),
	HX_CSTRING("stop"),
	HX_CSTRING("targets"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Animation_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Animation_obj::hx_Animation_createClip,"hx_Animation_createClip");
	HX_MARK_MEMBER_NAME(Animation_obj::hx_Animation_createClips,"hx_Animation_createClips");
	HX_MARK_MEMBER_NAME(Animation_obj::hx_Animation_getClip_Str,"hx_Animation_getClip_Str");
	HX_MARK_MEMBER_NAME(Animation_obj::hx_Animation_getClip_Int,"hx_Animation_getClip_Int");
	HX_MARK_MEMBER_NAME(Animation_obj::hx_Animation_getClipCount,"hx_Animation_getClipCount");
	HX_MARK_MEMBER_NAME(Animation_obj::hx_Animation_getDuration,"hx_Animation_getDuration");
	HX_MARK_MEMBER_NAME(Animation_obj::hx_Animation_getId,"hx_Animation_getId");
	HX_MARK_MEMBER_NAME(Animation_obj::hx_Animation_pause,"hx_Animation_pause");
	HX_MARK_MEMBER_NAME(Animation_obj::hx_Animation_play,"hx_Animation_play");
	HX_MARK_MEMBER_NAME(Animation_obj::hx_Animation_stop,"hx_Animation_stop");
	HX_MARK_MEMBER_NAME(Animation_obj::hx_Animation_targets,"hx_Animation_targets");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Animation_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Animation_obj::hx_Animation_createClip,"hx_Animation_createClip");
	HX_VISIT_MEMBER_NAME(Animation_obj::hx_Animation_createClips,"hx_Animation_createClips");
	HX_VISIT_MEMBER_NAME(Animation_obj::hx_Animation_getClip_Str,"hx_Animation_getClip_Str");
	HX_VISIT_MEMBER_NAME(Animation_obj::hx_Animation_getClip_Int,"hx_Animation_getClip_Int");
	HX_VISIT_MEMBER_NAME(Animation_obj::hx_Animation_getClipCount,"hx_Animation_getClipCount");
	HX_VISIT_MEMBER_NAME(Animation_obj::hx_Animation_getDuration,"hx_Animation_getDuration");
	HX_VISIT_MEMBER_NAME(Animation_obj::hx_Animation_getId,"hx_Animation_getId");
	HX_VISIT_MEMBER_NAME(Animation_obj::hx_Animation_pause,"hx_Animation_pause");
	HX_VISIT_MEMBER_NAME(Animation_obj::hx_Animation_play,"hx_Animation_play");
	HX_VISIT_MEMBER_NAME(Animation_obj::hx_Animation_stop,"hx_Animation_stop");
	HX_VISIT_MEMBER_NAME(Animation_obj::hx_Animation_targets,"hx_Animation_targets");
};

#endif

Class Animation_obj::__mClass;

void Animation_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.Animation"), hx::TCanCast< Animation_obj> ,sStaticFields,sMemberFields,
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

void Animation_obj::__boot()
{
	hx_Animation_createClip= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Animation >(),HX_CSTRING("createClip"),(int)4);
	hx_Animation_createClips= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Animation >(),HX_CSTRING("createClips"),(int)2);
	hx_Animation_getClip_Str= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Animation >(),HX_CSTRING("getClip_Str"),(int)2);
	hx_Animation_getClip_Int= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Animation >(),HX_CSTRING("getClip_Int"),(int)2);
	hx_Animation_getClipCount= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Animation >(),HX_CSTRING("getClipCount"),(int)1);
	hx_Animation_getDuration= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Animation >(),HX_CSTRING("getDuration"),(int)1);
	hx_Animation_getId= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Animation >(),HX_CSTRING("getId"),(int)1);
	hx_Animation_pause= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Animation >(),HX_CSTRING("pause"),(int)2);
	hx_Animation_play= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Animation >(),HX_CSTRING("play"),(int)2);
	hx_Animation_stop= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Animation >(),HX_CSTRING("stop"),(int)2);
	hx_Animation_targets= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Animation >(),HX_CSTRING("targets"),(int)2);
}

} // end namespace org
} // end namespace gameplay3d
