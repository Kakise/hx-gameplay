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
#ifndef INCLUDED_org_gameplay3d_PhysicsCollisionObject_CollisionPair
#include <org/gameplay3d/PhysicsCollisionObject_CollisionPair.h>
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

Void PhysicsCollisionObject_CollisionPair_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.PhysicsCollisionObject_CollisionPair","new",0xa1f87236,"org.gameplay3d.PhysicsCollisionObject_CollisionPair.new","org/gameplay3d/PhysicsCollisionObject_CollisionPair.hx",11,0x049e4c5a)
HX_STACK_THIS(this)
HX_STACK_ARG(nativeObjectInitializer,"nativeObjectInitializer")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(11)
	super::__construct(nativeObjectInitializer,nativeObjectInitializerParams);
}
;
	return null();
}

//PhysicsCollisionObject_CollisionPair_obj::~PhysicsCollisionObject_CollisionPair_obj() { }

Dynamic PhysicsCollisionObject_CollisionPair_obj::__CreateEmpty() { return  new PhysicsCollisionObject_CollisionPair_obj; }
hx::ObjectPtr< PhysicsCollisionObject_CollisionPair_obj > PhysicsCollisionObject_CollisionPair_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< PhysicsCollisionObject_CollisionPair_obj > result = new PhysicsCollisionObject_CollisionPair_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic PhysicsCollisionObject_CollisionPair_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PhysicsCollisionObject_CollisionPair_obj > result = new PhysicsCollisionObject_CollisionPair_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Dynamic PhysicsCollisionObject_CollisionPair_obj::impersonate( Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.PhysicsCollisionObject_CollisionPair","impersonate",0x5602a30f,"org.gameplay3d.PhysicsCollisionObject_CollisionPair.impersonate","org/gameplay3d/PhysicsCollisionObject_CollisionPair.hx",25,0x049e4c5a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(26)
	this->super::impersonate(nativeObject);
	HX_STACK_LINE(28)
	if (((this->objectA == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::PhysicsCollisionObject _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::PhysicsCollisionObject >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(27)
			Dynamic nativeObject1 = ::org::gameplay3d::PhysicsCollisionObject_CollisionPair_obj::hx_PhysicsCollisionObject_CollisionPair_property_objectA_get(nativeObject);		HX_STACK_VAR(nativeObject1,"nativeObject1");
			HX_STACK_LINE(29)
			if (((nativeObject1 == null()))){
				HX_STACK_LINE(29)
				_g1 = null();
			}
			else{
				HX_STACK_LINE(29)
				if ((::Std_obj::is(nativeObject1,hx::ClassOf< ::cpp::vm::WeakRef >()))){
					HX_STACK_LINE(29)
					::cpp::vm::WeakRef ref = nativeObject1;		HX_STACK_VAR(ref,"ref");
					HX_STACK_LINE(29)
					::org::gameplay3d::PhysicsCollisionObject result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::PhysicsCollisionObject _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject1;
					HX_STACK_LINE(29)
					_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
				}
			}
		}
		HX_STACK_LINE(29)
		this->objectA = _g1;
	}
	else{
		HX_STACK_LINE(27)
		Dynamic _g2 = ::org::gameplay3d::PhysicsCollisionObject_CollisionPair_obj::hx_PhysicsCollisionObject_CollisionPair_property_objectA_get(nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::PhysicsCollisionObject _g3 = this->objectA->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		this->objectA = _g3;
	}
	HX_STACK_LINE(28)
	if (((this->objectB == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::PhysicsCollisionObject _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::PhysicsCollisionObject >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(28)
			Dynamic nativeObject1 = ::org::gameplay3d::PhysicsCollisionObject_CollisionPair_obj::hx_PhysicsCollisionObject_CollisionPair_property_objectB_get(nativeObject);		HX_STACK_VAR(nativeObject1,"nativeObject1");
			HX_STACK_LINE(29)
			if (((nativeObject1 == null()))){
				HX_STACK_LINE(29)
				_g5 = null();
			}
			else{
				HX_STACK_LINE(29)
				if ((::Std_obj::is(nativeObject1,hx::ClassOf< ::cpp::vm::WeakRef >()))){
					HX_STACK_LINE(29)
					::cpp::vm::WeakRef ref = nativeObject1;		HX_STACK_VAR(ref,"ref");
					HX_STACK_LINE(29)
					::org::gameplay3d::PhysicsCollisionObject result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::PhysicsCollisionObject _g4 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g4,"_g4");
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
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject1;
					HX_STACK_LINE(29)
					_g5 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
				}
			}
		}
		HX_STACK_LINE(29)
		this->objectB = _g5;
	}
	else{
		HX_STACK_LINE(28)
		Dynamic _g6 = ::org::gameplay3d::PhysicsCollisionObject_CollisionPair_obj::hx_PhysicsCollisionObject_CollisionPair_property_objectB_get(nativeObject);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(31)
		::org::gameplay3d::PhysicsCollisionObject _g7 = this->objectB->impersonate(_g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(31)
		this->objectB = _g7;
	}
	HX_STACK_LINE(29)
	return hx::ObjectPtr<OBJ_>(this);
}


::org::gameplay3d::PhysicsCollisionObject_CollisionPair PhysicsCollisionObject_CollisionPair_obj::make( ::org::gameplay3d::PhysicsCollisionObject objectA,::org::gameplay3d::PhysicsCollisionObject objectB){
	HX_STACK_FRAME("org.gameplay3d.PhysicsCollisionObject_CollisionPair","make",0x16bf3358,"org.gameplay3d.PhysicsCollisionObject_CollisionPair.make","org/gameplay3d/PhysicsCollisionObject_CollisionPair.hx",34,0x049e4c5a)
	HX_STACK_ARG(objectA,"objectA")
	HX_STACK_ARG(objectB,"objectB")
	HX_STACK_LINE(35)
	Dynamic _g = ::org::gameplay3d::PhysicsCollisionObject_CollisionPair_obj::constructNativeObject(objectA,objectB);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(35)
	return ::org::gameplay3d::PhysicsCollisionObject_CollisionPair_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PhysicsCollisionObject_CollisionPair_obj,make,return )

Dynamic PhysicsCollisionObject_CollisionPair_obj::constructNativeObject( ::org::gameplay3d::PhysicsCollisionObject objectA,::org::gameplay3d::PhysicsCollisionObject objectB){
	HX_STACK_FRAME("org.gameplay3d.PhysicsCollisionObject_CollisionPair","constructNativeObject",0xee5541c3,"org.gameplay3d.PhysicsCollisionObject_CollisionPair.constructNativeObject","org/gameplay3d/PhysicsCollisionObject_CollisionPair.hx",45,0x049e4c5a)
	HX_STACK_ARG(objectA,"objectA")
	HX_STACK_ARG(objectB,"objectB")
	HX_STACK_LINE(45)
	return ::org::gameplay3d::PhysicsCollisionObject_CollisionPair_obj::hx_PhysicsCollisionObject_CollisionPair_Construct((  (((objectA == null()))) ? Dynamic(null()) : Dynamic(objectA->nativeObject) ),(  (((objectB == null()))) ? Dynamic(null()) : Dynamic(objectB->nativeObject) ));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PhysicsCollisionObject_CollisionPair_obj,constructNativeObject,return )

Dynamic PhysicsCollisionObject_CollisionPair_obj::hx_PhysicsCollisionObject_CollisionPair_Construct;

Dynamic PhysicsCollisionObject_CollisionPair_obj::hx_PhysicsCollisionObject_CollisionPair_property_objectA_get;

Dynamic PhysicsCollisionObject_CollisionPair_obj::hx_PhysicsCollisionObject_CollisionPair_property_objectB_get;


PhysicsCollisionObject_CollisionPair_obj::PhysicsCollisionObject_CollisionPair_obj()
{
}

void PhysicsCollisionObject_CollisionPair_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PhysicsCollisionObject_CollisionPair);
	HX_MARK_MEMBER_NAME(objectA,"objectA");
	HX_MARK_MEMBER_NAME(objectB,"objectB");
	::org::gameplay3d::intern::NativeBinding_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PhysicsCollisionObject_CollisionPair_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(objectA,"objectA");
	HX_VISIT_MEMBER_NAME(objectB,"objectB");
	::org::gameplay3d::intern::NativeBinding_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PhysicsCollisionObject_CollisionPair_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { return make_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"objectA") ) { return objectA; }
		if (HX_FIELD_EQ(inName,"objectB") ) { return objectB; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"impersonate") ) { return impersonate_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"constructNativeObject") ) { return constructNativeObject_dyn(); }
		break;
	case 49:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionObject_CollisionPair_Construct") ) { return hx_PhysicsCollisionObject_CollisionPair_Construct; }
		break;
	case 60:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionObject_CollisionPair_property_objectA_get") ) { return hx_PhysicsCollisionObject_CollisionPair_property_objectA_get; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionObject_CollisionPair_property_objectB_get") ) { return hx_PhysicsCollisionObject_CollisionPair_property_objectB_get; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PhysicsCollisionObject_CollisionPair_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"objectA") ) { objectA=inValue.Cast< ::org::gameplay3d::PhysicsCollisionObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"objectB") ) { objectB=inValue.Cast< ::org::gameplay3d::PhysicsCollisionObject >(); return inValue; }
		break;
	case 49:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionObject_CollisionPair_Construct") ) { hx_PhysicsCollisionObject_CollisionPair_Construct=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 60:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionObject_CollisionPair_property_objectA_get") ) { hx_PhysicsCollisionObject_CollisionPair_property_objectA_get=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionObject_CollisionPair_property_objectB_get") ) { hx_PhysicsCollisionObject_CollisionPair_property_objectB_get=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PhysicsCollisionObject_CollisionPair_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("objectA"));
	outFields->push(HX_CSTRING("objectB"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("make"),
	HX_CSTRING("constructNativeObject"),
	HX_CSTRING("hx_PhysicsCollisionObject_CollisionPair_Construct"),
	HX_CSTRING("hx_PhysicsCollisionObject_CollisionPair_property_objectA_get"),
	HX_CSTRING("hx_PhysicsCollisionObject_CollisionPair_property_objectB_get"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::org::gameplay3d::PhysicsCollisionObject*/ ,(int)offsetof(PhysicsCollisionObject_CollisionPair_obj,objectA),HX_CSTRING("objectA")},
	{hx::fsObject /*::org::gameplay3d::PhysicsCollisionObject*/ ,(int)offsetof(PhysicsCollisionObject_CollisionPair_obj,objectB),HX_CSTRING("objectB")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("objectA"),
	HX_CSTRING("objectB"),
	HX_CSTRING("impersonate"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PhysicsCollisionObject_CollisionPair_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PhysicsCollisionObject_CollisionPair_obj::hx_PhysicsCollisionObject_CollisionPair_Construct,"hx_PhysicsCollisionObject_CollisionPair_Construct");
	HX_MARK_MEMBER_NAME(PhysicsCollisionObject_CollisionPair_obj::hx_PhysicsCollisionObject_CollisionPair_property_objectA_get,"hx_PhysicsCollisionObject_CollisionPair_property_objectA_get");
	HX_MARK_MEMBER_NAME(PhysicsCollisionObject_CollisionPair_obj::hx_PhysicsCollisionObject_CollisionPair_property_objectB_get,"hx_PhysicsCollisionObject_CollisionPair_property_objectB_get");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PhysicsCollisionObject_CollisionPair_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PhysicsCollisionObject_CollisionPair_obj::hx_PhysicsCollisionObject_CollisionPair_Construct,"hx_PhysicsCollisionObject_CollisionPair_Construct");
	HX_VISIT_MEMBER_NAME(PhysicsCollisionObject_CollisionPair_obj::hx_PhysicsCollisionObject_CollisionPair_property_objectA_get,"hx_PhysicsCollisionObject_CollisionPair_property_objectA_get");
	HX_VISIT_MEMBER_NAME(PhysicsCollisionObject_CollisionPair_obj::hx_PhysicsCollisionObject_CollisionPair_property_objectB_get,"hx_PhysicsCollisionObject_CollisionPair_property_objectB_get");
};

#endif

Class PhysicsCollisionObject_CollisionPair_obj::__mClass;

void PhysicsCollisionObject_CollisionPair_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.PhysicsCollisionObject_CollisionPair"), hx::TCanCast< PhysicsCollisionObject_CollisionPair_obj> ,sStaticFields,sMemberFields,
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

void PhysicsCollisionObject_CollisionPair_obj::__boot()
{
	hx_PhysicsCollisionObject_CollisionPair_Construct= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsCollisionObject_CollisionPair >(),HX_CSTRING("Construct"),(int)2);
	hx_PhysicsCollisionObject_CollisionPair_property_objectA_get= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsCollisionObject_CollisionPair >(),HX_CSTRING("property_objectA_get"),(int)1);
	hx_PhysicsCollisionObject_CollisionPair_property_objectB_get= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsCollisionObject_CollisionPair >(),HX_CSTRING("property_objectB_get"),(int)1);
}

} // end namespace org
} // end namespace gameplay3d
