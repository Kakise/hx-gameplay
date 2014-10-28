#include <hxcpp.h>

#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Ref
#include <org/gameplay3d/Ref.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Texture_Sampler
#include <org/gameplay3d/Texture_Sampler.h>
#endif
#ifndef INCLUDED_org_gameplay3d__MaterialParameter_MaterialParameterBinder_Impl_
#include <org/gameplay3d/_MaterialParameter/MaterialParameterBinder_Impl_.h>
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
#ifndef INCLUDED_org_gameplay3d_intern_INativeBinding
#include <org/gameplay3d/intern/INativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_NativeBinding
#include <org/gameplay3d/intern/NativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_FunctionBinder
#include <org/gameplay3d/util/FunctionBinder.h>
#endif
namespace org{
namespace gameplay3d{
namespace _MaterialParameter{

Void MaterialParameterBinder_Impl__obj::__construct()
{
	return null();
}

//MaterialParameterBinder_Impl__obj::~MaterialParameterBinder_Impl__obj() { }

Dynamic MaterialParameterBinder_Impl__obj::__CreateEmpty() { return  new MaterialParameterBinder_Impl__obj; }
hx::ObjectPtr< MaterialParameterBinder_Impl__obj > MaterialParameterBinder_Impl__obj::__new()
{  hx::ObjectPtr< MaterialParameterBinder_Impl__obj > result = new MaterialParameterBinder_Impl__obj();
	result->__construct();
	return result;}

Dynamic MaterialParameterBinder_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MaterialParameterBinder_Impl__obj > result = new MaterialParameterBinder_Impl__obj();
	result->__construct();
	return result;}

::org::gameplay3d::util::FunctionBinder MaterialParameterBinder_Impl__obj::_new( Dynamic v){
	HX_STACK_FRAME("org.gameplay3d._MaterialParameter.MaterialParameterBinder_Impl_","_new",0x1841a2c1,"org.gameplay3d._MaterialParameter.MaterialParameterBinder_Impl_._new","org/gameplay3d/MaterialParameter.hx",26,0xd7a613c9)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(26)
	return v;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MaterialParameterBinder_Impl__obj,_new,return )

::org::gameplay3d::util::FunctionBinder MaterialParameterBinder_Impl__obj::getBinder( ::org::gameplay3d::util::FunctionBinder this1){
	HX_STACK_FRAME("org.gameplay3d._MaterialParameter.MaterialParameterBinder_Impl_","getBinder",0xe9257740,"org.gameplay3d._MaterialParameter.MaterialParameterBinder_Impl_.getBinder","org/gameplay3d/MaterialParameter.hx",31,0xd7a613c9)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(31)
	return this1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MaterialParameterBinder_Impl__obj,getBinder,return )

::org::gameplay3d::util::FunctionBinder MaterialParameterBinder_Impl__obj::fromFloat( Dynamic val){
	HX_STACK_FRAME("org.gameplay3d._MaterialParameter.MaterialParameterBinder_Impl_","fromFloat",0x36e0a672,"org.gameplay3d._MaterialParameter.MaterialParameterBinder_Impl_.fromFloat","org/gameplay3d/MaterialParameter.hx",36,0xd7a613c9)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(36)
	Dynamic v = ::org::gameplay3d::util::FunctionBinder_obj::__new(val,HX_CSTRING("Float"),null());		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(36)
	return v;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MaterialParameterBinder_Impl__obj,fromFloat,return )

::org::gameplay3d::util::FunctionBinder MaterialParameterBinder_Impl__obj::fromInt( Dynamic val){
	HX_STACK_FRAME("org.gameplay3d._MaterialParameter.MaterialParameterBinder_Impl_","fromInt",0xd2a2ec45,"org.gameplay3d._MaterialParameter.MaterialParameterBinder_Impl_.fromInt","org/gameplay3d/MaterialParameter.hx",41,0xd7a613c9)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(41)
	Dynamic v = ::org::gameplay3d::util::FunctionBinder_obj::__new(val,HX_CSTRING("Int"),null());		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(41)
	return v;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MaterialParameterBinder_Impl__obj,fromInt,return )

::org::gameplay3d::util::FunctionBinder MaterialParameterBinder_Impl__obj::fromVector2( Dynamic val){
	HX_STACK_FRAME("org.gameplay3d._MaterialParameter.MaterialParameterBinder_Impl_","fromVector2",0x1dc13c65,"org.gameplay3d._MaterialParameter.MaterialParameterBinder_Impl_.fromVector2","org/gameplay3d/MaterialParameter.hx",46,0xd7a613c9)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(46)
	Dynamic v = ::org::gameplay3d::util::FunctionBinder_obj::__new(val,HX_CSTRING("IVector2"),false);		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(46)
	return v;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MaterialParameterBinder_Impl__obj,fromVector2,return )

::org::gameplay3d::util::FunctionBinder MaterialParameterBinder_Impl__obj::fromVector3( Dynamic val){
	HX_STACK_FRAME("org.gameplay3d._MaterialParameter.MaterialParameterBinder_Impl_","fromVector3",0x1dc13c66,"org.gameplay3d._MaterialParameter.MaterialParameterBinder_Impl_.fromVector3","org/gameplay3d/MaterialParameter.hx",51,0xd7a613c9)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(51)
	Dynamic v = ::org::gameplay3d::util::FunctionBinder_obj::__new(val,HX_CSTRING("IVector3"),false);		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(51)
	return v;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MaterialParameterBinder_Impl__obj,fromVector3,return )

::org::gameplay3d::util::FunctionBinder MaterialParameterBinder_Impl__obj::fromVector4( Dynamic val){
	HX_STACK_FRAME("org.gameplay3d._MaterialParameter.MaterialParameterBinder_Impl_","fromVector4",0x1dc13c67,"org.gameplay3d._MaterialParameter.MaterialParameterBinder_Impl_.fromVector4","org/gameplay3d/MaterialParameter.hx",56,0xd7a613c9)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(56)
	Dynamic v = ::org::gameplay3d::util::FunctionBinder_obj::__new(val,HX_CSTRING("IVector4"),false);		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(56)
	return v;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MaterialParameterBinder_Impl__obj,fromVector4,return )

::org::gameplay3d::util::FunctionBinder MaterialParameterBinder_Impl__obj::fromMatrix( Dynamic val){
	HX_STACK_FRAME("org.gameplay3d._MaterialParameter.MaterialParameterBinder_Impl_","fromMatrix",0x482310ab,"org.gameplay3d._MaterialParameter.MaterialParameterBinder_Impl_.fromMatrix","org/gameplay3d/MaterialParameter.hx",61,0xd7a613c9)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(61)
	Dynamic v = ::org::gameplay3d::util::FunctionBinder_obj::__new(val,HX_CSTRING("IMatrix"),false);		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(61)
	return v;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MaterialParameterBinder_Impl__obj,fromMatrix,return )

::org::gameplay3d::util::FunctionBinder MaterialParameterBinder_Impl__obj::fromSampler( Dynamic val){
	HX_STACK_FRAME("org.gameplay3d._MaterialParameter.MaterialParameterBinder_Impl_","fromSampler",0xc6ee075e,"org.gameplay3d._MaterialParameter.MaterialParameterBinder_Impl_.fromSampler","org/gameplay3d/MaterialParameter.hx",66,0xd7a613c9)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(66)
	Dynamic v = ::org::gameplay3d::util::FunctionBinder_obj::__new(val,HX_CSTRING("Texture_Sampler"),false);		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(66)
	return v;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MaterialParameterBinder_Impl__obj,fromSampler,return )


MaterialParameterBinder_Impl__obj::MaterialParameterBinder_Impl__obj()
{
}

Dynamic MaterialParameterBinder_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { return _new_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fromInt") ) { return fromInt_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getBinder") ) { return getBinder_dyn(); }
		if (HX_FIELD_EQ(inName,"fromFloat") ) { return fromFloat_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromMatrix") ) { return fromMatrix_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fromVector2") ) { return fromVector2_dyn(); }
		if (HX_FIELD_EQ(inName,"fromVector3") ) { return fromVector3_dyn(); }
		if (HX_FIELD_EQ(inName,"fromVector4") ) { return fromVector4_dyn(); }
		if (HX_FIELD_EQ(inName,"fromSampler") ) { return fromSampler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MaterialParameterBinder_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void MaterialParameterBinder_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_new"),
	HX_CSTRING("getBinder"),
	HX_CSTRING("fromFloat"),
	HX_CSTRING("fromInt"),
	HX_CSTRING("fromVector2"),
	HX_CSTRING("fromVector3"),
	HX_CSTRING("fromVector4"),
	HX_CSTRING("fromMatrix"),
	HX_CSTRING("fromSampler"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MaterialParameterBinder_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MaterialParameterBinder_Impl__obj::__mClass,"__mClass");
};

#endif

Class MaterialParameterBinder_Impl__obj::__mClass;

void MaterialParameterBinder_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d._MaterialParameter.MaterialParameterBinder_Impl_"), hx::TCanCast< MaterialParameterBinder_Impl__obj> ,sStaticFields,sMemberFields,
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

void MaterialParameterBinder_Impl__obj::__boot()
{
}

} // end namespace org
} // end namespace gameplay3d
} // end namespace _MaterialParameter
