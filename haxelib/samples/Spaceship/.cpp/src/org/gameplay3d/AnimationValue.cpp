#include <hxcpp.h>

#ifndef INCLUDED_org_gameplay3d_AnimationValue
#include <org/gameplay3d/AnimationValue.h>
#endif
#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_INativeBinding
#include <org/gameplay3d/intern/INativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_NativeBinding
#include <org/gameplay3d/intern/NativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_IMutableNativeArray
#include <org/gameplay3d/util/IMutableNativeArray.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_INativeArray
#include <org/gameplay3d/util/INativeArray.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_NativeInterface
#include <org/gameplay3d/util/NativeInterface.h>
#endif
namespace org{
namespace gameplay3d{

Void AnimationValue_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.AnimationValue","new",0x31159a2c,"org.gameplay3d.AnimationValue.new","org/gameplay3d/AnimationValue.hx",11,0xaccf0d24)
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

//AnimationValue_obj::~AnimationValue_obj() { }

Dynamic AnimationValue_obj::__CreateEmpty() { return  new AnimationValue_obj; }
hx::ObjectPtr< AnimationValue_obj > AnimationValue_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< AnimationValue_obj > result = new AnimationValue_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic AnimationValue_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AnimationValue_obj > result = new AnimationValue_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Float AnimationValue_obj::getFloat( int index){
	HX_STACK_FRAME("org.gameplay3d.AnimationValue","getFloat",0x226107da,"org.gameplay3d.AnimationValue.getFloat","org/gameplay3d/AnimationValue.hx",20,0xaccf0d24)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(20)
	return ::org::gameplay3d::AnimationValue_obj::hx_AnimationValue_getFloat(this->nativeObject,index);
}


HX_DEFINE_DYNAMIC_FUNC1(AnimationValue_obj,getFloat,return )

Void AnimationValue_obj::getFloats( int index,::org::gameplay3d::util::IMutableNativeArray values,int count){
{
		HX_STACK_FRAME("org.gameplay3d.AnimationValue","getFloats",0xf285d759,"org.gameplay3d.AnimationValue.getFloats","org/gameplay3d/AnimationValue.hx",26,0xaccf0d24)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(values,"values")
		HX_STACK_ARG(count,"count")
		HX_STACK_LINE(26)
		::org::gameplay3d::AnimationValue_obj::hx_AnimationValue_getFloats(this->nativeObject,index,(  (((values == null()))) ? Dynamic(null()) : Dynamic(values->__Field(HX_CSTRING("nativeObject"),true)) ),count);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(AnimationValue_obj,getFloats,(void))

Void AnimationValue_obj::setFloat( int index,Float value){
{
		HX_STACK_FRAME("org.gameplay3d.AnimationValue","setFloat",0xd0be614e,"org.gameplay3d.AnimationValue.setFloat","org/gameplay3d/AnimationValue.hx",32,0xaccf0d24)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(32)
		::org::gameplay3d::AnimationValue_obj::hx_AnimationValue_setFloat(this->nativeObject,index,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AnimationValue_obj,setFloat,(void))

Void AnimationValue_obj::setFloats( int index,::org::gameplay3d::util::IMutableNativeArray values,int count){
{
		HX_STACK_FRAME("org.gameplay3d.AnimationValue","setFloats",0xd5d6c365,"org.gameplay3d.AnimationValue.setFloats","org/gameplay3d/AnimationValue.hx",38,0xaccf0d24)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(values,"values")
		HX_STACK_ARG(count,"count")
		HX_STACK_LINE(38)
		::org::gameplay3d::AnimationValue_obj::hx_AnimationValue_setFloats(this->nativeObject,index,(  (((values == null()))) ? Dynamic(null()) : Dynamic(values->__Field(HX_CSTRING("nativeObject"),true)) ),count);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(AnimationValue_obj,setFloats,(void))

Dynamic AnimationValue_obj::hx_AnimationValue_getFloat;

Dynamic AnimationValue_obj::hx_AnimationValue_getFloats;

Dynamic AnimationValue_obj::hx_AnimationValue_setFloat;

Dynamic AnimationValue_obj::hx_AnimationValue_setFloats;


AnimationValue_obj::AnimationValue_obj()
{
}

Dynamic AnimationValue_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"getFloat") ) { return getFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"setFloat") ) { return setFloat_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getFloats") ) { return getFloats_dyn(); }
		if (HX_FIELD_EQ(inName,"setFloats") ) { return setFloats_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_AnimationValue_getFloat") ) { return hx_AnimationValue_getFloat; }
		if (HX_FIELD_EQ(inName,"hx_AnimationValue_setFloat") ) { return hx_AnimationValue_setFloat; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"hx_AnimationValue_getFloats") ) { return hx_AnimationValue_getFloats; }
		if (HX_FIELD_EQ(inName,"hx_AnimationValue_setFloats") ) { return hx_AnimationValue_setFloats; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AnimationValue_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 26:
		if (HX_FIELD_EQ(inName,"hx_AnimationValue_getFloat") ) { hx_AnimationValue_getFloat=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_AnimationValue_setFloat") ) { hx_AnimationValue_setFloat=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"hx_AnimationValue_getFloats") ) { hx_AnimationValue_getFloats=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_AnimationValue_setFloats") ) { hx_AnimationValue_setFloats=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AnimationValue_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("hx_AnimationValue_getFloat"),
	HX_CSTRING("hx_AnimationValue_getFloats"),
	HX_CSTRING("hx_AnimationValue_setFloat"),
	HX_CSTRING("hx_AnimationValue_setFloats"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("getFloat"),
	HX_CSTRING("getFloats"),
	HX_CSTRING("setFloat"),
	HX_CSTRING("setFloats"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AnimationValue_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AnimationValue_obj::hx_AnimationValue_getFloat,"hx_AnimationValue_getFloat");
	HX_MARK_MEMBER_NAME(AnimationValue_obj::hx_AnimationValue_getFloats,"hx_AnimationValue_getFloats");
	HX_MARK_MEMBER_NAME(AnimationValue_obj::hx_AnimationValue_setFloat,"hx_AnimationValue_setFloat");
	HX_MARK_MEMBER_NAME(AnimationValue_obj::hx_AnimationValue_setFloats,"hx_AnimationValue_setFloats");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AnimationValue_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AnimationValue_obj::hx_AnimationValue_getFloat,"hx_AnimationValue_getFloat");
	HX_VISIT_MEMBER_NAME(AnimationValue_obj::hx_AnimationValue_getFloats,"hx_AnimationValue_getFloats");
	HX_VISIT_MEMBER_NAME(AnimationValue_obj::hx_AnimationValue_setFloat,"hx_AnimationValue_setFloat");
	HX_VISIT_MEMBER_NAME(AnimationValue_obj::hx_AnimationValue_setFloats,"hx_AnimationValue_setFloats");
};

#endif

Class AnimationValue_obj::__mClass;

void AnimationValue_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.AnimationValue"), hx::TCanCast< AnimationValue_obj> ,sStaticFields,sMemberFields,
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

void AnimationValue_obj::__boot()
{
	hx_AnimationValue_getFloat= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AnimationValue >(),HX_CSTRING("getFloat"),(int)2);
	hx_AnimationValue_getFloats= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AnimationValue >(),HX_CSTRING("getFloats"),(int)4);
	hx_AnimationValue_setFloat= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AnimationValue >(),HX_CSTRING("setFloat"),(int)3);
	hx_AnimationValue_setFloats= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AnimationValue >(),HX_CSTRING("setFloats"),(int)4);
}

} // end namespace org
} // end namespace gameplay3d
