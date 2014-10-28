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
#ifndef INCLUDED_org_gameplay3d_PhysicsCollisionObject_CollisionListener
#include <org/gameplay3d/PhysicsCollisionObject_CollisionListener.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsCollisionObject_CollisionPair
#include <org/gameplay3d/PhysicsCollisionObject_CollisionPair.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Vector3
#include <org/gameplay3d/Vector3.h>
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
#ifndef INCLUDED_org_gameplay3d_util_NativeInterface
#include <org/gameplay3d/util/NativeInterface.h>
#endif
#ifndef INCLUDED_org_gameplay3d_wrapper_PhysicsCollisionObject_CollisionListenerWrapper
#include <org/gameplay3d/wrapper/PhysicsCollisionObject_CollisionListenerWrapper.h>
#endif
namespace org{
namespace gameplay3d{
namespace wrapper{

Void PhysicsCollisionObject_CollisionListenerWrapper_obj::__construct(::org::gameplay3d::PhysicsCollisionObject_CollisionListener target,Dynamic nativeObject,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.wrapper.PhysicsCollisionObject_CollisionListenerWrapper","new",0xde57a02c,"org.gameplay3d.wrapper.PhysicsCollisionObject_CollisionListenerWrapper.new","org/gameplay3d/wrapper/PhysicsCollisionObject_CollisionListenerWrapper.hx",16,0xb8dab6a5)
HX_STACK_THIS(this)
HX_STACK_ARG(target,"target")
HX_STACK_ARG(nativeObject,"nativeObject")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(16)
	super::__construct(target,nativeObject,nativeObjectInitializerParams);
}
;
	return null();
}

//PhysicsCollisionObject_CollisionListenerWrapper_obj::~PhysicsCollisionObject_CollisionListenerWrapper_obj() { }

Dynamic PhysicsCollisionObject_CollisionListenerWrapper_obj::__CreateEmpty() { return  new PhysicsCollisionObject_CollisionListenerWrapper_obj; }
hx::ObjectPtr< PhysicsCollisionObject_CollisionListenerWrapper_obj > PhysicsCollisionObject_CollisionListenerWrapper_obj::__new(::org::gameplay3d::PhysicsCollisionObject_CollisionListener target,Dynamic nativeObject,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< PhysicsCollisionObject_CollisionListenerWrapper_obj > result = new PhysicsCollisionObject_CollisionListenerWrapper_obj();
	result->__construct(target,nativeObject,nativeObjectInitializerParams);
	return result;}

Dynamic PhysicsCollisionObject_CollisionListenerWrapper_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PhysicsCollisionObject_CollisionListenerWrapper_obj > result = new PhysicsCollisionObject_CollisionListenerWrapper_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

hx::Object *PhysicsCollisionObject_CollisionListenerWrapper_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::PhysicsCollisionObject_CollisionListener_obj)) return operator ::org::gameplay3d::PhysicsCollisionObject_CollisionListener_obj *();
	return super::__ToInterface(inType);
}

Void PhysicsCollisionObject_CollisionListenerWrapper_obj::collisionEvent( int type,::org::gameplay3d::PhysicsCollisionObject_CollisionPair collisionPair,::org::gameplay3d::Vector3 contactPointA,::org::gameplay3d::Vector3 contactPointB){
{
		HX_STACK_FRAME("org.gameplay3d.wrapper.PhysicsCollisionObject_CollisionListenerWrapper","collisionEvent",0x1dd19dfc,"org.gameplay3d.wrapper.PhysicsCollisionObject_CollisionListenerWrapper.collisionEvent","org/gameplay3d/wrapper/PhysicsCollisionObject_CollisionListenerWrapper.hx",35,0xb8dab6a5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(collisionPair,"collisionPair")
		HX_STACK_ARG(contactPointA,"contactPointA")
		HX_STACK_ARG(contactPointB,"contactPointB")
		HX_STACK_LINE(35)
		this->target->__Field(HX_CSTRING("collisionEvent"),true)(type,collisionPair,contactPointA,contactPointB);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(PhysicsCollisionObject_CollisionListenerWrapper_obj,collisionEvent,(void))

Void PhysicsCollisionObject_CollisionListenerWrapper_obj::collisionEventWrapper( int type,Dynamic collisionPair,Dynamic contactPointA,Dynamic contactPointB){
{
		HX_STACK_FRAME("org.gameplay3d.wrapper.PhysicsCollisionObject_CollisionListenerWrapper","collisionEventWrapper",0xc6aa56b7,"org.gameplay3d.wrapper.PhysicsCollisionObject_CollisionListenerWrapper.collisionEventWrapper","org/gameplay3d/wrapper/PhysicsCollisionObject_CollisionListenerWrapper.hx",43,0xb8dab6a5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(collisionPair,"collisionPair")
		HX_STACK_ARG(contactPointA,"contactPointA")
		HX_STACK_ARG(contactPointB,"contactPointB")
		HX_STACK_LINE(28)
		::org::gameplay3d::PhysicsCollisionObject_CollisionPair _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(28)
		if (((this->_collisionPair == null()))){
			HX_STACK_LINE(29)
			::org::gameplay3d::PhysicsCollisionObject_CollisionPair _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(29)
			{
				HX_STACK_LINE(29)
				::Class classObj = hx::ClassOf< ::org::gameplay3d::PhysicsCollisionObject_CollisionPair >();		HX_STACK_VAR(classObj,"classObj");
				HX_STACK_LINE(29)
				if (((collisionPair == null()))){
					HX_STACK_LINE(29)
					_g1 = null();
				}
				else{
					HX_STACK_LINE(29)
					if ((::Std_obj::is(collisionPair,hx::ClassOf< ::cpp::vm::WeakRef >()))){
						HX_STACK_LINE(46)
						::cpp::vm::WeakRef ref = collisionPair;		HX_STACK_VAR(ref,"ref");
						HX_STACK_LINE(29)
						::org::gameplay3d::PhysicsCollisionObject_CollisionPair result = ref->get();		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(29)
						if (((result == null()))){
							HX_STACK_LINE(29)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
							HX_STACK_LINE(29)
							::org::gameplay3d::PhysicsCollisionObject_CollisionPair _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = collisionPair;
						HX_STACK_LINE(29)
						_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
					}
				}
			}
			HX_STACK_LINE(29)
			_g3 = this->_collisionPair = _g1;
		}
		else{
			HX_STACK_LINE(31)
			::org::gameplay3d::PhysicsCollisionObject_CollisionPair _g2 = this->_collisionPair->impersonate(collisionPair);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(31)
			_g3 = this->_collisionPair = _g2;
		}
		HX_STACK_LINE(28)
		::org::gameplay3d::Vector3 _g7;		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(28)
		if (((this->_contactPointA == null()))){
			HX_STACK_LINE(29)
			::org::gameplay3d::Vector3 _g5;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(29)
			{
				HX_STACK_LINE(29)
				::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
				HX_STACK_LINE(29)
				if (((contactPointA == null()))){
					HX_STACK_LINE(29)
					_g5 = null();
				}
				else{
					HX_STACK_LINE(29)
					if ((::Std_obj::is(contactPointA,hx::ClassOf< ::cpp::vm::WeakRef >()))){
						HX_STACK_LINE(47)
						::cpp::vm::WeakRef ref = contactPointA;		HX_STACK_VAR(ref,"ref");
						HX_STACK_LINE(29)
						::org::gameplay3d::Vector3 result = ref->get();		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(29)
						if (((result == null()))){
							HX_STACK_LINE(29)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
							HX_STACK_LINE(29)
							::org::gameplay3d::Vector3 _g4 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(29)
							result = _g4;
							HX_STACK_LINE(29)
							ref->set(result);
						}
						HX_STACK_LINE(29)
						_g5 = result;
					}
					else{
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = contactPointA;
						HX_STACK_LINE(29)
						_g5 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
					}
				}
			}
			HX_STACK_LINE(29)
			_g7 = this->_contactPointA = _g5;
		}
		else{
			HX_STACK_LINE(31)
			::org::gameplay3d::Vector3 _g6 = this->_contactPointA->impersonate(contactPointA);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(31)
			_g7 = this->_contactPointA = _g6;
		}
		HX_STACK_LINE(28)
		::org::gameplay3d::Vector3 _g11;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(28)
		if (((this->_contactPointB == null()))){
			HX_STACK_LINE(29)
			::org::gameplay3d::Vector3 _g9;		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(29)
			{
				HX_STACK_LINE(29)
				::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
				HX_STACK_LINE(29)
				if (((contactPointB == null()))){
					HX_STACK_LINE(29)
					_g9 = null();
				}
				else{
					HX_STACK_LINE(29)
					if ((::Std_obj::is(contactPointB,hx::ClassOf< ::cpp::vm::WeakRef >()))){
						HX_STACK_LINE(48)
						::cpp::vm::WeakRef ref = contactPointB;		HX_STACK_VAR(ref,"ref");
						HX_STACK_LINE(29)
						::org::gameplay3d::Vector3 result = ref->get();		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(29)
						if (((result == null()))){
							HX_STACK_LINE(29)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
							HX_STACK_LINE(29)
							::org::gameplay3d::Vector3 _g8 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(29)
							result = _g8;
							HX_STACK_LINE(29)
							ref->set(result);
						}
						HX_STACK_LINE(29)
						_g9 = result;
					}
					else{
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = contactPointB;
						HX_STACK_LINE(29)
						_g9 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
					}
				}
			}
			HX_STACK_LINE(29)
			_g11 = this->_contactPointB = _g9;
		}
		else{
			HX_STACK_LINE(31)
			::org::gameplay3d::Vector3 _g10 = this->_contactPointB->impersonate(contactPointB);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(31)
			_g11 = this->_contactPointB = _g10;
		}
		HX_STACK_LINE(44)
		this->collisionEvent(type,_g3,_g7,_g11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(PhysicsCollisionObject_CollisionListenerWrapper_obj,collisionEventWrapper,(void))

::org::gameplay3d::wrapper::PhysicsCollisionObject_CollisionListenerWrapper PhysicsCollisionObject_CollisionListenerWrapper_obj::make( ::org::gameplay3d::PhysicsCollisionObject_CollisionListener target){
	HX_STACK_FRAME("org.gameplay3d.wrapper.PhysicsCollisionObject_CollisionListenerWrapper","make",0xada83ca2,"org.gameplay3d.wrapper.PhysicsCollisionObject_CollisionListenerWrapper.make","org/gameplay3d/wrapper/PhysicsCollisionObject_CollisionListenerWrapper.hx",29,0xb8dab6a5)
	HX_STACK_ARG(target,"target")
	HX_STACK_LINE(29)
	return ::org::gameplay3d::wrapper::PhysicsCollisionObject_CollisionListenerWrapper_obj::__new(target,::org::gameplay3d::wrapper::PhysicsCollisionObject_CollisionListenerWrapper_obj::constructNativeObject_dyn(),Dynamic( Array_obj<Dynamic>::__new().Add(null())));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PhysicsCollisionObject_CollisionListenerWrapper_obj,make,return )

Dynamic PhysicsCollisionObject_CollisionListenerWrapper_obj::constructNativeObject( ::org::gameplay3d::wrapper::PhysicsCollisionObject_CollisionListenerWrapper thisObj){
	HX_STACK_FRAME("org.gameplay3d.wrapper.PhysicsCollisionObject_CollisionListenerWrapper","constructNativeObject",0xd5952539,"org.gameplay3d.wrapper.PhysicsCollisionObject_CollisionListenerWrapper.constructNativeObject","org/gameplay3d/wrapper/PhysicsCollisionObject_CollisionListenerWrapper.hx",55,0xb8dab6a5)
	HX_STACK_ARG(thisObj,"thisObj")
	HX_STACK_LINE(55)
	return ::org::gameplay3d::wrapper::PhysicsCollisionObject_CollisionListenerWrapper_obj::hx_PhysicsCollisionObject_CollisionListener_Construct(thisObj->collisionEventWrapper_dyn());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PhysicsCollisionObject_CollisionListenerWrapper_obj,constructNativeObject,return )

Dynamic PhysicsCollisionObject_CollisionListenerWrapper_obj::hx_PhysicsCollisionObject_CollisionListener_Construct;


PhysicsCollisionObject_CollisionListenerWrapper_obj::PhysicsCollisionObject_CollisionListenerWrapper_obj()
{
}

void PhysicsCollisionObject_CollisionListenerWrapper_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PhysicsCollisionObject_CollisionListenerWrapper);
	HX_MARK_MEMBER_NAME(_collisionPair,"_collisionPair");
	HX_MARK_MEMBER_NAME(_contactPointA,"_contactPointA");
	HX_MARK_MEMBER_NAME(_contactPointB,"_contactPointB");
	::org::gameplay3d::intern::ListenerWrapper_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PhysicsCollisionObject_CollisionListenerWrapper_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_collisionPair,"_collisionPair");
	HX_VISIT_MEMBER_NAME(_contactPointA,"_contactPointA");
	HX_VISIT_MEMBER_NAME(_contactPointB,"_contactPointB");
	::org::gameplay3d::intern::ListenerWrapper_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PhysicsCollisionObject_CollisionListenerWrapper_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { return make_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_collisionPair") ) { return _collisionPair; }
		if (HX_FIELD_EQ(inName,"_contactPointA") ) { return _contactPointA; }
		if (HX_FIELD_EQ(inName,"_contactPointB") ) { return _contactPointB; }
		if (HX_FIELD_EQ(inName,"collisionEvent") ) { return collisionEvent_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"constructNativeObject") ) { return constructNativeObject_dyn(); }
		if (HX_FIELD_EQ(inName,"collisionEventWrapper") ) { return collisionEventWrapper_dyn(); }
		break;
	case 53:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionObject_CollisionListener_Construct") ) { return hx_PhysicsCollisionObject_CollisionListener_Construct; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PhysicsCollisionObject_CollisionListenerWrapper_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"_collisionPair") ) { _collisionPair=inValue.Cast< ::org::gameplay3d::PhysicsCollisionObject_CollisionPair >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_contactPointA") ) { _contactPointA=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_contactPointB") ) { _contactPointB=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		break;
	case 53:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionObject_CollisionListener_Construct") ) { hx_PhysicsCollisionObject_CollisionListener_Construct=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PhysicsCollisionObject_CollisionListenerWrapper_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_collisionPair"));
	outFields->push(HX_CSTRING("_contactPointA"));
	outFields->push(HX_CSTRING("_contactPointB"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("make"),
	HX_CSTRING("constructNativeObject"),
	HX_CSTRING("hx_PhysicsCollisionObject_CollisionListener_Construct"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::org::gameplay3d::PhysicsCollisionObject_CollisionPair*/ ,(int)offsetof(PhysicsCollisionObject_CollisionListenerWrapper_obj,_collisionPair),HX_CSTRING("_collisionPair")},
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(PhysicsCollisionObject_CollisionListenerWrapper_obj,_contactPointA),HX_CSTRING("_contactPointA")},
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(PhysicsCollisionObject_CollisionListenerWrapper_obj,_contactPointB),HX_CSTRING("_contactPointB")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_collisionPair"),
	HX_CSTRING("_contactPointA"),
	HX_CSTRING("_contactPointB"),
	HX_CSTRING("collisionEvent"),
	HX_CSTRING("collisionEventWrapper"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PhysicsCollisionObject_CollisionListenerWrapper_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PhysicsCollisionObject_CollisionListenerWrapper_obj::hx_PhysicsCollisionObject_CollisionListener_Construct,"hx_PhysicsCollisionObject_CollisionListener_Construct");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PhysicsCollisionObject_CollisionListenerWrapper_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PhysicsCollisionObject_CollisionListenerWrapper_obj::hx_PhysicsCollisionObject_CollisionListener_Construct,"hx_PhysicsCollisionObject_CollisionListener_Construct");
};

#endif

Class PhysicsCollisionObject_CollisionListenerWrapper_obj::__mClass;

void PhysicsCollisionObject_CollisionListenerWrapper_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.wrapper.PhysicsCollisionObject_CollisionListenerWrapper"), hx::TCanCast< PhysicsCollisionObject_CollisionListenerWrapper_obj> ,sStaticFields,sMemberFields,
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

void PhysicsCollisionObject_CollisionListenerWrapper_obj::__boot()
{
	hx_PhysicsCollisionObject_CollisionListener_Construct= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsCollisionObject_CollisionListener >(),HX_CSTRING("Construct"),(int)1);
}

} // end namespace org
} // end namespace gameplay3d
} // end namespace wrapper
