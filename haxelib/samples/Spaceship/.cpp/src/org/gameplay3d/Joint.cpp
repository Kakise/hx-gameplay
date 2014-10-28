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
#ifndef INCLUDED_org_gameplay3d_Joint
#include <org/gameplay3d/Joint.h>
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
#ifndef INCLUDED_org_gameplay3d_immutable_IMatrix
#include <org/gameplay3d/immutable/IMatrix.h>
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

Void Joint_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.Joint","new",0x3a361bef,"org.gameplay3d.Joint.new","org/gameplay3d/Joint.hx",12,0xa45c0401)
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

//Joint_obj::~Joint_obj() { }

Dynamic Joint_obj::__CreateEmpty() { return  new Joint_obj; }
hx::ObjectPtr< Joint_obj > Joint_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< Joint_obj > result = new Joint_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic Joint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Joint_obj > result = new Joint_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::org::gameplay3d::immutable::IMatrix Joint_obj::getInverseBindPose( ){
	HX_STACK_FRAME("org.gameplay3d.Joint","getInverseBindPose",0xaf9badd9,"org.gameplay3d.Joint.getInverseBindPose","org/gameplay3d/Joint.hx",23,0xa45c0401)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_inverseBindPose == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Matrix _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Matrix >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(23)
			Dynamic nativeObject = ::org::gameplay3d::Joint_obj::hx_Joint_getInverseBindPose(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
		return this->_inverseBindPose = _g1;
	}
	else{
		HX_STACK_LINE(23)
		Dynamic _g2 = ::org::gameplay3d::Joint_obj::hx_Joint_getInverseBindPose(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Matrix _g3 = this->_inverseBindPose->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_inverseBindPose = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Joint_obj,getInverseBindPose,return )

int Joint_obj::getType( ){
	HX_STACK_FRAME("org.gameplay3d.Joint","getType",0x563c617f,"org.gameplay3d.Joint.getType","org/gameplay3d/Joint.hx",29,0xa45c0401)
	HX_STACK_THIS(this)
	HX_STACK_LINE(29)
	return ::org::gameplay3d::Joint_obj::hx_Joint_getType(this->nativeObject);
}


Dynamic Joint_obj::hx_Joint_getInverseBindPose;

Dynamic Joint_obj::hx_Joint_getType;


Joint_obj::Joint_obj()
{
}

void Joint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Joint);
	HX_MARK_MEMBER_NAME(_inverseBindPose,"_inverseBindPose");
	::org::gameplay3d::Node_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Joint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_inverseBindPose,"_inverseBindPose");
	::org::gameplay3d::Node_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Joint_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hx_Joint_getType") ) { return hx_Joint_getType; }
		if (HX_FIELD_EQ(inName,"_inverseBindPose") ) { return _inverseBindPose; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getInverseBindPose") ) { return getInverseBindPose_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"hx_Joint_getInverseBindPose") ) { return hx_Joint_getInverseBindPose; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Joint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"hx_Joint_getType") ) { hx_Joint_getType=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_inverseBindPose") ) { _inverseBindPose=inValue.Cast< ::org::gameplay3d::Matrix >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"hx_Joint_getInverseBindPose") ) { hx_Joint_getInverseBindPose=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Joint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_inverseBindPose"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("hx_Joint_getInverseBindPose"),
	HX_CSTRING("hx_Joint_getType"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::org::gameplay3d::Matrix*/ ,(int)offsetof(Joint_obj,_inverseBindPose),HX_CSTRING("_inverseBindPose")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_inverseBindPose"),
	HX_CSTRING("getInverseBindPose"),
	HX_CSTRING("getType"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Joint_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Joint_obj::hx_Joint_getInverseBindPose,"hx_Joint_getInverseBindPose");
	HX_MARK_MEMBER_NAME(Joint_obj::hx_Joint_getType,"hx_Joint_getType");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Joint_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Joint_obj::hx_Joint_getInverseBindPose,"hx_Joint_getInverseBindPose");
	HX_VISIT_MEMBER_NAME(Joint_obj::hx_Joint_getType,"hx_Joint_getType");
};

#endif

Class Joint_obj::__mClass;

void Joint_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.Joint"), hx::TCanCast< Joint_obj> ,sStaticFields,sMemberFields,
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

void Joint_obj::__boot()
{
	hx_Joint_getInverseBindPose= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Joint >(),HX_CSTRING("getInverseBindPose"),(int)1);
	hx_Joint_getType= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Joint >(),HX_CSTRING("getType"),(int)1);
}

} // end namespace org
} // end namespace gameplay3d
