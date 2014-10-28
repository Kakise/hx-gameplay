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
#ifndef INCLUDED_org_gameplay3d_PhysicsConstraint
#include <org/gameplay3d/PhysicsConstraint.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Quaternion
#include <org/gameplay3d/Quaternion.h>
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
#ifndef INCLUDED_org_gameplay3d_intern_impl_AnimationTarget_ScriptTarget
#include <org/gameplay3d/intern/impl/AnimationTarget_ScriptTarget.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_NativeInterface
#include <org/gameplay3d/util/NativeInterface.h>
#endif
namespace org{
namespace gameplay3d{

Void PhysicsConstraint_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.PhysicsConstraint","new",0x79de2429,"org.gameplay3d.PhysicsConstraint.new","org/gameplay3d/PhysicsConstraint.hx",12,0xe4935107)
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

//PhysicsConstraint_obj::~PhysicsConstraint_obj() { }

Dynamic PhysicsConstraint_obj::__CreateEmpty() { return  new PhysicsConstraint_obj; }
hx::ObjectPtr< PhysicsConstraint_obj > PhysicsConstraint_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< PhysicsConstraint_obj > result = new PhysicsConstraint_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic PhysicsConstraint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PhysicsConstraint_obj > result = new PhysicsConstraint_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Float PhysicsConstraint_obj::getBreakingImpulse( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsConstraint","getBreakingImpulse",0x4c34cbd3,"org.gameplay3d.PhysicsConstraint.getBreakingImpulse","org/gameplay3d/PhysicsConstraint.hx",29,0xe4935107)
	HX_STACK_THIS(this)
	HX_STACK_LINE(29)
	return ::org::gameplay3d::PhysicsConstraint_obj::hx_PhysicsConstraint_getBreakingImpulse(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsConstraint_obj,getBreakingImpulse,return )

bool PhysicsConstraint_obj::isEnabled( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsConstraint","isEnabled",0xdb145240,"org.gameplay3d.PhysicsConstraint.isEnabled","org/gameplay3d/PhysicsConstraint.hx",47,0xe4935107)
	HX_STACK_THIS(this)
	HX_STACK_LINE(47)
	return ::org::gameplay3d::PhysicsConstraint_obj::hx_PhysicsConstraint_isEnabled(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsConstraint_obj,isEnabled,return )

Void PhysicsConstraint_obj::setBreakingImpulse( Float impulse){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsConstraint","setBreakingImpulse",0x28e3fe47,"org.gameplay3d.PhysicsConstraint.setBreakingImpulse","org/gameplay3d/PhysicsConstraint.hx",53,0xe4935107)
		HX_STACK_THIS(this)
		HX_STACK_ARG(impulse,"impulse")
		HX_STACK_LINE(53)
		::org::gameplay3d::PhysicsConstraint_obj::hx_PhysicsConstraint_setBreakingImpulse(this->nativeObject,impulse);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsConstraint_obj,setBreakingImpulse,(void))

Void PhysicsConstraint_obj::setEnabled( bool enabled){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsConstraint","setEnabled",0x4061d056,"org.gameplay3d.PhysicsConstraint.setEnabled","org/gameplay3d/PhysicsConstraint.hx",59,0xe4935107)
		HX_STACK_THIS(this)
		HX_STACK_ARG(enabled,"enabled")
		HX_STACK_LINE(59)
		::org::gameplay3d::PhysicsConstraint_obj::hx_PhysicsConstraint_setEnabled(this->nativeObject,enabled);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsConstraint_obj,setEnabled,(void))

::org::gameplay3d::Quaternion PhysicsConstraint_obj::_rotationOffset;

::org::gameplay3d::Vector3 PhysicsConstraint_obj::centerOfMassMidpoint( ::org::gameplay3d::Node a,::org::gameplay3d::Node b){
	HX_STACK_FRAME("org.gameplay3d.PhysicsConstraint","centerOfMassMidpoint",0x6655d95f,"org.gameplay3d.PhysicsConstraint.centerOfMassMidpoint","org/gameplay3d/PhysicsConstraint.hx",23,0xe4935107)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(23)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(23)
	Dynamic nativeObject = ::org::gameplay3d::PhysicsConstraint_obj::hx_PhysicsConstraint_static_centerOfMassMidpoint((  (((a == null()))) ? Dynamic(null()) : Dynamic(a->nativeObject) ),(  (((b == null()))) ? Dynamic(null()) : Dynamic(b->nativeObject) ));		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(23)
	if (((nativeObject == null()))){
		HX_STACK_LINE(23)
		return null();
	}
	else{
		HX_STACK_LINE(23)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(23)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(23)
			::org::gameplay3d::Vector3 result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(23)
			if (((result == null()))){
				HX_STACK_LINE(23)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(23)
				::org::gameplay3d::Vector3 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(23)
				result = _g;
				HX_STACK_LINE(23)
				ref->set(result);
			}
			HX_STACK_LINE(23)
			return result;
		}
		else{
			HX_STACK_LINE(23)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(23)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(23)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PhysicsConstraint_obj,centerOfMassMidpoint,return )

::org::gameplay3d::Quaternion PhysicsConstraint_obj::getRotationOffset( ::org::gameplay3d::Node node,::org::gameplay3d::immutable::IVector3 point){
	HX_STACK_FRAME("org.gameplay3d.PhysicsConstraint","getRotationOffset",0xcd327c30,"org.gameplay3d.PhysicsConstraint.getRotationOffset","org/gameplay3d/PhysicsConstraint.hx",35,0xe4935107)
	HX_STACK_ARG(node,"node")
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(28)
	if (((::org::gameplay3d::PhysicsConstraint_obj::_rotationOffset == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Quaternion _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Quaternion >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(35)
			Dynamic nativeObject = ::org::gameplay3d::PhysicsConstraint_obj::hx_PhysicsConstraint_static_getRotationOffset((  (((node == null()))) ? Dynamic(null()) : Dynamic(node->nativeObject) ),(  (((point == null()))) ? Dynamic(null()) : Dynamic(point->__Field(HX_CSTRING("nativeObject"),true)) ));		HX_STACK_VAR(nativeObject,"nativeObject");
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
		return ::org::gameplay3d::PhysicsConstraint_obj::_rotationOffset = _g1;
	}
	else{
		HX_STACK_LINE(35)
		Dynamic _g2 = ::org::gameplay3d::PhysicsConstraint_obj::hx_PhysicsConstraint_static_getRotationOffset((  (((node == null()))) ? Dynamic(null()) : Dynamic(node->nativeObject) ),(  (((point == null()))) ? Dynamic(null()) : Dynamic(point->__Field(HX_CSTRING("nativeObject"),true)) ));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Quaternion _g3 = ::org::gameplay3d::PhysicsConstraint_obj::_rotationOffset->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return ::org::gameplay3d::PhysicsConstraint_obj::_rotationOffset = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PhysicsConstraint_obj,getRotationOffset,return )

::org::gameplay3d::Vector3 PhysicsConstraint_obj::getTranslationOffset( ::org::gameplay3d::Node node,::org::gameplay3d::immutable::IVector3 point){
	HX_STACK_FRAME("org.gameplay3d.PhysicsConstraint","getTranslationOffset",0x1a831805,"org.gameplay3d.PhysicsConstraint.getTranslationOffset","org/gameplay3d/PhysicsConstraint.hx",41,0xe4935107)
	HX_STACK_ARG(node,"node")
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(41)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(41)
	Dynamic nativeObject = ::org::gameplay3d::PhysicsConstraint_obj::hx_PhysicsConstraint_static_getTranslationOffset((  (((node == null()))) ? Dynamic(null()) : Dynamic(node->nativeObject) ),(  (((point == null()))) ? Dynamic(null()) : Dynamic(point->__Field(HX_CSTRING("nativeObject"),true)) ));		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(41)
	if (((nativeObject == null()))){
		HX_STACK_LINE(41)
		return null();
	}
	else{
		HX_STACK_LINE(41)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(41)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(41)
			::org::gameplay3d::Vector3 result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(41)
			if (((result == null()))){
				HX_STACK_LINE(41)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(41)
				::org::gameplay3d::Vector3 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(41)
				result = _g;
				HX_STACK_LINE(41)
				ref->set(result);
			}
			HX_STACK_LINE(41)
			return result;
		}
		else{
			HX_STACK_LINE(41)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(41)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(41)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PhysicsConstraint_obj,getTranslationOffset,return )

Dynamic PhysicsConstraint_obj::hx_PhysicsConstraint_static_centerOfMassMidpoint;

Dynamic PhysicsConstraint_obj::hx_PhysicsConstraint_getBreakingImpulse;

Dynamic PhysicsConstraint_obj::hx_PhysicsConstraint_static_getRotationOffset;

Dynamic PhysicsConstraint_obj::hx_PhysicsConstraint_static_getTranslationOffset;

Dynamic PhysicsConstraint_obj::hx_PhysicsConstraint_isEnabled;

Dynamic PhysicsConstraint_obj::hx_PhysicsConstraint_setBreakingImpulse;

Dynamic PhysicsConstraint_obj::hx_PhysicsConstraint_setEnabled;


PhysicsConstraint_obj::PhysicsConstraint_obj()
{
}

Dynamic PhysicsConstraint_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"isEnabled") ) { return isEnabled_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setEnabled") ) { return setEnabled_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_rotationOffset") ) { return _rotationOffset; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getRotationOffset") ) { return getRotationOffset_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getBreakingImpulse") ) { return getBreakingImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"setBreakingImpulse") ) { return setBreakingImpulse_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"centerOfMassMidpoint") ) { return centerOfMassMidpoint_dyn(); }
		if (HX_FIELD_EQ(inName,"getTranslationOffset") ) { return getTranslationOffset_dyn(); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"hx_PhysicsConstraint_isEnabled") ) { return hx_PhysicsConstraint_isEnabled; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"hx_PhysicsConstraint_setEnabled") ) { return hx_PhysicsConstraint_setEnabled; }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"hx_PhysicsConstraint_getBreakingImpulse") ) { return hx_PhysicsConstraint_getBreakingImpulse; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsConstraint_setBreakingImpulse") ) { return hx_PhysicsConstraint_setBreakingImpulse; }
		break;
	case 45:
		if (HX_FIELD_EQ(inName,"hx_PhysicsConstraint_static_getRotationOffset") ) { return hx_PhysicsConstraint_static_getRotationOffset; }
		break;
	case 48:
		if (HX_FIELD_EQ(inName,"hx_PhysicsConstraint_static_centerOfMassMidpoint") ) { return hx_PhysicsConstraint_static_centerOfMassMidpoint; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsConstraint_static_getTranslationOffset") ) { return hx_PhysicsConstraint_static_getTranslationOffset; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PhysicsConstraint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"_rotationOffset") ) { _rotationOffset=inValue.Cast< ::org::gameplay3d::Quaternion >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"hx_PhysicsConstraint_isEnabled") ) { hx_PhysicsConstraint_isEnabled=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"hx_PhysicsConstraint_setEnabled") ) { hx_PhysicsConstraint_setEnabled=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"hx_PhysicsConstraint_getBreakingImpulse") ) { hx_PhysicsConstraint_getBreakingImpulse=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsConstraint_setBreakingImpulse") ) { hx_PhysicsConstraint_setBreakingImpulse=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 45:
		if (HX_FIELD_EQ(inName,"hx_PhysicsConstraint_static_getRotationOffset") ) { hx_PhysicsConstraint_static_getRotationOffset=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 48:
		if (HX_FIELD_EQ(inName,"hx_PhysicsConstraint_static_centerOfMassMidpoint") ) { hx_PhysicsConstraint_static_centerOfMassMidpoint=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsConstraint_static_getTranslationOffset") ) { hx_PhysicsConstraint_static_getTranslationOffset=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PhysicsConstraint_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_rotationOffset"),
	HX_CSTRING("centerOfMassMidpoint"),
	HX_CSTRING("getRotationOffset"),
	HX_CSTRING("getTranslationOffset"),
	HX_CSTRING("hx_PhysicsConstraint_static_centerOfMassMidpoint"),
	HX_CSTRING("hx_PhysicsConstraint_getBreakingImpulse"),
	HX_CSTRING("hx_PhysicsConstraint_static_getRotationOffset"),
	HX_CSTRING("hx_PhysicsConstraint_static_getTranslationOffset"),
	HX_CSTRING("hx_PhysicsConstraint_isEnabled"),
	HX_CSTRING("hx_PhysicsConstraint_setBreakingImpulse"),
	HX_CSTRING("hx_PhysicsConstraint_setEnabled"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("getBreakingImpulse"),
	HX_CSTRING("isEnabled"),
	HX_CSTRING("setBreakingImpulse"),
	HX_CSTRING("setEnabled"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PhysicsConstraint_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PhysicsConstraint_obj::_rotationOffset,"_rotationOffset");
	HX_MARK_MEMBER_NAME(PhysicsConstraint_obj::hx_PhysicsConstraint_static_centerOfMassMidpoint,"hx_PhysicsConstraint_static_centerOfMassMidpoint");
	HX_MARK_MEMBER_NAME(PhysicsConstraint_obj::hx_PhysicsConstraint_getBreakingImpulse,"hx_PhysicsConstraint_getBreakingImpulse");
	HX_MARK_MEMBER_NAME(PhysicsConstraint_obj::hx_PhysicsConstraint_static_getRotationOffset,"hx_PhysicsConstraint_static_getRotationOffset");
	HX_MARK_MEMBER_NAME(PhysicsConstraint_obj::hx_PhysicsConstraint_static_getTranslationOffset,"hx_PhysicsConstraint_static_getTranslationOffset");
	HX_MARK_MEMBER_NAME(PhysicsConstraint_obj::hx_PhysicsConstraint_isEnabled,"hx_PhysicsConstraint_isEnabled");
	HX_MARK_MEMBER_NAME(PhysicsConstraint_obj::hx_PhysicsConstraint_setBreakingImpulse,"hx_PhysicsConstraint_setBreakingImpulse");
	HX_MARK_MEMBER_NAME(PhysicsConstraint_obj::hx_PhysicsConstraint_setEnabled,"hx_PhysicsConstraint_setEnabled");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PhysicsConstraint_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PhysicsConstraint_obj::_rotationOffset,"_rotationOffset");
	HX_VISIT_MEMBER_NAME(PhysicsConstraint_obj::hx_PhysicsConstraint_static_centerOfMassMidpoint,"hx_PhysicsConstraint_static_centerOfMassMidpoint");
	HX_VISIT_MEMBER_NAME(PhysicsConstraint_obj::hx_PhysicsConstraint_getBreakingImpulse,"hx_PhysicsConstraint_getBreakingImpulse");
	HX_VISIT_MEMBER_NAME(PhysicsConstraint_obj::hx_PhysicsConstraint_static_getRotationOffset,"hx_PhysicsConstraint_static_getRotationOffset");
	HX_VISIT_MEMBER_NAME(PhysicsConstraint_obj::hx_PhysicsConstraint_static_getTranslationOffset,"hx_PhysicsConstraint_static_getTranslationOffset");
	HX_VISIT_MEMBER_NAME(PhysicsConstraint_obj::hx_PhysicsConstraint_isEnabled,"hx_PhysicsConstraint_isEnabled");
	HX_VISIT_MEMBER_NAME(PhysicsConstraint_obj::hx_PhysicsConstraint_setBreakingImpulse,"hx_PhysicsConstraint_setBreakingImpulse");
	HX_VISIT_MEMBER_NAME(PhysicsConstraint_obj::hx_PhysicsConstraint_setEnabled,"hx_PhysicsConstraint_setEnabled");
};

#endif

Class PhysicsConstraint_obj::__mClass;

void PhysicsConstraint_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.PhysicsConstraint"), hx::TCanCast< PhysicsConstraint_obj> ,sStaticFields,sMemberFields,
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

void PhysicsConstraint_obj::__boot()
{
	hx_PhysicsConstraint_static_centerOfMassMidpoint= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsConstraint >(),HX_CSTRING("static_centerOfMassMidpoint"),(int)2);
	hx_PhysicsConstraint_getBreakingImpulse= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsConstraint >(),HX_CSTRING("getBreakingImpulse"),(int)1);
	hx_PhysicsConstraint_static_getRotationOffset= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsConstraint >(),HX_CSTRING("static_getRotationOffset"),(int)2);
	hx_PhysicsConstraint_static_getTranslationOffset= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsConstraint >(),HX_CSTRING("static_getTranslationOffset"),(int)2);
	hx_PhysicsConstraint_isEnabled= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsConstraint >(),HX_CSTRING("isEnabled"),(int)1);
	hx_PhysicsConstraint_setBreakingImpulse= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsConstraint >(),HX_CSTRING("setBreakingImpulse"),(int)2);
	hx_PhysicsConstraint_setEnabled= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsConstraint >(),HX_CSTRING("setEnabled"),(int)2);
}

} // end namespace org
} // end namespace gameplay3d
