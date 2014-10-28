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
#ifndef INCLUDED_org_gameplay3d_AnimationValue
#include <org/gameplay3d/AnimationValue.h>
#endif
#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_MaterialParameter
#include <org/gameplay3d/MaterialParameter.h>
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
#ifndef INCLUDED_org_gameplay3d_Texture_Sampler
#include <org/gameplay3d/Texture_Sampler.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Transform
#include <org/gameplay3d/Transform.h>
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
#ifndef INCLUDED_org_gameplay3d_intern_impl_AnimationTargetImpl
#include <org/gameplay3d/intern/impl/AnimationTargetImpl.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_impl_AnimationTarget_ScriptTarget
#include <org/gameplay3d/intern/impl/AnimationTarget_ScriptTarget.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_FunctionBinder
#include <org/gameplay3d/util/FunctionBinder.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_IMutableNativeArray
#include <org/gameplay3d/util/IMutableNativeArray.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_INativeArray
#include <org/gameplay3d/util/INativeArray.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_NativeInterface
#include <org/gameplay3d/util/NativeInterface.h>
#endif
namespace org{
namespace gameplay3d{

Void MaterialParameter_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.MaterialParameter","new",0x3735cb27,"org.gameplay3d.MaterialParameter.new","org/gameplay3d/MaterialParameter.hx",119,0xd7a613c9)
HX_STACK_THIS(this)
HX_STACK_ARG(nativeObjectInitializer,"nativeObjectInitializer")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(119)
	super::__construct(nativeObjectInitializer,nativeObjectInitializerParams);
}
;
	return null();
}

//MaterialParameter_obj::~MaterialParameter_obj() { }

Dynamic MaterialParameter_obj::__CreateEmpty() { return  new MaterialParameter_obj; }
hx::ObjectPtr< MaterialParameter_obj > MaterialParameter_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< MaterialParameter_obj > result = new MaterialParameter_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic MaterialParameter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MaterialParameter_obj > result = new MaterialParameter_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *MaterialParameter_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::intern::INativeBinding_obj)) return operator ::org::gameplay3d::intern::INativeBinding_obj *();
	if (inType==typeid( ::org::gameplay3d::Ref_obj)) return operator ::org::gameplay3d::Ref_obj *();
	return super::__ToInterface(inType);
}

Void MaterialParameter_obj::clearBinder( ){
{
		HX_STACK_FRAME("org.gameplay3d.MaterialParameter","clearBinder",0xbb0f9e9e,"org.gameplay3d.MaterialParameter.clearBinder","org/gameplay3d/MaterialParameter.hx",136,0xd7a613c9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(137)
		this->binder = null();
		HX_STACK_LINE(138)
		this->arrayBinder = null();
		HX_STACK_LINE(139)
		this->countBinder = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MaterialParameter_obj,clearBinder,(void))

Void MaterialParameter_obj::bindValue_Func( ::org::gameplay3d::util::FunctionBinder binder){
{
		HX_STACK_FRAME("org.gameplay3d.MaterialParameter","bindValue_Func",0x95d9fee8,"org.gameplay3d.MaterialParameter.bindValue_Func","org/gameplay3d/MaterialParameter.hx",144,0xd7a613c9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(binder,"binder")
		HX_STACK_LINE(145)
		this->clearBinder();
		HX_STACK_LINE(146)
		this->binder = binder;
		HX_STACK_LINE(147)
		::org::gameplay3d::MaterialParameter_obj::hx_MaterialParameter_bindValue_Func_Str(this->nativeObject,binder->nativeObject,binder->type);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialParameter_obj,bindValue_Func,(void))

Void MaterialParameter_obj::bindValue_FuncX2( ::org::gameplay3d::util::FunctionBinder arrayBinder,Dynamic countBinder){
{
		HX_STACK_FRAME("org.gameplay3d.MaterialParameter","bindValue_FuncX2",0x3f85d5c2,"org.gameplay3d.MaterialParameter.bindValue_FuncX2","org/gameplay3d/MaterialParameter.hx",152,0xd7a613c9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(arrayBinder,"arrayBinder")
		HX_STACK_ARG(countBinder,"countBinder")
		HX_STACK_LINE(153)
		this->clearBinder();
		HX_STACK_LINE(154)
		this->arrayBinder = arrayBinder;
		HX_STACK_LINE(155)
		::org::gameplay3d::util::FunctionBinder _g = ::org::gameplay3d::util::FunctionBinder_obj::__new(countBinder,HX_CSTRING("Int"),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(155)
		this->countBinder = _g;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MaterialParameter_obj,bindValue_FuncX2,(void))

Void MaterialParameter_obj::bindValue_Node_Str( ::org::gameplay3d::Node node,::String binding){
{
		HX_STACK_FRAME("org.gameplay3d.MaterialParameter","bindValue_Node_Str",0x89008e38,"org.gameplay3d.MaterialParameter.bindValue_Node_Str","org/gameplay3d/MaterialParameter.hx",161,0xd7a613c9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(node,"node")
		HX_STACK_ARG(binding,"binding")
		HX_STACK_LINE(162)
		this->clearBinder();
		HX_STACK_LINE(163)
		::org::gameplay3d::MaterialParameter_obj::hx_MaterialParameter_bindValue_Node_Str(this->nativeObject,(  (((node == null()))) ? Dynamic(null()) : Dynamic(node->nativeObject) ),binding);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MaterialParameter_obj,bindValue_Node_Str,(void))

int MaterialParameter_obj::getAnimationPropertyComponentCount( int propertyId){
	HX_STACK_FRAME("org.gameplay3d.MaterialParameter","getAnimationPropertyComponentCount",0xec50774e,"org.gameplay3d.MaterialParameter.getAnimationPropertyComponentCount","org/gameplay3d/MaterialParameter.hx",169,0xd7a613c9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(propertyId,"propertyId")
	HX_STACK_LINE(169)
	return ::org::gameplay3d::MaterialParameter_obj::hx_MaterialParameter_getAnimationPropertyComponentCount(this->nativeObject,propertyId);
}


Void MaterialParameter_obj::getAnimationPropertyValue( int propertyId,::org::gameplay3d::AnimationValue value){
{
		HX_STACK_FRAME("org.gameplay3d.MaterialParameter","getAnimationPropertyValue",0xee13fe75,"org.gameplay3d.MaterialParameter.getAnimationPropertyValue","org/gameplay3d/MaterialParameter.hx",175,0xd7a613c9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(propertyId,"propertyId")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(175)
		::org::gameplay3d::MaterialParameter_obj::hx_MaterialParameter_getAnimationPropertyValue(this->nativeObject,propertyId,(  (((value == null()))) ? Dynamic(null()) : Dynamic(value->nativeObject) ));
	}
return null();
}


::String MaterialParameter_obj::getName( ){
	HX_STACK_FRAME("org.gameplay3d.MaterialParameter","getName",0x98a68c48,"org.gameplay3d.MaterialParameter.getName","org/gameplay3d/MaterialParameter.hx",181,0xd7a613c9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(181)
	return ::org::gameplay3d::MaterialParameter_obj::hx_MaterialParameter_getName(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(MaterialParameter_obj,getName,return )

::org::gameplay3d::Texture_Sampler MaterialParameter_obj::getSampler( hx::Null< int >  __o_index){
int index = __o_index.Default(0);
	HX_STACK_FRAME("org.gameplay3d.MaterialParameter","getSampler",0x6413472b,"org.gameplay3d.MaterialParameter.getSampler","org/gameplay3d/MaterialParameter.hx",187,0xd7a613c9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
{
		HX_STACK_LINE(187)
		::Class classObj = hx::ClassOf< ::org::gameplay3d::Texture_Sampler >();		HX_STACK_VAR(classObj,"classObj");
		HX_STACK_LINE(187)
		Dynamic nativeObject = ::org::gameplay3d::MaterialParameter_obj::hx_MaterialParameter_getSampler(this->nativeObject,index);		HX_STACK_VAR(nativeObject,"nativeObject");
		HX_STACK_LINE(187)
		if (((nativeObject == null()))){
			HX_STACK_LINE(187)
			return null();
		}
		else{
			HX_STACK_LINE(187)
			if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
				HX_STACK_LINE(187)
				::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
				HX_STACK_LINE(187)
				::org::gameplay3d::Texture_Sampler result = ref->get();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(187)
				if (((result == null()))){
					HX_STACK_LINE(187)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
					HX_STACK_LINE(187)
					::org::gameplay3d::Texture_Sampler _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(187)
					result = _g;
					HX_STACK_LINE(187)
					ref->set(result);
				}
				HX_STACK_LINE(187)
				return result;
			}
			else{
				HX_STACK_LINE(187)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
				HX_STACK_LINE(187)
				return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
			}
		}
		HX_STACK_LINE(187)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialParameter_obj,getSampler,return )

Void MaterialParameter_obj::setAnimationPropertyValue( int propertyId,::org::gameplay3d::AnimationValue value,hx::Null< Float >  __o_blendWeight){
Float blendWeight = __o_blendWeight.Default(1.0);
	HX_STACK_FRAME("org.gameplay3d.MaterialParameter","setAnimationPropertyValue",0x5a6ac281,"org.gameplay3d.MaterialParameter.setAnimationPropertyValue","org/gameplay3d/MaterialParameter.hx",193,0xd7a613c9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(propertyId,"propertyId")
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(blendWeight,"blendWeight")
{
		HX_STACK_LINE(193)
		::org::gameplay3d::MaterialParameter_obj::hx_MaterialParameter_setAnimationPropertyValue(this->nativeObject,propertyId,(  (((value == null()))) ? Dynamic(null()) : Dynamic(value->nativeObject) ),blendWeight);
	}
return null();
}


::org::gameplay3d::Texture_Sampler MaterialParameter_obj::setValue_Str_Bool( ::String texturePath,bool generateMipmaps){
	HX_STACK_FRAME("org.gameplay3d.MaterialParameter","setValue_Str_Bool",0x061c700f,"org.gameplay3d.MaterialParameter.setValue_Str_Bool","org/gameplay3d/MaterialParameter.hx",198,0xd7a613c9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(texturePath,"texturePath")
	HX_STACK_ARG(generateMipmaps,"generateMipmaps")
	HX_STACK_LINE(199)
	this->clearBinder();
	HX_STACK_LINE(200)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Texture_Sampler >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(200)
	Dynamic nativeObject = ::org::gameplay3d::MaterialParameter_obj::hx_MaterialParameter_setValue_Str_Bool(this->nativeObject,texturePath,generateMipmaps);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(200)
	if (((nativeObject == null()))){
		HX_STACK_LINE(200)
		return null();
	}
	else{
		HX_STACK_LINE(200)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(200)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(200)
			::org::gameplay3d::Texture_Sampler result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(200)
			if (((result == null()))){
				HX_STACK_LINE(200)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(200)
				::org::gameplay3d::Texture_Sampler _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(200)
				result = _g;
				HX_STACK_LINE(200)
				ref->set(result);
			}
			HX_STACK_LINE(200)
			return result;
		}
		else{
			HX_STACK_LINE(200)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(200)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(200)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MaterialParameter_obj,setValue_Str_Bool,return )

Void MaterialParameter_obj::setValue_Mat( ::org::gameplay3d::immutable::IMatrix value){
{
		HX_STACK_FRAME("org.gameplay3d.MaterialParameter","setValue_Mat",0x5cf347c9,"org.gameplay3d.MaterialParameter.setValue_Mat","org/gameplay3d/MaterialParameter.hx",205,0xd7a613c9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(206)
		this->clearBinder();
		HX_STACK_LINE(207)
		::org::gameplay3d::MaterialParameter_obj::hx_MaterialParameter_setValue_Mat(this->nativeObject,(  (((value == null()))) ? Dynamic(null()) : Dynamic(value->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialParameter_obj,setValue_Mat,(void))

Void MaterialParameter_obj::setValue_ArrMat_Int( ::org::gameplay3d::util::INativeArray values,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
	HX_STACK_FRAME("org.gameplay3d.MaterialParameter","setValue_ArrMat_Int",0x3de5b606,"org.gameplay3d.MaterialParameter.setValue_ArrMat_Int","org/gameplay3d/MaterialParameter.hx",212,0xd7a613c9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(values,"values")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(213)
		this->clearBinder();
		HX_STACK_LINE(214)
		::org::gameplay3d::MaterialParameter_obj::hx_MaterialParameter_setValue_ArrMat_Int(this->nativeObject,(  (((values == null()))) ? Dynamic(null()) : Dynamic(values->__Field(HX_CSTRING("nativeObject"),true)) ),count);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MaterialParameter_obj,setValue_ArrMat_Int,(void))

Void MaterialParameter_obj::setValue_Smplr( ::org::gameplay3d::Texture_Sampler sampler){
{
		HX_STACK_FRAME("org.gameplay3d.MaterialParameter","setValue_Smplr",0x727eec05,"org.gameplay3d.MaterialParameter.setValue_Smplr","org/gameplay3d/MaterialParameter.hx",219,0xd7a613c9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sampler,"sampler")
		HX_STACK_LINE(220)
		this->clearBinder();
		HX_STACK_LINE(221)
		::org::gameplay3d::MaterialParameter_obj::hx_MaterialParameter_setValue_Smplr(this->nativeObject,(  (((sampler == null()))) ? Dynamic(null()) : Dynamic(sampler->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialParameter_obj,setValue_Smplr,(void))

Void MaterialParameter_obj::setValue_ArrSmplr_Int( Array< ::Dynamic > samplers,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
	HX_STACK_FRAME("org.gameplay3d.MaterialParameter","setValue_ArrSmplr_Int",0x88fabd82,"org.gameplay3d.MaterialParameter.setValue_ArrSmplr_Int","org/gameplay3d/MaterialParameter.hx",226,0xd7a613c9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(samplers,"samplers")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(227)
		this->clearBinder();
		HX_STACK_LINE(228)
		Dynamic _g = ::org::gameplay3d::intern::ConversionTools_obj::insertArray(samplers);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(228)
		::org::gameplay3d::MaterialParameter_obj::hx_MaterialParameter_setValue_ArrSmplr_Int(this->nativeObject,_g,count);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MaterialParameter_obj,setValue_ArrSmplr_Int,(void))

Void MaterialParameter_obj::setValue_V2( ::org::gameplay3d::immutable::IVector2 value){
{
		HX_STACK_FRAME("org.gameplay3d.MaterialParameter","setValue_V2",0x58cfc1f3,"org.gameplay3d.MaterialParameter.setValue_V2","org/gameplay3d/MaterialParameter.hx",233,0xd7a613c9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(234)
		this->clearBinder();
		HX_STACK_LINE(235)
		::org::gameplay3d::MaterialParameter_obj::hx_MaterialParameter_setValue_V2(this->nativeObject,(  (((value == null()))) ? Dynamic(null()) : Dynamic(value->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialParameter_obj,setValue_V2,(void))

Void MaterialParameter_obj::setValue_ArrV2_Int( ::org::gameplay3d::util::INativeArray values,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
	HX_STACK_FRAME("org.gameplay3d.MaterialParameter","setValue_ArrV2_Int",0x311791f6,"org.gameplay3d.MaterialParameter.setValue_ArrV2_Int","org/gameplay3d/MaterialParameter.hx",240,0xd7a613c9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(values,"values")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(241)
		this->clearBinder();
		HX_STACK_LINE(242)
		::org::gameplay3d::MaterialParameter_obj::hx_MaterialParameter_setValue_ArrV2_Int(this->nativeObject,(  (((values == null()))) ? Dynamic(null()) : Dynamic(values->__Field(HX_CSTRING("nativeObject"),true)) ),count);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MaterialParameter_obj,setValue_ArrV2_Int,(void))

Void MaterialParameter_obj::setValue_V3( ::org::gameplay3d::immutable::IVector3 value){
{
		HX_STACK_FRAME("org.gameplay3d.MaterialParameter","setValue_V3",0x58cfc1f4,"org.gameplay3d.MaterialParameter.setValue_V3","org/gameplay3d/MaterialParameter.hx",247,0xd7a613c9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(248)
		this->clearBinder();
		HX_STACK_LINE(249)
		::org::gameplay3d::MaterialParameter_obj::hx_MaterialParameter_setValue_V3(this->nativeObject,(  (((value == null()))) ? Dynamic(null()) : Dynamic(value->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialParameter_obj,setValue_V3,(void))

Void MaterialParameter_obj::setValue_ArrV3_Int( ::org::gameplay3d::util::INativeArray values,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
	HX_STACK_FRAME("org.gameplay3d.MaterialParameter","setValue_ArrV3_Int",0xc47e2677,"org.gameplay3d.MaterialParameter.setValue_ArrV3_Int","org/gameplay3d/MaterialParameter.hx",254,0xd7a613c9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(values,"values")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(255)
		this->clearBinder();
		HX_STACK_LINE(256)
		::org::gameplay3d::MaterialParameter_obj::hx_MaterialParameter_setValue_ArrV3_Int(this->nativeObject,(  (((values == null()))) ? Dynamic(null()) : Dynamic(values->__Field(HX_CSTRING("nativeObject"),true)) ),count);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MaterialParameter_obj,setValue_ArrV3_Int,(void))

Void MaterialParameter_obj::setValue_V4( ::org::gameplay3d::immutable::IVector4 value){
{
		HX_STACK_FRAME("org.gameplay3d.MaterialParameter","setValue_V4",0x58cfc1f5,"org.gameplay3d.MaterialParameter.setValue_V4","org/gameplay3d/MaterialParameter.hx",261,0xd7a613c9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(262)
		this->clearBinder();
		HX_STACK_LINE(263)
		::org::gameplay3d::MaterialParameter_obj::hx_MaterialParameter_setValue_V4(this->nativeObject,(  (((value == null()))) ? Dynamic(null()) : Dynamic(value->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialParameter_obj,setValue_V4,(void))

Void MaterialParameter_obj::setValue_ArrV4_Int( ::org::gameplay3d::util::INativeArray values,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
	HX_STACK_FRAME("org.gameplay3d.MaterialParameter","setValue_ArrV4_Int",0x57e4baf8,"org.gameplay3d.MaterialParameter.setValue_ArrV4_Int","org/gameplay3d/MaterialParameter.hx",268,0xd7a613c9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(values,"values")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(269)
		this->clearBinder();
		HX_STACK_LINE(270)
		::org::gameplay3d::MaterialParameter_obj::hx_MaterialParameter_setValue_ArrV4_Int(this->nativeObject,(  (((values == null()))) ? Dynamic(null()) : Dynamic(values->__Field(HX_CSTRING("nativeObject"),true)) ),count);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MaterialParameter_obj,setValue_ArrV4_Int,(void))

Void MaterialParameter_obj::setValue_ArrFlt_Int( ::org::gameplay3d::util::IMutableNativeArray values,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
	HX_STACK_FRAME("org.gameplay3d.MaterialParameter","setValue_ArrFlt_Int",0x80bc6ed4,"org.gameplay3d.MaterialParameter.setValue_ArrFlt_Int","org/gameplay3d/MaterialParameter.hx",275,0xd7a613c9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(values,"values")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(276)
		this->clearBinder();
		HX_STACK_LINE(277)
		::org::gameplay3d::MaterialParameter_obj::hx_MaterialParameter_setValue_ArrFlt_Int(this->nativeObject,(  (((values == null()))) ? Dynamic(null()) : Dynamic(values->__Field(HX_CSTRING("nativeObject"),true)) ),count);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MaterialParameter_obj,setValue_ArrFlt_Int,(void))

Void MaterialParameter_obj::setValue_ArrInt_Int( ::org::gameplay3d::util::IMutableNativeArray values,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
	HX_STACK_FRAME("org.gameplay3d.MaterialParameter","setValue_ArrInt_Int",0xca338bd5,"org.gameplay3d.MaterialParameter.setValue_ArrInt_Int","org/gameplay3d/MaterialParameter.hx",282,0xd7a613c9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(values,"values")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(283)
		this->clearBinder();
		HX_STACK_LINE(284)
		::org::gameplay3d::MaterialParameter_obj::hx_MaterialParameter_setValue_ArrInt_Int(this->nativeObject,(  (((values == null()))) ? Dynamic(null()) : Dynamic(values->__Field(HX_CSTRING("nativeObject"),true)) ),count);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MaterialParameter_obj,setValue_ArrInt_Int,(void))

Void MaterialParameter_obj::setValue_Flt( Float value){
{
		HX_STACK_FRAME("org.gameplay3d.MaterialParameter","setValue_Flt",0x5cee0197,"org.gameplay3d.MaterialParameter.setValue_Flt","org/gameplay3d/MaterialParameter.hx",289,0xd7a613c9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(290)
		this->clearBinder();
		HX_STACK_LINE(291)
		::org::gameplay3d::MaterialParameter_obj::hx_MaterialParameter_setValue_Flt(this->nativeObject,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialParameter_obj,setValue_Flt,(void))

Void MaterialParameter_obj::setValue_Int( int value){
{
		HX_STACK_FRAME("org.gameplay3d.MaterialParameter","setValue_Int",0x5cf04a18,"org.gameplay3d.MaterialParameter.setValue_Int","org/gameplay3d/MaterialParameter.hx",296,0xd7a613c9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(297)
		this->clearBinder();
		HX_STACK_LINE(298)
		::org::gameplay3d::MaterialParameter_obj::hx_MaterialParameter_setValue_Int(this->nativeObject,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialParameter_obj,setValue_Int,(void))

int MaterialParameter_obj::ANIMATE_UNIFORM;

Dynamic MaterialParameter_obj::hx_MaterialParameter_bindValue_Func_Str;

Dynamic MaterialParameter_obj::hx_MaterialParameter_bindValue_Node_Str;

Dynamic MaterialParameter_obj::hx_MaterialParameter_getAnimationPropertyComponentCount;

Dynamic MaterialParameter_obj::hx_MaterialParameter_getAnimationPropertyValue;

Dynamic MaterialParameter_obj::hx_MaterialParameter_getName;

Dynamic MaterialParameter_obj::hx_MaterialParameter_getSampler;

Dynamic MaterialParameter_obj::hx_MaterialParameter_setAnimationPropertyValue;

Dynamic MaterialParameter_obj::hx_MaterialParameter_setValue_Str_Bool;

Dynamic MaterialParameter_obj::hx_MaterialParameter_setValue_Mat;

Dynamic MaterialParameter_obj::hx_MaterialParameter_setValue_ArrMat_Int;

Dynamic MaterialParameter_obj::hx_MaterialParameter_setValue_Smplr;

Dynamic MaterialParameter_obj::hx_MaterialParameter_setValue_ArrSmplr_Int;

Dynamic MaterialParameter_obj::hx_MaterialParameter_setValue_V2;

Dynamic MaterialParameter_obj::hx_MaterialParameter_setValue_ArrV2_Int;

Dynamic MaterialParameter_obj::hx_MaterialParameter_setValue_V3;

Dynamic MaterialParameter_obj::hx_MaterialParameter_setValue_ArrV3_Int;

Dynamic MaterialParameter_obj::hx_MaterialParameter_setValue_V4;

Dynamic MaterialParameter_obj::hx_MaterialParameter_setValue_ArrV4_Int;

Dynamic MaterialParameter_obj::hx_MaterialParameter_setValue_ArrFlt_Int;

Dynamic MaterialParameter_obj::hx_MaterialParameter_setValue_ArrInt_Int;

Dynamic MaterialParameter_obj::hx_MaterialParameter_setValue_Flt;

Dynamic MaterialParameter_obj::hx_MaterialParameter_setValue_Int;


MaterialParameter_obj::MaterialParameter_obj()
{
}

void MaterialParameter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MaterialParameter);
	HX_MARK_MEMBER_NAME(binder,"binder");
	HX_MARK_MEMBER_NAME(arrayBinder,"arrayBinder");
	HX_MARK_MEMBER_NAME(countBinder,"countBinder");
	::org::gameplay3d::intern::NativeBinding_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MaterialParameter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(binder,"binder");
	HX_VISIT_MEMBER_NAME(arrayBinder,"arrayBinder");
	HX_VISIT_MEMBER_NAME(countBinder,"countBinder");
	::org::gameplay3d::intern::NativeBinding_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MaterialParameter_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"binder") ) { return binder; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return getName_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getSampler") ) { return getSampler_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"arrayBinder") ) { return arrayBinder; }
		if (HX_FIELD_EQ(inName,"countBinder") ) { return countBinder; }
		if (HX_FIELD_EQ(inName,"clearBinder") ) { return clearBinder_dyn(); }
		if (HX_FIELD_EQ(inName,"setValue_V2") ) { return setValue_V2_dyn(); }
		if (HX_FIELD_EQ(inName,"setValue_V3") ) { return setValue_V3_dyn(); }
		if (HX_FIELD_EQ(inName,"setValue_V4") ) { return setValue_V4_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setValue_Mat") ) { return setValue_Mat_dyn(); }
		if (HX_FIELD_EQ(inName,"setValue_Flt") ) { return setValue_Flt_dyn(); }
		if (HX_FIELD_EQ(inName,"setValue_Int") ) { return setValue_Int_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bindValue_Func") ) { return bindValue_Func_dyn(); }
		if (HX_FIELD_EQ(inName,"setValue_Smplr") ) { return setValue_Smplr_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"bindValue_FuncX2") ) { return bindValue_FuncX2_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"setValue_Str_Bool") ) { return setValue_Str_Bool_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"bindValue_Node_Str") ) { return bindValue_Node_Str_dyn(); }
		if (HX_FIELD_EQ(inName,"setValue_ArrV2_Int") ) { return setValue_ArrV2_Int_dyn(); }
		if (HX_FIELD_EQ(inName,"setValue_ArrV3_Int") ) { return setValue_ArrV3_Int_dyn(); }
		if (HX_FIELD_EQ(inName,"setValue_ArrV4_Int") ) { return setValue_ArrV4_Int_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"setValue_ArrMat_Int") ) { return setValue_ArrMat_Int_dyn(); }
		if (HX_FIELD_EQ(inName,"setValue_ArrFlt_Int") ) { return setValue_ArrFlt_Int_dyn(); }
		if (HX_FIELD_EQ(inName,"setValue_ArrInt_Int") ) { return setValue_ArrInt_Int_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"setValue_ArrSmplr_Int") ) { return setValue_ArrSmplr_Int_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"getAnimationPropertyValue") ) { return getAnimationPropertyValue_dyn(); }
		if (HX_FIELD_EQ(inName,"setAnimationPropertyValue") ) { return setAnimationPropertyValue_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_MaterialParameter_getName") ) { return hx_MaterialParameter_getName; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"hx_MaterialParameter_getSampler") ) { return hx_MaterialParameter_getSampler; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"hx_MaterialParameter_setValue_V2") ) { return hx_MaterialParameter_setValue_V2; }
		if (HX_FIELD_EQ(inName,"hx_MaterialParameter_setValue_V3") ) { return hx_MaterialParameter_setValue_V3; }
		if (HX_FIELD_EQ(inName,"hx_MaterialParameter_setValue_V4") ) { return hx_MaterialParameter_setValue_V4; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"hx_MaterialParameter_setValue_Mat") ) { return hx_MaterialParameter_setValue_Mat; }
		if (HX_FIELD_EQ(inName,"hx_MaterialParameter_setValue_Flt") ) { return hx_MaterialParameter_setValue_Flt; }
		if (HX_FIELD_EQ(inName,"hx_MaterialParameter_setValue_Int") ) { return hx_MaterialParameter_setValue_Int; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"getAnimationPropertyComponentCount") ) { return getAnimationPropertyComponentCount_dyn(); }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"hx_MaterialParameter_setValue_Smplr") ) { return hx_MaterialParameter_setValue_Smplr; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"hx_MaterialParameter_setValue_Str_Bool") ) { return hx_MaterialParameter_setValue_Str_Bool; }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"hx_MaterialParameter_bindValue_Func_Str") ) { return hx_MaterialParameter_bindValue_Func_Str; }
		if (HX_FIELD_EQ(inName,"hx_MaterialParameter_bindValue_Node_Str") ) { return hx_MaterialParameter_bindValue_Node_Str; }
		if (HX_FIELD_EQ(inName,"hx_MaterialParameter_setValue_ArrV2_Int") ) { return hx_MaterialParameter_setValue_ArrV2_Int; }
		if (HX_FIELD_EQ(inName,"hx_MaterialParameter_setValue_ArrV3_Int") ) { return hx_MaterialParameter_setValue_ArrV3_Int; }
		if (HX_FIELD_EQ(inName,"hx_MaterialParameter_setValue_ArrV4_Int") ) { return hx_MaterialParameter_setValue_ArrV4_Int; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"hx_MaterialParameter_setValue_ArrMat_Int") ) { return hx_MaterialParameter_setValue_ArrMat_Int; }
		if (HX_FIELD_EQ(inName,"hx_MaterialParameter_setValue_ArrFlt_Int") ) { return hx_MaterialParameter_setValue_ArrFlt_Int; }
		if (HX_FIELD_EQ(inName,"hx_MaterialParameter_setValue_ArrInt_Int") ) { return hx_MaterialParameter_setValue_ArrInt_Int; }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"hx_MaterialParameter_setValue_ArrSmplr_Int") ) { return hx_MaterialParameter_setValue_ArrSmplr_Int; }
		break;
	case 46:
		if (HX_FIELD_EQ(inName,"hx_MaterialParameter_getAnimationPropertyValue") ) { return hx_MaterialParameter_getAnimationPropertyValue; }
		if (HX_FIELD_EQ(inName,"hx_MaterialParameter_setAnimationPropertyValue") ) { return hx_MaterialParameter_setAnimationPropertyValue; }
		break;
	case 55:
		if (HX_FIELD_EQ(inName,"hx_MaterialParameter_getAnimationPropertyComponentCount") ) { return hx_MaterialParameter_getAnimationPropertyComponentCount; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MaterialParameter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"binder") ) { binder=inValue.Cast< ::org::gameplay3d::util::FunctionBinder >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"arrayBinder") ) { arrayBinder=inValue.Cast< ::org::gameplay3d::util::FunctionBinder >(); return inValue; }
		if (HX_FIELD_EQ(inName,"countBinder") ) { countBinder=inValue.Cast< ::org::gameplay3d::util::FunctionBinder >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_MaterialParameter_getName") ) { hx_MaterialParameter_getName=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"hx_MaterialParameter_getSampler") ) { hx_MaterialParameter_getSampler=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"hx_MaterialParameter_setValue_V2") ) { hx_MaterialParameter_setValue_V2=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_MaterialParameter_setValue_V3") ) { hx_MaterialParameter_setValue_V3=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_MaterialParameter_setValue_V4") ) { hx_MaterialParameter_setValue_V4=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"hx_MaterialParameter_setValue_Mat") ) { hx_MaterialParameter_setValue_Mat=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_MaterialParameter_setValue_Flt") ) { hx_MaterialParameter_setValue_Flt=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_MaterialParameter_setValue_Int") ) { hx_MaterialParameter_setValue_Int=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"hx_MaterialParameter_setValue_Smplr") ) { hx_MaterialParameter_setValue_Smplr=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"hx_MaterialParameter_setValue_Str_Bool") ) { hx_MaterialParameter_setValue_Str_Bool=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"hx_MaterialParameter_bindValue_Func_Str") ) { hx_MaterialParameter_bindValue_Func_Str=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_MaterialParameter_bindValue_Node_Str") ) { hx_MaterialParameter_bindValue_Node_Str=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_MaterialParameter_setValue_ArrV2_Int") ) { hx_MaterialParameter_setValue_ArrV2_Int=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_MaterialParameter_setValue_ArrV3_Int") ) { hx_MaterialParameter_setValue_ArrV3_Int=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_MaterialParameter_setValue_ArrV4_Int") ) { hx_MaterialParameter_setValue_ArrV4_Int=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"hx_MaterialParameter_setValue_ArrMat_Int") ) { hx_MaterialParameter_setValue_ArrMat_Int=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_MaterialParameter_setValue_ArrFlt_Int") ) { hx_MaterialParameter_setValue_ArrFlt_Int=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_MaterialParameter_setValue_ArrInt_Int") ) { hx_MaterialParameter_setValue_ArrInt_Int=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"hx_MaterialParameter_setValue_ArrSmplr_Int") ) { hx_MaterialParameter_setValue_ArrSmplr_Int=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 46:
		if (HX_FIELD_EQ(inName,"hx_MaterialParameter_getAnimationPropertyValue") ) { hx_MaterialParameter_getAnimationPropertyValue=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_MaterialParameter_setAnimationPropertyValue") ) { hx_MaterialParameter_setAnimationPropertyValue=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 55:
		if (HX_FIELD_EQ(inName,"hx_MaterialParameter_getAnimationPropertyComponentCount") ) { hx_MaterialParameter_getAnimationPropertyComponentCount=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MaterialParameter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("binder"));
	outFields->push(HX_CSTRING("arrayBinder"));
	outFields->push(HX_CSTRING("countBinder"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("ANIMATE_UNIFORM"),
	HX_CSTRING("hx_MaterialParameter_bindValue_Func_Str"),
	HX_CSTRING("hx_MaterialParameter_bindValue_Node_Str"),
	HX_CSTRING("hx_MaterialParameter_getAnimationPropertyComponentCount"),
	HX_CSTRING("hx_MaterialParameter_getAnimationPropertyValue"),
	HX_CSTRING("hx_MaterialParameter_getName"),
	HX_CSTRING("hx_MaterialParameter_getSampler"),
	HX_CSTRING("hx_MaterialParameter_setAnimationPropertyValue"),
	HX_CSTRING("hx_MaterialParameter_setValue_Str_Bool"),
	HX_CSTRING("hx_MaterialParameter_setValue_Mat"),
	HX_CSTRING("hx_MaterialParameter_setValue_ArrMat_Int"),
	HX_CSTRING("hx_MaterialParameter_setValue_Smplr"),
	HX_CSTRING("hx_MaterialParameter_setValue_ArrSmplr_Int"),
	HX_CSTRING("hx_MaterialParameter_setValue_V2"),
	HX_CSTRING("hx_MaterialParameter_setValue_ArrV2_Int"),
	HX_CSTRING("hx_MaterialParameter_setValue_V3"),
	HX_CSTRING("hx_MaterialParameter_setValue_ArrV3_Int"),
	HX_CSTRING("hx_MaterialParameter_setValue_V4"),
	HX_CSTRING("hx_MaterialParameter_setValue_ArrV4_Int"),
	HX_CSTRING("hx_MaterialParameter_setValue_ArrFlt_Int"),
	HX_CSTRING("hx_MaterialParameter_setValue_ArrInt_Int"),
	HX_CSTRING("hx_MaterialParameter_setValue_Flt"),
	HX_CSTRING("hx_MaterialParameter_setValue_Int"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::org::gameplay3d::util::FunctionBinder*/ ,(int)offsetof(MaterialParameter_obj,binder),HX_CSTRING("binder")},
	{hx::fsObject /*::org::gameplay3d::util::FunctionBinder*/ ,(int)offsetof(MaterialParameter_obj,arrayBinder),HX_CSTRING("arrayBinder")},
	{hx::fsObject /*::org::gameplay3d::util::FunctionBinder*/ ,(int)offsetof(MaterialParameter_obj,countBinder),HX_CSTRING("countBinder")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("binder"),
	HX_CSTRING("arrayBinder"),
	HX_CSTRING("countBinder"),
	HX_CSTRING("clearBinder"),
	HX_CSTRING("bindValue_Func"),
	HX_CSTRING("bindValue_FuncX2"),
	HX_CSTRING("bindValue_Node_Str"),
	HX_CSTRING("getAnimationPropertyComponentCount"),
	HX_CSTRING("getAnimationPropertyValue"),
	HX_CSTRING("getName"),
	HX_CSTRING("getSampler"),
	HX_CSTRING("setAnimationPropertyValue"),
	HX_CSTRING("setValue_Str_Bool"),
	HX_CSTRING("setValue_Mat"),
	HX_CSTRING("setValue_ArrMat_Int"),
	HX_CSTRING("setValue_Smplr"),
	HX_CSTRING("setValue_ArrSmplr_Int"),
	HX_CSTRING("setValue_V2"),
	HX_CSTRING("setValue_ArrV2_Int"),
	HX_CSTRING("setValue_V3"),
	HX_CSTRING("setValue_ArrV3_Int"),
	HX_CSTRING("setValue_V4"),
	HX_CSTRING("setValue_ArrV4_Int"),
	HX_CSTRING("setValue_ArrFlt_Int"),
	HX_CSTRING("setValue_ArrInt_Int"),
	HX_CSTRING("setValue_Flt"),
	HX_CSTRING("setValue_Int"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MaterialParameter_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MaterialParameter_obj::ANIMATE_UNIFORM,"ANIMATE_UNIFORM");
	HX_MARK_MEMBER_NAME(MaterialParameter_obj::hx_MaterialParameter_bindValue_Func_Str,"hx_MaterialParameter_bindValue_Func_Str");
	HX_MARK_MEMBER_NAME(MaterialParameter_obj::hx_MaterialParameter_bindValue_Node_Str,"hx_MaterialParameter_bindValue_Node_Str");
	HX_MARK_MEMBER_NAME(MaterialParameter_obj::hx_MaterialParameter_getAnimationPropertyComponentCount,"hx_MaterialParameter_getAnimationPropertyComponentCount");
	HX_MARK_MEMBER_NAME(MaterialParameter_obj::hx_MaterialParameter_getAnimationPropertyValue,"hx_MaterialParameter_getAnimationPropertyValue");
	HX_MARK_MEMBER_NAME(MaterialParameter_obj::hx_MaterialParameter_getName,"hx_MaterialParameter_getName");
	HX_MARK_MEMBER_NAME(MaterialParameter_obj::hx_MaterialParameter_getSampler,"hx_MaterialParameter_getSampler");
	HX_MARK_MEMBER_NAME(MaterialParameter_obj::hx_MaterialParameter_setAnimationPropertyValue,"hx_MaterialParameter_setAnimationPropertyValue");
	HX_MARK_MEMBER_NAME(MaterialParameter_obj::hx_MaterialParameter_setValue_Str_Bool,"hx_MaterialParameter_setValue_Str_Bool");
	HX_MARK_MEMBER_NAME(MaterialParameter_obj::hx_MaterialParameter_setValue_Mat,"hx_MaterialParameter_setValue_Mat");
	HX_MARK_MEMBER_NAME(MaterialParameter_obj::hx_MaterialParameter_setValue_ArrMat_Int,"hx_MaterialParameter_setValue_ArrMat_Int");
	HX_MARK_MEMBER_NAME(MaterialParameter_obj::hx_MaterialParameter_setValue_Smplr,"hx_MaterialParameter_setValue_Smplr");
	HX_MARK_MEMBER_NAME(MaterialParameter_obj::hx_MaterialParameter_setValue_ArrSmplr_Int,"hx_MaterialParameter_setValue_ArrSmplr_Int");
	HX_MARK_MEMBER_NAME(MaterialParameter_obj::hx_MaterialParameter_setValue_V2,"hx_MaterialParameter_setValue_V2");
	HX_MARK_MEMBER_NAME(MaterialParameter_obj::hx_MaterialParameter_setValue_ArrV2_Int,"hx_MaterialParameter_setValue_ArrV2_Int");
	HX_MARK_MEMBER_NAME(MaterialParameter_obj::hx_MaterialParameter_setValue_V3,"hx_MaterialParameter_setValue_V3");
	HX_MARK_MEMBER_NAME(MaterialParameter_obj::hx_MaterialParameter_setValue_ArrV3_Int,"hx_MaterialParameter_setValue_ArrV3_Int");
	HX_MARK_MEMBER_NAME(MaterialParameter_obj::hx_MaterialParameter_setValue_V4,"hx_MaterialParameter_setValue_V4");
	HX_MARK_MEMBER_NAME(MaterialParameter_obj::hx_MaterialParameter_setValue_ArrV4_Int,"hx_MaterialParameter_setValue_ArrV4_Int");
	HX_MARK_MEMBER_NAME(MaterialParameter_obj::hx_MaterialParameter_setValue_ArrFlt_Int,"hx_MaterialParameter_setValue_ArrFlt_Int");
	HX_MARK_MEMBER_NAME(MaterialParameter_obj::hx_MaterialParameter_setValue_ArrInt_Int,"hx_MaterialParameter_setValue_ArrInt_Int");
	HX_MARK_MEMBER_NAME(MaterialParameter_obj::hx_MaterialParameter_setValue_Flt,"hx_MaterialParameter_setValue_Flt");
	HX_MARK_MEMBER_NAME(MaterialParameter_obj::hx_MaterialParameter_setValue_Int,"hx_MaterialParameter_setValue_Int");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MaterialParameter_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MaterialParameter_obj::ANIMATE_UNIFORM,"ANIMATE_UNIFORM");
	HX_VISIT_MEMBER_NAME(MaterialParameter_obj::hx_MaterialParameter_bindValue_Func_Str,"hx_MaterialParameter_bindValue_Func_Str");
	HX_VISIT_MEMBER_NAME(MaterialParameter_obj::hx_MaterialParameter_bindValue_Node_Str,"hx_MaterialParameter_bindValue_Node_Str");
	HX_VISIT_MEMBER_NAME(MaterialParameter_obj::hx_MaterialParameter_getAnimationPropertyComponentCount,"hx_MaterialParameter_getAnimationPropertyComponentCount");
	HX_VISIT_MEMBER_NAME(MaterialParameter_obj::hx_MaterialParameter_getAnimationPropertyValue,"hx_MaterialParameter_getAnimationPropertyValue");
	HX_VISIT_MEMBER_NAME(MaterialParameter_obj::hx_MaterialParameter_getName,"hx_MaterialParameter_getName");
	HX_VISIT_MEMBER_NAME(MaterialParameter_obj::hx_MaterialParameter_getSampler,"hx_MaterialParameter_getSampler");
	HX_VISIT_MEMBER_NAME(MaterialParameter_obj::hx_MaterialParameter_setAnimationPropertyValue,"hx_MaterialParameter_setAnimationPropertyValue");
	HX_VISIT_MEMBER_NAME(MaterialParameter_obj::hx_MaterialParameter_setValue_Str_Bool,"hx_MaterialParameter_setValue_Str_Bool");
	HX_VISIT_MEMBER_NAME(MaterialParameter_obj::hx_MaterialParameter_setValue_Mat,"hx_MaterialParameter_setValue_Mat");
	HX_VISIT_MEMBER_NAME(MaterialParameter_obj::hx_MaterialParameter_setValue_ArrMat_Int,"hx_MaterialParameter_setValue_ArrMat_Int");
	HX_VISIT_MEMBER_NAME(MaterialParameter_obj::hx_MaterialParameter_setValue_Smplr,"hx_MaterialParameter_setValue_Smplr");
	HX_VISIT_MEMBER_NAME(MaterialParameter_obj::hx_MaterialParameter_setValue_ArrSmplr_Int,"hx_MaterialParameter_setValue_ArrSmplr_Int");
	HX_VISIT_MEMBER_NAME(MaterialParameter_obj::hx_MaterialParameter_setValue_V2,"hx_MaterialParameter_setValue_V2");
	HX_VISIT_MEMBER_NAME(MaterialParameter_obj::hx_MaterialParameter_setValue_ArrV2_Int,"hx_MaterialParameter_setValue_ArrV2_Int");
	HX_VISIT_MEMBER_NAME(MaterialParameter_obj::hx_MaterialParameter_setValue_V3,"hx_MaterialParameter_setValue_V3");
	HX_VISIT_MEMBER_NAME(MaterialParameter_obj::hx_MaterialParameter_setValue_ArrV3_Int,"hx_MaterialParameter_setValue_ArrV3_Int");
	HX_VISIT_MEMBER_NAME(MaterialParameter_obj::hx_MaterialParameter_setValue_V4,"hx_MaterialParameter_setValue_V4");
	HX_VISIT_MEMBER_NAME(MaterialParameter_obj::hx_MaterialParameter_setValue_ArrV4_Int,"hx_MaterialParameter_setValue_ArrV4_Int");
	HX_VISIT_MEMBER_NAME(MaterialParameter_obj::hx_MaterialParameter_setValue_ArrFlt_Int,"hx_MaterialParameter_setValue_ArrFlt_Int");
	HX_VISIT_MEMBER_NAME(MaterialParameter_obj::hx_MaterialParameter_setValue_ArrInt_Int,"hx_MaterialParameter_setValue_ArrInt_Int");
	HX_VISIT_MEMBER_NAME(MaterialParameter_obj::hx_MaterialParameter_setValue_Flt,"hx_MaterialParameter_setValue_Flt");
	HX_VISIT_MEMBER_NAME(MaterialParameter_obj::hx_MaterialParameter_setValue_Int,"hx_MaterialParameter_setValue_Int");
};

#endif

Class MaterialParameter_obj::__mClass;

void MaterialParameter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.MaterialParameter"), hx::TCanCast< MaterialParameter_obj> ,sStaticFields,sMemberFields,
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

void MaterialParameter_obj::__boot()
{
	ANIMATE_UNIFORM= (int)1;
	hx_MaterialParameter_bindValue_Func_Str= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::MaterialParameter >(),HX_CSTRING("bindValue_Func_Str"),(int)3);
	hx_MaterialParameter_bindValue_Node_Str= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::MaterialParameter >(),HX_CSTRING("bindValue_Node_Str"),(int)3);
	hx_MaterialParameter_getAnimationPropertyComponentCount= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::MaterialParameter >(),HX_CSTRING("getAnimationPropertyComponentCount"),(int)2);
	hx_MaterialParameter_getAnimationPropertyValue= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::MaterialParameter >(),HX_CSTRING("getAnimationPropertyValue"),(int)3);
	hx_MaterialParameter_getName= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::MaterialParameter >(),HX_CSTRING("getName"),(int)1);
	hx_MaterialParameter_getSampler= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::MaterialParameter >(),HX_CSTRING("getSampler"),(int)2);
	hx_MaterialParameter_setAnimationPropertyValue= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::MaterialParameter >(),HX_CSTRING("setAnimationPropertyValue"),(int)4);
	hx_MaterialParameter_setValue_Str_Bool= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::MaterialParameter >(),HX_CSTRING("setValue_Str_Bool"),(int)3);
	hx_MaterialParameter_setValue_Mat= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::MaterialParameter >(),HX_CSTRING("setValue_Mat"),(int)2);
	hx_MaterialParameter_setValue_ArrMat_Int= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::MaterialParameter >(),HX_CSTRING("setValue_ArrMat_Int"),(int)3);
	hx_MaterialParameter_setValue_Smplr= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::MaterialParameter >(),HX_CSTRING("setValue_Smplr"),(int)2);
	hx_MaterialParameter_setValue_ArrSmplr_Int= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::MaterialParameter >(),HX_CSTRING("setValue_ArrSmplr_Int"),(int)3);
	hx_MaterialParameter_setValue_V2= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::MaterialParameter >(),HX_CSTRING("setValue_V2"),(int)2);
	hx_MaterialParameter_setValue_ArrV2_Int= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::MaterialParameter >(),HX_CSTRING("setValue_ArrV2_Int"),(int)3);
	hx_MaterialParameter_setValue_V3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::MaterialParameter >(),HX_CSTRING("setValue_V3"),(int)2);
	hx_MaterialParameter_setValue_ArrV3_Int= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::MaterialParameter >(),HX_CSTRING("setValue_ArrV3_Int"),(int)3);
	hx_MaterialParameter_setValue_V4= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::MaterialParameter >(),HX_CSTRING("setValue_V4"),(int)2);
	hx_MaterialParameter_setValue_ArrV4_Int= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::MaterialParameter >(),HX_CSTRING("setValue_ArrV4_Int"),(int)3);
	hx_MaterialParameter_setValue_ArrFlt_Int= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::MaterialParameter >(),HX_CSTRING("setValue_ArrFlt_Int"),(int)3);
	hx_MaterialParameter_setValue_ArrInt_Int= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::MaterialParameter >(),HX_CSTRING("setValue_ArrInt_Int"),(int)3);
	hx_MaterialParameter_setValue_Flt= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::MaterialParameter >(),HX_CSTRING("setValue_Flt"),(int)2);
	hx_MaterialParameter_setValue_Int= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::MaterialParameter >(),HX_CSTRING("setValue_Int"),(int)2);
}

} // end namespace org
} // end namespace gameplay3d
