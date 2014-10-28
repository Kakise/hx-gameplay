#include <hxcpp.h>

#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsCollisionShape_Definition
#include <org/gameplay3d/PhysicsCollisionShape_Definition.h>
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

Void PhysicsCollisionShape_Definition_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.PhysicsCollisionShape_Definition","new",0x7100813b,"org.gameplay3d.PhysicsCollisionShape_Definition.new","org/gameplay3d/PhysicsCollisionShape_Definition.hx",9,0xdd8514f5)
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

//PhysicsCollisionShape_Definition_obj::~PhysicsCollisionShape_Definition_obj() { }

Dynamic PhysicsCollisionShape_Definition_obj::__CreateEmpty() { return  new PhysicsCollisionShape_Definition_obj; }
hx::ObjectPtr< PhysicsCollisionShape_Definition_obj > PhysicsCollisionShape_Definition_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< PhysicsCollisionShape_Definition_obj > result = new PhysicsCollisionShape_Definition_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic PhysicsCollisionShape_Definition_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PhysicsCollisionShape_Definition_obj > result = new PhysicsCollisionShape_Definition_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

bool PhysicsCollisionShape_Definition_obj::isEmpty( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsCollisionShape_Definition","isEmpty",0xe1e5989e,"org.gameplay3d.PhysicsCollisionShape_Definition.isEmpty","org/gameplay3d/PhysicsCollisionShape_Definition.hx",30,0xdd8514f5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(30)
	return ::org::gameplay3d::PhysicsCollisionShape_Definition_obj::hx_PhysicsCollisionShape_Definition_isEmpty();
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsCollisionShape_Definition_obj,isEmpty,return )

::org::gameplay3d::PhysicsCollisionShape_Definition PhysicsCollisionShape_Definition_obj::make( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsCollisionShape_Definition","make",0x6ec448b3,"org.gameplay3d.PhysicsCollisionShape_Definition.make","org/gameplay3d/PhysicsCollisionShape_Definition.hx",17,0xdd8514f5)
	HX_STACK_LINE(18)
	Dynamic _g = ::org::gameplay3d::PhysicsCollisionShape_Definition_obj::constructNativeObject();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(18)
	return ::org::gameplay3d::PhysicsCollisionShape_Definition_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PhysicsCollisionShape_Definition_obj,make,return )

::org::gameplay3d::PhysicsCollisionShape_Definition PhysicsCollisionShape_Definition_obj::make_ColShpDef( ::org::gameplay3d::PhysicsCollisionShape_Definition definition){
	HX_STACK_FRAME("org.gameplay3d.PhysicsCollisionShape_Definition","make_ColShpDef",0xf9b8f0be,"org.gameplay3d.PhysicsCollisionShape_Definition.make_ColShpDef","org/gameplay3d/PhysicsCollisionShape_Definition.hx",23,0xdd8514f5)
	HX_STACK_ARG(definition,"definition")
	HX_STACK_LINE(24)
	Dynamic _g = ::org::gameplay3d::PhysicsCollisionShape_Definition_obj::constructNativeObject_ColShpDef(definition);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(24)
	return ::org::gameplay3d::PhysicsCollisionShape_Definition_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PhysicsCollisionShape_Definition_obj,make_ColShpDef,return )

Dynamic PhysicsCollisionShape_Definition_obj::constructNativeObject( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsCollisionShape_Definition","constructNativeObject",0xfcce7608,"org.gameplay3d.PhysicsCollisionShape_Definition.constructNativeObject","org/gameplay3d/PhysicsCollisionShape_Definition.hx",40,0xdd8514f5)
	HX_STACK_LINE(40)
	return ::org::gameplay3d::PhysicsCollisionShape_Definition_obj::hx_PhysicsCollisionShape_Definition_Construct();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PhysicsCollisionShape_Definition_obj,constructNativeObject,return )

Dynamic PhysicsCollisionShape_Definition_obj::constructNativeObject_ColShpDef( ::org::gameplay3d::PhysicsCollisionShape_Definition definition){
	HX_STACK_FRAME("org.gameplay3d.PhysicsCollisionShape_Definition","constructNativeObject_ColShpDef",0x1af6fa53,"org.gameplay3d.PhysicsCollisionShape_Definition.constructNativeObject_ColShpDef","org/gameplay3d/PhysicsCollisionShape_Definition.hx",46,0xdd8514f5)
	HX_STACK_ARG(definition,"definition")
	HX_STACK_LINE(46)
	return ::org::gameplay3d::PhysicsCollisionShape_Definition_obj::hx_PhysicsCollisionShape_Definition_Construct_ColShpDef((  (((definition == null()))) ? Dynamic(null()) : Dynamic(definition->nativeObject) ));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PhysicsCollisionShape_Definition_obj,constructNativeObject_ColShpDef,return )

Dynamic PhysicsCollisionShape_Definition_obj::hx_PhysicsCollisionShape_Definition_Construct;

Dynamic PhysicsCollisionShape_Definition_obj::hx_PhysicsCollisionShape_Definition_Construct_ColShpDef;

Dynamic PhysicsCollisionShape_Definition_obj::hx_PhysicsCollisionShape_Definition_isEmpty;


PhysicsCollisionShape_Definition_obj::PhysicsCollisionShape_Definition_obj()
{
}

Dynamic PhysicsCollisionShape_Definition_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { return make_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isEmpty") ) { return isEmpty_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"make_ColShpDef") ) { return make_ColShpDef_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"constructNativeObject") ) { return constructNativeObject_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"constructNativeObject_ColShpDef") ) { return constructNativeObject_ColShpDef_dyn(); }
		break;
	case 43:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionShape_Definition_isEmpty") ) { return hx_PhysicsCollisionShape_Definition_isEmpty; }
		break;
	case 45:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionShape_Definition_Construct") ) { return hx_PhysicsCollisionShape_Definition_Construct; }
		break;
	case 55:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionShape_Definition_Construct_ColShpDef") ) { return hx_PhysicsCollisionShape_Definition_Construct_ColShpDef; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PhysicsCollisionShape_Definition_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 43:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionShape_Definition_isEmpty") ) { hx_PhysicsCollisionShape_Definition_isEmpty=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 45:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionShape_Definition_Construct") ) { hx_PhysicsCollisionShape_Definition_Construct=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 55:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionShape_Definition_Construct_ColShpDef") ) { hx_PhysicsCollisionShape_Definition_Construct_ColShpDef=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PhysicsCollisionShape_Definition_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("make"),
	HX_CSTRING("make_ColShpDef"),
	HX_CSTRING("constructNativeObject"),
	HX_CSTRING("constructNativeObject_ColShpDef"),
	HX_CSTRING("hx_PhysicsCollisionShape_Definition_Construct"),
	HX_CSTRING("hx_PhysicsCollisionShape_Definition_Construct_ColShpDef"),
	HX_CSTRING("hx_PhysicsCollisionShape_Definition_isEmpty"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("isEmpty"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PhysicsCollisionShape_Definition_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PhysicsCollisionShape_Definition_obj::hx_PhysicsCollisionShape_Definition_Construct,"hx_PhysicsCollisionShape_Definition_Construct");
	HX_MARK_MEMBER_NAME(PhysicsCollisionShape_Definition_obj::hx_PhysicsCollisionShape_Definition_Construct_ColShpDef,"hx_PhysicsCollisionShape_Definition_Construct_ColShpDef");
	HX_MARK_MEMBER_NAME(PhysicsCollisionShape_Definition_obj::hx_PhysicsCollisionShape_Definition_isEmpty,"hx_PhysicsCollisionShape_Definition_isEmpty");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PhysicsCollisionShape_Definition_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PhysicsCollisionShape_Definition_obj::hx_PhysicsCollisionShape_Definition_Construct,"hx_PhysicsCollisionShape_Definition_Construct");
	HX_VISIT_MEMBER_NAME(PhysicsCollisionShape_Definition_obj::hx_PhysicsCollisionShape_Definition_Construct_ColShpDef,"hx_PhysicsCollisionShape_Definition_Construct_ColShpDef");
	HX_VISIT_MEMBER_NAME(PhysicsCollisionShape_Definition_obj::hx_PhysicsCollisionShape_Definition_isEmpty,"hx_PhysicsCollisionShape_Definition_isEmpty");
};

#endif

Class PhysicsCollisionShape_Definition_obj::__mClass;

void PhysicsCollisionShape_Definition_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.PhysicsCollisionShape_Definition"), hx::TCanCast< PhysicsCollisionShape_Definition_obj> ,sStaticFields,sMemberFields,
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

void PhysicsCollisionShape_Definition_obj::__boot()
{
	hx_PhysicsCollisionShape_Definition_Construct= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsCollisionShape_Definition >(),HX_CSTRING("Construct"),(int)0);
	hx_PhysicsCollisionShape_Definition_Construct_ColShpDef= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsCollisionShape_Definition >(),HX_CSTRING("Construct_ColShpDef"),(int)1);
	hx_PhysicsCollisionShape_Definition_isEmpty= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsCollisionShape_Definition >(),HX_CSTRING("isEmpty"),(int)1);
}

} // end namespace org
} // end namespace gameplay3d
