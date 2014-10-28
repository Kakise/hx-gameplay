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
#ifndef INCLUDED_org_gameplay3d_Effect
#include <org/gameplay3d/Effect.h>
#endif
#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Matrix
#include <org/gameplay3d/Matrix.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Ref
#include <org/gameplay3d/Ref.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Texture_Sampler
#include <org/gameplay3d/Texture_Sampler.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Uniform
#include <org/gameplay3d/Uniform.h>
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
#ifndef INCLUDED_org_gameplay3d_util_Handle
#include <org/gameplay3d/util/Handle.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_NativeInterface
#include <org/gameplay3d/util/NativeInterface.h>
#endif
namespace org{
namespace gameplay3d{

Void Effect_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.Effect","new",0xbf0d5ff0,"org.gameplay3d.Effect.new","org/gameplay3d/Effect.hx",15,0x58fccbe0)
HX_STACK_THIS(this)
HX_STACK_ARG(nativeObjectInitializer,"nativeObjectInitializer")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(15)
	super::__construct(nativeObjectInitializer,nativeObjectInitializerParams);
}
;
	return null();
}

//Effect_obj::~Effect_obj() { }

Dynamic Effect_obj::__CreateEmpty() { return  new Effect_obj; }
hx::ObjectPtr< Effect_obj > Effect_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< Effect_obj > result = new Effect_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic Effect_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Effect_obj > result = new Effect_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *Effect_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::intern::INativeBinding_obj)) return operator ::org::gameplay3d::intern::INativeBinding_obj *();
	if (inType==typeid( ::org::gameplay3d::Ref_obj)) return operator ::org::gameplay3d::Ref_obj *();
	return super::__ToInterface(inType);
}

Void Effect_obj::bind( ){
{
		HX_STACK_FRAME("org.gameplay3d.Effect","bind",0x64bb042d,"org.gameplay3d.Effect.bind","org/gameplay3d/Effect.hx",24,0x58fccbe0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(24)
		::org::gameplay3d::Effect_obj::hx_Effect_bind(this->nativeObject);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Effect_obj,bind,(void))

::String Effect_obj::getId( ){
	HX_STACK_FRAME("org.gameplay3d.Effect","getId",0x9d4925a1,"org.gameplay3d.Effect.getId","org/gameplay3d/Effect.hx",48,0x58fccbe0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(48)
	return ::org::gameplay3d::Effect_obj::hx_Effect_getId(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Effect_obj,getId,return )

::org::gameplay3d::Uniform Effect_obj::getUniform_Str( ::String name){
	HX_STACK_FRAME("org.gameplay3d.Effect","getUniform_Str",0x1e685e40,"org.gameplay3d.Effect.getUniform_Str","org/gameplay3d/Effect.hx",54,0x58fccbe0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(54)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Uniform >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(54)
	Dynamic nativeObject = ::org::gameplay3d::Effect_obj::hx_Effect_getUniform_Str(this->nativeObject,name);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(54)
	if (((nativeObject == null()))){
		HX_STACK_LINE(54)
		return null();
	}
	else{
		HX_STACK_LINE(54)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(54)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(54)
			::org::gameplay3d::Uniform result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(54)
			if (((result == null()))){
				HX_STACK_LINE(54)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(54)
				::org::gameplay3d::Uniform _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(54)
				result = _g;
				HX_STACK_LINE(54)
				ref->set(result);
			}
			HX_STACK_LINE(54)
			return result;
		}
		else{
			HX_STACK_LINE(54)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(54)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(54)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Effect_obj,getUniform_Str,return )

::org::gameplay3d::Uniform Effect_obj::getUniform_Int( int index){
	HX_STACK_FRAME("org.gameplay3d.Effect","getUniform_Int",0x1e60c27e,"org.gameplay3d.Effect.getUniform_Int","org/gameplay3d/Effect.hx",60,0x58fccbe0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(60)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Uniform >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(60)
	Dynamic nativeObject = ::org::gameplay3d::Effect_obj::hx_Effect_getUniform_Int(this->nativeObject,index);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(60)
	if (((nativeObject == null()))){
		HX_STACK_LINE(60)
		return null();
	}
	else{
		HX_STACK_LINE(60)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(60)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(60)
			::org::gameplay3d::Uniform result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(60)
			if (((result == null()))){
				HX_STACK_LINE(60)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(60)
				::org::gameplay3d::Uniform _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(60)
				result = _g;
				HX_STACK_LINE(60)
				ref->set(result);
			}
			HX_STACK_LINE(60)
			return result;
		}
		else{
			HX_STACK_LINE(60)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(60)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(60)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Effect_obj,getUniform_Int,return )

int Effect_obj::getUniformCount( ){
	HX_STACK_FRAME("org.gameplay3d.Effect","getUniformCount",0x70349441,"org.gameplay3d.Effect.getUniformCount","org/gameplay3d/Effect.hx",66,0x58fccbe0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(66)
	return ::org::gameplay3d::Effect_obj::hx_Effect_getUniformCount(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Effect_obj,getUniformCount,return )

::org::gameplay3d::util::Handle Effect_obj::getVertexAttribute( ::String name){
	HX_STACK_FRAME("org.gameplay3d.Effect","getVertexAttribute",0x4a7afa92,"org.gameplay3d.Effect.getVertexAttribute","org/gameplay3d/Effect.hx",72,0x58fccbe0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(72)
	Dynamic nativeObject = ::org::gameplay3d::Effect_obj::hx_Effect_getVertexAttribute(this->nativeObject,name);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(72)
		return null();
	}
	else{
		HX_STACK_LINE(72)
		return ::org::gameplay3d::util::Handle_obj::__new(nativeObject);
	}
	HX_STACK_LINE(72)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Effect_obj,getVertexAttribute,return )

Void Effect_obj::setValue_Unif_Mat( ::org::gameplay3d::Uniform uniform,::org::gameplay3d::immutable::IMatrix value){
{
		HX_STACK_FRAME("org.gameplay3d.Effect","setValue_Unif_Mat",0x64acb5b7,"org.gameplay3d.Effect.setValue_Unif_Mat","org/gameplay3d/Effect.hx",78,0x58fccbe0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(uniform,"uniform")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(78)
		::org::gameplay3d::Effect_obj::hx_Effect_setValue_Unif_Mat(this->nativeObject,(  (((uniform == null()))) ? Dynamic(null()) : Dynamic(uniform->nativeObject) ),(  (((value == null()))) ? Dynamic(null()) : Dynamic(value->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Effect_obj,setValue_Unif_Mat,(void))

Void Effect_obj::setValue_Unif_ArrMat_Int( ::org::gameplay3d::Uniform uniform,Array< ::Dynamic > values,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
	HX_STACK_FRAME("org.gameplay3d.Effect","setValue_Unif_ArrMat_Int",0x36ca01d8,"org.gameplay3d.Effect.setValue_Unif_ArrMat_Int","org/gameplay3d/Effect.hx",83,0x58fccbe0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(uniform,"uniform")
	HX_STACK_ARG(values,"values")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(84)
		Dynamic _g = ::org::gameplay3d::intern::ConversionTools_obj::insertArray(values);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(84)
		::org::gameplay3d::Effect_obj::hx_Effect_setValue_Unif_ArrMat_Int(this->nativeObject,(  (((uniform == null()))) ? Dynamic(null()) : Dynamic(uniform->nativeObject) ),_g,count);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Effect_obj,setValue_Unif_ArrMat_Int,(void))

Void Effect_obj::setValue_Unif_Smplr( ::org::gameplay3d::Uniform uniform,::org::gameplay3d::Texture_Sampler sampler){
{
		HX_STACK_FRAME("org.gameplay3d.Effect","setValue_Unif_Smplr",0xede23173,"org.gameplay3d.Effect.setValue_Unif_Smplr","org/gameplay3d/Effect.hx",90,0x58fccbe0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(uniform,"uniform")
		HX_STACK_ARG(sampler,"sampler")
		HX_STACK_LINE(90)
		::org::gameplay3d::Effect_obj::hx_Effect_setValue_Unif_Smplr(this->nativeObject,(  (((uniform == null()))) ? Dynamic(null()) : Dynamic(uniform->nativeObject) ),(  (((sampler == null()))) ? Dynamic(null()) : Dynamic(sampler->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Effect_obj,setValue_Unif_Smplr,(void))

Void Effect_obj::setValue( ::org::gameplay3d::Uniform uniform,Array< ::Dynamic > values,int count){
{
		HX_STACK_FRAME("org.gameplay3d.Effect","setValue",0x1e90eedf,"org.gameplay3d.Effect.setValue","org/gameplay3d/Effect.hx",95,0x58fccbe0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(uniform,"uniform")
		HX_STACK_ARG(values,"values")
		HX_STACK_ARG(count,"count")
		HX_STACK_LINE(96)
		Dynamic _g = ::org::gameplay3d::intern::ConversionTools_obj::insertArray(values);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(96)
		::org::gameplay3d::Effect_obj::hx_Effect_setValue_Unif_ArrSmplr_Int(this->nativeObject,(  (((uniform == null()))) ? Dynamic(null()) : Dynamic(uniform->nativeObject) ),_g,count);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Effect_obj,setValue,(void))

Void Effect_obj::setValue_Unif_V2( ::org::gameplay3d::Uniform uniform,::org::gameplay3d::immutable::IVector2 value){
{
		HX_STACK_FRAME("org.gameplay3d.Effect","setValue_Unif_V2",0x1adaebc5,"org.gameplay3d.Effect.setValue_Unif_V2","org/gameplay3d/Effect.hx",102,0x58fccbe0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(uniform,"uniform")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(102)
		::org::gameplay3d::Effect_obj::hx_Effect_setValue_Unif_V2(this->nativeObject,(  (((uniform == null()))) ? Dynamic(null()) : Dynamic(uniform->nativeObject) ),(  (((value == null()))) ? Dynamic(null()) : Dynamic(value->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Effect_obj,setValue_Unif_V2,(void))

Void Effect_obj::setValue_Unif_ArrV2_Int( ::org::gameplay3d::Uniform uniform,Array< ::Dynamic > values,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
	HX_STACK_FRAME("org.gameplay3d.Effect","setValue_Unif_ArrV2_Int",0x96152664,"org.gameplay3d.Effect.setValue_Unif_ArrV2_Int","org/gameplay3d/Effect.hx",107,0x58fccbe0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(uniform,"uniform")
	HX_STACK_ARG(values,"values")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(108)
		Dynamic _g = ::org::gameplay3d::intern::ConversionTools_obj::insertArray(values);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(108)
		::org::gameplay3d::Effect_obj::hx_Effect_setValue_Unif_ArrV2_Int(this->nativeObject,(  (((uniform == null()))) ? Dynamic(null()) : Dynamic(uniform->nativeObject) ),_g,count);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Effect_obj,setValue_Unif_ArrV2_Int,(void))

Void Effect_obj::setValue_Unif_V3( ::org::gameplay3d::Uniform uniform,::org::gameplay3d::immutable::IVector3 value){
{
		HX_STACK_FRAME("org.gameplay3d.Effect","setValue_Unif_V3",0x1adaebc6,"org.gameplay3d.Effect.setValue_Unif_V3","org/gameplay3d/Effect.hx",114,0x58fccbe0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(uniform,"uniform")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(114)
		::org::gameplay3d::Effect_obj::hx_Effect_setValue_Unif_V3(this->nativeObject,(  (((uniform == null()))) ? Dynamic(null()) : Dynamic(uniform->nativeObject) ),(  (((value == null()))) ? Dynamic(null()) : Dynamic(value->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Effect_obj,setValue_Unif_V3,(void))

Void Effect_obj::setValue_Unif_ArrV3_Int( ::org::gameplay3d::Uniform uniform,Array< ::Dynamic > values,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
	HX_STACK_FRAME("org.gameplay3d.Effect","setValue_Unif_ArrV3_Int",0x297bbae5,"org.gameplay3d.Effect.setValue_Unif_ArrV3_Int","org/gameplay3d/Effect.hx",119,0x58fccbe0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(uniform,"uniform")
	HX_STACK_ARG(values,"values")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(120)
		Dynamic _g = ::org::gameplay3d::intern::ConversionTools_obj::insertArray(values);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(120)
		::org::gameplay3d::Effect_obj::hx_Effect_setValue_Unif_ArrV3_Int(this->nativeObject,(  (((uniform == null()))) ? Dynamic(null()) : Dynamic(uniform->nativeObject) ),_g,count);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Effect_obj,setValue_Unif_ArrV3_Int,(void))

Void Effect_obj::setValue_Unif_V4( ::org::gameplay3d::Uniform uniform,::org::gameplay3d::immutable::IVector4 value){
{
		HX_STACK_FRAME("org.gameplay3d.Effect","setValue_Unif_V4",0x1adaebc7,"org.gameplay3d.Effect.setValue_Unif_V4","org/gameplay3d/Effect.hx",126,0x58fccbe0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(uniform,"uniform")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(126)
		::org::gameplay3d::Effect_obj::hx_Effect_setValue_Unif_V4(this->nativeObject,(  (((uniform == null()))) ? Dynamic(null()) : Dynamic(uniform->nativeObject) ),(  (((value == null()))) ? Dynamic(null()) : Dynamic(value->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Effect_obj,setValue_Unif_V4,(void))

Void Effect_obj::setValue_Unif_ArrV4_Int( ::org::gameplay3d::Uniform uniform,Array< ::Dynamic > values,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
	HX_STACK_FRAME("org.gameplay3d.Effect","setValue_Unif_ArrV4_Int",0xbce24f66,"org.gameplay3d.Effect.setValue_Unif_ArrV4_Int","org/gameplay3d/Effect.hx",131,0x58fccbe0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(uniform,"uniform")
	HX_STACK_ARG(values,"values")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(132)
		Dynamic _g = ::org::gameplay3d::intern::ConversionTools_obj::insertArray(values);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(132)
		::org::gameplay3d::Effect_obj::hx_Effect_setValue_Unif_ArrV4_Int(this->nativeObject,(  (((uniform == null()))) ? Dynamic(null()) : Dynamic(uniform->nativeObject) ),_g,count);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Effect_obj,setValue_Unif_ArrV4_Int,(void))

Void Effect_obj::setValue_Unif_ArrFlt_Int( ::org::gameplay3d::Uniform uniform,Array< Float > values,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
	HX_STACK_FRAME("org.gameplay3d.Effect","setValue_Unif_ArrFlt_Int",0x79a0baa6,"org.gameplay3d.Effect.setValue_Unif_ArrFlt_Int","org/gameplay3d/Effect.hx",138,0x58fccbe0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(uniform,"uniform")
	HX_STACK_ARG(values,"values")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(138)
		::org::gameplay3d::Effect_obj::hx_Effect_setValue_Unif_ArrFlt_Int(this->nativeObject,(  (((uniform == null()))) ? Dynamic(null()) : Dynamic(uniform->nativeObject) ),values,count);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Effect_obj,setValue_Unif_ArrFlt_Int,(void))

Void Effect_obj::setValue_Unif_ArrInt_Int( ::org::gameplay3d::Uniform uniform,Array< int > values,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
	HX_STACK_FRAME("org.gameplay3d.Effect","setValue_Unif_ArrInt_Int",0xc317d7a7,"org.gameplay3d.Effect.setValue_Unif_ArrInt_Int","org/gameplay3d/Effect.hx",144,0x58fccbe0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(uniform,"uniform")
	HX_STACK_ARG(values,"values")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(144)
		::org::gameplay3d::Effect_obj::hx_Effect_setValue_Unif_ArrInt_Int(this->nativeObject,(  (((uniform == null()))) ? Dynamic(null()) : Dynamic(uniform->nativeObject) ),values,count);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Effect_obj,setValue_Unif_ArrInt_Int,(void))

Void Effect_obj::setValue_Unif_Flt( ::org::gameplay3d::Uniform uniform,Float value){
{
		HX_STACK_FRAME("org.gameplay3d.Effect","setValue_Unif_Flt",0x64a76f85,"org.gameplay3d.Effect.setValue_Unif_Flt","org/gameplay3d/Effect.hx",150,0x58fccbe0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(uniform,"uniform")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(150)
		::org::gameplay3d::Effect_obj::hx_Effect_setValue_Unif_Flt(this->nativeObject,(  (((uniform == null()))) ? Dynamic(null()) : Dynamic(uniform->nativeObject) ),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Effect_obj,setValue_Unif_Flt,(void))

Void Effect_obj::setValue_Unif_Int( ::org::gameplay3d::Uniform uniform,int value){
{
		HX_STACK_FRAME("org.gameplay3d.Effect","setValue_Unif_Int",0x64a9b806,"org.gameplay3d.Effect.setValue_Unif_Int","org/gameplay3d/Effect.hx",156,0x58fccbe0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(uniform,"uniform")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(156)
		::org::gameplay3d::Effect_obj::hx_Effect_setValue_Unif_Int(this->nativeObject,(  (((uniform == null()))) ? Dynamic(null()) : Dynamic(uniform->nativeObject) ),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Effect_obj,setValue_Unif_Int,(void))

::org::gameplay3d::Effect Effect_obj::createFromFile( ::String vshPath,::String fshPath,::String defines){
	HX_STACK_FRAME("org.gameplay3d.Effect","createFromFile",0x17929692,"org.gameplay3d.Effect.createFromFile","org/gameplay3d/Effect.hx",30,0x58fccbe0)
	HX_STACK_ARG(vshPath,"vshPath")
	HX_STACK_ARG(fshPath,"fshPath")
	HX_STACK_ARG(defines,"defines")
	HX_STACK_LINE(30)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Effect >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(30)
	Dynamic nativeObject = ::org::gameplay3d::Effect_obj::hx_Effect_static_createFromFile(vshPath,fshPath,defines);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(30)
	if (((nativeObject == null()))){
		HX_STACK_LINE(30)
		return null();
	}
	else{
		HX_STACK_LINE(30)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(30)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(30)
			::org::gameplay3d::Effect result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(30)
			if (((result == null()))){
				HX_STACK_LINE(30)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(30)
				::org::gameplay3d::Effect _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(30)
				result = _g;
				HX_STACK_LINE(30)
				ref->set(result);
			}
			HX_STACK_LINE(30)
			return result;
		}
		else{
			HX_STACK_LINE(30)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(30)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(30)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Effect_obj,createFromFile,return )

::org::gameplay3d::Effect Effect_obj::createFromSource( ::String vshSource,::String fshSource,::String defines){
	HX_STACK_FRAME("org.gameplay3d.Effect","createFromSource",0xbf5b2a71,"org.gameplay3d.Effect.createFromSource","org/gameplay3d/Effect.hx",36,0x58fccbe0)
	HX_STACK_ARG(vshSource,"vshSource")
	HX_STACK_ARG(fshSource,"fshSource")
	HX_STACK_ARG(defines,"defines")
	HX_STACK_LINE(36)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Effect >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(36)
	Dynamic nativeObject = ::org::gameplay3d::Effect_obj::hx_Effect_static_createFromSource(vshSource,fshSource,defines);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(36)
	if (((nativeObject == null()))){
		HX_STACK_LINE(36)
		return null();
	}
	else{
		HX_STACK_LINE(36)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(36)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(36)
			::org::gameplay3d::Effect result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(36)
			if (((result == null()))){
				HX_STACK_LINE(36)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(36)
				::org::gameplay3d::Effect _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(36)
				result = _g;
				HX_STACK_LINE(36)
				ref->set(result);
			}
			HX_STACK_LINE(36)
			return result;
		}
		else{
			HX_STACK_LINE(36)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(36)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(36)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Effect_obj,createFromSource,return )

::org::gameplay3d::Effect Effect_obj::getCurrentEffect( ){
	HX_STACK_FRAME("org.gameplay3d.Effect","getCurrentEffect",0xc2d87ba4,"org.gameplay3d.Effect.getCurrentEffect","org/gameplay3d/Effect.hx",42,0x58fccbe0)
	HX_STACK_LINE(42)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Effect >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(42)
	Dynamic nativeObject = ::org::gameplay3d::Effect_obj::hx_Effect_static_getCurrentEffect();		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(42)
	if (((nativeObject == null()))){
		HX_STACK_LINE(42)
		return null();
	}
	else{
		HX_STACK_LINE(42)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(42)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(42)
			::org::gameplay3d::Effect result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(42)
			if (((result == null()))){
				HX_STACK_LINE(42)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(42)
				::org::gameplay3d::Effect _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(42)
				result = _g;
				HX_STACK_LINE(42)
				ref->set(result);
			}
			HX_STACK_LINE(42)
			return result;
		}
		else{
			HX_STACK_LINE(42)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(42)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(42)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Effect_obj,getCurrentEffect,return )

Dynamic Effect_obj::hx_Effect_bind;

Dynamic Effect_obj::hx_Effect_static_createFromFile;

Dynamic Effect_obj::hx_Effect_static_createFromSource;

Dynamic Effect_obj::hx_Effect_static_getCurrentEffect;

Dynamic Effect_obj::hx_Effect_getId;

Dynamic Effect_obj::hx_Effect_getUniform_Str;

Dynamic Effect_obj::hx_Effect_getUniform_Int;

Dynamic Effect_obj::hx_Effect_getUniformCount;

Dynamic Effect_obj::hx_Effect_getVertexAttribute;

Dynamic Effect_obj::hx_Effect_setValue_Unif_Mat;

Dynamic Effect_obj::hx_Effect_setValue_Unif_ArrMat_Int;

Dynamic Effect_obj::hx_Effect_setValue_Unif_Smplr;

Dynamic Effect_obj::hx_Effect_setValue_Unif_ArrSmplr_Int;

Dynamic Effect_obj::hx_Effect_setValue_Unif_V2;

Dynamic Effect_obj::hx_Effect_setValue_Unif_ArrV2_Int;

Dynamic Effect_obj::hx_Effect_setValue_Unif_V3;

Dynamic Effect_obj::hx_Effect_setValue_Unif_ArrV3_Int;

Dynamic Effect_obj::hx_Effect_setValue_Unif_V4;

Dynamic Effect_obj::hx_Effect_setValue_Unif_ArrV4_Int;

Dynamic Effect_obj::hx_Effect_setValue_Unif_ArrFlt_Int;

Dynamic Effect_obj::hx_Effect_setValue_Unif_ArrInt_Int;

Dynamic Effect_obj::hx_Effect_setValue_Unif_Flt;

Dynamic Effect_obj::hx_Effect_setValue_Unif_Int;


Effect_obj::Effect_obj()
{
}

Dynamic Effect_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bind") ) { return bind_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"getId") ) { return getId_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setValue") ) { return setValue_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createFromFile") ) { return createFromFile_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Effect_bind") ) { return hx_Effect_bind; }
		if (HX_FIELD_EQ(inName,"getUniform_Str") ) { return getUniform_Str_dyn(); }
		if (HX_FIELD_EQ(inName,"getUniform_Int") ) { return getUniform_Int_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hx_Effect_getId") ) { return hx_Effect_getId; }
		if (HX_FIELD_EQ(inName,"getUniformCount") ) { return getUniformCount_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createFromSource") ) { return createFromSource_dyn(); }
		if (HX_FIELD_EQ(inName,"getCurrentEffect") ) { return getCurrentEffect_dyn(); }
		if (HX_FIELD_EQ(inName,"setValue_Unif_V2") ) { return setValue_Unif_V2_dyn(); }
		if (HX_FIELD_EQ(inName,"setValue_Unif_V3") ) { return setValue_Unif_V3_dyn(); }
		if (HX_FIELD_EQ(inName,"setValue_Unif_V4") ) { return setValue_Unif_V4_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"setValue_Unif_Mat") ) { return setValue_Unif_Mat_dyn(); }
		if (HX_FIELD_EQ(inName,"setValue_Unif_Flt") ) { return setValue_Unif_Flt_dyn(); }
		if (HX_FIELD_EQ(inName,"setValue_Unif_Int") ) { return setValue_Unif_Int_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getVertexAttribute") ) { return getVertexAttribute_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"setValue_Unif_Smplr") ) { return setValue_Unif_Smplr_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"setValue_Unif_ArrV2_Int") ) { return setValue_Unif_ArrV2_Int_dyn(); }
		if (HX_FIELD_EQ(inName,"setValue_Unif_ArrV3_Int") ) { return setValue_Unif_ArrV3_Int_dyn(); }
		if (HX_FIELD_EQ(inName,"setValue_Unif_ArrV4_Int") ) { return setValue_Unif_ArrV4_Int_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_Effect_getUniform_Str") ) { return hx_Effect_getUniform_Str; }
		if (HX_FIELD_EQ(inName,"hx_Effect_getUniform_Int") ) { return hx_Effect_getUniform_Int; }
		if (HX_FIELD_EQ(inName,"setValue_Unif_ArrMat_Int") ) { return setValue_Unif_ArrMat_Int_dyn(); }
		if (HX_FIELD_EQ(inName,"setValue_Unif_ArrFlt_Int") ) { return setValue_Unif_ArrFlt_Int_dyn(); }
		if (HX_FIELD_EQ(inName,"setValue_Unif_ArrInt_Int") ) { return setValue_Unif_ArrInt_Int_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_Effect_getUniformCount") ) { return hx_Effect_getUniformCount; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_Effect_setValue_Unif_V2") ) { return hx_Effect_setValue_Unif_V2; }
		if (HX_FIELD_EQ(inName,"hx_Effect_setValue_Unif_V3") ) { return hx_Effect_setValue_Unif_V3; }
		if (HX_FIELD_EQ(inName,"hx_Effect_setValue_Unif_V4") ) { return hx_Effect_setValue_Unif_V4; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"hx_Effect_setValue_Unif_Mat") ) { return hx_Effect_setValue_Unif_Mat; }
		if (HX_FIELD_EQ(inName,"hx_Effect_setValue_Unif_Flt") ) { return hx_Effect_setValue_Unif_Flt; }
		if (HX_FIELD_EQ(inName,"hx_Effect_setValue_Unif_Int") ) { return hx_Effect_setValue_Unif_Int; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_Effect_getVertexAttribute") ) { return hx_Effect_getVertexAttribute; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_Effect_setValue_Unif_Smplr") ) { return hx_Effect_setValue_Unif_Smplr; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"hx_Effect_static_createFromFile") ) { return hx_Effect_static_createFromFile; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"hx_Effect_static_createFromSource") ) { return hx_Effect_static_createFromSource; }
		if (HX_FIELD_EQ(inName,"hx_Effect_static_getCurrentEffect") ) { return hx_Effect_static_getCurrentEffect; }
		if (HX_FIELD_EQ(inName,"hx_Effect_setValue_Unif_ArrV2_Int") ) { return hx_Effect_setValue_Unif_ArrV2_Int; }
		if (HX_FIELD_EQ(inName,"hx_Effect_setValue_Unif_ArrV3_Int") ) { return hx_Effect_setValue_Unif_ArrV3_Int; }
		if (HX_FIELD_EQ(inName,"hx_Effect_setValue_Unif_ArrV4_Int") ) { return hx_Effect_setValue_Unif_ArrV4_Int; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"hx_Effect_setValue_Unif_ArrMat_Int") ) { return hx_Effect_setValue_Unif_ArrMat_Int; }
		if (HX_FIELD_EQ(inName,"hx_Effect_setValue_Unif_ArrFlt_Int") ) { return hx_Effect_setValue_Unif_ArrFlt_Int; }
		if (HX_FIELD_EQ(inName,"hx_Effect_setValue_Unif_ArrInt_Int") ) { return hx_Effect_setValue_Unif_ArrInt_Int; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"hx_Effect_setValue_Unif_ArrSmplr_Int") ) { return hx_Effect_setValue_Unif_ArrSmplr_Int; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Effect_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"hx_Effect_bind") ) { hx_Effect_bind=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hx_Effect_getId") ) { hx_Effect_getId=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_Effect_getUniform_Str") ) { hx_Effect_getUniform_Str=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Effect_getUniform_Int") ) { hx_Effect_getUniform_Int=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_Effect_getUniformCount") ) { hx_Effect_getUniformCount=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_Effect_setValue_Unif_V2") ) { hx_Effect_setValue_Unif_V2=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Effect_setValue_Unif_V3") ) { hx_Effect_setValue_Unif_V3=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Effect_setValue_Unif_V4") ) { hx_Effect_setValue_Unif_V4=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"hx_Effect_setValue_Unif_Mat") ) { hx_Effect_setValue_Unif_Mat=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Effect_setValue_Unif_Flt") ) { hx_Effect_setValue_Unif_Flt=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Effect_setValue_Unif_Int") ) { hx_Effect_setValue_Unif_Int=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_Effect_getVertexAttribute") ) { hx_Effect_getVertexAttribute=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_Effect_setValue_Unif_Smplr") ) { hx_Effect_setValue_Unif_Smplr=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"hx_Effect_static_createFromFile") ) { hx_Effect_static_createFromFile=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"hx_Effect_static_createFromSource") ) { hx_Effect_static_createFromSource=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Effect_static_getCurrentEffect") ) { hx_Effect_static_getCurrentEffect=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Effect_setValue_Unif_ArrV2_Int") ) { hx_Effect_setValue_Unif_ArrV2_Int=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Effect_setValue_Unif_ArrV3_Int") ) { hx_Effect_setValue_Unif_ArrV3_Int=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Effect_setValue_Unif_ArrV4_Int") ) { hx_Effect_setValue_Unif_ArrV4_Int=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"hx_Effect_setValue_Unif_ArrMat_Int") ) { hx_Effect_setValue_Unif_ArrMat_Int=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Effect_setValue_Unif_ArrFlt_Int") ) { hx_Effect_setValue_Unif_ArrFlt_Int=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Effect_setValue_Unif_ArrInt_Int") ) { hx_Effect_setValue_Unif_ArrInt_Int=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"hx_Effect_setValue_Unif_ArrSmplr_Int") ) { hx_Effect_setValue_Unif_ArrSmplr_Int=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Effect_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("createFromFile"),
	HX_CSTRING("createFromSource"),
	HX_CSTRING("getCurrentEffect"),
	HX_CSTRING("hx_Effect_bind"),
	HX_CSTRING("hx_Effect_static_createFromFile"),
	HX_CSTRING("hx_Effect_static_createFromSource"),
	HX_CSTRING("hx_Effect_static_getCurrentEffect"),
	HX_CSTRING("hx_Effect_getId"),
	HX_CSTRING("hx_Effect_getUniform_Str"),
	HX_CSTRING("hx_Effect_getUniform_Int"),
	HX_CSTRING("hx_Effect_getUniformCount"),
	HX_CSTRING("hx_Effect_getVertexAttribute"),
	HX_CSTRING("hx_Effect_setValue_Unif_Mat"),
	HX_CSTRING("hx_Effect_setValue_Unif_ArrMat_Int"),
	HX_CSTRING("hx_Effect_setValue_Unif_Smplr"),
	HX_CSTRING("hx_Effect_setValue_Unif_ArrSmplr_Int"),
	HX_CSTRING("hx_Effect_setValue_Unif_V2"),
	HX_CSTRING("hx_Effect_setValue_Unif_ArrV2_Int"),
	HX_CSTRING("hx_Effect_setValue_Unif_V3"),
	HX_CSTRING("hx_Effect_setValue_Unif_ArrV3_Int"),
	HX_CSTRING("hx_Effect_setValue_Unif_V4"),
	HX_CSTRING("hx_Effect_setValue_Unif_ArrV4_Int"),
	HX_CSTRING("hx_Effect_setValue_Unif_ArrFlt_Int"),
	HX_CSTRING("hx_Effect_setValue_Unif_ArrInt_Int"),
	HX_CSTRING("hx_Effect_setValue_Unif_Flt"),
	HX_CSTRING("hx_Effect_setValue_Unif_Int"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("bind"),
	HX_CSTRING("getId"),
	HX_CSTRING("getUniform_Str"),
	HX_CSTRING("getUniform_Int"),
	HX_CSTRING("getUniformCount"),
	HX_CSTRING("getVertexAttribute"),
	HX_CSTRING("setValue_Unif_Mat"),
	HX_CSTRING("setValue_Unif_ArrMat_Int"),
	HX_CSTRING("setValue_Unif_Smplr"),
	HX_CSTRING("setValue"),
	HX_CSTRING("setValue_Unif_V2"),
	HX_CSTRING("setValue_Unif_ArrV2_Int"),
	HX_CSTRING("setValue_Unif_V3"),
	HX_CSTRING("setValue_Unif_ArrV3_Int"),
	HX_CSTRING("setValue_Unif_V4"),
	HX_CSTRING("setValue_Unif_ArrV4_Int"),
	HX_CSTRING("setValue_Unif_ArrFlt_Int"),
	HX_CSTRING("setValue_Unif_ArrInt_Int"),
	HX_CSTRING("setValue_Unif_Flt"),
	HX_CSTRING("setValue_Unif_Int"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Effect_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Effect_obj::hx_Effect_bind,"hx_Effect_bind");
	HX_MARK_MEMBER_NAME(Effect_obj::hx_Effect_static_createFromFile,"hx_Effect_static_createFromFile");
	HX_MARK_MEMBER_NAME(Effect_obj::hx_Effect_static_createFromSource,"hx_Effect_static_createFromSource");
	HX_MARK_MEMBER_NAME(Effect_obj::hx_Effect_static_getCurrentEffect,"hx_Effect_static_getCurrentEffect");
	HX_MARK_MEMBER_NAME(Effect_obj::hx_Effect_getId,"hx_Effect_getId");
	HX_MARK_MEMBER_NAME(Effect_obj::hx_Effect_getUniform_Str,"hx_Effect_getUniform_Str");
	HX_MARK_MEMBER_NAME(Effect_obj::hx_Effect_getUniform_Int,"hx_Effect_getUniform_Int");
	HX_MARK_MEMBER_NAME(Effect_obj::hx_Effect_getUniformCount,"hx_Effect_getUniformCount");
	HX_MARK_MEMBER_NAME(Effect_obj::hx_Effect_getVertexAttribute,"hx_Effect_getVertexAttribute");
	HX_MARK_MEMBER_NAME(Effect_obj::hx_Effect_setValue_Unif_Mat,"hx_Effect_setValue_Unif_Mat");
	HX_MARK_MEMBER_NAME(Effect_obj::hx_Effect_setValue_Unif_ArrMat_Int,"hx_Effect_setValue_Unif_ArrMat_Int");
	HX_MARK_MEMBER_NAME(Effect_obj::hx_Effect_setValue_Unif_Smplr,"hx_Effect_setValue_Unif_Smplr");
	HX_MARK_MEMBER_NAME(Effect_obj::hx_Effect_setValue_Unif_ArrSmplr_Int,"hx_Effect_setValue_Unif_ArrSmplr_Int");
	HX_MARK_MEMBER_NAME(Effect_obj::hx_Effect_setValue_Unif_V2,"hx_Effect_setValue_Unif_V2");
	HX_MARK_MEMBER_NAME(Effect_obj::hx_Effect_setValue_Unif_ArrV2_Int,"hx_Effect_setValue_Unif_ArrV2_Int");
	HX_MARK_MEMBER_NAME(Effect_obj::hx_Effect_setValue_Unif_V3,"hx_Effect_setValue_Unif_V3");
	HX_MARK_MEMBER_NAME(Effect_obj::hx_Effect_setValue_Unif_ArrV3_Int,"hx_Effect_setValue_Unif_ArrV3_Int");
	HX_MARK_MEMBER_NAME(Effect_obj::hx_Effect_setValue_Unif_V4,"hx_Effect_setValue_Unif_V4");
	HX_MARK_MEMBER_NAME(Effect_obj::hx_Effect_setValue_Unif_ArrV4_Int,"hx_Effect_setValue_Unif_ArrV4_Int");
	HX_MARK_MEMBER_NAME(Effect_obj::hx_Effect_setValue_Unif_ArrFlt_Int,"hx_Effect_setValue_Unif_ArrFlt_Int");
	HX_MARK_MEMBER_NAME(Effect_obj::hx_Effect_setValue_Unif_ArrInt_Int,"hx_Effect_setValue_Unif_ArrInt_Int");
	HX_MARK_MEMBER_NAME(Effect_obj::hx_Effect_setValue_Unif_Flt,"hx_Effect_setValue_Unif_Flt");
	HX_MARK_MEMBER_NAME(Effect_obj::hx_Effect_setValue_Unif_Int,"hx_Effect_setValue_Unif_Int");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Effect_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Effect_obj::hx_Effect_bind,"hx_Effect_bind");
	HX_VISIT_MEMBER_NAME(Effect_obj::hx_Effect_static_createFromFile,"hx_Effect_static_createFromFile");
	HX_VISIT_MEMBER_NAME(Effect_obj::hx_Effect_static_createFromSource,"hx_Effect_static_createFromSource");
	HX_VISIT_MEMBER_NAME(Effect_obj::hx_Effect_static_getCurrentEffect,"hx_Effect_static_getCurrentEffect");
	HX_VISIT_MEMBER_NAME(Effect_obj::hx_Effect_getId,"hx_Effect_getId");
	HX_VISIT_MEMBER_NAME(Effect_obj::hx_Effect_getUniform_Str,"hx_Effect_getUniform_Str");
	HX_VISIT_MEMBER_NAME(Effect_obj::hx_Effect_getUniform_Int,"hx_Effect_getUniform_Int");
	HX_VISIT_MEMBER_NAME(Effect_obj::hx_Effect_getUniformCount,"hx_Effect_getUniformCount");
	HX_VISIT_MEMBER_NAME(Effect_obj::hx_Effect_getVertexAttribute,"hx_Effect_getVertexAttribute");
	HX_VISIT_MEMBER_NAME(Effect_obj::hx_Effect_setValue_Unif_Mat,"hx_Effect_setValue_Unif_Mat");
	HX_VISIT_MEMBER_NAME(Effect_obj::hx_Effect_setValue_Unif_ArrMat_Int,"hx_Effect_setValue_Unif_ArrMat_Int");
	HX_VISIT_MEMBER_NAME(Effect_obj::hx_Effect_setValue_Unif_Smplr,"hx_Effect_setValue_Unif_Smplr");
	HX_VISIT_MEMBER_NAME(Effect_obj::hx_Effect_setValue_Unif_ArrSmplr_Int,"hx_Effect_setValue_Unif_ArrSmplr_Int");
	HX_VISIT_MEMBER_NAME(Effect_obj::hx_Effect_setValue_Unif_V2,"hx_Effect_setValue_Unif_V2");
	HX_VISIT_MEMBER_NAME(Effect_obj::hx_Effect_setValue_Unif_ArrV2_Int,"hx_Effect_setValue_Unif_ArrV2_Int");
	HX_VISIT_MEMBER_NAME(Effect_obj::hx_Effect_setValue_Unif_V3,"hx_Effect_setValue_Unif_V3");
	HX_VISIT_MEMBER_NAME(Effect_obj::hx_Effect_setValue_Unif_ArrV3_Int,"hx_Effect_setValue_Unif_ArrV3_Int");
	HX_VISIT_MEMBER_NAME(Effect_obj::hx_Effect_setValue_Unif_V4,"hx_Effect_setValue_Unif_V4");
	HX_VISIT_MEMBER_NAME(Effect_obj::hx_Effect_setValue_Unif_ArrV4_Int,"hx_Effect_setValue_Unif_ArrV4_Int");
	HX_VISIT_MEMBER_NAME(Effect_obj::hx_Effect_setValue_Unif_ArrFlt_Int,"hx_Effect_setValue_Unif_ArrFlt_Int");
	HX_VISIT_MEMBER_NAME(Effect_obj::hx_Effect_setValue_Unif_ArrInt_Int,"hx_Effect_setValue_Unif_ArrInt_Int");
	HX_VISIT_MEMBER_NAME(Effect_obj::hx_Effect_setValue_Unif_Flt,"hx_Effect_setValue_Unif_Flt");
	HX_VISIT_MEMBER_NAME(Effect_obj::hx_Effect_setValue_Unif_Int,"hx_Effect_setValue_Unif_Int");
};

#endif

Class Effect_obj::__mClass;

void Effect_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.Effect"), hx::TCanCast< Effect_obj> ,sStaticFields,sMemberFields,
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

void Effect_obj::__boot()
{
	hx_Effect_bind= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Effect >(),HX_CSTRING("bind"),(int)1);
	hx_Effect_static_createFromFile= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Effect >(),HX_CSTRING("static_createFromFile"),(int)3);
	hx_Effect_static_createFromSource= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Effect >(),HX_CSTRING("static_createFromSource"),(int)3);
	hx_Effect_static_getCurrentEffect= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Effect >(),HX_CSTRING("static_getCurrentEffect"),(int)0);
	hx_Effect_getId= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Effect >(),HX_CSTRING("getId"),(int)1);
	hx_Effect_getUniform_Str= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Effect >(),HX_CSTRING("getUniform_Str"),(int)2);
	hx_Effect_getUniform_Int= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Effect >(),HX_CSTRING("getUniform_Int"),(int)2);
	hx_Effect_getUniformCount= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Effect >(),HX_CSTRING("getUniformCount"),(int)1);
	hx_Effect_getVertexAttribute= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Effect >(),HX_CSTRING("getVertexAttribute"),(int)2);
	hx_Effect_setValue_Unif_Mat= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Effect >(),HX_CSTRING("setValue_Unif_Mat"),(int)3);
	hx_Effect_setValue_Unif_ArrMat_Int= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Effect >(),HX_CSTRING("setValue_Unif_ArrMat_Int"),(int)4);
	hx_Effect_setValue_Unif_Smplr= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Effect >(),HX_CSTRING("setValue_Unif_Smplr"),(int)3);
	hx_Effect_setValue_Unif_ArrSmplr_Int= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Effect >(),HX_CSTRING("setValue_Unif_ArrSmplr_Int"),(int)4);
	hx_Effect_setValue_Unif_V2= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Effect >(),HX_CSTRING("setValue_Unif_V2"),(int)3);
	hx_Effect_setValue_Unif_ArrV2_Int= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Effect >(),HX_CSTRING("setValue_Unif_ArrV2_Int"),(int)4);
	hx_Effect_setValue_Unif_V3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Effect >(),HX_CSTRING("setValue_Unif_V3"),(int)3);
	hx_Effect_setValue_Unif_ArrV3_Int= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Effect >(),HX_CSTRING("setValue_Unif_ArrV3_Int"),(int)4);
	hx_Effect_setValue_Unif_V4= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Effect >(),HX_CSTRING("setValue_Unif_V4"),(int)3);
	hx_Effect_setValue_Unif_ArrV4_Int= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Effect >(),HX_CSTRING("setValue_Unif_ArrV4_Int"),(int)4);
	hx_Effect_setValue_Unif_ArrFlt_Int= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Effect >(),HX_CSTRING("setValue_Unif_ArrFlt_Int"),(int)4);
	hx_Effect_setValue_Unif_ArrInt_Int= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Effect >(),HX_CSTRING("setValue_Unif_ArrInt_Int"),(int)4);
	hx_Effect_setValue_Unif_Flt= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Effect >(),HX_CSTRING("setValue_Unif_Flt"),(int)3);
	hx_Effect_setValue_Unif_Int= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Effect >(),HX_CSTRING("setValue_Unif_Int"),(int)3);
}

} // end namespace org
} // end namespace gameplay3d
