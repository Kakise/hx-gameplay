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
#ifndef INCLUDED_org_gameplay3d_Camera
#include <org/gameplay3d/Camera.h>
#endif
#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
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
#ifndef INCLUDED_org_gameplay3d_Transform_Listener
#include <org/gameplay3d/Transform_Listener.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Vector3
#include <org/gameplay3d/Vector3.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IVector3
#include <org/gameplay3d/immutable/IVector3.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_ConversionTools
#include <org/gameplay3d/intern/ConversionTools.h>
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

Void Scene_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.Scene","new",0xacfce4f1,"org.gameplay3d.Scene.new","org/gameplay3d/Scene.hx",14,0x10c8d13f)
HX_STACK_THIS(this)
HX_STACK_ARG(nativeObjectInitializer,"nativeObjectInitializer")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(14)
	super::__construct(nativeObjectInitializer,nativeObjectInitializerParams);
}
;
	return null();
}

//Scene_obj::~Scene_obj() { }

Dynamic Scene_obj::__CreateEmpty() { return  new Scene_obj; }
hx::ObjectPtr< Scene_obj > Scene_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< Scene_obj > result = new Scene_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic Scene_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Scene_obj > result = new Scene_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *Scene_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::intern::INativeBinding_obj)) return operator ::org::gameplay3d::intern::INativeBinding_obj *();
	if (inType==typeid( ::org::gameplay3d::Ref_obj)) return operator ::org::gameplay3d::Ref_obj *();
	return super::__ToInterface(inType);
}

::org::gameplay3d::Node Scene_obj::addNode_Str( ::String id){
	HX_STACK_FRAME("org.gameplay3d.Scene","addNode_Str",0x83a49d66,"org.gameplay3d.Scene.addNode_Str","org/gameplay3d/Scene.hx",25,0x10c8d13f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(25)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Node >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(25)
	Dynamic nativeObject = ::org::gameplay3d::Scene_obj::hx_Scene_addNode_Str(this->nativeObject,id);		HX_STACK_VAR(nativeObject,"nativeObject");
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
			::org::gameplay3d::Node result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(25)
			if (((result == null()))){
				HX_STACK_LINE(25)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(25)
				::org::gameplay3d::Node _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,addNode_Str,return )

Void Scene_obj::addNode_Node( ::org::gameplay3d::Node node){
{
		HX_STACK_FRAME("org.gameplay3d.Scene","addNode_Node",0xa91333ad,"org.gameplay3d.Scene.addNode_Node","org/gameplay3d/Scene.hx",31,0x10c8d13f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(node,"node")
		HX_STACK_LINE(31)
		::org::gameplay3d::Scene_obj::hx_Scene_addNode_Node(this->nativeObject,(  (((node == null()))) ? Dynamic(null()) : Dynamic(node->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,addNode_Node,(void))

Void Scene_obj::bindAudioListenerToCamera( bool bind){
{
		HX_STACK_FRAME("org.gameplay3d.Scene","bindAudioListenerToCamera",0x7c61ec5e,"org.gameplay3d.Scene.bindAudioListenerToCamera","org/gameplay3d/Scene.hx",37,0x10c8d13f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bind,"bind")
		HX_STACK_LINE(37)
		::org::gameplay3d::Scene_obj::hx_Scene_bindAudioListenerToCamera(this->nativeObject,bind);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,bindAudioListenerToCamera,(void))

Void Scene_obj::drawDebug( int debugFlags){
{
		HX_STACK_FRAME("org.gameplay3d.Scene","drawDebug",0xeb82df00,"org.gameplay3d.Scene.drawDebug","org/gameplay3d/Scene.hx",49,0x10c8d13f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(debugFlags,"debugFlags")
		HX_STACK_LINE(49)
		::org::gameplay3d::Scene_obj::hx_Scene_drawDebug(this->nativeObject,debugFlags);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,drawDebug,(void))

::org::gameplay3d::Node Scene_obj::findNode( ::String id,hx::Null< bool >  __o_recursive,hx::Null< bool >  __o_exactMatch){
bool recursive = __o_recursive.Default(true);
bool exactMatch = __o_exactMatch.Default(true);
	HX_STACK_FRAME("org.gameplay3d.Scene","findNode",0x874bd4aa,"org.gameplay3d.Scene.findNode","org/gameplay3d/Scene.hx",55,0x10c8d13f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(recursive,"recursive")
	HX_STACK_ARG(exactMatch,"exactMatch")
{
		HX_STACK_LINE(55)
		::Class classObj = hx::ClassOf< ::org::gameplay3d::Node >();		HX_STACK_VAR(classObj,"classObj");
		HX_STACK_LINE(55)
		Dynamic nativeObject = ::org::gameplay3d::Scene_obj::hx_Scene_findNode(this->nativeObject,id,recursive,exactMatch);		HX_STACK_VAR(nativeObject,"nativeObject");
		HX_STACK_LINE(55)
		if (((nativeObject == null()))){
			HX_STACK_LINE(55)
			return null();
		}
		else{
			HX_STACK_LINE(55)
			if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
				HX_STACK_LINE(55)
				::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
				HX_STACK_LINE(55)
				::org::gameplay3d::Node result = ref->get();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(55)
				if (((result == null()))){
					HX_STACK_LINE(55)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
					HX_STACK_LINE(55)
					::org::gameplay3d::Node _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(55)
					result = _g;
					HX_STACK_LINE(55)
					ref->set(result);
				}
				HX_STACK_LINE(55)
				return result;
			}
			else{
				HX_STACK_LINE(55)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
				HX_STACK_LINE(55)
				return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
			}
		}
		HX_STACK_LINE(55)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Scene_obj,findNode,return )

int Scene_obj::findNodes( ::String id,Dynamic nodes,hx::Null< bool >  __o_recursive,hx::Null< bool >  __o_exactMatch){
bool recursive = __o_recursive.Default(true);
bool exactMatch = __o_exactMatch.Default(true);
	HX_STACK_FRAME("org.gameplay3d.Scene","findNodes",0xdb0e4089,"org.gameplay3d.Scene.findNodes","org/gameplay3d/Scene.hx",60,0x10c8d13f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(nodes,"nodes")
	HX_STACK_ARG(recursive,"recursive")
	HX_STACK_ARG(exactMatch,"exactMatch")
{
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/Scene.hx",61,0x10c8d13f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("value") , null(),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(61)
		Dynamic _nodes = _Function_1_1::Block();		HX_STACK_VAR(_nodes,"_nodes");
		HX_STACK_LINE(62)
		int result = ::org::gameplay3d::Scene_obj::hx_Scene_findNodes(this->nativeObject,id,_nodes,recursive,exactMatch);		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(63)
		Array< ::Dynamic > _g = ::org::gameplay3d::intern::ConversionTools_obj::extractNodeArray(_nodes->__Field(HX_CSTRING("value"),true));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(63)
		nodes->__FieldRef(HX_CSTRING("value")) = _g;
		HX_STACK_LINE(64)
		return result;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Scene_obj,findNodes,return )

::org::gameplay3d::Camera Scene_obj::getActiveCamera( ){
	HX_STACK_FRAME("org.gameplay3d.Scene","getActiveCamera",0x4c9014d2,"org.gameplay3d.Scene.getActiveCamera","org/gameplay3d/Scene.hx",70,0x10c8d13f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(70)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Camera >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(70)
	Dynamic nativeObject = ::org::gameplay3d::Scene_obj::hx_Scene_getActiveCamera(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(70)
	if (((nativeObject == null()))){
		HX_STACK_LINE(70)
		return null();
	}
	else{
		HX_STACK_LINE(70)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(70)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(70)
			::org::gameplay3d::Camera result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(70)
			if (((result == null()))){
				HX_STACK_LINE(70)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(70)
				::org::gameplay3d::Camera _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(70)
				result = _g;
				HX_STACK_LINE(70)
				ref->set(result);
			}
			HX_STACK_LINE(70)
			return result;
		}
		else{
			HX_STACK_LINE(70)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(70)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(70)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,getActiveCamera,return )

::org::gameplay3d::immutable::IVector3 Scene_obj::getAmbientColor( ){
	HX_STACK_FRAME("org.gameplay3d.Scene","getAmbientColor",0xccba71f2,"org.gameplay3d.Scene.getAmbientColor","org/gameplay3d/Scene.hx",76,0x10c8d13f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_ambientColor == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(76)
			Dynamic nativeObject = ::org::gameplay3d::Scene_obj::hx_Scene_getAmbientColor(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
			HX_STACK_LINE(29)
			if (((nativeObject == null()))){
				HX_STACK_LINE(29)
				_g1 = null();
			}
			else{
				HX_STACK_LINE(29)
				if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
					HX_STACK_LINE(29)
					::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
					HX_STACK_LINE(29)
					::org::gameplay3d::Vector3 result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Vector3 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(29)
						result = _g;
						HX_STACK_LINE(29)
						ref->set(result);
					}
					HX_STACK_LINE(29)
					_g1 = result;
				}
				else{
					HX_STACK_LINE(29)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
					HX_STACK_LINE(29)
					_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
				}
			}
		}
		HX_STACK_LINE(29)
		return this->_ambientColor = _g1;
	}
	else{
		HX_STACK_LINE(76)
		Dynamic _g2 = ::org::gameplay3d::Scene_obj::hx_Scene_getAmbientColor(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g3 = this->_ambientColor->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_ambientColor = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,getAmbientColor,return )

::org::gameplay3d::Node Scene_obj::getFirstNode( ){
	HX_STACK_FRAME("org.gameplay3d.Scene","getFirstNode",0xc0f1742b,"org.gameplay3d.Scene.getFirstNode","org/gameplay3d/Scene.hx",82,0x10c8d13f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(82)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Node >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(82)
	Dynamic nativeObject = ::org::gameplay3d::Scene_obj::hx_Scene_getFirstNode(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(82)
	if (((nativeObject == null()))){
		HX_STACK_LINE(82)
		return null();
	}
	else{
		HX_STACK_LINE(82)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(82)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(82)
			::org::gameplay3d::Node result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(82)
			if (((result == null()))){
				HX_STACK_LINE(82)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::Node _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(82)
				ref->set(result);
			}
			HX_STACK_LINE(82)
			return result;
		}
		else{
			HX_STACK_LINE(82)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(82)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(82)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,getFirstNode,return )

::String Scene_obj::getId( ){
	HX_STACK_FRAME("org.gameplay3d.Scene","getId",0x89e4ace2,"org.gameplay3d.Scene.getId","org/gameplay3d/Scene.hx",88,0x10c8d13f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(88)
	return ::org::gameplay3d::Scene_obj::hx_Scene_getId(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,getId,return )

int Scene_obj::getNodeCount( ){
	HX_STACK_FRAME("org.gameplay3d.Scene","getNodeCount",0xafb21146,"org.gameplay3d.Scene.getNodeCount","org/gameplay3d/Scene.hx",94,0x10c8d13f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(94)
	return ::org::gameplay3d::Scene_obj::hx_Scene_getNodeCount(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,getNodeCount,return )

Void Scene_obj::removeAllNodes( ){
{
		HX_STACK_FRAME("org.gameplay3d.Scene","removeAllNodes",0xc6ed36c3,"org.gameplay3d.Scene.removeAllNodes","org/gameplay3d/Scene.hx",106,0x10c8d13f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(106)
		::org::gameplay3d::Scene_obj::hx_Scene_removeAllNodes(this->nativeObject);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,removeAllNodes,(void))

Void Scene_obj::removeNode( ::org::gameplay3d::Node node){
{
		HX_STACK_FRAME("org.gameplay3d.Scene","removeNode",0x471d53f5,"org.gameplay3d.Scene.removeNode","org/gameplay3d/Scene.hx",112,0x10c8d13f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(node,"node")
		HX_STACK_LINE(112)
		::org::gameplay3d::Scene_obj::hx_Scene_removeNode(this->nativeObject,(  (((node == null()))) ? Dynamic(null()) : Dynamic(node->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,removeNode,(void))

Void Scene_obj::setActiveCamera( ::org::gameplay3d::Camera camera){
{
		HX_STACK_FRAME("org.gameplay3d.Scene","setActiveCamera",0x485b91de,"org.gameplay3d.Scene.setActiveCamera","org/gameplay3d/Scene.hx",118,0x10c8d13f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(camera,"camera")
		HX_STACK_LINE(118)
		::org::gameplay3d::Scene_obj::hx_Scene_setActiveCamera(this->nativeObject,(  (((camera == null()))) ? Dynamic(null()) : Dynamic(camera->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,setActiveCamera,(void))

Void Scene_obj::setAmbientColor( Float red,Float green,Float blue){
{
		HX_STACK_FRAME("org.gameplay3d.Scene","setAmbientColor",0xc885eefe,"org.gameplay3d.Scene.setAmbientColor","org/gameplay3d/Scene.hx",124,0x10c8d13f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(red,"red")
		HX_STACK_ARG(green,"green")
		HX_STACK_ARG(blue,"blue")
		HX_STACK_LINE(124)
		::org::gameplay3d::Scene_obj::hx_Scene_setAmbientColor(this->nativeObject,red,green,blue);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Scene_obj,setAmbientColor,(void))

Void Scene_obj::setId( ::String id){
{
		HX_STACK_FRAME("org.gameplay3d.Scene","setId",0x72b3a2ee,"org.gameplay3d.Scene.setId","org/gameplay3d/Scene.hx",130,0x10c8d13f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(130)
		::org::gameplay3d::Scene_obj::hx_Scene_setId(this->nativeObject,id);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,setId,(void))

Void Scene_obj::visit_Str( ::String visitMethod){
{
		HX_STACK_FRAME("org.gameplay3d.Scene","visit_Str",0xb072b82e,"org.gameplay3d.Scene.visit_Str","org/gameplay3d/Scene.hx",136,0x10c8d13f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(visitMethod,"visitMethod")
		HX_STACK_LINE(136)
		::org::gameplay3d::Scene_obj::hx_Scene_visit_Str(this->nativeObject,visitMethod);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,visit_Str,(void))

Void Scene_obj::visit_Func( Dynamic visitMethod){
{
		HX_STACK_FRAME("org.gameplay3d.Scene","visit_Func",0xab576927,"org.gameplay3d.Scene.visit_Func","org/gameplay3d/Scene.hx",141,0x10c8d13f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(visitMethod,"visitMethod")
		HX_STACK_LINE(142)
		this->clbkVisitMethod_Node = visitMethod;
		HX_STACK_LINE(143)
		::org::gameplay3d::Scene_obj::hx_Scene_visit_Func(this->nativeObject,this->visitMethod_Node_dyn());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,visit_Func,(void))

Void Scene_obj::visit_Func_Int( Dynamic visitMethod,int cookie){
{
		HX_STACK_FRAME("org.gameplay3d.Scene","visit_Func_Int",0x69639277,"org.gameplay3d.Scene.visit_Func_Int","org/gameplay3d/Scene.hx",148,0x10c8d13f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(visitMethod,"visitMethod")
		HX_STACK_ARG(cookie,"cookie")
		HX_STACK_LINE(149)
		this->clbkVisitMethod_Node_Int = visitMethod;
		HX_STACK_LINE(150)
		::org::gameplay3d::Scene_obj::hx_Scene_visit_Func_Int(this->nativeObject,this->visitMethod_Node_Int_dyn(),cookie);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,visit_Func_Int,(void))

bool Scene_obj::visitMethod_Node( Dynamic node){
	HX_STACK_FRAME("org.gameplay3d.Scene","visitMethod_Node",0xcef81c44,"org.gameplay3d.Scene.visitMethod_Node","org/gameplay3d/Scene.hx",161,0x10c8d13f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(node,"node")
	HX_STACK_LINE(162)
	::org::gameplay3d::Node _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(162)
	{
		HX_STACK_LINE(162)
		::Class classObj = hx::ClassOf< ::org::gameplay3d::Node >();		HX_STACK_VAR(classObj,"classObj");
		HX_STACK_LINE(162)
		if (((node == null()))){
			HX_STACK_LINE(162)
			_g1 = null();
		}
		else{
			HX_STACK_LINE(162)
			if ((::Std_obj::is(node,hx::ClassOf< ::cpp::vm::WeakRef >()))){
				HX_STACK_LINE(162)
				::cpp::vm::WeakRef ref = node;		HX_STACK_VAR(ref,"ref");
				HX_STACK_LINE(162)
				::org::gameplay3d::Node result = ref->get();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(162)
				if (((result == null()))){
					HX_STACK_LINE(162)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
					HX_STACK_LINE(162)
					::org::gameplay3d::Node _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(162)
					result = _g;
					HX_STACK_LINE(162)
					ref->set(result);
				}
				HX_STACK_LINE(162)
				_g1 = result;
			}
			else{
				HX_STACK_LINE(162)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = node;
				HX_STACK_LINE(162)
				_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
			}
		}
	}
	HX_STACK_LINE(162)
	return this->clbkVisitMethod_Node(_g1);
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,visitMethod_Node,return )

bool Scene_obj::visitMethod_Node_Int( Dynamic node,int cookie){
	HX_STACK_FRAME("org.gameplay3d.Scene","visitMethod_Node_Int",0x49789814,"org.gameplay3d.Scene.visitMethod_Node_Int","org/gameplay3d/Scene.hx",166,0x10c8d13f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(node,"node")
	HX_STACK_ARG(cookie,"cookie")
	HX_STACK_LINE(167)
	::org::gameplay3d::Node _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(167)
	{
		HX_STACK_LINE(167)
		::Class classObj = hx::ClassOf< ::org::gameplay3d::Node >();		HX_STACK_VAR(classObj,"classObj");
		HX_STACK_LINE(167)
		if (((node == null()))){
			HX_STACK_LINE(167)
			_g1 = null();
		}
		else{
			HX_STACK_LINE(167)
			if ((::Std_obj::is(node,hx::ClassOf< ::cpp::vm::WeakRef >()))){
				HX_STACK_LINE(167)
				::cpp::vm::WeakRef ref = node;		HX_STACK_VAR(ref,"ref");
				HX_STACK_LINE(167)
				::org::gameplay3d::Node result = ref->get();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(167)
				if (((result == null()))){
					HX_STACK_LINE(167)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
					HX_STACK_LINE(167)
					::org::gameplay3d::Node _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(167)
					result = _g;
					HX_STACK_LINE(167)
					ref->set(result);
				}
				HX_STACK_LINE(167)
				_g1 = result;
			}
			else{
				HX_STACK_LINE(167)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = node;
				HX_STACK_LINE(167)
				_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
			}
		}
	}
	HX_STACK_LINE(167)
	return this->clbkVisitMethod_Node_Int(_g1,cookie);
}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,visitMethod_Node_Int,return )

::org::gameplay3d::Scene Scene_obj::create( ){
	HX_STACK_FRAME("org.gameplay3d.Scene","create",0xf722c30b,"org.gameplay3d.Scene.create","org/gameplay3d/Scene.hx",43,0x10c8d13f)
	HX_STACK_LINE(43)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Scene >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(43)
	Dynamic nativeObject = ::org::gameplay3d::Scene_obj::hx_Scene_static_create();		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(43)
	if (((nativeObject == null()))){
		HX_STACK_LINE(43)
		return null();
	}
	else{
		HX_STACK_LINE(43)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(43)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(43)
			::org::gameplay3d::Scene result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(43)
			if (((result == null()))){
				HX_STACK_LINE(43)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(43)
				::org::gameplay3d::Scene _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(43)
				result = _g;
				HX_STACK_LINE(43)
				ref->set(result);
			}
			HX_STACK_LINE(43)
			return result;
		}
		else{
			HX_STACK_LINE(43)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(43)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(43)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,create,return )

::org::gameplay3d::Scene Scene_obj::load( ::String filePath){
	HX_STACK_FRAME("org.gameplay3d.Scene","load",0xaf008475,"org.gameplay3d.Scene.load","org/gameplay3d/Scene.hx",100,0x10c8d13f)
	HX_STACK_ARG(filePath,"filePath")
	HX_STACK_LINE(100)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Scene >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(100)
	Dynamic nativeObject = ::org::gameplay3d::Scene_obj::hx_Scene_static_load(filePath);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(100)
	if (((nativeObject == null()))){
		HX_STACK_LINE(100)
		return null();
	}
	else{
		HX_STACK_LINE(100)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(100)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(100)
			::org::gameplay3d::Scene result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(100)
			if (((result == null()))){
				HX_STACK_LINE(100)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(100)
				::org::gameplay3d::Scene _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(100)
				result = _g;
				HX_STACK_LINE(100)
				ref->set(result);
			}
			HX_STACK_LINE(100)
			return result;
		}
		else{
			HX_STACK_LINE(100)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(100)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(100)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,load,return )

Dynamic Scene_obj::hx_Scene_addNode_Str;

Dynamic Scene_obj::hx_Scene_addNode_Node;

Dynamic Scene_obj::hx_Scene_bindAudioListenerToCamera;

Dynamic Scene_obj::hx_Scene_static_create;

Dynamic Scene_obj::hx_Scene_drawDebug;

Dynamic Scene_obj::hx_Scene_findNode;

Dynamic Scene_obj::hx_Scene_findNodes;

Dynamic Scene_obj::hx_Scene_getActiveCamera;

Dynamic Scene_obj::hx_Scene_getAmbientColor;

Dynamic Scene_obj::hx_Scene_getFirstNode;

Dynamic Scene_obj::hx_Scene_getId;

Dynamic Scene_obj::hx_Scene_getNodeCount;

Dynamic Scene_obj::hx_Scene_static_load;

Dynamic Scene_obj::hx_Scene_removeAllNodes;

Dynamic Scene_obj::hx_Scene_removeNode;

Dynamic Scene_obj::hx_Scene_setActiveCamera;

Dynamic Scene_obj::hx_Scene_setAmbientColor;

Dynamic Scene_obj::hx_Scene_setId;

Dynamic Scene_obj::hx_Scene_visit_Str;

Dynamic Scene_obj::hx_Scene_visit_Func;

Dynamic Scene_obj::hx_Scene_visit_Func_Int;


Scene_obj::Scene_obj()
{
}

void Scene_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Scene);
	HX_MARK_MEMBER_NAME(_ambientColor,"_ambientColor");
	HX_MARK_MEMBER_NAME(clbkVisitMethod_Node,"clbkVisitMethod_Node");
	HX_MARK_MEMBER_NAME(clbkVisitMethod_Node_Int,"clbkVisitMethod_Node_Int");
	::org::gameplay3d::intern::NativeBinding_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Scene_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_ambientColor,"_ambientColor");
	HX_VISIT_MEMBER_NAME(clbkVisitMethod_Node,"clbkVisitMethod_Node");
	HX_VISIT_MEMBER_NAME(clbkVisitMethod_Node_Int,"clbkVisitMethod_Node_Int");
	::org::gameplay3d::intern::NativeBinding_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Scene_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"getId") ) { return getId_dyn(); }
		if (HX_FIELD_EQ(inName,"setId") ) { return setId_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"findNode") ) { return findNode_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"drawDebug") ) { return drawDebug_dyn(); }
		if (HX_FIELD_EQ(inName,"findNodes") ) { return findNodes_dyn(); }
		if (HX_FIELD_EQ(inName,"visit_Str") ) { return visit_Str_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"removeNode") ) { return removeNode_dyn(); }
		if (HX_FIELD_EQ(inName,"visit_Func") ) { return visit_Func_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addNode_Str") ) { return addNode_Str_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addNode_Node") ) { return addNode_Node_dyn(); }
		if (HX_FIELD_EQ(inName,"getFirstNode") ) { return getFirstNode_dyn(); }
		if (HX_FIELD_EQ(inName,"getNodeCount") ) { return getNodeCount_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_ambientColor") ) { return _ambientColor; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"hx_Scene_getId") ) { return hx_Scene_getId; }
		if (HX_FIELD_EQ(inName,"hx_Scene_setId") ) { return hx_Scene_setId; }
		if (HX_FIELD_EQ(inName,"removeAllNodes") ) { return removeAllNodes_dyn(); }
		if (HX_FIELD_EQ(inName,"visit_Func_Int") ) { return visit_Func_Int_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getActiveCamera") ) { return getActiveCamera_dyn(); }
		if (HX_FIELD_EQ(inName,"getAmbientColor") ) { return getAmbientColor_dyn(); }
		if (HX_FIELD_EQ(inName,"setActiveCamera") ) { return setActiveCamera_dyn(); }
		if (HX_FIELD_EQ(inName,"setAmbientColor") ) { return setAmbientColor_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"visitMethod_Node") ) { return visitMethod_Node_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"hx_Scene_findNode") ) { return hx_Scene_findNode; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hx_Scene_drawDebug") ) { return hx_Scene_drawDebug; }
		if (HX_FIELD_EQ(inName,"hx_Scene_findNodes") ) { return hx_Scene_findNodes; }
		if (HX_FIELD_EQ(inName,"hx_Scene_visit_Str") ) { return hx_Scene_visit_Str; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hx_Scene_removeNode") ) { return hx_Scene_removeNode; }
		if (HX_FIELD_EQ(inName,"hx_Scene_visit_Func") ) { return hx_Scene_visit_Func; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Scene_addNode_Str") ) { return hx_Scene_addNode_Str; }
		if (HX_FIELD_EQ(inName,"hx_Scene_static_load") ) { return hx_Scene_static_load; }
		if (HX_FIELD_EQ(inName,"clbkVisitMethod_Node") ) { return clbkVisitMethod_Node; }
		if (HX_FIELD_EQ(inName,"visitMethod_Node_Int") ) { return visitMethod_Node_Int_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hx_Scene_addNode_Node") ) { return hx_Scene_addNode_Node; }
		if (HX_FIELD_EQ(inName,"hx_Scene_getFirstNode") ) { return hx_Scene_getFirstNode; }
		if (HX_FIELD_EQ(inName,"hx_Scene_getNodeCount") ) { return hx_Scene_getNodeCount; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Scene_static_create") ) { return hx_Scene_static_create; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_Scene_removeAllNodes") ) { return hx_Scene_removeAllNodes; }
		if (HX_FIELD_EQ(inName,"hx_Scene_visit_Func_Int") ) { return hx_Scene_visit_Func_Int; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_Scene_getActiveCamera") ) { return hx_Scene_getActiveCamera; }
		if (HX_FIELD_EQ(inName,"hx_Scene_getAmbientColor") ) { return hx_Scene_getAmbientColor; }
		if (HX_FIELD_EQ(inName,"hx_Scene_setActiveCamera") ) { return hx_Scene_setActiveCamera; }
		if (HX_FIELD_EQ(inName,"hx_Scene_setAmbientColor") ) { return hx_Scene_setAmbientColor; }
		if (HX_FIELD_EQ(inName,"clbkVisitMethod_Node_Int") ) { return clbkVisitMethod_Node_Int; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"bindAudioListenerToCamera") ) { return bindAudioListenerToCamera_dyn(); }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"hx_Scene_bindAudioListenerToCamera") ) { return hx_Scene_bindAudioListenerToCamera; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Scene_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"_ambientColor") ) { _ambientColor=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"hx_Scene_getId") ) { hx_Scene_getId=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Scene_setId") ) { hx_Scene_setId=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"hx_Scene_findNode") ) { hx_Scene_findNode=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hx_Scene_drawDebug") ) { hx_Scene_drawDebug=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Scene_findNodes") ) { hx_Scene_findNodes=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Scene_visit_Str") ) { hx_Scene_visit_Str=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hx_Scene_removeNode") ) { hx_Scene_removeNode=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Scene_visit_Func") ) { hx_Scene_visit_Func=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Scene_addNode_Str") ) { hx_Scene_addNode_Str=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Scene_static_load") ) { hx_Scene_static_load=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clbkVisitMethod_Node") ) { clbkVisitMethod_Node=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hx_Scene_addNode_Node") ) { hx_Scene_addNode_Node=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Scene_getFirstNode") ) { hx_Scene_getFirstNode=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Scene_getNodeCount") ) { hx_Scene_getNodeCount=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Scene_static_create") ) { hx_Scene_static_create=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_Scene_removeAllNodes") ) { hx_Scene_removeAllNodes=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Scene_visit_Func_Int") ) { hx_Scene_visit_Func_Int=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_Scene_getActiveCamera") ) { hx_Scene_getActiveCamera=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Scene_getAmbientColor") ) { hx_Scene_getAmbientColor=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Scene_setActiveCamera") ) { hx_Scene_setActiveCamera=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Scene_setAmbientColor") ) { hx_Scene_setAmbientColor=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clbkVisitMethod_Node_Int") ) { clbkVisitMethod_Node_Int=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"hx_Scene_bindAudioListenerToCamera") ) { hx_Scene_bindAudioListenerToCamera=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Scene_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_ambientColor"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create"),
	HX_CSTRING("load"),
	HX_CSTRING("hx_Scene_addNode_Str"),
	HX_CSTRING("hx_Scene_addNode_Node"),
	HX_CSTRING("hx_Scene_bindAudioListenerToCamera"),
	HX_CSTRING("hx_Scene_static_create"),
	HX_CSTRING("hx_Scene_drawDebug"),
	HX_CSTRING("hx_Scene_findNode"),
	HX_CSTRING("hx_Scene_findNodes"),
	HX_CSTRING("hx_Scene_getActiveCamera"),
	HX_CSTRING("hx_Scene_getAmbientColor"),
	HX_CSTRING("hx_Scene_getFirstNode"),
	HX_CSTRING("hx_Scene_getId"),
	HX_CSTRING("hx_Scene_getNodeCount"),
	HX_CSTRING("hx_Scene_static_load"),
	HX_CSTRING("hx_Scene_removeAllNodes"),
	HX_CSTRING("hx_Scene_removeNode"),
	HX_CSTRING("hx_Scene_setActiveCamera"),
	HX_CSTRING("hx_Scene_setAmbientColor"),
	HX_CSTRING("hx_Scene_setId"),
	HX_CSTRING("hx_Scene_visit_Str"),
	HX_CSTRING("hx_Scene_visit_Func"),
	HX_CSTRING("hx_Scene_visit_Func_Int"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(Scene_obj,_ambientColor),HX_CSTRING("_ambientColor")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Scene_obj,clbkVisitMethod_Node),HX_CSTRING("clbkVisitMethod_Node")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Scene_obj,clbkVisitMethod_Node_Int),HX_CSTRING("clbkVisitMethod_Node_Int")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_ambientColor"),
	HX_CSTRING("addNode_Str"),
	HX_CSTRING("addNode_Node"),
	HX_CSTRING("bindAudioListenerToCamera"),
	HX_CSTRING("drawDebug"),
	HX_CSTRING("findNode"),
	HX_CSTRING("findNodes"),
	HX_CSTRING("getActiveCamera"),
	HX_CSTRING("getAmbientColor"),
	HX_CSTRING("getFirstNode"),
	HX_CSTRING("getId"),
	HX_CSTRING("getNodeCount"),
	HX_CSTRING("removeAllNodes"),
	HX_CSTRING("removeNode"),
	HX_CSTRING("setActiveCamera"),
	HX_CSTRING("setAmbientColor"),
	HX_CSTRING("setId"),
	HX_CSTRING("visit_Str"),
	HX_CSTRING("visit_Func"),
	HX_CSTRING("visit_Func_Int"),
	HX_CSTRING("clbkVisitMethod_Node"),
	HX_CSTRING("clbkVisitMethod_Node_Int"),
	HX_CSTRING("visitMethod_Node"),
	HX_CSTRING("visitMethod_Node_Int"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Scene_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Scene_obj::hx_Scene_addNode_Str,"hx_Scene_addNode_Str");
	HX_MARK_MEMBER_NAME(Scene_obj::hx_Scene_addNode_Node,"hx_Scene_addNode_Node");
	HX_MARK_MEMBER_NAME(Scene_obj::hx_Scene_bindAudioListenerToCamera,"hx_Scene_bindAudioListenerToCamera");
	HX_MARK_MEMBER_NAME(Scene_obj::hx_Scene_static_create,"hx_Scene_static_create");
	HX_MARK_MEMBER_NAME(Scene_obj::hx_Scene_drawDebug,"hx_Scene_drawDebug");
	HX_MARK_MEMBER_NAME(Scene_obj::hx_Scene_findNode,"hx_Scene_findNode");
	HX_MARK_MEMBER_NAME(Scene_obj::hx_Scene_findNodes,"hx_Scene_findNodes");
	HX_MARK_MEMBER_NAME(Scene_obj::hx_Scene_getActiveCamera,"hx_Scene_getActiveCamera");
	HX_MARK_MEMBER_NAME(Scene_obj::hx_Scene_getAmbientColor,"hx_Scene_getAmbientColor");
	HX_MARK_MEMBER_NAME(Scene_obj::hx_Scene_getFirstNode,"hx_Scene_getFirstNode");
	HX_MARK_MEMBER_NAME(Scene_obj::hx_Scene_getId,"hx_Scene_getId");
	HX_MARK_MEMBER_NAME(Scene_obj::hx_Scene_getNodeCount,"hx_Scene_getNodeCount");
	HX_MARK_MEMBER_NAME(Scene_obj::hx_Scene_static_load,"hx_Scene_static_load");
	HX_MARK_MEMBER_NAME(Scene_obj::hx_Scene_removeAllNodes,"hx_Scene_removeAllNodes");
	HX_MARK_MEMBER_NAME(Scene_obj::hx_Scene_removeNode,"hx_Scene_removeNode");
	HX_MARK_MEMBER_NAME(Scene_obj::hx_Scene_setActiveCamera,"hx_Scene_setActiveCamera");
	HX_MARK_MEMBER_NAME(Scene_obj::hx_Scene_setAmbientColor,"hx_Scene_setAmbientColor");
	HX_MARK_MEMBER_NAME(Scene_obj::hx_Scene_setId,"hx_Scene_setId");
	HX_MARK_MEMBER_NAME(Scene_obj::hx_Scene_visit_Str,"hx_Scene_visit_Str");
	HX_MARK_MEMBER_NAME(Scene_obj::hx_Scene_visit_Func,"hx_Scene_visit_Func");
	HX_MARK_MEMBER_NAME(Scene_obj::hx_Scene_visit_Func_Int,"hx_Scene_visit_Func_Int");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Scene_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Scene_obj::hx_Scene_addNode_Str,"hx_Scene_addNode_Str");
	HX_VISIT_MEMBER_NAME(Scene_obj::hx_Scene_addNode_Node,"hx_Scene_addNode_Node");
	HX_VISIT_MEMBER_NAME(Scene_obj::hx_Scene_bindAudioListenerToCamera,"hx_Scene_bindAudioListenerToCamera");
	HX_VISIT_MEMBER_NAME(Scene_obj::hx_Scene_static_create,"hx_Scene_static_create");
	HX_VISIT_MEMBER_NAME(Scene_obj::hx_Scene_drawDebug,"hx_Scene_drawDebug");
	HX_VISIT_MEMBER_NAME(Scene_obj::hx_Scene_findNode,"hx_Scene_findNode");
	HX_VISIT_MEMBER_NAME(Scene_obj::hx_Scene_findNodes,"hx_Scene_findNodes");
	HX_VISIT_MEMBER_NAME(Scene_obj::hx_Scene_getActiveCamera,"hx_Scene_getActiveCamera");
	HX_VISIT_MEMBER_NAME(Scene_obj::hx_Scene_getAmbientColor,"hx_Scene_getAmbientColor");
	HX_VISIT_MEMBER_NAME(Scene_obj::hx_Scene_getFirstNode,"hx_Scene_getFirstNode");
	HX_VISIT_MEMBER_NAME(Scene_obj::hx_Scene_getId,"hx_Scene_getId");
	HX_VISIT_MEMBER_NAME(Scene_obj::hx_Scene_getNodeCount,"hx_Scene_getNodeCount");
	HX_VISIT_MEMBER_NAME(Scene_obj::hx_Scene_static_load,"hx_Scene_static_load");
	HX_VISIT_MEMBER_NAME(Scene_obj::hx_Scene_removeAllNodes,"hx_Scene_removeAllNodes");
	HX_VISIT_MEMBER_NAME(Scene_obj::hx_Scene_removeNode,"hx_Scene_removeNode");
	HX_VISIT_MEMBER_NAME(Scene_obj::hx_Scene_setActiveCamera,"hx_Scene_setActiveCamera");
	HX_VISIT_MEMBER_NAME(Scene_obj::hx_Scene_setAmbientColor,"hx_Scene_setAmbientColor");
	HX_VISIT_MEMBER_NAME(Scene_obj::hx_Scene_setId,"hx_Scene_setId");
	HX_VISIT_MEMBER_NAME(Scene_obj::hx_Scene_visit_Str,"hx_Scene_visit_Str");
	HX_VISIT_MEMBER_NAME(Scene_obj::hx_Scene_visit_Func,"hx_Scene_visit_Func");
	HX_VISIT_MEMBER_NAME(Scene_obj::hx_Scene_visit_Func_Int,"hx_Scene_visit_Func_Int");
};

#endif

Class Scene_obj::__mClass;

void Scene_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.Scene"), hx::TCanCast< Scene_obj> ,sStaticFields,sMemberFields,
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

void Scene_obj::__boot()
{
	hx_Scene_addNode_Str= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Scene >(),HX_CSTRING("addNode_Str"),(int)2);
	hx_Scene_addNode_Node= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Scene >(),HX_CSTRING("addNode_Node"),(int)2);
	hx_Scene_bindAudioListenerToCamera= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Scene >(),HX_CSTRING("bindAudioListenerToCamera"),(int)2);
	hx_Scene_static_create= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Scene >(),HX_CSTRING("static_create"),(int)0);
	hx_Scene_drawDebug= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Scene >(),HX_CSTRING("drawDebug"),(int)2);
	hx_Scene_findNode= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Scene >(),HX_CSTRING("findNode"),(int)4);
	hx_Scene_findNodes= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Scene >(),HX_CSTRING("findNodes"),(int)5);
	hx_Scene_getActiveCamera= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Scene >(),HX_CSTRING("getActiveCamera"),(int)1);
	hx_Scene_getAmbientColor= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Scene >(),HX_CSTRING("getAmbientColor"),(int)1);
	hx_Scene_getFirstNode= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Scene >(),HX_CSTRING("getFirstNode"),(int)1);
	hx_Scene_getId= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Scene >(),HX_CSTRING("getId"),(int)1);
	hx_Scene_getNodeCount= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Scene >(),HX_CSTRING("getNodeCount"),(int)1);
	hx_Scene_static_load= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Scene >(),HX_CSTRING("static_load"),(int)1);
	hx_Scene_removeAllNodes= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Scene >(),HX_CSTRING("removeAllNodes"),(int)1);
	hx_Scene_removeNode= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Scene >(),HX_CSTRING("removeNode"),(int)2);
	hx_Scene_setActiveCamera= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Scene >(),HX_CSTRING("setActiveCamera"),(int)2);
	hx_Scene_setAmbientColor= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Scene >(),HX_CSTRING("setAmbientColor"),(int)4);
	hx_Scene_setId= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Scene >(),HX_CSTRING("setId"),(int)2);
	hx_Scene_visit_Str= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Scene >(),HX_CSTRING("visit_Str"),(int)2);
	hx_Scene_visit_Func= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Scene >(),HX_CSTRING("visit_Func"),(int)2);
	hx_Scene_visit_Func_Int= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Scene >(),HX_CSTRING("visit_Func_Int"),(int)3);
}

} // end namespace org
} // end namespace gameplay3d
