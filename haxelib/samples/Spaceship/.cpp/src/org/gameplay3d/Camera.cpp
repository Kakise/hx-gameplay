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
#ifndef INCLUDED_org_gameplay3d_Frustum
#include <org/gameplay3d/Frustum.h>
#endif
#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Matrix
#include <org/gameplay3d/Matrix.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Node
#include <org/gameplay3d/Node.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Properties
#include <org/gameplay3d/Properties.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Ray
#include <org/gameplay3d/Ray.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Ref
#include <org/gameplay3d/Ref.h>
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
#ifndef INCLUDED_org_gameplay3d_immutable_IFrustum
#include <org/gameplay3d/immutable/IFrustum.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IMatrix
#include <org/gameplay3d/immutable/IMatrix.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IRectangle
#include <org/gameplay3d/immutable/IRectangle.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IVector3
#include <org/gameplay3d/immutable/IVector3.h>
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

Void Camera_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.Camera","new",0xbedfe604,"org.gameplay3d.Camera.new","org/gameplay3d/Camera.hx",17,0x4ea7a44c)
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

//Camera_obj::~Camera_obj() { }

Dynamic Camera_obj::__CreateEmpty() { return  new Camera_obj; }
hx::ObjectPtr< Camera_obj > Camera_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< Camera_obj > result = new Camera_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic Camera_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Camera_obj > result = new Camera_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *Camera_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::intern::INativeBinding_obj)) return operator ::org::gameplay3d::intern::INativeBinding_obj *();
	if (inType==typeid( ::org::gameplay3d::Ref_obj)) return operator ::org::gameplay3d::Ref_obj *();
	return super::__ToInterface(inType);
}

Float Camera_obj::getAspectRatio( ){
	HX_STACK_FRAME("org.gameplay3d.Camera","getAspectRatio",0x4cf677f9,"org.gameplay3d.Camera.getAspectRatio","org/gameplay3d/Camera.hx",51,0x4ea7a44c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(51)
	return ::org::gameplay3d::Camera_obj::hx_Camera_getAspectRatio(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,getAspectRatio,return )

int Camera_obj::getCameraType( ){
	HX_STACK_FRAME("org.gameplay3d.Camera","getCameraType",0xc26e82d9,"org.gameplay3d.Camera.getCameraType","org/gameplay3d/Camera.hx",57,0x4ea7a44c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(57)
	return ::org::gameplay3d::Camera_obj::hx_Camera_getCameraType(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,getCameraType,return )

Float Camera_obj::getFarPlane( ){
	HX_STACK_FRAME("org.gameplay3d.Camera","getFarPlane",0xb8ea245f,"org.gameplay3d.Camera.getFarPlane","org/gameplay3d/Camera.hx",63,0x4ea7a44c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(63)
	return ::org::gameplay3d::Camera_obj::hx_Camera_getFarPlane(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,getFarPlane,return )

Float Camera_obj::getFieldOfView( ){
	HX_STACK_FRAME("org.gameplay3d.Camera","getFieldOfView",0xa97e7f5c,"org.gameplay3d.Camera.getFieldOfView","org/gameplay3d/Camera.hx",69,0x4ea7a44c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(69)
	return ::org::gameplay3d::Camera_obj::hx_Camera_getFieldOfView(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,getFieldOfView,return )

::org::gameplay3d::immutable::IFrustum Camera_obj::getFrustum( ){
	HX_STACK_FRAME("org.gameplay3d.Camera","getFrustum",0x527d7448,"org.gameplay3d.Camera.getFrustum","org/gameplay3d/Camera.hx",75,0x4ea7a44c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_frustum == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Frustum _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Frustum >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(75)
			Dynamic nativeObject = ::org::gameplay3d::Camera_obj::hx_Camera_getFrustum(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::Frustum result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Frustum _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return this->_frustum = _g1;
	}
	else{
		HX_STACK_LINE(75)
		Dynamic _g2 = ::org::gameplay3d::Camera_obj::hx_Camera_getFrustum(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Frustum _g3 = this->_frustum->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_frustum = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,getFrustum,return )

::org::gameplay3d::immutable::IMatrix Camera_obj::getInverseViewMatrix( ){
	HX_STACK_FRAME("org.gameplay3d.Camera","getInverseViewMatrix",0x71538abc,"org.gameplay3d.Camera.getInverseViewMatrix","org/gameplay3d/Camera.hx",81,0x4ea7a44c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_inverseViewMatrix == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Matrix _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Matrix >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(81)
			Dynamic nativeObject = ::org::gameplay3d::Camera_obj::hx_Camera_getInverseViewMatrix(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
		HX_STACK_LINE(81)
		Dynamic _g2 = ::org::gameplay3d::Camera_obj::hx_Camera_getInverseViewMatrix(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Matrix _g3 = this->_inverseViewMatrix->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_inverseViewMatrix = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,getInverseViewMatrix,return )

::org::gameplay3d::immutable::IMatrix Camera_obj::getInverseViewProjectionMatrix( ){
	HX_STACK_FRAME("org.gameplay3d.Camera","getInverseViewProjectionMatrix",0xe815646b,"org.gameplay3d.Camera.getInverseViewProjectionMatrix","org/gameplay3d/Camera.hx",87,0x4ea7a44c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_inverseViewProjectionMatrix == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Matrix _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Matrix >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(87)
			Dynamic nativeObject = ::org::gameplay3d::Camera_obj::hx_Camera_getInverseViewProjectionMatrix(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
		HX_STACK_LINE(87)
		Dynamic _g2 = ::org::gameplay3d::Camera_obj::hx_Camera_getInverseViewProjectionMatrix(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Matrix _g3 = this->_inverseViewProjectionMatrix->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_inverseViewProjectionMatrix = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,getInverseViewProjectionMatrix,return )

Float Camera_obj::getNearPlane( ){
	HX_STACK_FRAME("org.gameplay3d.Camera","getNearPlane",0x4d8366ba,"org.gameplay3d.Camera.getNearPlane","org/gameplay3d/Camera.hx",93,0x4ea7a44c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(93)
	return ::org::gameplay3d::Camera_obj::hx_Camera_getNearPlane(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,getNearPlane,return )

::org::gameplay3d::Node Camera_obj::getNode( ){
	HX_STACK_FRAME("org.gameplay3d.Camera","getNode",0xe7fe715c,"org.gameplay3d.Camera.getNode","org/gameplay3d/Camera.hx",99,0x4ea7a44c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(99)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Node >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(99)
	Dynamic nativeObject = ::org::gameplay3d::Camera_obj::hx_Camera_getNode(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(99)
	if (((nativeObject == null()))){
		HX_STACK_LINE(99)
		return null();
	}
	else{
		HX_STACK_LINE(99)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(99)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(99)
			::org::gameplay3d::Node result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(99)
			if (((result == null()))){
				HX_STACK_LINE(99)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(99)
				::org::gameplay3d::Node _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(99)
				result = _g;
				HX_STACK_LINE(99)
				ref->set(result);
			}
			HX_STACK_LINE(99)
			return result;
		}
		else{
			HX_STACK_LINE(99)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(99)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(99)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,getNode,return )

::org::gameplay3d::immutable::IMatrix Camera_obj::getProjectionMatrix( ){
	HX_STACK_FRAME("org.gameplay3d.Camera","getProjectionMatrix",0x05da8e8a,"org.gameplay3d.Camera.getProjectionMatrix","org/gameplay3d/Camera.hx",105,0x4ea7a44c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_projectionMatrix == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Matrix _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Matrix >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(105)
			Dynamic nativeObject = ::org::gameplay3d::Camera_obj::hx_Camera_getProjectionMatrix(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
		HX_STACK_LINE(105)
		Dynamic _g2 = ::org::gameplay3d::Camera_obj::hx_Camera_getProjectionMatrix(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Matrix _g3 = this->_projectionMatrix->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_projectionMatrix = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,getProjectionMatrix,return )

::org::gameplay3d::immutable::IMatrix Camera_obj::getViewMatrix( ){
	HX_STACK_FRAME("org.gameplay3d.Camera","getViewMatrix",0x0c5c9d60,"org.gameplay3d.Camera.getViewMatrix","org/gameplay3d/Camera.hx",111,0x4ea7a44c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_viewMatrix == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Matrix _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Matrix >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(111)
			Dynamic nativeObject = ::org::gameplay3d::Camera_obj::hx_Camera_getViewMatrix(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
		HX_STACK_LINE(111)
		Dynamic _g2 = ::org::gameplay3d::Camera_obj::hx_Camera_getViewMatrix(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Matrix _g3 = this->_viewMatrix->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_viewMatrix = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,getViewMatrix,return )

::org::gameplay3d::immutable::IMatrix Camera_obj::getViewProjectionMatrix( ){
	HX_STACK_FRAME("org.gameplay3d.Camera","getViewProjectionMatrix",0x3a65ac0f,"org.gameplay3d.Camera.getViewProjectionMatrix","org/gameplay3d/Camera.hx",117,0x4ea7a44c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_viewProjectionMatrix == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Matrix _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Matrix >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(117)
			Dynamic nativeObject = ::org::gameplay3d::Camera_obj::hx_Camera_getViewProjectionMatrix(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
		HX_STACK_LINE(117)
		Dynamic _g2 = ::org::gameplay3d::Camera_obj::hx_Camera_getViewProjectionMatrix(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Matrix _g3 = this->_viewProjectionMatrix->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_viewProjectionMatrix = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,getViewProjectionMatrix,return )

Float Camera_obj::getZoomX( ){
	HX_STACK_FRAME("org.gameplay3d.Camera","getZoomX",0xff7c154b,"org.gameplay3d.Camera.getZoomX","org/gameplay3d/Camera.hx",123,0x4ea7a44c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(123)
	return ::org::gameplay3d::Camera_obj::hx_Camera_getZoomX(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,getZoomX,return )

Float Camera_obj::getZoomY( ){
	HX_STACK_FRAME("org.gameplay3d.Camera","getZoomY",0xff7c154c,"org.gameplay3d.Camera.getZoomY","org/gameplay3d/Camera.hx",129,0x4ea7a44c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(129)
	return ::org::gameplay3d::Camera_obj::hx_Camera_getZoomY(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,getZoomY,return )

Void Camera_obj::pickRay( ::org::gameplay3d::immutable::IRectangle viewport,Float x,Float y,::org::gameplay3d::Ray dst){
{
		HX_STACK_FRAME("org.gameplay3d.Camera","pickRay",0x40f25f2d,"org.gameplay3d.Camera.pickRay","org/gameplay3d/Camera.hx",135,0x4ea7a44c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(viewport,"viewport")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(135)
		::org::gameplay3d::Camera_obj::hx_Camera_pickRay(this->nativeObject,(  (((viewport == null()))) ? Dynamic(null()) : Dynamic(viewport->__Field(HX_CSTRING("nativeObject"),true)) ),x,y,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Camera_obj,pickRay,(void))

Void Camera_obj::project( ::org::gameplay3d::immutable::IRectangle viewport,::org::gameplay3d::immutable::IVector3 position,Dynamic x,Dynamic y,Dynamic depth){
{
		HX_STACK_FRAME("org.gameplay3d.Camera","project",0xc25cca7d,"org.gameplay3d.Camera.project","org/gameplay3d/Camera.hx",141,0x4ea7a44c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(viewport,"viewport")
		HX_STACK_ARG(position,"position")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(depth,"depth")
		HX_STACK_LINE(141)
		::org::gameplay3d::Camera_obj::hx_Camera_project(this->nativeObject,(  (((viewport == null()))) ? Dynamic(null()) : Dynamic(viewport->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((position == null()))) ? Dynamic(null()) : Dynamic(position->__Field(HX_CSTRING("nativeObject"),true)) ),x,y,depth);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Camera_obj,project,(void))

Void Camera_obj::setAspectRatio( Float aspectRatio){
{
		HX_STACK_FRAME("org.gameplay3d.Camera","setAspectRatio",0x6d16606d,"org.gameplay3d.Camera.setAspectRatio","org/gameplay3d/Camera.hx",147,0x4ea7a44c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(aspectRatio,"aspectRatio")
		HX_STACK_LINE(147)
		::org::gameplay3d::Camera_obj::hx_Camera_setAspectRatio(this->nativeObject,aspectRatio);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,setAspectRatio,(void))

Void Camera_obj::setFarPlane( Float farPlane){
{
		HX_STACK_FRAME("org.gameplay3d.Camera","setFarPlane",0xc3572b6b,"org.gameplay3d.Camera.setFarPlane","org/gameplay3d/Camera.hx",153,0x4ea7a44c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(farPlane,"farPlane")
		HX_STACK_LINE(153)
		::org::gameplay3d::Camera_obj::hx_Camera_setFarPlane(this->nativeObject,farPlane);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,setFarPlane,(void))

Void Camera_obj::setFieldOfView( Float fieldOfView){
{
		HX_STACK_FRAME("org.gameplay3d.Camera","setFieldOfView",0xc99e67d0,"org.gameplay3d.Camera.setFieldOfView","org/gameplay3d/Camera.hx",159,0x4ea7a44c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(fieldOfView,"fieldOfView")
		HX_STACK_LINE(159)
		::org::gameplay3d::Camera_obj::hx_Camera_setFieldOfView(this->nativeObject,fieldOfView);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,setFieldOfView,(void))

Void Camera_obj::setNearPlane( Float nearPlane){
{
		HX_STACK_FRAME("org.gameplay3d.Camera","setNearPlane",0x627c8a2e,"org.gameplay3d.Camera.setNearPlane","org/gameplay3d/Camera.hx",165,0x4ea7a44c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(nearPlane,"nearPlane")
		HX_STACK_LINE(165)
		::org::gameplay3d::Camera_obj::hx_Camera_setNearPlane(this->nativeObject,nearPlane);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,setNearPlane,(void))

Void Camera_obj::setZoomX( Float zoomX){
{
		HX_STACK_FRAME("org.gameplay3d.Camera","setZoomX",0xadd96ebf,"org.gameplay3d.Camera.setZoomX","org/gameplay3d/Camera.hx",171,0x4ea7a44c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(zoomX,"zoomX")
		HX_STACK_LINE(171)
		::org::gameplay3d::Camera_obj::hx_Camera_setZoomX(this->nativeObject,zoomX);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,setZoomX,(void))

Void Camera_obj::setZoomY( Float zoomY){
{
		HX_STACK_FRAME("org.gameplay3d.Camera","setZoomY",0xadd96ec0,"org.gameplay3d.Camera.setZoomY","org/gameplay3d/Camera.hx",177,0x4ea7a44c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(zoomY,"zoomY")
		HX_STACK_LINE(177)
		::org::gameplay3d::Camera_obj::hx_Camera_setZoomY(this->nativeObject,zoomY);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,setZoomY,(void))

Void Camera_obj::unproject( ::org::gameplay3d::immutable::IRectangle viewport,Float x,Float y,Float depth,::org::gameplay3d::Vector3 dst){
{
		HX_STACK_FRAME("org.gameplay3d.Camera","unproject",0x07f70244,"org.gameplay3d.Camera.unproject","org/gameplay3d/Camera.hx",183,0x4ea7a44c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(viewport,"viewport")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(depth,"depth")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(183)
		::org::gameplay3d::Camera_obj::hx_Camera_unproject(this->nativeObject,(  (((viewport == null()))) ? Dynamic(null()) : Dynamic(viewport->__Field(HX_CSTRING("nativeObject"),true)) ),x,y,depth,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Camera_obj,unproject,(void))

::org::gameplay3d::Camera Camera_obj::create( ::org::gameplay3d::Properties properties){
	HX_STACK_FRAME("org.gameplay3d.Camera","create",0xaae56fd8,"org.gameplay3d.Camera.create","org/gameplay3d/Camera.hx",33,0x4ea7a44c)
	HX_STACK_ARG(properties,"properties")
	HX_STACK_LINE(33)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Camera >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(33)
	Dynamic nativeObject = ::org::gameplay3d::Camera_obj::hx_Camera_static_create((  (((properties == null()))) ? Dynamic(null()) : Dynamic(properties->nativeObject) ));		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(33)
	if (((nativeObject == null()))){
		HX_STACK_LINE(33)
		return null();
	}
	else{
		HX_STACK_LINE(33)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(33)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(33)
			::org::gameplay3d::Camera result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(33)
			if (((result == null()))){
				HX_STACK_LINE(33)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(33)
				::org::gameplay3d::Camera _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(33)
				result = _g;
				HX_STACK_LINE(33)
				ref->set(result);
			}
			HX_STACK_LINE(33)
			return result;
		}
		else{
			HX_STACK_LINE(33)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(33)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(33)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,create,return )

::org::gameplay3d::Camera Camera_obj::createOrthographic( Float zoomX,Float zoomY,Float aspectRatio,Float nearPlane,Float farPlane){
	HX_STACK_FRAME("org.gameplay3d.Camera","createOrthographic",0x01103a68,"org.gameplay3d.Camera.createOrthographic","org/gameplay3d/Camera.hx",39,0x4ea7a44c)
	HX_STACK_ARG(zoomX,"zoomX")
	HX_STACK_ARG(zoomY,"zoomY")
	HX_STACK_ARG(aspectRatio,"aspectRatio")
	HX_STACK_ARG(nearPlane,"nearPlane")
	HX_STACK_ARG(farPlane,"farPlane")
	HX_STACK_LINE(39)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Camera >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(39)
	Dynamic nativeObject = ::org::gameplay3d::Camera_obj::hx_Camera_static_createOrthographic(zoomX,zoomY,aspectRatio,nearPlane,farPlane);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(39)
	if (((nativeObject == null()))){
		HX_STACK_LINE(39)
		return null();
	}
	else{
		HX_STACK_LINE(39)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(39)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(39)
			::org::gameplay3d::Camera result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(39)
			if (((result == null()))){
				HX_STACK_LINE(39)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(39)
				::org::gameplay3d::Camera _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(39)
				result = _g;
				HX_STACK_LINE(39)
				ref->set(result);
			}
			HX_STACK_LINE(39)
			return result;
		}
		else{
			HX_STACK_LINE(39)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(39)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(39)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Camera_obj,createOrthographic,return )

::org::gameplay3d::Camera Camera_obj::createPerspective( Float fieldOfView,Float aspectRatio,Float nearPlane,Float farPlane){
	HX_STACK_FRAME("org.gameplay3d.Camera","createPerspective",0xc46bec84,"org.gameplay3d.Camera.createPerspective","org/gameplay3d/Camera.hx",45,0x4ea7a44c)
	HX_STACK_ARG(fieldOfView,"fieldOfView")
	HX_STACK_ARG(aspectRatio,"aspectRatio")
	HX_STACK_ARG(nearPlane,"nearPlane")
	HX_STACK_ARG(farPlane,"farPlane")
	HX_STACK_LINE(45)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Camera >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(45)
	Dynamic nativeObject = ::org::gameplay3d::Camera_obj::hx_Camera_static_createPerspective(fieldOfView,aspectRatio,nearPlane,farPlane);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(45)
	if (((nativeObject == null()))){
		HX_STACK_LINE(45)
		return null();
	}
	else{
		HX_STACK_LINE(45)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(45)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(45)
			::org::gameplay3d::Camera result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(45)
			if (((result == null()))){
				HX_STACK_LINE(45)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(45)
				::org::gameplay3d::Camera _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(45)
				result = _g;
				HX_STACK_LINE(45)
				ref->set(result);
			}
			HX_STACK_LINE(45)
			return result;
		}
		else{
			HX_STACK_LINE(45)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(45)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(45)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Camera_obj,createPerspective,return )

Dynamic Camera_obj::hx_Camera_static_create;

Dynamic Camera_obj::hx_Camera_static_createOrthographic;

Dynamic Camera_obj::hx_Camera_static_createPerspective;

Dynamic Camera_obj::hx_Camera_getAspectRatio;

Dynamic Camera_obj::hx_Camera_getCameraType;

Dynamic Camera_obj::hx_Camera_getFarPlane;

Dynamic Camera_obj::hx_Camera_getFieldOfView;

Dynamic Camera_obj::hx_Camera_getFrustum;

Dynamic Camera_obj::hx_Camera_getInverseViewMatrix;

Dynamic Camera_obj::hx_Camera_getInverseViewProjectionMatrix;

Dynamic Camera_obj::hx_Camera_getNearPlane;

Dynamic Camera_obj::hx_Camera_getNode;

Dynamic Camera_obj::hx_Camera_getProjectionMatrix;

Dynamic Camera_obj::hx_Camera_getViewMatrix;

Dynamic Camera_obj::hx_Camera_getViewProjectionMatrix;

Dynamic Camera_obj::hx_Camera_getZoomX;

Dynamic Camera_obj::hx_Camera_getZoomY;

Dynamic Camera_obj::hx_Camera_pickRay;

Dynamic Camera_obj::hx_Camera_project;

Dynamic Camera_obj::hx_Camera_setAspectRatio;

Dynamic Camera_obj::hx_Camera_setFarPlane;

Dynamic Camera_obj::hx_Camera_setFieldOfView;

Dynamic Camera_obj::hx_Camera_setNearPlane;

Dynamic Camera_obj::hx_Camera_setZoomX;

Dynamic Camera_obj::hx_Camera_setZoomY;

Dynamic Camera_obj::hx_Camera_unproject;


Camera_obj::Camera_obj()
{
}

void Camera_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Camera);
	HX_MARK_MEMBER_NAME(_inverseViewMatrix,"_inverseViewMatrix");
	HX_MARK_MEMBER_NAME(_inverseViewProjectionMatrix,"_inverseViewProjectionMatrix");
	HX_MARK_MEMBER_NAME(_projectionMatrix,"_projectionMatrix");
	HX_MARK_MEMBER_NAME(_viewMatrix,"_viewMatrix");
	HX_MARK_MEMBER_NAME(_viewProjectionMatrix,"_viewProjectionMatrix");
	HX_MARK_MEMBER_NAME(_frustum,"_frustum");
	::org::gameplay3d::intern::NativeBinding_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Camera_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_inverseViewMatrix,"_inverseViewMatrix");
	HX_VISIT_MEMBER_NAME(_inverseViewProjectionMatrix,"_inverseViewProjectionMatrix");
	HX_VISIT_MEMBER_NAME(_projectionMatrix,"_projectionMatrix");
	HX_VISIT_MEMBER_NAME(_viewMatrix,"_viewMatrix");
	HX_VISIT_MEMBER_NAME(_viewProjectionMatrix,"_viewProjectionMatrix");
	HX_VISIT_MEMBER_NAME(_frustum,"_frustum");
	::org::gameplay3d::intern::NativeBinding_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Camera_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getNode") ) { return getNode_dyn(); }
		if (HX_FIELD_EQ(inName,"pickRay") ) { return pickRay_dyn(); }
		if (HX_FIELD_EQ(inName,"project") ) { return project_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_frustum") ) { return _frustum; }
		if (HX_FIELD_EQ(inName,"getZoomX") ) { return getZoomX_dyn(); }
		if (HX_FIELD_EQ(inName,"getZoomY") ) { return getZoomY_dyn(); }
		if (HX_FIELD_EQ(inName,"setZoomX") ) { return setZoomX_dyn(); }
		if (HX_FIELD_EQ(inName,"setZoomY") ) { return setZoomY_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"unproject") ) { return unproject_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getFrustum") ) { return getFrustum_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_viewMatrix") ) { return _viewMatrix; }
		if (HX_FIELD_EQ(inName,"getFarPlane") ) { return getFarPlane_dyn(); }
		if (HX_FIELD_EQ(inName,"setFarPlane") ) { return setFarPlane_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getNearPlane") ) { return getNearPlane_dyn(); }
		if (HX_FIELD_EQ(inName,"setNearPlane") ) { return setNearPlane_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getCameraType") ) { return getCameraType_dyn(); }
		if (HX_FIELD_EQ(inName,"getViewMatrix") ) { return getViewMatrix_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getAspectRatio") ) { return getAspectRatio_dyn(); }
		if (HX_FIELD_EQ(inName,"getFieldOfView") ) { return getFieldOfView_dyn(); }
		if (HX_FIELD_EQ(inName,"setAspectRatio") ) { return setAspectRatio_dyn(); }
		if (HX_FIELD_EQ(inName,"setFieldOfView") ) { return setFieldOfView_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"createPerspective") ) { return createPerspective_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Camera_getNode") ) { return hx_Camera_getNode; }
		if (HX_FIELD_EQ(inName,"hx_Camera_pickRay") ) { return hx_Camera_pickRay; }
		if (HX_FIELD_EQ(inName,"hx_Camera_project") ) { return hx_Camera_project; }
		if (HX_FIELD_EQ(inName,"_projectionMatrix") ) { return _projectionMatrix; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createOrthographic") ) { return createOrthographic_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Camera_getZoomX") ) { return hx_Camera_getZoomX; }
		if (HX_FIELD_EQ(inName,"hx_Camera_getZoomY") ) { return hx_Camera_getZoomY; }
		if (HX_FIELD_EQ(inName,"hx_Camera_setZoomX") ) { return hx_Camera_setZoomX; }
		if (HX_FIELD_EQ(inName,"hx_Camera_setZoomY") ) { return hx_Camera_setZoomY; }
		if (HX_FIELD_EQ(inName,"_inverseViewMatrix") ) { return _inverseViewMatrix; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hx_Camera_unproject") ) { return hx_Camera_unproject; }
		if (HX_FIELD_EQ(inName,"getProjectionMatrix") ) { return getProjectionMatrix_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Camera_getFrustum") ) { return hx_Camera_getFrustum; }
		if (HX_FIELD_EQ(inName,"getInverseViewMatrix") ) { return getInverseViewMatrix_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hx_Camera_getFarPlane") ) { return hx_Camera_getFarPlane; }
		if (HX_FIELD_EQ(inName,"hx_Camera_setFarPlane") ) { return hx_Camera_setFarPlane; }
		if (HX_FIELD_EQ(inName,"_viewProjectionMatrix") ) { return _viewProjectionMatrix; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Camera_getNearPlane") ) { return hx_Camera_getNearPlane; }
		if (HX_FIELD_EQ(inName,"hx_Camera_setNearPlane") ) { return hx_Camera_setNearPlane; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_Camera_static_create") ) { return hx_Camera_static_create; }
		if (HX_FIELD_EQ(inName,"hx_Camera_getCameraType") ) { return hx_Camera_getCameraType; }
		if (HX_FIELD_EQ(inName,"hx_Camera_getViewMatrix") ) { return hx_Camera_getViewMatrix; }
		if (HX_FIELD_EQ(inName,"getViewProjectionMatrix") ) { return getViewProjectionMatrix_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_Camera_getAspectRatio") ) { return hx_Camera_getAspectRatio; }
		if (HX_FIELD_EQ(inName,"hx_Camera_getFieldOfView") ) { return hx_Camera_getFieldOfView; }
		if (HX_FIELD_EQ(inName,"hx_Camera_setAspectRatio") ) { return hx_Camera_setAspectRatio; }
		if (HX_FIELD_EQ(inName,"hx_Camera_setFieldOfView") ) { return hx_Camera_setFieldOfView; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"_inverseViewProjectionMatrix") ) { return _inverseViewProjectionMatrix; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_Camera_getProjectionMatrix") ) { return hx_Camera_getProjectionMatrix; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"hx_Camera_getInverseViewMatrix") ) { return hx_Camera_getInverseViewMatrix; }
		if (HX_FIELD_EQ(inName,"getInverseViewProjectionMatrix") ) { return getInverseViewProjectionMatrix_dyn(); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"hx_Camera_getViewProjectionMatrix") ) { return hx_Camera_getViewProjectionMatrix; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"hx_Camera_static_createPerspective") ) { return hx_Camera_static_createPerspective; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"hx_Camera_static_createOrthographic") ) { return hx_Camera_static_createOrthographic; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"hx_Camera_getInverseViewProjectionMatrix") ) { return hx_Camera_getInverseViewProjectionMatrix; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Camera_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_frustum") ) { _frustum=inValue.Cast< ::org::gameplay3d::Frustum >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_viewMatrix") ) { _viewMatrix=inValue.Cast< ::org::gameplay3d::Matrix >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"hx_Camera_getNode") ) { hx_Camera_getNode=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Camera_pickRay") ) { hx_Camera_pickRay=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Camera_project") ) { hx_Camera_project=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_projectionMatrix") ) { _projectionMatrix=inValue.Cast< ::org::gameplay3d::Matrix >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hx_Camera_getZoomX") ) { hx_Camera_getZoomX=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Camera_getZoomY") ) { hx_Camera_getZoomY=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Camera_setZoomX") ) { hx_Camera_setZoomX=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Camera_setZoomY") ) { hx_Camera_setZoomY=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_inverseViewMatrix") ) { _inverseViewMatrix=inValue.Cast< ::org::gameplay3d::Matrix >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hx_Camera_unproject") ) { hx_Camera_unproject=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Camera_getFrustum") ) { hx_Camera_getFrustum=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hx_Camera_getFarPlane") ) { hx_Camera_getFarPlane=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Camera_setFarPlane") ) { hx_Camera_setFarPlane=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_viewProjectionMatrix") ) { _viewProjectionMatrix=inValue.Cast< ::org::gameplay3d::Matrix >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Camera_getNearPlane") ) { hx_Camera_getNearPlane=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Camera_setNearPlane") ) { hx_Camera_setNearPlane=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_Camera_static_create") ) { hx_Camera_static_create=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Camera_getCameraType") ) { hx_Camera_getCameraType=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Camera_getViewMatrix") ) { hx_Camera_getViewMatrix=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_Camera_getAspectRatio") ) { hx_Camera_getAspectRatio=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Camera_getFieldOfView") ) { hx_Camera_getFieldOfView=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Camera_setAspectRatio") ) { hx_Camera_setAspectRatio=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Camera_setFieldOfView") ) { hx_Camera_setFieldOfView=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"_inverseViewProjectionMatrix") ) { _inverseViewProjectionMatrix=inValue.Cast< ::org::gameplay3d::Matrix >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_Camera_getProjectionMatrix") ) { hx_Camera_getProjectionMatrix=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"hx_Camera_getInverseViewMatrix") ) { hx_Camera_getInverseViewMatrix=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"hx_Camera_getViewProjectionMatrix") ) { hx_Camera_getViewProjectionMatrix=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"hx_Camera_static_createPerspective") ) { hx_Camera_static_createPerspective=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"hx_Camera_static_createOrthographic") ) { hx_Camera_static_createOrthographic=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"hx_Camera_getInverseViewProjectionMatrix") ) { hx_Camera_getInverseViewProjectionMatrix=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Camera_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_inverseViewMatrix"));
	outFields->push(HX_CSTRING("_inverseViewProjectionMatrix"));
	outFields->push(HX_CSTRING("_projectionMatrix"));
	outFields->push(HX_CSTRING("_viewMatrix"));
	outFields->push(HX_CSTRING("_viewProjectionMatrix"));
	outFields->push(HX_CSTRING("_frustum"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create"),
	HX_CSTRING("createOrthographic"),
	HX_CSTRING("createPerspective"),
	HX_CSTRING("hx_Camera_static_create"),
	HX_CSTRING("hx_Camera_static_createOrthographic"),
	HX_CSTRING("hx_Camera_static_createPerspective"),
	HX_CSTRING("hx_Camera_getAspectRatio"),
	HX_CSTRING("hx_Camera_getCameraType"),
	HX_CSTRING("hx_Camera_getFarPlane"),
	HX_CSTRING("hx_Camera_getFieldOfView"),
	HX_CSTRING("hx_Camera_getFrustum"),
	HX_CSTRING("hx_Camera_getInverseViewMatrix"),
	HX_CSTRING("hx_Camera_getInverseViewProjectionMatrix"),
	HX_CSTRING("hx_Camera_getNearPlane"),
	HX_CSTRING("hx_Camera_getNode"),
	HX_CSTRING("hx_Camera_getProjectionMatrix"),
	HX_CSTRING("hx_Camera_getViewMatrix"),
	HX_CSTRING("hx_Camera_getViewProjectionMatrix"),
	HX_CSTRING("hx_Camera_getZoomX"),
	HX_CSTRING("hx_Camera_getZoomY"),
	HX_CSTRING("hx_Camera_pickRay"),
	HX_CSTRING("hx_Camera_project"),
	HX_CSTRING("hx_Camera_setAspectRatio"),
	HX_CSTRING("hx_Camera_setFarPlane"),
	HX_CSTRING("hx_Camera_setFieldOfView"),
	HX_CSTRING("hx_Camera_setNearPlane"),
	HX_CSTRING("hx_Camera_setZoomX"),
	HX_CSTRING("hx_Camera_setZoomY"),
	HX_CSTRING("hx_Camera_unproject"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::org::gameplay3d::Matrix*/ ,(int)offsetof(Camera_obj,_inverseViewMatrix),HX_CSTRING("_inverseViewMatrix")},
	{hx::fsObject /*::org::gameplay3d::Matrix*/ ,(int)offsetof(Camera_obj,_inverseViewProjectionMatrix),HX_CSTRING("_inverseViewProjectionMatrix")},
	{hx::fsObject /*::org::gameplay3d::Matrix*/ ,(int)offsetof(Camera_obj,_projectionMatrix),HX_CSTRING("_projectionMatrix")},
	{hx::fsObject /*::org::gameplay3d::Matrix*/ ,(int)offsetof(Camera_obj,_viewMatrix),HX_CSTRING("_viewMatrix")},
	{hx::fsObject /*::org::gameplay3d::Matrix*/ ,(int)offsetof(Camera_obj,_viewProjectionMatrix),HX_CSTRING("_viewProjectionMatrix")},
	{hx::fsObject /*::org::gameplay3d::Frustum*/ ,(int)offsetof(Camera_obj,_frustum),HX_CSTRING("_frustum")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_inverseViewMatrix"),
	HX_CSTRING("_inverseViewProjectionMatrix"),
	HX_CSTRING("_projectionMatrix"),
	HX_CSTRING("_viewMatrix"),
	HX_CSTRING("_viewProjectionMatrix"),
	HX_CSTRING("_frustum"),
	HX_CSTRING("getAspectRatio"),
	HX_CSTRING("getCameraType"),
	HX_CSTRING("getFarPlane"),
	HX_CSTRING("getFieldOfView"),
	HX_CSTRING("getFrustum"),
	HX_CSTRING("getInverseViewMatrix"),
	HX_CSTRING("getInverseViewProjectionMatrix"),
	HX_CSTRING("getNearPlane"),
	HX_CSTRING("getNode"),
	HX_CSTRING("getProjectionMatrix"),
	HX_CSTRING("getViewMatrix"),
	HX_CSTRING("getViewProjectionMatrix"),
	HX_CSTRING("getZoomX"),
	HX_CSTRING("getZoomY"),
	HX_CSTRING("pickRay"),
	HX_CSTRING("project"),
	HX_CSTRING("setAspectRatio"),
	HX_CSTRING("setFarPlane"),
	HX_CSTRING("setFieldOfView"),
	HX_CSTRING("setNearPlane"),
	HX_CSTRING("setZoomX"),
	HX_CSTRING("setZoomY"),
	HX_CSTRING("unproject"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Camera_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Camera_obj::hx_Camera_static_create,"hx_Camera_static_create");
	HX_MARK_MEMBER_NAME(Camera_obj::hx_Camera_static_createOrthographic,"hx_Camera_static_createOrthographic");
	HX_MARK_MEMBER_NAME(Camera_obj::hx_Camera_static_createPerspective,"hx_Camera_static_createPerspective");
	HX_MARK_MEMBER_NAME(Camera_obj::hx_Camera_getAspectRatio,"hx_Camera_getAspectRatio");
	HX_MARK_MEMBER_NAME(Camera_obj::hx_Camera_getCameraType,"hx_Camera_getCameraType");
	HX_MARK_MEMBER_NAME(Camera_obj::hx_Camera_getFarPlane,"hx_Camera_getFarPlane");
	HX_MARK_MEMBER_NAME(Camera_obj::hx_Camera_getFieldOfView,"hx_Camera_getFieldOfView");
	HX_MARK_MEMBER_NAME(Camera_obj::hx_Camera_getFrustum,"hx_Camera_getFrustum");
	HX_MARK_MEMBER_NAME(Camera_obj::hx_Camera_getInverseViewMatrix,"hx_Camera_getInverseViewMatrix");
	HX_MARK_MEMBER_NAME(Camera_obj::hx_Camera_getInverseViewProjectionMatrix,"hx_Camera_getInverseViewProjectionMatrix");
	HX_MARK_MEMBER_NAME(Camera_obj::hx_Camera_getNearPlane,"hx_Camera_getNearPlane");
	HX_MARK_MEMBER_NAME(Camera_obj::hx_Camera_getNode,"hx_Camera_getNode");
	HX_MARK_MEMBER_NAME(Camera_obj::hx_Camera_getProjectionMatrix,"hx_Camera_getProjectionMatrix");
	HX_MARK_MEMBER_NAME(Camera_obj::hx_Camera_getViewMatrix,"hx_Camera_getViewMatrix");
	HX_MARK_MEMBER_NAME(Camera_obj::hx_Camera_getViewProjectionMatrix,"hx_Camera_getViewProjectionMatrix");
	HX_MARK_MEMBER_NAME(Camera_obj::hx_Camera_getZoomX,"hx_Camera_getZoomX");
	HX_MARK_MEMBER_NAME(Camera_obj::hx_Camera_getZoomY,"hx_Camera_getZoomY");
	HX_MARK_MEMBER_NAME(Camera_obj::hx_Camera_pickRay,"hx_Camera_pickRay");
	HX_MARK_MEMBER_NAME(Camera_obj::hx_Camera_project,"hx_Camera_project");
	HX_MARK_MEMBER_NAME(Camera_obj::hx_Camera_setAspectRatio,"hx_Camera_setAspectRatio");
	HX_MARK_MEMBER_NAME(Camera_obj::hx_Camera_setFarPlane,"hx_Camera_setFarPlane");
	HX_MARK_MEMBER_NAME(Camera_obj::hx_Camera_setFieldOfView,"hx_Camera_setFieldOfView");
	HX_MARK_MEMBER_NAME(Camera_obj::hx_Camera_setNearPlane,"hx_Camera_setNearPlane");
	HX_MARK_MEMBER_NAME(Camera_obj::hx_Camera_setZoomX,"hx_Camera_setZoomX");
	HX_MARK_MEMBER_NAME(Camera_obj::hx_Camera_setZoomY,"hx_Camera_setZoomY");
	HX_MARK_MEMBER_NAME(Camera_obj::hx_Camera_unproject,"hx_Camera_unproject");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Camera_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Camera_obj::hx_Camera_static_create,"hx_Camera_static_create");
	HX_VISIT_MEMBER_NAME(Camera_obj::hx_Camera_static_createOrthographic,"hx_Camera_static_createOrthographic");
	HX_VISIT_MEMBER_NAME(Camera_obj::hx_Camera_static_createPerspective,"hx_Camera_static_createPerspective");
	HX_VISIT_MEMBER_NAME(Camera_obj::hx_Camera_getAspectRatio,"hx_Camera_getAspectRatio");
	HX_VISIT_MEMBER_NAME(Camera_obj::hx_Camera_getCameraType,"hx_Camera_getCameraType");
	HX_VISIT_MEMBER_NAME(Camera_obj::hx_Camera_getFarPlane,"hx_Camera_getFarPlane");
	HX_VISIT_MEMBER_NAME(Camera_obj::hx_Camera_getFieldOfView,"hx_Camera_getFieldOfView");
	HX_VISIT_MEMBER_NAME(Camera_obj::hx_Camera_getFrustum,"hx_Camera_getFrustum");
	HX_VISIT_MEMBER_NAME(Camera_obj::hx_Camera_getInverseViewMatrix,"hx_Camera_getInverseViewMatrix");
	HX_VISIT_MEMBER_NAME(Camera_obj::hx_Camera_getInverseViewProjectionMatrix,"hx_Camera_getInverseViewProjectionMatrix");
	HX_VISIT_MEMBER_NAME(Camera_obj::hx_Camera_getNearPlane,"hx_Camera_getNearPlane");
	HX_VISIT_MEMBER_NAME(Camera_obj::hx_Camera_getNode,"hx_Camera_getNode");
	HX_VISIT_MEMBER_NAME(Camera_obj::hx_Camera_getProjectionMatrix,"hx_Camera_getProjectionMatrix");
	HX_VISIT_MEMBER_NAME(Camera_obj::hx_Camera_getViewMatrix,"hx_Camera_getViewMatrix");
	HX_VISIT_MEMBER_NAME(Camera_obj::hx_Camera_getViewProjectionMatrix,"hx_Camera_getViewProjectionMatrix");
	HX_VISIT_MEMBER_NAME(Camera_obj::hx_Camera_getZoomX,"hx_Camera_getZoomX");
	HX_VISIT_MEMBER_NAME(Camera_obj::hx_Camera_getZoomY,"hx_Camera_getZoomY");
	HX_VISIT_MEMBER_NAME(Camera_obj::hx_Camera_pickRay,"hx_Camera_pickRay");
	HX_VISIT_MEMBER_NAME(Camera_obj::hx_Camera_project,"hx_Camera_project");
	HX_VISIT_MEMBER_NAME(Camera_obj::hx_Camera_setAspectRatio,"hx_Camera_setAspectRatio");
	HX_VISIT_MEMBER_NAME(Camera_obj::hx_Camera_setFarPlane,"hx_Camera_setFarPlane");
	HX_VISIT_MEMBER_NAME(Camera_obj::hx_Camera_setFieldOfView,"hx_Camera_setFieldOfView");
	HX_VISIT_MEMBER_NAME(Camera_obj::hx_Camera_setNearPlane,"hx_Camera_setNearPlane");
	HX_VISIT_MEMBER_NAME(Camera_obj::hx_Camera_setZoomX,"hx_Camera_setZoomX");
	HX_VISIT_MEMBER_NAME(Camera_obj::hx_Camera_setZoomY,"hx_Camera_setZoomY");
	HX_VISIT_MEMBER_NAME(Camera_obj::hx_Camera_unproject,"hx_Camera_unproject");
};

#endif

Class Camera_obj::__mClass;

void Camera_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.Camera"), hx::TCanCast< Camera_obj> ,sStaticFields,sMemberFields,
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

void Camera_obj::__boot()
{
	hx_Camera_static_create= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Camera >(),HX_CSTRING("static_create"),(int)1);
	hx_Camera_static_createOrthographic= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Camera >(),HX_CSTRING("static_createOrthographic"),(int)5);
	hx_Camera_static_createPerspective= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Camera >(),HX_CSTRING("static_createPerspective"),(int)4);
	hx_Camera_getAspectRatio= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Camera >(),HX_CSTRING("getAspectRatio"),(int)1);
	hx_Camera_getCameraType= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Camera >(),HX_CSTRING("getCameraType"),(int)1);
	hx_Camera_getFarPlane= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Camera >(),HX_CSTRING("getFarPlane"),(int)1);
	hx_Camera_getFieldOfView= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Camera >(),HX_CSTRING("getFieldOfView"),(int)1);
	hx_Camera_getFrustum= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Camera >(),HX_CSTRING("getFrustum"),(int)1);
	hx_Camera_getInverseViewMatrix= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Camera >(),HX_CSTRING("getInverseViewMatrix"),(int)1);
	hx_Camera_getInverseViewProjectionMatrix= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Camera >(),HX_CSTRING("getInverseViewProjectionMatrix"),(int)1);
	hx_Camera_getNearPlane= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Camera >(),HX_CSTRING("getNearPlane"),(int)1);
	hx_Camera_getNode= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Camera >(),HX_CSTRING("getNode"),(int)1);
	hx_Camera_getProjectionMatrix= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Camera >(),HX_CSTRING("getProjectionMatrix"),(int)1);
	hx_Camera_getViewMatrix= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Camera >(),HX_CSTRING("getViewMatrix"),(int)1);
	hx_Camera_getViewProjectionMatrix= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Camera >(),HX_CSTRING("getViewProjectionMatrix"),(int)1);
	hx_Camera_getZoomX= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Camera >(),HX_CSTRING("getZoomX"),(int)1);
	hx_Camera_getZoomY= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Camera >(),HX_CSTRING("getZoomY"),(int)1);
	hx_Camera_pickRay= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Camera >(),HX_CSTRING("pickRay"),(int)5);
	hx_Camera_project= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Camera >(),HX_CSTRING("project"),(int)-1);
	hx_Camera_setAspectRatio= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Camera >(),HX_CSTRING("setAspectRatio"),(int)2);
	hx_Camera_setFarPlane= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Camera >(),HX_CSTRING("setFarPlane"),(int)2);
	hx_Camera_setFieldOfView= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Camera >(),HX_CSTRING("setFieldOfView"),(int)2);
	hx_Camera_setNearPlane= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Camera >(),HX_CSTRING("setNearPlane"),(int)2);
	hx_Camera_setZoomX= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Camera >(),HX_CSTRING("setZoomX"),(int)2);
	hx_Camera_setZoomY= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Camera >(),HX_CSTRING("setZoomY"),(int)2);
	hx_Camera_unproject= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Camera >(),HX_CSTRING("unproject"),(int)-1);
}

} // end namespace org
} // end namespace gameplay3d
