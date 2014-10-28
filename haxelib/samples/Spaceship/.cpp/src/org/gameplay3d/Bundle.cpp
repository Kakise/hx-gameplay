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
#ifndef INCLUDED_org_gameplay3d_Bundle
#include <org/gameplay3d/Bundle.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Font
#include <org/gameplay3d/Font.h>
#endif
#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Mesh
#include <org/gameplay3d/Mesh.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Node
#include <org/gameplay3d/Node.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Ref
#include <org/gameplay3d/Ref.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Scene
#include <org/gameplay3d/Scene.h>
#endif
#ifndef INCLUDED_org_gameplay3d_ScriptTarget
#include <org/gameplay3d/ScriptTarget.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Transform
#include <org/gameplay3d/Transform.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_INativeBinding
#include <org/gameplay3d/intern/INativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_NativeBinding
#include <org/gameplay3d/intern/NativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_impl_AnimationTarget_ScriptTarget
#include <org/gameplay3d/intern/impl/AnimationTarget_ScriptTarget.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_NativeInterface
#include <org/gameplay3d/util/NativeInterface.h>
#endif
namespace org{
namespace gameplay3d{

Void Bundle_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.Bundle","new",0x7084c561,"org.gameplay3d.Bundle.new","org/gameplay3d/Bundle.hx",9,0x451e9f8f)
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

//Bundle_obj::~Bundle_obj() { }

Dynamic Bundle_obj::__CreateEmpty() { return  new Bundle_obj; }
hx::ObjectPtr< Bundle_obj > Bundle_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< Bundle_obj > result = new Bundle_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic Bundle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Bundle_obj > result = new Bundle_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *Bundle_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::intern::INativeBinding_obj)) return operator ::org::gameplay3d::intern::INativeBinding_obj *();
	if (inType==typeid( ::org::gameplay3d::Ref_obj)) return operator ::org::gameplay3d::Ref_obj *();
	return super::__ToInterface(inType);
}

bool Bundle_obj::contains( ::String id){
	HX_STACK_FRAME("org.gameplay3d.Bundle","contains",0xe40da17e,"org.gameplay3d.Bundle.contains","org/gameplay3d/Bundle.hx",18,0x451e9f8f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(18)
	return ::org::gameplay3d::Bundle_obj::hx_Bundle_contains(this->nativeObject,id);
}


HX_DEFINE_DYNAMIC_FUNC1(Bundle_obj,contains,return )

int Bundle_obj::getObjectCount( ){
	HX_STACK_FRAME("org.gameplay3d.Bundle","getObjectCount",0xd4a94d39,"org.gameplay3d.Bundle.getObjectCount","org/gameplay3d/Bundle.hx",30,0x451e9f8f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(30)
	return ::org::gameplay3d::Bundle_obj::hx_Bundle_getObjectCount(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Bundle_obj,getObjectCount,return )

::String Bundle_obj::getObjectId( int index){
	HX_STACK_FRAME("org.gameplay3d.Bundle","getObjectId",0xa5bf4d31,"org.gameplay3d.Bundle.getObjectId","org/gameplay3d/Bundle.hx",36,0x451e9f8f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(36)
	return ::org::gameplay3d::Bundle_obj::hx_Bundle_getObjectId(this->nativeObject,index);
}


HX_DEFINE_DYNAMIC_FUNC1(Bundle_obj,getObjectId,return )

::org::gameplay3d::Font Bundle_obj::loadFont( ::String id){
	HX_STACK_FRAME("org.gameplay3d.Bundle","loadFont",0x6bf27674,"org.gameplay3d.Bundle.loadFont","org/gameplay3d/Bundle.hx",42,0x451e9f8f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(42)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Font >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(42)
	Dynamic nativeObject = ::org::gameplay3d::Bundle_obj::hx_Bundle_loadFont(this->nativeObject,id);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(42)
	if (((nativeObject == null()))){
		HX_STACK_LINE(42)
		return null();
	}
	else{
		HX_STACK_LINE(42)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(42)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(42)
			::org::gameplay3d::Font result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(42)
			if (((result == null()))){
				HX_STACK_LINE(42)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(42)
				::org::gameplay3d::Font _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(42)
				result = _g;
				HX_STACK_LINE(42)
				ref->set(result);
			}
			HX_STACK_LINE(42)
			return result;
		}
		else{
			HX_STACK_LINE(42)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(42)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(42)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Bundle_obj,loadFont,return )

::org::gameplay3d::Mesh Bundle_obj::loadMesh( ::String id){
	HX_STACK_FRAME("org.gameplay3d.Bundle","loadMesh",0x708b6292,"org.gameplay3d.Bundle.loadMesh","org/gameplay3d/Bundle.hx",48,0x451e9f8f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(48)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Mesh >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(48)
	Dynamic nativeObject = ::org::gameplay3d::Bundle_obj::hx_Bundle_loadMesh(this->nativeObject,id);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(48)
	if (((nativeObject == null()))){
		HX_STACK_LINE(48)
		return null();
	}
	else{
		HX_STACK_LINE(48)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(48)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(48)
			::org::gameplay3d::Mesh result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(48)
			if (((result == null()))){
				HX_STACK_LINE(48)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(48)
				::org::gameplay3d::Mesh _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(48)
				result = _g;
				HX_STACK_LINE(48)
				ref->set(result);
			}
			HX_STACK_LINE(48)
			return result;
		}
		else{
			HX_STACK_LINE(48)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(48)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(48)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Bundle_obj,loadMesh,return )

::org::gameplay3d::Node Bundle_obj::loadNode( ::String id){
	HX_STACK_FRAME("org.gameplay3d.Bundle","loadNode",0x713c22a7,"org.gameplay3d.Bundle.loadNode","org/gameplay3d/Bundle.hx",54,0x451e9f8f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(54)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Node >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(54)
	Dynamic nativeObject = ::org::gameplay3d::Bundle_obj::hx_Bundle_loadNode(this->nativeObject,id);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(54)
	if (((nativeObject == null()))){
		HX_STACK_LINE(54)
		return null();
	}
	else{
		HX_STACK_LINE(54)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(54)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(54)
			::org::gameplay3d::Node result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(54)
			if (((result == null()))){
				HX_STACK_LINE(54)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(54)
				::org::gameplay3d::Node _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(54)
				result = _g;
				HX_STACK_LINE(54)
				ref->set(result);
			}
			HX_STACK_LINE(54)
			return result;
		}
		else{
			HX_STACK_LINE(54)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(54)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(54)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Bundle_obj,loadNode,return )

::org::gameplay3d::Scene Bundle_obj::loadScene( ::String id){
	HX_STACK_FRAME("org.gameplay3d.Bundle","loadScene",0x7c755107,"org.gameplay3d.Bundle.loadScene","org/gameplay3d/Bundle.hx",60,0x451e9f8f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(60)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Scene >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(60)
	Dynamic nativeObject = ::org::gameplay3d::Bundle_obj::hx_Bundle_loadScene(this->nativeObject,id);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(60)
	if (((nativeObject == null()))){
		HX_STACK_LINE(60)
		return null();
	}
	else{
		HX_STACK_LINE(60)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(60)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(60)
			::org::gameplay3d::Scene result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(60)
			if (((result == null()))){
				HX_STACK_LINE(60)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(60)
				::org::gameplay3d::Scene _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(60)
				result = _g;
				HX_STACK_LINE(60)
				ref->set(result);
			}
			HX_STACK_LINE(60)
			return result;
		}
		else{
			HX_STACK_LINE(60)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(60)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(60)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Bundle_obj,loadScene,return )

::org::gameplay3d::Bundle Bundle_obj::create( ::String path){
	HX_STACK_FRAME("org.gameplay3d.Bundle","create",0x3bcec89b,"org.gameplay3d.Bundle.create","org/gameplay3d/Bundle.hx",24,0x451e9f8f)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(24)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Bundle >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(24)
	Dynamic nativeObject = ::org::gameplay3d::Bundle_obj::hx_Bundle_static_create(path);		HX_STACK_VAR(nativeObject,"nativeObject");
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
			::org::gameplay3d::Bundle result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(24)
			if (((result == null()))){
				HX_STACK_LINE(24)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(24)
				::org::gameplay3d::Bundle _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bundle_obj,create,return )

Dynamic Bundle_obj::hx_Bundle_contains;

Dynamic Bundle_obj::hx_Bundle_static_create;

Dynamic Bundle_obj::hx_Bundle_getObjectCount;

Dynamic Bundle_obj::hx_Bundle_getObjectId;

Dynamic Bundle_obj::hx_Bundle_loadFont;

Dynamic Bundle_obj::hx_Bundle_loadMesh;

Dynamic Bundle_obj::hx_Bundle_loadNode;

Dynamic Bundle_obj::hx_Bundle_loadScene;


Bundle_obj::Bundle_obj()
{
}

Dynamic Bundle_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"loadFont") ) { return loadFont_dyn(); }
		if (HX_FIELD_EQ(inName,"loadMesh") ) { return loadMesh_dyn(); }
		if (HX_FIELD_EQ(inName,"loadNode") ) { return loadNode_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadScene") ) { return loadScene_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getObjectId") ) { return getObjectId_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getObjectCount") ) { return getObjectCount_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hx_Bundle_contains") ) { return hx_Bundle_contains; }
		if (HX_FIELD_EQ(inName,"hx_Bundle_loadFont") ) { return hx_Bundle_loadFont; }
		if (HX_FIELD_EQ(inName,"hx_Bundle_loadMesh") ) { return hx_Bundle_loadMesh; }
		if (HX_FIELD_EQ(inName,"hx_Bundle_loadNode") ) { return hx_Bundle_loadNode; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hx_Bundle_loadScene") ) { return hx_Bundle_loadScene; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hx_Bundle_getObjectId") ) { return hx_Bundle_getObjectId; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_Bundle_static_create") ) { return hx_Bundle_static_create; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_Bundle_getObjectCount") ) { return hx_Bundle_getObjectCount; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Bundle_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"hx_Bundle_contains") ) { hx_Bundle_contains=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Bundle_loadFont") ) { hx_Bundle_loadFont=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Bundle_loadMesh") ) { hx_Bundle_loadMesh=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Bundle_loadNode") ) { hx_Bundle_loadNode=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hx_Bundle_loadScene") ) { hx_Bundle_loadScene=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hx_Bundle_getObjectId") ) { hx_Bundle_getObjectId=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_Bundle_static_create") ) { hx_Bundle_static_create=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_Bundle_getObjectCount") ) { hx_Bundle_getObjectCount=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Bundle_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create"),
	HX_CSTRING("hx_Bundle_contains"),
	HX_CSTRING("hx_Bundle_static_create"),
	HX_CSTRING("hx_Bundle_getObjectCount"),
	HX_CSTRING("hx_Bundle_getObjectId"),
	HX_CSTRING("hx_Bundle_loadFont"),
	HX_CSTRING("hx_Bundle_loadMesh"),
	HX_CSTRING("hx_Bundle_loadNode"),
	HX_CSTRING("hx_Bundle_loadScene"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("contains"),
	HX_CSTRING("getObjectCount"),
	HX_CSTRING("getObjectId"),
	HX_CSTRING("loadFont"),
	HX_CSTRING("loadMesh"),
	HX_CSTRING("loadNode"),
	HX_CSTRING("loadScene"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bundle_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Bundle_obj::hx_Bundle_contains,"hx_Bundle_contains");
	HX_MARK_MEMBER_NAME(Bundle_obj::hx_Bundle_static_create,"hx_Bundle_static_create");
	HX_MARK_MEMBER_NAME(Bundle_obj::hx_Bundle_getObjectCount,"hx_Bundle_getObjectCount");
	HX_MARK_MEMBER_NAME(Bundle_obj::hx_Bundle_getObjectId,"hx_Bundle_getObjectId");
	HX_MARK_MEMBER_NAME(Bundle_obj::hx_Bundle_loadFont,"hx_Bundle_loadFont");
	HX_MARK_MEMBER_NAME(Bundle_obj::hx_Bundle_loadMesh,"hx_Bundle_loadMesh");
	HX_MARK_MEMBER_NAME(Bundle_obj::hx_Bundle_loadNode,"hx_Bundle_loadNode");
	HX_MARK_MEMBER_NAME(Bundle_obj::hx_Bundle_loadScene,"hx_Bundle_loadScene");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bundle_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Bundle_obj::hx_Bundle_contains,"hx_Bundle_contains");
	HX_VISIT_MEMBER_NAME(Bundle_obj::hx_Bundle_static_create,"hx_Bundle_static_create");
	HX_VISIT_MEMBER_NAME(Bundle_obj::hx_Bundle_getObjectCount,"hx_Bundle_getObjectCount");
	HX_VISIT_MEMBER_NAME(Bundle_obj::hx_Bundle_getObjectId,"hx_Bundle_getObjectId");
	HX_VISIT_MEMBER_NAME(Bundle_obj::hx_Bundle_loadFont,"hx_Bundle_loadFont");
	HX_VISIT_MEMBER_NAME(Bundle_obj::hx_Bundle_loadMesh,"hx_Bundle_loadMesh");
	HX_VISIT_MEMBER_NAME(Bundle_obj::hx_Bundle_loadNode,"hx_Bundle_loadNode");
	HX_VISIT_MEMBER_NAME(Bundle_obj::hx_Bundle_loadScene,"hx_Bundle_loadScene");
};

#endif

Class Bundle_obj::__mClass;

void Bundle_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.Bundle"), hx::TCanCast< Bundle_obj> ,sStaticFields,sMemberFields,
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

void Bundle_obj::__boot()
{
	hx_Bundle_contains= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Bundle >(),HX_CSTRING("contains"),(int)2);
	hx_Bundle_static_create= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Bundle >(),HX_CSTRING("static_create"),(int)1);
	hx_Bundle_getObjectCount= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Bundle >(),HX_CSTRING("getObjectCount"),(int)1);
	hx_Bundle_getObjectId= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Bundle >(),HX_CSTRING("getObjectId"),(int)2);
	hx_Bundle_loadFont= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Bundle >(),HX_CSTRING("loadFont"),(int)2);
	hx_Bundle_loadMesh= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Bundle >(),HX_CSTRING("loadMesh"),(int)2);
	hx_Bundle_loadNode= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Bundle >(),HX_CSTRING("loadNode"),(int)2);
	hx_Bundle_loadScene= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Bundle >(),HX_CSTRING("loadScene"),(int)2);
}

} // end namespace org
} // end namespace gameplay3d
