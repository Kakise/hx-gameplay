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
#ifndef INCLUDED_org_gameplay3d_AnimationValue
#include <org/gameplay3d/AnimationValue.h>
#endif
#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Matrix
#include <org/gameplay3d/Matrix.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Quaternion
#include <org/gameplay3d/Quaternion.h>
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
#ifndef INCLUDED_org_gameplay3d_immutable_IMatrix
#include <org/gameplay3d/immutable/IMatrix.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IQuaternion
#include <org/gameplay3d/immutable/IQuaternion.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IVector3
#include <org/gameplay3d/immutable/IVector3.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_INativeBinding
#include <org/gameplay3d/intern/INativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_ListenerWrapper
#include <org/gameplay3d/intern/ListenerWrapper.h>
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
#ifndef INCLUDED_org_gameplay3d_wrapper_Transform_ListenerWrapper
#include <org/gameplay3d/wrapper/Transform_ListenerWrapper.h>
#endif
namespace org{
namespace gameplay3d{

Void Transform_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.Transform","new",0xdc7e9e91,"org.gameplay3d.Transform.new","org/gameplay3d/Transform.hx",18,0xc19d7b9f)
HX_STACK_THIS(this)
HX_STACK_ARG(nativeObjectInitializer,"nativeObjectInitializer")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(18)
	super::__construct(nativeObjectInitializer,nativeObjectInitializerParams);
}
;
	return null();
}

//Transform_obj::~Transform_obj() { }

Dynamic Transform_obj::__CreateEmpty() { return  new Transform_obj; }
hx::ObjectPtr< Transform_obj > Transform_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< Transform_obj > result = new Transform_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic Transform_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Transform_obj > result = new Transform_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Transform_obj::addListener( ::org::gameplay3d::wrapper::Transform_ListenerWrapper listener,hx::Null< int >  __o_cookie){
int cookie = __o_cookie.Default(0);
	HX_STACK_FRAME("org.gameplay3d.Transform","addListener",0x226c1ee6,"org.gameplay3d.Transform.addListener","org/gameplay3d/Transform.hx",81,0xc19d7b9f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(cookie,"cookie")
{
		HX_STACK_LINE(81)
		::org::gameplay3d::Transform_obj::hx_Transform_addListener(this->nativeObject,(  (((listener == null()))) ? Dynamic(null()) : Dynamic(listener->nativeObject) ),cookie);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Transform_obj,addListener,(void))

int Transform_obj::getAnimationPropertyComponentCount( int propertyId){
	HX_STACK_FRAME("org.gameplay3d.Transform","getAnimationPropertyComponentCount",0xc7459724,"org.gameplay3d.Transform.getAnimationPropertyComponentCount","org/gameplay3d/Transform.hx",87,0xc19d7b9f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(propertyId,"propertyId")
	HX_STACK_LINE(87)
	return ::org::gameplay3d::Transform_obj::hx_Transform_getAnimationPropertyComponentCount(this->nativeObject,propertyId);
}


Void Transform_obj::getAnimationPropertyValue( int propertyId,::org::gameplay3d::AnimationValue value){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","getAnimationPropertyValue",0xb9da315f,"org.gameplay3d.Transform.getAnimationPropertyValue","org/gameplay3d/Transform.hx",93,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(propertyId,"propertyId")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(93)
		::org::gameplay3d::Transform_obj::hx_Transform_getAnimationPropertyValue(this->nativeObject,propertyId,(  (((value == null()))) ? Dynamic(null()) : Dynamic(value->nativeObject) ));
	}
return null();
}


::org::gameplay3d::Vector3 Transform_obj::getBackVector( ){
	HX_STACK_FRAME("org.gameplay3d.Transform","getBackVector",0x4be4c7f1,"org.gameplay3d.Transform.getBackVector","org/gameplay3d/Transform.hx",99,0xc19d7b9f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_backVector == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(99)
			Dynamic nativeObject = ::org::gameplay3d::Transform_obj::hx_Transform_getBackVector(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
		return this->_backVector = _g1;
	}
	else{
		HX_STACK_LINE(99)
		Dynamic _g2 = ::org::gameplay3d::Transform_obj::hx_Transform_getBackVector(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g3 = this->_backVector->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_backVector = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,getBackVector,return )

Void Transform_obj::getBackVector_V3( ::org::gameplay3d::Vector3 dst){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","getBackVector_V3",0x63a665eb,"org.gameplay3d.Transform.getBackVector_V3","org/gameplay3d/Transform.hx",105,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(105)
		::org::gameplay3d::Transform_obj::hx_Transform_getBackVector_V3(this->nativeObject,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,getBackVector_V3,(void))

::org::gameplay3d::Vector3 Transform_obj::getDownVector( ){
	HX_STACK_FRAME("org.gameplay3d.Transform","getDownVector",0x4a5ec46c,"org.gameplay3d.Transform.getDownVector","org/gameplay3d/Transform.hx",111,0xc19d7b9f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_downVector == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(111)
			Dynamic nativeObject = ::org::gameplay3d::Transform_obj::hx_Transform_getDownVector(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
		return this->_downVector = _g1;
	}
	else{
		HX_STACK_LINE(111)
		Dynamic _g2 = ::org::gameplay3d::Transform_obj::hx_Transform_getDownVector(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g3 = this->_downVector->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_downVector = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,getDownVector,return )

Void Transform_obj::getDownVector_V3( ::org::gameplay3d::Vector3 dst){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","getDownVector_V3",0xd9df2850,"org.gameplay3d.Transform.getDownVector_V3","org/gameplay3d/Transform.hx",117,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(117)
		::org::gameplay3d::Transform_obj::hx_Transform_getDownVector_V3(this->nativeObject,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,getDownVector_V3,(void))

::org::gameplay3d::Vector3 Transform_obj::getForwardVector( ){
	HX_STACK_FRAME("org.gameplay3d.Transform","getForwardVector",0xfa9a3921,"org.gameplay3d.Transform.getForwardVector","org/gameplay3d/Transform.hx",123,0xc19d7b9f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_forwardVector == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(123)
			Dynamic nativeObject = ::org::gameplay3d::Transform_obj::hx_Transform_getForwardVector(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
		return this->_forwardVector = _g1;
	}
	else{
		HX_STACK_LINE(123)
		Dynamic _g2 = ::org::gameplay3d::Transform_obj::hx_Transform_getForwardVector(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g3 = this->_forwardVector->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_forwardVector = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,getForwardVector,return )

Void Transform_obj::getForwardVector_V3( ::org::gameplay3d::Vector3 dst){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","getForwardVector_V3",0xe4e7d2bb,"org.gameplay3d.Transform.getForwardVector_V3","org/gameplay3d/Transform.hx",129,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(129)
		::org::gameplay3d::Transform_obj::hx_Transform_getForwardVector_V3(this->nativeObject,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,getForwardVector_V3,(void))

::org::gameplay3d::Vector3 Transform_obj::getLeftVector( ){
	HX_STACK_FRAME("org.gameplay3d.Transform","getLeftVector",0x3c6b9dd1,"org.gameplay3d.Transform.getLeftVector","org/gameplay3d/Transform.hx",135,0xc19d7b9f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_leftVector == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(135)
			Dynamic nativeObject = ::org::gameplay3d::Transform_obj::hx_Transform_getLeftVector(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
		return this->_leftVector = _g1;
	}
	else{
		HX_STACK_LINE(135)
		Dynamic _g2 = ::org::gameplay3d::Transform_obj::hx_Transform_getLeftVector(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g3 = this->_leftVector->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_leftVector = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,getLeftVector,return )

Void Transform_obj::getLeftVector_V3( ::org::gameplay3d::Vector3 dst){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","getLeftVector_V3",0x69627c0b,"org.gameplay3d.Transform.getLeftVector_V3","org/gameplay3d/Transform.hx",141,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(141)
		::org::gameplay3d::Transform_obj::hx_Transform_getLeftVector_V3(this->nativeObject,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,getLeftVector_V3,(void))

::org::gameplay3d::immutable::IMatrix Transform_obj::getMatrix( ){
	HX_STACK_FRAME("org.gameplay3d.Transform","getMatrix",0xcaf3c868,"org.gameplay3d.Transform.getMatrix","org/gameplay3d/Transform.hx",147,0xc19d7b9f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_matrix == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Matrix _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Matrix >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(147)
			Dynamic nativeObject = ::org::gameplay3d::Transform_obj::hx_Transform_getMatrix(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
		return this->_matrix = _g1;
	}
	else{
		HX_STACK_LINE(147)
		Dynamic _g2 = ::org::gameplay3d::Transform_obj::hx_Transform_getMatrix(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Matrix _g3 = this->_matrix->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_matrix = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,getMatrix,return )

::org::gameplay3d::Vector3 Transform_obj::getRightVector( ){
	HX_STACK_FRAME("org.gameplay3d.Transform","getRightVector",0xc870be38,"org.gameplay3d.Transform.getRightVector","org/gameplay3d/Transform.hx",153,0xc19d7b9f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_rightVector == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(153)
			Dynamic nativeObject = ::org::gameplay3d::Transform_obj::hx_Transform_getRightVector(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
		return this->_rightVector = _g1;
	}
	else{
		HX_STACK_LINE(153)
		Dynamic _g2 = ::org::gameplay3d::Transform_obj::hx_Transform_getRightVector(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g3 = this->_rightVector->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_rightVector = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,getRightVector,return )

Void Transform_obj::getRightVector_V3( ::org::gameplay3d::Vector3 dst){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","getRightVector_V3",0xd9665604,"org.gameplay3d.Transform.getRightVector_V3","org/gameplay3d/Transform.hx",159,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(159)
		::org::gameplay3d::Transform_obj::hx_Transform_getRightVector_V3(this->nativeObject,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,getRightVector_V3,(void))

::org::gameplay3d::immutable::IQuaternion Transform_obj::getRotation( ){
	HX_STACK_FRAME("org.gameplay3d.Transform","getRotation",0xe757e725,"org.gameplay3d.Transform.getRotation","org/gameplay3d/Transform.hx",165,0xc19d7b9f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_rotation == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Quaternion _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Quaternion >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(165)
			Dynamic nativeObject = ::org::gameplay3d::Transform_obj::hx_Transform_getRotation(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::Quaternion result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Quaternion _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return this->_rotation = _g1;
	}
	else{
		HX_STACK_LINE(165)
		Dynamic _g2 = ::org::gameplay3d::Transform_obj::hx_Transform_getRotation(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Quaternion _g3 = this->_rotation->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_rotation = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,getRotation,return )

Float Transform_obj::getRotation_V3( ::org::gameplay3d::Vector3 axis){
	HX_STACK_FRAME("org.gameplay3d.Transform","getRotation_V3",0xd20fbf37,"org.gameplay3d.Transform.getRotation_V3","org/gameplay3d/Transform.hx",171,0xc19d7b9f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(axis,"axis")
	HX_STACK_LINE(171)
	return ::org::gameplay3d::Transform_obj::hx_Transform_getRotation_V3(this->nativeObject,(  (((axis == null()))) ? Dynamic(null()) : Dynamic(axis->nativeObject) ));
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,getRotation_V3,return )

Void Transform_obj::getRotation_Mat( ::org::gameplay3d::Matrix rotation){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","getRotation_Mat",0xfbb0e526,"org.gameplay3d.Transform.getRotation_Mat","org/gameplay3d/Transform.hx",177,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rotation,"rotation")
		HX_STACK_LINE(177)
		::org::gameplay3d::Transform_obj::hx_Transform_getRotation_Mat(this->nativeObject,(  (((rotation == null()))) ? Dynamic(null()) : Dynamic(rotation->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,getRotation_Mat,(void))

Void Transform_obj::getRotation_Qtrn( ::org::gameplay3d::Quaternion rotation){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","getRotation_Qtrn",0x41cae019,"org.gameplay3d.Transform.getRotation_Qtrn","org/gameplay3d/Transform.hx",183,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rotation,"rotation")
		HX_STACK_LINE(183)
		::org::gameplay3d::Transform_obj::hx_Transform_getRotation_Qtrn(this->nativeObject,(  (((rotation == null()))) ? Dynamic(null()) : Dynamic(rotation->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,getRotation_Qtrn,(void))

::org::gameplay3d::immutable::IVector3 Transform_obj::getScale( ){
	HX_STACK_FRAME("org.gameplay3d.Transform","getScale",0xc00cfe43,"org.gameplay3d.Transform.getScale","org/gameplay3d/Transform.hx",189,0xc19d7b9f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_scale == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(189)
			Dynamic nativeObject = ::org::gameplay3d::Transform_obj::hx_Transform_getScale(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
		return this->_scale = _g1;
	}
	else{
		HX_STACK_LINE(189)
		Dynamic _g2 = ::org::gameplay3d::Transform_obj::hx_Transform_getScale(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g3 = this->_scale->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_scale = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,getScale,return )

Void Transform_obj::getScale_V3( ::org::gameplay3d::Vector3 scale){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","getScale_V3",0xe0376ed9,"org.gameplay3d.Transform.getScale_V3","org/gameplay3d/Transform.hx",195,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(scale,"scale")
		HX_STACK_LINE(195)
		::org::gameplay3d::Transform_obj::hx_Transform_getScale_V3(this->nativeObject,(  (((scale == null()))) ? Dynamic(null()) : Dynamic(scale->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,getScale_V3,(void))

Float Transform_obj::getScaleX( ){
	HX_STACK_FRAME("org.gameplay3d.Transform","getScaleX",0x4b517cb5,"org.gameplay3d.Transform.getScaleX","org/gameplay3d/Transform.hx",201,0xc19d7b9f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(201)
	return ::org::gameplay3d::Transform_obj::hx_Transform_getScaleX(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,getScaleX,return )

Float Transform_obj::getScaleY( ){
	HX_STACK_FRAME("org.gameplay3d.Transform","getScaleY",0x4b517cb6,"org.gameplay3d.Transform.getScaleY","org/gameplay3d/Transform.hx",207,0xc19d7b9f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(207)
	return ::org::gameplay3d::Transform_obj::hx_Transform_getScaleY(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,getScaleY,return )

Float Transform_obj::getScaleZ( ){
	HX_STACK_FRAME("org.gameplay3d.Transform","getScaleZ",0x4b517cb7,"org.gameplay3d.Transform.getScaleZ","org/gameplay3d/Transform.hx",213,0xc19d7b9f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(213)
	return ::org::gameplay3d::Transform_obj::hx_Transform_getScaleZ(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,getScaleZ,return )

::org::gameplay3d::immutable::IVector3 Transform_obj::getTranslation( ){
	HX_STACK_FRAME("org.gameplay3d.Transform","getTranslation",0x5230716a,"org.gameplay3d.Transform.getTranslation","org/gameplay3d/Transform.hx",219,0xc19d7b9f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_translation == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(219)
			Dynamic nativeObject = ::org::gameplay3d::Transform_obj::hx_Transform_getTranslation(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
		return this->_translation = _g1;
	}
	else{
		HX_STACK_LINE(219)
		Dynamic _g2 = ::org::gameplay3d::Transform_obj::hx_Transform_getTranslation(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g3 = this->_translation->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_translation = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,getTranslation,return )

Void Transform_obj::getTranslation_V3( ::org::gameplay3d::Vector3 translation){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","getTranslation_V3",0x23452e12,"org.gameplay3d.Transform.getTranslation_V3","org/gameplay3d/Transform.hx",225,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(translation,"translation")
		HX_STACK_LINE(225)
		::org::gameplay3d::Transform_obj::hx_Transform_getTranslation_V3(this->nativeObject,(  (((translation == null()))) ? Dynamic(null()) : Dynamic(translation->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,getTranslation_V3,(void))

Float Transform_obj::getTranslationX( ){
	HX_STACK_FRAME("org.gameplay3d.Transform","getTranslationX",0x9832cbae,"org.gameplay3d.Transform.getTranslationX","org/gameplay3d/Transform.hx",231,0xc19d7b9f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(231)
	return ::org::gameplay3d::Transform_obj::hx_Transform_getTranslationX(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,getTranslationX,return )

Float Transform_obj::getTranslationY( ){
	HX_STACK_FRAME("org.gameplay3d.Transform","getTranslationY",0x9832cbaf,"org.gameplay3d.Transform.getTranslationY","org/gameplay3d/Transform.hx",237,0xc19d7b9f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(237)
	return ::org::gameplay3d::Transform_obj::hx_Transform_getTranslationY(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,getTranslationY,return )

Float Transform_obj::getTranslationZ( ){
	HX_STACK_FRAME("org.gameplay3d.Transform","getTranslationZ",0x9832cbb0,"org.gameplay3d.Transform.getTranslationZ","org/gameplay3d/Transform.hx",243,0xc19d7b9f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(243)
	return ::org::gameplay3d::Transform_obj::hx_Transform_getTranslationZ(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,getTranslationZ,return )

::org::gameplay3d::Vector3 Transform_obj::getUpVector( ){
	HX_STACK_FRAME("org.gameplay3d.Transform","getUpVector",0x0035eb65,"org.gameplay3d.Transform.getUpVector","org/gameplay3d/Transform.hx",249,0xc19d7b9f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_upVector == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(249)
			Dynamic nativeObject = ::org::gameplay3d::Transform_obj::hx_Transform_getUpVector(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
		return this->_upVector = _g1;
	}
	else{
		HX_STACK_LINE(249)
		Dynamic _g2 = ::org::gameplay3d::Transform_obj::hx_Transform_getUpVector(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g3 = this->_upVector->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_upVector = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,getUpVector,return )

Void Transform_obj::getUpVector_V3( ::org::gameplay3d::Vector3 dst){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","getUpVector_V3",0xe719e2f7,"org.gameplay3d.Transform.getUpVector_V3","org/gameplay3d/Transform.hx",255,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(255)
		::org::gameplay3d::Transform_obj::hx_Transform_getUpVector_V3(this->nativeObject,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,getUpVector_V3,(void))

Void Transform_obj::removeListener( ::org::gameplay3d::wrapper::Transform_ListenerWrapper listener){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","removeListener",0x42782a47,"org.gameplay3d.Transform.removeListener","org/gameplay3d/Transform.hx",267,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(listener,"listener")
		HX_STACK_LINE(267)
		::org::gameplay3d::Transform_obj::hx_Transform_removeListener(this->nativeObject,(  (((listener == null()))) ? Dynamic(null()) : Dynamic(listener->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,removeListener,(void))

Void Transform_obj::rotate_Mat( ::org::gameplay3d::immutable::IMatrix rotation){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","rotate_Mat",0x73cae14b,"org.gameplay3d.Transform.rotate_Mat","org/gameplay3d/Transform.hx",279,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rotation,"rotation")
		HX_STACK_LINE(279)
		::org::gameplay3d::Transform_obj::hx_Transform_rotate_Mat(this->nativeObject,(  (((rotation == null()))) ? Dynamic(null()) : Dynamic(rotation->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,rotate_Mat,(void))

Void Transform_obj::rotate_Qtrn( ::org::gameplay3d::immutable::IQuaternion rotation){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","rotate_Qtrn",0xe06d8454,"org.gameplay3d.Transform.rotate_Qtrn","org/gameplay3d/Transform.hx",285,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rotation,"rotation")
		HX_STACK_LINE(285)
		::org::gameplay3d::Transform_obj::hx_Transform_rotate_Qtrn(this->nativeObject,(  (((rotation == null()))) ? Dynamic(null()) : Dynamic(rotation->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,rotate_Qtrn,(void))

Void Transform_obj::rotate_V3_Flt( ::org::gameplay3d::immutable::IVector3 axis,Float angle){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","rotate_V3_Flt",0x80265101,"org.gameplay3d.Transform.rotate_V3_Flt","org/gameplay3d/Transform.hx",291,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(angle,"angle")
		HX_STACK_LINE(291)
		::org::gameplay3d::Transform_obj::hx_Transform_rotate_V3_Flt(this->nativeObject,(  (((axis == null()))) ? Dynamic(null()) : Dynamic(axis->__Field(HX_CSTRING("nativeObject"),true)) ),angle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Transform_obj,rotate_V3_Flt,(void))

Void Transform_obj::rotate_FltX4( Float qx,Float qy,Float qz,Float qw){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","rotate_FltX4",0x24b5a035,"org.gameplay3d.Transform.rotate_FltX4","org/gameplay3d/Transform.hx",297,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(qx,"qx")
		HX_STACK_ARG(qy,"qy")
		HX_STACK_ARG(qz,"qz")
		HX_STACK_ARG(qw,"qw")
		HX_STACK_LINE(297)
		::org::gameplay3d::Transform_obj::hx_Transform_rotate_FltX4(this->nativeObject,qx,qy,qz,qw);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Transform_obj,rotate_FltX4,(void))

Void Transform_obj::rotateX( Float angle){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","rotateX",0xec69844e,"org.gameplay3d.Transform.rotateX","org/gameplay3d/Transform.hx",303,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(angle,"angle")
		HX_STACK_LINE(303)
		::org::gameplay3d::Transform_obj::hx_Transform_rotateX(this->nativeObject,angle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,rotateX,(void))

Void Transform_obj::rotateY( Float angle){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","rotateY",0xec69844f,"org.gameplay3d.Transform.rotateY","org/gameplay3d/Transform.hx",309,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(angle,"angle")
		HX_STACK_LINE(309)
		::org::gameplay3d::Transform_obj::hx_Transform_rotateY(this->nativeObject,angle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,rotateY,(void))

Void Transform_obj::rotateZ( Float angle){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","rotateZ",0xec698450,"org.gameplay3d.Transform.rotateZ","org/gameplay3d/Transform.hx",315,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(angle,"angle")
		HX_STACK_LINE(315)
		::org::gameplay3d::Transform_obj::hx_Transform_rotateZ(this->nativeObject,angle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,rotateZ,(void))

Void Transform_obj::scale_V3( ::org::gameplay3d::immutable::IVector3 scale){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","scale_V3",0xe8cce521,"org.gameplay3d.Transform.scale_V3","org/gameplay3d/Transform.hx",321,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(scale,"scale")
		HX_STACK_LINE(321)
		::org::gameplay3d::Transform_obj::hx_Transform_scale_V3(this->nativeObject,(  (((scale == null()))) ? Dynamic(null()) : Dynamic(scale->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,scale_V3,(void))

Void Transform_obj::scale_Flt( Float scale){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","scale_Flt",0xca6fa5ca,"org.gameplay3d.Transform.scale_Flt","org/gameplay3d/Transform.hx",327,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(scale,"scale")
		HX_STACK_LINE(327)
		::org::gameplay3d::Transform_obj::hx_Transform_scale_Flt(this->nativeObject,scale);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,scale_Flt,(void))

Void Transform_obj::scale_FltX3( Float sx,Float sy,Float sz){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","scale_FltX3",0x01fc7925,"org.gameplay3d.Transform.scale_FltX3","org/gameplay3d/Transform.hx",333,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sx,"sx")
		HX_STACK_ARG(sy,"sy")
		HX_STACK_ARG(sz,"sz")
		HX_STACK_LINE(333)
		::org::gameplay3d::Transform_obj::hx_Transform_scale_FltX3(this->nativeObject,sx,sy,sz);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Transform_obj,scale_FltX3,(void))

Void Transform_obj::scaleX( Float sx){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","scaleX",0x209350fd,"org.gameplay3d.Transform.scaleX","org/gameplay3d/Transform.hx",339,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sx,"sx")
		HX_STACK_LINE(339)
		::org::gameplay3d::Transform_obj::hx_Transform_scaleX(this->nativeObject,sx);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,scaleX,(void))

Void Transform_obj::scaleY( Float sy){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","scaleY",0x209350fe,"org.gameplay3d.Transform.scaleY","org/gameplay3d/Transform.hx",345,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sy,"sy")
		HX_STACK_LINE(345)
		::org::gameplay3d::Transform_obj::hx_Transform_scaleY(this->nativeObject,sy);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,scaleY,(void))

Void Transform_obj::scaleZ( Float sz){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","scaleZ",0x209350ff,"org.gameplay3d.Transform.scaleZ","org/gameplay3d/Transform.hx",351,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sz,"sz")
		HX_STACK_LINE(351)
		::org::gameplay3d::Transform_obj::hx_Transform_scaleZ(this->nativeObject,sz);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,scaleZ,(void))

Void Transform_obj::set_Trans( ::org::gameplay3d::Transform transform){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","set_Trans",0x631c595c,"org.gameplay3d.Transform.set_Trans","org/gameplay3d/Transform.hx",357,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transform,"transform")
		HX_STACK_LINE(357)
		::org::gameplay3d::Transform_obj::hx_Transform_set_Trans(this->nativeObject,(  (((transform == null()))) ? Dynamic(null()) : Dynamic(transform->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_Trans,(void))

Void Transform_obj::set_V3_Mat_V3( ::org::gameplay3d::immutable::IVector3 scale,::org::gameplay3d::immutable::IMatrix rotation,::org::gameplay3d::immutable::IVector3 translation){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","set_V3_Mat_V3",0xc0dfce32,"org.gameplay3d.Transform.set_V3_Mat_V3","org/gameplay3d/Transform.hx",363,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(scale,"scale")
		HX_STACK_ARG(rotation,"rotation")
		HX_STACK_ARG(translation,"translation")
		HX_STACK_LINE(363)
		::org::gameplay3d::Transform_obj::hx_Transform_set_V3_Mat_V3(this->nativeObject,(  (((scale == null()))) ? Dynamic(null()) : Dynamic(scale->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((rotation == null()))) ? Dynamic(null()) : Dynamic(rotation->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((translation == null()))) ? Dynamic(null()) : Dynamic(translation->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Transform_obj,set_V3_Mat_V3,(void))

Void Transform_obj::set_V3_Qtrn_V3( ::org::gameplay3d::immutable::IVector3 scale,::org::gameplay3d::immutable::IQuaternion rotation,::org::gameplay3d::immutable::IVector3 translation){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","set_V3_Qtrn_V3",0x253650e7,"org.gameplay3d.Transform.set_V3_Qtrn_V3","org/gameplay3d/Transform.hx",369,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(scale,"scale")
		HX_STACK_ARG(rotation,"rotation")
		HX_STACK_ARG(translation,"translation")
		HX_STACK_LINE(369)
		::org::gameplay3d::Transform_obj::hx_Transform_set_V3_Qtrn_V3(this->nativeObject,(  (((scale == null()))) ? Dynamic(null()) : Dynamic(scale->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((rotation == null()))) ? Dynamic(null()) : Dynamic(rotation->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((translation == null()))) ? Dynamic(null()) : Dynamic(translation->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Transform_obj,set_V3_Qtrn_V3,(void))

Void Transform_obj::set_V3X2_Flt_V3( ::org::gameplay3d::immutable::IVector3 scale,::org::gameplay3d::immutable::IVector3 axis,Float angle,::org::gameplay3d::immutable::IVector3 translation){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","set_V3X2_Flt_V3",0x9ebf6f4a,"org.gameplay3d.Transform.set_V3X2_Flt_V3","org/gameplay3d/Transform.hx",375,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(scale,"scale")
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(angle,"angle")
		HX_STACK_ARG(translation,"translation")
		HX_STACK_LINE(375)
		::org::gameplay3d::Transform_obj::hx_Transform_set_V3X2_Flt_V3(this->nativeObject,(  (((scale == null()))) ? Dynamic(null()) : Dynamic(scale->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((axis == null()))) ? Dynamic(null()) : Dynamic(axis->__Field(HX_CSTRING("nativeObject"),true)) ),angle,(  (((translation == null()))) ? Dynamic(null()) : Dynamic(translation->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Transform_obj,set_V3X2_Flt_V3,(void))

Void Transform_obj::setAnimationPropertyValue( int propertyId,::org::gameplay3d::AnimationValue value,hx::Null< Float >  __o_blendWeight){
Float blendWeight = __o_blendWeight.Default(1.0);
	HX_STACK_FRAME("org.gameplay3d.Transform","setAnimationPropertyValue",0x2630f56b,"org.gameplay3d.Transform.setAnimationPropertyValue","org/gameplay3d/Transform.hx",381,0xc19d7b9f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(propertyId,"propertyId")
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(blendWeight,"blendWeight")
{
		HX_STACK_LINE(381)
		::org::gameplay3d::Transform_obj::hx_Transform_setAnimationPropertyValue(this->nativeObject,propertyId,(  (((value == null()))) ? Dynamic(null()) : Dynamic(value->nativeObject) ),blendWeight);
	}
return null();
}


Void Transform_obj::setIdentity( ){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","setIdentity",0xa26df631,"org.gameplay3d.Transform.setIdentity","org/gameplay3d/Transform.hx",387,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(387)
		::org::gameplay3d::Transform_obj::hx_Transform_setIdentity(this->nativeObject);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,setIdentity,(void))

Void Transform_obj::setRotation_Mat( ::org::gameplay3d::immutable::IMatrix rotation){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","setRotation_Mat",0xf77c6232,"org.gameplay3d.Transform.setRotation_Mat","org/gameplay3d/Transform.hx",393,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rotation,"rotation")
		HX_STACK_LINE(393)
		::org::gameplay3d::Transform_obj::hx_Transform_setRotation_Mat(this->nativeObject,(  (((rotation == null()))) ? Dynamic(null()) : Dynamic(rotation->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,setRotation_Mat,(void))

Void Transform_obj::setRotation_Qtrn( ::org::gameplay3d::immutable::IQuaternion rotation){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","setRotation_Qtrn",0x980ccd8d,"org.gameplay3d.Transform.setRotation_Qtrn","org/gameplay3d/Transform.hx",399,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rotation,"rotation")
		HX_STACK_LINE(399)
		::org::gameplay3d::Transform_obj::hx_Transform_setRotation_Qtrn(this->nativeObject,(  (((rotation == null()))) ? Dynamic(null()) : Dynamic(rotation->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,setRotation_Qtrn,(void))

Void Transform_obj::setRotation_V3_Flt( ::org::gameplay3d::immutable::IVector3 axis,Float angle){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","setRotation_V3_Flt",0xd5151a7a,"org.gameplay3d.Transform.setRotation_V3_Flt","org/gameplay3d/Transform.hx",405,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(angle,"angle")
		HX_STACK_LINE(405)
		::org::gameplay3d::Transform_obj::hx_Transform_setRotation_V3_Flt(this->nativeObject,(  (((axis == null()))) ? Dynamic(null()) : Dynamic(axis->__Field(HX_CSTRING("nativeObject"),true)) ),angle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Transform_obj,setRotation_V3_Flt,(void))

Void Transform_obj::setRotation_FltX4( Float qx,Float qy,Float qz,Float qw){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","setRotation_FltX4",0x187668dc,"org.gameplay3d.Transform.setRotation_FltX4","org/gameplay3d/Transform.hx",411,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(qx,"qx")
		HX_STACK_ARG(qy,"qy")
		HX_STACK_ARG(qz,"qz")
		HX_STACK_ARG(qw,"qw")
		HX_STACK_LINE(411)
		::org::gameplay3d::Transform_obj::hx_Transform_setRotation_FltX4(this->nativeObject,qx,qy,qz,qw);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Transform_obj,setRotation_FltX4,(void))

Void Transform_obj::setScale_V3( ::org::gameplay3d::immutable::IVector3 scale){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","setScale_V3",0xeaa475e5,"org.gameplay3d.Transform.setScale_V3","org/gameplay3d/Transform.hx",417,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(scale,"scale")
		HX_STACK_LINE(417)
		::org::gameplay3d::Transform_obj::hx_Transform_setScale_V3(this->nativeObject,(  (((scale == null()))) ? Dynamic(null()) : Dynamic(scale->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,setScale_V3,(void))

Void Transform_obj::setScale_Flt( Float scale){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","setScale_Flt",0x6536c086,"org.gameplay3d.Transform.setScale_Flt","org/gameplay3d/Transform.hx",423,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(scale,"scale")
		HX_STACK_LINE(423)
		::org::gameplay3d::Transform_obj::hx_Transform_setScale_Flt(this->nativeObject,scale);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,setScale_Flt,(void))

Void Transform_obj::setScale_FltX3( Float sx,Float sy,Float sz){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","setScale_FltX3",0x30ccbae1,"org.gameplay3d.Transform.setScale_FltX3","org/gameplay3d/Transform.hx",429,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sx,"sx")
		HX_STACK_ARG(sy,"sy")
		HX_STACK_ARG(sz,"sz")
		HX_STACK_LINE(429)
		::org::gameplay3d::Transform_obj::hx_Transform_setScale_FltX3(this->nativeObject,sx,sy,sz);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Transform_obj,setScale_FltX3,(void))

Void Transform_obj::setScaleX( Float sx){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","setScaleX",0x2ea268c1,"org.gameplay3d.Transform.setScaleX","org/gameplay3d/Transform.hx",435,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sx,"sx")
		HX_STACK_LINE(435)
		::org::gameplay3d::Transform_obj::hx_Transform_setScaleX(this->nativeObject,sx);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,setScaleX,(void))

Void Transform_obj::setScaleY( Float sy){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","setScaleY",0x2ea268c2,"org.gameplay3d.Transform.setScaleY","org/gameplay3d/Transform.hx",441,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sy,"sy")
		HX_STACK_LINE(441)
		::org::gameplay3d::Transform_obj::hx_Transform_setScaleY(this->nativeObject,sy);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,setScaleY,(void))

Void Transform_obj::setScaleZ( Float sz){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","setScaleZ",0x2ea268c3,"org.gameplay3d.Transform.setScaleZ","org/gameplay3d/Transform.hx",447,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sz,"sz")
		HX_STACK_LINE(447)
		::org::gameplay3d::Transform_obj::hx_Transform_setScaleZ(this->nativeObject,sz);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,setScaleZ,(void))

Void Transform_obj::setTranslation_V3( ::org::gameplay3d::immutable::IVector3 translation){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","setTranslation_V3",0x46b3061e,"org.gameplay3d.Transform.setTranslation_V3","org/gameplay3d/Transform.hx",453,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(translation,"translation")
		HX_STACK_LINE(453)
		::org::gameplay3d::Transform_obj::hx_Transform_setTranslation_V3(this->nativeObject,(  (((translation == null()))) ? Dynamic(null()) : Dynamic(translation->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,setTranslation_V3,(void))

Void Transform_obj::setTranslation_FltX3( Float tx,Float ty,Float tz){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","setTranslation_FltX3",0xa5e55448,"org.gameplay3d.Transform.setTranslation_FltX3","org/gameplay3d/Transform.hx",459,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tx,"tx")
		HX_STACK_ARG(ty,"ty")
		HX_STACK_ARG(tz,"tz")
		HX_STACK_LINE(459)
		::org::gameplay3d::Transform_obj::hx_Transform_setTranslation_FltX3(this->nativeObject,tx,ty,tz);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Transform_obj,setTranslation_FltX3,(void))

Void Transform_obj::setTranslationX( Float tx){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","setTranslationX",0x93fe48ba,"org.gameplay3d.Transform.setTranslationX","org/gameplay3d/Transform.hx",465,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tx,"tx")
		HX_STACK_LINE(465)
		::org::gameplay3d::Transform_obj::hx_Transform_setTranslationX(this->nativeObject,tx);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,setTranslationX,(void))

Void Transform_obj::setTranslationY( Float ty){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","setTranslationY",0x93fe48bb,"org.gameplay3d.Transform.setTranslationY","org/gameplay3d/Transform.hx",471,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ty,"ty")
		HX_STACK_LINE(471)
		::org::gameplay3d::Transform_obj::hx_Transform_setTranslationY(this->nativeObject,ty);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,setTranslationY,(void))

Void Transform_obj::setTranslationZ( Float tz){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","setTranslationZ",0x93fe48bc,"org.gameplay3d.Transform.setTranslationZ","org/gameplay3d/Transform.hx",477,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tz,"tz")
		HX_STACK_LINE(477)
		::org::gameplay3d::Transform_obj::hx_Transform_setTranslationZ(this->nativeObject,tz);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,setTranslationZ,(void))

Void Transform_obj::transformPoint_V3( ::org::gameplay3d::Vector3 point){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","transformPoint_V3",0x94555669,"org.gameplay3d.Transform.transformPoint_V3","org/gameplay3d/Transform.hx",489,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(point,"point")
		HX_STACK_LINE(489)
		::org::gameplay3d::Transform_obj::hx_Transform_transformPoint_V3(this->nativeObject,(  (((point == null()))) ? Dynamic(null()) : Dynamic(point->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,transformPoint_V3,(void))

Void Transform_obj::transformPoint_V3X2( ::org::gameplay3d::immutable::IVector3 point,::org::gameplay3d::Vector3 dst){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","transformPoint_V3X2",0x5526cf83,"org.gameplay3d.Transform.transformPoint_V3X2","org/gameplay3d/Transform.hx",495,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(point,"point")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(495)
		::org::gameplay3d::Transform_obj::hx_Transform_transformPoint_V3X2(this->nativeObject,(  (((point == null()))) ? Dynamic(null()) : Dynamic(point->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Transform_obj,transformPoint_V3X2,(void))

Void Transform_obj::transformVector_V3( ::org::gameplay3d::Vector3 vector){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","transformVector_V3",0x843ec23c,"org.gameplay3d.Transform.transformVector_V3","org/gameplay3d/Transform.hx",501,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(vector,"vector")
		HX_STACK_LINE(501)
		::org::gameplay3d::Transform_obj::hx_Transform_transformVector_V3(this->nativeObject,(  (((vector == null()))) ? Dynamic(null()) : Dynamic(vector->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,transformVector_V3,(void))

Void Transform_obj::transformVector_V3X2( ::org::gameplay3d::immutable::IVector3 transformVector,::org::gameplay3d::Vector3 dst){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","transformVector_V3X2",0x23211616,"org.gameplay3d.Transform.transformVector_V3X2","org/gameplay3d/Transform.hx",507,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transformVector,"transformVector")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(507)
		::org::gameplay3d::Transform_obj::hx_Transform_transformVector_V3X2(this->nativeObject,(  (((transformVector == null()))) ? Dynamic(null()) : Dynamic(transformVector->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Transform_obj,transformVector_V3X2,(void))

Void Transform_obj::transformVector_FltX4_V3( Float x,Float y,Float z,Float w,::org::gameplay3d::Vector3 dst){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","transformVector_FltX4_V3",0x2834c731,"org.gameplay3d.Transform.transformVector_FltX4_V3","org/gameplay3d/Transform.hx",513,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_ARG(w,"w")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(513)
		::org::gameplay3d::Transform_obj::hx_Transform_transformVector_FltX4_V3(this->nativeObject,x,y,z,w,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Transform_obj,transformVector_FltX4_V3,(void))

Void Transform_obj::translate_V3( ::org::gameplay3d::immutable::IVector3 translation){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","translate_V3",0xc9e3f25d,"org.gameplay3d.Transform.translate_V3","org/gameplay3d/Transform.hx",519,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(translation,"translation")
		HX_STACK_LINE(519)
		::org::gameplay3d::Transform_obj::hx_Transform_translate_V3(this->nativeObject,(  (((translation == null()))) ? Dynamic(null()) : Dynamic(translation->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,translate_V3,(void))

Void Transform_obj::translate_FltX3( Float tx,Float ty,Float tz){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","translate_FltX3",0x68b45969,"org.gameplay3d.Transform.translate_FltX3","org/gameplay3d/Transform.hx",525,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tx,"tx")
		HX_STACK_ARG(ty,"ty")
		HX_STACK_ARG(tz,"tz")
		HX_STACK_LINE(525)
		::org::gameplay3d::Transform_obj::hx_Transform_translate_FltX3(this->nativeObject,tx,ty,tz);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Transform_obj,translate_FltX3,(void))

Void Transform_obj::translateForward( Float amount){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","translateForward",0x008d3f46,"org.gameplay3d.Transform.translateForward","org/gameplay3d/Transform.hx",531,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(amount,"amount")
		HX_STACK_LINE(531)
		::org::gameplay3d::Transform_obj::hx_Transform_translateForward(this->nativeObject,amount);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,translateForward,(void))

Void Transform_obj::translateLeft( Float amount){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","translateLeft",0xd10c9fe6,"org.gameplay3d.Transform.translateLeft","org/gameplay3d/Transform.hx",537,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(amount,"amount")
		HX_STACK_LINE(537)
		::org::gameplay3d::Transform_obj::hx_Transform_translateLeft(this->nativeObject,amount);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,translateLeft,(void))

Void Transform_obj::translateSmooth( ::org::gameplay3d::immutable::IVector3 target,Float elapsedTime,Float responseTime){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","translateSmooth",0x130495cd,"org.gameplay3d.Transform.translateSmooth","org/gameplay3d/Transform.hx",543,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(elapsedTime,"elapsedTime")
		HX_STACK_ARG(responseTime,"responseTime")
		HX_STACK_LINE(543)
		::org::gameplay3d::Transform_obj::hx_Transform_translateSmooth(this->nativeObject,(  (((target == null()))) ? Dynamic(null()) : Dynamic(target->__Field(HX_CSTRING("nativeObject"),true)) ),elapsedTime,responseTime);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Transform_obj,translateSmooth,(void))

Void Transform_obj::translateUp( Float amount){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","translateUp",0x437cf87a,"org.gameplay3d.Transform.translateUp","org/gameplay3d/Transform.hx",549,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(amount,"amount")
		HX_STACK_LINE(549)
		::org::gameplay3d::Transform_obj::hx_Transform_translateUp(this->nativeObject,amount);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,translateUp,(void))

Void Transform_obj::translateX( Float tx){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","translateX",0xedef5739,"org.gameplay3d.Transform.translateX","org/gameplay3d/Transform.hx",555,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tx,"tx")
		HX_STACK_LINE(555)
		::org::gameplay3d::Transform_obj::hx_Transform_translateX(this->nativeObject,tx);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,translateX,(void))

Void Transform_obj::translateY( Float ty){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","translateY",0xedef573a,"org.gameplay3d.Transform.translateY","org/gameplay3d/Transform.hx",561,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ty,"ty")
		HX_STACK_LINE(561)
		::org::gameplay3d::Transform_obj::hx_Transform_translateY(this->nativeObject,ty);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,translateY,(void))

Void Transform_obj::translateZ( Float tz){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","translateZ",0xedef573b,"org.gameplay3d.Transform.translateZ","org/gameplay3d/Transform.hx",567,0xc19d7b9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tz,"tz")
		HX_STACK_LINE(567)
		::org::gameplay3d::Transform_obj::hx_Transform_translateZ(this->nativeObject,tz);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,translateZ,(void))

int Transform_obj::ANIMATE_SCALE_UNIT;

int Transform_obj::ANIMATE_SCALE;

int Transform_obj::ANIMATE_SCALE_X;

int Transform_obj::ANIMATE_SCALE_Y;

int Transform_obj::ANIMATE_SCALE_Z;

int Transform_obj::ANIMATE_ROTATE;

int Transform_obj::ANIMATE_TRANSLATE;

int Transform_obj::ANIMATE_TRANSLATE_X;

int Transform_obj::ANIMATE_TRANSLATE_Y;

int Transform_obj::ANIMATE_TRANSLATE_Z;

int Transform_obj::ANIMATE_ROTATE_TRANSLATE;

int Transform_obj::ANIMATE_SCALE_ROTATE_TRANSLATE;

int Transform_obj::ANIMATE_SCALE_TRANSLATE;

int Transform_obj::ANIMATE_SCALE_ROTATE;

::org::gameplay3d::Transform Transform_obj::make( ){
	HX_STACK_FRAME("org.gameplay3d.Transform","make",0x119fd69d,"org.gameplay3d.Transform.make","org/gameplay3d/Transform.hx",56,0xc19d7b9f)
	HX_STACK_LINE(57)
	Dynamic _g = ::org::gameplay3d::Transform_obj::constructNativeObject();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(57)
	return ::org::gameplay3d::Transform_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,make,return )

::org::gameplay3d::Transform Transform_obj::make_Trans( ::org::gameplay3d::Transform copy){
	HX_STACK_FRAME("org.gameplay3d.Transform","make_Trans",0xaa0279a6,"org.gameplay3d.Transform.make_Trans","org/gameplay3d/Transform.hx",62,0xc19d7b9f)
	HX_STACK_ARG(copy,"copy")
	HX_STACK_LINE(63)
	Dynamic _g = ::org::gameplay3d::Transform_obj::constructNativeObject_Trans(copy);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(63)
	return ::org::gameplay3d::Transform_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,make_Trans,return )

::org::gameplay3d::Transform Transform_obj::make_V3_Mat_V3( ::org::gameplay3d::immutable::IVector3 scale,::org::gameplay3d::immutable::IMatrix rotation,::org::gameplay3d::immutable::IVector3 translation){
	HX_STACK_FRAME("org.gameplay3d.Transform","make_V3_Mat_V3",0xe0fcdb7c,"org.gameplay3d.Transform.make_V3_Mat_V3","org/gameplay3d/Transform.hx",68,0xc19d7b9f)
	HX_STACK_ARG(scale,"scale")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(translation,"translation")
	HX_STACK_LINE(69)
	Dynamic _g = ::org::gameplay3d::Transform_obj::constructNativeObject_V3_Mat_V3(scale,rotation,translation);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(69)
	return ::org::gameplay3d::Transform_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Transform_obj,make_V3_Mat_V3,return )

::org::gameplay3d::Transform Transform_obj::make_V3_Qtrn_V3( ::org::gameplay3d::immutable::IVector3 scale,::org::gameplay3d::immutable::IQuaternion rotation,::org::gameplay3d::immutable::IVector3 translation){
	HX_STACK_FRAME("org.gameplay3d.Transform","make_V3_Qtrn_V3",0x1e84e45d,"org.gameplay3d.Transform.make_V3_Qtrn_V3","org/gameplay3d/Transform.hx",74,0xc19d7b9f)
	HX_STACK_ARG(scale,"scale")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(translation,"translation")
	HX_STACK_LINE(75)
	Dynamic _g = ::org::gameplay3d::Transform_obj::constructNativeObject_V3_Qtrn_V3(scale,rotation,translation);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(75)
	return ::org::gameplay3d::Transform_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Transform_obj,make_V3_Qtrn_V3,return )

bool Transform_obj::isTransformChangedSuspended( ){
	HX_STACK_FRAME("org.gameplay3d.Transform","isTransformChangedSuspended",0x97818cba,"org.gameplay3d.Transform.isTransformChangedSuspended","org/gameplay3d/Transform.hx",261,0xc19d7b9f)
	HX_STACK_LINE(261)
	return ::org::gameplay3d::Transform_obj::hx_Transform_static_isTransformChangedSuspended();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,isTransformChangedSuspended,return )

Void Transform_obj::resumeTransformChanged( ){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","resumeTransformChanged",0xa27a1524,"org.gameplay3d.Transform.resumeTransformChanged","org/gameplay3d/Transform.hx",273,0xc19d7b9f)
		HX_STACK_LINE(273)
		::org::gameplay3d::Transform_obj::hx_Transform_static_resumeTransformChanged();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,resumeTransformChanged,(void))

Void Transform_obj::suspendTransformChanged( ){
{
		HX_STACK_FRAME("org.gameplay3d.Transform","suspendTransformChanged",0xa8a8a135,"org.gameplay3d.Transform.suspendTransformChanged","org/gameplay3d/Transform.hx",483,0xc19d7b9f)
		HX_STACK_LINE(483)
		::org::gameplay3d::Transform_obj::hx_Transform_static_suspendTransformChanged();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,suspendTransformChanged,(void))

Dynamic Transform_obj::constructNativeObject( ){
	HX_STACK_FRAME("org.gameplay3d.Transform","constructNativeObject",0x4d7ca0de,"org.gameplay3d.Transform.constructNativeObject","org/gameplay3d/Transform.hx",577,0xc19d7b9f)
	HX_STACK_LINE(577)
	return ::org::gameplay3d::Transform_obj::hx_Transform_Construct();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,constructNativeObject,return )

Dynamic Transform_obj::constructNativeObject_Trans( ::org::gameplay3d::Transform copy){
	HX_STACK_FRAME("org.gameplay3d.Transform","constructNativeObject_Trans",0xb185eaa7,"org.gameplay3d.Transform.constructNativeObject_Trans","org/gameplay3d/Transform.hx",583,0xc19d7b9f)
	HX_STACK_ARG(copy,"copy")
	HX_STACK_LINE(583)
	return ::org::gameplay3d::Transform_obj::hx_Transform_Construct_Trans(copy->nativeObject);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,constructNativeObject_Trans,return )

Dynamic Transform_obj::constructNativeObject_V3_Mat_V3( ::org::gameplay3d::immutable::IVector3 scale,::org::gameplay3d::immutable::IMatrix rotation,::org::gameplay3d::immutable::IVector3 translation){
	HX_STACK_FRAME("org.gameplay3d.Transform","constructNativeObject_V3_Mat_V3",0x40f360fd,"org.gameplay3d.Transform.constructNativeObject_V3_Mat_V3","org/gameplay3d/Transform.hx",589,0xc19d7b9f)
	HX_STACK_ARG(scale,"scale")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(translation,"translation")
	HX_STACK_LINE(589)
	return ::org::gameplay3d::Transform_obj::hx_Transform_Construct_V3_Mat_V3(scale->__Field(HX_CSTRING("nativeObject"),true),rotation->__Field(HX_CSTRING("nativeObject"),true),translation->__Field(HX_CSTRING("nativeObject"),true));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Transform_obj,constructNativeObject_V3_Mat_V3,return )

Dynamic Transform_obj::constructNativeObject_V3_Qtrn_V3( ::org::gameplay3d::immutable::IVector3 scale,::org::gameplay3d::immutable::IQuaternion rotation,::org::gameplay3d::immutable::IVector3 translation){
	HX_STACK_FRAME("org.gameplay3d.Transform","constructNativeObject_V3_Qtrn_V3",0xb6432fbc,"org.gameplay3d.Transform.constructNativeObject_V3_Qtrn_V3","org/gameplay3d/Transform.hx",595,0xc19d7b9f)
	HX_STACK_ARG(scale,"scale")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(translation,"translation")
	HX_STACK_LINE(595)
	return ::org::gameplay3d::Transform_obj::hx_Transform_Construct_V3_Qtrn_V3(scale->__Field(HX_CSTRING("nativeObject"),true),rotation->__Field(HX_CSTRING("nativeObject"),true),translation->__Field(HX_CSTRING("nativeObject"),true));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Transform_obj,constructNativeObject_V3_Qtrn_V3,return )

Dynamic Transform_obj::hx_Transform_Construct;

Dynamic Transform_obj::hx_Transform_Construct_Trans;

Dynamic Transform_obj::hx_Transform_Construct_V3_Mat_V3;

Dynamic Transform_obj::hx_Transform_Construct_V3_Qtrn_V3;

Dynamic Transform_obj::hx_Transform_addListener;

Dynamic Transform_obj::hx_Transform_getAnimationPropertyComponentCount;

Dynamic Transform_obj::hx_Transform_getAnimationPropertyValue;

Dynamic Transform_obj::hx_Transform_getBackVector;

Dynamic Transform_obj::hx_Transform_getBackVector_V3;

Dynamic Transform_obj::hx_Transform_getDownVector;

Dynamic Transform_obj::hx_Transform_getDownVector_V3;

Dynamic Transform_obj::hx_Transform_getForwardVector;

Dynamic Transform_obj::hx_Transform_getForwardVector_V3;

Dynamic Transform_obj::hx_Transform_getLeftVector;

Dynamic Transform_obj::hx_Transform_getLeftVector_V3;

Dynamic Transform_obj::hx_Transform_getMatrix;

Dynamic Transform_obj::hx_Transform_getRightVector;

Dynamic Transform_obj::hx_Transform_getRightVector_V3;

Dynamic Transform_obj::hx_Transform_getRotation;

Dynamic Transform_obj::hx_Transform_getRotation_V3;

Dynamic Transform_obj::hx_Transform_getRotation_Mat;

Dynamic Transform_obj::hx_Transform_getRotation_Qtrn;

Dynamic Transform_obj::hx_Transform_getScale;

Dynamic Transform_obj::hx_Transform_getScale_V3;

Dynamic Transform_obj::hx_Transform_getScaleX;

Dynamic Transform_obj::hx_Transform_getScaleY;

Dynamic Transform_obj::hx_Transform_getScaleZ;

Dynamic Transform_obj::hx_Transform_getTranslation;

Dynamic Transform_obj::hx_Transform_getTranslation_V3;

Dynamic Transform_obj::hx_Transform_getTranslationX;

Dynamic Transform_obj::hx_Transform_getTranslationY;

Dynamic Transform_obj::hx_Transform_getTranslationZ;

Dynamic Transform_obj::hx_Transform_getUpVector;

Dynamic Transform_obj::hx_Transform_getUpVector_V3;

Dynamic Transform_obj::hx_Transform_static_isTransformChangedSuspended;

Dynamic Transform_obj::hx_Transform_removeListener;

Dynamic Transform_obj::hx_Transform_static_resumeTransformChanged;

Dynamic Transform_obj::hx_Transform_rotate_Mat;

Dynamic Transform_obj::hx_Transform_rotate_Qtrn;

Dynamic Transform_obj::hx_Transform_rotate_V3_Flt;

Dynamic Transform_obj::hx_Transform_rotate_FltX4;

Dynamic Transform_obj::hx_Transform_rotateX;

Dynamic Transform_obj::hx_Transform_rotateY;

Dynamic Transform_obj::hx_Transform_rotateZ;

Dynamic Transform_obj::hx_Transform_scale_V3;

Dynamic Transform_obj::hx_Transform_scale_Flt;

Dynamic Transform_obj::hx_Transform_scale_FltX3;

Dynamic Transform_obj::hx_Transform_scaleX;

Dynamic Transform_obj::hx_Transform_scaleY;

Dynamic Transform_obj::hx_Transform_scaleZ;

Dynamic Transform_obj::hx_Transform_set_Trans;

Dynamic Transform_obj::hx_Transform_set_V3_Mat_V3;

Dynamic Transform_obj::hx_Transform_set_V3_Qtrn_V3;

Dynamic Transform_obj::hx_Transform_set_V3X2_Flt_V3;

Dynamic Transform_obj::hx_Transform_setAnimationPropertyValue;

Dynamic Transform_obj::hx_Transform_setIdentity;

Dynamic Transform_obj::hx_Transform_setRotation_Mat;

Dynamic Transform_obj::hx_Transform_setRotation_Qtrn;

Dynamic Transform_obj::hx_Transform_setRotation_V3_Flt;

Dynamic Transform_obj::hx_Transform_setRotation_FltX4;

Dynamic Transform_obj::hx_Transform_setScale_V3;

Dynamic Transform_obj::hx_Transform_setScale_Flt;

Dynamic Transform_obj::hx_Transform_setScale_FltX3;

Dynamic Transform_obj::hx_Transform_setScaleX;

Dynamic Transform_obj::hx_Transform_setScaleY;

Dynamic Transform_obj::hx_Transform_setScaleZ;

Dynamic Transform_obj::hx_Transform_setTranslation_V3;

Dynamic Transform_obj::hx_Transform_setTranslation_FltX3;

Dynamic Transform_obj::hx_Transform_setTranslationX;

Dynamic Transform_obj::hx_Transform_setTranslationY;

Dynamic Transform_obj::hx_Transform_setTranslationZ;

Dynamic Transform_obj::hx_Transform_static_suspendTransformChanged;

Dynamic Transform_obj::hx_Transform_transformPoint_V3;

Dynamic Transform_obj::hx_Transform_transformPoint_V3X2;

Dynamic Transform_obj::hx_Transform_transformVector_V3;

Dynamic Transform_obj::hx_Transform_transformVector_V3X2;

Dynamic Transform_obj::hx_Transform_transformVector_FltX4_V3;

Dynamic Transform_obj::hx_Transform_translate_V3;

Dynamic Transform_obj::hx_Transform_translate_FltX3;

Dynamic Transform_obj::hx_Transform_translateForward;

Dynamic Transform_obj::hx_Transform_translateLeft;

Dynamic Transform_obj::hx_Transform_translateSmooth;

Dynamic Transform_obj::hx_Transform_translateUp;

Dynamic Transform_obj::hx_Transform_translateX;

Dynamic Transform_obj::hx_Transform_translateY;

Dynamic Transform_obj::hx_Transform_translateZ;

Dynamic Transform_obj::hx_Transform_Listener_Construct;


Transform_obj::Transform_obj()
{
}

void Transform_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Transform);
	HX_MARK_MEMBER_NAME(_scale,"_scale");
	HX_MARK_MEMBER_NAME(_translation,"_translation");
	HX_MARK_MEMBER_NAME(_backVector,"_backVector");
	HX_MARK_MEMBER_NAME(_downVector,"_downVector");
	HX_MARK_MEMBER_NAME(_forwardVector,"_forwardVector");
	HX_MARK_MEMBER_NAME(_leftVector,"_leftVector");
	HX_MARK_MEMBER_NAME(_rightVector,"_rightVector");
	HX_MARK_MEMBER_NAME(_upVector,"_upVector");
	HX_MARK_MEMBER_NAME(_matrix,"_matrix");
	HX_MARK_MEMBER_NAME(_rotation,"_rotation");
	::org::gameplay3d::intern::NativeBinding_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Transform_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_scale,"_scale");
	HX_VISIT_MEMBER_NAME(_translation,"_translation");
	HX_VISIT_MEMBER_NAME(_backVector,"_backVector");
	HX_VISIT_MEMBER_NAME(_downVector,"_downVector");
	HX_VISIT_MEMBER_NAME(_forwardVector,"_forwardVector");
	HX_VISIT_MEMBER_NAME(_leftVector,"_leftVector");
	HX_VISIT_MEMBER_NAME(_rightVector,"_rightVector");
	HX_VISIT_MEMBER_NAME(_upVector,"_upVector");
	HX_VISIT_MEMBER_NAME(_matrix,"_matrix");
	HX_VISIT_MEMBER_NAME(_rotation,"_rotation");
	::org::gameplay3d::intern::NativeBinding_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Transform_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { return make_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_scale") ) { return _scale; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { return scaleX_dyn(); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { return scaleY_dyn(); }
		if (HX_FIELD_EQ(inName,"scaleZ") ) { return scaleZ_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_matrix") ) { return _matrix; }
		if (HX_FIELD_EQ(inName,"rotateX") ) { return rotateX_dyn(); }
		if (HX_FIELD_EQ(inName,"rotateY") ) { return rotateY_dyn(); }
		if (HX_FIELD_EQ(inName,"rotateZ") ) { return rotateZ_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getScale") ) { return getScale_dyn(); }
		if (HX_FIELD_EQ(inName,"scale_V3") ) { return scale_V3_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_upVector") ) { return _upVector; }
		if (HX_FIELD_EQ(inName,"_rotation") ) { return _rotation; }
		if (HX_FIELD_EQ(inName,"getMatrix") ) { return getMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"getScaleX") ) { return getScaleX_dyn(); }
		if (HX_FIELD_EQ(inName,"getScaleY") ) { return getScaleY_dyn(); }
		if (HX_FIELD_EQ(inName,"getScaleZ") ) { return getScaleZ_dyn(); }
		if (HX_FIELD_EQ(inName,"scale_Flt") ) { return scale_Flt_dyn(); }
		if (HX_FIELD_EQ(inName,"set_Trans") ) { return set_Trans_dyn(); }
		if (HX_FIELD_EQ(inName,"setScaleX") ) { return setScaleX_dyn(); }
		if (HX_FIELD_EQ(inName,"setScaleY") ) { return setScaleY_dyn(); }
		if (HX_FIELD_EQ(inName,"setScaleZ") ) { return setScaleZ_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"make_Trans") ) { return make_Trans_dyn(); }
		if (HX_FIELD_EQ(inName,"rotate_Mat") ) { return rotate_Mat_dyn(); }
		if (HX_FIELD_EQ(inName,"translateX") ) { return translateX_dyn(); }
		if (HX_FIELD_EQ(inName,"translateY") ) { return translateY_dyn(); }
		if (HX_FIELD_EQ(inName,"translateZ") ) { return translateZ_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_backVector") ) { return _backVector; }
		if (HX_FIELD_EQ(inName,"_downVector") ) { return _downVector; }
		if (HX_FIELD_EQ(inName,"_leftVector") ) { return _leftVector; }
		if (HX_FIELD_EQ(inName,"addListener") ) { return addListener_dyn(); }
		if (HX_FIELD_EQ(inName,"getRotation") ) { return getRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"getScale_V3") ) { return getScale_V3_dyn(); }
		if (HX_FIELD_EQ(inName,"getUpVector") ) { return getUpVector_dyn(); }
		if (HX_FIELD_EQ(inName,"rotate_Qtrn") ) { return rotate_Qtrn_dyn(); }
		if (HX_FIELD_EQ(inName,"scale_FltX3") ) { return scale_FltX3_dyn(); }
		if (HX_FIELD_EQ(inName,"setIdentity") ) { return setIdentity_dyn(); }
		if (HX_FIELD_EQ(inName,"setScale_V3") ) { return setScale_V3_dyn(); }
		if (HX_FIELD_EQ(inName,"translateUp") ) { return translateUp_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_translation") ) { return _translation; }
		if (HX_FIELD_EQ(inName,"_rightVector") ) { return _rightVector; }
		if (HX_FIELD_EQ(inName,"rotate_FltX4") ) { return rotate_FltX4_dyn(); }
		if (HX_FIELD_EQ(inName,"setScale_Flt") ) { return setScale_Flt_dyn(); }
		if (HX_FIELD_EQ(inName,"translate_V3") ) { return translate_V3_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getBackVector") ) { return getBackVector_dyn(); }
		if (HX_FIELD_EQ(inName,"getDownVector") ) { return getDownVector_dyn(); }
		if (HX_FIELD_EQ(inName,"getLeftVector") ) { return getLeftVector_dyn(); }
		if (HX_FIELD_EQ(inName,"rotate_V3_Flt") ) { return rotate_V3_Flt_dyn(); }
		if (HX_FIELD_EQ(inName,"set_V3_Mat_V3") ) { return set_V3_Mat_V3_dyn(); }
		if (HX_FIELD_EQ(inName,"translateLeft") ) { return translateLeft_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"make_V3_Mat_V3") ) { return make_V3_Mat_V3_dyn(); }
		if (HX_FIELD_EQ(inName,"_forwardVector") ) { return _forwardVector; }
		if (HX_FIELD_EQ(inName,"getRightVector") ) { return getRightVector_dyn(); }
		if (HX_FIELD_EQ(inName,"getRotation_V3") ) { return getRotation_V3_dyn(); }
		if (HX_FIELD_EQ(inName,"getTranslation") ) { return getTranslation_dyn(); }
		if (HX_FIELD_EQ(inName,"getUpVector_V3") ) { return getUpVector_V3_dyn(); }
		if (HX_FIELD_EQ(inName,"removeListener") ) { return removeListener_dyn(); }
		if (HX_FIELD_EQ(inName,"set_V3_Qtrn_V3") ) { return set_V3_Qtrn_V3_dyn(); }
		if (HX_FIELD_EQ(inName,"setScale_FltX3") ) { return setScale_FltX3_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"make_V3_Qtrn_V3") ) { return make_V3_Qtrn_V3_dyn(); }
		if (HX_FIELD_EQ(inName,"getRotation_Mat") ) { return getRotation_Mat_dyn(); }
		if (HX_FIELD_EQ(inName,"getTranslationX") ) { return getTranslationX_dyn(); }
		if (HX_FIELD_EQ(inName,"getTranslationY") ) { return getTranslationY_dyn(); }
		if (HX_FIELD_EQ(inName,"getTranslationZ") ) { return getTranslationZ_dyn(); }
		if (HX_FIELD_EQ(inName,"set_V3X2_Flt_V3") ) { return set_V3X2_Flt_V3_dyn(); }
		if (HX_FIELD_EQ(inName,"setRotation_Mat") ) { return setRotation_Mat_dyn(); }
		if (HX_FIELD_EQ(inName,"setTranslationX") ) { return setTranslationX_dyn(); }
		if (HX_FIELD_EQ(inName,"setTranslationY") ) { return setTranslationY_dyn(); }
		if (HX_FIELD_EQ(inName,"setTranslationZ") ) { return setTranslationZ_dyn(); }
		if (HX_FIELD_EQ(inName,"translate_FltX3") ) { return translate_FltX3_dyn(); }
		if (HX_FIELD_EQ(inName,"translateSmooth") ) { return translateSmooth_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getBackVector_V3") ) { return getBackVector_V3_dyn(); }
		if (HX_FIELD_EQ(inName,"getDownVector_V3") ) { return getDownVector_V3_dyn(); }
		if (HX_FIELD_EQ(inName,"getForwardVector") ) { return getForwardVector_dyn(); }
		if (HX_FIELD_EQ(inName,"getLeftVector_V3") ) { return getLeftVector_V3_dyn(); }
		if (HX_FIELD_EQ(inName,"getRotation_Qtrn") ) { return getRotation_Qtrn_dyn(); }
		if (HX_FIELD_EQ(inName,"setRotation_Qtrn") ) { return setRotation_Qtrn_dyn(); }
		if (HX_FIELD_EQ(inName,"translateForward") ) { return translateForward_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getRightVector_V3") ) { return getRightVector_V3_dyn(); }
		if (HX_FIELD_EQ(inName,"getTranslation_V3") ) { return getTranslation_V3_dyn(); }
		if (HX_FIELD_EQ(inName,"setRotation_FltX4") ) { return setRotation_FltX4_dyn(); }
		if (HX_FIELD_EQ(inName,"setTranslation_V3") ) { return setTranslation_V3_dyn(); }
		if (HX_FIELD_EQ(inName,"transformPoint_V3") ) { return transformPoint_V3_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"setRotation_V3_Flt") ) { return setRotation_V3_Flt_dyn(); }
		if (HX_FIELD_EQ(inName,"transformVector_V3") ) { return transformVector_V3_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hx_Transform_scaleX") ) { return hx_Transform_scaleX; }
		if (HX_FIELD_EQ(inName,"hx_Transform_scaleY") ) { return hx_Transform_scaleY; }
		if (HX_FIELD_EQ(inName,"hx_Transform_scaleZ") ) { return hx_Transform_scaleZ; }
		if (HX_FIELD_EQ(inName,"getForwardVector_V3") ) { return getForwardVector_V3_dyn(); }
		if (HX_FIELD_EQ(inName,"transformPoint_V3X2") ) { return transformPoint_V3X2_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Transform_rotateX") ) { return hx_Transform_rotateX; }
		if (HX_FIELD_EQ(inName,"hx_Transform_rotateY") ) { return hx_Transform_rotateY; }
		if (HX_FIELD_EQ(inName,"hx_Transform_rotateZ") ) { return hx_Transform_rotateZ; }
		if (HX_FIELD_EQ(inName,"setTranslation_FltX3") ) { return setTranslation_FltX3_dyn(); }
		if (HX_FIELD_EQ(inName,"transformVector_V3X2") ) { return transformVector_V3X2_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"constructNativeObject") ) { return constructNativeObject_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Transform_getScale") ) { return hx_Transform_getScale; }
		if (HX_FIELD_EQ(inName,"hx_Transform_scale_V3") ) { return hx_Transform_scale_V3; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"resumeTransformChanged") ) { return resumeTransformChanged_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Transform_Construct") ) { return hx_Transform_Construct; }
		if (HX_FIELD_EQ(inName,"hx_Transform_getMatrix") ) { return hx_Transform_getMatrix; }
		if (HX_FIELD_EQ(inName,"hx_Transform_getScaleX") ) { return hx_Transform_getScaleX; }
		if (HX_FIELD_EQ(inName,"hx_Transform_getScaleY") ) { return hx_Transform_getScaleY; }
		if (HX_FIELD_EQ(inName,"hx_Transform_getScaleZ") ) { return hx_Transform_getScaleZ; }
		if (HX_FIELD_EQ(inName,"hx_Transform_scale_Flt") ) { return hx_Transform_scale_Flt; }
		if (HX_FIELD_EQ(inName,"hx_Transform_set_Trans") ) { return hx_Transform_set_Trans; }
		if (HX_FIELD_EQ(inName,"hx_Transform_setScaleX") ) { return hx_Transform_setScaleX; }
		if (HX_FIELD_EQ(inName,"hx_Transform_setScaleY") ) { return hx_Transform_setScaleY; }
		if (HX_FIELD_EQ(inName,"hx_Transform_setScaleZ") ) { return hx_Transform_setScaleZ; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"suspendTransformChanged") ) { return suspendTransformChanged_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Transform_rotate_Mat") ) { return hx_Transform_rotate_Mat; }
		if (HX_FIELD_EQ(inName,"hx_Transform_translateX") ) { return hx_Transform_translateX; }
		if (HX_FIELD_EQ(inName,"hx_Transform_translateY") ) { return hx_Transform_translateY; }
		if (HX_FIELD_EQ(inName,"hx_Transform_translateZ") ) { return hx_Transform_translateZ; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_Transform_addListener") ) { return hx_Transform_addListener; }
		if (HX_FIELD_EQ(inName,"hx_Transform_getRotation") ) { return hx_Transform_getRotation; }
		if (HX_FIELD_EQ(inName,"hx_Transform_getScale_V3") ) { return hx_Transform_getScale_V3; }
		if (HX_FIELD_EQ(inName,"hx_Transform_getUpVector") ) { return hx_Transform_getUpVector; }
		if (HX_FIELD_EQ(inName,"hx_Transform_rotate_Qtrn") ) { return hx_Transform_rotate_Qtrn; }
		if (HX_FIELD_EQ(inName,"hx_Transform_scale_FltX3") ) { return hx_Transform_scale_FltX3; }
		if (HX_FIELD_EQ(inName,"hx_Transform_setIdentity") ) { return hx_Transform_setIdentity; }
		if (HX_FIELD_EQ(inName,"hx_Transform_setScale_V3") ) { return hx_Transform_setScale_V3; }
		if (HX_FIELD_EQ(inName,"hx_Transform_translateUp") ) { return hx_Transform_translateUp; }
		if (HX_FIELD_EQ(inName,"transformVector_FltX4_V3") ) { return transformVector_FltX4_V3_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_Transform_rotate_FltX4") ) { return hx_Transform_rotate_FltX4; }
		if (HX_FIELD_EQ(inName,"hx_Transform_setScale_Flt") ) { return hx_Transform_setScale_Flt; }
		if (HX_FIELD_EQ(inName,"hx_Transform_translate_V3") ) { return hx_Transform_translate_V3; }
		if (HX_FIELD_EQ(inName,"getAnimationPropertyValue") ) { return getAnimationPropertyValue_dyn(); }
		if (HX_FIELD_EQ(inName,"setAnimationPropertyValue") ) { return setAnimationPropertyValue_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_Transform_getBackVector") ) { return hx_Transform_getBackVector; }
		if (HX_FIELD_EQ(inName,"hx_Transform_getDownVector") ) { return hx_Transform_getDownVector; }
		if (HX_FIELD_EQ(inName,"hx_Transform_getLeftVector") ) { return hx_Transform_getLeftVector; }
		if (HX_FIELD_EQ(inName,"hx_Transform_rotate_V3_Flt") ) { return hx_Transform_rotate_V3_Flt; }
		if (HX_FIELD_EQ(inName,"hx_Transform_set_V3_Mat_V3") ) { return hx_Transform_set_V3_Mat_V3; }
		if (HX_FIELD_EQ(inName,"hx_Transform_translateLeft") ) { return hx_Transform_translateLeft; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"isTransformChangedSuspended") ) { return isTransformChangedSuspended_dyn(); }
		if (HX_FIELD_EQ(inName,"constructNativeObject_Trans") ) { return constructNativeObject_Trans_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Transform_getRightVector") ) { return hx_Transform_getRightVector; }
		if (HX_FIELD_EQ(inName,"hx_Transform_getRotation_V3") ) { return hx_Transform_getRotation_V3; }
		if (HX_FIELD_EQ(inName,"hx_Transform_getTranslation") ) { return hx_Transform_getTranslation; }
		if (HX_FIELD_EQ(inName,"hx_Transform_getUpVector_V3") ) { return hx_Transform_getUpVector_V3; }
		if (HX_FIELD_EQ(inName,"hx_Transform_removeListener") ) { return hx_Transform_removeListener; }
		if (HX_FIELD_EQ(inName,"hx_Transform_set_V3_Qtrn_V3") ) { return hx_Transform_set_V3_Qtrn_V3; }
		if (HX_FIELD_EQ(inName,"hx_Transform_setScale_FltX3") ) { return hx_Transform_setScale_FltX3; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_Transform_Construct_Trans") ) { return hx_Transform_Construct_Trans; }
		if (HX_FIELD_EQ(inName,"hx_Transform_getRotation_Mat") ) { return hx_Transform_getRotation_Mat; }
		if (HX_FIELD_EQ(inName,"hx_Transform_getTranslationX") ) { return hx_Transform_getTranslationX; }
		if (HX_FIELD_EQ(inName,"hx_Transform_getTranslationY") ) { return hx_Transform_getTranslationY; }
		if (HX_FIELD_EQ(inName,"hx_Transform_getTranslationZ") ) { return hx_Transform_getTranslationZ; }
		if (HX_FIELD_EQ(inName,"hx_Transform_set_V3X2_Flt_V3") ) { return hx_Transform_set_V3X2_Flt_V3; }
		if (HX_FIELD_EQ(inName,"hx_Transform_setRotation_Mat") ) { return hx_Transform_setRotation_Mat; }
		if (HX_FIELD_EQ(inName,"hx_Transform_setTranslationX") ) { return hx_Transform_setTranslationX; }
		if (HX_FIELD_EQ(inName,"hx_Transform_setTranslationY") ) { return hx_Transform_setTranslationY; }
		if (HX_FIELD_EQ(inName,"hx_Transform_setTranslationZ") ) { return hx_Transform_setTranslationZ; }
		if (HX_FIELD_EQ(inName,"hx_Transform_translate_FltX3") ) { return hx_Transform_translate_FltX3; }
		if (HX_FIELD_EQ(inName,"hx_Transform_translateSmooth") ) { return hx_Transform_translateSmooth; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_Transform_getBackVector_V3") ) { return hx_Transform_getBackVector_V3; }
		if (HX_FIELD_EQ(inName,"hx_Transform_getDownVector_V3") ) { return hx_Transform_getDownVector_V3; }
		if (HX_FIELD_EQ(inName,"hx_Transform_getForwardVector") ) { return hx_Transform_getForwardVector; }
		if (HX_FIELD_EQ(inName,"hx_Transform_getLeftVector_V3") ) { return hx_Transform_getLeftVector_V3; }
		if (HX_FIELD_EQ(inName,"hx_Transform_getRotation_Qtrn") ) { return hx_Transform_getRotation_Qtrn; }
		if (HX_FIELD_EQ(inName,"hx_Transform_setRotation_Qtrn") ) { return hx_Transform_setRotation_Qtrn; }
		if (HX_FIELD_EQ(inName,"hx_Transform_translateForward") ) { return hx_Transform_translateForward; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"hx_Transform_getRightVector_V3") ) { return hx_Transform_getRightVector_V3; }
		if (HX_FIELD_EQ(inName,"hx_Transform_getTranslation_V3") ) { return hx_Transform_getTranslation_V3; }
		if (HX_FIELD_EQ(inName,"hx_Transform_setRotation_FltX4") ) { return hx_Transform_setRotation_FltX4; }
		if (HX_FIELD_EQ(inName,"hx_Transform_setTranslation_V3") ) { return hx_Transform_setTranslation_V3; }
		if (HX_FIELD_EQ(inName,"hx_Transform_transformPoint_V3") ) { return hx_Transform_transformPoint_V3; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"constructNativeObject_V3_Mat_V3") ) { return constructNativeObject_V3_Mat_V3_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Transform_setRotation_V3_Flt") ) { return hx_Transform_setRotation_V3_Flt; }
		if (HX_FIELD_EQ(inName,"hx_Transform_transformVector_V3") ) { return hx_Transform_transformVector_V3; }
		if (HX_FIELD_EQ(inName,"hx_Transform_Listener_Construct") ) { return hx_Transform_Listener_Construct; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"constructNativeObject_V3_Qtrn_V3") ) { return constructNativeObject_V3_Qtrn_V3_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Transform_Construct_V3_Mat_V3") ) { return hx_Transform_Construct_V3_Mat_V3; }
		if (HX_FIELD_EQ(inName,"hx_Transform_getForwardVector_V3") ) { return hx_Transform_getForwardVector_V3; }
		if (HX_FIELD_EQ(inName,"hx_Transform_transformPoint_V3X2") ) { return hx_Transform_transformPoint_V3X2; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"hx_Transform_Construct_V3_Qtrn_V3") ) { return hx_Transform_Construct_V3_Qtrn_V3; }
		if (HX_FIELD_EQ(inName,"hx_Transform_setTranslation_FltX3") ) { return hx_Transform_setTranslation_FltX3; }
		if (HX_FIELD_EQ(inName,"hx_Transform_transformVector_V3X2") ) { return hx_Transform_transformVector_V3X2; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"getAnimationPropertyComponentCount") ) { return getAnimationPropertyComponentCount_dyn(); }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"hx_Transform_transformVector_FltX4_V3") ) { return hx_Transform_transformVector_FltX4_V3; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"hx_Transform_getAnimationPropertyValue") ) { return hx_Transform_getAnimationPropertyValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_setAnimationPropertyValue") ) { return hx_Transform_setAnimationPropertyValue; }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"hx_Transform_static_resumeTransformChanged") ) { return hx_Transform_static_resumeTransformChanged; }
		break;
	case 43:
		if (HX_FIELD_EQ(inName,"hx_Transform_static_suspendTransformChanged") ) { return hx_Transform_static_suspendTransformChanged; }
		break;
	case 47:
		if (HX_FIELD_EQ(inName,"hx_Transform_getAnimationPropertyComponentCount") ) { return hx_Transform_getAnimationPropertyComponentCount; }
		if (HX_FIELD_EQ(inName,"hx_Transform_static_isTransformChangedSuspended") ) { return hx_Transform_static_isTransformChangedSuspended; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Transform_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_scale") ) { _scale=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast< ::org::gameplay3d::Matrix >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_upVector") ) { _upVector=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rotation") ) { _rotation=inValue.Cast< ::org::gameplay3d::Quaternion >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_backVector") ) { _backVector=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_downVector") ) { _downVector=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_leftVector") ) { _leftVector=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_translation") ) { _translation=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rightVector") ) { _rightVector=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_forwardVector") ) { _forwardVector=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hx_Transform_scaleX") ) { hx_Transform_scaleX=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_scaleY") ) { hx_Transform_scaleY=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_scaleZ") ) { hx_Transform_scaleZ=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Transform_rotateX") ) { hx_Transform_rotateX=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_rotateY") ) { hx_Transform_rotateY=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_rotateZ") ) { hx_Transform_rotateZ=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hx_Transform_getScale") ) { hx_Transform_getScale=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_scale_V3") ) { hx_Transform_scale_V3=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Transform_Construct") ) { hx_Transform_Construct=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_getMatrix") ) { hx_Transform_getMatrix=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_getScaleX") ) { hx_Transform_getScaleX=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_getScaleY") ) { hx_Transform_getScaleY=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_getScaleZ") ) { hx_Transform_getScaleZ=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_scale_Flt") ) { hx_Transform_scale_Flt=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_set_Trans") ) { hx_Transform_set_Trans=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_setScaleX") ) { hx_Transform_setScaleX=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_setScaleY") ) { hx_Transform_setScaleY=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_setScaleZ") ) { hx_Transform_setScaleZ=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_Transform_rotate_Mat") ) { hx_Transform_rotate_Mat=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_translateX") ) { hx_Transform_translateX=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_translateY") ) { hx_Transform_translateY=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_translateZ") ) { hx_Transform_translateZ=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_Transform_addListener") ) { hx_Transform_addListener=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_getRotation") ) { hx_Transform_getRotation=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_getScale_V3") ) { hx_Transform_getScale_V3=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_getUpVector") ) { hx_Transform_getUpVector=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_rotate_Qtrn") ) { hx_Transform_rotate_Qtrn=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_scale_FltX3") ) { hx_Transform_scale_FltX3=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_setIdentity") ) { hx_Transform_setIdentity=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_setScale_V3") ) { hx_Transform_setScale_V3=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_translateUp") ) { hx_Transform_translateUp=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_Transform_rotate_FltX4") ) { hx_Transform_rotate_FltX4=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_setScale_Flt") ) { hx_Transform_setScale_Flt=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_translate_V3") ) { hx_Transform_translate_V3=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_Transform_getBackVector") ) { hx_Transform_getBackVector=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_getDownVector") ) { hx_Transform_getDownVector=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_getLeftVector") ) { hx_Transform_getLeftVector=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_rotate_V3_Flt") ) { hx_Transform_rotate_V3_Flt=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_set_V3_Mat_V3") ) { hx_Transform_set_V3_Mat_V3=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_translateLeft") ) { hx_Transform_translateLeft=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"hx_Transform_getRightVector") ) { hx_Transform_getRightVector=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_getRotation_V3") ) { hx_Transform_getRotation_V3=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_getTranslation") ) { hx_Transform_getTranslation=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_getUpVector_V3") ) { hx_Transform_getUpVector_V3=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_removeListener") ) { hx_Transform_removeListener=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_set_V3_Qtrn_V3") ) { hx_Transform_set_V3_Qtrn_V3=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_setScale_FltX3") ) { hx_Transform_setScale_FltX3=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_Transform_Construct_Trans") ) { hx_Transform_Construct_Trans=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_getRotation_Mat") ) { hx_Transform_getRotation_Mat=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_getTranslationX") ) { hx_Transform_getTranslationX=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_getTranslationY") ) { hx_Transform_getTranslationY=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_getTranslationZ") ) { hx_Transform_getTranslationZ=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_set_V3X2_Flt_V3") ) { hx_Transform_set_V3X2_Flt_V3=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_setRotation_Mat") ) { hx_Transform_setRotation_Mat=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_setTranslationX") ) { hx_Transform_setTranslationX=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_setTranslationY") ) { hx_Transform_setTranslationY=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_setTranslationZ") ) { hx_Transform_setTranslationZ=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_translate_FltX3") ) { hx_Transform_translate_FltX3=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_translateSmooth") ) { hx_Transform_translateSmooth=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_Transform_getBackVector_V3") ) { hx_Transform_getBackVector_V3=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_getDownVector_V3") ) { hx_Transform_getDownVector_V3=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_getForwardVector") ) { hx_Transform_getForwardVector=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_getLeftVector_V3") ) { hx_Transform_getLeftVector_V3=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_getRotation_Qtrn") ) { hx_Transform_getRotation_Qtrn=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_setRotation_Qtrn") ) { hx_Transform_setRotation_Qtrn=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_translateForward") ) { hx_Transform_translateForward=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"hx_Transform_getRightVector_V3") ) { hx_Transform_getRightVector_V3=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_getTranslation_V3") ) { hx_Transform_getTranslation_V3=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_setRotation_FltX4") ) { hx_Transform_setRotation_FltX4=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_setTranslation_V3") ) { hx_Transform_setTranslation_V3=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_transformPoint_V3") ) { hx_Transform_transformPoint_V3=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"hx_Transform_setRotation_V3_Flt") ) { hx_Transform_setRotation_V3_Flt=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_transformVector_V3") ) { hx_Transform_transformVector_V3=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_Listener_Construct") ) { hx_Transform_Listener_Construct=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"hx_Transform_Construct_V3_Mat_V3") ) { hx_Transform_Construct_V3_Mat_V3=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_getForwardVector_V3") ) { hx_Transform_getForwardVector_V3=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_transformPoint_V3X2") ) { hx_Transform_transformPoint_V3X2=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"hx_Transform_Construct_V3_Qtrn_V3") ) { hx_Transform_Construct_V3_Qtrn_V3=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_setTranslation_FltX3") ) { hx_Transform_setTranslation_FltX3=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_transformVector_V3X2") ) { hx_Transform_transformVector_V3X2=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"hx_Transform_transformVector_FltX4_V3") ) { hx_Transform_transformVector_FltX4_V3=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"hx_Transform_getAnimationPropertyValue") ) { hx_Transform_getAnimationPropertyValue=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_setAnimationPropertyValue") ) { hx_Transform_setAnimationPropertyValue=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"hx_Transform_static_resumeTransformChanged") ) { hx_Transform_static_resumeTransformChanged=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 43:
		if (HX_FIELD_EQ(inName,"hx_Transform_static_suspendTransformChanged") ) { hx_Transform_static_suspendTransformChanged=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 47:
		if (HX_FIELD_EQ(inName,"hx_Transform_getAnimationPropertyComponentCount") ) { hx_Transform_getAnimationPropertyComponentCount=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Transform_static_isTransformChangedSuspended") ) { hx_Transform_static_isTransformChangedSuspended=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Transform_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_scale"));
	outFields->push(HX_CSTRING("_translation"));
	outFields->push(HX_CSTRING("_backVector"));
	outFields->push(HX_CSTRING("_downVector"));
	outFields->push(HX_CSTRING("_forwardVector"));
	outFields->push(HX_CSTRING("_leftVector"));
	outFields->push(HX_CSTRING("_rightVector"));
	outFields->push(HX_CSTRING("_upVector"));
	outFields->push(HX_CSTRING("_matrix"));
	outFields->push(HX_CSTRING("_rotation"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("ANIMATE_SCALE_UNIT"),
	HX_CSTRING("ANIMATE_SCALE"),
	HX_CSTRING("ANIMATE_SCALE_X"),
	HX_CSTRING("ANIMATE_SCALE_Y"),
	HX_CSTRING("ANIMATE_SCALE_Z"),
	HX_CSTRING("ANIMATE_ROTATE"),
	HX_CSTRING("ANIMATE_TRANSLATE"),
	HX_CSTRING("ANIMATE_TRANSLATE_X"),
	HX_CSTRING("ANIMATE_TRANSLATE_Y"),
	HX_CSTRING("ANIMATE_TRANSLATE_Z"),
	HX_CSTRING("ANIMATE_ROTATE_TRANSLATE"),
	HX_CSTRING("ANIMATE_SCALE_ROTATE_TRANSLATE"),
	HX_CSTRING("ANIMATE_SCALE_TRANSLATE"),
	HX_CSTRING("ANIMATE_SCALE_ROTATE"),
	HX_CSTRING("make"),
	HX_CSTRING("make_Trans"),
	HX_CSTRING("make_V3_Mat_V3"),
	HX_CSTRING("make_V3_Qtrn_V3"),
	HX_CSTRING("isTransformChangedSuspended"),
	HX_CSTRING("resumeTransformChanged"),
	HX_CSTRING("suspendTransformChanged"),
	HX_CSTRING("constructNativeObject"),
	HX_CSTRING("constructNativeObject_Trans"),
	HX_CSTRING("constructNativeObject_V3_Mat_V3"),
	HX_CSTRING("constructNativeObject_V3_Qtrn_V3"),
	HX_CSTRING("hx_Transform_Construct"),
	HX_CSTRING("hx_Transform_Construct_Trans"),
	HX_CSTRING("hx_Transform_Construct_V3_Mat_V3"),
	HX_CSTRING("hx_Transform_Construct_V3_Qtrn_V3"),
	HX_CSTRING("hx_Transform_addListener"),
	HX_CSTRING("hx_Transform_getAnimationPropertyComponentCount"),
	HX_CSTRING("hx_Transform_getAnimationPropertyValue"),
	HX_CSTRING("hx_Transform_getBackVector"),
	HX_CSTRING("hx_Transform_getBackVector_V3"),
	HX_CSTRING("hx_Transform_getDownVector"),
	HX_CSTRING("hx_Transform_getDownVector_V3"),
	HX_CSTRING("hx_Transform_getForwardVector"),
	HX_CSTRING("hx_Transform_getForwardVector_V3"),
	HX_CSTRING("hx_Transform_getLeftVector"),
	HX_CSTRING("hx_Transform_getLeftVector_V3"),
	HX_CSTRING("hx_Transform_getMatrix"),
	HX_CSTRING("hx_Transform_getRightVector"),
	HX_CSTRING("hx_Transform_getRightVector_V3"),
	HX_CSTRING("hx_Transform_getRotation"),
	HX_CSTRING("hx_Transform_getRotation_V3"),
	HX_CSTRING("hx_Transform_getRotation_Mat"),
	HX_CSTRING("hx_Transform_getRotation_Qtrn"),
	HX_CSTRING("hx_Transform_getScale"),
	HX_CSTRING("hx_Transform_getScale_V3"),
	HX_CSTRING("hx_Transform_getScaleX"),
	HX_CSTRING("hx_Transform_getScaleY"),
	HX_CSTRING("hx_Transform_getScaleZ"),
	HX_CSTRING("hx_Transform_getTranslation"),
	HX_CSTRING("hx_Transform_getTranslation_V3"),
	HX_CSTRING("hx_Transform_getTranslationX"),
	HX_CSTRING("hx_Transform_getTranslationY"),
	HX_CSTRING("hx_Transform_getTranslationZ"),
	HX_CSTRING("hx_Transform_getUpVector"),
	HX_CSTRING("hx_Transform_getUpVector_V3"),
	HX_CSTRING("hx_Transform_static_isTransformChangedSuspended"),
	HX_CSTRING("hx_Transform_removeListener"),
	HX_CSTRING("hx_Transform_static_resumeTransformChanged"),
	HX_CSTRING("hx_Transform_rotate_Mat"),
	HX_CSTRING("hx_Transform_rotate_Qtrn"),
	HX_CSTRING("hx_Transform_rotate_V3_Flt"),
	HX_CSTRING("hx_Transform_rotate_FltX4"),
	HX_CSTRING("hx_Transform_rotateX"),
	HX_CSTRING("hx_Transform_rotateY"),
	HX_CSTRING("hx_Transform_rotateZ"),
	HX_CSTRING("hx_Transform_scale_V3"),
	HX_CSTRING("hx_Transform_scale_Flt"),
	HX_CSTRING("hx_Transform_scale_FltX3"),
	HX_CSTRING("hx_Transform_scaleX"),
	HX_CSTRING("hx_Transform_scaleY"),
	HX_CSTRING("hx_Transform_scaleZ"),
	HX_CSTRING("hx_Transform_set_Trans"),
	HX_CSTRING("hx_Transform_set_V3_Mat_V3"),
	HX_CSTRING("hx_Transform_set_V3_Qtrn_V3"),
	HX_CSTRING("hx_Transform_set_V3X2_Flt_V3"),
	HX_CSTRING("hx_Transform_setAnimationPropertyValue"),
	HX_CSTRING("hx_Transform_setIdentity"),
	HX_CSTRING("hx_Transform_setRotation_Mat"),
	HX_CSTRING("hx_Transform_setRotation_Qtrn"),
	HX_CSTRING("hx_Transform_setRotation_V3_Flt"),
	HX_CSTRING("hx_Transform_setRotation_FltX4"),
	HX_CSTRING("hx_Transform_setScale_V3"),
	HX_CSTRING("hx_Transform_setScale_Flt"),
	HX_CSTRING("hx_Transform_setScale_FltX3"),
	HX_CSTRING("hx_Transform_setScaleX"),
	HX_CSTRING("hx_Transform_setScaleY"),
	HX_CSTRING("hx_Transform_setScaleZ"),
	HX_CSTRING("hx_Transform_setTranslation_V3"),
	HX_CSTRING("hx_Transform_setTranslation_FltX3"),
	HX_CSTRING("hx_Transform_setTranslationX"),
	HX_CSTRING("hx_Transform_setTranslationY"),
	HX_CSTRING("hx_Transform_setTranslationZ"),
	HX_CSTRING("hx_Transform_static_suspendTransformChanged"),
	HX_CSTRING("hx_Transform_transformPoint_V3"),
	HX_CSTRING("hx_Transform_transformPoint_V3X2"),
	HX_CSTRING("hx_Transform_transformVector_V3"),
	HX_CSTRING("hx_Transform_transformVector_V3X2"),
	HX_CSTRING("hx_Transform_transformVector_FltX4_V3"),
	HX_CSTRING("hx_Transform_translate_V3"),
	HX_CSTRING("hx_Transform_translate_FltX3"),
	HX_CSTRING("hx_Transform_translateForward"),
	HX_CSTRING("hx_Transform_translateLeft"),
	HX_CSTRING("hx_Transform_translateSmooth"),
	HX_CSTRING("hx_Transform_translateUp"),
	HX_CSTRING("hx_Transform_translateX"),
	HX_CSTRING("hx_Transform_translateY"),
	HX_CSTRING("hx_Transform_translateZ"),
	HX_CSTRING("hx_Transform_Listener_Construct"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(Transform_obj,_scale),HX_CSTRING("_scale")},
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(Transform_obj,_translation),HX_CSTRING("_translation")},
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(Transform_obj,_backVector),HX_CSTRING("_backVector")},
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(Transform_obj,_downVector),HX_CSTRING("_downVector")},
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(Transform_obj,_forwardVector),HX_CSTRING("_forwardVector")},
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(Transform_obj,_leftVector),HX_CSTRING("_leftVector")},
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(Transform_obj,_rightVector),HX_CSTRING("_rightVector")},
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(Transform_obj,_upVector),HX_CSTRING("_upVector")},
	{hx::fsObject /*::org::gameplay3d::Matrix*/ ,(int)offsetof(Transform_obj,_matrix),HX_CSTRING("_matrix")},
	{hx::fsObject /*::org::gameplay3d::Quaternion*/ ,(int)offsetof(Transform_obj,_rotation),HX_CSTRING("_rotation")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_scale"),
	HX_CSTRING("_translation"),
	HX_CSTRING("_backVector"),
	HX_CSTRING("_downVector"),
	HX_CSTRING("_forwardVector"),
	HX_CSTRING("_leftVector"),
	HX_CSTRING("_rightVector"),
	HX_CSTRING("_upVector"),
	HX_CSTRING("_matrix"),
	HX_CSTRING("_rotation"),
	HX_CSTRING("addListener"),
	HX_CSTRING("getAnimationPropertyComponentCount"),
	HX_CSTRING("getAnimationPropertyValue"),
	HX_CSTRING("getBackVector"),
	HX_CSTRING("getBackVector_V3"),
	HX_CSTRING("getDownVector"),
	HX_CSTRING("getDownVector_V3"),
	HX_CSTRING("getForwardVector"),
	HX_CSTRING("getForwardVector_V3"),
	HX_CSTRING("getLeftVector"),
	HX_CSTRING("getLeftVector_V3"),
	HX_CSTRING("getMatrix"),
	HX_CSTRING("getRightVector"),
	HX_CSTRING("getRightVector_V3"),
	HX_CSTRING("getRotation"),
	HX_CSTRING("getRotation_V3"),
	HX_CSTRING("getRotation_Mat"),
	HX_CSTRING("getRotation_Qtrn"),
	HX_CSTRING("getScale"),
	HX_CSTRING("getScale_V3"),
	HX_CSTRING("getScaleX"),
	HX_CSTRING("getScaleY"),
	HX_CSTRING("getScaleZ"),
	HX_CSTRING("getTranslation"),
	HX_CSTRING("getTranslation_V3"),
	HX_CSTRING("getTranslationX"),
	HX_CSTRING("getTranslationY"),
	HX_CSTRING("getTranslationZ"),
	HX_CSTRING("getUpVector"),
	HX_CSTRING("getUpVector_V3"),
	HX_CSTRING("removeListener"),
	HX_CSTRING("rotate_Mat"),
	HX_CSTRING("rotate_Qtrn"),
	HX_CSTRING("rotate_V3_Flt"),
	HX_CSTRING("rotate_FltX4"),
	HX_CSTRING("rotateX"),
	HX_CSTRING("rotateY"),
	HX_CSTRING("rotateZ"),
	HX_CSTRING("scale_V3"),
	HX_CSTRING("scale_Flt"),
	HX_CSTRING("scale_FltX3"),
	HX_CSTRING("scaleX"),
	HX_CSTRING("scaleY"),
	HX_CSTRING("scaleZ"),
	HX_CSTRING("set_Trans"),
	HX_CSTRING("set_V3_Mat_V3"),
	HX_CSTRING("set_V3_Qtrn_V3"),
	HX_CSTRING("set_V3X2_Flt_V3"),
	HX_CSTRING("setAnimationPropertyValue"),
	HX_CSTRING("setIdentity"),
	HX_CSTRING("setRotation_Mat"),
	HX_CSTRING("setRotation_Qtrn"),
	HX_CSTRING("setRotation_V3_Flt"),
	HX_CSTRING("setRotation_FltX4"),
	HX_CSTRING("setScale_V3"),
	HX_CSTRING("setScale_Flt"),
	HX_CSTRING("setScale_FltX3"),
	HX_CSTRING("setScaleX"),
	HX_CSTRING("setScaleY"),
	HX_CSTRING("setScaleZ"),
	HX_CSTRING("setTranslation_V3"),
	HX_CSTRING("setTranslation_FltX3"),
	HX_CSTRING("setTranslationX"),
	HX_CSTRING("setTranslationY"),
	HX_CSTRING("setTranslationZ"),
	HX_CSTRING("transformPoint_V3"),
	HX_CSTRING("transformPoint_V3X2"),
	HX_CSTRING("transformVector_V3"),
	HX_CSTRING("transformVector_V3X2"),
	HX_CSTRING("transformVector_FltX4_V3"),
	HX_CSTRING("translate_V3"),
	HX_CSTRING("translate_FltX3"),
	HX_CSTRING("translateForward"),
	HX_CSTRING("translateLeft"),
	HX_CSTRING("translateSmooth"),
	HX_CSTRING("translateUp"),
	HX_CSTRING("translateX"),
	HX_CSTRING("translateY"),
	HX_CSTRING("translateZ"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Transform_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Transform_obj::ANIMATE_SCALE_UNIT,"ANIMATE_SCALE_UNIT");
	HX_MARK_MEMBER_NAME(Transform_obj::ANIMATE_SCALE,"ANIMATE_SCALE");
	HX_MARK_MEMBER_NAME(Transform_obj::ANIMATE_SCALE_X,"ANIMATE_SCALE_X");
	HX_MARK_MEMBER_NAME(Transform_obj::ANIMATE_SCALE_Y,"ANIMATE_SCALE_Y");
	HX_MARK_MEMBER_NAME(Transform_obj::ANIMATE_SCALE_Z,"ANIMATE_SCALE_Z");
	HX_MARK_MEMBER_NAME(Transform_obj::ANIMATE_ROTATE,"ANIMATE_ROTATE");
	HX_MARK_MEMBER_NAME(Transform_obj::ANIMATE_TRANSLATE,"ANIMATE_TRANSLATE");
	HX_MARK_MEMBER_NAME(Transform_obj::ANIMATE_TRANSLATE_X,"ANIMATE_TRANSLATE_X");
	HX_MARK_MEMBER_NAME(Transform_obj::ANIMATE_TRANSLATE_Y,"ANIMATE_TRANSLATE_Y");
	HX_MARK_MEMBER_NAME(Transform_obj::ANIMATE_TRANSLATE_Z,"ANIMATE_TRANSLATE_Z");
	HX_MARK_MEMBER_NAME(Transform_obj::ANIMATE_ROTATE_TRANSLATE,"ANIMATE_ROTATE_TRANSLATE");
	HX_MARK_MEMBER_NAME(Transform_obj::ANIMATE_SCALE_ROTATE_TRANSLATE,"ANIMATE_SCALE_ROTATE_TRANSLATE");
	HX_MARK_MEMBER_NAME(Transform_obj::ANIMATE_SCALE_TRANSLATE,"ANIMATE_SCALE_TRANSLATE");
	HX_MARK_MEMBER_NAME(Transform_obj::ANIMATE_SCALE_ROTATE,"ANIMATE_SCALE_ROTATE");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_Construct,"hx_Transform_Construct");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_Construct_Trans,"hx_Transform_Construct_Trans");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_Construct_V3_Mat_V3,"hx_Transform_Construct_V3_Mat_V3");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_Construct_V3_Qtrn_V3,"hx_Transform_Construct_V3_Qtrn_V3");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_addListener,"hx_Transform_addListener");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_getAnimationPropertyComponentCount,"hx_Transform_getAnimationPropertyComponentCount");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_getAnimationPropertyValue,"hx_Transform_getAnimationPropertyValue");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_getBackVector,"hx_Transform_getBackVector");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_getBackVector_V3,"hx_Transform_getBackVector_V3");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_getDownVector,"hx_Transform_getDownVector");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_getDownVector_V3,"hx_Transform_getDownVector_V3");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_getForwardVector,"hx_Transform_getForwardVector");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_getForwardVector_V3,"hx_Transform_getForwardVector_V3");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_getLeftVector,"hx_Transform_getLeftVector");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_getLeftVector_V3,"hx_Transform_getLeftVector_V3");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_getMatrix,"hx_Transform_getMatrix");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_getRightVector,"hx_Transform_getRightVector");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_getRightVector_V3,"hx_Transform_getRightVector_V3");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_getRotation,"hx_Transform_getRotation");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_getRotation_V3,"hx_Transform_getRotation_V3");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_getRotation_Mat,"hx_Transform_getRotation_Mat");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_getRotation_Qtrn,"hx_Transform_getRotation_Qtrn");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_getScale,"hx_Transform_getScale");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_getScale_V3,"hx_Transform_getScale_V3");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_getScaleX,"hx_Transform_getScaleX");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_getScaleY,"hx_Transform_getScaleY");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_getScaleZ,"hx_Transform_getScaleZ");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_getTranslation,"hx_Transform_getTranslation");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_getTranslation_V3,"hx_Transform_getTranslation_V3");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_getTranslationX,"hx_Transform_getTranslationX");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_getTranslationY,"hx_Transform_getTranslationY");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_getTranslationZ,"hx_Transform_getTranslationZ");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_getUpVector,"hx_Transform_getUpVector");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_getUpVector_V3,"hx_Transform_getUpVector_V3");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_static_isTransformChangedSuspended,"hx_Transform_static_isTransformChangedSuspended");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_removeListener,"hx_Transform_removeListener");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_static_resumeTransformChanged,"hx_Transform_static_resumeTransformChanged");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_rotate_Mat,"hx_Transform_rotate_Mat");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_rotate_Qtrn,"hx_Transform_rotate_Qtrn");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_rotate_V3_Flt,"hx_Transform_rotate_V3_Flt");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_rotate_FltX4,"hx_Transform_rotate_FltX4");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_rotateX,"hx_Transform_rotateX");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_rotateY,"hx_Transform_rotateY");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_rotateZ,"hx_Transform_rotateZ");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_scale_V3,"hx_Transform_scale_V3");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_scale_Flt,"hx_Transform_scale_Flt");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_scale_FltX3,"hx_Transform_scale_FltX3");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_scaleX,"hx_Transform_scaleX");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_scaleY,"hx_Transform_scaleY");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_scaleZ,"hx_Transform_scaleZ");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_set_Trans,"hx_Transform_set_Trans");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_set_V3_Mat_V3,"hx_Transform_set_V3_Mat_V3");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_set_V3_Qtrn_V3,"hx_Transform_set_V3_Qtrn_V3");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_set_V3X2_Flt_V3,"hx_Transform_set_V3X2_Flt_V3");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_setAnimationPropertyValue,"hx_Transform_setAnimationPropertyValue");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_setIdentity,"hx_Transform_setIdentity");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_setRotation_Mat,"hx_Transform_setRotation_Mat");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_setRotation_Qtrn,"hx_Transform_setRotation_Qtrn");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_setRotation_V3_Flt,"hx_Transform_setRotation_V3_Flt");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_setRotation_FltX4,"hx_Transform_setRotation_FltX4");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_setScale_V3,"hx_Transform_setScale_V3");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_setScale_Flt,"hx_Transform_setScale_Flt");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_setScale_FltX3,"hx_Transform_setScale_FltX3");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_setScaleX,"hx_Transform_setScaleX");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_setScaleY,"hx_Transform_setScaleY");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_setScaleZ,"hx_Transform_setScaleZ");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_setTranslation_V3,"hx_Transform_setTranslation_V3");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_setTranslation_FltX3,"hx_Transform_setTranslation_FltX3");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_setTranslationX,"hx_Transform_setTranslationX");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_setTranslationY,"hx_Transform_setTranslationY");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_setTranslationZ,"hx_Transform_setTranslationZ");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_static_suspendTransformChanged,"hx_Transform_static_suspendTransformChanged");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_transformPoint_V3,"hx_Transform_transformPoint_V3");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_transformPoint_V3X2,"hx_Transform_transformPoint_V3X2");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_transformVector_V3,"hx_Transform_transformVector_V3");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_transformVector_V3X2,"hx_Transform_transformVector_V3X2");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_transformVector_FltX4_V3,"hx_Transform_transformVector_FltX4_V3");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_translate_V3,"hx_Transform_translate_V3");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_translate_FltX3,"hx_Transform_translate_FltX3");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_translateForward,"hx_Transform_translateForward");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_translateLeft,"hx_Transform_translateLeft");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_translateSmooth,"hx_Transform_translateSmooth");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_translateUp,"hx_Transform_translateUp");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_translateX,"hx_Transform_translateX");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_translateY,"hx_Transform_translateY");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_translateZ,"hx_Transform_translateZ");
	HX_MARK_MEMBER_NAME(Transform_obj::hx_Transform_Listener_Construct,"hx_Transform_Listener_Construct");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Transform_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Transform_obj::ANIMATE_SCALE_UNIT,"ANIMATE_SCALE_UNIT");
	HX_VISIT_MEMBER_NAME(Transform_obj::ANIMATE_SCALE,"ANIMATE_SCALE");
	HX_VISIT_MEMBER_NAME(Transform_obj::ANIMATE_SCALE_X,"ANIMATE_SCALE_X");
	HX_VISIT_MEMBER_NAME(Transform_obj::ANIMATE_SCALE_Y,"ANIMATE_SCALE_Y");
	HX_VISIT_MEMBER_NAME(Transform_obj::ANIMATE_SCALE_Z,"ANIMATE_SCALE_Z");
	HX_VISIT_MEMBER_NAME(Transform_obj::ANIMATE_ROTATE,"ANIMATE_ROTATE");
	HX_VISIT_MEMBER_NAME(Transform_obj::ANIMATE_TRANSLATE,"ANIMATE_TRANSLATE");
	HX_VISIT_MEMBER_NAME(Transform_obj::ANIMATE_TRANSLATE_X,"ANIMATE_TRANSLATE_X");
	HX_VISIT_MEMBER_NAME(Transform_obj::ANIMATE_TRANSLATE_Y,"ANIMATE_TRANSLATE_Y");
	HX_VISIT_MEMBER_NAME(Transform_obj::ANIMATE_TRANSLATE_Z,"ANIMATE_TRANSLATE_Z");
	HX_VISIT_MEMBER_NAME(Transform_obj::ANIMATE_ROTATE_TRANSLATE,"ANIMATE_ROTATE_TRANSLATE");
	HX_VISIT_MEMBER_NAME(Transform_obj::ANIMATE_SCALE_ROTATE_TRANSLATE,"ANIMATE_SCALE_ROTATE_TRANSLATE");
	HX_VISIT_MEMBER_NAME(Transform_obj::ANIMATE_SCALE_TRANSLATE,"ANIMATE_SCALE_TRANSLATE");
	HX_VISIT_MEMBER_NAME(Transform_obj::ANIMATE_SCALE_ROTATE,"ANIMATE_SCALE_ROTATE");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_Construct,"hx_Transform_Construct");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_Construct_Trans,"hx_Transform_Construct_Trans");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_Construct_V3_Mat_V3,"hx_Transform_Construct_V3_Mat_V3");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_Construct_V3_Qtrn_V3,"hx_Transform_Construct_V3_Qtrn_V3");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_addListener,"hx_Transform_addListener");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_getAnimationPropertyComponentCount,"hx_Transform_getAnimationPropertyComponentCount");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_getAnimationPropertyValue,"hx_Transform_getAnimationPropertyValue");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_getBackVector,"hx_Transform_getBackVector");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_getBackVector_V3,"hx_Transform_getBackVector_V3");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_getDownVector,"hx_Transform_getDownVector");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_getDownVector_V3,"hx_Transform_getDownVector_V3");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_getForwardVector,"hx_Transform_getForwardVector");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_getForwardVector_V3,"hx_Transform_getForwardVector_V3");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_getLeftVector,"hx_Transform_getLeftVector");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_getLeftVector_V3,"hx_Transform_getLeftVector_V3");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_getMatrix,"hx_Transform_getMatrix");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_getRightVector,"hx_Transform_getRightVector");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_getRightVector_V3,"hx_Transform_getRightVector_V3");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_getRotation,"hx_Transform_getRotation");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_getRotation_V3,"hx_Transform_getRotation_V3");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_getRotation_Mat,"hx_Transform_getRotation_Mat");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_getRotation_Qtrn,"hx_Transform_getRotation_Qtrn");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_getScale,"hx_Transform_getScale");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_getScale_V3,"hx_Transform_getScale_V3");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_getScaleX,"hx_Transform_getScaleX");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_getScaleY,"hx_Transform_getScaleY");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_getScaleZ,"hx_Transform_getScaleZ");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_getTranslation,"hx_Transform_getTranslation");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_getTranslation_V3,"hx_Transform_getTranslation_V3");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_getTranslationX,"hx_Transform_getTranslationX");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_getTranslationY,"hx_Transform_getTranslationY");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_getTranslationZ,"hx_Transform_getTranslationZ");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_getUpVector,"hx_Transform_getUpVector");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_getUpVector_V3,"hx_Transform_getUpVector_V3");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_static_isTransformChangedSuspended,"hx_Transform_static_isTransformChangedSuspended");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_removeListener,"hx_Transform_removeListener");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_static_resumeTransformChanged,"hx_Transform_static_resumeTransformChanged");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_rotate_Mat,"hx_Transform_rotate_Mat");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_rotate_Qtrn,"hx_Transform_rotate_Qtrn");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_rotate_V3_Flt,"hx_Transform_rotate_V3_Flt");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_rotate_FltX4,"hx_Transform_rotate_FltX4");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_rotateX,"hx_Transform_rotateX");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_rotateY,"hx_Transform_rotateY");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_rotateZ,"hx_Transform_rotateZ");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_scale_V3,"hx_Transform_scale_V3");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_scale_Flt,"hx_Transform_scale_Flt");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_scale_FltX3,"hx_Transform_scale_FltX3");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_scaleX,"hx_Transform_scaleX");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_scaleY,"hx_Transform_scaleY");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_scaleZ,"hx_Transform_scaleZ");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_set_Trans,"hx_Transform_set_Trans");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_set_V3_Mat_V3,"hx_Transform_set_V3_Mat_V3");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_set_V3_Qtrn_V3,"hx_Transform_set_V3_Qtrn_V3");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_set_V3X2_Flt_V3,"hx_Transform_set_V3X2_Flt_V3");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_setAnimationPropertyValue,"hx_Transform_setAnimationPropertyValue");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_setIdentity,"hx_Transform_setIdentity");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_setRotation_Mat,"hx_Transform_setRotation_Mat");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_setRotation_Qtrn,"hx_Transform_setRotation_Qtrn");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_setRotation_V3_Flt,"hx_Transform_setRotation_V3_Flt");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_setRotation_FltX4,"hx_Transform_setRotation_FltX4");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_setScale_V3,"hx_Transform_setScale_V3");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_setScale_Flt,"hx_Transform_setScale_Flt");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_setScale_FltX3,"hx_Transform_setScale_FltX3");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_setScaleX,"hx_Transform_setScaleX");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_setScaleY,"hx_Transform_setScaleY");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_setScaleZ,"hx_Transform_setScaleZ");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_setTranslation_V3,"hx_Transform_setTranslation_V3");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_setTranslation_FltX3,"hx_Transform_setTranslation_FltX3");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_setTranslationX,"hx_Transform_setTranslationX");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_setTranslationY,"hx_Transform_setTranslationY");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_setTranslationZ,"hx_Transform_setTranslationZ");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_static_suspendTransformChanged,"hx_Transform_static_suspendTransformChanged");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_transformPoint_V3,"hx_Transform_transformPoint_V3");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_transformPoint_V3X2,"hx_Transform_transformPoint_V3X2");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_transformVector_V3,"hx_Transform_transformVector_V3");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_transformVector_V3X2,"hx_Transform_transformVector_V3X2");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_transformVector_FltX4_V3,"hx_Transform_transformVector_FltX4_V3");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_translate_V3,"hx_Transform_translate_V3");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_translate_FltX3,"hx_Transform_translate_FltX3");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_translateForward,"hx_Transform_translateForward");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_translateLeft,"hx_Transform_translateLeft");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_translateSmooth,"hx_Transform_translateSmooth");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_translateUp,"hx_Transform_translateUp");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_translateX,"hx_Transform_translateX");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_translateY,"hx_Transform_translateY");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_translateZ,"hx_Transform_translateZ");
	HX_VISIT_MEMBER_NAME(Transform_obj::hx_Transform_Listener_Construct,"hx_Transform_Listener_Construct");
};

#endif

Class Transform_obj::__mClass;

void Transform_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.Transform"), hx::TCanCast< Transform_obj> ,sStaticFields,sMemberFields,
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

void Transform_obj::__boot()
{
	ANIMATE_SCALE_UNIT= (int)0;
	ANIMATE_SCALE= (int)1;
	ANIMATE_SCALE_X= (int)2;
	ANIMATE_SCALE_Y= (int)3;
	ANIMATE_SCALE_Z= (int)4;
	ANIMATE_ROTATE= (int)8;
	ANIMATE_TRANSLATE= (int)9;
	ANIMATE_TRANSLATE_X= (int)10;
	ANIMATE_TRANSLATE_Y= (int)11;
	ANIMATE_TRANSLATE_Z= (int)12;
	ANIMATE_ROTATE_TRANSLATE= (int)16;
	ANIMATE_SCALE_ROTATE_TRANSLATE= (int)17;
	ANIMATE_SCALE_TRANSLATE= (int)18;
	ANIMATE_SCALE_ROTATE= (int)19;
	hx_Transform_Construct= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("Construct"),(int)0);
	hx_Transform_Construct_Trans= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("Construct_Trans"),(int)1);
	hx_Transform_Construct_V3_Mat_V3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("Construct_V3_Mat_V3"),(int)3);
	hx_Transform_Construct_V3_Qtrn_V3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("Construct_V3_Qtrn_V3"),(int)3);
	hx_Transform_addListener= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("addListener"),(int)3);
	hx_Transform_getAnimationPropertyComponentCount= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("getAnimationPropertyComponentCount"),(int)2);
	hx_Transform_getAnimationPropertyValue= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("getAnimationPropertyValue"),(int)3);
	hx_Transform_getBackVector= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("getBackVector"),(int)1);
	hx_Transform_getBackVector_V3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("getBackVector_V3"),(int)2);
	hx_Transform_getDownVector= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("getDownVector"),(int)1);
	hx_Transform_getDownVector_V3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("getDownVector_V3"),(int)2);
	hx_Transform_getForwardVector= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("getForwardVector"),(int)1);
	hx_Transform_getForwardVector_V3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("getForwardVector_V3"),(int)2);
	hx_Transform_getLeftVector= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("getLeftVector"),(int)1);
	hx_Transform_getLeftVector_V3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("getLeftVector_V3"),(int)2);
	hx_Transform_getMatrix= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("getMatrix"),(int)1);
	hx_Transform_getRightVector= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("getRightVector"),(int)1);
	hx_Transform_getRightVector_V3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("getRightVector_V3"),(int)2);
	hx_Transform_getRotation= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("getRotation"),(int)1);
	hx_Transform_getRotation_V3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("getRotation_V3"),(int)2);
	hx_Transform_getRotation_Mat= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("getRotation_Mat"),(int)2);
	hx_Transform_getRotation_Qtrn= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("getRotation_Qtrn"),(int)2);
	hx_Transform_getScale= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("getScale"),(int)1);
	hx_Transform_getScale_V3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("getScale_V3"),(int)2);
	hx_Transform_getScaleX= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("getScaleX"),(int)1);
	hx_Transform_getScaleY= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("getScaleY"),(int)1);
	hx_Transform_getScaleZ= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("getScaleZ"),(int)1);
	hx_Transform_getTranslation= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("getTranslation"),(int)1);
	hx_Transform_getTranslation_V3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("getTranslation_V3"),(int)2);
	hx_Transform_getTranslationX= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("getTranslationX"),(int)1);
	hx_Transform_getTranslationY= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("getTranslationY"),(int)1);
	hx_Transform_getTranslationZ= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("getTranslationZ"),(int)1);
	hx_Transform_getUpVector= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("getUpVector"),(int)1);
	hx_Transform_getUpVector_V3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("getUpVector_V3"),(int)2);
	hx_Transform_static_isTransformChangedSuspended= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("static_isTransformChangedSuspended"),(int)0);
	hx_Transform_removeListener= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("removeListener"),(int)2);
	hx_Transform_static_resumeTransformChanged= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("static_resumeTransformChanged"),(int)0);
	hx_Transform_rotate_Mat= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("rotate_Mat"),(int)2);
	hx_Transform_rotate_Qtrn= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("rotate_Qtrn"),(int)2);
	hx_Transform_rotate_V3_Flt= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("rotate_V3_Flt"),(int)3);
	hx_Transform_rotate_FltX4= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("rotate_FltX4"),(int)5);
	hx_Transform_rotateX= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("rotateX"),(int)2);
	hx_Transform_rotateY= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("rotateY"),(int)2);
	hx_Transform_rotateZ= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("rotateZ"),(int)2);
	hx_Transform_scale_V3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("scale_V3"),(int)2);
	hx_Transform_scale_Flt= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("scale_Flt"),(int)2);
	hx_Transform_scale_FltX3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("scale_FltX3"),(int)4);
	hx_Transform_scaleX= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("scaleX"),(int)2);
	hx_Transform_scaleY= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("scaleY"),(int)2);
	hx_Transform_scaleZ= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("scaleZ"),(int)2);
	hx_Transform_set_Trans= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("set_Trans"),(int)2);
	hx_Transform_set_V3_Mat_V3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("set_V3_Mat_V3"),(int)4);
	hx_Transform_set_V3_Qtrn_V3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("set_V3_Qtrn_V3"),(int)4);
	hx_Transform_set_V3X2_Flt_V3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("set_V3X2_Flt_V3"),(int)5);
	hx_Transform_setAnimationPropertyValue= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("setAnimationPropertyValue"),(int)4);
	hx_Transform_setIdentity= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("setIdentity"),(int)1);
	hx_Transform_setRotation_Mat= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("setRotation_Mat"),(int)2);
	hx_Transform_setRotation_Qtrn= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("setRotation_Qtrn"),(int)2);
	hx_Transform_setRotation_V3_Flt= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("setRotation_V3_Flt"),(int)3);
	hx_Transform_setRotation_FltX4= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("setRotation_FltX4"),(int)5);
	hx_Transform_setScale_V3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("setScale_V3"),(int)2);
	hx_Transform_setScale_Flt= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("setScale_Flt"),(int)2);
	hx_Transform_setScale_FltX3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("setScale_FltX3"),(int)4);
	hx_Transform_setScaleX= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("setScaleX"),(int)2);
	hx_Transform_setScaleY= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("setScaleY"),(int)2);
	hx_Transform_setScaleZ= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("setScaleZ"),(int)2);
	hx_Transform_setTranslation_V3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("setTranslation_V3"),(int)2);
	hx_Transform_setTranslation_FltX3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("setTranslation_FltX3"),(int)4);
	hx_Transform_setTranslationX= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("setTranslationX"),(int)2);
	hx_Transform_setTranslationY= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("setTranslationY"),(int)2);
	hx_Transform_setTranslationZ= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("setTranslationZ"),(int)2);
	hx_Transform_static_suspendTransformChanged= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("static_suspendTransformChanged"),(int)0);
	hx_Transform_transformPoint_V3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("transformPoint_V3"),(int)2);
	hx_Transform_transformPoint_V3X2= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("transformPoint_V3X2"),(int)3);
	hx_Transform_transformVector_V3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("transformVector_V3"),(int)2);
	hx_Transform_transformVector_V3X2= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("transformVector_V3X2"),(int)3);
	hx_Transform_transformVector_FltX4_V3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("transformVector_FltX4_V3"),(int)-1);
	hx_Transform_translate_V3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("translate_V3"),(int)2);
	hx_Transform_translate_FltX3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("translate_FltX3"),(int)4);
	hx_Transform_translateForward= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("translateForward"),(int)2);
	hx_Transform_translateLeft= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("translateLeft"),(int)2);
	hx_Transform_translateSmooth= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("translateSmooth"),(int)4);
	hx_Transform_translateUp= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("translateUp"),(int)2);
	hx_Transform_translateX= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("translateX"),(int)2);
	hx_Transform_translateY= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("translateY"),(int)2);
	hx_Transform_translateZ= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform >(),HX_CSTRING("translateZ"),(int)2);
	hx_Transform_Listener_Construct= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Transform_Listener >(),HX_CSTRING("Construct"),(int)1);
}

} // end namespace org
} // end namespace gameplay3d
