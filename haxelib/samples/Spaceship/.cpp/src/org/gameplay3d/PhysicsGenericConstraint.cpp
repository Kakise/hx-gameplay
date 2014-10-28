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
#ifndef INCLUDED_org_gameplay3d_PhysicsConstraint
#include <org/gameplay3d/PhysicsConstraint.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsGenericConstraint
#include <org/gameplay3d/PhysicsGenericConstraint.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Quaternion
#include <org/gameplay3d/Quaternion.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Vector3
#include <org/gameplay3d/Vector3.h>
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
#ifndef INCLUDED_org_gameplay3d_intern_NativeBinding
#include <org/gameplay3d/intern/NativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_NativeInterface
#include <org/gameplay3d/util/NativeInterface.h>
#endif
namespace org{
namespace gameplay3d{

Void PhysicsGenericConstraint_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.PhysicsGenericConstraint","new",0x9997032c,"org.gameplay3d.PhysicsGenericConstraint.new","org/gameplay3d/PhysicsGenericConstraint.hx",13,0x444f7c24)
HX_STACK_THIS(this)
HX_STACK_ARG(nativeObjectInitializer,"nativeObjectInitializer")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(13)
	super::__construct(nativeObjectInitializer,nativeObjectInitializerParams);
}
;
	return null();
}

//PhysicsGenericConstraint_obj::~PhysicsGenericConstraint_obj() { }

Dynamic PhysicsGenericConstraint_obj::__CreateEmpty() { return  new PhysicsGenericConstraint_obj; }
hx::ObjectPtr< PhysicsGenericConstraint_obj > PhysicsGenericConstraint_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< PhysicsGenericConstraint_obj > result = new PhysicsGenericConstraint_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic PhysicsGenericConstraint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PhysicsGenericConstraint_obj > result = new PhysicsGenericConstraint_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::org::gameplay3d::immutable::IQuaternion PhysicsGenericConstraint_obj::getRotationOffsetA( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsGenericConstraint","getRotationOffsetA",0x57a4aa6e,"org.gameplay3d.PhysicsGenericConstraint.getRotationOffsetA","org/gameplay3d/PhysicsGenericConstraint.hx",27,0x444f7c24)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_rotationOffsetA == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Quaternion _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Quaternion >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(27)
			Dynamic nativeObject = ::org::gameplay3d::PhysicsGenericConstraint_obj::hx_PhysicsGenericConstraint_getRotationOffsetA(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
		return this->_rotationOffsetA = _g1;
	}
	else{
		HX_STACK_LINE(27)
		Dynamic _g2 = ::org::gameplay3d::PhysicsGenericConstraint_obj::hx_PhysicsGenericConstraint_getRotationOffsetA(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Quaternion _g3 = this->_rotationOffsetA->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_rotationOffsetA = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsGenericConstraint_obj,getRotationOffsetA,return )

::org::gameplay3d::immutable::IQuaternion PhysicsGenericConstraint_obj::getRotationOffsetB( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsGenericConstraint","getRotationOffsetB",0x57a4aa6f,"org.gameplay3d.PhysicsGenericConstraint.getRotationOffsetB","org/gameplay3d/PhysicsGenericConstraint.hx",33,0x444f7c24)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_rotationOffsetB == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Quaternion _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Quaternion >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(33)
			Dynamic nativeObject = ::org::gameplay3d::PhysicsGenericConstraint_obj::hx_PhysicsGenericConstraint_getRotationOffsetB(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
		return this->_rotationOffsetB = _g1;
	}
	else{
		HX_STACK_LINE(33)
		Dynamic _g2 = ::org::gameplay3d::PhysicsGenericConstraint_obj::hx_PhysicsGenericConstraint_getRotationOffsetB(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Quaternion _g3 = this->_rotationOffsetB->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_rotationOffsetB = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsGenericConstraint_obj,getRotationOffsetB,return )

::org::gameplay3d::immutable::IVector3 PhysicsGenericConstraint_obj::getTranslationOffsetA( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsGenericConstraint","getTranslationOffsetA",0xf9b5c85f,"org.gameplay3d.PhysicsGenericConstraint.getTranslationOffsetA","org/gameplay3d/PhysicsGenericConstraint.hx",39,0x444f7c24)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_translationOffsetA == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(39)
			Dynamic nativeObject = ::org::gameplay3d::PhysicsGenericConstraint_obj::hx_PhysicsGenericConstraint_getTranslationOffsetA(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
		return this->_translationOffsetA = _g1;
	}
	else{
		HX_STACK_LINE(39)
		Dynamic _g2 = ::org::gameplay3d::PhysicsGenericConstraint_obj::hx_PhysicsGenericConstraint_getTranslationOffsetA(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g3 = this->_translationOffsetA->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_translationOffsetA = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsGenericConstraint_obj,getTranslationOffsetA,return )

::org::gameplay3d::immutable::IVector3 PhysicsGenericConstraint_obj::getTranslationOffsetB( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsGenericConstraint","getTranslationOffsetB",0xf9b5c860,"org.gameplay3d.PhysicsGenericConstraint.getTranslationOffsetB","org/gameplay3d/PhysicsGenericConstraint.hx",45,0x444f7c24)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_translationOffsetB == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(45)
			Dynamic nativeObject = ::org::gameplay3d::PhysicsGenericConstraint_obj::hx_PhysicsGenericConstraint_getTranslationOffsetB(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
		return this->_translationOffsetB = _g1;
	}
	else{
		HX_STACK_LINE(45)
		Dynamic _g2 = ::org::gameplay3d::PhysicsGenericConstraint_obj::hx_PhysicsGenericConstraint_getTranslationOffsetB(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g3 = this->_translationOffsetB->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_translationOffsetB = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsGenericConstraint_obj,getTranslationOffsetB,return )

Void PhysicsGenericConstraint_obj::setAngularLowerLimit( ::org::gameplay3d::immutable::IVector3 limits){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsGenericConstraint","setAngularLowerLimit",0xed3668ae,"org.gameplay3d.PhysicsGenericConstraint.setAngularLowerLimit","org/gameplay3d/PhysicsGenericConstraint.hx",51,0x444f7c24)
		HX_STACK_THIS(this)
		HX_STACK_ARG(limits,"limits")
		HX_STACK_LINE(51)
		::org::gameplay3d::PhysicsGenericConstraint_obj::hx_PhysicsGenericConstraint_setAngularLowerLimit(this->nativeObject,(  (((limits == null()))) ? Dynamic(null()) : Dynamic(limits->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsGenericConstraint_obj,setAngularLowerLimit,(void))

Void PhysicsGenericConstraint_obj::setAngularUpperLimit( ::org::gameplay3d::immutable::IVector3 limits){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsGenericConstraint","setAngularUpperLimit",0xf264e9ad,"org.gameplay3d.PhysicsGenericConstraint.setAngularUpperLimit","org/gameplay3d/PhysicsGenericConstraint.hx",57,0x444f7c24)
		HX_STACK_THIS(this)
		HX_STACK_ARG(limits,"limits")
		HX_STACK_LINE(57)
		::org::gameplay3d::PhysicsGenericConstraint_obj::hx_PhysicsGenericConstraint_setAngularUpperLimit(this->nativeObject,(  (((limits == null()))) ? Dynamic(null()) : Dynamic(limits->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsGenericConstraint_obj,setAngularUpperLimit,(void))

Void PhysicsGenericConstraint_obj::setLinearLowerLimit( ::org::gameplay3d::immutable::IVector3 limits){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsGenericConstraint","setLinearLowerLimit",0x42ec1e4d,"org.gameplay3d.PhysicsGenericConstraint.setLinearLowerLimit","org/gameplay3d/PhysicsGenericConstraint.hx",63,0x444f7c24)
		HX_STACK_THIS(this)
		HX_STACK_ARG(limits,"limits")
		HX_STACK_LINE(63)
		::org::gameplay3d::PhysicsGenericConstraint_obj::hx_PhysicsGenericConstraint_setLinearLowerLimit(this->nativeObject,(  (((limits == null()))) ? Dynamic(null()) : Dynamic(limits->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsGenericConstraint_obj,setLinearLowerLimit,(void))

Void PhysicsGenericConstraint_obj::setLinearUpperLimit( ::org::gameplay3d::immutable::IVector3 limits){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsGenericConstraint","setLinearUpperLimit",0x481a9f4c,"org.gameplay3d.PhysicsGenericConstraint.setLinearUpperLimit","org/gameplay3d/PhysicsGenericConstraint.hx",69,0x444f7c24)
		HX_STACK_THIS(this)
		HX_STACK_ARG(limits,"limits")
		HX_STACK_LINE(69)
		::org::gameplay3d::PhysicsGenericConstraint_obj::hx_PhysicsGenericConstraint_setLinearUpperLimit(this->nativeObject,(  (((limits == null()))) ? Dynamic(null()) : Dynamic(limits->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsGenericConstraint_obj,setLinearUpperLimit,(void))

Void PhysicsGenericConstraint_obj::setRotationOffsetA( ::org::gameplay3d::immutable::IQuaternion rotationOffset){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsGenericConstraint","setRotationOffsetA",0x3453dce2,"org.gameplay3d.PhysicsGenericConstraint.setRotationOffsetA","org/gameplay3d/PhysicsGenericConstraint.hx",75,0x444f7c24)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rotationOffset,"rotationOffset")
		HX_STACK_LINE(75)
		::org::gameplay3d::PhysicsGenericConstraint_obj::hx_PhysicsGenericConstraint_setRotationOffsetA(this->nativeObject,(  (((rotationOffset == null()))) ? Dynamic(null()) : Dynamic(rotationOffset->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsGenericConstraint_obj,setRotationOffsetA,(void))

Void PhysicsGenericConstraint_obj::setRotationOffsetB( ::org::gameplay3d::immutable::IQuaternion rotationOffset){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsGenericConstraint","setRotationOffsetB",0x3453dce3,"org.gameplay3d.PhysicsGenericConstraint.setRotationOffsetB","org/gameplay3d/PhysicsGenericConstraint.hx",81,0x444f7c24)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rotationOffset,"rotationOffset")
		HX_STACK_LINE(81)
		::org::gameplay3d::PhysicsGenericConstraint_obj::hx_PhysicsGenericConstraint_setRotationOffsetB(this->nativeObject,(  (((rotationOffset == null()))) ? Dynamic(null()) : Dynamic(rotationOffset->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsGenericConstraint_obj,setRotationOffsetB,(void))

Void PhysicsGenericConstraint_obj::setTranslationOffsetA( ::org::gameplay3d::immutable::IVector3 translationOffset){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsGenericConstraint","setTranslationOffsetA",0x4dbe966b,"org.gameplay3d.PhysicsGenericConstraint.setTranslationOffsetA","org/gameplay3d/PhysicsGenericConstraint.hx",87,0x444f7c24)
		HX_STACK_THIS(this)
		HX_STACK_ARG(translationOffset,"translationOffset")
		HX_STACK_LINE(87)
		::org::gameplay3d::PhysicsGenericConstraint_obj::hx_PhysicsGenericConstraint_setTranslationOffsetA(this->nativeObject,(  (((translationOffset == null()))) ? Dynamic(null()) : Dynamic(translationOffset->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsGenericConstraint_obj,setTranslationOffsetA,(void))

Void PhysicsGenericConstraint_obj::setTranslationOffsetB( ::org::gameplay3d::immutable::IVector3 translationOffset){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsGenericConstraint","setTranslationOffsetB",0x4dbe966c,"org.gameplay3d.PhysicsGenericConstraint.setTranslationOffsetB","org/gameplay3d/PhysicsGenericConstraint.hx",93,0x444f7c24)
		HX_STACK_THIS(this)
		HX_STACK_ARG(translationOffset,"translationOffset")
		HX_STACK_LINE(93)
		::org::gameplay3d::PhysicsGenericConstraint_obj::hx_PhysicsGenericConstraint_setTranslationOffsetB(this->nativeObject,(  (((translationOffset == null()))) ? Dynamic(null()) : Dynamic(translationOffset->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsGenericConstraint_obj,setTranslationOffsetB,(void))

Dynamic PhysicsGenericConstraint_obj::hx_PhysicsGenericConstraint_getRotationOffsetA;

Dynamic PhysicsGenericConstraint_obj::hx_PhysicsGenericConstraint_getRotationOffsetB;

Dynamic PhysicsGenericConstraint_obj::hx_PhysicsGenericConstraint_getTranslationOffsetA;

Dynamic PhysicsGenericConstraint_obj::hx_PhysicsGenericConstraint_getTranslationOffsetB;

Dynamic PhysicsGenericConstraint_obj::hx_PhysicsGenericConstraint_setAngularLowerLimit;

Dynamic PhysicsGenericConstraint_obj::hx_PhysicsGenericConstraint_setAngularUpperLimit;

Dynamic PhysicsGenericConstraint_obj::hx_PhysicsGenericConstraint_setLinearLowerLimit;

Dynamic PhysicsGenericConstraint_obj::hx_PhysicsGenericConstraint_setLinearUpperLimit;

Dynamic PhysicsGenericConstraint_obj::hx_PhysicsGenericConstraint_setRotationOffsetA;

Dynamic PhysicsGenericConstraint_obj::hx_PhysicsGenericConstraint_setRotationOffsetB;

Dynamic PhysicsGenericConstraint_obj::hx_PhysicsGenericConstraint_setTranslationOffsetA;

Dynamic PhysicsGenericConstraint_obj::hx_PhysicsGenericConstraint_setTranslationOffsetB;


PhysicsGenericConstraint_obj::PhysicsGenericConstraint_obj()
{
}

void PhysicsGenericConstraint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PhysicsGenericConstraint);
	HX_MARK_MEMBER_NAME(_translationOffsetA,"_translationOffsetA");
	HX_MARK_MEMBER_NAME(_translationOffsetB,"_translationOffsetB");
	HX_MARK_MEMBER_NAME(_rotationOffsetA,"_rotationOffsetA");
	HX_MARK_MEMBER_NAME(_rotationOffsetB,"_rotationOffsetB");
	::org::gameplay3d::intern::NativeBinding_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PhysicsGenericConstraint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_translationOffsetA,"_translationOffsetA");
	HX_VISIT_MEMBER_NAME(_translationOffsetB,"_translationOffsetB");
	HX_VISIT_MEMBER_NAME(_rotationOffsetA,"_rotationOffsetA");
	HX_VISIT_MEMBER_NAME(_rotationOffsetB,"_rotationOffsetB");
	::org::gameplay3d::intern::NativeBinding_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PhysicsGenericConstraint_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"_rotationOffsetA") ) { return _rotationOffsetA; }
		if (HX_FIELD_EQ(inName,"_rotationOffsetB") ) { return _rotationOffsetB; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getRotationOffsetA") ) { return getRotationOffsetA_dyn(); }
		if (HX_FIELD_EQ(inName,"getRotationOffsetB") ) { return getRotationOffsetB_dyn(); }
		if (HX_FIELD_EQ(inName,"setRotationOffsetA") ) { return setRotationOffsetA_dyn(); }
		if (HX_FIELD_EQ(inName,"setRotationOffsetB") ) { return setRotationOffsetB_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_translationOffsetA") ) { return _translationOffsetA; }
		if (HX_FIELD_EQ(inName,"_translationOffsetB") ) { return _translationOffsetB; }
		if (HX_FIELD_EQ(inName,"setLinearLowerLimit") ) { return setLinearLowerLimit_dyn(); }
		if (HX_FIELD_EQ(inName,"setLinearUpperLimit") ) { return setLinearUpperLimit_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"setAngularLowerLimit") ) { return setAngularLowerLimit_dyn(); }
		if (HX_FIELD_EQ(inName,"setAngularUpperLimit") ) { return setAngularUpperLimit_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"getTranslationOffsetA") ) { return getTranslationOffsetA_dyn(); }
		if (HX_FIELD_EQ(inName,"getTranslationOffsetB") ) { return getTranslationOffsetB_dyn(); }
		if (HX_FIELD_EQ(inName,"setTranslationOffsetA") ) { return setTranslationOffsetA_dyn(); }
		if (HX_FIELD_EQ(inName,"setTranslationOffsetB") ) { return setTranslationOffsetB_dyn(); }
		break;
	case 46:
		if (HX_FIELD_EQ(inName,"hx_PhysicsGenericConstraint_getRotationOffsetA") ) { return hx_PhysicsGenericConstraint_getRotationOffsetA; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsGenericConstraint_getRotationOffsetB") ) { return hx_PhysicsGenericConstraint_getRotationOffsetB; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsGenericConstraint_setRotationOffsetA") ) { return hx_PhysicsGenericConstraint_setRotationOffsetA; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsGenericConstraint_setRotationOffsetB") ) { return hx_PhysicsGenericConstraint_setRotationOffsetB; }
		break;
	case 47:
		if (HX_FIELD_EQ(inName,"hx_PhysicsGenericConstraint_setLinearLowerLimit") ) { return hx_PhysicsGenericConstraint_setLinearLowerLimit; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsGenericConstraint_setLinearUpperLimit") ) { return hx_PhysicsGenericConstraint_setLinearUpperLimit; }
		break;
	case 48:
		if (HX_FIELD_EQ(inName,"hx_PhysicsGenericConstraint_setAngularLowerLimit") ) { return hx_PhysicsGenericConstraint_setAngularLowerLimit; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsGenericConstraint_setAngularUpperLimit") ) { return hx_PhysicsGenericConstraint_setAngularUpperLimit; }
		break;
	case 49:
		if (HX_FIELD_EQ(inName,"hx_PhysicsGenericConstraint_getTranslationOffsetA") ) { return hx_PhysicsGenericConstraint_getTranslationOffsetA; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsGenericConstraint_getTranslationOffsetB") ) { return hx_PhysicsGenericConstraint_getTranslationOffsetB; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsGenericConstraint_setTranslationOffsetA") ) { return hx_PhysicsGenericConstraint_setTranslationOffsetA; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsGenericConstraint_setTranslationOffsetB") ) { return hx_PhysicsGenericConstraint_setTranslationOffsetB; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PhysicsGenericConstraint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"_rotationOffsetA") ) { _rotationOffsetA=inValue.Cast< ::org::gameplay3d::Quaternion >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rotationOffsetB") ) { _rotationOffsetB=inValue.Cast< ::org::gameplay3d::Quaternion >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_translationOffsetA") ) { _translationOffsetA=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_translationOffsetB") ) { _translationOffsetB=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		break;
	case 46:
		if (HX_FIELD_EQ(inName,"hx_PhysicsGenericConstraint_getRotationOffsetA") ) { hx_PhysicsGenericConstraint_getRotationOffsetA=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsGenericConstraint_getRotationOffsetB") ) { hx_PhysicsGenericConstraint_getRotationOffsetB=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsGenericConstraint_setRotationOffsetA") ) { hx_PhysicsGenericConstraint_setRotationOffsetA=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsGenericConstraint_setRotationOffsetB") ) { hx_PhysicsGenericConstraint_setRotationOffsetB=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 47:
		if (HX_FIELD_EQ(inName,"hx_PhysicsGenericConstraint_setLinearLowerLimit") ) { hx_PhysicsGenericConstraint_setLinearLowerLimit=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsGenericConstraint_setLinearUpperLimit") ) { hx_PhysicsGenericConstraint_setLinearUpperLimit=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 48:
		if (HX_FIELD_EQ(inName,"hx_PhysicsGenericConstraint_setAngularLowerLimit") ) { hx_PhysicsGenericConstraint_setAngularLowerLimit=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsGenericConstraint_setAngularUpperLimit") ) { hx_PhysicsGenericConstraint_setAngularUpperLimit=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 49:
		if (HX_FIELD_EQ(inName,"hx_PhysicsGenericConstraint_getTranslationOffsetA") ) { hx_PhysicsGenericConstraint_getTranslationOffsetA=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsGenericConstraint_getTranslationOffsetB") ) { hx_PhysicsGenericConstraint_getTranslationOffsetB=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsGenericConstraint_setTranslationOffsetA") ) { hx_PhysicsGenericConstraint_setTranslationOffsetA=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsGenericConstraint_setTranslationOffsetB") ) { hx_PhysicsGenericConstraint_setTranslationOffsetB=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PhysicsGenericConstraint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_translationOffsetA"));
	outFields->push(HX_CSTRING("_translationOffsetB"));
	outFields->push(HX_CSTRING("_rotationOffsetA"));
	outFields->push(HX_CSTRING("_rotationOffsetB"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("hx_PhysicsGenericConstraint_getRotationOffsetA"),
	HX_CSTRING("hx_PhysicsGenericConstraint_getRotationOffsetB"),
	HX_CSTRING("hx_PhysicsGenericConstraint_getTranslationOffsetA"),
	HX_CSTRING("hx_PhysicsGenericConstraint_getTranslationOffsetB"),
	HX_CSTRING("hx_PhysicsGenericConstraint_setAngularLowerLimit"),
	HX_CSTRING("hx_PhysicsGenericConstraint_setAngularUpperLimit"),
	HX_CSTRING("hx_PhysicsGenericConstraint_setLinearLowerLimit"),
	HX_CSTRING("hx_PhysicsGenericConstraint_setLinearUpperLimit"),
	HX_CSTRING("hx_PhysicsGenericConstraint_setRotationOffsetA"),
	HX_CSTRING("hx_PhysicsGenericConstraint_setRotationOffsetB"),
	HX_CSTRING("hx_PhysicsGenericConstraint_setTranslationOffsetA"),
	HX_CSTRING("hx_PhysicsGenericConstraint_setTranslationOffsetB"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(PhysicsGenericConstraint_obj,_translationOffsetA),HX_CSTRING("_translationOffsetA")},
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(PhysicsGenericConstraint_obj,_translationOffsetB),HX_CSTRING("_translationOffsetB")},
	{hx::fsObject /*::org::gameplay3d::Quaternion*/ ,(int)offsetof(PhysicsGenericConstraint_obj,_rotationOffsetA),HX_CSTRING("_rotationOffsetA")},
	{hx::fsObject /*::org::gameplay3d::Quaternion*/ ,(int)offsetof(PhysicsGenericConstraint_obj,_rotationOffsetB),HX_CSTRING("_rotationOffsetB")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_translationOffsetA"),
	HX_CSTRING("_translationOffsetB"),
	HX_CSTRING("_rotationOffsetA"),
	HX_CSTRING("_rotationOffsetB"),
	HX_CSTRING("getRotationOffsetA"),
	HX_CSTRING("getRotationOffsetB"),
	HX_CSTRING("getTranslationOffsetA"),
	HX_CSTRING("getTranslationOffsetB"),
	HX_CSTRING("setAngularLowerLimit"),
	HX_CSTRING("setAngularUpperLimit"),
	HX_CSTRING("setLinearLowerLimit"),
	HX_CSTRING("setLinearUpperLimit"),
	HX_CSTRING("setRotationOffsetA"),
	HX_CSTRING("setRotationOffsetB"),
	HX_CSTRING("setTranslationOffsetA"),
	HX_CSTRING("setTranslationOffsetB"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PhysicsGenericConstraint_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PhysicsGenericConstraint_obj::hx_PhysicsGenericConstraint_getRotationOffsetA,"hx_PhysicsGenericConstraint_getRotationOffsetA");
	HX_MARK_MEMBER_NAME(PhysicsGenericConstraint_obj::hx_PhysicsGenericConstraint_getRotationOffsetB,"hx_PhysicsGenericConstraint_getRotationOffsetB");
	HX_MARK_MEMBER_NAME(PhysicsGenericConstraint_obj::hx_PhysicsGenericConstraint_getTranslationOffsetA,"hx_PhysicsGenericConstraint_getTranslationOffsetA");
	HX_MARK_MEMBER_NAME(PhysicsGenericConstraint_obj::hx_PhysicsGenericConstraint_getTranslationOffsetB,"hx_PhysicsGenericConstraint_getTranslationOffsetB");
	HX_MARK_MEMBER_NAME(PhysicsGenericConstraint_obj::hx_PhysicsGenericConstraint_setAngularLowerLimit,"hx_PhysicsGenericConstraint_setAngularLowerLimit");
	HX_MARK_MEMBER_NAME(PhysicsGenericConstraint_obj::hx_PhysicsGenericConstraint_setAngularUpperLimit,"hx_PhysicsGenericConstraint_setAngularUpperLimit");
	HX_MARK_MEMBER_NAME(PhysicsGenericConstraint_obj::hx_PhysicsGenericConstraint_setLinearLowerLimit,"hx_PhysicsGenericConstraint_setLinearLowerLimit");
	HX_MARK_MEMBER_NAME(PhysicsGenericConstraint_obj::hx_PhysicsGenericConstraint_setLinearUpperLimit,"hx_PhysicsGenericConstraint_setLinearUpperLimit");
	HX_MARK_MEMBER_NAME(PhysicsGenericConstraint_obj::hx_PhysicsGenericConstraint_setRotationOffsetA,"hx_PhysicsGenericConstraint_setRotationOffsetA");
	HX_MARK_MEMBER_NAME(PhysicsGenericConstraint_obj::hx_PhysicsGenericConstraint_setRotationOffsetB,"hx_PhysicsGenericConstraint_setRotationOffsetB");
	HX_MARK_MEMBER_NAME(PhysicsGenericConstraint_obj::hx_PhysicsGenericConstraint_setTranslationOffsetA,"hx_PhysicsGenericConstraint_setTranslationOffsetA");
	HX_MARK_MEMBER_NAME(PhysicsGenericConstraint_obj::hx_PhysicsGenericConstraint_setTranslationOffsetB,"hx_PhysicsGenericConstraint_setTranslationOffsetB");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PhysicsGenericConstraint_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PhysicsGenericConstraint_obj::hx_PhysicsGenericConstraint_getRotationOffsetA,"hx_PhysicsGenericConstraint_getRotationOffsetA");
	HX_VISIT_MEMBER_NAME(PhysicsGenericConstraint_obj::hx_PhysicsGenericConstraint_getRotationOffsetB,"hx_PhysicsGenericConstraint_getRotationOffsetB");
	HX_VISIT_MEMBER_NAME(PhysicsGenericConstraint_obj::hx_PhysicsGenericConstraint_getTranslationOffsetA,"hx_PhysicsGenericConstraint_getTranslationOffsetA");
	HX_VISIT_MEMBER_NAME(PhysicsGenericConstraint_obj::hx_PhysicsGenericConstraint_getTranslationOffsetB,"hx_PhysicsGenericConstraint_getTranslationOffsetB");
	HX_VISIT_MEMBER_NAME(PhysicsGenericConstraint_obj::hx_PhysicsGenericConstraint_setAngularLowerLimit,"hx_PhysicsGenericConstraint_setAngularLowerLimit");
	HX_VISIT_MEMBER_NAME(PhysicsGenericConstraint_obj::hx_PhysicsGenericConstraint_setAngularUpperLimit,"hx_PhysicsGenericConstraint_setAngularUpperLimit");
	HX_VISIT_MEMBER_NAME(PhysicsGenericConstraint_obj::hx_PhysicsGenericConstraint_setLinearLowerLimit,"hx_PhysicsGenericConstraint_setLinearLowerLimit");
	HX_VISIT_MEMBER_NAME(PhysicsGenericConstraint_obj::hx_PhysicsGenericConstraint_setLinearUpperLimit,"hx_PhysicsGenericConstraint_setLinearUpperLimit");
	HX_VISIT_MEMBER_NAME(PhysicsGenericConstraint_obj::hx_PhysicsGenericConstraint_setRotationOffsetA,"hx_PhysicsGenericConstraint_setRotationOffsetA");
	HX_VISIT_MEMBER_NAME(PhysicsGenericConstraint_obj::hx_PhysicsGenericConstraint_setRotationOffsetB,"hx_PhysicsGenericConstraint_setRotationOffsetB");
	HX_VISIT_MEMBER_NAME(PhysicsGenericConstraint_obj::hx_PhysicsGenericConstraint_setTranslationOffsetA,"hx_PhysicsGenericConstraint_setTranslationOffsetA");
	HX_VISIT_MEMBER_NAME(PhysicsGenericConstraint_obj::hx_PhysicsGenericConstraint_setTranslationOffsetB,"hx_PhysicsGenericConstraint_setTranslationOffsetB");
};

#endif

Class PhysicsGenericConstraint_obj::__mClass;

void PhysicsGenericConstraint_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.PhysicsGenericConstraint"), hx::TCanCast< PhysicsGenericConstraint_obj> ,sStaticFields,sMemberFields,
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

void PhysicsGenericConstraint_obj::__boot()
{
	hx_PhysicsGenericConstraint_getRotationOffsetA= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsGenericConstraint >(),HX_CSTRING("getRotationOffsetA"),(int)1);
	hx_PhysicsGenericConstraint_getRotationOffsetB= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsGenericConstraint >(),HX_CSTRING("getRotationOffsetB"),(int)1);
	hx_PhysicsGenericConstraint_getTranslationOffsetA= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsGenericConstraint >(),HX_CSTRING("getTranslationOffsetA"),(int)1);
	hx_PhysicsGenericConstraint_getTranslationOffsetB= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsGenericConstraint >(),HX_CSTRING("getTranslationOffsetB"),(int)1);
	hx_PhysicsGenericConstraint_setAngularLowerLimit= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsGenericConstraint >(),HX_CSTRING("setAngularLowerLimit"),(int)2);
	hx_PhysicsGenericConstraint_setAngularUpperLimit= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsGenericConstraint >(),HX_CSTRING("setAngularUpperLimit"),(int)2);
	hx_PhysicsGenericConstraint_setLinearLowerLimit= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsGenericConstraint >(),HX_CSTRING("setLinearLowerLimit"),(int)2);
	hx_PhysicsGenericConstraint_setLinearUpperLimit= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsGenericConstraint >(),HX_CSTRING("setLinearUpperLimit"),(int)2);
	hx_PhysicsGenericConstraint_setRotationOffsetA= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsGenericConstraint >(),HX_CSTRING("setRotationOffsetA"),(int)2);
	hx_PhysicsGenericConstraint_setRotationOffsetB= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsGenericConstraint >(),HX_CSTRING("setRotationOffsetB"),(int)2);
	hx_PhysicsGenericConstraint_setTranslationOffsetA= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsGenericConstraint >(),HX_CSTRING("setTranslationOffsetA"),(int)2);
	hx_PhysicsGenericConstraint_setTranslationOffsetB= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsGenericConstraint >(),HX_CSTRING("setTranslationOffsetB"),(int)2);
}

} // end namespace org
} // end namespace gameplay3d
