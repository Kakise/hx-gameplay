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
#ifndef INCLUDED_org_gameplay3d_Pass
#include <org/gameplay3d/Pass.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Ref
#include <org/gameplay3d/Ref.h>
#endif
#ifndef INCLUDED_org_gameplay3d_RenderState
#include <org/gameplay3d/RenderState.h>
#endif
#ifndef INCLUDED_org_gameplay3d_VertexAttributeBinding
#include <org/gameplay3d/VertexAttributeBinding.h>
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

Void Pass_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.Pass","new",0x2e8644f0,"org.gameplay3d.Pass.new","org/gameplay3d/Pass.hx",9,0x63312ee0)
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

//Pass_obj::~Pass_obj() { }

Dynamic Pass_obj::__CreateEmpty() { return  new Pass_obj; }
hx::ObjectPtr< Pass_obj > Pass_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< Pass_obj > result = new Pass_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic Pass_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Pass_obj > result = new Pass_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Pass_obj::bind( ){
{
		HX_STACK_FRAME("org.gameplay3d.Pass","bind",0x7f0a7f2d,"org.gameplay3d.Pass.bind","org/gameplay3d/Pass.hx",18,0x63312ee0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(18)
		::org::gameplay3d::Pass_obj::hx_Pass_bind(this->nativeObject);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Pass_obj,bind,(void))

::org::gameplay3d::Effect Pass_obj::getEffect( ){
	HX_STACK_FRAME("org.gameplay3d.Pass","getEffect",0xda8e2457,"org.gameplay3d.Pass.getEffect","org/gameplay3d/Pass.hx",24,0x63312ee0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(24)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Effect >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(24)
	Dynamic nativeObject = ::org::gameplay3d::Pass_obj::hx_Pass_getEffect(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
			::org::gameplay3d::Effect result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(24)
			if (((result == null()))){
				HX_STACK_LINE(24)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(24)
				::org::gameplay3d::Effect _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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


HX_DEFINE_DYNAMIC_FUNC0(Pass_obj,getEffect,return )

::String Pass_obj::getId( ){
	HX_STACK_FRAME("org.gameplay3d.Pass","getId",0x88854aa1,"org.gameplay3d.Pass.getId","org/gameplay3d/Pass.hx",30,0x63312ee0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(30)
	return ::org::gameplay3d::Pass_obj::hx_Pass_getId(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Pass_obj,getId,return )

::org::gameplay3d::VertexAttributeBinding Pass_obj::getVertexAttributeBinding( ){
	HX_STACK_FRAME("org.gameplay3d.Pass","getVertexAttributeBinding",0xbe88b3d3,"org.gameplay3d.Pass.getVertexAttributeBinding","org/gameplay3d/Pass.hx",36,0x63312ee0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(36)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::VertexAttributeBinding >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(36)
	Dynamic nativeObject = ::org::gameplay3d::Pass_obj::hx_Pass_getVertexAttributeBinding(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
			::org::gameplay3d::VertexAttributeBinding result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(36)
			if (((result == null()))){
				HX_STACK_LINE(36)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(36)
				::org::gameplay3d::VertexAttributeBinding _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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


HX_DEFINE_DYNAMIC_FUNC0(Pass_obj,getVertexAttributeBinding,return )

Void Pass_obj::setVertexAttributeBinding( ::org::gameplay3d::VertexAttributeBinding binding){
{
		HX_STACK_FRAME("org.gameplay3d.Pass","setVertexAttributeBinding",0x2adf77df,"org.gameplay3d.Pass.setVertexAttributeBinding","org/gameplay3d/Pass.hx",42,0x63312ee0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(binding,"binding")
		HX_STACK_LINE(42)
		::org::gameplay3d::Pass_obj::hx_Pass_setVertexAttributeBinding(this->nativeObject,(  (((binding == null()))) ? Dynamic(null()) : Dynamic(binding->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Pass_obj,setVertexAttributeBinding,(void))

Void Pass_obj::unbind( ){
{
		HX_STACK_FRAME("org.gameplay3d.Pass","unbind",0xa7e8c206,"org.gameplay3d.Pass.unbind","org/gameplay3d/Pass.hx",48,0x63312ee0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(48)
		::org::gameplay3d::Pass_obj::hx_Pass_unbind(this->nativeObject);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Pass_obj,unbind,(void))

Dynamic Pass_obj::hx_Pass_bind;

Dynamic Pass_obj::hx_Pass_getEffect;

Dynamic Pass_obj::hx_Pass_getId;

Dynamic Pass_obj::hx_Pass_getVertexAttributeBinding;

Dynamic Pass_obj::hx_Pass_setVertexAttributeBinding;

Dynamic Pass_obj::hx_Pass_unbind;


Pass_obj::Pass_obj()
{
}

Dynamic Pass_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bind") ) { return bind_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"getId") ) { return getId_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"unbind") ) { return unbind_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getEffect") ) { return getEffect_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hx_Pass_bind") ) { return hx_Pass_bind; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"hx_Pass_getId") ) { return hx_Pass_getId; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"hx_Pass_unbind") ) { return hx_Pass_unbind; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"hx_Pass_getEffect") ) { return hx_Pass_getEffect; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"getVertexAttributeBinding") ) { return getVertexAttributeBinding_dyn(); }
		if (HX_FIELD_EQ(inName,"setVertexAttributeBinding") ) { return setVertexAttributeBinding_dyn(); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"hx_Pass_getVertexAttributeBinding") ) { return hx_Pass_getVertexAttributeBinding; }
		if (HX_FIELD_EQ(inName,"hx_Pass_setVertexAttributeBinding") ) { return hx_Pass_setVertexAttributeBinding; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Pass_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"hx_Pass_bind") ) { hx_Pass_bind=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"hx_Pass_getId") ) { hx_Pass_getId=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"hx_Pass_unbind") ) { hx_Pass_unbind=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"hx_Pass_getEffect") ) { hx_Pass_getEffect=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"hx_Pass_getVertexAttributeBinding") ) { hx_Pass_getVertexAttributeBinding=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Pass_setVertexAttributeBinding") ) { hx_Pass_setVertexAttributeBinding=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Pass_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("hx_Pass_bind"),
	HX_CSTRING("hx_Pass_getEffect"),
	HX_CSTRING("hx_Pass_getId"),
	HX_CSTRING("hx_Pass_getVertexAttributeBinding"),
	HX_CSTRING("hx_Pass_setVertexAttributeBinding"),
	HX_CSTRING("hx_Pass_unbind"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("bind"),
	HX_CSTRING("getEffect"),
	HX_CSTRING("getId"),
	HX_CSTRING("getVertexAttributeBinding"),
	HX_CSTRING("setVertexAttributeBinding"),
	HX_CSTRING("unbind"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Pass_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Pass_obj::hx_Pass_bind,"hx_Pass_bind");
	HX_MARK_MEMBER_NAME(Pass_obj::hx_Pass_getEffect,"hx_Pass_getEffect");
	HX_MARK_MEMBER_NAME(Pass_obj::hx_Pass_getId,"hx_Pass_getId");
	HX_MARK_MEMBER_NAME(Pass_obj::hx_Pass_getVertexAttributeBinding,"hx_Pass_getVertexAttributeBinding");
	HX_MARK_MEMBER_NAME(Pass_obj::hx_Pass_setVertexAttributeBinding,"hx_Pass_setVertexAttributeBinding");
	HX_MARK_MEMBER_NAME(Pass_obj::hx_Pass_unbind,"hx_Pass_unbind");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Pass_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Pass_obj::hx_Pass_bind,"hx_Pass_bind");
	HX_VISIT_MEMBER_NAME(Pass_obj::hx_Pass_getEffect,"hx_Pass_getEffect");
	HX_VISIT_MEMBER_NAME(Pass_obj::hx_Pass_getId,"hx_Pass_getId");
	HX_VISIT_MEMBER_NAME(Pass_obj::hx_Pass_getVertexAttributeBinding,"hx_Pass_getVertexAttributeBinding");
	HX_VISIT_MEMBER_NAME(Pass_obj::hx_Pass_setVertexAttributeBinding,"hx_Pass_setVertexAttributeBinding");
	HX_VISIT_MEMBER_NAME(Pass_obj::hx_Pass_unbind,"hx_Pass_unbind");
};

#endif

Class Pass_obj::__mClass;

void Pass_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.Pass"), hx::TCanCast< Pass_obj> ,sStaticFields,sMemberFields,
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

void Pass_obj::__boot()
{
	hx_Pass_bind= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Pass >(),HX_CSTRING("bind"),(int)1);
	hx_Pass_getEffect= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Pass >(),HX_CSTRING("getEffect"),(int)1);
	hx_Pass_getId= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Pass >(),HX_CSTRING("getId"),(int)1);
	hx_Pass_getVertexAttributeBinding= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Pass >(),HX_CSTRING("getVertexAttributeBinding"),(int)1);
	hx_Pass_setVertexAttributeBinding= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Pass >(),HX_CSTRING("setVertexAttributeBinding"),(int)2);
	hx_Pass_unbind= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Pass >(),HX_CSTRING("unbind"),(int)1);
}

} // end namespace org
} // end namespace gameplay3d
