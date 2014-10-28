#include <hxcpp.h>

#ifndef INCLUDED_org_gameplay3d__MaterialParameter_MaterialParameterArrayBinder_Impl_
#include <org/gameplay3d/_MaterialParameter/MaterialParameterArrayBinder_Impl_.h>
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
#ifndef INCLUDED_org_gameplay3d_util_INativeArray
#include <org/gameplay3d/util/INativeArray.h>
#endif
namespace org{
namespace gameplay3d{
namespace _MaterialParameter{

Void MaterialParameterArrayBinder_Impl__obj::__construct()
{
	return null();
}

//MaterialParameterArrayBinder_Impl__obj::~MaterialParameterArrayBinder_Impl__obj() { }

Dynamic MaterialParameterArrayBinder_Impl__obj::__CreateEmpty() { return  new MaterialParameterArrayBinder_Impl__obj; }
hx::ObjectPtr< MaterialParameterArrayBinder_Impl__obj > MaterialParameterArrayBinder_Impl__obj::__new()
{  hx::ObjectPtr< MaterialParameterArrayBinder_Impl__obj > result = new MaterialParameterArrayBinder_Impl__obj();
	result->__construct();
	return result;}

Dynamic MaterialParameterArrayBinder_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MaterialParameterArrayBinder_Impl__obj > result = new MaterialParameterArrayBinder_Impl__obj();
	result->__construct();
	return result;}

::org::gameplay3d::util::FunctionBinder MaterialParameterArrayBinder_Impl__obj::_new( Dynamic v){
	HX_STACK_FRAME("org.gameplay3d._MaterialParameter.MaterialParameterArrayBinder_Impl_","_new",0xcb944370,"org.gameplay3d._MaterialParameter.MaterialParameterArrayBinder_Impl_._new","org/gameplay3d/MaterialParameter.hx",74,0xd7a613c9)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(74)
	return v;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MaterialParameterArrayBinder_Impl__obj,_new,return )

::org::gameplay3d::util::FunctionBinder MaterialParameterArrayBinder_Impl__obj::getBinder( ::org::gameplay3d::util::FunctionBinder this1){
	HX_STACK_FRAME("org.gameplay3d._MaterialParameter.MaterialParameterArrayBinder_Impl_","getBinder",0xfec2fc31,"org.gameplay3d._MaterialParameter.MaterialParameterArrayBinder_Impl_.getBinder","org/gameplay3d/MaterialParameter.hx",79,0xd7a613c9)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(79)
	return this1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MaterialParameterArrayBinder_Impl__obj,getBinder,return )

::org::gameplay3d::util::FunctionBinder MaterialParameterArrayBinder_Impl__obj::fromFloat( Dynamic val){
	HX_STACK_FRAME("org.gameplay3d._MaterialParameter.MaterialParameterArrayBinder_Impl_","fromFloat",0x4c7e2b63,"org.gameplay3d._MaterialParameter.MaterialParameterArrayBinder_Impl_.fromFloat","org/gameplay3d/MaterialParameter.hx",84,0xd7a613c9)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(84)
	Dynamic v = ::org::gameplay3d::util::FunctionBinder_obj::__new(val,HX_CSTRING("INativeArray<Float>"),null());		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(84)
	return v;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MaterialParameterArrayBinder_Impl__obj,fromFloat,return )

::org::gameplay3d::util::FunctionBinder MaterialParameterArrayBinder_Impl__obj::fromInt( Dynamic val){
	HX_STACK_FRAME("org.gameplay3d._MaterialParameter.MaterialParameterArrayBinder_Impl_","fromInt",0xb460a2f6,"org.gameplay3d._MaterialParameter.MaterialParameterArrayBinder_Impl_.fromInt","org/gameplay3d/MaterialParameter.hx",89,0xd7a613c9)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(89)
	Dynamic v = ::org::gameplay3d::util::FunctionBinder_obj::__new(val,HX_CSTRING("INativeArray<Int>"),null());		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(89)
	return v;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MaterialParameterArrayBinder_Impl__obj,fromInt,return )

::org::gameplay3d::util::FunctionBinder MaterialParameterArrayBinder_Impl__obj::fromVector2( Dynamic val){
	HX_STACK_FRAME("org.gameplay3d._MaterialParameter.MaterialParameterArrayBinder_Impl_","fromVector2",0xf97e9f96,"org.gameplay3d._MaterialParameter.MaterialParameterArrayBinder_Impl_.fromVector2","org/gameplay3d/MaterialParameter.hx",94,0xd7a613c9)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(94)
	Dynamic v = ::org::gameplay3d::util::FunctionBinder_obj::__new(val,HX_CSTRING("Vector2>"),false);		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(94)
	return v;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MaterialParameterArrayBinder_Impl__obj,fromVector2,return )

::org::gameplay3d::util::FunctionBinder MaterialParameterArrayBinder_Impl__obj::fromVector3( Dynamic val){
	HX_STACK_FRAME("org.gameplay3d._MaterialParameter.MaterialParameterArrayBinder_Impl_","fromVector3",0xf97e9f97,"org.gameplay3d._MaterialParameter.MaterialParameterArrayBinder_Impl_.fromVector3","org/gameplay3d/MaterialParameter.hx",99,0xd7a613c9)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(99)
	Dynamic v = ::org::gameplay3d::util::FunctionBinder_obj::__new(val,HX_CSTRING("Vector3>"),false);		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(99)
	return v;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MaterialParameterArrayBinder_Impl__obj,fromVector3,return )

::org::gameplay3d::util::FunctionBinder MaterialParameterArrayBinder_Impl__obj::fromVector4( Dynamic val){
	HX_STACK_FRAME("org.gameplay3d._MaterialParameter.MaterialParameterArrayBinder_Impl_","fromVector4",0xf97e9f98,"org.gameplay3d._MaterialParameter.MaterialParameterArrayBinder_Impl_.fromVector4","org/gameplay3d/MaterialParameter.hx",104,0xd7a613c9)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(104)
	Dynamic v = ::org::gameplay3d::util::FunctionBinder_obj::__new(val,HX_CSTRING("Vector4>"),false);		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(104)
	return v;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MaterialParameterArrayBinder_Impl__obj,fromVector4,return )

::org::gameplay3d::util::FunctionBinder MaterialParameterArrayBinder_Impl__obj::fromMatrix( Dynamic val){
	HX_STACK_FRAME("org.gameplay3d._MaterialParameter.MaterialParameterArrayBinder_Impl_","fromMatrix",0x1c59de9a,"org.gameplay3d._MaterialParameter.MaterialParameterArrayBinder_Impl_.fromMatrix","org/gameplay3d/MaterialParameter.hx",109,0xd7a613c9)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(109)
	Dynamic v = ::org::gameplay3d::util::FunctionBinder_obj::__new(val,HX_CSTRING("Matrix>"),false);		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(109)
	return v;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MaterialParameterArrayBinder_Impl__obj,fromMatrix,return )

::org::gameplay3d::util::FunctionBinder MaterialParameterArrayBinder_Impl__obj::fromSampler( Dynamic val){
	HX_STACK_FRAME("org.gameplay3d._MaterialParameter.MaterialParameterArrayBinder_Impl_","fromSampler",0xa2ab6a8f,"org.gameplay3d._MaterialParameter.MaterialParameterArrayBinder_Impl_.fromSampler","org/gameplay3d/MaterialParameter.hx",114,0xd7a613c9)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(114)
	Dynamic v = ::org::gameplay3d::util::FunctionBinder_obj::__new(val,HX_CSTRING("Texture_Sampler>"),false);		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(114)
	return v;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MaterialParameterArrayBinder_Impl__obj,fromSampler,return )


MaterialParameterArrayBinder_Impl__obj::MaterialParameterArrayBinder_Impl__obj()
{
}

Dynamic MaterialParameterArrayBinder_Impl__obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic MaterialParameterArrayBinder_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void MaterialParameterArrayBinder_Impl__obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(MaterialParameterArrayBinder_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MaterialParameterArrayBinder_Impl__obj::__mClass,"__mClass");
};

#endif

Class MaterialParameterArrayBinder_Impl__obj::__mClass;

void MaterialParameterArrayBinder_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d._MaterialParameter.MaterialParameterArrayBinder_Impl_"), hx::TCanCast< MaterialParameterArrayBinder_Impl__obj> ,sStaticFields,sMemberFields,
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

void MaterialParameterArrayBinder_Impl__obj::__boot()
{
}

} // end namespace org
} // end namespace gameplay3d
} // end namespace _MaterialParameter
