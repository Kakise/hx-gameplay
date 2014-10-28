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
#ifndef INCLUDED_org_gameplay3d_PhysicsController_HitFilter
#include <org/gameplay3d/PhysicsController_HitFilter.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsController_HitResult
#include <org/gameplay3d/PhysicsController_HitResult.h>
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
#ifndef INCLUDED_org_gameplay3d_wrapper_PhysicsController_HitFilterWrapper
#include <org/gameplay3d/wrapper/PhysicsController_HitFilterWrapper.h>
#endif
namespace org{
namespace gameplay3d{
namespace wrapper{

Void PhysicsController_HitFilterWrapper_obj::__construct(::org::gameplay3d::PhysicsController_HitFilter target,Dynamic nativeObject,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.wrapper.PhysicsController_HitFilterWrapper","new",0x8e2a081e,"org.gameplay3d.wrapper.PhysicsController_HitFilterWrapper.new","org/gameplay3d/wrapper/PhysicsController_HitFilterWrapper.hx",14,0xbcea2bd1)
HX_STACK_THIS(this)
HX_STACK_ARG(target,"target")
HX_STACK_ARG(nativeObject,"nativeObject")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(14)
	super::__construct(target,nativeObject,nativeObjectInitializerParams);
}
;
	return null();
}

//PhysicsController_HitFilterWrapper_obj::~PhysicsController_HitFilterWrapper_obj() { }

Dynamic PhysicsController_HitFilterWrapper_obj::__CreateEmpty() { return  new PhysicsController_HitFilterWrapper_obj; }
hx::ObjectPtr< PhysicsController_HitFilterWrapper_obj > PhysicsController_HitFilterWrapper_obj::__new(::org::gameplay3d::PhysicsController_HitFilter target,Dynamic nativeObject,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< PhysicsController_HitFilterWrapper_obj > result = new PhysicsController_HitFilterWrapper_obj();
	result->__construct(target,nativeObject,nativeObjectInitializerParams);
	return result;}

Dynamic PhysicsController_HitFilterWrapper_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PhysicsController_HitFilterWrapper_obj > result = new PhysicsController_HitFilterWrapper_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

hx::Object *PhysicsController_HitFilterWrapper_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::PhysicsController_HitFilter_obj)) return operator ::org::gameplay3d::PhysicsController_HitFilter_obj *();
	return super::__ToInterface(inType);
}

bool PhysicsController_HitFilterWrapper_obj::filter( ::org::gameplay3d::PhysicsCollisionObject object){
	HX_STACK_FRAME("org.gameplay3d.wrapper.PhysicsController_HitFilterWrapper","filter",0x9971d2ba,"org.gameplay3d.wrapper.PhysicsController_HitFilterWrapper.filter","org/gameplay3d/wrapper/PhysicsController_HitFilterWrapper.hx",31,0xbcea2bd1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(object,"object")
	HX_STACK_LINE(31)
	return this->target->__Field(HX_CSTRING("filter"),true)(object);
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsController_HitFilterWrapper_obj,filter,return )

bool PhysicsController_HitFilterWrapper_obj::hit( ::org::gameplay3d::PhysicsController_HitResult result){
	HX_STACK_FRAME("org.gameplay3d.wrapper.PhysicsController_HitFilterWrapper","hit",0x8e257e11,"org.gameplay3d.wrapper.PhysicsController_HitFilterWrapper.hit","org/gameplay3d/wrapper/PhysicsController_HitFilterWrapper.hx",37,0xbcea2bd1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(result,"result")
	HX_STACK_LINE(37)
	return this->target->__Field(HX_CSTRING("hit"),true)(result);
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsController_HitFilterWrapper_obj,hit,return )

bool PhysicsController_HitFilterWrapper_obj::filterWrapper( Dynamic object){
	HX_STACK_FRAME("org.gameplay3d.wrapper.PhysicsController_HitFilterWrapper","filterWrapper",0xb1a955b9,"org.gameplay3d.wrapper.PhysicsController_HitFilterWrapper.filterWrapper","org/gameplay3d/wrapper/PhysicsController_HitFilterWrapper.hx",45,0xbcea2bd1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(object,"object")
	HX_STACK_LINE(46)
	::org::gameplay3d::PhysicsCollisionObject _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(46)
	{
		HX_STACK_LINE(46)
		::Class classObj = hx::ClassOf< ::org::gameplay3d::PhysicsCollisionObject >();		HX_STACK_VAR(classObj,"classObj");
		HX_STACK_LINE(46)
		if (((object == null()))){
			HX_STACK_LINE(46)
			_g1 = null();
		}
		else{
			HX_STACK_LINE(46)
			if ((::Std_obj::is(object,hx::ClassOf< ::cpp::vm::WeakRef >()))){
				HX_STACK_LINE(46)
				::cpp::vm::WeakRef ref = object;		HX_STACK_VAR(ref,"ref");
				HX_STACK_LINE(46)
				::org::gameplay3d::PhysicsCollisionObject result = ref->get();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(46)
				if (((result == null()))){
					HX_STACK_LINE(46)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
					HX_STACK_LINE(46)
					::org::gameplay3d::PhysicsCollisionObject _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(46)
					result = _g;
					HX_STACK_LINE(46)
					ref->set(result);
				}
				HX_STACK_LINE(46)
				_g1 = result;
			}
			else{
				HX_STACK_LINE(46)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = object;
				HX_STACK_LINE(46)
				_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
			}
		}
	}
	HX_STACK_LINE(46)
	return this->filter(_g1);
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsController_HitFilterWrapper_obj,filterWrapper,return )

bool PhysicsController_HitFilterWrapper_obj::hitWrapper( Dynamic result){
	HX_STACK_FRAME("org.gameplay3d.wrapper.PhysicsController_HitFilterWrapper","hitWrapper",0x2bb5d342,"org.gameplay3d.wrapper.PhysicsController_HitFilterWrapper.hitWrapper","org/gameplay3d/wrapper/PhysicsController_HitFilterWrapper.hx",50,0xbcea2bd1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(result,"result")
	HX_STACK_LINE(28)
	::org::gameplay3d::PhysicsController_HitResult _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(28)
	if (((this->_result == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::PhysicsController_HitResult _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::PhysicsController_HitResult >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(29)
			if (((result == null()))){
				HX_STACK_LINE(29)
				_g1 = null();
			}
			else{
				HX_STACK_LINE(29)
				if ((::Std_obj::is(result,hx::ClassOf< ::cpp::vm::WeakRef >()))){
					HX_STACK_LINE(51)
					::cpp::vm::WeakRef ref = result;		HX_STACK_VAR(ref,"ref");
					HX_STACK_LINE(29)
					::org::gameplay3d::PhysicsController_HitResult result1 = ref->get();		HX_STACK_VAR(result1,"result1");
					HX_STACK_LINE(29)
					if (((result1 == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::PhysicsController_HitResult _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(29)
						result1 = _g;
						HX_STACK_LINE(29)
						ref->set(result1);
					}
					HX_STACK_LINE(29)
					_g1 = result1;
				}
				else{
					HX_STACK_LINE(29)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = result;
					HX_STACK_LINE(29)
					_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
				}
			}
		}
		HX_STACK_LINE(29)
		_g3 = this->_result = _g1;
	}
	else{
		HX_STACK_LINE(31)
		::org::gameplay3d::PhysicsController_HitResult _g2 = this->_result->impersonate(result);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		_g3 = this->_result = _g2;
	}
	HX_STACK_LINE(51)
	return this->hit(_g3);
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsController_HitFilterWrapper_obj,hitWrapper,return )

::org::gameplay3d::wrapper::PhysicsController_HitFilterWrapper PhysicsController_HitFilterWrapper_obj::make( ::org::gameplay3d::PhysicsController_HitFilter target){
	HX_STACK_FRAME("org.gameplay3d.wrapper.PhysicsController_HitFilterWrapper","make",0xd5f0c870,"org.gameplay3d.wrapper.PhysicsController_HitFilterWrapper.make","org/gameplay3d/wrapper/PhysicsController_HitFilterWrapper.hx",25,0xbcea2bd1)
	HX_STACK_ARG(target,"target")
	HX_STACK_LINE(25)
	return ::org::gameplay3d::wrapper::PhysicsController_HitFilterWrapper_obj::__new(target,::org::gameplay3d::wrapper::PhysicsController_HitFilterWrapper_obj::constructNativeObject_dyn(),Dynamic( Array_obj<Dynamic>::__new().Add(null())));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PhysicsController_HitFilterWrapper_obj,make,return )

Dynamic PhysicsController_HitFilterWrapper_obj::constructNativeObject( ::org::gameplay3d::wrapper::PhysicsController_HitFilterWrapper thisObj){
	HX_STACK_FRAME("org.gameplay3d.wrapper.PhysicsController_HitFilterWrapper","constructNativeObject",0xeb6a71ab,"org.gameplay3d.wrapper.PhysicsController_HitFilterWrapper.constructNativeObject","org/gameplay3d/wrapper/PhysicsController_HitFilterWrapper.hx",57,0xbcea2bd1)
	HX_STACK_ARG(thisObj,"thisObj")
	HX_STACK_LINE(57)
	return ::org::gameplay3d::wrapper::PhysicsController_HitFilterWrapper_obj::hx_HaxePhysicsController_HitFilter_Construct(thisObj->filterWrapper_dyn(),thisObj->hitWrapper_dyn());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PhysicsController_HitFilterWrapper_obj,constructNativeObject,return )

Dynamic PhysicsController_HitFilterWrapper_obj::hx_HaxePhysicsController_HitFilter_Construct;


PhysicsController_HitFilterWrapper_obj::PhysicsController_HitFilterWrapper_obj()
{
}

void PhysicsController_HitFilterWrapper_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PhysicsController_HitFilterWrapper);
	HX_MARK_MEMBER_NAME(_result,"_result");
	::org::gameplay3d::intern::ListenerWrapper_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PhysicsController_HitFilterWrapper_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_result,"_result");
	::org::gameplay3d::intern::ListenerWrapper_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PhysicsController_HitFilterWrapper_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"hit") ) { return hit_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { return make_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { return filter_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_result") ) { return _result; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"hitWrapper") ) { return hitWrapper_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"filterWrapper") ) { return filterWrapper_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"constructNativeObject") ) { return constructNativeObject_dyn(); }
		break;
	case 44:
		if (HX_FIELD_EQ(inName,"hx_HaxePhysicsController_HitFilter_Construct") ) { return hx_HaxePhysicsController_HitFilter_Construct; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PhysicsController_HitFilterWrapper_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_result") ) { _result=inValue.Cast< ::org::gameplay3d::PhysicsController_HitResult >(); return inValue; }
		break;
	case 44:
		if (HX_FIELD_EQ(inName,"hx_HaxePhysicsController_HitFilter_Construct") ) { hx_HaxePhysicsController_HitFilter_Construct=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PhysicsController_HitFilterWrapper_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_result"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("make"),
	HX_CSTRING("constructNativeObject"),
	HX_CSTRING("hx_HaxePhysicsController_HitFilter_Construct"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::org::gameplay3d::PhysicsController_HitResult*/ ,(int)offsetof(PhysicsController_HitFilterWrapper_obj,_result),HX_CSTRING("_result")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_result"),
	HX_CSTRING("filter"),
	HX_CSTRING("hit"),
	HX_CSTRING("filterWrapper"),
	HX_CSTRING("hitWrapper"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PhysicsController_HitFilterWrapper_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PhysicsController_HitFilterWrapper_obj::hx_HaxePhysicsController_HitFilter_Construct,"hx_HaxePhysicsController_HitFilter_Construct");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PhysicsController_HitFilterWrapper_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PhysicsController_HitFilterWrapper_obj::hx_HaxePhysicsController_HitFilter_Construct,"hx_HaxePhysicsController_HitFilter_Construct");
};

#endif

Class PhysicsController_HitFilterWrapper_obj::__mClass;

void PhysicsController_HitFilterWrapper_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.wrapper.PhysicsController_HitFilterWrapper"), hx::TCanCast< PhysicsController_HitFilterWrapper_obj> ,sStaticFields,sMemberFields,
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

void PhysicsController_HitFilterWrapper_obj::__boot()
{
	hx_HaxePhysicsController_HitFilter_Construct= ::org::gameplay3d::util::NativeInterface_obj::load(HX_CSTRING("hx_HaxePhysicsController_HitFilter_Construct"),(int)2);
}

} // end namespace org
} // end namespace gameplay3d
} // end namespace wrapper
