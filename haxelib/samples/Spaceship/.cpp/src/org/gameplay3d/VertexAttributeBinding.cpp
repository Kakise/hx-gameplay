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
#ifndef INCLUDED_org_gameplay3d_Mesh
#include <org/gameplay3d/Mesh.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Ref
#include <org/gameplay3d/Ref.h>
#endif
#ifndef INCLUDED_org_gameplay3d_VertexAttributeBinding
#include <org/gameplay3d/VertexAttributeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_VertexFormat
#include <org/gameplay3d/VertexFormat.h>
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

Void VertexAttributeBinding_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.VertexAttributeBinding","new",0x3d865b6c,"org.gameplay3d.VertexAttributeBinding.new","org/gameplay3d/VertexAttributeBinding.hx",10,0x745593e4)
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

//VertexAttributeBinding_obj::~VertexAttributeBinding_obj() { }

Dynamic VertexAttributeBinding_obj::__CreateEmpty() { return  new VertexAttributeBinding_obj; }
hx::ObjectPtr< VertexAttributeBinding_obj > VertexAttributeBinding_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< VertexAttributeBinding_obj > result = new VertexAttributeBinding_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic VertexAttributeBinding_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VertexAttributeBinding_obj > result = new VertexAttributeBinding_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *VertexAttributeBinding_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::intern::INativeBinding_obj)) return operator ::org::gameplay3d::intern::INativeBinding_obj *();
	if (inType==typeid( ::org::gameplay3d::Ref_obj)) return operator ::org::gameplay3d::Ref_obj *();
	return super::__ToInterface(inType);
}

Void VertexAttributeBinding_obj::bind( ){
{
		HX_STACK_FRAME("org.gameplay3d.VertexAttributeBinding","bind",0x901e1531,"org.gameplay3d.VertexAttributeBinding.bind","org/gameplay3d/VertexAttributeBinding.hx",19,0x745593e4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(19)
		::org::gameplay3d::VertexAttributeBinding_obj::hx_VertexAttributeBinding_bind(this->nativeObject);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VertexAttributeBinding_obj,bind,(void))

Void VertexAttributeBinding_obj::unbind( ){
{
		HX_STACK_FRAME("org.gameplay3d.VertexAttributeBinding","unbind",0xd590e10a,"org.gameplay3d.VertexAttributeBinding.unbind","org/gameplay3d/VertexAttributeBinding.hx",37,0x745593e4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(37)
		::org::gameplay3d::VertexAttributeBinding_obj::hx_VertexAttributeBinding_unbind(this->nativeObject);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VertexAttributeBinding_obj,unbind,(void))

::org::gameplay3d::VertexAttributeBinding VertexAttributeBinding_obj::create_Mesh_Eff( ::org::gameplay3d::Mesh mesh,::org::gameplay3d::Effect effect){
	HX_STACK_FRAME("org.gameplay3d.VertexAttributeBinding","create_Mesh_Eff",0x07efb842,"org.gameplay3d.VertexAttributeBinding.create_Mesh_Eff","org/gameplay3d/VertexAttributeBinding.hx",25,0x745593e4)
	HX_STACK_ARG(mesh,"mesh")
	HX_STACK_ARG(effect,"effect")
	HX_STACK_LINE(25)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::VertexAttributeBinding >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(25)
	Dynamic nativeObject = ::org::gameplay3d::VertexAttributeBinding_obj::hx_VertexAttributeBinding_static_create_Mesh_Eff((  (((mesh == null()))) ? Dynamic(null()) : Dynamic(mesh->nativeObject) ),(  (((effect == null()))) ? Dynamic(null()) : Dynamic(effect->nativeObject) ));		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(25)
	if (((nativeObject == null()))){
		HX_STACK_LINE(25)
		return null();
	}
	else{
		HX_STACK_LINE(25)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(25)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(25)
			::org::gameplay3d::VertexAttributeBinding result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(25)
			if (((result == null()))){
				HX_STACK_LINE(25)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(25)
				::org::gameplay3d::VertexAttributeBinding _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(25)
				result = _g;
				HX_STACK_LINE(25)
				ref->set(result);
			}
			HX_STACK_LINE(25)
			return result;
		}
		else{
			HX_STACK_LINE(25)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(25)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(25)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(VertexAttributeBinding_obj,create_Mesh_Eff,return )

::org::gameplay3d::VertexAttributeBinding VertexAttributeBinding_obj::create_Frmt_Dat_Eff( ::org::gameplay3d::VertexFormat vertexFormat,Array< unsigned char > vertexPointer,::org::gameplay3d::Effect effect){
	HX_STACK_FRAME("org.gameplay3d.VertexAttributeBinding","create_Frmt_Dat_Eff",0x2c7d6540,"org.gameplay3d.VertexAttributeBinding.create_Frmt_Dat_Eff","org/gameplay3d/VertexAttributeBinding.hx",31,0x745593e4)
	HX_STACK_ARG(vertexFormat,"vertexFormat")
	HX_STACK_ARG(vertexPointer,"vertexPointer")
	HX_STACK_ARG(effect,"effect")
	HX_STACK_LINE(31)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::VertexAttributeBinding >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(31)
	Dynamic nativeObject = ::org::gameplay3d::VertexAttributeBinding_obj::hx_VertexAttributeBinding_static_create_Frmt_Dat_Eff((  (((vertexFormat == null()))) ? Dynamic(null()) : Dynamic(vertexFormat->nativeObject) ),vertexPointer,(  (((effect == null()))) ? Dynamic(null()) : Dynamic(effect->nativeObject) ));		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(31)
	if (((nativeObject == null()))){
		HX_STACK_LINE(31)
		return null();
	}
	else{
		HX_STACK_LINE(31)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(31)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(31)
			::org::gameplay3d::VertexAttributeBinding result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(31)
			if (((result == null()))){
				HX_STACK_LINE(31)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(31)
				::org::gameplay3d::VertexAttributeBinding _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(31)
				result = _g;
				HX_STACK_LINE(31)
				ref->set(result);
			}
			HX_STACK_LINE(31)
			return result;
		}
		else{
			HX_STACK_LINE(31)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(31)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(31)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(VertexAttributeBinding_obj,create_Frmt_Dat_Eff,return )

Dynamic VertexAttributeBinding_obj::hx_VertexAttributeBinding_bind;

Dynamic VertexAttributeBinding_obj::hx_VertexAttributeBinding_static_create_Mesh_Eff;

Dynamic VertexAttributeBinding_obj::hx_VertexAttributeBinding_static_create_Frmt_Dat_Eff;

Dynamic VertexAttributeBinding_obj::hx_VertexAttributeBinding_unbind;


VertexAttributeBinding_obj::VertexAttributeBinding_obj()
{
}

Dynamic VertexAttributeBinding_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bind") ) { return bind_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"unbind") ) { return unbind_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"create_Mesh_Eff") ) { return create_Mesh_Eff_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"create_Frmt_Dat_Eff") ) { return create_Frmt_Dat_Eff_dyn(); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"hx_VertexAttributeBinding_bind") ) { return hx_VertexAttributeBinding_bind; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"hx_VertexAttributeBinding_unbind") ) { return hx_VertexAttributeBinding_unbind; }
		break;
	case 48:
		if (HX_FIELD_EQ(inName,"hx_VertexAttributeBinding_static_create_Mesh_Eff") ) { return hx_VertexAttributeBinding_static_create_Mesh_Eff; }
		break;
	case 52:
		if (HX_FIELD_EQ(inName,"hx_VertexAttributeBinding_static_create_Frmt_Dat_Eff") ) { return hx_VertexAttributeBinding_static_create_Frmt_Dat_Eff; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic VertexAttributeBinding_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 30:
		if (HX_FIELD_EQ(inName,"hx_VertexAttributeBinding_bind") ) { hx_VertexAttributeBinding_bind=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"hx_VertexAttributeBinding_unbind") ) { hx_VertexAttributeBinding_unbind=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 48:
		if (HX_FIELD_EQ(inName,"hx_VertexAttributeBinding_static_create_Mesh_Eff") ) { hx_VertexAttributeBinding_static_create_Mesh_Eff=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 52:
		if (HX_FIELD_EQ(inName,"hx_VertexAttributeBinding_static_create_Frmt_Dat_Eff") ) { hx_VertexAttributeBinding_static_create_Frmt_Dat_Eff=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VertexAttributeBinding_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create_Mesh_Eff"),
	HX_CSTRING("create_Frmt_Dat_Eff"),
	HX_CSTRING("hx_VertexAttributeBinding_bind"),
	HX_CSTRING("hx_VertexAttributeBinding_static_create_Mesh_Eff"),
	HX_CSTRING("hx_VertexAttributeBinding_static_create_Frmt_Dat_Eff"),
	HX_CSTRING("hx_VertexAttributeBinding_unbind"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("bind"),
	HX_CSTRING("unbind"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VertexAttributeBinding_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(VertexAttributeBinding_obj::hx_VertexAttributeBinding_bind,"hx_VertexAttributeBinding_bind");
	HX_MARK_MEMBER_NAME(VertexAttributeBinding_obj::hx_VertexAttributeBinding_static_create_Mesh_Eff,"hx_VertexAttributeBinding_static_create_Mesh_Eff");
	HX_MARK_MEMBER_NAME(VertexAttributeBinding_obj::hx_VertexAttributeBinding_static_create_Frmt_Dat_Eff,"hx_VertexAttributeBinding_static_create_Frmt_Dat_Eff");
	HX_MARK_MEMBER_NAME(VertexAttributeBinding_obj::hx_VertexAttributeBinding_unbind,"hx_VertexAttributeBinding_unbind");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VertexAttributeBinding_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(VertexAttributeBinding_obj::hx_VertexAttributeBinding_bind,"hx_VertexAttributeBinding_bind");
	HX_VISIT_MEMBER_NAME(VertexAttributeBinding_obj::hx_VertexAttributeBinding_static_create_Mesh_Eff,"hx_VertexAttributeBinding_static_create_Mesh_Eff");
	HX_VISIT_MEMBER_NAME(VertexAttributeBinding_obj::hx_VertexAttributeBinding_static_create_Frmt_Dat_Eff,"hx_VertexAttributeBinding_static_create_Frmt_Dat_Eff");
	HX_VISIT_MEMBER_NAME(VertexAttributeBinding_obj::hx_VertexAttributeBinding_unbind,"hx_VertexAttributeBinding_unbind");
};

#endif

Class VertexAttributeBinding_obj::__mClass;

void VertexAttributeBinding_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.VertexAttributeBinding"), hx::TCanCast< VertexAttributeBinding_obj> ,sStaticFields,sMemberFields,
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

void VertexAttributeBinding_obj::__boot()
{
	hx_VertexAttributeBinding_bind= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::VertexAttributeBinding >(),HX_CSTRING("bind"),(int)1);
	hx_VertexAttributeBinding_static_create_Mesh_Eff= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::VertexAttributeBinding >(),HX_CSTRING("static_create_Mesh_Eff"),(int)2);
	hx_VertexAttributeBinding_static_create_Frmt_Dat_Eff= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::VertexAttributeBinding >(),HX_CSTRING("static_create_Frmt_Dat_Eff"),(int)3);
	hx_VertexAttributeBinding_unbind= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::VertexAttributeBinding >(),HX_CSTRING("unbind"),(int)1);
}

} // end namespace org
} // end namespace gameplay3d
