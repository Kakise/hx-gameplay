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
#ifndef INCLUDED_org_gameplay3d_Technique
#include <org/gameplay3d/Technique.h>
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

Void Technique_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.Technique","new",0x7dacbcb5,"org.gameplay3d.Technique.new","org/gameplay3d/Technique.hx",8,0xa5a36dfb)
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

//Technique_obj::~Technique_obj() { }

Dynamic Technique_obj::__CreateEmpty() { return  new Technique_obj; }
hx::ObjectPtr< Technique_obj > Technique_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< Technique_obj > result = new Technique_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic Technique_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Technique_obj > result = new Technique_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::String Technique_obj::getId( ){
	HX_STACK_FRAME("org.gameplay3d.Technique","getId",0xc80cfda6,"org.gameplay3d.Technique.getId","org/gameplay3d/Technique.hx",17,0xa5a36dfb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(17)
	return ::org::gameplay3d::Technique_obj::hx_Technique_getId(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Technique_obj,getId,return )

::org::gameplay3d::Pass Technique_obj::getPass( ::String id){
	HX_STACK_FRAME("org.gameplay3d.Technique","getPass",0xa822cf5c,"org.gameplay3d.Technique.getPass","org/gameplay3d/Technique.hx",23,0xa5a36dfb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(23)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Pass >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(23)
	Dynamic nativeObject = ::org::gameplay3d::Technique_obj::hx_Technique_getPass(this->nativeObject,id);		HX_STACK_VAR(nativeObject,"nativeObject");
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
			::org::gameplay3d::Pass result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(23)
			if (((result == null()))){
				HX_STACK_LINE(23)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(23)
				::org::gameplay3d::Pass _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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


HX_DEFINE_DYNAMIC_FUNC1(Technique_obj,getPass,return )

::org::gameplay3d::Pass Technique_obj::getPassByIndex( int index){
	HX_STACK_FRAME("org.gameplay3d.Technique","getPassByIndex",0x437f65bf,"org.gameplay3d.Technique.getPassByIndex","org/gameplay3d/Technique.hx",29,0xa5a36dfb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(29)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Pass >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(29)
	Dynamic nativeObject = ::org::gameplay3d::Technique_obj::hx_Technique_getPassByIndex(this->nativeObject,index);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(29)
	if (((nativeObject == null()))){
		HX_STACK_LINE(29)
		return null();
	}
	else{
		HX_STACK_LINE(29)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(29)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(29)
			::org::gameplay3d::Pass result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(29)
			if (((result == null()))){
				HX_STACK_LINE(29)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(29)
				::org::gameplay3d::Pass _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(29)
				result = _g;
				HX_STACK_LINE(29)
				ref->set(result);
			}
			HX_STACK_LINE(29)
			return result;
		}
		else{
			HX_STACK_LINE(29)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(29)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(29)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Technique_obj,getPassByIndex,return )

int Technique_obj::getPassCount( ){
	HX_STACK_FRAME("org.gameplay3d.Technique","getPassCount",0x22b4b7d3,"org.gameplay3d.Technique.getPassCount","org/gameplay3d/Technique.hx",35,0xa5a36dfb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(35)
	return ::org::gameplay3d::Technique_obj::hx_Technique_getPassCount(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Technique_obj,getPassCount,return )

Dynamic Technique_obj::hx_Technique_getId;

Dynamic Technique_obj::hx_Technique_getPass;

Dynamic Technique_obj::hx_Technique_getPassByIndex;

Dynamic Technique_obj::hx_Technique_getPassCount;


Technique_obj::Technique_obj()
{
}

Dynamic Technique_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"getId") ) { return getId_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getPass") ) { return getPass_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getPassCount") ) { return getPassCount_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getPassByIndex") ) { return getPassByIndex_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hx_Technique_getId") ) { return hx_Technique_getId; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Technique_getPass") ) { return hx_Technique_getPass; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_Technique_getPassCount") ) { return hx_Technique_getPassCount; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"hx_Technique_getPassByIndex") ) { return hx_Technique_getPassByIndex; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Technique_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"hx_Technique_getId") ) { hx_Technique_getId=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Technique_getPass") ) { hx_Technique_getPass=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_Technique_getPassCount") ) { hx_Technique_getPassCount=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"hx_Technique_getPassByIndex") ) { hx_Technique_getPassByIndex=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Technique_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("hx_Technique_getId"),
	HX_CSTRING("hx_Technique_getPass"),
	HX_CSTRING("hx_Technique_getPassByIndex"),
	HX_CSTRING("hx_Technique_getPassCount"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("getId"),
	HX_CSTRING("getPass"),
	HX_CSTRING("getPassByIndex"),
	HX_CSTRING("getPassCount"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Technique_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Technique_obj::hx_Technique_getId,"hx_Technique_getId");
	HX_MARK_MEMBER_NAME(Technique_obj::hx_Technique_getPass,"hx_Technique_getPass");
	HX_MARK_MEMBER_NAME(Technique_obj::hx_Technique_getPassByIndex,"hx_Technique_getPassByIndex");
	HX_MARK_MEMBER_NAME(Technique_obj::hx_Technique_getPassCount,"hx_Technique_getPassCount");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Technique_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Technique_obj::hx_Technique_getId,"hx_Technique_getId");
	HX_VISIT_MEMBER_NAME(Technique_obj::hx_Technique_getPass,"hx_Technique_getPass");
	HX_VISIT_MEMBER_NAME(Technique_obj::hx_Technique_getPassByIndex,"hx_Technique_getPassByIndex");
	HX_VISIT_MEMBER_NAME(Technique_obj::hx_Technique_getPassCount,"hx_Technique_getPassCount");
};

#endif

Class Technique_obj::__mClass;

void Technique_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.Technique"), hx::TCanCast< Technique_obj> ,sStaticFields,sMemberFields,
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

void Technique_obj::__boot()
{
	hx_Technique_getId= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Technique >(),HX_CSTRING("getId"),(int)1);
	hx_Technique_getPass= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Technique >(),HX_CSTRING("getPass"),(int)2);
	hx_Technique_getPassByIndex= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Technique >(),HX_CSTRING("getPassByIndex"),(int)2);
	hx_Technique_getPassCount= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Technique >(),HX_CSTRING("getPassCount"),(int)1);
}

} // end namespace org
} // end namespace gameplay3d
