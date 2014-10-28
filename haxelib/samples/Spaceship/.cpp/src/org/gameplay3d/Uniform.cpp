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
#ifndef INCLUDED_org_gameplay3d_Effect
#include <org/gameplay3d/Effect.h>
#endif
#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Ref
#include <org/gameplay3d/Ref.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Uniform
#include <org/gameplay3d/Uniform.h>
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

Void Uniform_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.Uniform","new",0x712a3399,"org.gameplay3d.Uniform.new","org/gameplay3d/Uniform.hx",8,0xc488b797)
HX_STACK_THIS(this)
HX_STACK_ARG(nativeObjectInitializer,"nativeObjectInitializer")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(8)
	super::__construct(nativeObjectInitializer,nativeObjectInitializerParams);
}
;
	return null();
}

//Uniform_obj::~Uniform_obj() { }

Dynamic Uniform_obj::__CreateEmpty() { return  new Uniform_obj; }
hx::ObjectPtr< Uniform_obj > Uniform_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< Uniform_obj > result = new Uniform_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic Uniform_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Uniform_obj > result = new Uniform_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::org::gameplay3d::Effect Uniform_obj::getEffect( ){
	HX_STACK_FRAME("org.gameplay3d.Uniform","getEffect",0xa183f7c0,"org.gameplay3d.Uniform.getEffect","org/gameplay3d/Uniform.hx",17,0xc488b797)
	HX_STACK_THIS(this)
	HX_STACK_LINE(17)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Effect >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(17)
	Dynamic nativeObject = ::org::gameplay3d::Uniform_obj::hx_Uniform_getEffect(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(17)
	if (((nativeObject == null()))){
		HX_STACK_LINE(17)
		return null();
	}
	else{
		HX_STACK_LINE(17)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(17)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(17)
			::org::gameplay3d::Effect result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(17)
			if (((result == null()))){
				HX_STACK_LINE(17)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(17)
				::org::gameplay3d::Effect _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(17)
				result = _g;
				HX_STACK_LINE(17)
				ref->set(result);
			}
			HX_STACK_LINE(17)
			return result;
		}
		else{
			HX_STACK_LINE(17)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(17)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(17)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Uniform_obj,getEffect,return )

::String Uniform_obj::getName( ){
	HX_STACK_FRAME("org.gameplay3d.Uniform","getName",0x2c9d15ba,"org.gameplay3d.Uniform.getName","org/gameplay3d/Uniform.hx",23,0xc488b797)
	HX_STACK_THIS(this)
	HX_STACK_LINE(23)
	return ::org::gameplay3d::Uniform_obj::hx_Uniform_getName(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Uniform_obj,getName,return )

int Uniform_obj::getType( ){
	HX_STACK_FRAME("org.gameplay3d.Uniform","getType",0x30a69629,"org.gameplay3d.Uniform.getType","org/gameplay3d/Uniform.hx",30,0xc488b797)
	HX_STACK_THIS(this)
	HX_STACK_LINE(30)
	return ::org::gameplay3d::Uniform_obj::hx_Uniform_getType(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Uniform_obj,getType,return )

Dynamic Uniform_obj::hx_Uniform_getEffect;

Dynamic Uniform_obj::hx_Uniform_getName;

Dynamic Uniform_obj::hx_Uniform_getType;


Uniform_obj::Uniform_obj()
{
}

Dynamic Uniform_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return getName_dyn(); }
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getEffect") ) { return getEffect_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hx_Uniform_getName") ) { return hx_Uniform_getName; }
		if (HX_FIELD_EQ(inName,"hx_Uniform_getType") ) { return hx_Uniform_getType; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Uniform_getEffect") ) { return hx_Uniform_getEffect; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Uniform_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"hx_Uniform_getName") ) { hx_Uniform_getName=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Uniform_getType") ) { hx_Uniform_getType=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Uniform_getEffect") ) { hx_Uniform_getEffect=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Uniform_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("hx_Uniform_getEffect"),
	HX_CSTRING("hx_Uniform_getName"),
	HX_CSTRING("hx_Uniform_getType"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("getEffect"),
	HX_CSTRING("getName"),
	HX_CSTRING("getType"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Uniform_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Uniform_obj::hx_Uniform_getEffect,"hx_Uniform_getEffect");
	HX_MARK_MEMBER_NAME(Uniform_obj::hx_Uniform_getName,"hx_Uniform_getName");
	HX_MARK_MEMBER_NAME(Uniform_obj::hx_Uniform_getType,"hx_Uniform_getType");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Uniform_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Uniform_obj::hx_Uniform_getEffect,"hx_Uniform_getEffect");
	HX_VISIT_MEMBER_NAME(Uniform_obj::hx_Uniform_getName,"hx_Uniform_getName");
	HX_VISIT_MEMBER_NAME(Uniform_obj::hx_Uniform_getType,"hx_Uniform_getType");
};

#endif

Class Uniform_obj::__mClass;

void Uniform_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.Uniform"), hx::TCanCast< Uniform_obj> ,sStaticFields,sMemberFields,
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

void Uniform_obj::__boot()
{
	hx_Uniform_getEffect= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Uniform >(),HX_CSTRING("getEffect"),(int)1);
	hx_Uniform_getName= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Uniform >(),HX_CSTRING("getName"),(int)1);
	hx_Uniform_getType= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Uniform >(),HX_CSTRING("getType"),(int)1);
}

} // end namespace org
} // end namespace gameplay3d
