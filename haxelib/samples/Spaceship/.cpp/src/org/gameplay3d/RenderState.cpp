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
#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_MaterialParameter
#include <org/gameplay3d/MaterialParameter.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Ref
#include <org/gameplay3d/Ref.h>
#endif
#ifndef INCLUDED_org_gameplay3d_RenderState
#include <org/gameplay3d/RenderState.h>
#endif
#ifndef INCLUDED_org_gameplay3d_RenderState_StateBlock
#include <org/gameplay3d/RenderState_StateBlock.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_INativeBinding
#include <org/gameplay3d/intern/INativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_NativeBinding
#include <org/gameplay3d/intern/NativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_impl_AnimationTargetImpl
#include <org/gameplay3d/intern/impl/AnimationTargetImpl.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_NativeInterface
#include <org/gameplay3d/util/NativeInterface.h>
#endif
namespace org{
namespace gameplay3d{

Void RenderState_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.RenderState","new",0xeb262a40,"org.gameplay3d.RenderState.new","org/gameplay3d/RenderState.hx",8,0xaf07e2d0)
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

//RenderState_obj::~RenderState_obj() { }

Dynamic RenderState_obj::__CreateEmpty() { return  new RenderState_obj; }
hx::ObjectPtr< RenderState_obj > RenderState_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< RenderState_obj > result = new RenderState_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic RenderState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RenderState_obj > result = new RenderState_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *RenderState_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::intern::INativeBinding_obj)) return operator ::org::gameplay3d::intern::INativeBinding_obj *();
	if (inType==typeid( ::org::gameplay3d::Ref_obj)) return operator ::org::gameplay3d::Ref_obj *();
	return super::__ToInterface(inType);
}

::org::gameplay3d::MaterialParameter RenderState_obj::getParameter( ::String name){
	HX_STACK_FRAME("org.gameplay3d.RenderState","getParameter",0xa7ca3c53,"org.gameplay3d.RenderState.getParameter","org/gameplay3d/RenderState.hx",17,0xaf07e2d0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(17)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::MaterialParameter >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(17)
	Dynamic nativeObject = ::org::gameplay3d::RenderState_obj::hx_RenderState_getParameter(this->nativeObject,name);		HX_STACK_VAR(nativeObject,"nativeObject");
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
			::org::gameplay3d::MaterialParameter result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(17)
			if (((result == null()))){
				HX_STACK_LINE(17)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(17)
				::org::gameplay3d::MaterialParameter _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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


HX_DEFINE_DYNAMIC_FUNC1(RenderState_obj,getParameter,return )

::org::gameplay3d::RenderState_StateBlock RenderState_obj::getStateBlock( ){
	HX_STACK_FRAME("org.gameplay3d.RenderState","getStateBlock",0xfc8f9f92,"org.gameplay3d.RenderState.getStateBlock","org/gameplay3d/RenderState.hx",23,0xaf07e2d0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(23)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::RenderState_StateBlock >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(23)
	Dynamic nativeObject = ::org::gameplay3d::RenderState_obj::hx_RenderState_getStateBlock(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(23)
	if (((nativeObject == null()))){
		HX_STACK_LINE(23)
		return null();
	}
	else{
		HX_STACK_LINE(23)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(23)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(23)
			::org::gameplay3d::RenderState_StateBlock result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(23)
			if (((result == null()))){
				HX_STACK_LINE(23)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(23)
				::org::gameplay3d::RenderState_StateBlock _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(23)
				result = _g;
				HX_STACK_LINE(23)
				ref->set(result);
			}
			HX_STACK_LINE(23)
			return result;
		}
		else{
			HX_STACK_LINE(23)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(23)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(23)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RenderState_obj,getStateBlock,return )

Void RenderState_obj::setParameterAutoBinding_Str_Int( ::String name,int autoBinding){
{
		HX_STACK_FRAME("org.gameplay3d.RenderState","setParameterAutoBinding_Str_Int",0xbbde0671,"org.gameplay3d.RenderState.setParameterAutoBinding_Str_Int","org/gameplay3d/RenderState.hx",29,0xaf07e2d0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(autoBinding,"autoBinding")
		HX_STACK_LINE(29)
		::org::gameplay3d::RenderState_obj::hx_RenderState_setParameterAutoBinding_Str_Int(this->nativeObject,name,autoBinding);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(RenderState_obj,setParameterAutoBinding_Str_Int,(void))

Void RenderState_obj::setParameterAutoBinding_StrX2( ::String name,::String autoBinding){
{
		HX_STACK_FRAME("org.gameplay3d.RenderState","setParameterAutoBinding_StrX2",0xa4152f3b,"org.gameplay3d.RenderState.setParameterAutoBinding_StrX2","org/gameplay3d/RenderState.hx",35,0xaf07e2d0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(autoBinding,"autoBinding")
		HX_STACK_LINE(35)
		::org::gameplay3d::RenderState_obj::hx_RenderState_setParameterAutoBinding_StrX2(this->nativeObject,name,autoBinding);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(RenderState_obj,setParameterAutoBinding_StrX2,(void))

Void RenderState_obj::setStateBlock( ::org::gameplay3d::RenderState_StateBlock state){
{
		HX_STACK_FRAME("org.gameplay3d.RenderState","setStateBlock",0x4195819e,"org.gameplay3d.RenderState.setStateBlock","org/gameplay3d/RenderState.hx",41,0xaf07e2d0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(state,"state")
		HX_STACK_LINE(41)
		::org::gameplay3d::RenderState_obj::hx_RenderState_setStateBlock(this->nativeObject,(  (((state == null()))) ? Dynamic(null()) : Dynamic(state->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RenderState_obj,setStateBlock,(void))

Dynamic RenderState_obj::hx_RenderState_getParameter;

Dynamic RenderState_obj::hx_RenderState_getStateBlock;

Dynamic RenderState_obj::hx_RenderState_setParameterAutoBinding_Str_Int;

Dynamic RenderState_obj::hx_RenderState_setParameterAutoBinding_StrX2;

Dynamic RenderState_obj::hx_RenderState_setStateBlock;


RenderState_obj::RenderState_obj()
{
}

Dynamic RenderState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"getParameter") ) { return getParameter_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getStateBlock") ) { return getStateBlock_dyn(); }
		if (HX_FIELD_EQ(inName,"setStateBlock") ) { return setStateBlock_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"hx_RenderState_getParameter") ) { return hx_RenderState_getParameter; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_RenderState_getStateBlock") ) { return hx_RenderState_getStateBlock; }
		if (HX_FIELD_EQ(inName,"hx_RenderState_setStateBlock") ) { return hx_RenderState_setStateBlock; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"setParameterAutoBinding_StrX2") ) { return setParameterAutoBinding_StrX2_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"setParameterAutoBinding_Str_Int") ) { return setParameterAutoBinding_Str_Int_dyn(); }
		break;
	case 44:
		if (HX_FIELD_EQ(inName,"hx_RenderState_setParameterAutoBinding_StrX2") ) { return hx_RenderState_setParameterAutoBinding_StrX2; }
		break;
	case 46:
		if (HX_FIELD_EQ(inName,"hx_RenderState_setParameterAutoBinding_Str_Int") ) { return hx_RenderState_setParameterAutoBinding_Str_Int; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RenderState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 27:
		if (HX_FIELD_EQ(inName,"hx_RenderState_getParameter") ) { hx_RenderState_getParameter=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_RenderState_getStateBlock") ) { hx_RenderState_getStateBlock=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_RenderState_setStateBlock") ) { hx_RenderState_setStateBlock=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 44:
		if (HX_FIELD_EQ(inName,"hx_RenderState_setParameterAutoBinding_StrX2") ) { hx_RenderState_setParameterAutoBinding_StrX2=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 46:
		if (HX_FIELD_EQ(inName,"hx_RenderState_setParameterAutoBinding_Str_Int") ) { hx_RenderState_setParameterAutoBinding_Str_Int=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RenderState_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("hx_RenderState_getParameter"),
	HX_CSTRING("hx_RenderState_getStateBlock"),
	HX_CSTRING("hx_RenderState_setParameterAutoBinding_Str_Int"),
	HX_CSTRING("hx_RenderState_setParameterAutoBinding_StrX2"),
	HX_CSTRING("hx_RenderState_setStateBlock"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("getParameter"),
	HX_CSTRING("getStateBlock"),
	HX_CSTRING("setParameterAutoBinding_Str_Int"),
	HX_CSTRING("setParameterAutoBinding_StrX2"),
	HX_CSTRING("setStateBlock"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RenderState_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(RenderState_obj::hx_RenderState_getParameter,"hx_RenderState_getParameter");
	HX_MARK_MEMBER_NAME(RenderState_obj::hx_RenderState_getStateBlock,"hx_RenderState_getStateBlock");
	HX_MARK_MEMBER_NAME(RenderState_obj::hx_RenderState_setParameterAutoBinding_Str_Int,"hx_RenderState_setParameterAutoBinding_Str_Int");
	HX_MARK_MEMBER_NAME(RenderState_obj::hx_RenderState_setParameterAutoBinding_StrX2,"hx_RenderState_setParameterAutoBinding_StrX2");
	HX_MARK_MEMBER_NAME(RenderState_obj::hx_RenderState_setStateBlock,"hx_RenderState_setStateBlock");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RenderState_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(RenderState_obj::hx_RenderState_getParameter,"hx_RenderState_getParameter");
	HX_VISIT_MEMBER_NAME(RenderState_obj::hx_RenderState_getStateBlock,"hx_RenderState_getStateBlock");
	HX_VISIT_MEMBER_NAME(RenderState_obj::hx_RenderState_setParameterAutoBinding_Str_Int,"hx_RenderState_setParameterAutoBinding_Str_Int");
	HX_VISIT_MEMBER_NAME(RenderState_obj::hx_RenderState_setParameterAutoBinding_StrX2,"hx_RenderState_setParameterAutoBinding_StrX2");
	HX_VISIT_MEMBER_NAME(RenderState_obj::hx_RenderState_setStateBlock,"hx_RenderState_setStateBlock");
};

#endif

Class RenderState_obj::__mClass;

void RenderState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.RenderState"), hx::TCanCast< RenderState_obj> ,sStaticFields,sMemberFields,
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

void RenderState_obj::__boot()
{
	hx_RenderState_getParameter= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::RenderState >(),HX_CSTRING("getParameter"),(int)2);
	hx_RenderState_getStateBlock= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::RenderState >(),HX_CSTRING("getStateBlock"),(int)1);
	hx_RenderState_setParameterAutoBinding_Str_Int= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::RenderState >(),HX_CSTRING("setParameterAutoBinding_Str_Int"),(int)3);
	hx_RenderState_setParameterAutoBinding_StrX2= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::RenderState >(),HX_CSTRING("setParameterAutoBinding_StrX2"),(int)3);
	hx_RenderState_setStateBlock= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::RenderState >(),HX_CSTRING("setStateBlock"),(int)2);
}

} // end namespace org
} // end namespace gameplay3d
