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
#ifndef INCLUDED_org_gameplay3d_Ref
#include <org/gameplay3d/Ref.h>
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
#ifndef INCLUDED_org_gameplay3d_util_NativeInterface
#include <org/gameplay3d/util/NativeInterface.h>
#endif
namespace org{
namespace gameplay3d{

Void RenderState_StateBlock_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.RenderState_StateBlock","new",0x9b953a9f,"org.gameplay3d.RenderState_StateBlock.new","org/gameplay3d/RenderState_StateBlock.hx",8,0xc085dc11)
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

//RenderState_StateBlock_obj::~RenderState_StateBlock_obj() { }

Dynamic RenderState_StateBlock_obj::__CreateEmpty() { return  new RenderState_StateBlock_obj; }
hx::ObjectPtr< RenderState_StateBlock_obj > RenderState_StateBlock_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< RenderState_StateBlock_obj > result = new RenderState_StateBlock_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic RenderState_StateBlock_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RenderState_StateBlock_obj > result = new RenderState_StateBlock_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *RenderState_StateBlock_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::intern::INativeBinding_obj)) return operator ::org::gameplay3d::intern::INativeBinding_obj *();
	if (inType==typeid( ::org::gameplay3d::Ref_obj)) return operator ::org::gameplay3d::Ref_obj *();
	return super::__ToInterface(inType);
}

Void RenderState_StateBlock_obj::bind( ){
{
		HX_STACK_FRAME("org.gameplay3d.RenderState_StateBlock","bind",0x7f12829e,"org.gameplay3d.RenderState_StateBlock.bind","org/gameplay3d/RenderState_StateBlock.hx",17,0xc085dc11)
		HX_STACK_THIS(this)
		HX_STACK_LINE(17)
		::org::gameplay3d::RenderState_StateBlock_obj::hx_RenderState_StateBlock_bind(this->nativeObject);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RenderState_StateBlock_obj,bind,(void))

Void RenderState_StateBlock_obj::setBlend( bool enabled){
{
		HX_STACK_FRAME("org.gameplay3d.RenderState_StateBlock","setBlend",0xc10362b0,"org.gameplay3d.RenderState_StateBlock.setBlend","org/gameplay3d/RenderState_StateBlock.hx",29,0xc085dc11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(enabled,"enabled")
		HX_STACK_LINE(29)
		::org::gameplay3d::RenderState_StateBlock_obj::hx_RenderState_StateBlock_setBlend(this->nativeObject,enabled);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RenderState_StateBlock_obj,setBlend,(void))

Void RenderState_StateBlock_obj::setBlendDst( int blend){
{
		HX_STACK_FRAME("org.gameplay3d.RenderState_StateBlock","setBlendDst",0xbe4f6935,"org.gameplay3d.RenderState_StateBlock.setBlendDst","org/gameplay3d/RenderState_StateBlock.hx",35,0xc085dc11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(blend,"blend")
		HX_STACK_LINE(35)
		::org::gameplay3d::RenderState_StateBlock_obj::hx_RenderState_StateBlock_setBlendDst(this->nativeObject,blend);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RenderState_StateBlock_obj,setBlendDst,(void))

Void RenderState_StateBlock_obj::setBlendSrc( int blend){
{
		HX_STACK_FRAME("org.gameplay3d.RenderState_StateBlock","setBlendSrc",0xbe5aca14,"org.gameplay3d.RenderState_StateBlock.setBlendSrc","org/gameplay3d/RenderState_StateBlock.hx",41,0xc085dc11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(blend,"blend")
		HX_STACK_LINE(41)
		::org::gameplay3d::RenderState_StateBlock_obj::hx_RenderState_StateBlock_setBlendSrc(this->nativeObject,blend);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RenderState_StateBlock_obj,setBlendSrc,(void))

Void RenderState_StateBlock_obj::setCullFace( bool enabled){
{
		HX_STACK_FRAME("org.gameplay3d.RenderState_StateBlock","setCullFace",0xffb6f270,"org.gameplay3d.RenderState_StateBlock.setCullFace","org/gameplay3d/RenderState_StateBlock.hx",47,0xc085dc11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(enabled,"enabled")
		HX_STACK_LINE(47)
		::org::gameplay3d::RenderState_StateBlock_obj::hx_RenderState_StateBlock_setCullFace(this->nativeObject,enabled);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RenderState_StateBlock_obj,setCullFace,(void))

Void RenderState_StateBlock_obj::setDepthTest( bool enabled){
{
		HX_STACK_FRAME("org.gameplay3d.RenderState_StateBlock","setDepthTest",0x6461b8d4,"org.gameplay3d.RenderState_StateBlock.setDepthTest","org/gameplay3d/RenderState_StateBlock.hx",53,0xc085dc11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(enabled,"enabled")
		HX_STACK_LINE(53)
		::org::gameplay3d::RenderState_StateBlock_obj::hx_RenderState_StateBlock_setDepthTest(this->nativeObject,enabled);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RenderState_StateBlock_obj,setDepthTest,(void))

Void RenderState_StateBlock_obj::setDepthWrite( bool enabled){
{
		HX_STACK_FRAME("org.gameplay3d.RenderState_StateBlock","setDepthWrite",0x33e3ee1d,"org.gameplay3d.RenderState_StateBlock.setDepthWrite","org/gameplay3d/RenderState_StateBlock.hx",59,0xc085dc11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(enabled,"enabled")
		HX_STACK_LINE(59)
		::org::gameplay3d::RenderState_StateBlock_obj::hx_RenderState_StateBlock_setDepthWrite(this->nativeObject,enabled);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RenderState_StateBlock_obj,setDepthWrite,(void))

Void RenderState_StateBlock_obj::setDepthFunction( int func){
{
		HX_STACK_FRAME("org.gameplay3d.RenderState_StateBlock","setDepthFunction",0x708a049a,"org.gameplay3d.RenderState_StateBlock.setDepthFunction","org/gameplay3d/RenderState_StateBlock.hx",65,0xc085dc11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(func,"func")
		HX_STACK_LINE(65)
		::org::gameplay3d::RenderState_StateBlock_obj::hx_RenderState_StateBlock_setDepthFunction(this->nativeObject,func);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RenderState_StateBlock_obj,setDepthFunction,(void))

Void RenderState_StateBlock_obj::setState( ::String name,::String value){
{
		HX_STACK_FRAME("org.gameplay3d.RenderState_StateBlock","setState",0x9019f070,"org.gameplay3d.RenderState_StateBlock.setState","org/gameplay3d/RenderState_StateBlock.hx",71,0xc085dc11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(71)
		::org::gameplay3d::RenderState_StateBlock_obj::hx_RenderState_StateBlock_setState(this->nativeObject,name,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(RenderState_StateBlock_obj,setState,(void))

::org::gameplay3d::RenderState_StateBlock RenderState_StateBlock_obj::create( ){
	HX_STACK_FRAME("org.gameplay3d.RenderState_StateBlock","create",0xd9b0ae1d,"org.gameplay3d.RenderState_StateBlock.create","org/gameplay3d/RenderState_StateBlock.hx",23,0xc085dc11)
	HX_STACK_LINE(23)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::RenderState_StateBlock >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(23)
	Dynamic nativeObject = ::org::gameplay3d::RenderState_StateBlock_obj::hx_RenderState_StateBlock_static_create();		HX_STACK_VAR(nativeObject,"nativeObject");
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


STATIC_HX_DEFINE_DYNAMIC_FUNC0(RenderState_StateBlock_obj,create,return )

Dynamic RenderState_StateBlock_obj::hx_RenderState_StateBlock_bind;

Dynamic RenderState_StateBlock_obj::hx_RenderState_StateBlock_static_create;

Dynamic RenderState_StateBlock_obj::hx_RenderState_StateBlock_setBlend;

Dynamic RenderState_StateBlock_obj::hx_RenderState_StateBlock_setBlendDst;

Dynamic RenderState_StateBlock_obj::hx_RenderState_StateBlock_setBlendSrc;

Dynamic RenderState_StateBlock_obj::hx_RenderState_StateBlock_setCullFace;

Dynamic RenderState_StateBlock_obj::hx_RenderState_StateBlock_setDepthTest;

Dynamic RenderState_StateBlock_obj::hx_RenderState_StateBlock_setDepthWrite;

Dynamic RenderState_StateBlock_obj::hx_RenderState_StateBlock_setDepthFunction;

Dynamic RenderState_StateBlock_obj::hx_RenderState_StateBlock_setState;


RenderState_StateBlock_obj::RenderState_StateBlock_obj()
{
}

Dynamic RenderState_StateBlock_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bind") ) { return bind_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setBlend") ) { return setBlend_dyn(); }
		if (HX_FIELD_EQ(inName,"setState") ) { return setState_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setBlendDst") ) { return setBlendDst_dyn(); }
		if (HX_FIELD_EQ(inName,"setBlendSrc") ) { return setBlendSrc_dyn(); }
		if (HX_FIELD_EQ(inName,"setCullFace") ) { return setCullFace_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setDepthTest") ) { return setDepthTest_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setDepthWrite") ) { return setDepthWrite_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"setDepthFunction") ) { return setDepthFunction_dyn(); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"hx_RenderState_StateBlock_bind") ) { return hx_RenderState_StateBlock_bind; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"hx_RenderState_StateBlock_setBlend") ) { return hx_RenderState_StateBlock_setBlend; }
		if (HX_FIELD_EQ(inName,"hx_RenderState_StateBlock_setState") ) { return hx_RenderState_StateBlock_setState; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"hx_RenderState_StateBlock_setBlendDst") ) { return hx_RenderState_StateBlock_setBlendDst; }
		if (HX_FIELD_EQ(inName,"hx_RenderState_StateBlock_setBlendSrc") ) { return hx_RenderState_StateBlock_setBlendSrc; }
		if (HX_FIELD_EQ(inName,"hx_RenderState_StateBlock_setCullFace") ) { return hx_RenderState_StateBlock_setCullFace; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"hx_RenderState_StateBlock_setDepthTest") ) { return hx_RenderState_StateBlock_setDepthTest; }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"hx_RenderState_StateBlock_static_create") ) { return hx_RenderState_StateBlock_static_create; }
		if (HX_FIELD_EQ(inName,"hx_RenderState_StateBlock_setDepthWrite") ) { return hx_RenderState_StateBlock_setDepthWrite; }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"hx_RenderState_StateBlock_setDepthFunction") ) { return hx_RenderState_StateBlock_setDepthFunction; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RenderState_StateBlock_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 30:
		if (HX_FIELD_EQ(inName,"hx_RenderState_StateBlock_bind") ) { hx_RenderState_StateBlock_bind=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"hx_RenderState_StateBlock_setBlend") ) { hx_RenderState_StateBlock_setBlend=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_RenderState_StateBlock_setState") ) { hx_RenderState_StateBlock_setState=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"hx_RenderState_StateBlock_setBlendDst") ) { hx_RenderState_StateBlock_setBlendDst=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_RenderState_StateBlock_setBlendSrc") ) { hx_RenderState_StateBlock_setBlendSrc=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_RenderState_StateBlock_setCullFace") ) { hx_RenderState_StateBlock_setCullFace=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"hx_RenderState_StateBlock_setDepthTest") ) { hx_RenderState_StateBlock_setDepthTest=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"hx_RenderState_StateBlock_static_create") ) { hx_RenderState_StateBlock_static_create=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_RenderState_StateBlock_setDepthWrite") ) { hx_RenderState_StateBlock_setDepthWrite=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"hx_RenderState_StateBlock_setDepthFunction") ) { hx_RenderState_StateBlock_setDepthFunction=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RenderState_StateBlock_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create"),
	HX_CSTRING("hx_RenderState_StateBlock_bind"),
	HX_CSTRING("hx_RenderState_StateBlock_static_create"),
	HX_CSTRING("hx_RenderState_StateBlock_setBlend"),
	HX_CSTRING("hx_RenderState_StateBlock_setBlendDst"),
	HX_CSTRING("hx_RenderState_StateBlock_setBlendSrc"),
	HX_CSTRING("hx_RenderState_StateBlock_setCullFace"),
	HX_CSTRING("hx_RenderState_StateBlock_setDepthTest"),
	HX_CSTRING("hx_RenderState_StateBlock_setDepthWrite"),
	HX_CSTRING("hx_RenderState_StateBlock_setDepthFunction"),
	HX_CSTRING("hx_RenderState_StateBlock_setState"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("bind"),
	HX_CSTRING("setBlend"),
	HX_CSTRING("setBlendDst"),
	HX_CSTRING("setBlendSrc"),
	HX_CSTRING("setCullFace"),
	HX_CSTRING("setDepthTest"),
	HX_CSTRING("setDepthWrite"),
	HX_CSTRING("setDepthFunction"),
	HX_CSTRING("setState"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RenderState_StateBlock_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(RenderState_StateBlock_obj::hx_RenderState_StateBlock_bind,"hx_RenderState_StateBlock_bind");
	HX_MARK_MEMBER_NAME(RenderState_StateBlock_obj::hx_RenderState_StateBlock_static_create,"hx_RenderState_StateBlock_static_create");
	HX_MARK_MEMBER_NAME(RenderState_StateBlock_obj::hx_RenderState_StateBlock_setBlend,"hx_RenderState_StateBlock_setBlend");
	HX_MARK_MEMBER_NAME(RenderState_StateBlock_obj::hx_RenderState_StateBlock_setBlendDst,"hx_RenderState_StateBlock_setBlendDst");
	HX_MARK_MEMBER_NAME(RenderState_StateBlock_obj::hx_RenderState_StateBlock_setBlendSrc,"hx_RenderState_StateBlock_setBlendSrc");
	HX_MARK_MEMBER_NAME(RenderState_StateBlock_obj::hx_RenderState_StateBlock_setCullFace,"hx_RenderState_StateBlock_setCullFace");
	HX_MARK_MEMBER_NAME(RenderState_StateBlock_obj::hx_RenderState_StateBlock_setDepthTest,"hx_RenderState_StateBlock_setDepthTest");
	HX_MARK_MEMBER_NAME(RenderState_StateBlock_obj::hx_RenderState_StateBlock_setDepthWrite,"hx_RenderState_StateBlock_setDepthWrite");
	HX_MARK_MEMBER_NAME(RenderState_StateBlock_obj::hx_RenderState_StateBlock_setDepthFunction,"hx_RenderState_StateBlock_setDepthFunction");
	HX_MARK_MEMBER_NAME(RenderState_StateBlock_obj::hx_RenderState_StateBlock_setState,"hx_RenderState_StateBlock_setState");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RenderState_StateBlock_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(RenderState_StateBlock_obj::hx_RenderState_StateBlock_bind,"hx_RenderState_StateBlock_bind");
	HX_VISIT_MEMBER_NAME(RenderState_StateBlock_obj::hx_RenderState_StateBlock_static_create,"hx_RenderState_StateBlock_static_create");
	HX_VISIT_MEMBER_NAME(RenderState_StateBlock_obj::hx_RenderState_StateBlock_setBlend,"hx_RenderState_StateBlock_setBlend");
	HX_VISIT_MEMBER_NAME(RenderState_StateBlock_obj::hx_RenderState_StateBlock_setBlendDst,"hx_RenderState_StateBlock_setBlendDst");
	HX_VISIT_MEMBER_NAME(RenderState_StateBlock_obj::hx_RenderState_StateBlock_setBlendSrc,"hx_RenderState_StateBlock_setBlendSrc");
	HX_VISIT_MEMBER_NAME(RenderState_StateBlock_obj::hx_RenderState_StateBlock_setCullFace,"hx_RenderState_StateBlock_setCullFace");
	HX_VISIT_MEMBER_NAME(RenderState_StateBlock_obj::hx_RenderState_StateBlock_setDepthTest,"hx_RenderState_StateBlock_setDepthTest");
	HX_VISIT_MEMBER_NAME(RenderState_StateBlock_obj::hx_RenderState_StateBlock_setDepthWrite,"hx_RenderState_StateBlock_setDepthWrite");
	HX_VISIT_MEMBER_NAME(RenderState_StateBlock_obj::hx_RenderState_StateBlock_setDepthFunction,"hx_RenderState_StateBlock_setDepthFunction");
	HX_VISIT_MEMBER_NAME(RenderState_StateBlock_obj::hx_RenderState_StateBlock_setState,"hx_RenderState_StateBlock_setState");
};

#endif

Class RenderState_StateBlock_obj::__mClass;

void RenderState_StateBlock_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.RenderState_StateBlock"), hx::TCanCast< RenderState_StateBlock_obj> ,sStaticFields,sMemberFields,
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

void RenderState_StateBlock_obj::__boot()
{
	hx_RenderState_StateBlock_bind= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::RenderState_StateBlock >(),HX_CSTRING("bind"),(int)1);
	hx_RenderState_StateBlock_static_create= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::RenderState_StateBlock >(),HX_CSTRING("static_create"),(int)0);
	hx_RenderState_StateBlock_setBlend= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::RenderState_StateBlock >(),HX_CSTRING("setBlend"),(int)2);
	hx_RenderState_StateBlock_setBlendDst= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::RenderState_StateBlock >(),HX_CSTRING("setBlendDst"),(int)2);
	hx_RenderState_StateBlock_setBlendSrc= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::RenderState_StateBlock >(),HX_CSTRING("setBlendSrc"),(int)2);
	hx_RenderState_StateBlock_setCullFace= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::RenderState_StateBlock >(),HX_CSTRING("setCullFace"),(int)2);
	hx_RenderState_StateBlock_setDepthTest= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::RenderState_StateBlock >(),HX_CSTRING("setDepthTest"),(int)2);
	hx_RenderState_StateBlock_setDepthWrite= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::RenderState_StateBlock >(),HX_CSTRING("setDepthWrite"),(int)2);
	hx_RenderState_StateBlock_setDepthFunction= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::RenderState_StateBlock >(),HX_CSTRING("setDepthFunction"),(int)2);
	hx_RenderState_StateBlock_setState= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::RenderState_StateBlock >(),HX_CSTRING("setState"),(int)3);
}

} // end namespace org
} // end namespace gameplay3d
