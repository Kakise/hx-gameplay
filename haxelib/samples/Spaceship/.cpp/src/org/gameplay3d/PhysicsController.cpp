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
#ifndef INCLUDED_org_gameplay3d_PhysicsCollisionObject
#include <org/gameplay3d/PhysicsCollisionObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsConstraint
#include <org/gameplay3d/PhysicsConstraint.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsController
#include <org/gameplay3d/PhysicsController.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsController_HitFilter
#include <org/gameplay3d/PhysicsController_HitFilter.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsController_HitResult
#include <org/gameplay3d/PhysicsController_HitResult.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsController_Listener
#include <org/gameplay3d/PhysicsController_Listener.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsFixedConstraint
#include <org/gameplay3d/PhysicsFixedConstraint.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsGenericConstraint
#include <org/gameplay3d/PhysicsGenericConstraint.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsHingeConstraint
#include <org/gameplay3d/PhysicsHingeConstraint.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsRigidBody
#include <org/gameplay3d/PhysicsRigidBody.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsSocketConstraint
#include <org/gameplay3d/PhysicsSocketConstraint.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsSpringConstraint
#include <org/gameplay3d/PhysicsSpringConstraint.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Ray
#include <org/gameplay3d/Ray.h>
#endif
#ifndef INCLUDED_org_gameplay3d_ScriptTarget
#include <org/gameplay3d/ScriptTarget.h>
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
#ifndef INCLUDED_org_gameplay3d_intern_impl_ScriptTargetImpl
#include <org/gameplay3d/intern/impl/ScriptTargetImpl.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_NativeInterface
#include <org/gameplay3d/util/NativeInterface.h>
#endif
#ifndef INCLUDED_org_gameplay3d_wrapper_PhysicsController_HitFilterWrapper
#include <org/gameplay3d/wrapper/PhysicsController_HitFilterWrapper.h>
#endif
#ifndef INCLUDED_org_gameplay3d_wrapper_PhysicsController_ListenerWrapper
#include <org/gameplay3d/wrapper/PhysicsController_ListenerWrapper.h>
#endif
namespace org{
namespace gameplay3d{

Void PhysicsController_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.PhysicsController","new",0x333b47e8,"org.gameplay3d.PhysicsController.new","org/gameplay3d/PhysicsController.hx",17,0x1ff42a28)
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

//PhysicsController_obj::~PhysicsController_obj() { }

Dynamic PhysicsController_obj::__CreateEmpty() { return  new PhysicsController_obj; }
hx::ObjectPtr< PhysicsController_obj > PhysicsController_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< PhysicsController_obj > result = new PhysicsController_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic PhysicsController_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PhysicsController_obj > result = new PhysicsController_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void PhysicsController_obj::addStatusListener( ::org::gameplay3d::wrapper::PhysicsController_ListenerWrapper listener){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsController","addStatusListener",0x53ae594f,"org.gameplay3d.PhysicsController.addStatusListener","org/gameplay3d/PhysicsController.hx",28,0x1ff42a28)
		HX_STACK_THIS(this)
		HX_STACK_ARG(listener,"listener")
		HX_STACK_LINE(28)
		::org::gameplay3d::PhysicsController_obj::hx_PhysicsController_addStatusListener(this->nativeObject,(  (((listener == null()))) ? Dynamic(null()) : Dynamic(listener->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsController_obj,addStatusListener,(void))

::org::gameplay3d::PhysicsFixedConstraint PhysicsController_obj::createFixedConstraint( ::org::gameplay3d::PhysicsRigidBody a,::org::gameplay3d::PhysicsRigidBody b){
	HX_STACK_FRAME("org.gameplay3d.PhysicsController","createFixedConstraint",0x4da4acdd,"org.gameplay3d.PhysicsController.createFixedConstraint","org/gameplay3d/PhysicsController.hx",34,0x1ff42a28)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(34)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::PhysicsFixedConstraint >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(34)
	Dynamic nativeObject = ::org::gameplay3d::PhysicsController_obj::hx_PhysicsController_createFixedConstraint(this->nativeObject,(  (((a == null()))) ? Dynamic(null()) : Dynamic(a->nativeObject) ),(  (((b == null()))) ? Dynamic(null()) : Dynamic(b->nativeObject) ));		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(34)
	if (((nativeObject == null()))){
		HX_STACK_LINE(34)
		return null();
	}
	else{
		HX_STACK_LINE(34)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(34)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(34)
			::org::gameplay3d::PhysicsFixedConstraint result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(34)
			if (((result == null()))){
				HX_STACK_LINE(34)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(34)
				::org::gameplay3d::PhysicsFixedConstraint _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(34)
				result = _g;
				HX_STACK_LINE(34)
				ref->set(result);
			}
			HX_STACK_LINE(34)
			return result;
		}
		else{
			HX_STACK_LINE(34)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(34)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(34)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PhysicsController_obj,createFixedConstraint,return )

::org::gameplay3d::PhysicsGenericConstraint PhysicsController_obj::createGenericConstraint_RgdBodyX2( ::org::gameplay3d::PhysicsRigidBody a,::org::gameplay3d::PhysicsRigidBody b){
	HX_STACK_FRAME("org.gameplay3d.PhysicsController","createGenericConstraint_RgdBodyX2",0xdb98264c,"org.gameplay3d.PhysicsController.createGenericConstraint_RgdBodyX2","org/gameplay3d/PhysicsController.hx",40,0x1ff42a28)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(40)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::PhysicsGenericConstraint >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(40)
	Dynamic nativeObject = ::org::gameplay3d::PhysicsController_obj::hx_PhysicsController_createGenericConstraint_RgdBodyX2(this->nativeObject,(  (((a == null()))) ? Dynamic(null()) : Dynamic(a->nativeObject) ),(  (((b == null()))) ? Dynamic(null()) : Dynamic(b->nativeObject) ));		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(40)
	if (((nativeObject == null()))){
		HX_STACK_LINE(40)
		return null();
	}
	else{
		HX_STACK_LINE(40)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(40)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(40)
			::org::gameplay3d::PhysicsGenericConstraint result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(40)
			if (((result == null()))){
				HX_STACK_LINE(40)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(40)
				::org::gameplay3d::PhysicsGenericConstraint _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(40)
				result = _g;
				HX_STACK_LINE(40)
				ref->set(result);
			}
			HX_STACK_LINE(40)
			return result;
		}
		else{
			HX_STACK_LINE(40)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(40)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(40)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PhysicsController_obj,createGenericConstraint_RgdBodyX2,return )

::org::gameplay3d::PhysicsGenericConstraint PhysicsController_obj::createGenericConstraint_RgdBody_Qtrn_V3_RgdBody_Qtrn_V3( ::org::gameplay3d::PhysicsRigidBody a,::org::gameplay3d::immutable::IQuaternion rotationOffsetA,::org::gameplay3d::immutable::IVector3 translationOffsetA,::org::gameplay3d::PhysicsRigidBody b,::org::gameplay3d::immutable::IQuaternion rotationOffsetB,::org::gameplay3d::immutable::IVector3 translationOffsetB){
	HX_STACK_FRAME("org.gameplay3d.PhysicsController","createGenericConstraint_RgdBody_Qtrn_V3_RgdBody_Qtrn_V3",0xe2cb58e0,"org.gameplay3d.PhysicsController.createGenericConstraint_RgdBody_Qtrn_V3_RgdBody_Qtrn_V3","org/gameplay3d/PhysicsController.hx",46,0x1ff42a28)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(rotationOffsetA,"rotationOffsetA")
	HX_STACK_ARG(translationOffsetA,"translationOffsetA")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(rotationOffsetB,"rotationOffsetB")
	HX_STACK_ARG(translationOffsetB,"translationOffsetB")
	HX_STACK_LINE(46)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::PhysicsGenericConstraint >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(46)
	Dynamic nativeObject = ::org::gameplay3d::PhysicsController_obj::hx_PhysicsController_createGenericConstraint_RgdBody_Qtrn_V3_RgdBody_Qtrn_V3(this->nativeObject,(  (((a == null()))) ? Dynamic(null()) : Dynamic(a->nativeObject) ),(  (((rotationOffsetA == null()))) ? Dynamic(null()) : Dynamic(rotationOffsetA->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((translationOffsetA == null()))) ? Dynamic(null()) : Dynamic(translationOffsetA->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((b == null()))) ? Dynamic(null()) : Dynamic(b->nativeObject) ),(  (((rotationOffsetB == null()))) ? Dynamic(null()) : Dynamic(rotationOffsetB->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((translationOffsetB == null()))) ? Dynamic(null()) : Dynamic(translationOffsetB->__Field(HX_CSTRING("nativeObject"),true)) ));		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(46)
	if (((nativeObject == null()))){
		HX_STACK_LINE(46)
		return null();
	}
	else{
		HX_STACK_LINE(46)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(46)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(46)
			::org::gameplay3d::PhysicsGenericConstraint result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(46)
			if (((result == null()))){
				HX_STACK_LINE(46)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(46)
				::org::gameplay3d::PhysicsGenericConstraint _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(46)
				result = _g;
				HX_STACK_LINE(46)
				ref->set(result);
			}
			HX_STACK_LINE(46)
			return result;
		}
		else{
			HX_STACK_LINE(46)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(46)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(46)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC6(PhysicsController_obj,createGenericConstraint_RgdBody_Qtrn_V3_RgdBody_Qtrn_V3,return )

::org::gameplay3d::PhysicsHingeConstraint PhysicsController_obj::createHingeConstraint( ::org::gameplay3d::PhysicsRigidBody a,::org::gameplay3d::immutable::IQuaternion rotationOffsetA,::org::gameplay3d::immutable::IVector3 translationOffsetA,::org::gameplay3d::PhysicsRigidBody b,::org::gameplay3d::immutable::IQuaternion rotationOffsetB,::org::gameplay3d::immutable::IVector3 translationOffsetB){
	HX_STACK_FRAME("org.gameplay3d.PhysicsController","createHingeConstraint",0xc2744bd4,"org.gameplay3d.PhysicsController.createHingeConstraint","org/gameplay3d/PhysicsController.hx",52,0x1ff42a28)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(rotationOffsetA,"rotationOffsetA")
	HX_STACK_ARG(translationOffsetA,"translationOffsetA")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(rotationOffsetB,"rotationOffsetB")
	HX_STACK_ARG(translationOffsetB,"translationOffsetB")
	HX_STACK_LINE(52)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::PhysicsHingeConstraint >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(52)
	Dynamic nativeObject = ::org::gameplay3d::PhysicsController_obj::hx_PhysicsController_createHingeConstraint(this->nativeObject,(  (((a == null()))) ? Dynamic(null()) : Dynamic(a->nativeObject) ),(  (((rotationOffsetA == null()))) ? Dynamic(null()) : Dynamic(rotationOffsetA->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((translationOffsetA == null()))) ? Dynamic(null()) : Dynamic(translationOffsetA->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((b == null()))) ? Dynamic(null()) : Dynamic(b->nativeObject) ),(  (((rotationOffsetB == null()))) ? Dynamic(null()) : Dynamic(rotationOffsetB->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((translationOffsetB == null()))) ? Dynamic(null()) : Dynamic(translationOffsetB->__Field(HX_CSTRING("nativeObject"),true)) ));		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(52)
	if (((nativeObject == null()))){
		HX_STACK_LINE(52)
		return null();
	}
	else{
		HX_STACK_LINE(52)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(52)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(52)
			::org::gameplay3d::PhysicsHingeConstraint result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(52)
			if (((result == null()))){
				HX_STACK_LINE(52)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(52)
				::org::gameplay3d::PhysicsHingeConstraint _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(52)
				result = _g;
				HX_STACK_LINE(52)
				ref->set(result);
			}
			HX_STACK_LINE(52)
			return result;
		}
		else{
			HX_STACK_LINE(52)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(52)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(52)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC6(PhysicsController_obj,createHingeConstraint,return )

::org::gameplay3d::PhysicsSocketConstraint PhysicsController_obj::createSocketConstraintt_RgdBodyX2( ::org::gameplay3d::PhysicsRigidBody a,::org::gameplay3d::PhysicsRigidBody b){
	HX_STACK_FRAME("org.gameplay3d.PhysicsController","createSocketConstraintt_RgdBodyX2",0x9d614d7c,"org.gameplay3d.PhysicsController.createSocketConstraintt_RgdBodyX2","org/gameplay3d/PhysicsController.hx",58,0x1ff42a28)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(58)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::PhysicsSocketConstraint >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(58)
	Dynamic nativeObject = ::org::gameplay3d::PhysicsController_obj::hx_PhysicsController_createSocketConstraint_RgdBodyX2(this->nativeObject,(  (((a == null()))) ? Dynamic(null()) : Dynamic(a->nativeObject) ),(  (((b == null()))) ? Dynamic(null()) : Dynamic(b->nativeObject) ));		HX_STACK_VAR(nativeObject,"nativeObject");
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
			::org::gameplay3d::PhysicsSocketConstraint result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(58)
			if (((result == null()))){
				HX_STACK_LINE(58)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(58)
				::org::gameplay3d::PhysicsSocketConstraint _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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


HX_DEFINE_DYNAMIC_FUNC2(PhysicsController_obj,createSocketConstraintt_RgdBodyX2,return )

::org::gameplay3d::PhysicsSocketConstraint PhysicsController_obj::createSocketConstraint_RgdBody_Qtrn_V3_RgdBody_V3( ::org::gameplay3d::PhysicsRigidBody a,::org::gameplay3d::immutable::IVector3 translationOffsetA,::org::gameplay3d::PhysicsRigidBody b,::org::gameplay3d::immutable::IVector3 translationOffsetB){
	HX_STACK_FRAME("org.gameplay3d.PhysicsController","createSocketConstraint_RgdBody_Qtrn_V3_RgdBody_V3",0x56336476,"org.gameplay3d.PhysicsController.createSocketConstraint_RgdBody_Qtrn_V3_RgdBody_V3","org/gameplay3d/PhysicsController.hx",64,0x1ff42a28)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(translationOffsetA,"translationOffsetA")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(translationOffsetB,"translationOffsetB")
	HX_STACK_LINE(64)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::PhysicsSocketConstraint >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(64)
	Dynamic nativeObject = ::org::gameplay3d::PhysicsController_obj::hx_PhysicsController_createSocketConstraint_RgdBody_V3_RgdBody_V3(this->nativeObject,(  (((a == null()))) ? Dynamic(null()) : Dynamic(a->nativeObject) ),(  (((translationOffsetA == null()))) ? Dynamic(null()) : Dynamic(translationOffsetA->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((b == null()))) ? Dynamic(null()) : Dynamic(b->nativeObject) ),(  (((translationOffsetB == null()))) ? Dynamic(null()) : Dynamic(translationOffsetB->__Field(HX_CSTRING("nativeObject"),true)) ));		HX_STACK_VAR(nativeObject,"nativeObject");
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
			::org::gameplay3d::PhysicsSocketConstraint result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(64)
			if (((result == null()))){
				HX_STACK_LINE(64)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(64)
				::org::gameplay3d::PhysicsSocketConstraint _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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


HX_DEFINE_DYNAMIC_FUNC4(PhysicsController_obj,createSocketConstraint_RgdBody_Qtrn_V3_RgdBody_V3,return )

::org::gameplay3d::PhysicsSpringConstraint PhysicsController_obj::createSpringConstraintt_RgdBodyX2( ::org::gameplay3d::PhysicsRigidBody a,::org::gameplay3d::PhysicsRigidBody b){
	HX_STACK_FRAME("org.gameplay3d.PhysicsController","createSpringConstraintt_RgdBodyX2",0xb36fb022,"org.gameplay3d.PhysicsController.createSpringConstraintt_RgdBodyX2","org/gameplay3d/PhysicsController.hx",70,0x1ff42a28)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(70)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::PhysicsSpringConstraint >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(70)
	Dynamic nativeObject = ::org::gameplay3d::PhysicsController_obj::hx_PhysicsController_createSpringConstraint_RgdBodyX2(this->nativeObject,(  (((a == null()))) ? Dynamic(null()) : Dynamic(a->nativeObject) ),(  (((b == null()))) ? Dynamic(null()) : Dynamic(b->nativeObject) ));		HX_STACK_VAR(nativeObject,"nativeObject");
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
			::org::gameplay3d::PhysicsSpringConstraint result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(70)
			if (((result == null()))){
				HX_STACK_LINE(70)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(70)
				::org::gameplay3d::PhysicsSpringConstraint _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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


HX_DEFINE_DYNAMIC_FUNC2(PhysicsController_obj,createSpringConstraintt_RgdBodyX2,return )

::org::gameplay3d::PhysicsSpringConstraint PhysicsController_obj::createSpringConstraint_RgdBody_Qtrn_V3_RgdBody_Qtrn_V3( ::org::gameplay3d::PhysicsRigidBody a,::org::gameplay3d::immutable::IQuaternion rotationOffsetA,::org::gameplay3d::immutable::IVector3 translationOffsetA,::org::gameplay3d::PhysicsRigidBody b,::org::gameplay3d::immutable::IQuaternion rotationOffsetB,::org::gameplay3d::immutable::IVector3 translationOffsetB){
	HX_STACK_FRAME("org.gameplay3d.PhysicsController","createSpringConstraint_RgdBody_Qtrn_V3_RgdBody_Qtrn_V3",0xc78064be,"org.gameplay3d.PhysicsController.createSpringConstraint_RgdBody_Qtrn_V3_RgdBody_Qtrn_V3","org/gameplay3d/PhysicsController.hx",76,0x1ff42a28)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(rotationOffsetA,"rotationOffsetA")
	HX_STACK_ARG(translationOffsetA,"translationOffsetA")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(rotationOffsetB,"rotationOffsetB")
	HX_STACK_ARG(translationOffsetB,"translationOffsetB")
	HX_STACK_LINE(76)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::PhysicsSpringConstraint >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(76)
	Dynamic nativeObject = ::org::gameplay3d::PhysicsController_obj::hx_PhysicsController_createSpringConstraint_RgdBody_Qtrn_V3_RgdBody_Qtrn_V3(this->nativeObject,(  (((a == null()))) ? Dynamic(null()) : Dynamic(a->nativeObject) ),(  (((rotationOffsetA == null()))) ? Dynamic(null()) : Dynamic(rotationOffsetA->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((translationOffsetA == null()))) ? Dynamic(null()) : Dynamic(translationOffsetA->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((b == null()))) ? Dynamic(null()) : Dynamic(b->nativeObject) ),(  (((rotationOffsetB == null()))) ? Dynamic(null()) : Dynamic(rotationOffsetB->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((translationOffsetB == null()))) ? Dynamic(null()) : Dynamic(translationOffsetB->__Field(HX_CSTRING("nativeObject"),true)) ));		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(76)
	if (((nativeObject == null()))){
		HX_STACK_LINE(76)
		return null();
	}
	else{
		HX_STACK_LINE(76)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(76)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(76)
			::org::gameplay3d::PhysicsSpringConstraint result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(76)
			if (((result == null()))){
				HX_STACK_LINE(76)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(76)
				::org::gameplay3d::PhysicsSpringConstraint _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(76)
				result = _g;
				HX_STACK_LINE(76)
				ref->set(result);
			}
			HX_STACK_LINE(76)
			return result;
		}
		else{
			HX_STACK_LINE(76)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(76)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(76)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC6(PhysicsController_obj,createSpringConstraint_RgdBody_Qtrn_V3_RgdBody_Qtrn_V3,return )

Void PhysicsController_obj::drawDebug( ::org::gameplay3d::immutable::IMatrix viewProjection){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsController","drawDebug",0x0aec5537,"org.gameplay3d.PhysicsController.drawDebug","org/gameplay3d/PhysicsController.hx",82,0x1ff42a28)
		HX_STACK_THIS(this)
		HX_STACK_ARG(viewProjection,"viewProjection")
		HX_STACK_LINE(82)
		::org::gameplay3d::PhysicsController_obj::hx_PhysicsController_drawDebug(this->nativeObject,(  (((viewProjection == null()))) ? Dynamic(null()) : Dynamic(viewProjection->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsController_obj,drawDebug,(void))

::org::gameplay3d::immutable::IVector3 PhysicsController_obj::getGravity( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsController","getGravity",0xa532fdd0,"org.gameplay3d.PhysicsController.getGravity","org/gameplay3d/PhysicsController.hx",88,0x1ff42a28)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_gravity == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(88)
			Dynamic nativeObject = ::org::gameplay3d::PhysicsController_obj::hx_PhysicsController_getGravity(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
		return this->_gravity = _g1;
	}
	else{
		HX_STACK_LINE(88)
		Dynamic _g2 = ::org::gameplay3d::PhysicsController_obj::hx_PhysicsController_getGravity(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g3 = this->_gravity->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_gravity = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsController_obj,getGravity,return )

bool PhysicsController_obj::rayTest( ::org::gameplay3d::Ray ray,Float distance,::org::gameplay3d::PhysicsController_HitResult result,::org::gameplay3d::wrapper::PhysicsController_HitFilterWrapper filter){
	HX_STACK_FRAME("org.gameplay3d.PhysicsController","rayTest",0x6069e2e4,"org.gameplay3d.PhysicsController.rayTest","org/gameplay3d/PhysicsController.hx",94,0x1ff42a28)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ray,"ray")
	HX_STACK_ARG(distance,"distance")
	HX_STACK_ARG(result,"result")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_LINE(94)
	return ::org::gameplay3d::PhysicsController_obj::hx_PhysicsController_rayTest(this->nativeObject,(  (((ray == null()))) ? Dynamic(null()) : Dynamic(ray->nativeObject) ),distance,(  (((result == null()))) ? Dynamic(null()) : Dynamic(result->nativeObject) ),(  (((filter == null()))) ? Dynamic(null()) : Dynamic(filter->nativeObject) ));
}


HX_DEFINE_DYNAMIC_FUNC4(PhysicsController_obj,rayTest,return )

Void PhysicsController_obj::removeStatusListener( ::org::gameplay3d::wrapper::PhysicsController_ListenerWrapper listener){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsController","removeStatusListener",0xdb2c54a2,"org.gameplay3d.PhysicsController.removeStatusListener","org/gameplay3d/PhysicsController.hx",100,0x1ff42a28)
		HX_STACK_THIS(this)
		HX_STACK_ARG(listener,"listener")
		HX_STACK_LINE(100)
		::org::gameplay3d::PhysicsController_obj::hx_PhysicsController_removeStatusListener(this->nativeObject,(  (((listener == null()))) ? Dynamic(null()) : Dynamic(listener->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsController_obj,removeStatusListener,(void))

Void PhysicsController_obj::setGravity( ::org::gameplay3d::immutable::IVector3 gravity){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsController","setGravity",0xa8b09c44,"org.gameplay3d.PhysicsController.setGravity","org/gameplay3d/PhysicsController.hx",106,0x1ff42a28)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gravity,"gravity")
		HX_STACK_LINE(106)
		::org::gameplay3d::PhysicsController_obj::hx_PhysicsController_setGravity(this->nativeObject,(  (((gravity == null()))) ? Dynamic(null()) : Dynamic(gravity->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsController_obj,setGravity,(void))

bool PhysicsController_obj::sweepTest( ::org::gameplay3d::PhysicsCollisionObject object,::org::gameplay3d::immutable::IVector3 endPosition,::org::gameplay3d::PhysicsController_HitResult result,::org::gameplay3d::wrapper::PhysicsController_HitFilterWrapper filter){
	HX_STACK_FRAME("org.gameplay3d.PhysicsController","sweepTest",0x435e3de6,"org.gameplay3d.PhysicsController.sweepTest","org/gameplay3d/PhysicsController.hx",112,0x1ff42a28)
	HX_STACK_THIS(this)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(endPosition,"endPosition")
	HX_STACK_ARG(result,"result")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_LINE(112)
	return ::org::gameplay3d::PhysicsController_obj::hx_PhysicsController_sweepTest(this->nativeObject,(  (((object == null()))) ? Dynamic(null()) : Dynamic(object->nativeObject) ),(  (((endPosition == null()))) ? Dynamic(null()) : Dynamic(endPosition->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((result == null()))) ? Dynamic(null()) : Dynamic(result->nativeObject) ),(  (((filter == null()))) ? Dynamic(null()) : Dynamic(filter->nativeObject) ));
}


HX_DEFINE_DYNAMIC_FUNC4(PhysicsController_obj,sweepTest,return )

Dynamic PhysicsController_obj::hx_PhysicsController_addStatusListener;

Dynamic PhysicsController_obj::hx_PhysicsController_createFixedConstraint;

Dynamic PhysicsController_obj::hx_PhysicsController_createGenericConstraint_RgdBodyX2;

Dynamic PhysicsController_obj::hx_PhysicsController_createGenericConstraint_RgdBody_Qtrn_V3_RgdBody_Qtrn_V3;

Dynamic PhysicsController_obj::hx_PhysicsController_createHingeConstraint;

Dynamic PhysicsController_obj::hx_PhysicsController_createSocketConstraint_RgdBodyX2;

Dynamic PhysicsController_obj::hx_PhysicsController_createSocketConstraint_RgdBody_V3_RgdBody_V3;

Dynamic PhysicsController_obj::hx_PhysicsController_createSpringConstraint_RgdBodyX2;

Dynamic PhysicsController_obj::hx_PhysicsController_createSpringConstraint_RgdBody_Qtrn_V3_RgdBody_Qtrn_V3;

Dynamic PhysicsController_obj::hx_PhysicsController_drawDebug;

Dynamic PhysicsController_obj::hx_PhysicsController_getGravity;

Dynamic PhysicsController_obj::hx_PhysicsController_rayTest;

Dynamic PhysicsController_obj::hx_PhysicsController_removeStatusListener;

Dynamic PhysicsController_obj::hx_PhysicsController_setGravity;

Dynamic PhysicsController_obj::hx_PhysicsController_sweepTest;


PhysicsController_obj::PhysicsController_obj()
{
}

void PhysicsController_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PhysicsController);
	HX_MARK_MEMBER_NAME(_gravity,"_gravity");
	::org::gameplay3d::intern::NativeBinding_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PhysicsController_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_gravity,"_gravity");
	::org::gameplay3d::intern::NativeBinding_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PhysicsController_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"rayTest") ) { return rayTest_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_gravity") ) { return _gravity; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"drawDebug") ) { return drawDebug_dyn(); }
		if (HX_FIELD_EQ(inName,"sweepTest") ) { return sweepTest_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getGravity") ) { return getGravity_dyn(); }
		if (HX_FIELD_EQ(inName,"setGravity") ) { return setGravity_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"addStatusListener") ) { return addStatusListener_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"removeStatusListener") ) { return removeStatusListener_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"createFixedConstraint") ) { return createFixedConstraint_dyn(); }
		if (HX_FIELD_EQ(inName,"createHingeConstraint") ) { return createHingeConstraint_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_PhysicsController_rayTest") ) { return hx_PhysicsController_rayTest; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"hx_PhysicsController_drawDebug") ) { return hx_PhysicsController_drawDebug; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsController_sweepTest") ) { return hx_PhysicsController_sweepTest; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"hx_PhysicsController_getGravity") ) { return hx_PhysicsController_getGravity; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsController_setGravity") ) { return hx_PhysicsController_setGravity; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"createGenericConstraint_RgdBodyX2") ) { return createGenericConstraint_RgdBodyX2_dyn(); }
		if (HX_FIELD_EQ(inName,"createSocketConstraintt_RgdBodyX2") ) { return createSocketConstraintt_RgdBodyX2_dyn(); }
		if (HX_FIELD_EQ(inName,"createSpringConstraintt_RgdBodyX2") ) { return createSpringConstraintt_RgdBodyX2_dyn(); }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"hx_PhysicsController_addStatusListener") ) { return hx_PhysicsController_addStatusListener; }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"hx_PhysicsController_removeStatusListener") ) { return hx_PhysicsController_removeStatusListener; }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"hx_PhysicsController_createFixedConstraint") ) { return hx_PhysicsController_createFixedConstraint; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsController_createHingeConstraint") ) { return hx_PhysicsController_createHingeConstraint; }
		break;
	case 49:
		if (HX_FIELD_EQ(inName,"createSocketConstraint_RgdBody_Qtrn_V3_RgdBody_V3") ) { return createSocketConstraint_RgdBody_Qtrn_V3_RgdBody_V3_dyn(); }
		break;
	case 53:
		if (HX_FIELD_EQ(inName,"hx_PhysicsController_createSocketConstraint_RgdBodyX2") ) { return hx_PhysicsController_createSocketConstraint_RgdBodyX2; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsController_createSpringConstraint_RgdBodyX2") ) { return hx_PhysicsController_createSpringConstraint_RgdBodyX2; }
		break;
	case 54:
		if (HX_FIELD_EQ(inName,"hx_PhysicsController_createGenericConstraint_RgdBodyX2") ) { return hx_PhysicsController_createGenericConstraint_RgdBodyX2; }
		if (HX_FIELD_EQ(inName,"createSpringConstraint_RgdBody_Qtrn_V3_RgdBody_Qtrn_V3") ) { return createSpringConstraint_RgdBody_Qtrn_V3_RgdBody_Qtrn_V3_dyn(); }
		break;
	case 55:
		if (HX_FIELD_EQ(inName,"createGenericConstraint_RgdBody_Qtrn_V3_RgdBody_Qtrn_V3") ) { return createGenericConstraint_RgdBody_Qtrn_V3_RgdBody_Qtrn_V3_dyn(); }
		break;
	case 65:
		if (HX_FIELD_EQ(inName,"hx_PhysicsController_createSocketConstraint_RgdBody_V3_RgdBody_V3") ) { return hx_PhysicsController_createSocketConstraint_RgdBody_V3_RgdBody_V3; }
		break;
	case 75:
		if (HX_FIELD_EQ(inName,"hx_PhysicsController_createSpringConstraint_RgdBody_Qtrn_V3_RgdBody_Qtrn_V3") ) { return hx_PhysicsController_createSpringConstraint_RgdBody_Qtrn_V3_RgdBody_Qtrn_V3; }
		break;
	case 76:
		if (HX_FIELD_EQ(inName,"hx_PhysicsController_createGenericConstraint_RgdBody_Qtrn_V3_RgdBody_Qtrn_V3") ) { return hx_PhysicsController_createGenericConstraint_RgdBody_Qtrn_V3_RgdBody_Qtrn_V3; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PhysicsController_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_gravity") ) { _gravity=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_PhysicsController_rayTest") ) { hx_PhysicsController_rayTest=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"hx_PhysicsController_drawDebug") ) { hx_PhysicsController_drawDebug=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsController_sweepTest") ) { hx_PhysicsController_sweepTest=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"hx_PhysicsController_getGravity") ) { hx_PhysicsController_getGravity=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsController_setGravity") ) { hx_PhysicsController_setGravity=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"hx_PhysicsController_addStatusListener") ) { hx_PhysicsController_addStatusListener=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"hx_PhysicsController_removeStatusListener") ) { hx_PhysicsController_removeStatusListener=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"hx_PhysicsController_createFixedConstraint") ) { hx_PhysicsController_createFixedConstraint=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsController_createHingeConstraint") ) { hx_PhysicsController_createHingeConstraint=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 53:
		if (HX_FIELD_EQ(inName,"hx_PhysicsController_createSocketConstraint_RgdBodyX2") ) { hx_PhysicsController_createSocketConstraint_RgdBodyX2=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsController_createSpringConstraint_RgdBodyX2") ) { hx_PhysicsController_createSpringConstraint_RgdBodyX2=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 54:
		if (HX_FIELD_EQ(inName,"hx_PhysicsController_createGenericConstraint_RgdBodyX2") ) { hx_PhysicsController_createGenericConstraint_RgdBodyX2=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 65:
		if (HX_FIELD_EQ(inName,"hx_PhysicsController_createSocketConstraint_RgdBody_V3_RgdBody_V3") ) { hx_PhysicsController_createSocketConstraint_RgdBody_V3_RgdBody_V3=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 75:
		if (HX_FIELD_EQ(inName,"hx_PhysicsController_createSpringConstraint_RgdBody_Qtrn_V3_RgdBody_Qtrn_V3") ) { hx_PhysicsController_createSpringConstraint_RgdBody_Qtrn_V3_RgdBody_Qtrn_V3=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 76:
		if (HX_FIELD_EQ(inName,"hx_PhysicsController_createGenericConstraint_RgdBody_Qtrn_V3_RgdBody_Qtrn_V3") ) { hx_PhysicsController_createGenericConstraint_RgdBody_Qtrn_V3_RgdBody_Qtrn_V3=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PhysicsController_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_gravity"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("hx_PhysicsController_addStatusListener"),
	HX_CSTRING("hx_PhysicsController_createFixedConstraint"),
	HX_CSTRING("hx_PhysicsController_createGenericConstraint_RgdBodyX2"),
	HX_CSTRING("hx_PhysicsController_createGenericConstraint_RgdBody_Qtrn_V3_RgdBody_Qtrn_V3"),
	HX_CSTRING("hx_PhysicsController_createHingeConstraint"),
	HX_CSTRING("hx_PhysicsController_createSocketConstraint_RgdBodyX2"),
	HX_CSTRING("hx_PhysicsController_createSocketConstraint_RgdBody_V3_RgdBody_V3"),
	HX_CSTRING("hx_PhysicsController_createSpringConstraint_RgdBodyX2"),
	HX_CSTRING("hx_PhysicsController_createSpringConstraint_RgdBody_Qtrn_V3_RgdBody_Qtrn_V3"),
	HX_CSTRING("hx_PhysicsController_drawDebug"),
	HX_CSTRING("hx_PhysicsController_getGravity"),
	HX_CSTRING("hx_PhysicsController_rayTest"),
	HX_CSTRING("hx_PhysicsController_removeStatusListener"),
	HX_CSTRING("hx_PhysicsController_setGravity"),
	HX_CSTRING("hx_PhysicsController_sweepTest"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(PhysicsController_obj,_gravity),HX_CSTRING("_gravity")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_gravity"),
	HX_CSTRING("addStatusListener"),
	HX_CSTRING("createFixedConstraint"),
	HX_CSTRING("createGenericConstraint_RgdBodyX2"),
	HX_CSTRING("createGenericConstraint_RgdBody_Qtrn_V3_RgdBody_Qtrn_V3"),
	HX_CSTRING("createHingeConstraint"),
	HX_CSTRING("createSocketConstraintt_RgdBodyX2"),
	HX_CSTRING("createSocketConstraint_RgdBody_Qtrn_V3_RgdBody_V3"),
	HX_CSTRING("createSpringConstraintt_RgdBodyX2"),
	HX_CSTRING("createSpringConstraint_RgdBody_Qtrn_V3_RgdBody_Qtrn_V3"),
	HX_CSTRING("drawDebug"),
	HX_CSTRING("getGravity"),
	HX_CSTRING("rayTest"),
	HX_CSTRING("removeStatusListener"),
	HX_CSTRING("setGravity"),
	HX_CSTRING("sweepTest"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PhysicsController_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PhysicsController_obj::hx_PhysicsController_addStatusListener,"hx_PhysicsController_addStatusListener");
	HX_MARK_MEMBER_NAME(PhysicsController_obj::hx_PhysicsController_createFixedConstraint,"hx_PhysicsController_createFixedConstraint");
	HX_MARK_MEMBER_NAME(PhysicsController_obj::hx_PhysicsController_createGenericConstraint_RgdBodyX2,"hx_PhysicsController_createGenericConstraint_RgdBodyX2");
	HX_MARK_MEMBER_NAME(PhysicsController_obj::hx_PhysicsController_createGenericConstraint_RgdBody_Qtrn_V3_RgdBody_Qtrn_V3,"hx_PhysicsController_createGenericConstraint_RgdBody_Qtrn_V3_RgdBody_Qtrn_V3");
	HX_MARK_MEMBER_NAME(PhysicsController_obj::hx_PhysicsController_createHingeConstraint,"hx_PhysicsController_createHingeConstraint");
	HX_MARK_MEMBER_NAME(PhysicsController_obj::hx_PhysicsController_createSocketConstraint_RgdBodyX2,"hx_PhysicsController_createSocketConstraint_RgdBodyX2");
	HX_MARK_MEMBER_NAME(PhysicsController_obj::hx_PhysicsController_createSocketConstraint_RgdBody_V3_RgdBody_V3,"hx_PhysicsController_createSocketConstraint_RgdBody_V3_RgdBody_V3");
	HX_MARK_MEMBER_NAME(PhysicsController_obj::hx_PhysicsController_createSpringConstraint_RgdBodyX2,"hx_PhysicsController_createSpringConstraint_RgdBodyX2");
	HX_MARK_MEMBER_NAME(PhysicsController_obj::hx_PhysicsController_createSpringConstraint_RgdBody_Qtrn_V3_RgdBody_Qtrn_V3,"hx_PhysicsController_createSpringConstraint_RgdBody_Qtrn_V3_RgdBody_Qtrn_V3");
	HX_MARK_MEMBER_NAME(PhysicsController_obj::hx_PhysicsController_drawDebug,"hx_PhysicsController_drawDebug");
	HX_MARK_MEMBER_NAME(PhysicsController_obj::hx_PhysicsController_getGravity,"hx_PhysicsController_getGravity");
	HX_MARK_MEMBER_NAME(PhysicsController_obj::hx_PhysicsController_rayTest,"hx_PhysicsController_rayTest");
	HX_MARK_MEMBER_NAME(PhysicsController_obj::hx_PhysicsController_removeStatusListener,"hx_PhysicsController_removeStatusListener");
	HX_MARK_MEMBER_NAME(PhysicsController_obj::hx_PhysicsController_setGravity,"hx_PhysicsController_setGravity");
	HX_MARK_MEMBER_NAME(PhysicsController_obj::hx_PhysicsController_sweepTest,"hx_PhysicsController_sweepTest");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PhysicsController_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PhysicsController_obj::hx_PhysicsController_addStatusListener,"hx_PhysicsController_addStatusListener");
	HX_VISIT_MEMBER_NAME(PhysicsController_obj::hx_PhysicsController_createFixedConstraint,"hx_PhysicsController_createFixedConstraint");
	HX_VISIT_MEMBER_NAME(PhysicsController_obj::hx_PhysicsController_createGenericConstraint_RgdBodyX2,"hx_PhysicsController_createGenericConstraint_RgdBodyX2");
	HX_VISIT_MEMBER_NAME(PhysicsController_obj::hx_PhysicsController_createGenericConstraint_RgdBody_Qtrn_V3_RgdBody_Qtrn_V3,"hx_PhysicsController_createGenericConstraint_RgdBody_Qtrn_V3_RgdBody_Qtrn_V3");
	HX_VISIT_MEMBER_NAME(PhysicsController_obj::hx_PhysicsController_createHingeConstraint,"hx_PhysicsController_createHingeConstraint");
	HX_VISIT_MEMBER_NAME(PhysicsController_obj::hx_PhysicsController_createSocketConstraint_RgdBodyX2,"hx_PhysicsController_createSocketConstraint_RgdBodyX2");
	HX_VISIT_MEMBER_NAME(PhysicsController_obj::hx_PhysicsController_createSocketConstraint_RgdBody_V3_RgdBody_V3,"hx_PhysicsController_createSocketConstraint_RgdBody_V3_RgdBody_V3");
	HX_VISIT_MEMBER_NAME(PhysicsController_obj::hx_PhysicsController_createSpringConstraint_RgdBodyX2,"hx_PhysicsController_createSpringConstraint_RgdBodyX2");
	HX_VISIT_MEMBER_NAME(PhysicsController_obj::hx_PhysicsController_createSpringConstraint_RgdBody_Qtrn_V3_RgdBody_Qtrn_V3,"hx_PhysicsController_createSpringConstraint_RgdBody_Qtrn_V3_RgdBody_Qtrn_V3");
	HX_VISIT_MEMBER_NAME(PhysicsController_obj::hx_PhysicsController_drawDebug,"hx_PhysicsController_drawDebug");
	HX_VISIT_MEMBER_NAME(PhysicsController_obj::hx_PhysicsController_getGravity,"hx_PhysicsController_getGravity");
	HX_VISIT_MEMBER_NAME(PhysicsController_obj::hx_PhysicsController_rayTest,"hx_PhysicsController_rayTest");
	HX_VISIT_MEMBER_NAME(PhysicsController_obj::hx_PhysicsController_removeStatusListener,"hx_PhysicsController_removeStatusListener");
	HX_VISIT_MEMBER_NAME(PhysicsController_obj::hx_PhysicsController_setGravity,"hx_PhysicsController_setGravity");
	HX_VISIT_MEMBER_NAME(PhysicsController_obj::hx_PhysicsController_sweepTest,"hx_PhysicsController_sweepTest");
};

#endif

Class PhysicsController_obj::__mClass;

void PhysicsController_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.PhysicsController"), hx::TCanCast< PhysicsController_obj> ,sStaticFields,sMemberFields,
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

void PhysicsController_obj::__boot()
{
	hx_PhysicsController_addStatusListener= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsController >(),HX_CSTRING("addStatusListener"),(int)2);
	hx_PhysicsController_createFixedConstraint= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsController >(),HX_CSTRING("createFixedConstraint"),(int)3);
	hx_PhysicsController_createGenericConstraint_RgdBodyX2= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsController >(),HX_CSTRING("createGenericConstraint_RgdBodyX2"),(int)3);
	hx_PhysicsController_createGenericConstraint_RgdBody_Qtrn_V3_RgdBody_Qtrn_V3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsController >(),HX_CSTRING("createGenericConstraint_RgdBody_Qtrn_V3_RgdBody_Qtrn_V3"),(int)-1);
	hx_PhysicsController_createHingeConstraint= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsController >(),HX_CSTRING("createHingeConstraint"),(int)-1);
	hx_PhysicsController_createSocketConstraint_RgdBodyX2= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsController >(),HX_CSTRING("createSocketConstraint_RgdBodyX2"),(int)3);
	hx_PhysicsController_createSocketConstraint_RgdBody_V3_RgdBody_V3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsController >(),HX_CSTRING("createSocketConstraint_RgdBody_V3_RgdBody_V3"),(int)5);
	hx_PhysicsController_createSpringConstraint_RgdBodyX2= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsController >(),HX_CSTRING("createSpringConstraint_RgdBodyX2"),(int)3);
	hx_PhysicsController_createSpringConstraint_RgdBody_Qtrn_V3_RgdBody_Qtrn_V3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsController >(),HX_CSTRING("createSpringConstraint_RgdBody_Qtrn_V3_RgdBody_Qtrn_V3"),(int)-1);
	hx_PhysicsController_drawDebug= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsController >(),HX_CSTRING("drawDebug"),(int)2);
	hx_PhysicsController_getGravity= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsController >(),HX_CSTRING("getGravity"),(int)1);
	hx_PhysicsController_rayTest= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsController >(),HX_CSTRING("rayTest"),(int)5);
	hx_PhysicsController_removeStatusListener= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsController >(),HX_CSTRING("removeStatusListener"),(int)2);
	hx_PhysicsController_setGravity= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsController >(),HX_CSTRING("setGravity"),(int)2);
	hx_PhysicsController_sweepTest= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsController >(),HX_CSTRING("sweepTest"),(int)5);
}

} // end namespace org
} // end namespace gameplay3d
