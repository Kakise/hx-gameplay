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
#ifndef INCLUDED_org_gameplay3d_AIAgent
#include <org/gameplay3d/AIAgent.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Animation
#include <org/gameplay3d/Animation.h>
#endif
#ifndef INCLUDED_org_gameplay3d_AnimationTarget
#include <org/gameplay3d/AnimationTarget.h>
#endif
#ifndef INCLUDED_org_gameplay3d_AudioSource
#include <org/gameplay3d/AudioSource.h>
#endif
#ifndef INCLUDED_org_gameplay3d_BoundingSphere
#include <org/gameplay3d/BoundingSphere.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Camera
#include <org/gameplay3d/Camera.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Container
#include <org/gameplay3d/Container.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Control
#include <org/gameplay3d/Control.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Form
#include <org/gameplay3d/Form.h>
#endif
#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Light
#include <org/gameplay3d/Light.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Matrix
#include <org/gameplay3d/Matrix.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Model
#include <org/gameplay3d/Model.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Node
#include <org/gameplay3d/Node.h>
#endif
#ifndef INCLUDED_org_gameplay3d_ParticleEmitter
#include <org/gameplay3d/ParticleEmitter.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsCollisionObject
#include <org/gameplay3d/PhysicsCollisionObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsCollisionShape_Definition
#include <org/gameplay3d/PhysicsCollisionShape_Definition.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsRigidBody_Parameters
#include <org/gameplay3d/PhysicsRigidBody_Parameters.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Properties
#include <org/gameplay3d/Properties.h>
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
#ifndef INCLUDED_org_gameplay3d_Terrain
#include <org/gameplay3d/Terrain.h>
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
#ifndef INCLUDED_org_gameplay3d_immutable_IBoundingSphere
#include <org/gameplay3d/immutable/IBoundingSphere.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IMatrix
#include <org/gameplay3d/immutable/IMatrix.h>
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
#ifndef INCLUDED_org_gameplay3d_intern_impl_ScriptTargetImpl
#include <org/gameplay3d/intern/impl/ScriptTargetImpl.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_impl_Transform_ListenerImpl
#include <org/gameplay3d/intern/impl/Transform_ListenerImpl.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_Handle
#include <org/gameplay3d/util/Handle.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_NativeInterface
#include <org/gameplay3d/util/NativeInterface.h>
#endif
namespace org{
namespace gameplay3d{

Void Node_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.Node","new",0xf35756a1,"org.gameplay3d.Node.new","org/gameplay3d/Node.hx",17,0xfcc19e4f)
HX_STACK_THIS(this)
HX_STACK_ARG(nativeObjectInitializer,"nativeObjectInitializer")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(17)
	super::__construct(nativeObjectInitializer,nativeObjectInitializerParams);
}
;
	return null();
}

//Node_obj::~Node_obj() { }

Dynamic Node_obj::__CreateEmpty() { return  new Node_obj; }
hx::ObjectPtr< Node_obj > Node_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< Node_obj > result = new Node_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic Node_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Node_obj > result = new Node_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *Node_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::intern::INativeBinding_obj)) return operator ::org::gameplay3d::intern::INativeBinding_obj *();
	if (inType==typeid( ::org::gameplay3d::Ref_obj)) return operator ::org::gameplay3d::Ref_obj *();
	return super::__ToInterface(inType);
}

Void Node_obj::addAdvertisedDescendant( ::org::gameplay3d::Node node){
{
		HX_STACK_FRAME("org.gameplay3d.Node","addAdvertisedDescendant",0x79cfd2bc,"org.gameplay3d.Node.addAdvertisedDescendant","org/gameplay3d/Node.hx",46,0xfcc19e4f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(node,"node")
		HX_STACK_LINE(46)
		::org::gameplay3d::Node_obj::hx_Node_addAdvertisedDescendant(this->nativeObject,(  (((node == null()))) ? Dynamic(null()) : Dynamic(node->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Node_obj,addAdvertisedDescendant,(void))

Void Node_obj::addChild( ::org::gameplay3d::Node child){
{
		HX_STACK_FRAME("org.gameplay3d.Node","addChild",0xd0bffdda,"org.gameplay3d.Node.addChild","org/gameplay3d/Node.hx",52,0xfcc19e4f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child,"child")
		HX_STACK_LINE(52)
		::org::gameplay3d::Node_obj::hx_Node_addChild(this->nativeObject,(  (((child == null()))) ? Dynamic(null()) : Dynamic(child->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Node_obj,addChild,(void))

::org::gameplay3d::Node Node_obj::clone( ){
	HX_STACK_FRAME("org.gameplay3d.Node","clone",0xa8056bde,"org.gameplay3d.Node.clone","org/gameplay3d/Node.hx",58,0xfcc19e4f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(58)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Node >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(58)
	Dynamic nativeObject = ::org::gameplay3d::Node_obj::hx_Node_clone(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(58)
	if (((nativeObject == null()))){
		HX_STACK_LINE(58)
		return null();
	}
	else{
		HX_STACK_LINE(58)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(58)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(58)
			::org::gameplay3d::Node result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(58)
			if (((result == null()))){
				HX_STACK_LINE(58)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(58)
				::org::gameplay3d::Node _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(58)
				result = _g;
				HX_STACK_LINE(58)
				ref->set(result);
			}
			HX_STACK_LINE(58)
			return result;
		}
		else{
			HX_STACK_LINE(58)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(58)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(58)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,clone,return )

::org::gameplay3d::Node Node_obj::findNode( ::String id,hx::Null< bool >  __o_recursive,hx::Null< bool >  __o_exactMatch){
bool recursive = __o_recursive.Default(true);
bool exactMatch = __o_exactMatch.Default(true);
	HX_STACK_FRAME("org.gameplay3d.Node","findNode",0xad4744fa,"org.gameplay3d.Node.findNode","org/gameplay3d/Node.hx",70,0xfcc19e4f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(recursive,"recursive")
	HX_STACK_ARG(exactMatch,"exactMatch")
{
		HX_STACK_LINE(70)
		::Class classObj = hx::ClassOf< ::org::gameplay3d::Node >();		HX_STACK_VAR(classObj,"classObj");
		HX_STACK_LINE(70)
		Dynamic nativeObject = ::org::gameplay3d::Node_obj::hx_Node_findNode(this->nativeObject,id,recursive,exactMatch);		HX_STACK_VAR(nativeObject,"nativeObject");
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
				::org::gameplay3d::Node result = ref->get();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(70)
				if (((result == null()))){
					HX_STACK_LINE(70)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
					HX_STACK_LINE(70)
					::org::gameplay3d::Node _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
}


HX_DEFINE_DYNAMIC_FUNC3(Node_obj,findNode,return )

int Node_obj::findNodes( ::String id,Dynamic nodes,hx::Null< bool >  __o_recursive,hx::Null< bool >  __o_exactMatch){
bool recursive = __o_recursive.Default(true);
bool exactMatch = __o_exactMatch.Default(true);
	HX_STACK_FRAME("org.gameplay3d.Node","findNodes",0xf1151639,"org.gameplay3d.Node.findNodes","org/gameplay3d/Node.hx",75,0xfcc19e4f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(nodes,"nodes")
	HX_STACK_ARG(recursive,"recursive")
	HX_STACK_ARG(exactMatch,"exactMatch")
{
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/Node.hx",76,0xfcc19e4f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("value") , null(),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(76)
		Dynamic _nodes = _Function_1_1::Block();		HX_STACK_VAR(_nodes,"_nodes");
		HX_STACK_LINE(77)
		int result = ::org::gameplay3d::Node_obj::hx_Node_findNodes(this->nativeObject,id,_nodes,recursive,exactMatch);		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(78)
		Array< ::Dynamic > _g = ::org::gameplay3d::intern::ConversionTools_obj::extractNodeArray(_nodes->__Field(HX_CSTRING("value"),true));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(78)
		nodes->__FieldRef(HX_CSTRING("value")) = _g;
		HX_STACK_LINE(79)
		return result;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Node_obj,findNodes,return )

::org::gameplay3d::Vector3 Node_obj::getActiveCameraTranslationView( ){
	HX_STACK_FRAME("org.gameplay3d.Node","getActiveCameraTranslationView",0x9cd6b794,"org.gameplay3d.Node.getActiveCameraTranslationView","org/gameplay3d/Node.hx",85,0xfcc19e4f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_activeCameraTranslationView == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(85)
			Dynamic nativeObject = ::org::gameplay3d::Node_obj::hx_Node_getActiveCameraTranslationView(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
		return this->_activeCameraTranslationView = _g1;
	}
	else{
		HX_STACK_LINE(85)
		Dynamic _g2 = ::org::gameplay3d::Node_obj::hx_Node_getActiveCameraTranslationView(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g3 = this->_activeCameraTranslationView->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_activeCameraTranslationView = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,getActiveCameraTranslationView,return )

::org::gameplay3d::Vector3 Node_obj::getActiveCameraTranslationWorld( ){
	HX_STACK_FRAME("org.gameplay3d.Node","getActiveCameraTranslationWorld",0x36719a43,"org.gameplay3d.Node.getActiveCameraTranslationWorld","org/gameplay3d/Node.hx",91,0xfcc19e4f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_activeCameraTranslationWorld == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(91)
			Dynamic nativeObject = ::org::gameplay3d::Node_obj::hx_Node_getActiveCameraTranslationWorld(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
		return this->_activeCameraTranslationWorld = _g1;
	}
	else{
		HX_STACK_LINE(91)
		Dynamic _g2 = ::org::gameplay3d::Node_obj::hx_Node_getActiveCameraTranslationWorld(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g3 = this->_activeCameraTranslationWorld->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_activeCameraTranslationWorld = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,getActiveCameraTranslationWorld,return )

::org::gameplay3d::Node Node_obj::getAdvertisedDescendant( int i){
	HX_STACK_FRAME("org.gameplay3d.Node","getAdvertisedDescendant",0xda0539b1,"org.gameplay3d.Node.getAdvertisedDescendant","org/gameplay3d/Node.hx",97,0xfcc19e4f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(97)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Node >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(97)
	Dynamic nativeObject = ::org::gameplay3d::Node_obj::hx_Node_getAdvertisedDescendant(this->nativeObject,i);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(97)
	if (((nativeObject == null()))){
		HX_STACK_LINE(97)
		return null();
	}
	else{
		HX_STACK_LINE(97)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(97)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(97)
			::org::gameplay3d::Node result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(97)
			if (((result == null()))){
				HX_STACK_LINE(97)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(97)
				::org::gameplay3d::Node _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(97)
				result = _g;
				HX_STACK_LINE(97)
				ref->set(result);
			}
			HX_STACK_LINE(97)
			return result;
		}
		else{
			HX_STACK_LINE(97)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(97)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(97)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Node_obj,getAdvertisedDescendant,return )

::org::gameplay3d::AIAgent Node_obj::getAgent( ){
	HX_STACK_FRAME("org.gameplay3d.Node","getAgent",0x8fc0806e,"org.gameplay3d.Node.getAgent","org/gameplay3d/Node.hx",103,0xfcc19e4f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(103)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::AIAgent >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(103)
	Dynamic nativeObject = ::org::gameplay3d::Node_obj::hx_Node_getAgent(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(103)
	if (((nativeObject == null()))){
		HX_STACK_LINE(103)
		return null();
	}
	else{
		HX_STACK_LINE(103)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(103)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(103)
			::org::gameplay3d::AIAgent result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(103)
			if (((result == null()))){
				HX_STACK_LINE(103)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(103)
				::org::gameplay3d::AIAgent _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(103)
				result = _g;
				HX_STACK_LINE(103)
				ref->set(result);
			}
			HX_STACK_LINE(103)
			return result;
		}
		else{
			HX_STACK_LINE(103)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(103)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(103)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,getAgent,return )

::org::gameplay3d::Animation Node_obj::getAnimation( ::String id){
	HX_STACK_FRAME("org.gameplay3d.Node","getAnimation",0x3ccfb52d,"org.gameplay3d.Node.getAnimation","org/gameplay3d/Node.hx",109,0xfcc19e4f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(109)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Animation >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(109)
	Dynamic nativeObject = ::org::gameplay3d::Node_obj::hx_Node_getAnimation(this->nativeObject,id);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(109)
	if (((nativeObject == null()))){
		HX_STACK_LINE(109)
		return null();
	}
	else{
		HX_STACK_LINE(109)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(109)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(109)
			::org::gameplay3d::Animation result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(109)
			if (((result == null()))){
				HX_STACK_LINE(109)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(109)
				::org::gameplay3d::Animation _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(109)
				result = _g;
				HX_STACK_LINE(109)
				ref->set(result);
			}
			HX_STACK_LINE(109)
			return result;
		}
		else{
			HX_STACK_LINE(109)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(109)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(109)
	return null();
}


::org::gameplay3d::AudioSource Node_obj::getAudioSource( ){
	HX_STACK_FRAME("org.gameplay3d.Node","getAudioSource",0xa35944ba,"org.gameplay3d.Node.getAudioSource","org/gameplay3d/Node.hx",115,0xfcc19e4f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(115)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::AudioSource >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(115)
	Dynamic nativeObject = ::org::gameplay3d::Node_obj::hx_Node_getAudioSource(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(115)
	if (((nativeObject == null()))){
		HX_STACK_LINE(115)
		return null();
	}
	else{
		HX_STACK_LINE(115)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(115)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(115)
			::org::gameplay3d::AudioSource result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(115)
			if (((result == null()))){
				HX_STACK_LINE(115)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(115)
				::org::gameplay3d::AudioSource _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(115)
				result = _g;
				HX_STACK_LINE(115)
				ref->set(result);
			}
			HX_STACK_LINE(115)
			return result;
		}
		else{
			HX_STACK_LINE(115)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(115)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(115)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,getAudioSource,return )

::org::gameplay3d::immutable::IBoundingSphere Node_obj::getBoundingSphere( ){
	HX_STACK_FRAME("org.gameplay3d.Node","getBoundingSphere",0x218ea2c8,"org.gameplay3d.Node.getBoundingSphere","org/gameplay3d/Node.hx",121,0xfcc19e4f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_boundingSphere == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::BoundingSphere _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::BoundingSphere >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(121)
			Dynamic nativeObject = ::org::gameplay3d::Node_obj::hx_Node_getBoundingSphere(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::BoundingSphere result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::BoundingSphere _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return this->_boundingSphere = _g1;
	}
	else{
		HX_STACK_LINE(121)
		Dynamic _g2 = ::org::gameplay3d::Node_obj::hx_Node_getBoundingSphere(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::BoundingSphere _g3 = this->_boundingSphere->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_boundingSphere = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,getBoundingSphere,return )

::org::gameplay3d::Camera Node_obj::getCamera( ){
	HX_STACK_FRAME("org.gameplay3d.Node","getCamera",0x9641fcdc,"org.gameplay3d.Node.getCamera","org/gameplay3d/Node.hx",127,0xfcc19e4f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(127)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Camera >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(127)
	Dynamic nativeObject = ::org::gameplay3d::Node_obj::hx_Node_getCamera(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(127)
	if (((nativeObject == null()))){
		HX_STACK_LINE(127)
		return null();
	}
	else{
		HX_STACK_LINE(127)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(127)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(127)
			::org::gameplay3d::Camera result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(127)
			if (((result == null()))){
				HX_STACK_LINE(127)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(127)
				::org::gameplay3d::Camera _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(127)
				result = _g;
				HX_STACK_LINE(127)
				ref->set(result);
			}
			HX_STACK_LINE(127)
			return result;
		}
		else{
			HX_STACK_LINE(127)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(127)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(127)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,getCamera,return )

int Node_obj::getChildCount( ){
	HX_STACK_FRAME("org.gameplay3d.Node","getChildCount",0x5eb1534a,"org.gameplay3d.Node.getChildCount","org/gameplay3d/Node.hx",133,0xfcc19e4f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(133)
	return ::org::gameplay3d::Node_obj::hx_Node_getChildCount(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,getChildCount,return )

::org::gameplay3d::PhysicsCollisionObject Node_obj::getCollisionObject( ){
	HX_STACK_FRAME("org.gameplay3d.Node","getCollisionObject",0x4aeec7ba,"org.gameplay3d.Node.getCollisionObject","org/gameplay3d/Node.hx",139,0xfcc19e4f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(139)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::PhysicsCollisionObject >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(139)
	Dynamic nativeObject = ::org::gameplay3d::Node_obj::hx_Node_getCollisionObject(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(139)
	if (((nativeObject == null()))){
		HX_STACK_LINE(139)
		return null();
	}
	else{
		HX_STACK_LINE(139)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(139)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(139)
			::org::gameplay3d::PhysicsCollisionObject result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(139)
			if (((result == null()))){
				HX_STACK_LINE(139)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(139)
				::org::gameplay3d::PhysicsCollisionObject _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(139)
				result = _g;
				HX_STACK_LINE(139)
				ref->set(result);
			}
			HX_STACK_LINE(139)
			return result;
		}
		else{
			HX_STACK_LINE(139)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(139)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(139)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,getCollisionObject,return )

::org::gameplay3d::Node Node_obj::getFirstChild( ){
	HX_STACK_FRAME("org.gameplay3d.Node","getFirstChild",0xf96a9103,"org.gameplay3d.Node.getFirstChild","org/gameplay3d/Node.hx",145,0xfcc19e4f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(145)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Node >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(145)
	Dynamic nativeObject = ::org::gameplay3d::Node_obj::hx_Node_getFirstChild(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(145)
	if (((nativeObject == null()))){
		HX_STACK_LINE(145)
		return null();
	}
	else{
		HX_STACK_LINE(145)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(145)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(145)
			::org::gameplay3d::Node result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(145)
			if (((result == null()))){
				HX_STACK_LINE(145)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(145)
				::org::gameplay3d::Node _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(145)
				result = _g;
				HX_STACK_LINE(145)
				ref->set(result);
			}
			HX_STACK_LINE(145)
			return result;
		}
		else{
			HX_STACK_LINE(145)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(145)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(145)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,getFirstChild,return )

::org::gameplay3d::Form Node_obj::getForm( ){
	HX_STACK_FRAME("org.gameplay3d.Node","getForm",0x658d4bbb,"org.gameplay3d.Node.getForm","org/gameplay3d/Node.hx",151,0xfcc19e4f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(151)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Form >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(151)
	Dynamic nativeObject = ::org::gameplay3d::Node_obj::hx_Node_getForm(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(151)
	if (((nativeObject == null()))){
		HX_STACK_LINE(151)
		return null();
	}
	else{
		HX_STACK_LINE(151)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(151)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(151)
			::org::gameplay3d::Form result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(151)
			if (((result == null()))){
				HX_STACK_LINE(151)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(151)
				::org::gameplay3d::Form _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(151)
				result = _g;
				HX_STACK_LINE(151)
				ref->set(result);
			}
			HX_STACK_LINE(151)
			return result;
		}
		else{
			HX_STACK_LINE(151)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(151)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(151)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,getForm,return )

::org::gameplay3d::Vector3 Node_obj::getForwardVectorView( ){
	HX_STACK_FRAME("org.gameplay3d.Node","getForwardVectorView",0x10237216,"org.gameplay3d.Node.getForwardVectorView","org/gameplay3d/Node.hx",157,0xfcc19e4f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_forwardVectorView == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(157)
			Dynamic nativeObject = ::org::gameplay3d::Node_obj::hx_Node_getForwardVectorView(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
		return this->_forwardVectorView = _g1;
	}
	else{
		HX_STACK_LINE(157)
		Dynamic _g2 = ::org::gameplay3d::Node_obj::hx_Node_getForwardVectorView(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g3 = this->_forwardVectorView->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_forwardVectorView = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,getForwardVectorView,return )

::org::gameplay3d::Vector3 Node_obj::getForwardVectorWorld( ){
	HX_STACK_FRAME("org.gameplay3d.Node","getForwardVectorWorld",0xa6481181,"org.gameplay3d.Node.getForwardVectorWorld","org/gameplay3d/Node.hx",163,0xfcc19e4f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_forwardVectorWorld == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(163)
			Dynamic nativeObject = ::org::gameplay3d::Node_obj::hx_Node_getForwardVectorWorld(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
		return this->_forwardVectorWorld = _g1;
	}
	else{
		HX_STACK_LINE(163)
		Dynamic _g2 = ::org::gameplay3d::Node_obj::hx_Node_getForwardVectorWorld(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g3 = this->_forwardVectorWorld->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_forwardVectorWorld = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,getForwardVectorWorld,return )

::String Node_obj::getId( ){
	HX_STACK_FRAME("org.gameplay3d.Node","getId",0xf102ea92,"org.gameplay3d.Node.getId","org/gameplay3d/Node.hx",169,0xfcc19e4f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(169)
	return ::org::gameplay3d::Node_obj::hx_Node_getId(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,getId,return )

::org::gameplay3d::immutable::IMatrix Node_obj::getInverseTransposeWorldMatrix( ){
	HX_STACK_FRAME("org.gameplay3d.Node","getInverseTransposeWorldMatrix",0xbeed1673,"org.gameplay3d.Node.getInverseTransposeWorldMatrix","org/gameplay3d/Node.hx",175,0xfcc19e4f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_inverseTransposeWorldMatrix == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Matrix _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Matrix >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(175)
			Dynamic nativeObject = ::org::gameplay3d::Node_obj::hx_Node_getInverseTransposeWorldMatrix(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::Matrix result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Matrix _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return this->_inverseTransposeWorldMatrix = _g1;
	}
	else{
		HX_STACK_LINE(175)
		Dynamic _g2 = ::org::gameplay3d::Node_obj::hx_Node_getInverseTransposeWorldMatrix(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Matrix _g3 = this->_inverseTransposeWorldMatrix->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_inverseTransposeWorldMatrix = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,getInverseTransposeWorldMatrix,return )

::org::gameplay3d::immutable::IMatrix Node_obj::getInverseTransposeWorldViewMatrix( ){
	HX_STACK_FRAME("org.gameplay3d.Node","getInverseTransposeWorldViewMatrix",0xee3317b8,"org.gameplay3d.Node.getInverseTransposeWorldViewMatrix","org/gameplay3d/Node.hx",181,0xfcc19e4f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_inverseTransposeWorldViewMatrix == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Matrix _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Matrix >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(181)
			Dynamic nativeObject = ::org::gameplay3d::Node_obj::hx_Node_getInverseTransposeWorldViewMatrix(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::Matrix result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Matrix _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return this->_inverseTransposeWorldViewMatrix = _g1;
	}
	else{
		HX_STACK_LINE(181)
		Dynamic _g2 = ::org::gameplay3d::Node_obj::hx_Node_getInverseTransposeWorldViewMatrix(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Matrix _g3 = this->_inverseTransposeWorldViewMatrix->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_inverseTransposeWorldViewMatrix = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,getInverseTransposeWorldViewMatrix,return )

::org::gameplay3d::immutable::IMatrix Node_obj::getInverseViewMatrix( ){
	HX_STACK_FRAME("org.gameplay3d.Node","getInverseViewMatrix",0xc6c7997f,"org.gameplay3d.Node.getInverseViewMatrix","org/gameplay3d/Node.hx",187,0xfcc19e4f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_inverseViewMatrix == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Matrix _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Matrix >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(187)
			Dynamic nativeObject = ::org::gameplay3d::Node_obj::hx_Node_getInverseViewMatrix(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::Matrix result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Matrix _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return this->_inverseViewMatrix = _g1;
	}
	else{
		HX_STACK_LINE(187)
		Dynamic _g2 = ::org::gameplay3d::Node_obj::hx_Node_getInverseViewMatrix(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Matrix _g3 = this->_inverseViewMatrix->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_inverseViewMatrix = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,getInverseViewMatrix,return )

::org::gameplay3d::immutable::IMatrix Node_obj::getInverseViewProjectionMatrix( ){
	HX_STACK_FRAME("org.gameplay3d.Node","getInverseViewProjectionMatrix",0x69d2a4ee,"org.gameplay3d.Node.getInverseViewProjectionMatrix","org/gameplay3d/Node.hx",193,0xfcc19e4f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_inverseViewProjectionMatrix == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Matrix _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Matrix >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(193)
			Dynamic nativeObject = ::org::gameplay3d::Node_obj::hx_Node_getInverseViewProjectionMatrix(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::Matrix result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Matrix _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return this->_inverseViewProjectionMatrix = _g1;
	}
	else{
		HX_STACK_LINE(193)
		Dynamic _g2 = ::org::gameplay3d::Node_obj::hx_Node_getInverseViewProjectionMatrix(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Matrix _g3 = this->_inverseViewProjectionMatrix->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_inverseViewProjectionMatrix = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,getInverseViewProjectionMatrix,return )

::org::gameplay3d::Light Node_obj::getLight( ){
	HX_STACK_FRAME("org.gameplay3d.Node","getLight",0xe67cce7f,"org.gameplay3d.Node.getLight","org/gameplay3d/Node.hx",199,0xfcc19e4f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(199)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Light >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(199)
	Dynamic nativeObject = ::org::gameplay3d::Node_obj::hx_Node_getLight(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(199)
	if (((nativeObject == null()))){
		HX_STACK_LINE(199)
		return null();
	}
	else{
		HX_STACK_LINE(199)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(199)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(199)
			::org::gameplay3d::Light result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(199)
			if (((result == null()))){
				HX_STACK_LINE(199)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(199)
				::org::gameplay3d::Light _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(199)
				result = _g;
				HX_STACK_LINE(199)
				ref->set(result);
			}
			HX_STACK_LINE(199)
			return result;
		}
		else{
			HX_STACK_LINE(199)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(199)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(199)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,getLight,return )

::org::gameplay3d::Model Node_obj::getModel( ){
	HX_STACK_FRAME("org.gameplay3d.Node","getModel",0x7dd86152,"org.gameplay3d.Node.getModel","org/gameplay3d/Node.hx",205,0xfcc19e4f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(205)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Model >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(205)
	Dynamic nativeObject = ::org::gameplay3d::Node_obj::hx_Node_getModel(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(205)
	if (((nativeObject == null()))){
		HX_STACK_LINE(205)
		return null();
	}
	else{
		HX_STACK_LINE(205)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(205)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(205)
			::org::gameplay3d::Model result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(205)
			if (((result == null()))){
				HX_STACK_LINE(205)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(205)
				::org::gameplay3d::Model _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(205)
				result = _g;
				HX_STACK_LINE(205)
				ref->set(result);
			}
			HX_STACK_LINE(205)
			return result;
		}
		else{
			HX_STACK_LINE(205)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(205)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(205)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,getModel,return )

::org::gameplay3d::Node Node_obj::getNextSibling( ){
	HX_STACK_FRAME("org.gameplay3d.Node","getNextSibling",0xd75606b8,"org.gameplay3d.Node.getNextSibling","org/gameplay3d/Node.hx",211,0xfcc19e4f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(211)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Node >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(211)
	Dynamic nativeObject = ::org::gameplay3d::Node_obj::hx_Node_getNextSibling(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(211)
	if (((nativeObject == null()))){
		HX_STACK_LINE(211)
		return null();
	}
	else{
		HX_STACK_LINE(211)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(211)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(211)
			::org::gameplay3d::Node result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(211)
			if (((result == null()))){
				HX_STACK_LINE(211)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(211)
				::org::gameplay3d::Node _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(211)
				result = _g;
				HX_STACK_LINE(211)
				ref->set(result);
			}
			HX_STACK_LINE(211)
			return result;
		}
		else{
			HX_STACK_LINE(211)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(211)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(211)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,getNextSibling,return )

int Node_obj::getNumAdvertisedDescendants( ){
	HX_STACK_FRAME("org.gameplay3d.Node","getNumAdvertisedDescendants",0x787ed9ca,"org.gameplay3d.Node.getNumAdvertisedDescendants","org/gameplay3d/Node.hx",217,0xfcc19e4f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(217)
	return ::org::gameplay3d::Node_obj::hx_Node_getNumAdvertisedDescendants(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,getNumAdvertisedDescendants,return )

::org::gameplay3d::Node Node_obj::getParent( ){
	HX_STACK_FRAME("org.gameplay3d.Node","getParent",0xcc33bb61,"org.gameplay3d.Node.getParent","org/gameplay3d/Node.hx",223,0xfcc19e4f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(223)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Node >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(223)
	Dynamic nativeObject = ::org::gameplay3d::Node_obj::hx_Node_getParent(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(223)
	if (((nativeObject == null()))){
		HX_STACK_LINE(223)
		return null();
	}
	else{
		HX_STACK_LINE(223)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(223)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(223)
			::org::gameplay3d::Node result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(223)
			if (((result == null()))){
				HX_STACK_LINE(223)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(223)
				::org::gameplay3d::Node _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(223)
				result = _g;
				HX_STACK_LINE(223)
				ref->set(result);
			}
			HX_STACK_LINE(223)
			return result;
		}
		else{
			HX_STACK_LINE(223)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(223)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(223)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,getParent,return )

::org::gameplay3d::ParticleEmitter Node_obj::getParticleEmitter( ){
	HX_STACK_FRAME("org.gameplay3d.Node","getParticleEmitter",0x83285eb1,"org.gameplay3d.Node.getParticleEmitter","org/gameplay3d/Node.hx",229,0xfcc19e4f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(229)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::ParticleEmitter >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(229)
	Dynamic nativeObject = ::org::gameplay3d::Node_obj::hx_Node_getParticleEmitter(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(229)
	if (((nativeObject == null()))){
		HX_STACK_LINE(229)
		return null();
	}
	else{
		HX_STACK_LINE(229)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(229)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(229)
			::org::gameplay3d::ParticleEmitter result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(229)
			if (((result == null()))){
				HX_STACK_LINE(229)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(229)
				::org::gameplay3d::ParticleEmitter _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(229)
				result = _g;
				HX_STACK_LINE(229)
				ref->set(result);
			}
			HX_STACK_LINE(229)
			return result;
		}
		else{
			HX_STACK_LINE(229)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(229)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(229)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,getParticleEmitter,return )

::org::gameplay3d::Node Node_obj::getPreviousSibling( ){
	HX_STACK_FRAME("org.gameplay3d.Node","getPreviousSibling",0x97bee874,"org.gameplay3d.Node.getPreviousSibling","org/gameplay3d/Node.hx",235,0xfcc19e4f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(235)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Node >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(235)
	Dynamic nativeObject = ::org::gameplay3d::Node_obj::hx_Node_getPreviousSibling(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(235)
	if (((nativeObject == null()))){
		HX_STACK_LINE(235)
		return null();
	}
	else{
		HX_STACK_LINE(235)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(235)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(235)
			::org::gameplay3d::Node result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(235)
			if (((result == null()))){
				HX_STACK_LINE(235)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(235)
				::org::gameplay3d::Node _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(235)
				result = _g;
				HX_STACK_LINE(235)
				ref->set(result);
			}
			HX_STACK_LINE(235)
			return result;
		}
		else{
			HX_STACK_LINE(235)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(235)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(235)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,getPreviousSibling,return )

::org::gameplay3d::immutable::IMatrix Node_obj::getProjectionMatrix( ){
	HX_STACK_FRAME("org.gameplay3d.Node","getProjectionMatrix",0xd3b9c927,"org.gameplay3d.Node.getProjectionMatrix","org/gameplay3d/Node.hx",241,0xfcc19e4f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_projectionMatrix == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Matrix _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Matrix >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(241)
			Dynamic nativeObject = ::org::gameplay3d::Node_obj::hx_Node_getProjectionMatrix(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::Matrix result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Matrix _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return this->_projectionMatrix = _g1;
	}
	else{
		HX_STACK_LINE(241)
		Dynamic _g2 = ::org::gameplay3d::Node_obj::hx_Node_getProjectionMatrix(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Matrix _g3 = this->_projectionMatrix->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_projectionMatrix = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,getProjectionMatrix,return )

::org::gameplay3d::Vector3 Node_obj::getRightVectorWorld( ){
	HX_STACK_FRAME("org.gameplay3d.Node","getRightVectorWorld",0xeab2950a,"org.gameplay3d.Node.getRightVectorWorld","org/gameplay3d/Node.hx",247,0xfcc19e4f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_rightVectorWorld == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(247)
			Dynamic nativeObject = ::org::gameplay3d::Node_obj::hx_Node_getRightVectorWorld(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
		return this->_rightVectorWorld = _g1;
	}
	else{
		HX_STACK_LINE(247)
		Dynamic _g2 = ::org::gameplay3d::Node_obj::hx_Node_getRightVectorWorld(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g3 = this->_rightVectorWorld->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_rightVectorWorld = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,getRightVectorWorld,return )

::org::gameplay3d::Node Node_obj::getRootNode( ){
	HX_STACK_FRAME("org.gameplay3d.Node","getRootNode",0x2079cf3b,"org.gameplay3d.Node.getRootNode","org/gameplay3d/Node.hx",253,0xfcc19e4f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(253)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Node >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(253)
	Dynamic nativeObject = ::org::gameplay3d::Node_obj::hx_Node_getRootNode(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(253)
	if (((nativeObject == null()))){
		HX_STACK_LINE(253)
		return null();
	}
	else{
		HX_STACK_LINE(253)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(253)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(253)
			::org::gameplay3d::Node result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(253)
			if (((result == null()))){
				HX_STACK_LINE(253)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(253)
				::org::gameplay3d::Node _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(253)
				result = _g;
				HX_STACK_LINE(253)
				ref->set(result);
			}
			HX_STACK_LINE(253)
			return result;
		}
		else{
			HX_STACK_LINE(253)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(253)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(253)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,getRootNode,return )

::org::gameplay3d::Scene Node_obj::getScene( ){
	HX_STACK_FRAME("org.gameplay3d.Node","getScene",0xea5216f5,"org.gameplay3d.Node.getScene","org/gameplay3d/Node.hx",259,0xfcc19e4f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(259)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Scene >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(259)
	Dynamic nativeObject = ::org::gameplay3d::Node_obj::hx_Node_getScene(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(259)
	if (((nativeObject == null()))){
		HX_STACK_LINE(259)
		return null();
	}
	else{
		HX_STACK_LINE(259)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(259)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(259)
			::org::gameplay3d::Scene result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(259)
			if (((result == null()))){
				HX_STACK_LINE(259)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(259)
				::org::gameplay3d::Scene _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(259)
				result = _g;
				HX_STACK_LINE(259)
				ref->set(result);
			}
			HX_STACK_LINE(259)
			return result;
		}
		else{
			HX_STACK_LINE(259)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(259)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(259)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,getScene,return )

::String Node_obj::getTag( ::String name){
	HX_STACK_FRAME("org.gameplay3d.Node","getTag",0xf192abc3,"org.gameplay3d.Node.getTag","org/gameplay3d/Node.hx",265,0xfcc19e4f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(265)
	return ::org::gameplay3d::Node_obj::hx_Node_getTag(this->nativeObject,name);
}


HX_DEFINE_DYNAMIC_FUNC1(Node_obj,getTag,return )

::org::gameplay3d::Terrain Node_obj::getTerrain( ){
	HX_STACK_FRAME("org.gameplay3d.Node","getTerrain",0x2961659e,"org.gameplay3d.Node.getTerrain","org/gameplay3d/Node.hx",272,0xfcc19e4f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(272)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Terrain >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(272)
	Dynamic nativeObject = ::org::gameplay3d::Node_obj::hx_Node_getTerrain(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(272)
	if (((nativeObject == null()))){
		HX_STACK_LINE(272)
		return null();
	}
	else{
		HX_STACK_LINE(272)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(272)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(272)
			::org::gameplay3d::Terrain result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(272)
			if (((result == null()))){
				HX_STACK_LINE(272)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(272)
				::org::gameplay3d::Terrain _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(272)
				result = _g;
				HX_STACK_LINE(272)
				ref->set(result);
			}
			HX_STACK_LINE(272)
			return result;
		}
		else{
			HX_STACK_LINE(272)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(272)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(272)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,getTerrain,return )

::org::gameplay3d::Vector3 Node_obj::getTranslationView( ){
	HX_STACK_FRAME("org.gameplay3d.Node","getTranslationView",0x2017a6df,"org.gameplay3d.Node.getTranslationView","org/gameplay3d/Node.hx",278,0xfcc19e4f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_translationView == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(278)
			Dynamic nativeObject = ::org::gameplay3d::Node_obj::hx_Node_getTranslationView(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
		return this->_translationView = _g1;
	}
	else{
		HX_STACK_LINE(278)
		Dynamic _g2 = ::org::gameplay3d::Node_obj::hx_Node_getTranslationView(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g3 = this->_translationView->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_translationView = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,getTranslationView,return )

::org::gameplay3d::Vector3 Node_obj::getTranslationWorld( ){
	HX_STACK_FRAME("org.gameplay3d.Node","getTranslationWorld",0x8c020c98,"org.gameplay3d.Node.getTranslationWorld","org/gameplay3d/Node.hx",284,0xfcc19e4f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_translationWorld == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(284)
			Dynamic nativeObject = ::org::gameplay3d::Node_obj::hx_Node_getTranslationWorld(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
		return this->_translationWorld = _g1;
	}
	else{
		HX_STACK_LINE(284)
		Dynamic _g2 = ::org::gameplay3d::Node_obj::hx_Node_getTranslationWorld(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g3 = this->_translationWorld->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_translationWorld = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,getTranslationWorld,return )

int Node_obj::getType( ){
	HX_STACK_FRAME("org.gameplay3d.Node","getType",0x6ed5dd31,"org.gameplay3d.Node.getType","org/gameplay3d/Node.hx",290,0xfcc19e4f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(290)
	return ::org::gameplay3d::Node_obj::hx_Node_getType(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,getType,return )

::org::gameplay3d::Vector3 Node_obj::getUpVectorWorld( ){
	HX_STACK_FRAME("org.gameplay3d.Node","getUpVectorWorld",0x01fd2a9d,"org.gameplay3d.Node.getUpVectorWorld","org/gameplay3d/Node.hx",296,0xfcc19e4f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_upVectorWorld == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(296)
			Dynamic nativeObject = ::org::gameplay3d::Node_obj::hx_Node_getUpVectorWorld(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
		return this->_upVectorWorld = _g1;
	}
	else{
		HX_STACK_LINE(296)
		Dynamic _g2 = ::org::gameplay3d::Node_obj::hx_Node_getUpVectorWorld(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g3 = this->_upVectorWorld->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_upVectorWorld = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,getUpVectorWorld,return )

::org::gameplay3d::util::Handle Node_obj::getUserPointer( ){
	HX_STACK_FRAME("org.gameplay3d.Node","getUserPointer",0xb9ba681b,"org.gameplay3d.Node.getUserPointer","org/gameplay3d/Node.hx",302,0xfcc19e4f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(302)
	Dynamic nativeObject = ::org::gameplay3d::Node_obj::hx_Node_getUserPointer(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(302)
	if (((nativeObject == null()))){
		HX_STACK_LINE(302)
		return null();
	}
	else{
		HX_STACK_LINE(302)
		return ::org::gameplay3d::util::Handle_obj::__new(nativeObject);
	}
	HX_STACK_LINE(302)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,getUserPointer,return )

::org::gameplay3d::immutable::IMatrix Node_obj::getViewMatrix( ){
	HX_STACK_FRAME("org.gameplay3d.Node","getViewMatrix",0x72e7d43d,"org.gameplay3d.Node.getViewMatrix","org/gameplay3d/Node.hx",308,0xfcc19e4f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_viewMatrix == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Matrix _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Matrix >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(308)
			Dynamic nativeObject = ::org::gameplay3d::Node_obj::hx_Node_getViewMatrix(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::Matrix result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Matrix _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return this->_viewMatrix = _g1;
	}
	else{
		HX_STACK_LINE(308)
		Dynamic _g2 = ::org::gameplay3d::Node_obj::hx_Node_getViewMatrix(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Matrix _g3 = this->_viewMatrix->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_viewMatrix = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,getViewMatrix,return )

::org::gameplay3d::immutable::IMatrix Node_obj::getViewProjectionMatrix( ){
	HX_STACK_FRAME("org.gameplay3d.Node","getViewProjectionMatrix",0x8752f92c,"org.gameplay3d.Node.getViewProjectionMatrix","org/gameplay3d/Node.hx",314,0xfcc19e4f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_viewProjectionMatrix == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Matrix _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Matrix >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(314)
			Dynamic nativeObject = ::org::gameplay3d::Node_obj::hx_Node_getViewProjectionMatrix(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::Matrix result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Matrix _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return this->_viewProjectionMatrix = _g1;
	}
	else{
		HX_STACK_LINE(314)
		Dynamic _g2 = ::org::gameplay3d::Node_obj::hx_Node_getViewProjectionMatrix(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Matrix _g3 = this->_viewProjectionMatrix->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_viewProjectionMatrix = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,getViewProjectionMatrix,return )

::org::gameplay3d::immutable::IMatrix Node_obj::getWorldMatrix( ){
	HX_STACK_FRAME("org.gameplay3d.Node","getWorldMatrix",0x29ad2c9c,"org.gameplay3d.Node.getWorldMatrix","org/gameplay3d/Node.hx",320,0xfcc19e4f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_worldMatrix == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Matrix _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Matrix >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(320)
			Dynamic nativeObject = ::org::gameplay3d::Node_obj::hx_Node_getWorldMatrix(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::Matrix result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Matrix _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return this->_worldMatrix = _g1;
	}
	else{
		HX_STACK_LINE(320)
		Dynamic _g2 = ::org::gameplay3d::Node_obj::hx_Node_getWorldMatrix(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Matrix _g3 = this->_worldMatrix->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_worldMatrix = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,getWorldMatrix,return )

::org::gameplay3d::immutable::IMatrix Node_obj::getWorldViewMatrix( ){
	HX_STACK_FRAME("org.gameplay3d.Node","getWorldViewMatrix",0x2523f661,"org.gameplay3d.Node.getWorldViewMatrix","org/gameplay3d/Node.hx",326,0xfcc19e4f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_worldViewMatrix == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Matrix _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Matrix >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(326)
			Dynamic nativeObject = ::org::gameplay3d::Node_obj::hx_Node_getWorldViewMatrix(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::Matrix result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Matrix _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return this->_worldViewMatrix = _g1;
	}
	else{
		HX_STACK_LINE(326)
		Dynamic _g2 = ::org::gameplay3d::Node_obj::hx_Node_getWorldViewMatrix(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Matrix _g3 = this->_worldViewMatrix->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_worldViewMatrix = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,getWorldViewMatrix,return )

::org::gameplay3d::immutable::IMatrix Node_obj::getWorldViewProjectionMatrix( ){
	HX_STACK_FRAME("org.gameplay3d.Node","getWorldViewProjectionMatrix",0x8614b050,"org.gameplay3d.Node.getWorldViewProjectionMatrix","org/gameplay3d/Node.hx",332,0xfcc19e4f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_worldViewProjectionMatrix == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Matrix _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Matrix >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(332)
			Dynamic nativeObject = ::org::gameplay3d::Node_obj::hx_Node_getWorldViewProjectionMatrix(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::Matrix result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Matrix _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return this->_worldViewProjectionMatrix = _g1;
	}
	else{
		HX_STACK_LINE(332)
		Dynamic _g2 = ::org::gameplay3d::Node_obj::hx_Node_getWorldViewProjectionMatrix(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Matrix _g3 = this->_worldViewProjectionMatrix->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_worldViewProjectionMatrix = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,getWorldViewProjectionMatrix,return )

bool Node_obj::hasTag( ::String name){
	HX_STACK_FRAME("org.gameplay3d.Node","hasTag",0x09aa7f7f,"org.gameplay3d.Node.hasTag","org/gameplay3d/Node.hx",338,0xfcc19e4f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(338)
	return ::org::gameplay3d::Node_obj::hx_Node_hasTag(this->nativeObject,name);
}


HX_DEFINE_DYNAMIC_FUNC1(Node_obj,hasTag,return )

Void Node_obj::removeAllChildren( ){
{
		HX_STACK_FRAME("org.gameplay3d.Node","removeAllChildren",0x91bb879d,"org.gameplay3d.Node.removeAllChildren","org/gameplay3d/Node.hx",344,0xfcc19e4f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(344)
		::org::gameplay3d::Node_obj::hx_Node_removeAllChildren(this->nativeObject);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,removeAllChildren,(void))

Void Node_obj::removeChild( ::org::gameplay3d::Node child){
{
		HX_STACK_FRAME("org.gameplay3d.Node","removeChild",0x5e32b5f9,"org.gameplay3d.Node.removeChild","org/gameplay3d/Node.hx",350,0xfcc19e4f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child,"child")
		HX_STACK_LINE(350)
		::org::gameplay3d::Node_obj::hx_Node_removeChild(this->nativeObject,(  (((child == null()))) ? Dynamic(null()) : Dynamic(child->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Node_obj,removeChild,(void))

Void Node_obj::setAgent( ::org::gameplay3d::AIAgent agent){
{
		HX_STACK_FRAME("org.gameplay3d.Node","setAgent",0x3e1dd9e2,"org.gameplay3d.Node.setAgent","org/gameplay3d/Node.hx",356,0xfcc19e4f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(agent,"agent")
		HX_STACK_LINE(356)
		::org::gameplay3d::Node_obj::hx_Node_setAgent(this->nativeObject,(  (((agent == null()))) ? Dynamic(null()) : Dynamic(agent->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Node_obj,setAgent,(void))

Void Node_obj::setAudioSource( ::org::gameplay3d::AudioSource audio){
{
		HX_STACK_FRAME("org.gameplay3d.Node","setAudioSource",0xc3792d2e,"org.gameplay3d.Node.setAudioSource","org/gameplay3d/Node.hx",362,0xfcc19e4f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(audio,"audio")
		HX_STACK_LINE(362)
		::org::gameplay3d::Node_obj::hx_Node_setAudioSource(this->nativeObject,(  (((audio == null()))) ? Dynamic(null()) : Dynamic(audio->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Node_obj,setAudioSource,(void))

Void Node_obj::setCamera( ::org::gameplay3d::Camera camera){
{
		HX_STACK_FRAME("org.gameplay3d.Node","setCamera",0x7992e8e8,"org.gameplay3d.Node.setCamera","org/gameplay3d/Node.hx",368,0xfcc19e4f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(camera,"camera")
		HX_STACK_LINE(368)
		::org::gameplay3d::Node_obj::hx_Node_setCamera(this->nativeObject,(  (((camera == null()))) ? Dynamic(null()) : Dynamic(camera->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Node_obj,setCamera,(void))

::org::gameplay3d::PhysicsCollisionObject Node_obj::setCollisionObject_Int_Def_Param( int type,::org::gameplay3d::PhysicsCollisionShape_Definition shape,::org::gameplay3d::PhysicsRigidBody_Parameters rigidBodyParameters){
	HX_STACK_FRAME("org.gameplay3d.Node","setCollisionObject_Int_Def_Param",0x79768b52,"org.gameplay3d.Node.setCollisionObject_Int_Def_Param","org/gameplay3d/Node.hx",374,0xfcc19e4f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(shape,"shape")
	HX_STACK_ARG(rigidBodyParameters,"rigidBodyParameters")
	HX_STACK_LINE(374)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::PhysicsCollisionObject >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(374)
	Dynamic nativeObject = ::org::gameplay3d::Node_obj::hx_Node_setCollisionObject_Int_Def_Param(this->nativeObject,type,(  (((shape == null()))) ? Dynamic(null()) : Dynamic(shape->nativeObject) ),(  (((rigidBodyParameters == null()))) ? Dynamic(null()) : Dynamic(rigidBodyParameters->nativeObject) ));		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(374)
	if (((nativeObject == null()))){
		HX_STACK_LINE(374)
		return null();
	}
	else{
		HX_STACK_LINE(374)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(374)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(374)
			::org::gameplay3d::PhysicsCollisionObject result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(374)
			if (((result == null()))){
				HX_STACK_LINE(374)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(374)
				::org::gameplay3d::PhysicsCollisionObject _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(374)
				result = _g;
				HX_STACK_LINE(374)
				ref->set(result);
			}
			HX_STACK_LINE(374)
			return result;
		}
		else{
			HX_STACK_LINE(374)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(374)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(374)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Node_obj,setCollisionObject_Int_Def_Param,return )

::org::gameplay3d::PhysicsCollisionObject Node_obj::setCollisionObject_Prop( ::org::gameplay3d::Properties properties){
	HX_STACK_FRAME("org.gameplay3d.Node","setCollisionObject_Prop",0xa42b6eb4,"org.gameplay3d.Node.setCollisionObject_Prop","org/gameplay3d/Node.hx",380,0xfcc19e4f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(properties,"properties")
	HX_STACK_LINE(380)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::PhysicsCollisionObject >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(380)
	Dynamic nativeObject = ::org::gameplay3d::Node_obj::hx_Node_setCollisionObject_Prop(this->nativeObject,(  (((properties == null()))) ? Dynamic(null()) : Dynamic(properties->nativeObject) ));		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(380)
	if (((nativeObject == null()))){
		HX_STACK_LINE(380)
		return null();
	}
	else{
		HX_STACK_LINE(380)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(380)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(380)
			::org::gameplay3d::PhysicsCollisionObject result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(380)
			if (((result == null()))){
				HX_STACK_LINE(380)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(380)
				::org::gameplay3d::PhysicsCollisionObject _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(380)
				result = _g;
				HX_STACK_LINE(380)
				ref->set(result);
			}
			HX_STACK_LINE(380)
			return result;
		}
		else{
			HX_STACK_LINE(380)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(380)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(380)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Node_obj,setCollisionObject_Prop,return )

::org::gameplay3d::PhysicsCollisionObject Node_obj::setCollisionObject_Str( ::String url){
	HX_STACK_FRAME("org.gameplay3d.Node","setCollisionObject_Str",0xa29c4ec0,"org.gameplay3d.Node.setCollisionObject_Str","org/gameplay3d/Node.hx",386,0xfcc19e4f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(url,"url")
	HX_STACK_LINE(386)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::PhysicsCollisionObject >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(386)
	Dynamic nativeObject = ::org::gameplay3d::Node_obj::hx_Node_setCollisionObject_Str(this->nativeObject,url);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(386)
	if (((nativeObject == null()))){
		HX_STACK_LINE(386)
		return null();
	}
	else{
		HX_STACK_LINE(386)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(386)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(386)
			::org::gameplay3d::PhysicsCollisionObject result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(386)
			if (((result == null()))){
				HX_STACK_LINE(386)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(386)
				::org::gameplay3d::PhysicsCollisionObject _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(386)
				result = _g;
				HX_STACK_LINE(386)
				ref->set(result);
			}
			HX_STACK_LINE(386)
			return result;
		}
		else{
			HX_STACK_LINE(386)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(386)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(386)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Node_obj,setCollisionObject_Str,return )

Void Node_obj::setForm( ::org::gameplay3d::Form form){
{
		HX_STACK_FRAME("org.gameplay3d.Node","setForm",0x588edcc7,"org.gameplay3d.Node.setForm","org/gameplay3d/Node.hx",392,0xfcc19e4f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(form,"form")
		HX_STACK_LINE(392)
		::org::gameplay3d::Node_obj::hx_Node_setForm(this->nativeObject,(  (((form == null()))) ? Dynamic(null()) : Dynamic(form->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Node_obj,setForm,(void))

Void Node_obj::setId( ::String id){
{
		HX_STACK_FRAME("org.gameplay3d.Node","setId",0xd9d1e09e,"org.gameplay3d.Node.setId","org/gameplay3d/Node.hx",398,0xfcc19e4f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(398)
		::org::gameplay3d::Node_obj::hx_Node_setId(this->nativeObject,id);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Node_obj,setId,(void))

Void Node_obj::setLight( ::org::gameplay3d::Light light){
{
		HX_STACK_FRAME("org.gameplay3d.Node","setLight",0x94da27f3,"org.gameplay3d.Node.setLight","org/gameplay3d/Node.hx",404,0xfcc19e4f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(light,"light")
		HX_STACK_LINE(404)
		::org::gameplay3d::Node_obj::hx_Node_setLight(this->nativeObject,(  (((light == null()))) ? Dynamic(null()) : Dynamic(light->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Node_obj,setLight,(void))

Void Node_obj::setModel( ::org::gameplay3d::Model model){
{
		HX_STACK_FRAME("org.gameplay3d.Node","setModel",0x2c35bac6,"org.gameplay3d.Node.setModel","org/gameplay3d/Node.hx",410,0xfcc19e4f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(model,"model")
		HX_STACK_LINE(410)
		::org::gameplay3d::Node_obj::hx_Node_setModel(this->nativeObject,(  (((model == null()))) ? Dynamic(null()) : Dynamic(model->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Node_obj,setModel,(void))

Void Node_obj::setParticleEmitter( ::org::gameplay3d::ParticleEmitter emitter){
{
		HX_STACK_FRAME("org.gameplay3d.Node","setParticleEmitter",0x5fd79125,"org.gameplay3d.Node.setParticleEmitter","org/gameplay3d/Node.hx",416,0xfcc19e4f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(emitter,"emitter")
		HX_STACK_LINE(416)
		::org::gameplay3d::Node_obj::hx_Node_setParticleEmitter(this->nativeObject,(  (((emitter == null()))) ? Dynamic(null()) : Dynamic(emitter->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Node_obj,setParticleEmitter,(void))

Void Node_obj::setTag( ::String name,::String __o_value){
::String value = __o_value.Default(HX_CSTRING(""));
	HX_STACK_FRAME("org.gameplay3d.Node","setTag",0xbddb0037,"org.gameplay3d.Node.setTag","org/gameplay3d/Node.hx",422,0xfcc19e4f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(value,"value")
{
		HX_STACK_LINE(422)
		::org::gameplay3d::Node_obj::hx_Node_setTag(this->nativeObject,name,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Node_obj,setTag,(void))

Void Node_obj::setTerrain( ::org::gameplay3d::Terrain terrain){
{
		HX_STACK_FRAME("org.gameplay3d.Node","setTerrain",0x2cdf0412,"org.gameplay3d.Node.setTerrain","org/gameplay3d/Node.hx",428,0xfcc19e4f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(terrain,"terrain")
		HX_STACK_LINE(428)
		::org::gameplay3d::Node_obj::hx_Node_setTerrain(this->nativeObject,(  (((terrain == null()))) ? Dynamic(null()) : Dynamic(terrain->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Node_obj,setTerrain,(void))

Void Node_obj::setUserPointer( ::org::gameplay3d::util::Handle pointer,Dynamic cleanCallback){
{
		HX_STACK_FRAME("org.gameplay3d.Node","setUserPointer",0xd9da508f,"org.gameplay3d.Node.setUserPointer","org/gameplay3d/Node.hx",434,0xfcc19e4f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pointer,"pointer")
		HX_STACK_ARG(cleanCallback,"cleanCallback")
		HX_STACK_LINE(434)
		::org::gameplay3d::Node_obj::hx_Node_setUserPointer(this->nativeObject,(  (((pointer == null()))) ? Dynamic(null()) : Dynamic(pointer->nativeObject) ),cleanCallback);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Node_obj,setUserPointer,(void))

::org::gameplay3d::Node Node_obj::create( ::String id){
	HX_STACK_FRAME("org.gameplay3d.Node","create",0xca7a7f5b,"org.gameplay3d.Node.create","org/gameplay3d/Node.hx",64,0xfcc19e4f)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(64)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Node >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(64)
	Dynamic nativeObject = ::org::gameplay3d::Node_obj::hx_Node_static_create(id);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(64)
	if (((nativeObject == null()))){
		HX_STACK_LINE(64)
		return null();
	}
	else{
		HX_STACK_LINE(64)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(64)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(64)
			::org::gameplay3d::Node result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(64)
			if (((result == null()))){
				HX_STACK_LINE(64)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(64)
				::org::gameplay3d::Node _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(64)
				result = _g;
				HX_STACK_LINE(64)
				ref->set(result);
			}
			HX_STACK_LINE(64)
			return result;
		}
		else{
			HX_STACK_LINE(64)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(64)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(64)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Node_obj,create,return )

Dynamic Node_obj::hx_Node_addAdvertisedDescendant;

Dynamic Node_obj::hx_Node_addChild;

Dynamic Node_obj::hx_Node_clone;

Dynamic Node_obj::hx_Node_static_create;

Dynamic Node_obj::hx_Node_findNode;

Dynamic Node_obj::hx_Node_findNodes;

Dynamic Node_obj::hx_Node_getActiveCameraTranslationView;

Dynamic Node_obj::hx_Node_getActiveCameraTranslationWorld;

Dynamic Node_obj::hx_Node_getAdvertisedDescendant;

Dynamic Node_obj::hx_Node_getAgent;

Dynamic Node_obj::hx_Node_getAnimation;

Dynamic Node_obj::hx_Node_getAudioSource;

Dynamic Node_obj::hx_Node_getBoundingSphere;

Dynamic Node_obj::hx_Node_getCamera;

Dynamic Node_obj::hx_Node_getChildCount;

Dynamic Node_obj::hx_Node_getCollisionObject;

Dynamic Node_obj::hx_Node_getFirstChild;

Dynamic Node_obj::hx_Node_getForm;

Dynamic Node_obj::hx_Node_getForwardVectorView;

Dynamic Node_obj::hx_Node_getForwardVectorWorld;

Dynamic Node_obj::hx_Node_getId;

Dynamic Node_obj::hx_Node_getInverseTransposeWorldMatrix;

Dynamic Node_obj::hx_Node_getInverseTransposeWorldViewMatrix;

Dynamic Node_obj::hx_Node_getInverseViewMatrix;

Dynamic Node_obj::hx_Node_getInverseViewProjectionMatrix;

Dynamic Node_obj::hx_Node_getLight;

Dynamic Node_obj::hx_Node_getModel;

Dynamic Node_obj::hx_Node_getNextSibling;

Dynamic Node_obj::hx_Node_getNumAdvertisedDescendants;

Dynamic Node_obj::hx_Node_getParent;

Dynamic Node_obj::hx_Node_getParticleEmitter;

Dynamic Node_obj::hx_Node_getPreviousSibling;

Dynamic Node_obj::hx_Node_getProjectionMatrix;

Dynamic Node_obj::hx_Node_getRightVectorWorld;

Dynamic Node_obj::hx_Node_getRootNode;

Dynamic Node_obj::hx_Node_getScene;

Dynamic Node_obj::hx_Node_getTag;

Dynamic Node_obj::hx_Node_getTerrain;

Dynamic Node_obj::hx_Node_getTranslationView;

Dynamic Node_obj::hx_Node_getTranslationWorld;

Dynamic Node_obj::hx_Node_getType;

Dynamic Node_obj::hx_Node_getUpVectorWorld;

Dynamic Node_obj::hx_Node_getUserPointer;

Dynamic Node_obj::hx_Node_getViewMatrix;

Dynamic Node_obj::hx_Node_getViewProjectionMatrix;

Dynamic Node_obj::hx_Node_getWorldMatrix;

Dynamic Node_obj::hx_Node_getWorldViewMatrix;

Dynamic Node_obj::hx_Node_getWorldViewProjectionMatrix;

Dynamic Node_obj::hx_Node_hasTag;

Dynamic Node_obj::hx_Node_removeAllChildren;

Dynamic Node_obj::hx_Node_removeChild;

Dynamic Node_obj::hx_Node_setAgent;

Dynamic Node_obj::hx_Node_setAudioSource;

Dynamic Node_obj::hx_Node_setCamera;

Dynamic Node_obj::hx_Node_setCollisionObject_Int_Def_Param;

Dynamic Node_obj::hx_Node_setCollisionObject_Prop;

Dynamic Node_obj::hx_Node_setCollisionObject_Str;

Dynamic Node_obj::hx_Node_setForm;

Dynamic Node_obj::hx_Node_setId;

Dynamic Node_obj::hx_Node_setLight;

Dynamic Node_obj::hx_Node_setModel;

Dynamic Node_obj::hx_Node_setParticleEmitter;

Dynamic Node_obj::hx_Node_setTag;

Dynamic Node_obj::hx_Node_setTerrain;

Dynamic Node_obj::hx_Node_setUserPointer;


Node_obj::Node_obj()
{
}

void Node_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Node);
	HX_MARK_MEMBER_NAME(_activeCameraTranslationView,"_activeCameraTranslationView");
	HX_MARK_MEMBER_NAME(_activeCameraTranslationWorld,"_activeCameraTranslationWorld");
	HX_MARK_MEMBER_NAME(_forwardVectorView,"_forwardVectorView");
	HX_MARK_MEMBER_NAME(_forwardVectorWorld,"_forwardVectorWorld");
	HX_MARK_MEMBER_NAME(_rightVectorWorld,"_rightVectorWorld");
	HX_MARK_MEMBER_NAME(_translationView,"_translationView");
	HX_MARK_MEMBER_NAME(_translationWorld,"_translationWorld");
	HX_MARK_MEMBER_NAME(_upVectorWorld,"_upVectorWorld");
	HX_MARK_MEMBER_NAME(_inverseTransposeWorldMatrix,"_inverseTransposeWorldMatrix");
	HX_MARK_MEMBER_NAME(_inverseTransposeWorldViewMatrix,"_inverseTransposeWorldViewMatrix");
	HX_MARK_MEMBER_NAME(_inverseViewMatrix,"_inverseViewMatrix");
	HX_MARK_MEMBER_NAME(_inverseViewProjectionMatrix,"_inverseViewProjectionMatrix");
	HX_MARK_MEMBER_NAME(_projectionMatrix,"_projectionMatrix");
	HX_MARK_MEMBER_NAME(_viewMatrix,"_viewMatrix");
	HX_MARK_MEMBER_NAME(_viewProjectionMatrix,"_viewProjectionMatrix");
	HX_MARK_MEMBER_NAME(_worldMatrix,"_worldMatrix");
	HX_MARK_MEMBER_NAME(_worldViewMatrix,"_worldViewMatrix");
	HX_MARK_MEMBER_NAME(_worldViewProjectionMatrix,"_worldViewProjectionMatrix");
	HX_MARK_MEMBER_NAME(_boundingSphere,"_boundingSphere");
	::org::gameplay3d::Transform_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Node_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_activeCameraTranslationView,"_activeCameraTranslationView");
	HX_VISIT_MEMBER_NAME(_activeCameraTranslationWorld,"_activeCameraTranslationWorld");
	HX_VISIT_MEMBER_NAME(_forwardVectorView,"_forwardVectorView");
	HX_VISIT_MEMBER_NAME(_forwardVectorWorld,"_forwardVectorWorld");
	HX_VISIT_MEMBER_NAME(_rightVectorWorld,"_rightVectorWorld");
	HX_VISIT_MEMBER_NAME(_translationView,"_translationView");
	HX_VISIT_MEMBER_NAME(_translationWorld,"_translationWorld");
	HX_VISIT_MEMBER_NAME(_upVectorWorld,"_upVectorWorld");
	HX_VISIT_MEMBER_NAME(_inverseTransposeWorldMatrix,"_inverseTransposeWorldMatrix");
	HX_VISIT_MEMBER_NAME(_inverseTransposeWorldViewMatrix,"_inverseTransposeWorldViewMatrix");
	HX_VISIT_MEMBER_NAME(_inverseViewMatrix,"_inverseViewMatrix");
	HX_VISIT_MEMBER_NAME(_inverseViewProjectionMatrix,"_inverseViewProjectionMatrix");
	HX_VISIT_MEMBER_NAME(_projectionMatrix,"_projectionMatrix");
	HX_VISIT_MEMBER_NAME(_viewMatrix,"_viewMatrix");
	HX_VISIT_MEMBER_NAME(_viewProjectionMatrix,"_viewProjectionMatrix");
	HX_VISIT_MEMBER_NAME(_worldMatrix,"_worldMatrix");
	HX_VISIT_MEMBER_NAME(_worldViewMatrix,"_worldViewMatrix");
	HX_VISIT_MEMBER_NAME(_worldViewProjectionMatrix,"_worldViewProjectionMatrix");
	HX_VISIT_MEMBER_NAME(_boundingSphere,"_boundingSphere");
	::org::gameplay3d::Transform_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Node_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"getId") ) { return getId_dyn(); }
		if (HX_FIELD_EQ(inName,"setId") ) { return setId_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"getTag") ) { return getTag_dyn(); }
		if (HX_FIELD_EQ(inName,"hasTag") ) { return hasTag_dyn(); }
		if (HX_FIELD_EQ(inName,"setTag") ) { return setTag_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getForm") ) { return getForm_dyn(); }
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
		if (HX_FIELD_EQ(inName,"setForm") ) { return setForm_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		if (HX_FIELD_EQ(inName,"findNode") ) { return findNode_dyn(); }
		if (HX_FIELD_EQ(inName,"getAgent") ) { return getAgent_dyn(); }
		if (HX_FIELD_EQ(inName,"getLight") ) { return getLight_dyn(); }
		if (HX_FIELD_EQ(inName,"getModel") ) { return getModel_dyn(); }
		if (HX_FIELD_EQ(inName,"getScene") ) { return getScene_dyn(); }
		if (HX_FIELD_EQ(inName,"setAgent") ) { return setAgent_dyn(); }
		if (HX_FIELD_EQ(inName,"setLight") ) { return setLight_dyn(); }
		if (HX_FIELD_EQ(inName,"setModel") ) { return setModel_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"findNodes") ) { return findNodes_dyn(); }
		if (HX_FIELD_EQ(inName,"getCamera") ) { return getCamera_dyn(); }
		if (HX_FIELD_EQ(inName,"getParent") ) { return getParent_dyn(); }
		if (HX_FIELD_EQ(inName,"setCamera") ) { return setCamera_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getTerrain") ) { return getTerrain_dyn(); }
		if (HX_FIELD_EQ(inName,"setTerrain") ) { return setTerrain_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_viewMatrix") ) { return _viewMatrix; }
		if (HX_FIELD_EQ(inName,"getRootNode") ) { return getRootNode_dyn(); }
		if (HX_FIELD_EQ(inName,"removeChild") ) { return removeChild_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_worldMatrix") ) { return _worldMatrix; }
		if (HX_FIELD_EQ(inName,"getAnimation") ) { return getAnimation_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"hx_Node_clone") ) { return hx_Node_clone; }
		if (HX_FIELD_EQ(inName,"hx_Node_getId") ) { return hx_Node_getId; }
		if (HX_FIELD_EQ(inName,"hx_Node_setId") ) { return hx_Node_setId; }
		if (HX_FIELD_EQ(inName,"getChildCount") ) { return getChildCount_dyn(); }
		if (HX_FIELD_EQ(inName,"getFirstChild") ) { return getFirstChild_dyn(); }
		if (HX_FIELD_EQ(inName,"getViewMatrix") ) { return getViewMatrix_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"hx_Node_getTag") ) { return hx_Node_getTag; }
		if (HX_FIELD_EQ(inName,"hx_Node_hasTag") ) { return hx_Node_hasTag; }
		if (HX_FIELD_EQ(inName,"hx_Node_setTag") ) { return hx_Node_setTag; }
		if (HX_FIELD_EQ(inName,"_upVectorWorld") ) { return _upVectorWorld; }
		if (HX_FIELD_EQ(inName,"getAudioSource") ) { return getAudioSource_dyn(); }
		if (HX_FIELD_EQ(inName,"getNextSibling") ) { return getNextSibling_dyn(); }
		if (HX_FIELD_EQ(inName,"getUserPointer") ) { return getUserPointer_dyn(); }
		if (HX_FIELD_EQ(inName,"getWorldMatrix") ) { return getWorldMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"setAudioSource") ) { return setAudioSource_dyn(); }
		if (HX_FIELD_EQ(inName,"setUserPointer") ) { return setUserPointer_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hx_Node_getForm") ) { return hx_Node_getForm; }
		if (HX_FIELD_EQ(inName,"hx_Node_getType") ) { return hx_Node_getType; }
		if (HX_FIELD_EQ(inName,"hx_Node_setForm") ) { return hx_Node_setForm; }
		if (HX_FIELD_EQ(inName,"_boundingSphere") ) { return _boundingSphere; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hx_Node_addChild") ) { return hx_Node_addChild; }
		if (HX_FIELD_EQ(inName,"hx_Node_findNode") ) { return hx_Node_findNode; }
		if (HX_FIELD_EQ(inName,"hx_Node_getAgent") ) { return hx_Node_getAgent; }
		if (HX_FIELD_EQ(inName,"hx_Node_getLight") ) { return hx_Node_getLight; }
		if (HX_FIELD_EQ(inName,"hx_Node_getModel") ) { return hx_Node_getModel; }
		if (HX_FIELD_EQ(inName,"hx_Node_getScene") ) { return hx_Node_getScene; }
		if (HX_FIELD_EQ(inName,"hx_Node_setAgent") ) { return hx_Node_setAgent; }
		if (HX_FIELD_EQ(inName,"hx_Node_setLight") ) { return hx_Node_setLight; }
		if (HX_FIELD_EQ(inName,"hx_Node_setModel") ) { return hx_Node_setModel; }
		if (HX_FIELD_EQ(inName,"_translationView") ) { return _translationView; }
		if (HX_FIELD_EQ(inName,"_worldViewMatrix") ) { return _worldViewMatrix; }
		if (HX_FIELD_EQ(inName,"getUpVectorWorld") ) { return getUpVectorWorld_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"hx_Node_findNodes") ) { return hx_Node_findNodes; }
		if (HX_FIELD_EQ(inName,"hx_Node_getCamera") ) { return hx_Node_getCamera; }
		if (HX_FIELD_EQ(inName,"hx_Node_getParent") ) { return hx_Node_getParent; }
		if (HX_FIELD_EQ(inName,"hx_Node_setCamera") ) { return hx_Node_setCamera; }
		if (HX_FIELD_EQ(inName,"_rightVectorWorld") ) { return _rightVectorWorld; }
		if (HX_FIELD_EQ(inName,"_translationWorld") ) { return _translationWorld; }
		if (HX_FIELD_EQ(inName,"_projectionMatrix") ) { return _projectionMatrix; }
		if (HX_FIELD_EQ(inName,"getBoundingSphere") ) { return getBoundingSphere_dyn(); }
		if (HX_FIELD_EQ(inName,"removeAllChildren") ) { return removeAllChildren_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hx_Node_getTerrain") ) { return hx_Node_getTerrain; }
		if (HX_FIELD_EQ(inName,"hx_Node_setTerrain") ) { return hx_Node_setTerrain; }
		if (HX_FIELD_EQ(inName,"_forwardVectorView") ) { return _forwardVectorView; }
		if (HX_FIELD_EQ(inName,"_inverseViewMatrix") ) { return _inverseViewMatrix; }
		if (HX_FIELD_EQ(inName,"getCollisionObject") ) { return getCollisionObject_dyn(); }
		if (HX_FIELD_EQ(inName,"getParticleEmitter") ) { return getParticleEmitter_dyn(); }
		if (HX_FIELD_EQ(inName,"getPreviousSibling") ) { return getPreviousSibling_dyn(); }
		if (HX_FIELD_EQ(inName,"getTranslationView") ) { return getTranslationView_dyn(); }
		if (HX_FIELD_EQ(inName,"getWorldViewMatrix") ) { return getWorldViewMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"setParticleEmitter") ) { return setParticleEmitter_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hx_Node_getRootNode") ) { return hx_Node_getRootNode; }
		if (HX_FIELD_EQ(inName,"hx_Node_removeChild") ) { return hx_Node_removeChild; }
		if (HX_FIELD_EQ(inName,"_forwardVectorWorld") ) { return _forwardVectorWorld; }
		if (HX_FIELD_EQ(inName,"getProjectionMatrix") ) { return getProjectionMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"getRightVectorWorld") ) { return getRightVectorWorld_dyn(); }
		if (HX_FIELD_EQ(inName,"getTranslationWorld") ) { return getTranslationWorld_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Node_getAnimation") ) { return hx_Node_getAnimation; }
		if (HX_FIELD_EQ(inName,"getForwardVectorView") ) { return getForwardVectorView_dyn(); }
		if (HX_FIELD_EQ(inName,"getInverseViewMatrix") ) { return getInverseViewMatrix_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hx_Node_static_create") ) { return hx_Node_static_create; }
		if (HX_FIELD_EQ(inName,"hx_Node_getChildCount") ) { return hx_Node_getChildCount; }
		if (HX_FIELD_EQ(inName,"hx_Node_getFirstChild") ) { return hx_Node_getFirstChild; }
		if (HX_FIELD_EQ(inName,"hx_Node_getViewMatrix") ) { return hx_Node_getViewMatrix; }
		if (HX_FIELD_EQ(inName,"_viewProjectionMatrix") ) { return _viewProjectionMatrix; }
		if (HX_FIELD_EQ(inName,"getForwardVectorWorld") ) { return getForwardVectorWorld_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Node_getAudioSource") ) { return hx_Node_getAudioSource; }
		if (HX_FIELD_EQ(inName,"hx_Node_getNextSibling") ) { return hx_Node_getNextSibling; }
		if (HX_FIELD_EQ(inName,"hx_Node_getUserPointer") ) { return hx_Node_getUserPointer; }
		if (HX_FIELD_EQ(inName,"hx_Node_getWorldMatrix") ) { return hx_Node_getWorldMatrix; }
		if (HX_FIELD_EQ(inName,"hx_Node_setAudioSource") ) { return hx_Node_setAudioSource; }
		if (HX_FIELD_EQ(inName,"hx_Node_setUserPointer") ) { return hx_Node_setUserPointer; }
		if (HX_FIELD_EQ(inName,"setCollisionObject_Str") ) { return setCollisionObject_Str_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"addAdvertisedDescendant") ) { return addAdvertisedDescendant_dyn(); }
		if (HX_FIELD_EQ(inName,"getAdvertisedDescendant") ) { return getAdvertisedDescendant_dyn(); }
		if (HX_FIELD_EQ(inName,"getViewProjectionMatrix") ) { return getViewProjectionMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"setCollisionObject_Prop") ) { return setCollisionObject_Prop_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_Node_getUpVectorWorld") ) { return hx_Node_getUpVectorWorld; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_Node_getBoundingSphere") ) { return hx_Node_getBoundingSphere; }
		if (HX_FIELD_EQ(inName,"hx_Node_removeAllChildren") ) { return hx_Node_removeAllChildren; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_Node_getCollisionObject") ) { return hx_Node_getCollisionObject; }
		if (HX_FIELD_EQ(inName,"hx_Node_getParticleEmitter") ) { return hx_Node_getParticleEmitter; }
		if (HX_FIELD_EQ(inName,"hx_Node_getPreviousSibling") ) { return hx_Node_getPreviousSibling; }
		if (HX_FIELD_EQ(inName,"hx_Node_getTranslationView") ) { return hx_Node_getTranslationView; }
		if (HX_FIELD_EQ(inName,"hx_Node_getWorldViewMatrix") ) { return hx_Node_getWorldViewMatrix; }
		if (HX_FIELD_EQ(inName,"hx_Node_setParticleEmitter") ) { return hx_Node_setParticleEmitter; }
		if (HX_FIELD_EQ(inName,"_worldViewProjectionMatrix") ) { return _worldViewProjectionMatrix; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"hx_Node_getProjectionMatrix") ) { return hx_Node_getProjectionMatrix; }
		if (HX_FIELD_EQ(inName,"hx_Node_getRightVectorWorld") ) { return hx_Node_getRightVectorWorld; }
		if (HX_FIELD_EQ(inName,"hx_Node_getTranslationWorld") ) { return hx_Node_getTranslationWorld; }
		if (HX_FIELD_EQ(inName,"getNumAdvertisedDescendants") ) { return getNumAdvertisedDescendants_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_Node_getForwardVectorView") ) { return hx_Node_getForwardVectorView; }
		if (HX_FIELD_EQ(inName,"hx_Node_getInverseViewMatrix") ) { return hx_Node_getInverseViewMatrix; }
		if (HX_FIELD_EQ(inName,"_activeCameraTranslationView") ) { return _activeCameraTranslationView; }
		if (HX_FIELD_EQ(inName,"_inverseTransposeWorldMatrix") ) { return _inverseTransposeWorldMatrix; }
		if (HX_FIELD_EQ(inName,"_inverseViewProjectionMatrix") ) { return _inverseViewProjectionMatrix; }
		if (HX_FIELD_EQ(inName,"getWorldViewProjectionMatrix") ) { return getWorldViewProjectionMatrix_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_Node_getForwardVectorWorld") ) { return hx_Node_getForwardVectorWorld; }
		if (HX_FIELD_EQ(inName,"_activeCameraTranslationWorld") ) { return _activeCameraTranslationWorld; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"hx_Node_setCollisionObject_Str") ) { return hx_Node_setCollisionObject_Str; }
		if (HX_FIELD_EQ(inName,"getActiveCameraTranslationView") ) { return getActiveCameraTranslationView_dyn(); }
		if (HX_FIELD_EQ(inName,"getInverseTransposeWorldMatrix") ) { return getInverseTransposeWorldMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"getInverseViewProjectionMatrix") ) { return getInverseViewProjectionMatrix_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"hx_Node_addAdvertisedDescendant") ) { return hx_Node_addAdvertisedDescendant; }
		if (HX_FIELD_EQ(inName,"hx_Node_getAdvertisedDescendant") ) { return hx_Node_getAdvertisedDescendant; }
		if (HX_FIELD_EQ(inName,"hx_Node_getViewProjectionMatrix") ) { return hx_Node_getViewProjectionMatrix; }
		if (HX_FIELD_EQ(inName,"hx_Node_setCollisionObject_Prop") ) { return hx_Node_setCollisionObject_Prop; }
		if (HX_FIELD_EQ(inName,"getActiveCameraTranslationWorld") ) { return getActiveCameraTranslationWorld_dyn(); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"_inverseTransposeWorldViewMatrix") ) { return _inverseTransposeWorldViewMatrix; }
		if (HX_FIELD_EQ(inName,"setCollisionObject_Int_Def_Param") ) { return setCollisionObject_Int_Def_Param_dyn(); }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"getInverseTransposeWorldViewMatrix") ) { return getInverseTransposeWorldViewMatrix_dyn(); }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"hx_Node_getNumAdvertisedDescendants") ) { return hx_Node_getNumAdvertisedDescendants; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"hx_Node_getWorldViewProjectionMatrix") ) { return hx_Node_getWorldViewProjectionMatrix; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"hx_Node_getActiveCameraTranslationView") ) { return hx_Node_getActiveCameraTranslationView; }
		if (HX_FIELD_EQ(inName,"hx_Node_getInverseTransposeWorldMatrix") ) { return hx_Node_getInverseTransposeWorldMatrix; }
		if (HX_FIELD_EQ(inName,"hx_Node_getInverseViewProjectionMatrix") ) { return hx_Node_getInverseViewProjectionMatrix; }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"hx_Node_getActiveCameraTranslationWorld") ) { return hx_Node_getActiveCameraTranslationWorld; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"hx_Node_setCollisionObject_Int_Def_Param") ) { return hx_Node_setCollisionObject_Int_Def_Param; }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"hx_Node_getInverseTransposeWorldViewMatrix") ) { return hx_Node_getInverseTransposeWorldViewMatrix; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Node_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"_viewMatrix") ) { _viewMatrix=inValue.Cast< ::org::gameplay3d::Matrix >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_worldMatrix") ) { _worldMatrix=inValue.Cast< ::org::gameplay3d::Matrix >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"hx_Node_clone") ) { hx_Node_clone=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Node_getId") ) { hx_Node_getId=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Node_setId") ) { hx_Node_setId=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"hx_Node_getTag") ) { hx_Node_getTag=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Node_hasTag") ) { hx_Node_hasTag=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Node_setTag") ) { hx_Node_setTag=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_upVectorWorld") ) { _upVectorWorld=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hx_Node_getForm") ) { hx_Node_getForm=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Node_getType") ) { hx_Node_getType=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Node_setForm") ) { hx_Node_setForm=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_boundingSphere") ) { _boundingSphere=inValue.Cast< ::org::gameplay3d::BoundingSphere >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hx_Node_addChild") ) { hx_Node_addChild=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Node_findNode") ) { hx_Node_findNode=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Node_getAgent") ) { hx_Node_getAgent=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Node_getLight") ) { hx_Node_getLight=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Node_getModel") ) { hx_Node_getModel=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Node_getScene") ) { hx_Node_getScene=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Node_setAgent") ) { hx_Node_setAgent=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Node_setLight") ) { hx_Node_setLight=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Node_setModel") ) { hx_Node_setModel=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_translationView") ) { _translationView=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_worldViewMatrix") ) { _worldViewMatrix=inValue.Cast< ::org::gameplay3d::Matrix >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"hx_Node_findNodes") ) { hx_Node_findNodes=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Node_getCamera") ) { hx_Node_getCamera=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Node_getParent") ) { hx_Node_getParent=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Node_setCamera") ) { hx_Node_setCamera=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rightVectorWorld") ) { _rightVectorWorld=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_translationWorld") ) { _translationWorld=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_projectionMatrix") ) { _projectionMatrix=inValue.Cast< ::org::gameplay3d::Matrix >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hx_Node_getTerrain") ) { hx_Node_getTerrain=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Node_setTerrain") ) { hx_Node_setTerrain=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_forwardVectorView") ) { _forwardVectorView=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_inverseViewMatrix") ) { _inverseViewMatrix=inValue.Cast< ::org::gameplay3d::Matrix >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hx_Node_getRootNode") ) { hx_Node_getRootNode=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Node_removeChild") ) { hx_Node_removeChild=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_forwardVectorWorld") ) { _forwardVectorWorld=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Node_getAnimation") ) { hx_Node_getAnimation=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hx_Node_static_create") ) { hx_Node_static_create=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Node_getChildCount") ) { hx_Node_getChildCount=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Node_getFirstChild") ) { hx_Node_getFirstChild=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Node_getViewMatrix") ) { hx_Node_getViewMatrix=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_viewProjectionMatrix") ) { _viewProjectionMatrix=inValue.Cast< ::org::gameplay3d::Matrix >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Node_getAudioSource") ) { hx_Node_getAudioSource=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Node_getNextSibling") ) { hx_Node_getNextSibling=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Node_getUserPointer") ) { hx_Node_getUserPointer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Node_getWorldMatrix") ) { hx_Node_getWorldMatrix=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Node_setAudioSource") ) { hx_Node_setAudioSource=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Node_setUserPointer") ) { hx_Node_setUserPointer=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_Node_getUpVectorWorld") ) { hx_Node_getUpVectorWorld=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_Node_getBoundingSphere") ) { hx_Node_getBoundingSphere=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Node_removeAllChildren") ) { hx_Node_removeAllChildren=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_Node_getCollisionObject") ) { hx_Node_getCollisionObject=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Node_getParticleEmitter") ) { hx_Node_getParticleEmitter=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Node_getPreviousSibling") ) { hx_Node_getPreviousSibling=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Node_getTranslationView") ) { hx_Node_getTranslationView=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Node_getWorldViewMatrix") ) { hx_Node_getWorldViewMatrix=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Node_setParticleEmitter") ) { hx_Node_setParticleEmitter=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_worldViewProjectionMatrix") ) { _worldViewProjectionMatrix=inValue.Cast< ::org::gameplay3d::Matrix >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"hx_Node_getProjectionMatrix") ) { hx_Node_getProjectionMatrix=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Node_getRightVectorWorld") ) { hx_Node_getRightVectorWorld=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Node_getTranslationWorld") ) { hx_Node_getTranslationWorld=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_Node_getForwardVectorView") ) { hx_Node_getForwardVectorView=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Node_getInverseViewMatrix") ) { hx_Node_getInverseViewMatrix=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_activeCameraTranslationView") ) { _activeCameraTranslationView=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_inverseTransposeWorldMatrix") ) { _inverseTransposeWorldMatrix=inValue.Cast< ::org::gameplay3d::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_inverseViewProjectionMatrix") ) { _inverseViewProjectionMatrix=inValue.Cast< ::org::gameplay3d::Matrix >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_Node_getForwardVectorWorld") ) { hx_Node_getForwardVectorWorld=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_activeCameraTranslationWorld") ) { _activeCameraTranslationWorld=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"hx_Node_setCollisionObject_Str") ) { hx_Node_setCollisionObject_Str=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"hx_Node_addAdvertisedDescendant") ) { hx_Node_addAdvertisedDescendant=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Node_getAdvertisedDescendant") ) { hx_Node_getAdvertisedDescendant=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Node_getViewProjectionMatrix") ) { hx_Node_getViewProjectionMatrix=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Node_setCollisionObject_Prop") ) { hx_Node_setCollisionObject_Prop=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"_inverseTransposeWorldViewMatrix") ) { _inverseTransposeWorldViewMatrix=inValue.Cast< ::org::gameplay3d::Matrix >(); return inValue; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"hx_Node_getNumAdvertisedDescendants") ) { hx_Node_getNumAdvertisedDescendants=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"hx_Node_getWorldViewProjectionMatrix") ) { hx_Node_getWorldViewProjectionMatrix=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"hx_Node_getActiveCameraTranslationView") ) { hx_Node_getActiveCameraTranslationView=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Node_getInverseTransposeWorldMatrix") ) { hx_Node_getInverseTransposeWorldMatrix=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Node_getInverseViewProjectionMatrix") ) { hx_Node_getInverseViewProjectionMatrix=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"hx_Node_getActiveCameraTranslationWorld") ) { hx_Node_getActiveCameraTranslationWorld=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"hx_Node_setCollisionObject_Int_Def_Param") ) { hx_Node_setCollisionObject_Int_Def_Param=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"hx_Node_getInverseTransposeWorldViewMatrix") ) { hx_Node_getInverseTransposeWorldViewMatrix=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Node_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_activeCameraTranslationView"));
	outFields->push(HX_CSTRING("_activeCameraTranslationWorld"));
	outFields->push(HX_CSTRING("_forwardVectorView"));
	outFields->push(HX_CSTRING("_forwardVectorWorld"));
	outFields->push(HX_CSTRING("_rightVectorWorld"));
	outFields->push(HX_CSTRING("_translationView"));
	outFields->push(HX_CSTRING("_translationWorld"));
	outFields->push(HX_CSTRING("_upVectorWorld"));
	outFields->push(HX_CSTRING("_inverseTransposeWorldMatrix"));
	outFields->push(HX_CSTRING("_inverseTransposeWorldViewMatrix"));
	outFields->push(HX_CSTRING("_inverseViewMatrix"));
	outFields->push(HX_CSTRING("_inverseViewProjectionMatrix"));
	outFields->push(HX_CSTRING("_projectionMatrix"));
	outFields->push(HX_CSTRING("_viewMatrix"));
	outFields->push(HX_CSTRING("_viewProjectionMatrix"));
	outFields->push(HX_CSTRING("_worldMatrix"));
	outFields->push(HX_CSTRING("_worldViewMatrix"));
	outFields->push(HX_CSTRING("_worldViewProjectionMatrix"));
	outFields->push(HX_CSTRING("_boundingSphere"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create"),
	HX_CSTRING("hx_Node_addAdvertisedDescendant"),
	HX_CSTRING("hx_Node_addChild"),
	HX_CSTRING("hx_Node_clone"),
	HX_CSTRING("hx_Node_static_create"),
	HX_CSTRING("hx_Node_findNode"),
	HX_CSTRING("hx_Node_findNodes"),
	HX_CSTRING("hx_Node_getActiveCameraTranslationView"),
	HX_CSTRING("hx_Node_getActiveCameraTranslationWorld"),
	HX_CSTRING("hx_Node_getAdvertisedDescendant"),
	HX_CSTRING("hx_Node_getAgent"),
	HX_CSTRING("hx_Node_getAnimation"),
	HX_CSTRING("hx_Node_getAudioSource"),
	HX_CSTRING("hx_Node_getBoundingSphere"),
	HX_CSTRING("hx_Node_getCamera"),
	HX_CSTRING("hx_Node_getChildCount"),
	HX_CSTRING("hx_Node_getCollisionObject"),
	HX_CSTRING("hx_Node_getFirstChild"),
	HX_CSTRING("hx_Node_getForm"),
	HX_CSTRING("hx_Node_getForwardVectorView"),
	HX_CSTRING("hx_Node_getForwardVectorWorld"),
	HX_CSTRING("hx_Node_getId"),
	HX_CSTRING("hx_Node_getInverseTransposeWorldMatrix"),
	HX_CSTRING("hx_Node_getInverseTransposeWorldViewMatrix"),
	HX_CSTRING("hx_Node_getInverseViewMatrix"),
	HX_CSTRING("hx_Node_getInverseViewProjectionMatrix"),
	HX_CSTRING("hx_Node_getLight"),
	HX_CSTRING("hx_Node_getModel"),
	HX_CSTRING("hx_Node_getNextSibling"),
	HX_CSTRING("hx_Node_getNumAdvertisedDescendants"),
	HX_CSTRING("hx_Node_getParent"),
	HX_CSTRING("hx_Node_getParticleEmitter"),
	HX_CSTRING("hx_Node_getPreviousSibling"),
	HX_CSTRING("hx_Node_getProjectionMatrix"),
	HX_CSTRING("hx_Node_getRightVectorWorld"),
	HX_CSTRING("hx_Node_getRootNode"),
	HX_CSTRING("hx_Node_getScene"),
	HX_CSTRING("hx_Node_getTag"),
	HX_CSTRING("hx_Node_getTerrain"),
	HX_CSTRING("hx_Node_getTranslationView"),
	HX_CSTRING("hx_Node_getTranslationWorld"),
	HX_CSTRING("hx_Node_getType"),
	HX_CSTRING("hx_Node_getUpVectorWorld"),
	HX_CSTRING("hx_Node_getUserPointer"),
	HX_CSTRING("hx_Node_getViewMatrix"),
	HX_CSTRING("hx_Node_getViewProjectionMatrix"),
	HX_CSTRING("hx_Node_getWorldMatrix"),
	HX_CSTRING("hx_Node_getWorldViewMatrix"),
	HX_CSTRING("hx_Node_getWorldViewProjectionMatrix"),
	HX_CSTRING("hx_Node_hasTag"),
	HX_CSTRING("hx_Node_removeAllChildren"),
	HX_CSTRING("hx_Node_removeChild"),
	HX_CSTRING("hx_Node_setAgent"),
	HX_CSTRING("hx_Node_setAudioSource"),
	HX_CSTRING("hx_Node_setCamera"),
	HX_CSTRING("hx_Node_setCollisionObject_Int_Def_Param"),
	HX_CSTRING("hx_Node_setCollisionObject_Prop"),
	HX_CSTRING("hx_Node_setCollisionObject_Str"),
	HX_CSTRING("hx_Node_setForm"),
	HX_CSTRING("hx_Node_setId"),
	HX_CSTRING("hx_Node_setLight"),
	HX_CSTRING("hx_Node_setModel"),
	HX_CSTRING("hx_Node_setParticleEmitter"),
	HX_CSTRING("hx_Node_setTag"),
	HX_CSTRING("hx_Node_setTerrain"),
	HX_CSTRING("hx_Node_setUserPointer"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(Node_obj,_activeCameraTranslationView),HX_CSTRING("_activeCameraTranslationView")},
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(Node_obj,_activeCameraTranslationWorld),HX_CSTRING("_activeCameraTranslationWorld")},
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(Node_obj,_forwardVectorView),HX_CSTRING("_forwardVectorView")},
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(Node_obj,_forwardVectorWorld),HX_CSTRING("_forwardVectorWorld")},
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(Node_obj,_rightVectorWorld),HX_CSTRING("_rightVectorWorld")},
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(Node_obj,_translationView),HX_CSTRING("_translationView")},
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(Node_obj,_translationWorld),HX_CSTRING("_translationWorld")},
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(Node_obj,_upVectorWorld),HX_CSTRING("_upVectorWorld")},
	{hx::fsObject /*::org::gameplay3d::Matrix*/ ,(int)offsetof(Node_obj,_inverseTransposeWorldMatrix),HX_CSTRING("_inverseTransposeWorldMatrix")},
	{hx::fsObject /*::org::gameplay3d::Matrix*/ ,(int)offsetof(Node_obj,_inverseTransposeWorldViewMatrix),HX_CSTRING("_inverseTransposeWorldViewMatrix")},
	{hx::fsObject /*::org::gameplay3d::Matrix*/ ,(int)offsetof(Node_obj,_inverseViewMatrix),HX_CSTRING("_inverseViewMatrix")},
	{hx::fsObject /*::org::gameplay3d::Matrix*/ ,(int)offsetof(Node_obj,_inverseViewProjectionMatrix),HX_CSTRING("_inverseViewProjectionMatrix")},
	{hx::fsObject /*::org::gameplay3d::Matrix*/ ,(int)offsetof(Node_obj,_projectionMatrix),HX_CSTRING("_projectionMatrix")},
	{hx::fsObject /*::org::gameplay3d::Matrix*/ ,(int)offsetof(Node_obj,_viewMatrix),HX_CSTRING("_viewMatrix")},
	{hx::fsObject /*::org::gameplay3d::Matrix*/ ,(int)offsetof(Node_obj,_viewProjectionMatrix),HX_CSTRING("_viewProjectionMatrix")},
	{hx::fsObject /*::org::gameplay3d::Matrix*/ ,(int)offsetof(Node_obj,_worldMatrix),HX_CSTRING("_worldMatrix")},
	{hx::fsObject /*::org::gameplay3d::Matrix*/ ,(int)offsetof(Node_obj,_worldViewMatrix),HX_CSTRING("_worldViewMatrix")},
	{hx::fsObject /*::org::gameplay3d::Matrix*/ ,(int)offsetof(Node_obj,_worldViewProjectionMatrix),HX_CSTRING("_worldViewProjectionMatrix")},
	{hx::fsObject /*::org::gameplay3d::BoundingSphere*/ ,(int)offsetof(Node_obj,_boundingSphere),HX_CSTRING("_boundingSphere")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_activeCameraTranslationView"),
	HX_CSTRING("_activeCameraTranslationWorld"),
	HX_CSTRING("_forwardVectorView"),
	HX_CSTRING("_forwardVectorWorld"),
	HX_CSTRING("_rightVectorWorld"),
	HX_CSTRING("_translationView"),
	HX_CSTRING("_translationWorld"),
	HX_CSTRING("_upVectorWorld"),
	HX_CSTRING("_inverseTransposeWorldMatrix"),
	HX_CSTRING("_inverseTransposeWorldViewMatrix"),
	HX_CSTRING("_inverseViewMatrix"),
	HX_CSTRING("_inverseViewProjectionMatrix"),
	HX_CSTRING("_projectionMatrix"),
	HX_CSTRING("_viewMatrix"),
	HX_CSTRING("_viewProjectionMatrix"),
	HX_CSTRING("_worldMatrix"),
	HX_CSTRING("_worldViewMatrix"),
	HX_CSTRING("_worldViewProjectionMatrix"),
	HX_CSTRING("_boundingSphere"),
	HX_CSTRING("addAdvertisedDescendant"),
	HX_CSTRING("addChild"),
	HX_CSTRING("clone"),
	HX_CSTRING("findNode"),
	HX_CSTRING("findNodes"),
	HX_CSTRING("getActiveCameraTranslationView"),
	HX_CSTRING("getActiveCameraTranslationWorld"),
	HX_CSTRING("getAdvertisedDescendant"),
	HX_CSTRING("getAgent"),
	HX_CSTRING("getAnimation"),
	HX_CSTRING("getAudioSource"),
	HX_CSTRING("getBoundingSphere"),
	HX_CSTRING("getCamera"),
	HX_CSTRING("getChildCount"),
	HX_CSTRING("getCollisionObject"),
	HX_CSTRING("getFirstChild"),
	HX_CSTRING("getForm"),
	HX_CSTRING("getForwardVectorView"),
	HX_CSTRING("getForwardVectorWorld"),
	HX_CSTRING("getId"),
	HX_CSTRING("getInverseTransposeWorldMatrix"),
	HX_CSTRING("getInverseTransposeWorldViewMatrix"),
	HX_CSTRING("getInverseViewMatrix"),
	HX_CSTRING("getInverseViewProjectionMatrix"),
	HX_CSTRING("getLight"),
	HX_CSTRING("getModel"),
	HX_CSTRING("getNextSibling"),
	HX_CSTRING("getNumAdvertisedDescendants"),
	HX_CSTRING("getParent"),
	HX_CSTRING("getParticleEmitter"),
	HX_CSTRING("getPreviousSibling"),
	HX_CSTRING("getProjectionMatrix"),
	HX_CSTRING("getRightVectorWorld"),
	HX_CSTRING("getRootNode"),
	HX_CSTRING("getScene"),
	HX_CSTRING("getTag"),
	HX_CSTRING("getTerrain"),
	HX_CSTRING("getTranslationView"),
	HX_CSTRING("getTranslationWorld"),
	HX_CSTRING("getType"),
	HX_CSTRING("getUpVectorWorld"),
	HX_CSTRING("getUserPointer"),
	HX_CSTRING("getViewMatrix"),
	HX_CSTRING("getViewProjectionMatrix"),
	HX_CSTRING("getWorldMatrix"),
	HX_CSTRING("getWorldViewMatrix"),
	HX_CSTRING("getWorldViewProjectionMatrix"),
	HX_CSTRING("hasTag"),
	HX_CSTRING("removeAllChildren"),
	HX_CSTRING("removeChild"),
	HX_CSTRING("setAgent"),
	HX_CSTRING("setAudioSource"),
	HX_CSTRING("setCamera"),
	HX_CSTRING("setCollisionObject_Int_Def_Param"),
	HX_CSTRING("setCollisionObject_Prop"),
	HX_CSTRING("setCollisionObject_Str"),
	HX_CSTRING("setForm"),
	HX_CSTRING("setId"),
	HX_CSTRING("setLight"),
	HX_CSTRING("setModel"),
	HX_CSTRING("setParticleEmitter"),
	HX_CSTRING("setTag"),
	HX_CSTRING("setTerrain"),
	HX_CSTRING("setUserPointer"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Node_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_addAdvertisedDescendant,"hx_Node_addAdvertisedDescendant");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_addChild,"hx_Node_addChild");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_clone,"hx_Node_clone");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_static_create,"hx_Node_static_create");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_findNode,"hx_Node_findNode");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_findNodes,"hx_Node_findNodes");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_getActiveCameraTranslationView,"hx_Node_getActiveCameraTranslationView");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_getActiveCameraTranslationWorld,"hx_Node_getActiveCameraTranslationWorld");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_getAdvertisedDescendant,"hx_Node_getAdvertisedDescendant");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_getAgent,"hx_Node_getAgent");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_getAnimation,"hx_Node_getAnimation");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_getAudioSource,"hx_Node_getAudioSource");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_getBoundingSphere,"hx_Node_getBoundingSphere");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_getCamera,"hx_Node_getCamera");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_getChildCount,"hx_Node_getChildCount");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_getCollisionObject,"hx_Node_getCollisionObject");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_getFirstChild,"hx_Node_getFirstChild");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_getForm,"hx_Node_getForm");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_getForwardVectorView,"hx_Node_getForwardVectorView");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_getForwardVectorWorld,"hx_Node_getForwardVectorWorld");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_getId,"hx_Node_getId");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_getInverseTransposeWorldMatrix,"hx_Node_getInverseTransposeWorldMatrix");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_getInverseTransposeWorldViewMatrix,"hx_Node_getInverseTransposeWorldViewMatrix");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_getInverseViewMatrix,"hx_Node_getInverseViewMatrix");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_getInverseViewProjectionMatrix,"hx_Node_getInverseViewProjectionMatrix");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_getLight,"hx_Node_getLight");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_getModel,"hx_Node_getModel");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_getNextSibling,"hx_Node_getNextSibling");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_getNumAdvertisedDescendants,"hx_Node_getNumAdvertisedDescendants");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_getParent,"hx_Node_getParent");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_getParticleEmitter,"hx_Node_getParticleEmitter");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_getPreviousSibling,"hx_Node_getPreviousSibling");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_getProjectionMatrix,"hx_Node_getProjectionMatrix");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_getRightVectorWorld,"hx_Node_getRightVectorWorld");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_getRootNode,"hx_Node_getRootNode");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_getScene,"hx_Node_getScene");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_getTag,"hx_Node_getTag");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_getTerrain,"hx_Node_getTerrain");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_getTranslationView,"hx_Node_getTranslationView");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_getTranslationWorld,"hx_Node_getTranslationWorld");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_getType,"hx_Node_getType");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_getUpVectorWorld,"hx_Node_getUpVectorWorld");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_getUserPointer,"hx_Node_getUserPointer");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_getViewMatrix,"hx_Node_getViewMatrix");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_getViewProjectionMatrix,"hx_Node_getViewProjectionMatrix");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_getWorldMatrix,"hx_Node_getWorldMatrix");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_getWorldViewMatrix,"hx_Node_getWorldViewMatrix");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_getWorldViewProjectionMatrix,"hx_Node_getWorldViewProjectionMatrix");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_hasTag,"hx_Node_hasTag");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_removeAllChildren,"hx_Node_removeAllChildren");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_removeChild,"hx_Node_removeChild");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_setAgent,"hx_Node_setAgent");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_setAudioSource,"hx_Node_setAudioSource");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_setCamera,"hx_Node_setCamera");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_setCollisionObject_Int_Def_Param,"hx_Node_setCollisionObject_Int_Def_Param");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_setCollisionObject_Prop,"hx_Node_setCollisionObject_Prop");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_setCollisionObject_Str,"hx_Node_setCollisionObject_Str");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_setForm,"hx_Node_setForm");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_setId,"hx_Node_setId");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_setLight,"hx_Node_setLight");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_setModel,"hx_Node_setModel");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_setParticleEmitter,"hx_Node_setParticleEmitter");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_setTag,"hx_Node_setTag");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_setTerrain,"hx_Node_setTerrain");
	HX_MARK_MEMBER_NAME(Node_obj::hx_Node_setUserPointer,"hx_Node_setUserPointer");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Node_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_addAdvertisedDescendant,"hx_Node_addAdvertisedDescendant");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_addChild,"hx_Node_addChild");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_clone,"hx_Node_clone");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_static_create,"hx_Node_static_create");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_findNode,"hx_Node_findNode");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_findNodes,"hx_Node_findNodes");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_getActiveCameraTranslationView,"hx_Node_getActiveCameraTranslationView");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_getActiveCameraTranslationWorld,"hx_Node_getActiveCameraTranslationWorld");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_getAdvertisedDescendant,"hx_Node_getAdvertisedDescendant");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_getAgent,"hx_Node_getAgent");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_getAnimation,"hx_Node_getAnimation");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_getAudioSource,"hx_Node_getAudioSource");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_getBoundingSphere,"hx_Node_getBoundingSphere");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_getCamera,"hx_Node_getCamera");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_getChildCount,"hx_Node_getChildCount");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_getCollisionObject,"hx_Node_getCollisionObject");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_getFirstChild,"hx_Node_getFirstChild");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_getForm,"hx_Node_getForm");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_getForwardVectorView,"hx_Node_getForwardVectorView");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_getForwardVectorWorld,"hx_Node_getForwardVectorWorld");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_getId,"hx_Node_getId");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_getInverseTransposeWorldMatrix,"hx_Node_getInverseTransposeWorldMatrix");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_getInverseTransposeWorldViewMatrix,"hx_Node_getInverseTransposeWorldViewMatrix");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_getInverseViewMatrix,"hx_Node_getInverseViewMatrix");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_getInverseViewProjectionMatrix,"hx_Node_getInverseViewProjectionMatrix");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_getLight,"hx_Node_getLight");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_getModel,"hx_Node_getModel");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_getNextSibling,"hx_Node_getNextSibling");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_getNumAdvertisedDescendants,"hx_Node_getNumAdvertisedDescendants");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_getParent,"hx_Node_getParent");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_getParticleEmitter,"hx_Node_getParticleEmitter");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_getPreviousSibling,"hx_Node_getPreviousSibling");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_getProjectionMatrix,"hx_Node_getProjectionMatrix");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_getRightVectorWorld,"hx_Node_getRightVectorWorld");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_getRootNode,"hx_Node_getRootNode");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_getScene,"hx_Node_getScene");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_getTag,"hx_Node_getTag");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_getTerrain,"hx_Node_getTerrain");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_getTranslationView,"hx_Node_getTranslationView");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_getTranslationWorld,"hx_Node_getTranslationWorld");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_getType,"hx_Node_getType");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_getUpVectorWorld,"hx_Node_getUpVectorWorld");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_getUserPointer,"hx_Node_getUserPointer");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_getViewMatrix,"hx_Node_getViewMatrix");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_getViewProjectionMatrix,"hx_Node_getViewProjectionMatrix");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_getWorldMatrix,"hx_Node_getWorldMatrix");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_getWorldViewMatrix,"hx_Node_getWorldViewMatrix");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_getWorldViewProjectionMatrix,"hx_Node_getWorldViewProjectionMatrix");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_hasTag,"hx_Node_hasTag");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_removeAllChildren,"hx_Node_removeAllChildren");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_removeChild,"hx_Node_removeChild");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_setAgent,"hx_Node_setAgent");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_setAudioSource,"hx_Node_setAudioSource");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_setCamera,"hx_Node_setCamera");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_setCollisionObject_Int_Def_Param,"hx_Node_setCollisionObject_Int_Def_Param");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_setCollisionObject_Prop,"hx_Node_setCollisionObject_Prop");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_setCollisionObject_Str,"hx_Node_setCollisionObject_Str");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_setForm,"hx_Node_setForm");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_setId,"hx_Node_setId");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_setLight,"hx_Node_setLight");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_setModel,"hx_Node_setModel");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_setParticleEmitter,"hx_Node_setParticleEmitter");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_setTag,"hx_Node_setTag");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_setTerrain,"hx_Node_setTerrain");
	HX_VISIT_MEMBER_NAME(Node_obj::hx_Node_setUserPointer,"hx_Node_setUserPointer");
};

#endif

Class Node_obj::__mClass;

void Node_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.Node"), hx::TCanCast< Node_obj> ,sStaticFields,sMemberFields,
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

void Node_obj::__boot()
{
	hx_Node_addAdvertisedDescendant= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("addAdvertisedDescendant"),(int)2);
	hx_Node_addChild= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("addChild"),(int)2);
	hx_Node_clone= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("clone"),(int)1);
	hx_Node_static_create= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("static_create"),(int)1);
	hx_Node_findNode= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("findNode"),(int)4);
	hx_Node_findNodes= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("findNodes"),(int)5);
	hx_Node_getActiveCameraTranslationView= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("getActiveCameraTranslationView"),(int)1);
	hx_Node_getActiveCameraTranslationWorld= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("getActiveCameraTranslationWorld"),(int)1);
	hx_Node_getAdvertisedDescendant= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("getAdvertisedDescendant"),(int)2);
	hx_Node_getAgent= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("getAgent"),(int)1);
	hx_Node_getAnimation= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("getAnimation"),(int)2);
	hx_Node_getAudioSource= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("getAudioSource"),(int)1);
	hx_Node_getBoundingSphere= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("getBoundingSphere"),(int)1);
	hx_Node_getCamera= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("getCamera"),(int)1);
	hx_Node_getChildCount= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("getChildCount"),(int)1);
	hx_Node_getCollisionObject= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("getCollisionObject"),(int)1);
	hx_Node_getFirstChild= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("getFirstChild"),(int)1);
	hx_Node_getForm= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("getForm"),(int)1);
	hx_Node_getForwardVectorView= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("getForwardVectorView"),(int)1);
	hx_Node_getForwardVectorWorld= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("getForwardVectorWorld"),(int)1);
	hx_Node_getId= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("getId"),(int)1);
	hx_Node_getInverseTransposeWorldMatrix= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("getInverseTransposeWorldMatrix"),(int)1);
	hx_Node_getInverseTransposeWorldViewMatrix= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("getInverseTransposeWorldViewMatrix"),(int)1);
	hx_Node_getInverseViewMatrix= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("getInverseViewMatrix"),(int)1);
	hx_Node_getInverseViewProjectionMatrix= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("getInverseViewProjectionMatrix"),(int)1);
	hx_Node_getLight= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("getLight"),(int)1);
	hx_Node_getModel= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("getModel"),(int)1);
	hx_Node_getNextSibling= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("getNextSibling"),(int)1);
	hx_Node_getNumAdvertisedDescendants= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("getNumAdvertisedDescendants"),(int)1);
	hx_Node_getParent= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("getParent"),(int)1);
	hx_Node_getParticleEmitter= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("getParticleEmitter"),(int)1);
	hx_Node_getPreviousSibling= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("getPreviousSibling"),(int)1);
	hx_Node_getProjectionMatrix= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("getProjectionMatrix"),(int)1);
	hx_Node_getRightVectorWorld= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("getRightVectorWorld"),(int)1);
	hx_Node_getRootNode= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("getRootNode"),(int)1);
	hx_Node_getScene= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("getScene"),(int)1);
	hx_Node_getTag= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("getTag"),(int)2);
	hx_Node_getTerrain= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("getTerrain"),(int)1);
	hx_Node_getTranslationView= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("getTranslationView"),(int)1);
	hx_Node_getTranslationWorld= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("getTranslationWorld"),(int)1);
	hx_Node_getType= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("getType"),(int)1);
	hx_Node_getUpVectorWorld= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("getUpVectorWorld"),(int)1);
	hx_Node_getUserPointer= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("getUserPointer"),(int)1);
	hx_Node_getViewMatrix= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("getViewMatrix"),(int)1);
	hx_Node_getViewProjectionMatrix= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("getViewProjectionMatrix"),(int)1);
	hx_Node_getWorldMatrix= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("getWorldMatrix"),(int)1);
	hx_Node_getWorldViewMatrix= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("getWorldViewMatrix"),(int)1);
	hx_Node_getWorldViewProjectionMatrix= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("getWorldViewProjectionMatrix"),(int)1);
	hx_Node_hasTag= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("hasTag"),(int)2);
	hx_Node_removeAllChildren= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("removeAllChildren"),(int)1);
	hx_Node_removeChild= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("removeChild"),(int)2);
	hx_Node_setAgent= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("setAgent"),(int)2);
	hx_Node_setAudioSource= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("setAudioSource"),(int)2);
	hx_Node_setCamera= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("setCamera"),(int)2);
	hx_Node_setCollisionObject_Int_Def_Param= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("setCollisionObject_Int_Def_Param"),(int)4);
	hx_Node_setCollisionObject_Prop= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("setCollisionObject_Prop"),(int)2);
	hx_Node_setCollisionObject_Str= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("setCollisionObject_Str"),(int)2);
	hx_Node_setForm= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("setForm"),(int)2);
	hx_Node_setId= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("setId"),(int)2);
	hx_Node_setLight= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("setLight"),(int)2);
	hx_Node_setModel= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("setModel"),(int)2);
	hx_Node_setParticleEmitter= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("setParticleEmitter"),(int)2);
	hx_Node_setTag= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("setTag"),(int)3);
	hx_Node_setTerrain= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("setTerrain"),(int)2);
	hx_Node_setUserPointer= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Node >(),HX_CSTRING("setUserPointer"),(int)3);
}

} // end namespace org
} // end namespace gameplay3d
