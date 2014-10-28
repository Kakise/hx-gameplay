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
#ifndef INCLUDED_org_gameplay3d_Control
#include <org/gameplay3d/Control.h>
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
#ifndef INCLUDED_org_gameplay3d_Ref
#include <org/gameplay3d/Ref.h>
#endif
#ifndef INCLUDED_org_gameplay3d_ScriptTarget
#include <org/gameplay3d/ScriptTarget.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Transform
#include <org/gameplay3d/Transform.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Vector2
#include <org/gameplay3d/Vector2.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Vector3
#include <org/gameplay3d/Vector3.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Vector4
#include <org/gameplay3d/Vector4.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IMatrix
#include <org/gameplay3d/immutable/IMatrix.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IVector2
#include <org/gameplay3d/immutable/IVector2.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IVector3
#include <org/gameplay3d/immutable/IVector3.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IVector4
#include <org/gameplay3d/immutable/IVector4.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_ConversionTools
#include <org/gameplay3d/intern/ConversionTools.h>
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
namespace intern{

Void ConversionTools_obj::__construct()
{
	return null();
}

//ConversionTools_obj::~ConversionTools_obj() { }

Dynamic ConversionTools_obj::__CreateEmpty() { return  new ConversionTools_obj; }
hx::ObjectPtr< ConversionTools_obj > ConversionTools_obj::__new()
{  hx::ObjectPtr< ConversionTools_obj > result = new ConversionTools_obj();
	result->__construct();
	return result;}

Dynamic ConversionTools_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ConversionTools_obj > result = new ConversionTools_obj();
	result->__construct();
	return result;}

Array< ::Dynamic > ConversionTools_obj::extractVector2Array( Dynamic array){
	HX_STACK_FRAME("org.gameplay3d.intern.ConversionTools","extractVector2Array",0x1b3b0b33,"org.gameplay3d.intern.ConversionTools.extractVector2Array","org/gameplay3d/intern/ConversionTools.hx",19,0x1eafff69)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(20)
	Array< ::Dynamic > result = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(22)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(array->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
		Dynamic object = __it->next();
		{
			HX_STACK_LINE(23)
			::org::gameplay3d::Vector2 _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(23)
			{
				HX_STACK_LINE(23)
				::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector2 >();		HX_STACK_VAR(classObj,"classObj");
				HX_STACK_LINE(23)
				if (((object == null()))){
					HX_STACK_LINE(23)
					_g1 = null();
				}
				else{
					HX_STACK_LINE(23)
					if ((::Std_obj::is(object,hx::ClassOf< ::cpp::vm::WeakRef >()))){
						HX_STACK_LINE(23)
						::cpp::vm::WeakRef ref = object;		HX_STACK_VAR(ref,"ref");
						HX_STACK_LINE(23)
						::org::gameplay3d::Vector2 result1 = ref->get();		HX_STACK_VAR(result1,"result1");
						HX_STACK_LINE(23)
						if (((result1 == null()))){
							HX_STACK_LINE(23)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
							HX_STACK_LINE(23)
							::org::gameplay3d::Vector2 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(23)
							result1 = _g;
							HX_STACK_LINE(23)
							ref->set(result1);
						}
						HX_STACK_LINE(23)
						_g1 = result1;
					}
					else{
						HX_STACK_LINE(23)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = object;
						HX_STACK_LINE(23)
						_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
					}
				}
			}
			HX_STACK_LINE(23)
			result->push(_g1);
		}
;
	}
	HX_STACK_LINE(25)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConversionTools_obj,extractVector2Array,return )

Array< ::Dynamic > ConversionTools_obj::extractVector3Array( Dynamic array){
	HX_STACK_FRAME("org.gameplay3d.intern.ConversionTools","extractVector3Array",0x81966792,"org.gameplay3d.intern.ConversionTools.extractVector3Array","org/gameplay3d/intern/ConversionTools.hx",29,0x1eafff69)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(30)
	Array< ::Dynamic > result = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(32)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(array->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
		Dynamic object = __it->next();
		{
			HX_STACK_LINE(33)
			::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(33)
			{
				HX_STACK_LINE(33)
				::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
				HX_STACK_LINE(33)
				if (((object == null()))){
					HX_STACK_LINE(33)
					_g1 = null();
				}
				else{
					HX_STACK_LINE(33)
					if ((::Std_obj::is(object,hx::ClassOf< ::cpp::vm::WeakRef >()))){
						HX_STACK_LINE(33)
						::cpp::vm::WeakRef ref = object;		HX_STACK_VAR(ref,"ref");
						HX_STACK_LINE(33)
						::org::gameplay3d::Vector3 result1 = ref->get();		HX_STACK_VAR(result1,"result1");
						HX_STACK_LINE(33)
						if (((result1 == null()))){
							HX_STACK_LINE(33)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
							HX_STACK_LINE(33)
							::org::gameplay3d::Vector3 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(33)
							result1 = _g;
							HX_STACK_LINE(33)
							ref->set(result1);
						}
						HX_STACK_LINE(33)
						_g1 = result1;
					}
					else{
						HX_STACK_LINE(33)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = object;
						HX_STACK_LINE(33)
						_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
					}
				}
			}
			HX_STACK_LINE(33)
			result->push(_g1);
		}
;
	}
	HX_STACK_LINE(35)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConversionTools_obj,extractVector3Array,return )

Array< ::Dynamic > ConversionTools_obj::extractVector4Array( Dynamic array){
	HX_STACK_FRAME("org.gameplay3d.intern.ConversionTools","extractVector4Array",0xe7f1c3f1,"org.gameplay3d.intern.ConversionTools.extractVector4Array","org/gameplay3d/intern/ConversionTools.hx",39,0x1eafff69)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(40)
	Array< ::Dynamic > result = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(42)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(array->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
		Dynamic object = __it->next();
		{
			HX_STACK_LINE(43)
			::org::gameplay3d::Vector4 _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(43)
			{
				HX_STACK_LINE(43)
				::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector4 >();		HX_STACK_VAR(classObj,"classObj");
				HX_STACK_LINE(43)
				if (((object == null()))){
					HX_STACK_LINE(43)
					_g1 = null();
				}
				else{
					HX_STACK_LINE(43)
					if ((::Std_obj::is(object,hx::ClassOf< ::cpp::vm::WeakRef >()))){
						HX_STACK_LINE(43)
						::cpp::vm::WeakRef ref = object;		HX_STACK_VAR(ref,"ref");
						HX_STACK_LINE(43)
						::org::gameplay3d::Vector4 result1 = ref->get();		HX_STACK_VAR(result1,"result1");
						HX_STACK_LINE(43)
						if (((result1 == null()))){
							HX_STACK_LINE(43)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
							HX_STACK_LINE(43)
							::org::gameplay3d::Vector4 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(43)
							result1 = _g;
							HX_STACK_LINE(43)
							ref->set(result1);
						}
						HX_STACK_LINE(43)
						_g1 = result1;
					}
					else{
						HX_STACK_LINE(43)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = object;
						HX_STACK_LINE(43)
						_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
					}
				}
			}
			HX_STACK_LINE(43)
			result->push(_g1);
		}
;
	}
	HX_STACK_LINE(45)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConversionTools_obj,extractVector4Array,return )

Array< ::Dynamic > ConversionTools_obj::extractMatrixArray( Dynamic array){
	HX_STACK_FRAME("org.gameplay3d.intern.ConversionTools","extractMatrixArray",0x905b158f,"org.gameplay3d.intern.ConversionTools.extractMatrixArray","org/gameplay3d/intern/ConversionTools.hx",49,0x1eafff69)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(50)
	Array< ::Dynamic > result = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(52)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(array->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
		Dynamic object = __it->next();
		{
			HX_STACK_LINE(53)
			::org::gameplay3d::Matrix _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(53)
			{
				HX_STACK_LINE(53)
				::Class classObj = hx::ClassOf< ::org::gameplay3d::Matrix >();		HX_STACK_VAR(classObj,"classObj");
				HX_STACK_LINE(53)
				if (((object == null()))){
					HX_STACK_LINE(53)
					_g1 = null();
				}
				else{
					HX_STACK_LINE(53)
					if ((::Std_obj::is(object,hx::ClassOf< ::cpp::vm::WeakRef >()))){
						HX_STACK_LINE(53)
						::cpp::vm::WeakRef ref = object;		HX_STACK_VAR(ref,"ref");
						HX_STACK_LINE(53)
						::org::gameplay3d::Matrix result1 = ref->get();		HX_STACK_VAR(result1,"result1");
						HX_STACK_LINE(53)
						if (((result1 == null()))){
							HX_STACK_LINE(53)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
							HX_STACK_LINE(53)
							::org::gameplay3d::Matrix _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(53)
							result1 = _g;
							HX_STACK_LINE(53)
							ref->set(result1);
						}
						HX_STACK_LINE(53)
						_g1 = result1;
					}
					else{
						HX_STACK_LINE(53)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = object;
						HX_STACK_LINE(53)
						_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
					}
				}
			}
			HX_STACK_LINE(53)
			result->push(_g1);
		}
;
	}
	HX_STACK_LINE(55)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConversionTools_obj,extractMatrixArray,return )

Array< ::Dynamic > ConversionTools_obj::extractNodeArray( Dynamic array){
	HX_STACK_FRAME("org.gameplay3d.intern.ConversionTools","extractNodeArray",0xaf37ca6e,"org.gameplay3d.intern.ConversionTools.extractNodeArray","org/gameplay3d/intern/ConversionTools.hx",59,0x1eafff69)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(60)
	Array< ::Dynamic > result = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(62)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(array->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
		Dynamic object = __it->next();
		{
			HX_STACK_LINE(63)
			::org::gameplay3d::Node _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(63)
			{
				HX_STACK_LINE(63)
				::Class classObj = hx::ClassOf< ::org::gameplay3d::Node >();		HX_STACK_VAR(classObj,"classObj");
				HX_STACK_LINE(63)
				if (((object == null()))){
					HX_STACK_LINE(63)
					_g1 = null();
				}
				else{
					HX_STACK_LINE(63)
					if ((::Std_obj::is(object,hx::ClassOf< ::cpp::vm::WeakRef >()))){
						HX_STACK_LINE(63)
						::cpp::vm::WeakRef ref = object;		HX_STACK_VAR(ref,"ref");
						HX_STACK_LINE(63)
						::org::gameplay3d::Node result1 = ref->get();		HX_STACK_VAR(result1,"result1");
						HX_STACK_LINE(63)
						if (((result1 == null()))){
							HX_STACK_LINE(63)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
							HX_STACK_LINE(63)
							::org::gameplay3d::Node _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(63)
							result1 = _g;
							HX_STACK_LINE(63)
							ref->set(result1);
						}
						HX_STACK_LINE(63)
						_g1 = result1;
					}
					else{
						HX_STACK_LINE(63)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = object;
						HX_STACK_LINE(63)
						_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
					}
				}
			}
			HX_STACK_LINE(63)
			result->push(_g1);
		}
;
	}
	HX_STACK_LINE(65)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConversionTools_obj,extractNodeArray,return )

Array< ::Dynamic > ConversionTools_obj::extractControlArray( Dynamic array){
	HX_STACK_FRAME("org.gameplay3d.intern.ConversionTools","extractControlArray",0xe5731f25,"org.gameplay3d.intern.ConversionTools.extractControlArray","org/gameplay3d/intern/ConversionTools.hx",69,0x1eafff69)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(70)
	Array< ::Dynamic > result = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(72)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(array->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
		Dynamic object = __it->next();
		{
			HX_STACK_LINE(73)
			::org::gameplay3d::Control _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(73)
			{
				HX_STACK_LINE(73)
				::Class classObj = hx::ClassOf< ::org::gameplay3d::Control >();		HX_STACK_VAR(classObj,"classObj");
				HX_STACK_LINE(73)
				if (((object == null()))){
					HX_STACK_LINE(73)
					_g1 = null();
				}
				else{
					HX_STACK_LINE(73)
					if ((::Std_obj::is(object,hx::ClassOf< ::cpp::vm::WeakRef >()))){
						HX_STACK_LINE(73)
						::cpp::vm::WeakRef ref = object;		HX_STACK_VAR(ref,"ref");
						HX_STACK_LINE(73)
						::org::gameplay3d::Control result1 = ref->get();		HX_STACK_VAR(result1,"result1");
						HX_STACK_LINE(73)
						if (((result1 == null()))){
							HX_STACK_LINE(73)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
							HX_STACK_LINE(73)
							::org::gameplay3d::Control _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(73)
							result1 = _g;
							HX_STACK_LINE(73)
							ref->set(result1);
						}
						HX_STACK_LINE(73)
						_g1 = result1;
					}
					else{
						HX_STACK_LINE(73)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = object;
						HX_STACK_LINE(73)
						_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
					}
				}
			}
			HX_STACK_LINE(73)
			result->push(_g1);
		}
;
	}
	HX_STACK_LINE(75)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConversionTools_obj,extractControlArray,return )

Dynamic ConversionTools_obj::insertArray( Dynamic array){
	HX_STACK_FRAME("org.gameplay3d.intern.ConversionTools","insertArray",0x4f6262e8,"org.gameplay3d.intern.ConversionTools.insertArray","org/gameplay3d/intern/ConversionTools.hx",79,0x1eafff69)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(80)
	Dynamic result = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(82)
	for(::cpp::FastIterator_obj< ::org::gameplay3d::GameplayObject > *__it = ::cpp::CreateFastIterator< ::org::gameplay3d::GameplayObject >(array->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
		::org::gameplay3d::GameplayObject object = __it->next();
		result->__Field(HX_CSTRING("push"),true)((  (((object == null()))) ? Dynamic(null()) : Dynamic(object->nativeObject) ));
	}
	HX_STACK_LINE(85)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConversionTools_obj,insertArray,return )


ConversionTools_obj::ConversionTools_obj()
{
}

Dynamic ConversionTools_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"insertArray") ) { return insertArray_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"extractNodeArray") ) { return extractNodeArray_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"extractMatrixArray") ) { return extractMatrixArray_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"extractVector2Array") ) { return extractVector2Array_dyn(); }
		if (HX_FIELD_EQ(inName,"extractVector3Array") ) { return extractVector3Array_dyn(); }
		if (HX_FIELD_EQ(inName,"extractVector4Array") ) { return extractVector4Array_dyn(); }
		if (HX_FIELD_EQ(inName,"extractControlArray") ) { return extractControlArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ConversionTools_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ConversionTools_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("extractVector2Array"),
	HX_CSTRING("extractVector3Array"),
	HX_CSTRING("extractVector4Array"),
	HX_CSTRING("extractMatrixArray"),
	HX_CSTRING("extractNodeArray"),
	HX_CSTRING("extractControlArray"),
	HX_CSTRING("insertArray"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ConversionTools_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ConversionTools_obj::__mClass,"__mClass");
};

#endif

Class ConversionTools_obj::__mClass;

void ConversionTools_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.intern.ConversionTools"), hx::TCanCast< ConversionTools_obj> ,sStaticFields,sMemberFields,
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

void ConversionTools_obj::__boot()
{
}

} // end namespace org
} // end namespace gameplay3d
} // end namespace intern
