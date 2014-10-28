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
#ifndef INCLUDED_org_gameplay3d_Material
#include <org/gameplay3d/Material.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Mesh
#include <org/gameplay3d/Mesh.h>
#endif
#ifndef INCLUDED_org_gameplay3d_MeshSkin
#include <org/gameplay3d/MeshSkin.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Model
#include <org/gameplay3d/Model.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Node
#include <org/gameplay3d/Node.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Ref
#include <org/gameplay3d/Ref.h>
#endif
#ifndef INCLUDED_org_gameplay3d_RenderState
#include <org/gameplay3d/RenderState.h>
#endif
#ifndef INCLUDED_org_gameplay3d_ScriptTarget
#include <org/gameplay3d/ScriptTarget.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Transform
#include <org/gameplay3d/Transform.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Transform_Listener
#include <org/gameplay3d/Transform_Listener.h>
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
#ifndef INCLUDED_org_gameplay3d_intern_impl_Transform_ListenerImpl
#include <org/gameplay3d/intern/impl/Transform_ListenerImpl.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_NativeInterface
#include <org/gameplay3d/util/NativeInterface.h>
#endif
namespace org{
namespace gameplay3d{

Void Model_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.Model","new",0xaeb421ce,"org.gameplay3d.Model.new","org/gameplay3d/Model.hx",8,0x1c459f02)
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

//Model_obj::~Model_obj() { }

Dynamic Model_obj::__CreateEmpty() { return  new Model_obj; }
hx::ObjectPtr< Model_obj > Model_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< Model_obj > result = new Model_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic Model_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Model_obj > result = new Model_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *Model_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::intern::INativeBinding_obj)) return operator ::org::gameplay3d::intern::INativeBinding_obj *();
	if (inType==typeid( ::org::gameplay3d::Ref_obj)) return operator ::org::gameplay3d::Ref_obj *();
	return super::__ToInterface(inType);
}

Void Model_obj::draw( hx::Null< bool >  __o_wireframe){
bool wireframe = __o_wireframe.Default(false);
	HX_STACK_FRAME("org.gameplay3d.Model","draw",0x28571ad6,"org.gameplay3d.Model.draw","org/gameplay3d/Model.hx",23,0x1c459f02)
	HX_STACK_THIS(this)
	HX_STACK_ARG(wireframe,"wireframe")
{
		HX_STACK_LINE(23)
		::org::gameplay3d::Model_obj::hx_Model_draw(this->nativeObject,wireframe);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Model_obj,draw,(void))

::org::gameplay3d::Material Model_obj::getMaterial( hx::Null< int >  __o_partIndex){
int partIndex = __o_partIndex.Default(-1);
	HX_STACK_FRAME("org.gameplay3d.Model","getMaterial",0x2aed8ecb,"org.gameplay3d.Model.getMaterial","org/gameplay3d/Model.hx",29,0x1c459f02)
	HX_STACK_THIS(this)
	HX_STACK_ARG(partIndex,"partIndex")
{
		HX_STACK_LINE(29)
		::Class classObj = hx::ClassOf< ::org::gameplay3d::Material >();		HX_STACK_VAR(classObj,"classObj");
		HX_STACK_LINE(29)
		Dynamic nativeObject = ::org::gameplay3d::Model_obj::hx_Model_getMaterial(this->nativeObject,partIndex);		HX_STACK_VAR(nativeObject,"nativeObject");
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
				::org::gameplay3d::Material result = ref->get();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(29)
				if (((result == null()))){
					HX_STACK_LINE(29)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
					HX_STACK_LINE(29)
					::org::gameplay3d::Material _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
}


HX_DEFINE_DYNAMIC_FUNC1(Model_obj,getMaterial,return )

::org::gameplay3d::Mesh Model_obj::getMesh( ){
	HX_STACK_FRAME("org.gameplay3d.Model","getMesh",0x444c9a11,"org.gameplay3d.Model.getMesh","org/gameplay3d/Model.hx",35,0x1c459f02)
	HX_STACK_THIS(this)
	HX_STACK_LINE(35)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Mesh >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(35)
	Dynamic nativeObject = ::org::gameplay3d::Model_obj::hx_Model_getMesh(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(35)
	if (((nativeObject == null()))){
		HX_STACK_LINE(35)
		return null();
	}
	else{
		HX_STACK_LINE(35)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(35)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(35)
			::org::gameplay3d::Mesh result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(35)
			if (((result == null()))){
				HX_STACK_LINE(35)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(35)
				::org::gameplay3d::Mesh _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(35)
				result = _g;
				HX_STACK_LINE(35)
				ref->set(result);
			}
			HX_STACK_LINE(35)
			return result;
		}
		else{
			HX_STACK_LINE(35)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(35)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(35)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Model_obj,getMesh,return )

int Model_obj::getMeshPartCount( ){
	HX_STACK_FRAME("org.gameplay3d.Model","getMeshPartCount",0xbe559b8b,"org.gameplay3d.Model.getMeshPartCount","org/gameplay3d/Model.hx",41,0x1c459f02)
	HX_STACK_THIS(this)
	HX_STACK_LINE(41)
	return ::org::gameplay3d::Model_obj::hx_Model_getMeshPartCount(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Model_obj,getMeshPartCount,return )

::org::gameplay3d::Node Model_obj::getNode( ){
	HX_STACK_FRAME("org.gameplay3d.Model","getNode",0x44fd5a26,"org.gameplay3d.Model.getNode","org/gameplay3d/Model.hx",47,0x1c459f02)
	HX_STACK_THIS(this)
	HX_STACK_LINE(47)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Node >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(47)
	Dynamic nativeObject = ::org::gameplay3d::Model_obj::hx_Model_getNode(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(47)
	if (((nativeObject == null()))){
		HX_STACK_LINE(47)
		return null();
	}
	else{
		HX_STACK_LINE(47)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(47)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(47)
			::org::gameplay3d::Node result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(47)
			if (((result == null()))){
				HX_STACK_LINE(47)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(47)
				::org::gameplay3d::Node _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(47)
				result = _g;
				HX_STACK_LINE(47)
				ref->set(result);
			}
			HX_STACK_LINE(47)
			return result;
		}
		else{
			HX_STACK_LINE(47)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(47)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(47)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Model_obj,getNode,return )

::org::gameplay3d::MeshSkin Model_obj::getSkin( ){
	HX_STACK_FRAME("org.gameplay3d.Model","getSkin",0x484866a1,"org.gameplay3d.Model.getSkin","org/gameplay3d/Model.hx",53,0x1c459f02)
	HX_STACK_THIS(this)
	HX_STACK_LINE(53)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::MeshSkin >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(53)
	Dynamic nativeObject = ::org::gameplay3d::Model_obj::hx_Model_getSkin(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(53)
	if (((nativeObject == null()))){
		HX_STACK_LINE(53)
		return null();
	}
	else{
		HX_STACK_LINE(53)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(53)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(53)
			::org::gameplay3d::MeshSkin result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(53)
			if (((result == null()))){
				HX_STACK_LINE(53)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(53)
				::org::gameplay3d::MeshSkin _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(53)
				result = _g;
				HX_STACK_LINE(53)
				ref->set(result);
			}
			HX_STACK_LINE(53)
			return result;
		}
		else{
			HX_STACK_LINE(53)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(53)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(53)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Model_obj,getSkin,return )

bool Model_obj::hasMaterial( int partIndex){
	HX_STACK_FRAME("org.gameplay3d.Model","hasMaterial",0xd7b0b18f,"org.gameplay3d.Model.hasMaterial","org/gameplay3d/Model.hx",59,0x1c459f02)
	HX_STACK_THIS(this)
	HX_STACK_ARG(partIndex,"partIndex")
	HX_STACK_LINE(59)
	return ::org::gameplay3d::Model_obj::hx_Model_hasMaterial(this->nativeObject,partIndex);
}


HX_DEFINE_DYNAMIC_FUNC1(Model_obj,hasMaterial,return )

::org::gameplay3d::Material Model_obj::setMaterial_Str_Int( ::String materialPath,hx::Null< int >  __o_partIndex){
int partIndex = __o_partIndex.Default(-1);
	HX_STACK_FRAME("org.gameplay3d.Model","setMaterial_Str_Int",0xc37ba539,"org.gameplay3d.Model.setMaterial_Str_Int","org/gameplay3d/Model.hx",65,0x1c459f02)
	HX_STACK_THIS(this)
	HX_STACK_ARG(materialPath,"materialPath")
	HX_STACK_ARG(partIndex,"partIndex")
{
		HX_STACK_LINE(65)
		::Class classObj = hx::ClassOf< ::org::gameplay3d::Material >();		HX_STACK_VAR(classObj,"classObj");
		HX_STACK_LINE(65)
		Dynamic nativeObject = ::org::gameplay3d::Model_obj::hx_Model_setMaterial_Str_Int(this->nativeObject,materialPath,partIndex);		HX_STACK_VAR(nativeObject,"nativeObject");
		HX_STACK_LINE(65)
		if (((nativeObject == null()))){
			HX_STACK_LINE(65)
			return null();
		}
		else{
			HX_STACK_LINE(65)
			if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
				HX_STACK_LINE(65)
				::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
				HX_STACK_LINE(65)
				::org::gameplay3d::Material result = ref->get();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(65)
				if (((result == null()))){
					HX_STACK_LINE(65)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
					HX_STACK_LINE(65)
					::org::gameplay3d::Material _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(65)
					result = _g;
					HX_STACK_LINE(65)
					ref->set(result);
				}
				HX_STACK_LINE(65)
				return result;
			}
			else{
				HX_STACK_LINE(65)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
				HX_STACK_LINE(65)
				return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
			}
		}
		HX_STACK_LINE(65)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Model_obj,setMaterial_Str_Int,return )

::org::gameplay3d::Material Model_obj::setMaterial_StrX3_Int( ::String vshPath,::String fshPath,::String defines,hx::Null< int >  __o_partIndex){
int partIndex = __o_partIndex.Default(-1);
	HX_STACK_FRAME("org.gameplay3d.Model","setMaterial_StrX3_Int",0xd43f67d4,"org.gameplay3d.Model.setMaterial_StrX3_Int","org/gameplay3d/Model.hx",71,0x1c459f02)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vshPath,"vshPath")
	HX_STACK_ARG(fshPath,"fshPath")
	HX_STACK_ARG(defines,"defines")
	HX_STACK_ARG(partIndex,"partIndex")
{
		HX_STACK_LINE(71)
		::Class classObj = hx::ClassOf< ::org::gameplay3d::Material >();		HX_STACK_VAR(classObj,"classObj");
		HX_STACK_LINE(71)
		Dynamic nativeObject = ::org::gameplay3d::Model_obj::hx_Model_setMaterial_StrX3_Int(this->nativeObject,vshPath,fshPath,defines,partIndex);		HX_STACK_VAR(nativeObject,"nativeObject");
		HX_STACK_LINE(71)
		if (((nativeObject == null()))){
			HX_STACK_LINE(71)
			return null();
		}
		else{
			HX_STACK_LINE(71)
			if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
				HX_STACK_LINE(71)
				::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
				HX_STACK_LINE(71)
				::org::gameplay3d::Material result = ref->get();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(71)
				if (((result == null()))){
					HX_STACK_LINE(71)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
					HX_STACK_LINE(71)
					::org::gameplay3d::Material _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(71)
					result = _g;
					HX_STACK_LINE(71)
					ref->set(result);
				}
				HX_STACK_LINE(71)
				return result;
			}
			else{
				HX_STACK_LINE(71)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
				HX_STACK_LINE(71)
				return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
			}
		}
		HX_STACK_LINE(71)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Model_obj,setMaterial_StrX3_Int,return )

Void Model_obj::setMaterial_Mtrl_Int( ::org::gameplay3d::Material material,hx::Null< int >  __o_partIndex){
int partIndex = __o_partIndex.Default(-1);
	HX_STACK_FRAME("org.gameplay3d.Model","setMaterial_Mtrl_Int",0x7c2a63f9,"org.gameplay3d.Model.setMaterial_Mtrl_Int","org/gameplay3d/Model.hx",77,0x1c459f02)
	HX_STACK_THIS(this)
	HX_STACK_ARG(material,"material")
	HX_STACK_ARG(partIndex,"partIndex")
{
		HX_STACK_LINE(77)
		::org::gameplay3d::Model_obj::hx_Model_setMaterial_Mtrl_Int(this->nativeObject,(  (((material == null()))) ? Dynamic(null()) : Dynamic(material->nativeObject) ),partIndex);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Model_obj,setMaterial_Mtrl_Int,(void))

Void Model_obj::setNode( ::org::gameplay3d::Node node){
{
		HX_STACK_FRAME("org.gameplay3d.Model","setNode",0x37feeb32,"org.gameplay3d.Model.setNode","org/gameplay3d/Model.hx",83,0x1c459f02)
		HX_STACK_THIS(this)
		HX_STACK_ARG(node,"node")
		HX_STACK_LINE(83)
		::org::gameplay3d::Model_obj::hx_Model_setNode(this->nativeObject,(  (((node == null()))) ? Dynamic(null()) : Dynamic(node->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Model_obj,setNode,(void))

::org::gameplay3d::Model Model_obj::create( ::org::gameplay3d::Mesh mesh){
	HX_STACK_FRAME("org.gameplay3d.Model","create",0xdcad2e4e,"org.gameplay3d.Model.create","org/gameplay3d/Model.hx",17,0x1c459f02)
	HX_STACK_ARG(mesh,"mesh")
	HX_STACK_LINE(17)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Model >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(17)
	Dynamic nativeObject = ::org::gameplay3d::Model_obj::hx_Model_static_create((  (((mesh == null()))) ? Dynamic(null()) : Dynamic(mesh->nativeObject) ));		HX_STACK_VAR(nativeObject,"nativeObject");
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
			::org::gameplay3d::Model result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(17)
			if (((result == null()))){
				HX_STACK_LINE(17)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(17)
				::org::gameplay3d::Model _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Model_obj,create,return )

Dynamic Model_obj::hx_Model_static_create;

Dynamic Model_obj::hx_Model_draw;

Dynamic Model_obj::hx_Model_getMaterial;

Dynamic Model_obj::hx_Model_getMesh;

Dynamic Model_obj::hx_Model_getMeshPartCount;

Dynamic Model_obj::hx_Model_getNode;

Dynamic Model_obj::hx_Model_getSkin;

Dynamic Model_obj::hx_Model_hasMaterial;

Dynamic Model_obj::hx_Model_setMaterial_Str_Int;

Dynamic Model_obj::hx_Model_setMaterial_StrX3_Int;

Dynamic Model_obj::hx_Model_setMaterial_Mtrl_Int;

Dynamic Model_obj::hx_Model_setNode;


Model_obj::Model_obj()
{
}

Dynamic Model_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getMesh") ) { return getMesh_dyn(); }
		if (HX_FIELD_EQ(inName,"getNode") ) { return getNode_dyn(); }
		if (HX_FIELD_EQ(inName,"getSkin") ) { return getSkin_dyn(); }
		if (HX_FIELD_EQ(inName,"setNode") ) { return setNode_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getMaterial") ) { return getMaterial_dyn(); }
		if (HX_FIELD_EQ(inName,"hasMaterial") ) { return hasMaterial_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"hx_Model_draw") ) { return hx_Model_draw; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hx_Model_getMesh") ) { return hx_Model_getMesh; }
		if (HX_FIELD_EQ(inName,"hx_Model_getNode") ) { return hx_Model_getNode; }
		if (HX_FIELD_EQ(inName,"hx_Model_getSkin") ) { return hx_Model_getSkin; }
		if (HX_FIELD_EQ(inName,"hx_Model_setNode") ) { return hx_Model_setNode; }
		if (HX_FIELD_EQ(inName,"getMeshPartCount") ) { return getMeshPartCount_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"setMaterial_Str_Int") ) { return setMaterial_Str_Int_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Model_getMaterial") ) { return hx_Model_getMaterial; }
		if (HX_FIELD_EQ(inName,"hx_Model_hasMaterial") ) { return hx_Model_hasMaterial; }
		if (HX_FIELD_EQ(inName,"setMaterial_Mtrl_Int") ) { return setMaterial_Mtrl_Int_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"setMaterial_StrX3_Int") ) { return setMaterial_StrX3_Int_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Model_static_create") ) { return hx_Model_static_create; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_Model_getMeshPartCount") ) { return hx_Model_getMeshPartCount; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_Model_setMaterial_Str_Int") ) { return hx_Model_setMaterial_Str_Int; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_Model_setMaterial_Mtrl_Int") ) { return hx_Model_setMaterial_Mtrl_Int; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"hx_Model_setMaterial_StrX3_Int") ) { return hx_Model_setMaterial_StrX3_Int; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Model_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"hx_Model_draw") ) { hx_Model_draw=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hx_Model_getMesh") ) { hx_Model_getMesh=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Model_getNode") ) { hx_Model_getNode=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Model_getSkin") ) { hx_Model_getSkin=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Model_setNode") ) { hx_Model_setNode=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Model_getMaterial") ) { hx_Model_getMaterial=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Model_hasMaterial") ) { hx_Model_hasMaterial=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Model_static_create") ) { hx_Model_static_create=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_Model_getMeshPartCount") ) { hx_Model_getMeshPartCount=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_Model_setMaterial_Str_Int") ) { hx_Model_setMaterial_Str_Int=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_Model_setMaterial_Mtrl_Int") ) { hx_Model_setMaterial_Mtrl_Int=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"hx_Model_setMaterial_StrX3_Int") ) { hx_Model_setMaterial_StrX3_Int=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Model_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create"),
	HX_CSTRING("hx_Model_static_create"),
	HX_CSTRING("hx_Model_draw"),
	HX_CSTRING("hx_Model_getMaterial"),
	HX_CSTRING("hx_Model_getMesh"),
	HX_CSTRING("hx_Model_getMeshPartCount"),
	HX_CSTRING("hx_Model_getNode"),
	HX_CSTRING("hx_Model_getSkin"),
	HX_CSTRING("hx_Model_hasMaterial"),
	HX_CSTRING("hx_Model_setMaterial_Str_Int"),
	HX_CSTRING("hx_Model_setMaterial_StrX3_Int"),
	HX_CSTRING("hx_Model_setMaterial_Mtrl_Int"),
	HX_CSTRING("hx_Model_setNode"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("draw"),
	HX_CSTRING("getMaterial"),
	HX_CSTRING("getMesh"),
	HX_CSTRING("getMeshPartCount"),
	HX_CSTRING("getNode"),
	HX_CSTRING("getSkin"),
	HX_CSTRING("hasMaterial"),
	HX_CSTRING("setMaterial_Str_Int"),
	HX_CSTRING("setMaterial_StrX3_Int"),
	HX_CSTRING("setMaterial_Mtrl_Int"),
	HX_CSTRING("setNode"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Model_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Model_obj::hx_Model_static_create,"hx_Model_static_create");
	HX_MARK_MEMBER_NAME(Model_obj::hx_Model_draw,"hx_Model_draw");
	HX_MARK_MEMBER_NAME(Model_obj::hx_Model_getMaterial,"hx_Model_getMaterial");
	HX_MARK_MEMBER_NAME(Model_obj::hx_Model_getMesh,"hx_Model_getMesh");
	HX_MARK_MEMBER_NAME(Model_obj::hx_Model_getMeshPartCount,"hx_Model_getMeshPartCount");
	HX_MARK_MEMBER_NAME(Model_obj::hx_Model_getNode,"hx_Model_getNode");
	HX_MARK_MEMBER_NAME(Model_obj::hx_Model_getSkin,"hx_Model_getSkin");
	HX_MARK_MEMBER_NAME(Model_obj::hx_Model_hasMaterial,"hx_Model_hasMaterial");
	HX_MARK_MEMBER_NAME(Model_obj::hx_Model_setMaterial_Str_Int,"hx_Model_setMaterial_Str_Int");
	HX_MARK_MEMBER_NAME(Model_obj::hx_Model_setMaterial_StrX3_Int,"hx_Model_setMaterial_StrX3_Int");
	HX_MARK_MEMBER_NAME(Model_obj::hx_Model_setMaterial_Mtrl_Int,"hx_Model_setMaterial_Mtrl_Int");
	HX_MARK_MEMBER_NAME(Model_obj::hx_Model_setNode,"hx_Model_setNode");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Model_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Model_obj::hx_Model_static_create,"hx_Model_static_create");
	HX_VISIT_MEMBER_NAME(Model_obj::hx_Model_draw,"hx_Model_draw");
	HX_VISIT_MEMBER_NAME(Model_obj::hx_Model_getMaterial,"hx_Model_getMaterial");
	HX_VISIT_MEMBER_NAME(Model_obj::hx_Model_getMesh,"hx_Model_getMesh");
	HX_VISIT_MEMBER_NAME(Model_obj::hx_Model_getMeshPartCount,"hx_Model_getMeshPartCount");
	HX_VISIT_MEMBER_NAME(Model_obj::hx_Model_getNode,"hx_Model_getNode");
	HX_VISIT_MEMBER_NAME(Model_obj::hx_Model_getSkin,"hx_Model_getSkin");
	HX_VISIT_MEMBER_NAME(Model_obj::hx_Model_hasMaterial,"hx_Model_hasMaterial");
	HX_VISIT_MEMBER_NAME(Model_obj::hx_Model_setMaterial_Str_Int,"hx_Model_setMaterial_Str_Int");
	HX_VISIT_MEMBER_NAME(Model_obj::hx_Model_setMaterial_StrX3_Int,"hx_Model_setMaterial_StrX3_Int");
	HX_VISIT_MEMBER_NAME(Model_obj::hx_Model_setMaterial_Mtrl_Int,"hx_Model_setMaterial_Mtrl_Int");
	HX_VISIT_MEMBER_NAME(Model_obj::hx_Model_setNode,"hx_Model_setNode");
};

#endif

Class Model_obj::__mClass;

void Model_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.Model"), hx::TCanCast< Model_obj> ,sStaticFields,sMemberFields,
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

void Model_obj::__boot()
{
	hx_Model_static_create= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Model >(),HX_CSTRING("static_create"),(int)1);
	hx_Model_draw= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Model >(),HX_CSTRING("draw"),(int)2);
	hx_Model_getMaterial= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Model >(),HX_CSTRING("getMaterial"),(int)2);
	hx_Model_getMesh= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Model >(),HX_CSTRING("getMesh"),(int)1);
	hx_Model_getMeshPartCount= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Model >(),HX_CSTRING("getMeshPartCount"),(int)1);
	hx_Model_getNode= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Model >(),HX_CSTRING("getNode"),(int)1);
	hx_Model_getSkin= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Model >(),HX_CSTRING("getSkin"),(int)1);
	hx_Model_hasMaterial= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Model >(),HX_CSTRING("hasMaterial"),(int)2);
	hx_Model_setMaterial_Str_Int= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Model >(),HX_CSTRING("setMaterial_Str_Int"),(int)3);
	hx_Model_setMaterial_StrX3_Int= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Model >(),HX_CSTRING("setMaterial_StrX3_Int"),(int)5);
	hx_Model_setMaterial_Mtrl_Int= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Model >(),HX_CSTRING("setMaterial_Mtrl_Int"),(int)3);
	hx_Model_setNode= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Model >(),HX_CSTRING("setNode"),(int)2);
}

} // end namespace org
} // end namespace gameplay3d
