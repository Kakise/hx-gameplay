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
#ifndef INCLUDED_org_gameplay3d_Node
#include <org/gameplay3d/Node.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsCharacter
#include <org/gameplay3d/PhysicsCharacter.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsCollisionObject
#include <org/gameplay3d/PhysicsCollisionObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsCollisionObject_CollisionListener
#include <org/gameplay3d/PhysicsCollisionObject_CollisionListener.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsCollisionShape
#include <org/gameplay3d/PhysicsCollisionShape.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsGhostObject
#include <org/gameplay3d/PhysicsGhostObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsRigidBody
#include <org/gameplay3d/PhysicsRigidBody.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsVehicle
#include <org/gameplay3d/PhysicsVehicle.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsVehicleWheel
#include <org/gameplay3d/PhysicsVehicleWheel.h>
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
#ifndef INCLUDED_org_gameplay3d_wrapper_PhysicsCollisionObject_CollisionListenerWrapper
#include <org/gameplay3d/wrapper/PhysicsCollisionObject_CollisionListenerWrapper.h>
#endif
namespace org{
namespace gameplay3d{

Void PhysicsCollisionObject_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.PhysicsCollisionObject","new",0xeeb643a9,"org.gameplay3d.PhysicsCollisionObject.new","org/gameplay3d/PhysicsCollisionObject.hx",12,0xdebe4247)
HX_STACK_THIS(this)
HX_STACK_ARG(nativeObjectInitializer,"nativeObjectInitializer")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(12)
	super::__construct(nativeObjectInitializer,nativeObjectInitializerParams);
}
;
	return null();
}

//PhysicsCollisionObject_obj::~PhysicsCollisionObject_obj() { }

Dynamic PhysicsCollisionObject_obj::__CreateEmpty() { return  new PhysicsCollisionObject_obj; }
hx::ObjectPtr< PhysicsCollisionObject_obj > PhysicsCollisionObject_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< PhysicsCollisionObject_obj > result = new PhysicsCollisionObject_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic PhysicsCollisionObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PhysicsCollisionObject_obj > result = new PhysicsCollisionObject_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void PhysicsCollisionObject_obj::addCollisionListener_Lsnr_ColObj( ::org::gameplay3d::wrapper::PhysicsCollisionObject_CollisionListenerWrapper listener,::org::gameplay3d::PhysicsCollisionObject object){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsCollisionObject","addCollisionListener_Lsnr_ColObj",0x1d557848,"org.gameplay3d.PhysicsCollisionObject.addCollisionListener_Lsnr_ColObj","org/gameplay3d/PhysicsCollisionObject.hx",27,0xdebe4247)
		HX_STACK_THIS(this)
		HX_STACK_ARG(listener,"listener")
		HX_STACK_ARG(object,"object")
		HX_STACK_LINE(27)
		::org::gameplay3d::PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_addCollisionListener_Lsnr_ColObj(this->nativeObject,(  (((listener == null()))) ? Dynamic(null()) : Dynamic(listener->nativeObject) ),(  (((object == null()))) ? Dynamic(null()) : Dynamic(object->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PhysicsCollisionObject_obj,addCollisionListener_Lsnr_ColObj,(void))

Void PhysicsCollisionObject_obj::addCollisionListener_Str_ColObj( ::String _function,::org::gameplay3d::PhysicsCollisionObject object){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsCollisionObject","addCollisionListener_Str_ColObj",0x4a412d48,"org.gameplay3d.PhysicsCollisionObject.addCollisionListener_Str_ColObj","org/gameplay3d/PhysicsCollisionObject.hx",33,0xdebe4247)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_function,"_function")
		HX_STACK_ARG(object,"object")
		HX_STACK_LINE(33)
		::org::gameplay3d::PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_addCollisionListener_Str_ColObj(this->nativeObject,_function,(  (((object == null()))) ? Dynamic(null()) : Dynamic(object->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PhysicsCollisionObject_obj,addCollisionListener_Str_ColObj,(void))

::org::gameplay3d::PhysicsCharacter PhysicsCollisionObject_obj::asCharacter( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsCollisionObject","asCharacter",0xd2c39ca0,"org.gameplay3d.PhysicsCollisionObject.asCharacter","org/gameplay3d/PhysicsCollisionObject.hx",39,0xdebe4247)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_character == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::PhysicsCharacter _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::PhysicsCharacter >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(39)
			Dynamic nativeObject = ::org::gameplay3d::PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_asCharacter(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::PhysicsCharacter result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::PhysicsCharacter _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return this->_character = _g1;
	}
	else{
		HX_STACK_LINE(39)
		Dynamic _g2 = ::org::gameplay3d::PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_asCharacter(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::PhysicsCharacter _g3 = this->_character->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_character = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsCollisionObject_obj,asCharacter,return )

::org::gameplay3d::PhysicsGhostObject PhysicsCollisionObject_obj::asGhostObject( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsCollisionObject","asGhostObject",0x433e9425,"org.gameplay3d.PhysicsCollisionObject.asGhostObject","org/gameplay3d/PhysicsCollisionObject.hx",45,0xdebe4247)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_ghostObject == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::PhysicsGhostObject _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::PhysicsGhostObject >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(45)
			Dynamic nativeObject = ::org::gameplay3d::PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_asGhostObject(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::PhysicsGhostObject result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::PhysicsGhostObject _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return this->_ghostObject = _g1;
	}
	else{
		HX_STACK_LINE(45)
		Dynamic _g2 = ::org::gameplay3d::PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_asGhostObject(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::PhysicsGhostObject _g3 = this->_ghostObject->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_ghostObject = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsCollisionObject_obj,asGhostObject,return )

::org::gameplay3d::PhysicsRigidBody PhysicsCollisionObject_obj::asRigidBody( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsCollisionObject","asRigidBody",0x6cc5a5e4,"org.gameplay3d.PhysicsCollisionObject.asRigidBody","org/gameplay3d/PhysicsCollisionObject.hx",51,0xdebe4247)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_rigidBody == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::PhysicsRigidBody _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::PhysicsRigidBody >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(51)
			Dynamic nativeObject = ::org::gameplay3d::PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_asRigidBody(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::PhysicsRigidBody result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::PhysicsRigidBody _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return this->_rigidBody = _g1;
	}
	else{
		HX_STACK_LINE(51)
		Dynamic _g2 = ::org::gameplay3d::PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_asRigidBody(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::PhysicsRigidBody _g3 = this->_rigidBody->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_rigidBody = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsCollisionObject_obj,asRigidBody,return )

::org::gameplay3d::PhysicsVehicle PhysicsCollisionObject_obj::asVehicle( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsCollisionObject","asVehicle",0x049c2ce3,"org.gameplay3d.PhysicsCollisionObject.asVehicle","org/gameplay3d/PhysicsCollisionObject.hx",57,0xdebe4247)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_vehicle == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::PhysicsVehicle _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::PhysicsVehicle >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(57)
			Dynamic nativeObject = ::org::gameplay3d::PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_asVehicle(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::PhysicsVehicle result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::PhysicsVehicle _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return this->_vehicle = _g1;
	}
	else{
		HX_STACK_LINE(57)
		Dynamic _g2 = ::org::gameplay3d::PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_asVehicle(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::PhysicsVehicle _g3 = this->_vehicle->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_vehicle = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsCollisionObject_obj,asVehicle,return )

::org::gameplay3d::PhysicsVehicleWheel PhysicsCollisionObject_obj::asVehicleWheel( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsCollisionObject","asVehicleWheel",0x99aee0b8,"org.gameplay3d.PhysicsCollisionObject.asVehicleWheel","org/gameplay3d/PhysicsCollisionObject.hx",63,0xdebe4247)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_vehicleWheel == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::PhysicsVehicleWheel _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::PhysicsVehicleWheel >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(63)
			Dynamic nativeObject = ::org::gameplay3d::PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_asVehicleWheel(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::PhysicsVehicleWheel result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::PhysicsVehicleWheel _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return this->_vehicleWheel = _g1;
	}
	else{
		HX_STACK_LINE(63)
		Dynamic _g2 = ::org::gameplay3d::PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_asVehicleWheel(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::PhysicsVehicleWheel _g3 = this->_vehicleWheel->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_vehicleWheel = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsCollisionObject_obj,asVehicleWheel,return )

bool PhysicsCollisionObject_obj::collidesWith( ::org::gameplay3d::PhysicsCollisionObject object){
	HX_STACK_FRAME("org.gameplay3d.PhysicsCollisionObject","collidesWith",0x70331b72,"org.gameplay3d.PhysicsCollisionObject.collidesWith","org/gameplay3d/PhysicsCollisionObject.hx",69,0xdebe4247)
	HX_STACK_THIS(this)
	HX_STACK_ARG(object,"object")
	HX_STACK_LINE(69)
	return ::org::gameplay3d::PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_collidesWith(this->nativeObject,(  (((object == null()))) ? Dynamic(null()) : Dynamic(object->nativeObject) ));
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsCollisionObject_obj,collidesWith,return )

::org::gameplay3d::PhysicsCollisionShape PhysicsCollisionObject_obj::getCollisionShape( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsCollisionObject","getCollisionShape",0x57f7bd8e,"org.gameplay3d.PhysicsCollisionObject.getCollisionShape","org/gameplay3d/PhysicsCollisionObject.hx",75,0xdebe4247)
	HX_STACK_THIS(this)
	HX_STACK_LINE(75)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::PhysicsCollisionShape >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(75)
	Dynamic nativeObject = ::org::gameplay3d::PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_getCollisionShape(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(75)
	if (((nativeObject == null()))){
		HX_STACK_LINE(75)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(75)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(75)
			::org::gameplay3d::PhysicsCollisionShape result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(75)
			if (((result == null()))){
				HX_STACK_LINE(75)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(75)
				::org::gameplay3d::PhysicsCollisionShape _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(75)
				result = _g;
				HX_STACK_LINE(75)
				ref->set(result);
			}
			HX_STACK_LINE(75)
			return result;
		}
		else{
			HX_STACK_LINE(75)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(75)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(75)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsCollisionObject_obj,getCollisionShape,return )

::org::gameplay3d::Node PhysicsCollisionObject_obj::getNode( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsCollisionObject","getNode",0xffe50581,"org.gameplay3d.PhysicsCollisionObject.getNode","org/gameplay3d/PhysicsCollisionObject.hx",81,0xdebe4247)
	HX_STACK_THIS(this)
	HX_STACK_LINE(81)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Node >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(81)
	Dynamic nativeObject = ::org::gameplay3d::PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_getNode(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(81)
	if (((nativeObject == null()))){
		HX_STACK_LINE(81)
		return null();
	}
	else{
		HX_STACK_LINE(81)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(81)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(81)
			::org::gameplay3d::Node result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(81)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(81)
				::org::gameplay3d::Node _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(81)
				result = _g;
				HX_STACK_LINE(81)
				ref->set(result);
			}
			HX_STACK_LINE(81)
			return result;
		}
		else{
			HX_STACK_LINE(81)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(81)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(81)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsCollisionObject_obj,getNode,return )

int PhysicsCollisionObject_obj::getShapeType( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsCollisionObject","getShapeType",0x75af9e9c,"org.gameplay3d.PhysicsCollisionObject.getShapeType","org/gameplay3d/PhysicsCollisionObject.hx",87,0xdebe4247)
	HX_STACK_THIS(this)
	HX_STACK_LINE(87)
	return ::org::gameplay3d::PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_getShapeType(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsCollisionObject_obj,getShapeType,return )

int PhysicsCollisionObject_obj::getType( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsCollisionObject","getType",0x03e3ee39,"org.gameplay3d.PhysicsCollisionObject.getType","org/gameplay3d/PhysicsCollisionObject.hx",93,0xdebe4247)
	HX_STACK_THIS(this)
	HX_STACK_LINE(93)
	return ::org::gameplay3d::PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_getType(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsCollisionObject_obj,getType,return )

bool PhysicsCollisionObject_obj::isDynamic( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsCollisionObject","isDynamic",0x1dedacbe,"org.gameplay3d.PhysicsCollisionObject.isDynamic","org/gameplay3d/PhysicsCollisionObject.hx",99,0xdebe4247)
	HX_STACK_THIS(this)
	HX_STACK_LINE(99)
	return ::org::gameplay3d::PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_isDynamic(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsCollisionObject_obj,isDynamic,return )

bool PhysicsCollisionObject_obj::isEnabled( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsCollisionObject","isEnabled",0x660911c0,"org.gameplay3d.PhysicsCollisionObject.isEnabled","org/gameplay3d/PhysicsCollisionObject.hx",105,0xdebe4247)
	HX_STACK_THIS(this)
	HX_STACK_LINE(105)
	return ::org::gameplay3d::PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_isEnabled(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsCollisionObject_obj,isEnabled,return )

bool PhysicsCollisionObject_obj::isKinematic( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsCollisionObject","isKinematic",0x7be49404,"org.gameplay3d.PhysicsCollisionObject.isKinematic","org/gameplay3d/PhysicsCollisionObject.hx",111,0xdebe4247)
	HX_STACK_THIS(this)
	HX_STACK_LINE(111)
	return ::org::gameplay3d::PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_isKinematic(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsCollisionObject_obj,isKinematic,return )

Void PhysicsCollisionObject_obj::removeCollisionListener_Lsnr_ColObj( ::org::gameplay3d::wrapper::PhysicsCollisionObject_CollisionListenerWrapper listener,::org::gameplay3d::PhysicsCollisionObject object){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsCollisionObject","removeCollisionListener_Lsnr_ColObj",0x6c476477,"org.gameplay3d.PhysicsCollisionObject.removeCollisionListener_Lsnr_ColObj","org/gameplay3d/PhysicsCollisionObject.hx",117,0xdebe4247)
		HX_STACK_THIS(this)
		HX_STACK_ARG(listener,"listener")
		HX_STACK_ARG(object,"object")
		HX_STACK_LINE(117)
		::org::gameplay3d::PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_removeCollisionListener_Lsnr_ColObj(this->nativeObject,(  (((listener == null()))) ? Dynamic(null()) : Dynamic(listener->nativeObject) ),(  (((object == null()))) ? Dynamic(null()) : Dynamic(object->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PhysicsCollisionObject_obj,removeCollisionListener_Lsnr_ColObj,(void))

Void PhysicsCollisionObject_obj::removeCollisionListener_Str_ColObj( ::String _function,::org::gameplay3d::PhysicsCollisionObject object){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsCollisionObject","removeCollisionListener_Str_ColObj",0x96601bf9,"org.gameplay3d.PhysicsCollisionObject.removeCollisionListener_Str_ColObj","org/gameplay3d/PhysicsCollisionObject.hx",123,0xdebe4247)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_function,"_function")
		HX_STACK_ARG(object,"object")
		HX_STACK_LINE(123)
		::org::gameplay3d::PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_removeCollisionListener_Str_ColObj(this->nativeObject,_function,(  (((object == null()))) ? Dynamic(null()) : Dynamic(object->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PhysicsCollisionObject_obj,removeCollisionListener_Str_ColObj,(void))

Void PhysicsCollisionObject_obj::setEnabled( bool enable){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsCollisionObject","setEnabled",0x4b94a0d6,"org.gameplay3d.PhysicsCollisionObject.setEnabled","org/gameplay3d/PhysicsCollisionObject.hx",129,0xdebe4247)
		HX_STACK_THIS(this)
		HX_STACK_ARG(enable,"enable")
		HX_STACK_LINE(129)
		::org::gameplay3d::PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_setEnabled(this->nativeObject,enable);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsCollisionObject_obj,setEnabled,(void))

Dynamic PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_addCollisionListener_Lsnr_ColObj;

Dynamic PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_addCollisionListener_Str_ColObj;

Dynamic PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_asCharacter;

Dynamic PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_asGhostObject;

Dynamic PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_asRigidBody;

Dynamic PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_asVehicle;

Dynamic PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_asVehicleWheel;

Dynamic PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_collidesWith;

Dynamic PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_getCollisionShape;

Dynamic PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_getNode;

Dynamic PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_getShapeType;

Dynamic PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_getType;

Dynamic PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_isDynamic;

Dynamic PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_isEnabled;

Dynamic PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_isKinematic;

Dynamic PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_removeCollisionListener_Lsnr_ColObj;

Dynamic PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_removeCollisionListener_Str_ColObj;

Dynamic PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_setEnabled;


PhysicsCollisionObject_obj::PhysicsCollisionObject_obj()
{
}

void PhysicsCollisionObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PhysicsCollisionObject);
	HX_MARK_MEMBER_NAME(_character,"_character");
	HX_MARK_MEMBER_NAME(_ghostObject,"_ghostObject");
	HX_MARK_MEMBER_NAME(_rigidBody,"_rigidBody");
	HX_MARK_MEMBER_NAME(_vehicle,"_vehicle");
	HX_MARK_MEMBER_NAME(_vehicleWheel,"_vehicleWheel");
	::org::gameplay3d::intern::NativeBinding_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PhysicsCollisionObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_character,"_character");
	HX_VISIT_MEMBER_NAME(_ghostObject,"_ghostObject");
	HX_VISIT_MEMBER_NAME(_rigidBody,"_rigidBody");
	HX_VISIT_MEMBER_NAME(_vehicle,"_vehicle");
	HX_VISIT_MEMBER_NAME(_vehicleWheel,"_vehicleWheel");
	::org::gameplay3d::intern::NativeBinding_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PhysicsCollisionObject_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getNode") ) { return getNode_dyn(); }
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_vehicle") ) { return _vehicle; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"asVehicle") ) { return asVehicle_dyn(); }
		if (HX_FIELD_EQ(inName,"isDynamic") ) { return isDynamic_dyn(); }
		if (HX_FIELD_EQ(inName,"isEnabled") ) { return isEnabled_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_character") ) { return _character; }
		if (HX_FIELD_EQ(inName,"_rigidBody") ) { return _rigidBody; }
		if (HX_FIELD_EQ(inName,"setEnabled") ) { return setEnabled_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"asCharacter") ) { return asCharacter_dyn(); }
		if (HX_FIELD_EQ(inName,"asRigidBody") ) { return asRigidBody_dyn(); }
		if (HX_FIELD_EQ(inName,"isKinematic") ) { return isKinematic_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_ghostObject") ) { return _ghostObject; }
		if (HX_FIELD_EQ(inName,"collidesWith") ) { return collidesWith_dyn(); }
		if (HX_FIELD_EQ(inName,"getShapeType") ) { return getShapeType_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_vehicleWheel") ) { return _vehicleWheel; }
		if (HX_FIELD_EQ(inName,"asGhostObject") ) { return asGhostObject_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"asVehicleWheel") ) { return asVehicleWheel_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getCollisionShape") ) { return getCollisionShape_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"addCollisionListener_Str_ColObj") ) { return addCollisionListener_Str_ColObj_dyn(); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"addCollisionListener_Lsnr_ColObj") ) { return addCollisionListener_Lsnr_ColObj_dyn(); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionObject_getNode") ) { return hx_PhysicsCollisionObject_getNode; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionObject_getType") ) { return hx_PhysicsCollisionObject_getType; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"removeCollisionListener_Str_ColObj") ) { return removeCollisionListener_Str_ColObj_dyn(); }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionObject_asVehicle") ) { return hx_PhysicsCollisionObject_asVehicle; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionObject_isDynamic") ) { return hx_PhysicsCollisionObject_isDynamic; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionObject_isEnabled") ) { return hx_PhysicsCollisionObject_isEnabled; }
		if (HX_FIELD_EQ(inName,"removeCollisionListener_Lsnr_ColObj") ) { return removeCollisionListener_Lsnr_ColObj_dyn(); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionObject_setEnabled") ) { return hx_PhysicsCollisionObject_setEnabled; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionObject_asCharacter") ) { return hx_PhysicsCollisionObject_asCharacter; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionObject_asRigidBody") ) { return hx_PhysicsCollisionObject_asRigidBody; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionObject_isKinematic") ) { return hx_PhysicsCollisionObject_isKinematic; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionObject_collidesWith") ) { return hx_PhysicsCollisionObject_collidesWith; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionObject_getShapeType") ) { return hx_PhysicsCollisionObject_getShapeType; }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionObject_asGhostObject") ) { return hx_PhysicsCollisionObject_asGhostObject; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionObject_asVehicleWheel") ) { return hx_PhysicsCollisionObject_asVehicleWheel; }
		break;
	case 43:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionObject_getCollisionShape") ) { return hx_PhysicsCollisionObject_getCollisionShape; }
		break;
	case 57:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionObject_addCollisionListener_Str_ColObj") ) { return hx_PhysicsCollisionObject_addCollisionListener_Str_ColObj; }
		break;
	case 58:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionObject_addCollisionListener_Lsnr_ColObj") ) { return hx_PhysicsCollisionObject_addCollisionListener_Lsnr_ColObj; }
		break;
	case 60:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionObject_removeCollisionListener_Str_ColObj") ) { return hx_PhysicsCollisionObject_removeCollisionListener_Str_ColObj; }
		break;
	case 61:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionObject_removeCollisionListener_Lsnr_ColObj") ) { return hx_PhysicsCollisionObject_removeCollisionListener_Lsnr_ColObj; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PhysicsCollisionObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_vehicle") ) { _vehicle=inValue.Cast< ::org::gameplay3d::PhysicsVehicle >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_character") ) { _character=inValue.Cast< ::org::gameplay3d::PhysicsCharacter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rigidBody") ) { _rigidBody=inValue.Cast< ::org::gameplay3d::PhysicsRigidBody >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_ghostObject") ) { _ghostObject=inValue.Cast< ::org::gameplay3d::PhysicsGhostObject >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_vehicleWheel") ) { _vehicleWheel=inValue.Cast< ::org::gameplay3d::PhysicsVehicleWheel >(); return inValue; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionObject_getNode") ) { hx_PhysicsCollisionObject_getNode=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionObject_getType") ) { hx_PhysicsCollisionObject_getType=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionObject_asVehicle") ) { hx_PhysicsCollisionObject_asVehicle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionObject_isDynamic") ) { hx_PhysicsCollisionObject_isDynamic=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionObject_isEnabled") ) { hx_PhysicsCollisionObject_isEnabled=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionObject_setEnabled") ) { hx_PhysicsCollisionObject_setEnabled=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionObject_asCharacter") ) { hx_PhysicsCollisionObject_asCharacter=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionObject_asRigidBody") ) { hx_PhysicsCollisionObject_asRigidBody=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionObject_isKinematic") ) { hx_PhysicsCollisionObject_isKinematic=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionObject_collidesWith") ) { hx_PhysicsCollisionObject_collidesWith=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionObject_getShapeType") ) { hx_PhysicsCollisionObject_getShapeType=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionObject_asGhostObject") ) { hx_PhysicsCollisionObject_asGhostObject=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionObject_asVehicleWheel") ) { hx_PhysicsCollisionObject_asVehicleWheel=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 43:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionObject_getCollisionShape") ) { hx_PhysicsCollisionObject_getCollisionShape=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 57:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionObject_addCollisionListener_Str_ColObj") ) { hx_PhysicsCollisionObject_addCollisionListener_Str_ColObj=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 58:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionObject_addCollisionListener_Lsnr_ColObj") ) { hx_PhysicsCollisionObject_addCollisionListener_Lsnr_ColObj=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 60:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionObject_removeCollisionListener_Str_ColObj") ) { hx_PhysicsCollisionObject_removeCollisionListener_Str_ColObj=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 61:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionObject_removeCollisionListener_Lsnr_ColObj") ) { hx_PhysicsCollisionObject_removeCollisionListener_Lsnr_ColObj=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PhysicsCollisionObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_character"));
	outFields->push(HX_CSTRING("_ghostObject"));
	outFields->push(HX_CSTRING("_rigidBody"));
	outFields->push(HX_CSTRING("_vehicle"));
	outFields->push(HX_CSTRING("_vehicleWheel"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("hx_PhysicsCollisionObject_addCollisionListener_Lsnr_ColObj"),
	HX_CSTRING("hx_PhysicsCollisionObject_addCollisionListener_Str_ColObj"),
	HX_CSTRING("hx_PhysicsCollisionObject_asCharacter"),
	HX_CSTRING("hx_PhysicsCollisionObject_asGhostObject"),
	HX_CSTRING("hx_PhysicsCollisionObject_asRigidBody"),
	HX_CSTRING("hx_PhysicsCollisionObject_asVehicle"),
	HX_CSTRING("hx_PhysicsCollisionObject_asVehicleWheel"),
	HX_CSTRING("hx_PhysicsCollisionObject_collidesWith"),
	HX_CSTRING("hx_PhysicsCollisionObject_getCollisionShape"),
	HX_CSTRING("hx_PhysicsCollisionObject_getNode"),
	HX_CSTRING("hx_PhysicsCollisionObject_getShapeType"),
	HX_CSTRING("hx_PhysicsCollisionObject_getType"),
	HX_CSTRING("hx_PhysicsCollisionObject_isDynamic"),
	HX_CSTRING("hx_PhysicsCollisionObject_isEnabled"),
	HX_CSTRING("hx_PhysicsCollisionObject_isKinematic"),
	HX_CSTRING("hx_PhysicsCollisionObject_removeCollisionListener_Lsnr_ColObj"),
	HX_CSTRING("hx_PhysicsCollisionObject_removeCollisionListener_Str_ColObj"),
	HX_CSTRING("hx_PhysicsCollisionObject_setEnabled"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::org::gameplay3d::PhysicsCharacter*/ ,(int)offsetof(PhysicsCollisionObject_obj,_character),HX_CSTRING("_character")},
	{hx::fsObject /*::org::gameplay3d::PhysicsGhostObject*/ ,(int)offsetof(PhysicsCollisionObject_obj,_ghostObject),HX_CSTRING("_ghostObject")},
	{hx::fsObject /*::org::gameplay3d::PhysicsRigidBody*/ ,(int)offsetof(PhysicsCollisionObject_obj,_rigidBody),HX_CSTRING("_rigidBody")},
	{hx::fsObject /*::org::gameplay3d::PhysicsVehicle*/ ,(int)offsetof(PhysicsCollisionObject_obj,_vehicle),HX_CSTRING("_vehicle")},
	{hx::fsObject /*::org::gameplay3d::PhysicsVehicleWheel*/ ,(int)offsetof(PhysicsCollisionObject_obj,_vehicleWheel),HX_CSTRING("_vehicleWheel")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_character"),
	HX_CSTRING("_ghostObject"),
	HX_CSTRING("_rigidBody"),
	HX_CSTRING("_vehicle"),
	HX_CSTRING("_vehicleWheel"),
	HX_CSTRING("addCollisionListener_Lsnr_ColObj"),
	HX_CSTRING("addCollisionListener_Str_ColObj"),
	HX_CSTRING("asCharacter"),
	HX_CSTRING("asGhostObject"),
	HX_CSTRING("asRigidBody"),
	HX_CSTRING("asVehicle"),
	HX_CSTRING("asVehicleWheel"),
	HX_CSTRING("collidesWith"),
	HX_CSTRING("getCollisionShape"),
	HX_CSTRING("getNode"),
	HX_CSTRING("getShapeType"),
	HX_CSTRING("getType"),
	HX_CSTRING("isDynamic"),
	HX_CSTRING("isEnabled"),
	HX_CSTRING("isKinematic"),
	HX_CSTRING("removeCollisionListener_Lsnr_ColObj"),
	HX_CSTRING("removeCollisionListener_Str_ColObj"),
	HX_CSTRING("setEnabled"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PhysicsCollisionObject_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_addCollisionListener_Lsnr_ColObj,"hx_PhysicsCollisionObject_addCollisionListener_Lsnr_ColObj");
	HX_MARK_MEMBER_NAME(PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_addCollisionListener_Str_ColObj,"hx_PhysicsCollisionObject_addCollisionListener_Str_ColObj");
	HX_MARK_MEMBER_NAME(PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_asCharacter,"hx_PhysicsCollisionObject_asCharacter");
	HX_MARK_MEMBER_NAME(PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_asGhostObject,"hx_PhysicsCollisionObject_asGhostObject");
	HX_MARK_MEMBER_NAME(PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_asRigidBody,"hx_PhysicsCollisionObject_asRigidBody");
	HX_MARK_MEMBER_NAME(PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_asVehicle,"hx_PhysicsCollisionObject_asVehicle");
	HX_MARK_MEMBER_NAME(PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_asVehicleWheel,"hx_PhysicsCollisionObject_asVehicleWheel");
	HX_MARK_MEMBER_NAME(PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_collidesWith,"hx_PhysicsCollisionObject_collidesWith");
	HX_MARK_MEMBER_NAME(PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_getCollisionShape,"hx_PhysicsCollisionObject_getCollisionShape");
	HX_MARK_MEMBER_NAME(PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_getNode,"hx_PhysicsCollisionObject_getNode");
	HX_MARK_MEMBER_NAME(PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_getShapeType,"hx_PhysicsCollisionObject_getShapeType");
	HX_MARK_MEMBER_NAME(PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_getType,"hx_PhysicsCollisionObject_getType");
	HX_MARK_MEMBER_NAME(PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_isDynamic,"hx_PhysicsCollisionObject_isDynamic");
	HX_MARK_MEMBER_NAME(PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_isEnabled,"hx_PhysicsCollisionObject_isEnabled");
	HX_MARK_MEMBER_NAME(PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_isKinematic,"hx_PhysicsCollisionObject_isKinematic");
	HX_MARK_MEMBER_NAME(PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_removeCollisionListener_Lsnr_ColObj,"hx_PhysicsCollisionObject_removeCollisionListener_Lsnr_ColObj");
	HX_MARK_MEMBER_NAME(PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_removeCollisionListener_Str_ColObj,"hx_PhysicsCollisionObject_removeCollisionListener_Str_ColObj");
	HX_MARK_MEMBER_NAME(PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_setEnabled,"hx_PhysicsCollisionObject_setEnabled");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PhysicsCollisionObject_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_addCollisionListener_Lsnr_ColObj,"hx_PhysicsCollisionObject_addCollisionListener_Lsnr_ColObj");
	HX_VISIT_MEMBER_NAME(PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_addCollisionListener_Str_ColObj,"hx_PhysicsCollisionObject_addCollisionListener_Str_ColObj");
	HX_VISIT_MEMBER_NAME(PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_asCharacter,"hx_PhysicsCollisionObject_asCharacter");
	HX_VISIT_MEMBER_NAME(PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_asGhostObject,"hx_PhysicsCollisionObject_asGhostObject");
	HX_VISIT_MEMBER_NAME(PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_asRigidBody,"hx_PhysicsCollisionObject_asRigidBody");
	HX_VISIT_MEMBER_NAME(PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_asVehicle,"hx_PhysicsCollisionObject_asVehicle");
	HX_VISIT_MEMBER_NAME(PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_asVehicleWheel,"hx_PhysicsCollisionObject_asVehicleWheel");
	HX_VISIT_MEMBER_NAME(PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_collidesWith,"hx_PhysicsCollisionObject_collidesWith");
	HX_VISIT_MEMBER_NAME(PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_getCollisionShape,"hx_PhysicsCollisionObject_getCollisionShape");
	HX_VISIT_MEMBER_NAME(PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_getNode,"hx_PhysicsCollisionObject_getNode");
	HX_VISIT_MEMBER_NAME(PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_getShapeType,"hx_PhysicsCollisionObject_getShapeType");
	HX_VISIT_MEMBER_NAME(PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_getType,"hx_PhysicsCollisionObject_getType");
	HX_VISIT_MEMBER_NAME(PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_isDynamic,"hx_PhysicsCollisionObject_isDynamic");
	HX_VISIT_MEMBER_NAME(PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_isEnabled,"hx_PhysicsCollisionObject_isEnabled");
	HX_VISIT_MEMBER_NAME(PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_isKinematic,"hx_PhysicsCollisionObject_isKinematic");
	HX_VISIT_MEMBER_NAME(PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_removeCollisionListener_Lsnr_ColObj,"hx_PhysicsCollisionObject_removeCollisionListener_Lsnr_ColObj");
	HX_VISIT_MEMBER_NAME(PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_removeCollisionListener_Str_ColObj,"hx_PhysicsCollisionObject_removeCollisionListener_Str_ColObj");
	HX_VISIT_MEMBER_NAME(PhysicsCollisionObject_obj::hx_PhysicsCollisionObject_setEnabled,"hx_PhysicsCollisionObject_setEnabled");
};

#endif

Class PhysicsCollisionObject_obj::__mClass;

void PhysicsCollisionObject_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.PhysicsCollisionObject"), hx::TCanCast< PhysicsCollisionObject_obj> ,sStaticFields,sMemberFields,
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

void PhysicsCollisionObject_obj::__boot()
{
	hx_PhysicsCollisionObject_addCollisionListener_Lsnr_ColObj= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsCollisionObject >(),HX_CSTRING("addCollisionListener_Lsnr_ColObj"),(int)3);
	hx_PhysicsCollisionObject_addCollisionListener_Str_ColObj= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsCollisionObject >(),HX_CSTRING("addCollisionListener_Str_ColObj"),(int)3);
	hx_PhysicsCollisionObject_asCharacter= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsCollisionObject >(),HX_CSTRING("asCharacter"),(int)1);
	hx_PhysicsCollisionObject_asGhostObject= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsCollisionObject >(),HX_CSTRING("asGhostObject"),(int)1);
	hx_PhysicsCollisionObject_asRigidBody= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsCollisionObject >(),HX_CSTRING("asRigidBody"),(int)1);
	hx_PhysicsCollisionObject_asVehicle= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsCollisionObject >(),HX_CSTRING("asVehicle"),(int)1);
	hx_PhysicsCollisionObject_asVehicleWheel= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsCollisionObject >(),HX_CSTRING("asVehicleWheel"),(int)1);
	hx_PhysicsCollisionObject_collidesWith= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsCollisionObject >(),HX_CSTRING("collidesWith"),(int)2);
	hx_PhysicsCollisionObject_getCollisionShape= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsCollisionObject >(),HX_CSTRING("getCollisionShape"),(int)1);
	hx_PhysicsCollisionObject_getNode= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsCollisionObject >(),HX_CSTRING("getNode"),(int)1);
	hx_PhysicsCollisionObject_getShapeType= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsCollisionObject >(),HX_CSTRING("getShapeType"),(int)1);
	hx_PhysicsCollisionObject_getType= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsCollisionObject >(),HX_CSTRING("getType"),(int)1);
	hx_PhysicsCollisionObject_isDynamic= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsCollisionObject >(),HX_CSTRING("isDynamic"),(int)1);
	hx_PhysicsCollisionObject_isEnabled= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsCollisionObject >(),HX_CSTRING("isEnabled"),(int)1);
	hx_PhysicsCollisionObject_isKinematic= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsCollisionObject >(),HX_CSTRING("isKinematic"),(int)1);
	hx_PhysicsCollisionObject_removeCollisionListener_Lsnr_ColObj= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsCollisionObject >(),HX_CSTRING("removeCollisionListener_Lsnr_ColObj"),(int)3);
	hx_PhysicsCollisionObject_removeCollisionListener_Str_ColObj= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsCollisionObject >(),HX_CSTRING("removeCollisionListener_Str_ColObj"),(int)3);
	hx_PhysicsCollisionObject_setEnabled= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsCollisionObject >(),HX_CSTRING("setEnabled"),(int)2);
}

} // end namespace org
} // end namespace gameplay3d
