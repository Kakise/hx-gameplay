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
#ifndef INCLUDED_org_gameplay3d_PhysicsController_HitResult
#include <org/gameplay3d/PhysicsController_HitResult.h>
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
#ifndef INCLUDED_org_gameplay3d_intern_NativeBinding
#include <org/gameplay3d/intern/NativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_NativeInterface
#include <org/gameplay3d/util/NativeInterface.h>
#endif
namespace org{
namespace gameplay3d{

Void PhysicsController_HitResult_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.PhysicsController_HitResult","new",0x2d1b4319,"org.gameplay3d.PhysicsController_HitResult.new","org/gameplay3d/PhysicsController_HitResult.hx",11,0x8424a817)
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

//PhysicsController_HitResult_obj::~PhysicsController_HitResult_obj() { }

Dynamic PhysicsController_HitResult_obj::__CreateEmpty() { return  new PhysicsController_HitResult_obj; }
hx::ObjectPtr< PhysicsController_HitResult_obj > PhysicsController_HitResult_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< PhysicsController_HitResult_obj > result = new PhysicsController_HitResult_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic PhysicsController_HitResult_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PhysicsController_HitResult_obj > result = new PhysicsController_HitResult_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Dynamic PhysicsController_HitResult_obj::impersonate( Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.PhysicsController_HitResult","impersonate",0x04858ef2,"org.gameplay3d.PhysicsController_HitResult.impersonate","org/gameplay3d/PhysicsController_HitResult.hx",27,0x8424a817)
	HX_STACK_THIS(this)
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(28)
	this->super::impersonate(nativeObject);
	HX_STACK_LINE(28)
	if (((this->object == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::PhysicsCollisionObject _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::PhysicsCollisionObject >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(29)
			Dynamic nativeObject1 = ::org::gameplay3d::PhysicsController_HitResult_obj::hx_PhysicsController_HitResult_property_object_get(nativeObject);		HX_STACK_VAR(nativeObject1,"nativeObject1");
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
		this->object = _g1;
	}
	else{
		HX_STACK_LINE(29)
		Dynamic _g2 = ::org::gameplay3d::PhysicsController_HitResult_obj::hx_PhysicsController_HitResult_property_object_get(nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::PhysicsCollisionObject _g3 = this->object->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		this->object = _g3;
	}
	HX_STACK_LINE(28)
	if (((this->point == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(30)
			Dynamic nativeObject1 = ::org::gameplay3d::PhysicsController_HitResult_obj::hx_PhysicsController_HitResult_property_point_get(nativeObject);		HX_STACK_VAR(nativeObject1,"nativeObject1");
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
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject1;
					HX_STACK_LINE(29)
					_g5 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
				}
			}
		}
		HX_STACK_LINE(29)
		this->point = _g5;
	}
	else{
		HX_STACK_LINE(30)
		Dynamic _g6 = ::org::gameplay3d::PhysicsController_HitResult_obj::hx_PhysicsController_HitResult_property_point_get(nativeObject);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g7 = this->point->impersonate(_g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(31)
		this->point = _g7;
	}
	HX_STACK_LINE(28)
	if (((this->normal == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g9;		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(31)
			Dynamic nativeObject1 = ::org::gameplay3d::PhysicsController_HitResult_obj::hx_PhysicsController_HitResult_property_normal_get(nativeObject);		HX_STACK_VAR(nativeObject1,"nativeObject1");
			HX_STACK_LINE(29)
			if (((nativeObject1 == null()))){
				HX_STACK_LINE(29)
				_g9 = null();
			}
			else{
				HX_STACK_LINE(29)
				if ((::Std_obj::is(nativeObject1,hx::ClassOf< ::cpp::vm::WeakRef >()))){
					HX_STACK_LINE(29)
					::cpp::vm::WeakRef ref = nativeObject1;		HX_STACK_VAR(ref,"ref");
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
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject1;
					HX_STACK_LINE(29)
					_g9 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
				}
			}
		}
		HX_STACK_LINE(29)
		this->normal = _g9;
	}
	else{
		HX_STACK_LINE(31)
		Dynamic _g10 = ::org::gameplay3d::PhysicsController_HitResult_obj::hx_PhysicsController_HitResult_property_normal_get(nativeObject);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g11 = this->normal->impersonate(_g10);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(31)
		this->normal = _g11;
	}
	HX_STACK_LINE(32)
	return hx::ObjectPtr<OBJ_>(this);
}


Float PhysicsController_HitResult_obj::get_fraction( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsController_HitResult","get_fraction",0xbb933832,"org.gameplay3d.PhysicsController_HitResult.get_fraction","org/gameplay3d/PhysicsController_HitResult.hx",57,0x8424a817)
	HX_STACK_THIS(this)
	HX_STACK_LINE(57)
	return ::org::gameplay3d::PhysicsController_HitResult_obj::hx_PhysicsController_HitResult_property_fraction_get(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsController_HitResult_obj,get_fraction,return )

Float PhysicsController_HitResult_obj::set_fraction( Float value){
	HX_STACK_FRAME("org.gameplay3d.PhysicsController_HitResult","set_fraction",0xd08c5ba6,"org.gameplay3d.PhysicsController_HitResult.set_fraction","org/gameplay3d/PhysicsController_HitResult.hx",62,0x8424a817)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(62)
	return ::org::gameplay3d::PhysicsController_HitResult_obj::hx_PhysicsController_HitResult_property_fraction_set(this->nativeObject,value);
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsController_HitResult_obj,set_fraction,return )

::org::gameplay3d::PhysicsController_HitResult PhysicsController_HitResult_obj::make( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsController_HitResult","make",0x4a132915,"org.gameplay3d.PhysicsController_HitResult.make","org/gameplay3d/PhysicsController_HitResult.hx",37,0x8424a817)
	HX_STACK_LINE(38)
	Dynamic _g = ::org::gameplay3d::PhysicsController_HitResult_obj::constructNativeObject();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(38)
	return ::org::gameplay3d::PhysicsController_HitResult_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PhysicsController_HitResult_obj,make,return )

Dynamic PhysicsController_HitResult_obj::constructNativeObject( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsController_HitResult","constructNativeObject",0x05050766,"org.gameplay3d.PhysicsController_HitResult.constructNativeObject","org/gameplay3d/PhysicsController_HitResult.hx",48,0x8424a817)
	HX_STACK_LINE(48)
	return ::org::gameplay3d::PhysicsController_HitResult_obj::hx_PhysicsController_HitResult_Construct();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PhysicsController_HitResult_obj,constructNativeObject,return )

Dynamic PhysicsController_HitResult_obj::hx_PhysicsController_HitResult_Construct;

Dynamic PhysicsController_HitResult_obj::hx_PhysicsController_HitResult_property_object_get;

Dynamic PhysicsController_HitResult_obj::hx_PhysicsController_HitResult_property_point_get;

Dynamic PhysicsController_HitResult_obj::hx_PhysicsController_HitResult_property_fraction_get;

Dynamic PhysicsController_HitResult_obj::hx_PhysicsController_HitResult_property_fraction_set;

Dynamic PhysicsController_HitResult_obj::hx_PhysicsController_HitResult_property_normal_get;


PhysicsController_HitResult_obj::PhysicsController_HitResult_obj()
{
}

void PhysicsController_HitResult_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PhysicsController_HitResult);
	HX_MARK_MEMBER_NAME(object,"object");
	HX_MARK_MEMBER_NAME(point,"point");
	HX_MARK_MEMBER_NAME(normal,"normal");
	::org::gameplay3d::intern::NativeBinding_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PhysicsController_HitResult_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(object,"object");
	HX_VISIT_MEMBER_NAME(point,"point");
	HX_VISIT_MEMBER_NAME(normal,"normal");
	::org::gameplay3d::intern::NativeBinding_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PhysicsController_HitResult_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { return make_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { return point; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"object") ) { return object; }
		if (HX_FIELD_EQ(inName,"normal") ) { return normal; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fraction") ) { return get_fraction(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"impersonate") ) { return impersonate_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_fraction") ) { return get_fraction_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fraction") ) { return set_fraction_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"constructNativeObject") ) { return constructNativeObject_dyn(); }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"hx_PhysicsController_HitResult_Construct") ) { return hx_PhysicsController_HitResult_Construct; }
		break;
	case 49:
		if (HX_FIELD_EQ(inName,"hx_PhysicsController_HitResult_property_point_get") ) { return hx_PhysicsController_HitResult_property_point_get; }
		break;
	case 50:
		if (HX_FIELD_EQ(inName,"hx_PhysicsController_HitResult_property_object_get") ) { return hx_PhysicsController_HitResult_property_object_get; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsController_HitResult_property_normal_get") ) { return hx_PhysicsController_HitResult_property_normal_get; }
		break;
	case 52:
		if (HX_FIELD_EQ(inName,"hx_PhysicsController_HitResult_property_fraction_get") ) { return hx_PhysicsController_HitResult_property_fraction_get; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsController_HitResult_property_fraction_set") ) { return hx_PhysicsController_HitResult_property_fraction_set; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PhysicsController_HitResult_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { point=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"object") ) { object=inValue.Cast< ::org::gameplay3d::PhysicsCollisionObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"normal") ) { normal=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fraction") ) { return set_fraction(inValue); }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"hx_PhysicsController_HitResult_Construct") ) { hx_PhysicsController_HitResult_Construct=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 49:
		if (HX_FIELD_EQ(inName,"hx_PhysicsController_HitResult_property_point_get") ) { hx_PhysicsController_HitResult_property_point_get=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 50:
		if (HX_FIELD_EQ(inName,"hx_PhysicsController_HitResult_property_object_get") ) { hx_PhysicsController_HitResult_property_object_get=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsController_HitResult_property_normal_get") ) { hx_PhysicsController_HitResult_property_normal_get=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 52:
		if (HX_FIELD_EQ(inName,"hx_PhysicsController_HitResult_property_fraction_get") ) { hx_PhysicsController_HitResult_property_fraction_get=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsController_HitResult_property_fraction_set") ) { hx_PhysicsController_HitResult_property_fraction_set=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PhysicsController_HitResult_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("object"));
	outFields->push(HX_CSTRING("point"));
	outFields->push(HX_CSTRING("fraction"));
	outFields->push(HX_CSTRING("normal"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("make"),
	HX_CSTRING("constructNativeObject"),
	HX_CSTRING("hx_PhysicsController_HitResult_Construct"),
	HX_CSTRING("hx_PhysicsController_HitResult_property_object_get"),
	HX_CSTRING("hx_PhysicsController_HitResult_property_point_get"),
	HX_CSTRING("hx_PhysicsController_HitResult_property_fraction_get"),
	HX_CSTRING("hx_PhysicsController_HitResult_property_fraction_set"),
	HX_CSTRING("hx_PhysicsController_HitResult_property_normal_get"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::org::gameplay3d::PhysicsCollisionObject*/ ,(int)offsetof(PhysicsController_HitResult_obj,object),HX_CSTRING("object")},
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(PhysicsController_HitResult_obj,point),HX_CSTRING("point")},
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(PhysicsController_HitResult_obj,normal),HX_CSTRING("normal")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("object"),
	HX_CSTRING("point"),
	HX_CSTRING("normal"),
	HX_CSTRING("impersonate"),
	HX_CSTRING("get_fraction"),
	HX_CSTRING("set_fraction"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PhysicsController_HitResult_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PhysicsController_HitResult_obj::hx_PhysicsController_HitResult_Construct,"hx_PhysicsController_HitResult_Construct");
	HX_MARK_MEMBER_NAME(PhysicsController_HitResult_obj::hx_PhysicsController_HitResult_property_object_get,"hx_PhysicsController_HitResult_property_object_get");
	HX_MARK_MEMBER_NAME(PhysicsController_HitResult_obj::hx_PhysicsController_HitResult_property_point_get,"hx_PhysicsController_HitResult_property_point_get");
	HX_MARK_MEMBER_NAME(PhysicsController_HitResult_obj::hx_PhysicsController_HitResult_property_fraction_get,"hx_PhysicsController_HitResult_property_fraction_get");
	HX_MARK_MEMBER_NAME(PhysicsController_HitResult_obj::hx_PhysicsController_HitResult_property_fraction_set,"hx_PhysicsController_HitResult_property_fraction_set");
	HX_MARK_MEMBER_NAME(PhysicsController_HitResult_obj::hx_PhysicsController_HitResult_property_normal_get,"hx_PhysicsController_HitResult_property_normal_get");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PhysicsController_HitResult_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PhysicsController_HitResult_obj::hx_PhysicsController_HitResult_Construct,"hx_PhysicsController_HitResult_Construct");
	HX_VISIT_MEMBER_NAME(PhysicsController_HitResult_obj::hx_PhysicsController_HitResult_property_object_get,"hx_PhysicsController_HitResult_property_object_get");
	HX_VISIT_MEMBER_NAME(PhysicsController_HitResult_obj::hx_PhysicsController_HitResult_property_point_get,"hx_PhysicsController_HitResult_property_point_get");
	HX_VISIT_MEMBER_NAME(PhysicsController_HitResult_obj::hx_PhysicsController_HitResult_property_fraction_get,"hx_PhysicsController_HitResult_property_fraction_get");
	HX_VISIT_MEMBER_NAME(PhysicsController_HitResult_obj::hx_PhysicsController_HitResult_property_fraction_set,"hx_PhysicsController_HitResult_property_fraction_set");
	HX_VISIT_MEMBER_NAME(PhysicsController_HitResult_obj::hx_PhysicsController_HitResult_property_normal_get,"hx_PhysicsController_HitResult_property_normal_get");
};

#endif

Class PhysicsController_HitResult_obj::__mClass;

void PhysicsController_HitResult_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.PhysicsController_HitResult"), hx::TCanCast< PhysicsController_HitResult_obj> ,sStaticFields,sMemberFields,
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

void PhysicsController_HitResult_obj::__boot()
{
	hx_PhysicsController_HitResult_Construct= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsController_HitResult >(),HX_CSTRING("Construct"),(int)0);
	hx_PhysicsController_HitResult_property_object_get= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsController_HitResult >(),HX_CSTRING("property_object_get"),(int)1);
	hx_PhysicsController_HitResult_property_point_get= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsController_HitResult >(),HX_CSTRING("property_point_get"),(int)1);
	hx_PhysicsController_HitResult_property_fraction_get= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsController_HitResult >(),HX_CSTRING("property_fraction_get"),(int)1);
	hx_PhysicsController_HitResult_property_fraction_set= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsController_HitResult >(),HX_CSTRING("property_fraction_set"),(int)2);
	hx_PhysicsController_HitResult_property_normal_get= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsController_HitResult >(),HX_CSTRING("property_normal_get"),(int)1);
}

} // end namespace org
} // end namespace gameplay3d
