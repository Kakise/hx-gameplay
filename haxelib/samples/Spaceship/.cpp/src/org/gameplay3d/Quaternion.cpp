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
#ifndef INCLUDED_org_gameplay3d_Quaternion
#include <org/gameplay3d/Quaternion.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Vector3
#include <org/gameplay3d/Vector3.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IMatrix
#include <org/gameplay3d/immutable/IMatrix.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IQuaternion
#include <org/gameplay3d/immutable/IQuaternion.h>
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

Void Quaternion_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.Quaternion","new",0xcc9bd77d,"org.gameplay3d.Quaternion.new","org/gameplay3d/Quaternion.hx",13,0xd136f4f3)
HX_STACK_THIS(this)
HX_STACK_ARG(nativeObjectInitializer,"nativeObjectInitializer")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(13)
	super::__construct(nativeObjectInitializer,nativeObjectInitializerParams);
}
;
	return null();
}

//Quaternion_obj::~Quaternion_obj() { }

Dynamic Quaternion_obj::__CreateEmpty() { return  new Quaternion_obj; }
hx::ObjectPtr< Quaternion_obj > Quaternion_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< Quaternion_obj > result = new Quaternion_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic Quaternion_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Quaternion_obj > result = new Quaternion_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *Quaternion_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::immutable::IQuaternion_obj)) return operator ::org::gameplay3d::immutable::IQuaternion_obj *();
	if (inType==typeid( ::org::gameplay3d::intern::INativeBinding_obj)) return operator ::org::gameplay3d::intern::INativeBinding_obj *();
	return super::__ToInterface(inType);
}

Void Quaternion_obj::conjugate( ){
{
		HX_STACK_FRAME("org.gameplay3d.Quaternion","conjugate",0x40fef0f5,"org.gameplay3d.Quaternion.conjugate","org/gameplay3d/Quaternion.hx",70,0xd136f4f3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(70)
		::org::gameplay3d::Quaternion_obj::hx_Quaternion_conjugate(this->nativeObject);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,conjugate,(void))

Void Quaternion_obj::conjugate_Qtrn( ::org::gameplay3d::Quaternion dst){
{
		HX_STACK_FRAME("org.gameplay3d.Quaternion","conjugate_Qtrn",0xeb3e4449,"org.gameplay3d.Quaternion.conjugate_Qtrn","org/gameplay3d/Quaternion.hx",76,0xd136f4f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(76)
		::org::gameplay3d::Quaternion_obj::hx_Quaternion_conjugate_Qtrn(this->nativeObject,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,conjugate_Qtrn,(void))

bool Quaternion_obj::inverse( ){
	HX_STACK_FRAME("org.gameplay3d.Quaternion","inverse",0x4ee7a54d,"org.gameplay3d.Quaternion.inverse","org/gameplay3d/Quaternion.hx",100,0xd136f4f3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(100)
	return ::org::gameplay3d::Quaternion_obj::hx_Quaternion_inverse(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,inverse,return )

bool Quaternion_obj::inverse_Qtrn( ::org::gameplay3d::Quaternion dst){
	HX_STACK_FRAME("org.gameplay3d.Quaternion","inverse_Qtrn",0xe0b0d0f1,"org.gameplay3d.Quaternion.inverse_Qtrn","org/gameplay3d/Quaternion.hx",106,0xd136f4f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dst,"dst")
	HX_STACK_LINE(106)
	return ::org::gameplay3d::Quaternion_obj::hx_Quaternion_inverse_Qtrn(this->nativeObject,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,inverse_Qtrn,return )

bool Quaternion_obj::isIdentity( ){
	HX_STACK_FRAME("org.gameplay3d.Quaternion","isIdentity",0xdc6c1dcb,"org.gameplay3d.Quaternion.isIdentity","org/gameplay3d/Quaternion.hx",112,0xd136f4f3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(112)
	return ::org::gameplay3d::Quaternion_obj::hx_Quaternion_isIdentity(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,isIdentity,return )

bool Quaternion_obj::isZero( ){
	HX_STACK_FRAME("org.gameplay3d.Quaternion","isZero",0x32b95d35,"org.gameplay3d.Quaternion.isZero","org/gameplay3d/Quaternion.hx",118,0xd136f4f3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(118)
	return ::org::gameplay3d::Quaternion_obj::hx_Quaternion_isZero(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,isZero,return )

Void Quaternion_obj::multiply_Qtrn( ::org::gameplay3d::immutable::IQuaternion q){
{
		HX_STACK_FRAME("org.gameplay3d.Quaternion","multiply_Qtrn",0x43b59617,"org.gameplay3d.Quaternion.multiply_Qtrn","org/gameplay3d/Quaternion.hx",136,0xd136f4f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(q,"q")
		HX_STACK_LINE(136)
		::org::gameplay3d::Quaternion_obj::hx_Quaternion_multiply(this->nativeObject,(  (((q == null()))) ? Dynamic(null()) : Dynamic(q->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,multiply_Qtrn,(void))

Void Quaternion_obj::normalize( ){
{
		HX_STACK_FRAME("org.gameplay3d.Quaternion","normalize",0xaa16f26a,"org.gameplay3d.Quaternion.normalize","org/gameplay3d/Quaternion.hx",142,0xd136f4f3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(142)
		::org::gameplay3d::Quaternion_obj::hx_Quaternion_normalize(this->nativeObject);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,normalize,(void))

Void Quaternion_obj::normalize_Qtrn( ::org::gameplay3d::Quaternion dst){
{
		HX_STACK_FRAME("org.gameplay3d.Quaternion","normalize_Qtrn",0xae43dab4,"org.gameplay3d.Quaternion.normalize_Qtrn","org/gameplay3d/Quaternion.hx",148,0xd136f4f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(148)
		::org::gameplay3d::Quaternion_obj::hx_Quaternion_normalize_Qtrn(this->nativeObject,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,normalize_Qtrn,(void))

Void Quaternion_obj::set_Mat( ::org::gameplay3d::immutable::IMatrix m){
{
		HX_STACK_FRAME("org.gameplay3d.Quaternion","set_Mat",0x2aa775c0,"org.gameplay3d.Quaternion.set_Mat","org/gameplay3d/Quaternion.hx",154,0xd136f4f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(m,"m")
		HX_STACK_LINE(154)
		::org::gameplay3d::Quaternion_obj::hx_Quaternion_set_Mat(this->nativeObject,(  (((m == null()))) ? Dynamic(null()) : Dynamic(m->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,set_Mat,(void))

Void Quaternion_obj::set_Qtrn( ::org::gameplay3d::immutable::IQuaternion q){
{
		HX_STACK_FRAME("org.gameplay3d.Quaternion","set_Qtrn",0x2a92d63f,"org.gameplay3d.Quaternion.set_Qtrn","org/gameplay3d/Quaternion.hx",160,0xd136f4f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(q,"q")
		HX_STACK_LINE(160)
		::org::gameplay3d::Quaternion_obj::hx_Quaternion_set_Qtrn(this->nativeObject,(  (((q == null()))) ? Dynamic(null()) : Dynamic(q->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,set_Qtrn,(void))

Void Quaternion_obj::set_V3_Flt( ::org::gameplay3d::immutable::IVector3 axis,Float angle){
{
		HX_STACK_FRAME("org.gameplay3d.Quaternion","set_V3_Flt",0x9bb433ac,"org.gameplay3d.Quaternion.set_V3_Flt","org/gameplay3d/Quaternion.hx",166,0xd136f4f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(angle,"angle")
		HX_STACK_LINE(166)
		::org::gameplay3d::Quaternion_obj::hx_Quaternion_set_V3_Flt(this->nativeObject,(  (((axis == null()))) ? Dynamic(null()) : Dynamic(axis->__Field(HX_CSTRING("nativeObject"),true)) ),angle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Quaternion_obj,set_V3_Flt,(void))

Void Quaternion_obj::set_FltX4( Float x,Float y,Float z,Float w){
{
		HX_STACK_FRAME("org.gameplay3d.Quaternion","set_FltX4",0xbb37fbea,"org.gameplay3d.Quaternion.set_FltX4","org/gameplay3d/Quaternion.hx",172,0xd136f4f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_ARG(w,"w")
		HX_STACK_LINE(172)
		::org::gameplay3d::Quaternion_obj::hx_Quaternion_set_FltX4(this->nativeObject,x,y,z,w);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Quaternion_obj,set_FltX4,(void))

Void Quaternion_obj::set_ArrFlt( Array< Float > array){
{
		HX_STACK_FRAME("org.gameplay3d.Quaternion","set_ArrFlt",0x8903396d,"org.gameplay3d.Quaternion.set_ArrFlt","org/gameplay3d/Quaternion.hx",178,0xd136f4f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(array,"array")
		HX_STACK_LINE(178)
		::org::gameplay3d::Quaternion_obj::hx_Quaternion_set_ArrFlt(this->nativeObject,array);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,set_ArrFlt,(void))

Void Quaternion_obj::setIdentity( ){
{
		HX_STACK_FRAME("org.gameplay3d.Quaternion","setIdentity",0xbd0ffb1d,"org.gameplay3d.Quaternion.setIdentity","org/gameplay3d/Quaternion.hx",184,0xd136f4f3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(184)
		::org::gameplay3d::Quaternion_obj::hx_Quaternion_setIdentity(this->nativeObject);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,setIdentity,(void))

Float Quaternion_obj::toAxisAngle( ::org::gameplay3d::Vector3 e){
	HX_STACK_FRAME("org.gameplay3d.Quaternion","toAxisAngle",0xb6eb8e94,"org.gameplay3d.Quaternion.toAxisAngle","org/gameplay3d/Quaternion.hx",202,0xd136f4f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(202)
	return ::org::gameplay3d::Quaternion_obj::hx_Quaternion_toAxisAngle(this->nativeObject,(  (((e == null()))) ? Dynamic(null()) : Dynamic(e->nativeObject) ));
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,toAxisAngle,return )

Float Quaternion_obj::get_x( ){
	HX_STACK_FRAME("org.gameplay3d.Quaternion","get_x",0x050e6dac,"org.gameplay3d.Quaternion.get_x","org/gameplay3d/Quaternion.hx",257,0xd136f4f3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(257)
	return ::org::gameplay3d::Quaternion_obj::hx_Quaternion_property_x_get(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,get_x,return )

Float Quaternion_obj::set_x( Float value){
	HX_STACK_FRAME("org.gameplay3d.Quaternion","set_x",0xeddd63b8,"org.gameplay3d.Quaternion.set_x","org/gameplay3d/Quaternion.hx",262,0xd136f4f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(262)
	return ::org::gameplay3d::Quaternion_obj::hx_Quaternion_property_x_set(this->nativeObject,value);
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,set_x,return )

Float Quaternion_obj::get_y( ){
	HX_STACK_FRAME("org.gameplay3d.Quaternion","get_y",0x050e6dad,"org.gameplay3d.Quaternion.get_y","org/gameplay3d/Quaternion.hx",267,0xd136f4f3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(267)
	return ::org::gameplay3d::Quaternion_obj::hx_Quaternion_property_y_get(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,get_y,return )

Float Quaternion_obj::set_y( Float value){
	HX_STACK_FRAME("org.gameplay3d.Quaternion","set_y",0xeddd63b9,"org.gameplay3d.Quaternion.set_y","org/gameplay3d/Quaternion.hx",272,0xd136f4f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(272)
	return ::org::gameplay3d::Quaternion_obj::hx_Quaternion_property_y_set(this->nativeObject,value);
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,set_y,return )

Float Quaternion_obj::get_z( ){
	HX_STACK_FRAME("org.gameplay3d.Quaternion","get_z",0x050e6dae,"org.gameplay3d.Quaternion.get_z","org/gameplay3d/Quaternion.hx",277,0xd136f4f3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(277)
	return ::org::gameplay3d::Quaternion_obj::hx_Quaternion_property_z_get(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,get_z,return )

Float Quaternion_obj::set_z( Float value){
	HX_STACK_FRAME("org.gameplay3d.Quaternion","set_z",0xeddd63ba,"org.gameplay3d.Quaternion.set_z","org/gameplay3d/Quaternion.hx",282,0xd136f4f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(282)
	return ::org::gameplay3d::Quaternion_obj::hx_Quaternion_property_z_set(this->nativeObject,value);
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,set_z,return )

Float Quaternion_obj::get_w( ){
	HX_STACK_FRAME("org.gameplay3d.Quaternion","get_w",0x050e6dab,"org.gameplay3d.Quaternion.get_w","org/gameplay3d/Quaternion.hx",287,0xd136f4f3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(287)
	return ::org::gameplay3d::Quaternion_obj::hx_Quaternion_property_w_get(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,get_w,return )

Float Quaternion_obj::set_w( Float value){
	HX_STACK_FRAME("org.gameplay3d.Quaternion","set_w",0xeddd63b7,"org.gameplay3d.Quaternion.set_w","org/gameplay3d/Quaternion.hx",292,0xd136f4f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(292)
	return ::org::gameplay3d::Quaternion_obj::hx_Quaternion_property_w_set(this->nativeObject,value);
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,set_w,return )

::org::gameplay3d::Quaternion Quaternion_obj::_identity;

::org::gameplay3d::Quaternion Quaternion_obj::_zero;

::org::gameplay3d::Quaternion Quaternion_obj::make( ){
	HX_STACK_FRAME("org.gameplay3d.Quaternion","make",0x3b146c31,"org.gameplay3d.Quaternion.make","org/gameplay3d/Quaternion.hx",33,0xd136f4f3)
	HX_STACK_LINE(34)
	Dynamic _g = ::org::gameplay3d::Quaternion_obj::constructNativeObject();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(34)
	return ::org::gameplay3d::Quaternion_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,make,return )

::org::gameplay3d::Quaternion Quaternion_obj::make_Mat( ::org::gameplay3d::immutable::IMatrix m){
	HX_STACK_FRAME("org.gameplay3d.Quaternion","make_Mat",0x1162e032,"org.gameplay3d.Quaternion.make_Mat","org/gameplay3d/Quaternion.hx",39,0xd136f4f3)
	HX_STACK_ARG(m,"m")
	HX_STACK_LINE(40)
	Dynamic _g = ::org::gameplay3d::Quaternion_obj::constructNativeObject_Mat(m);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(40)
	return ::org::gameplay3d::Quaternion_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,make_Mat,return )

::org::gameplay3d::Quaternion Quaternion_obj::make_Qtrn( ::org::gameplay3d::immutable::IQuaternion copy){
	HX_STACK_FRAME("org.gameplay3d.Quaternion","make_Qtrn",0x27d48f8d,"org.gameplay3d.Quaternion.make_Qtrn","org/gameplay3d/Quaternion.hx",45,0xd136f4f3)
	HX_STACK_ARG(copy,"copy")
	HX_STACK_LINE(46)
	Dynamic _g = ::org::gameplay3d::Quaternion_obj::constructNativeObject_Qtrn(copy);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(46)
	return ::org::gameplay3d::Quaternion_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,make_Qtrn,return )

::org::gameplay3d::Quaternion Quaternion_obj::make_V3_Flt( ::org::gameplay3d::immutable::IVector3 axis,Float angle){
	HX_STACK_FRAME("org.gameplay3d.Quaternion","make_V3_Flt",0xb7d15c7a,"org.gameplay3d.Quaternion.make_V3_Flt","org/gameplay3d/Quaternion.hx",51,0xd136f4f3)
	HX_STACK_ARG(axis,"axis")
	HX_STACK_ARG(angle,"angle")
	HX_STACK_LINE(52)
	Dynamic _g = ::org::gameplay3d::Quaternion_obj::constructNativeObject_V3_Flt(axis,angle);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(52)
	return ::org::gameplay3d::Quaternion_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Quaternion_obj,make_V3_Flt,return )

::org::gameplay3d::Quaternion Quaternion_obj::make_FltX4( Float x,Float y,Float z,Float w){
	HX_STACK_FRAME("org.gameplay3d.Quaternion","make_FltX4",0x577866dc,"org.gameplay3d.Quaternion.make_FltX4","org/gameplay3d/Quaternion.hx",57,0xd136f4f3)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(z,"z")
	HX_STACK_ARG(w,"w")
	HX_STACK_LINE(58)
	Dynamic _g = ::org::gameplay3d::Quaternion_obj::constructNativeObject_FltX4(x,y,z,w);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(58)
	return ::org::gameplay3d::Quaternion_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Quaternion_obj,make_FltX4,return )

::org::gameplay3d::Quaternion Quaternion_obj::make_ArrFlt( Array< Float > array){
	HX_STACK_FRAME("org.gameplay3d.Quaternion","make_ArrFlt",0xa520623b,"org.gameplay3d.Quaternion.make_ArrFlt","org/gameplay3d/Quaternion.hx",63,0xd136f4f3)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(64)
	Dynamic _g = ::org::gameplay3d::Quaternion_obj::constructNativeObject_ArrFlt(array);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(64)
	return ::org::gameplay3d::Quaternion_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,make_ArrFlt,return )

Void Quaternion_obj::createFromAxisAngle( ::org::gameplay3d::immutable::IVector3 axis,Float angle,::org::gameplay3d::Quaternion dst){
{
		HX_STACK_FRAME("org.gameplay3d.Quaternion","createFromAxisAngle",0x2d6b7929,"org.gameplay3d.Quaternion.createFromAxisAngle","org/gameplay3d/Quaternion.hx",82,0xd136f4f3)
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(angle,"angle")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(82)
		::org::gameplay3d::Quaternion_obj::hx_Quaternion_static_createFromAxisAngle((  (((axis == null()))) ? Dynamic(null()) : Dynamic(axis->__Field(HX_CSTRING("nativeObject"),true)) ),angle,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Quaternion_obj,createFromAxisAngle,(void))

Void Quaternion_obj::createFromRotationMatrix( ::org::gameplay3d::immutable::IMatrix m,::org::gameplay3d::Quaternion dst){
{
		HX_STACK_FRAME("org.gameplay3d.Quaternion","createFromRotationMatrix",0xfa828908,"org.gameplay3d.Quaternion.createFromRotationMatrix","org/gameplay3d/Quaternion.hx",88,0xd136f4f3)
		HX_STACK_ARG(m,"m")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(88)
		::org::gameplay3d::Quaternion_obj::hx_Quaternion_static_createFromRotationMatrix((  (((m == null()))) ? Dynamic(null()) : Dynamic(m->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Quaternion_obj,createFromRotationMatrix,(void))

::org::gameplay3d::immutable::IQuaternion Quaternion_obj::identity( ){
	HX_STACK_FRAME("org.gameplay3d.Quaternion","identity",0x7fc75501,"org.gameplay3d.Quaternion.identity","org/gameplay3d/Quaternion.hx",94,0xd136f4f3)
	HX_STACK_LINE(28)
	if (((::org::gameplay3d::Quaternion_obj::_identity == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Quaternion _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Quaternion >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(94)
			Dynamic nativeObject = ::org::gameplay3d::Quaternion_obj::hx_Quaternion_static_identity();		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::Quaternion result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Quaternion _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return ::org::gameplay3d::Quaternion_obj::_identity = _g1;
	}
	else{
		HX_STACK_LINE(94)
		Dynamic _g2 = ::org::gameplay3d::Quaternion_obj::hx_Quaternion_static_identity();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Quaternion _g3 = ::org::gameplay3d::Quaternion_obj::_identity->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return ::org::gameplay3d::Quaternion_obj::_identity = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,identity,return )

Void Quaternion_obj::lerp( ::org::gameplay3d::immutable::IQuaternion q1,::org::gameplay3d::immutable::IQuaternion q2,Float t,::org::gameplay3d::Quaternion dst){
{
		HX_STACK_FRAME("org.gameplay3d.Quaternion","lerp",0x3a6e44ba,"org.gameplay3d.Quaternion.lerp","org/gameplay3d/Quaternion.hx",124,0xd136f4f3)
		HX_STACK_ARG(q1,"q1")
		HX_STACK_ARG(q2,"q2")
		HX_STACK_ARG(t,"t")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(124)
		::org::gameplay3d::Quaternion_obj::hx_Quaternion_static_lerp((  (((q1 == null()))) ? Dynamic(null()) : Dynamic(q1->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((q2 == null()))) ? Dynamic(null()) : Dynamic(q2->__Field(HX_CSTRING("nativeObject"),true)) ),t,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Quaternion_obj,lerp,(void))

Void Quaternion_obj::multiply_QtrnX3( ::org::gameplay3d::immutable::IQuaternion q1,::org::gameplay3d::immutable::IQuaternion q2,::org::gameplay3d::Quaternion dst){
{
		HX_STACK_FRAME("org.gameplay3d.Quaternion","multiply_QtrnX3",0xccd8d6b2,"org.gameplay3d.Quaternion.multiply_QtrnX3","org/gameplay3d/Quaternion.hx",130,0xd136f4f3)
		HX_STACK_ARG(q1,"q1")
		HX_STACK_ARG(q2,"q2")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(130)
		::org::gameplay3d::Quaternion_obj::hx_Quaternion_static_multiply((  (((q1 == null()))) ? Dynamic(null()) : Dynamic(q1->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((q2 == null()))) ? Dynamic(null()) : Dynamic(q2->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Quaternion_obj,multiply_QtrnX3,(void))

Void Quaternion_obj::slerp( ::org::gameplay3d::immutable::IQuaternion q1,::org::gameplay3d::immutable::IQuaternion q2,Float t,::org::gameplay3d::Quaternion dst){
{
		HX_STACK_FRAME("org.gameplay3d.Quaternion","slerp",0xf27290c7,"org.gameplay3d.Quaternion.slerp","org/gameplay3d/Quaternion.hx",190,0xd136f4f3)
		HX_STACK_ARG(q1,"q1")
		HX_STACK_ARG(q2,"q2")
		HX_STACK_ARG(t,"t")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(190)
		::org::gameplay3d::Quaternion_obj::hx_Quaternion_static_slerp((  (((q1 == null()))) ? Dynamic(null()) : Dynamic(q1->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((q2 == null()))) ? Dynamic(null()) : Dynamic(q2->__Field(HX_CSTRING("nativeObject"),true)) ),t,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Quaternion_obj,slerp,(void))

Void Quaternion_obj::squad( ::org::gameplay3d::immutable::IQuaternion q1,::org::gameplay3d::immutable::IQuaternion q2,::org::gameplay3d::immutable::IQuaternion s1,::org::gameplay3d::immutable::IQuaternion s2,Float t,::org::gameplay3d::Quaternion dst){
{
		HX_STACK_FRAME("org.gameplay3d.Quaternion","squad",0xf5ccb717,"org.gameplay3d.Quaternion.squad","org/gameplay3d/Quaternion.hx",196,0xd136f4f3)
		HX_STACK_ARG(q1,"q1")
		HX_STACK_ARG(q2,"q2")
		HX_STACK_ARG(s1,"s1")
		HX_STACK_ARG(s2,"s2")
		HX_STACK_ARG(t,"t")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(196)
		::org::gameplay3d::Quaternion_obj::hx_Quaternion_static_squad((  (((q1 == null()))) ? Dynamic(null()) : Dynamic(q1->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((q2 == null()))) ? Dynamic(null()) : Dynamic(q2->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((s1 == null()))) ? Dynamic(null()) : Dynamic(s1->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((s2 == null()))) ? Dynamic(null()) : Dynamic(s2->__Field(HX_CSTRING("nativeObject"),true)) ),t,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Quaternion_obj,squad,(void))

::org::gameplay3d::immutable::IQuaternion Quaternion_obj::zero( ){
	HX_STACK_FRAME("org.gameplay3d.Quaternion","zero",0x43af416b,"org.gameplay3d.Quaternion.zero","org/gameplay3d/Quaternion.hx",208,0xd136f4f3)
	HX_STACK_LINE(28)
	if (((::org::gameplay3d::Quaternion_obj::_zero == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Quaternion _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Quaternion >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(208)
			Dynamic nativeObject = ::org::gameplay3d::Quaternion_obj::hx_Quaternion_static_zero();		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::Quaternion result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Quaternion _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return ::org::gameplay3d::Quaternion_obj::_zero = _g1;
	}
	else{
		HX_STACK_LINE(208)
		Dynamic _g2 = ::org::gameplay3d::Quaternion_obj::hx_Quaternion_static_zero();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Quaternion _g3 = ::org::gameplay3d::Quaternion_obj::_zero->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return ::org::gameplay3d::Quaternion_obj::_zero = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,zero,return )

Dynamic Quaternion_obj::constructNativeObject( ){
	HX_STACK_FRAME("org.gameplay3d.Quaternion","constructNativeObject",0x0d5684ca,"org.gameplay3d.Quaternion.constructNativeObject","org/gameplay3d/Quaternion.hx",218,0xd136f4f3)
	HX_STACK_LINE(218)
	return ::org::gameplay3d::Quaternion_obj::hx_Quaternion_Construct();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,constructNativeObject,return )

Dynamic Quaternion_obj::constructNativeObject_Mat( ::org::gameplay3d::immutable::IMatrix m){
	HX_STACK_FRAME("org.gameplay3d.Quaternion","constructNativeObject_Mat",0xe2dfb94b,"org.gameplay3d.Quaternion.constructNativeObject_Mat","org/gameplay3d/Quaternion.hx",224,0xd136f4f3)
	HX_STACK_ARG(m,"m")
	HX_STACK_LINE(224)
	return ::org::gameplay3d::Quaternion_obj::hx_Quaternion_Construct_Mat((  (((m == null()))) ? Dynamic(null()) : Dynamic(m->__Field(HX_CSTRING("nativeObject"),true)) ));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,constructNativeObject_Mat,return )

Dynamic Quaternion_obj::constructNativeObject_Qtrn( ::org::gameplay3d::immutable::IQuaternion copy){
	HX_STACK_FRAME("org.gameplay3d.Quaternion","constructNativeObject_Qtrn",0xa395ac54,"org.gameplay3d.Quaternion.constructNativeObject_Qtrn","org/gameplay3d/Quaternion.hx",230,0xd136f4f3)
	HX_STACK_ARG(copy,"copy")
	HX_STACK_LINE(230)
	return ::org::gameplay3d::Quaternion_obj::hx_Quaternion_Construct_Qtrn((  (((copy == null()))) ? Dynamic(null()) : Dynamic(copy->__Field(HX_CSTRING("nativeObject"),true)) ));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,constructNativeObject_Qtrn,return )

Dynamic Quaternion_obj::constructNativeObject_V3_Flt( ::org::gameplay3d::immutable::IVector3 axis,Float angle){
	HX_STACK_FRAME("org.gameplay3d.Quaternion","constructNativeObject_V3_Flt",0x7ba87901,"org.gameplay3d.Quaternion.constructNativeObject_V3_Flt","org/gameplay3d/Quaternion.hx",236,0xd136f4f3)
	HX_STACK_ARG(axis,"axis")
	HX_STACK_ARG(angle,"angle")
	HX_STACK_LINE(236)
	return ::org::gameplay3d::Quaternion_obj::hx_Quaternion_Construct_V3_Flt((  (((axis == null()))) ? Dynamic(null()) : Dynamic(axis->__Field(HX_CSTRING("nativeObject"),true)) ),angle);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Quaternion_obj,constructNativeObject_V3_Flt,return )

Dynamic Quaternion_obj::constructNativeObject_FltX4( Float x,Float y,Float z,Float w){
	HX_STACK_FRAME("org.gameplay3d.Quaternion","constructNativeObject_FltX4",0x24b07835,"org.gameplay3d.Quaternion.constructNativeObject_FltX4","org/gameplay3d/Quaternion.hx",242,0xd136f4f3)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(z,"z")
	HX_STACK_ARG(w,"w")
	HX_STACK_LINE(242)
	return ::org::gameplay3d::Quaternion_obj::hx_Quaternion_Construct_FltX4(x,y,z,w);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Quaternion_obj,constructNativeObject_FltX4,return )

Dynamic Quaternion_obj::constructNativeObject_ArrFlt( Array< Float > array){
	HX_STACK_FRAME("org.gameplay3d.Quaternion","constructNativeObject_ArrFlt",0x68f77ec2,"org.gameplay3d.Quaternion.constructNativeObject_ArrFlt","org/gameplay3d/Quaternion.hx",248,0xd136f4f3)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(248)
	return ::org::gameplay3d::Quaternion_obj::hx_Quaternion_Construct_ArrFlt(array);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,constructNativeObject_ArrFlt,return )

Dynamic Quaternion_obj::hx_Quaternion_Construct;

Dynamic Quaternion_obj::hx_Quaternion_Construct_Mat;

Dynamic Quaternion_obj::hx_Quaternion_Construct_Qtrn;

Dynamic Quaternion_obj::hx_Quaternion_Construct_V3_Flt;

Dynamic Quaternion_obj::hx_Quaternion_Construct_FltX4;

Dynamic Quaternion_obj::hx_Quaternion_Construct_ArrFlt;

Dynamic Quaternion_obj::hx_Quaternion_conjugate;

Dynamic Quaternion_obj::hx_Quaternion_conjugate_Qtrn;

Dynamic Quaternion_obj::hx_Quaternion_static_createFromAxisAngle;

Dynamic Quaternion_obj::hx_Quaternion_static_createFromRotationMatrix;

Dynamic Quaternion_obj::hx_Quaternion_static_identity;

Dynamic Quaternion_obj::hx_Quaternion_inverse;

Dynamic Quaternion_obj::hx_Quaternion_inverse_Qtrn;

Dynamic Quaternion_obj::hx_Quaternion_isIdentity;

Dynamic Quaternion_obj::hx_Quaternion_isZero;

Dynamic Quaternion_obj::hx_Quaternion_static_lerp;

Dynamic Quaternion_obj::hx_Quaternion_static_multiply;

Dynamic Quaternion_obj::hx_Quaternion_multiply;

Dynamic Quaternion_obj::hx_Quaternion_normalize;

Dynamic Quaternion_obj::hx_Quaternion_normalize_Qtrn;

Dynamic Quaternion_obj::hx_Quaternion_set_Mat;

Dynamic Quaternion_obj::hx_Quaternion_set_Qtrn;

Dynamic Quaternion_obj::hx_Quaternion_set_V3_Flt;

Dynamic Quaternion_obj::hx_Quaternion_set_FltX4;

Dynamic Quaternion_obj::hx_Quaternion_set_ArrFlt;

Dynamic Quaternion_obj::hx_Quaternion_setIdentity;

Dynamic Quaternion_obj::hx_Quaternion_static_slerp;

Dynamic Quaternion_obj::hx_Quaternion_static_squad;

Dynamic Quaternion_obj::hx_Quaternion_toAxisAngle;

Dynamic Quaternion_obj::hx_Quaternion_static_zero;

Dynamic Quaternion_obj::hx_Quaternion_property_w_get;

Dynamic Quaternion_obj::hx_Quaternion_property_w_set;

Dynamic Quaternion_obj::hx_Quaternion_property_x_get;

Dynamic Quaternion_obj::hx_Quaternion_property_x_set;

Dynamic Quaternion_obj::hx_Quaternion_property_y_get;

Dynamic Quaternion_obj::hx_Quaternion_property_y_set;

Dynamic Quaternion_obj::hx_Quaternion_property_z_get;

Dynamic Quaternion_obj::hx_Quaternion_property_z_set;


Quaternion_obj::Quaternion_obj()
{
}

Dynamic Quaternion_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return get_x(); }
		if (HX_FIELD_EQ(inName,"y") ) { return get_y(); }
		if (HX_FIELD_EQ(inName,"z") ) { return get_z(); }
		if (HX_FIELD_EQ(inName,"w") ) { return get_w(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { return make_dyn(); }
		if (HX_FIELD_EQ(inName,"lerp") ) { return lerp_dyn(); }
		if (HX_FIELD_EQ(inName,"zero") ) { return zero_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_zero") ) { return _zero; }
		if (HX_FIELD_EQ(inName,"slerp") ) { return slerp_dyn(); }
		if (HX_FIELD_EQ(inName,"squad") ) { return squad_dyn(); }
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"get_z") ) { return get_z_dyn(); }
		if (HX_FIELD_EQ(inName,"set_z") ) { return set_z_dyn(); }
		if (HX_FIELD_EQ(inName,"get_w") ) { return get_w_dyn(); }
		if (HX_FIELD_EQ(inName,"set_w") ) { return set_w_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"isZero") ) { return isZero_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"inverse") ) { return inverse_dyn(); }
		if (HX_FIELD_EQ(inName,"set_Mat") ) { return set_Mat_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"make_Mat") ) { return make_Mat_dyn(); }
		if (HX_FIELD_EQ(inName,"identity") ) { return identity_dyn(); }
		if (HX_FIELD_EQ(inName,"set_Qtrn") ) { return set_Qtrn_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_identity") ) { return _identity; }
		if (HX_FIELD_EQ(inName,"make_Qtrn") ) { return make_Qtrn_dyn(); }
		if (HX_FIELD_EQ(inName,"conjugate") ) { return conjugate_dyn(); }
		if (HX_FIELD_EQ(inName,"normalize") ) { return normalize_dyn(); }
		if (HX_FIELD_EQ(inName,"set_FltX4") ) { return set_FltX4_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"make_FltX4") ) { return make_FltX4_dyn(); }
		if (HX_FIELD_EQ(inName,"isIdentity") ) { return isIdentity_dyn(); }
		if (HX_FIELD_EQ(inName,"set_V3_Flt") ) { return set_V3_Flt_dyn(); }
		if (HX_FIELD_EQ(inName,"set_ArrFlt") ) { return set_ArrFlt_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"make_V3_Flt") ) { return make_V3_Flt_dyn(); }
		if (HX_FIELD_EQ(inName,"make_ArrFlt") ) { return make_ArrFlt_dyn(); }
		if (HX_FIELD_EQ(inName,"setIdentity") ) { return setIdentity_dyn(); }
		if (HX_FIELD_EQ(inName,"toAxisAngle") ) { return toAxisAngle_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"inverse_Qtrn") ) { return inverse_Qtrn_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"multiply_Qtrn") ) { return multiply_Qtrn_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"conjugate_Qtrn") ) { return conjugate_Qtrn_dyn(); }
		if (HX_FIELD_EQ(inName,"normalize_Qtrn") ) { return normalize_Qtrn_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"multiply_QtrnX3") ) { return multiply_QtrnX3_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"createFromAxisAngle") ) { return createFromAxisAngle_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Quaternion_isZero") ) { return hx_Quaternion_isZero; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"constructNativeObject") ) { return constructNativeObject_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_inverse") ) { return hx_Quaternion_inverse; }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_set_Mat") ) { return hx_Quaternion_set_Mat; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Quaternion_multiply") ) { return hx_Quaternion_multiply; }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_set_Qtrn") ) { return hx_Quaternion_set_Qtrn; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_Quaternion_Construct") ) { return hx_Quaternion_Construct; }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_conjugate") ) { return hx_Quaternion_conjugate; }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_normalize") ) { return hx_Quaternion_normalize; }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_set_FltX4") ) { return hx_Quaternion_set_FltX4; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"createFromRotationMatrix") ) { return createFromRotationMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_isIdentity") ) { return hx_Quaternion_isIdentity; }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_set_V3_Flt") ) { return hx_Quaternion_set_V3_Flt; }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_set_ArrFlt") ) { return hx_Quaternion_set_ArrFlt; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"constructNativeObject_Mat") ) { return constructNativeObject_Mat_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_static_lerp") ) { return hx_Quaternion_static_lerp; }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_setIdentity") ) { return hx_Quaternion_setIdentity; }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_toAxisAngle") ) { return hx_Quaternion_toAxisAngle; }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_static_zero") ) { return hx_Quaternion_static_zero; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"constructNativeObject_Qtrn") ) { return constructNativeObject_Qtrn_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_inverse_Qtrn") ) { return hx_Quaternion_inverse_Qtrn; }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_static_slerp") ) { return hx_Quaternion_static_slerp; }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_static_squad") ) { return hx_Quaternion_static_squad; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"constructNativeObject_FltX4") ) { return constructNativeObject_FltX4_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_Construct_Mat") ) { return hx_Quaternion_Construct_Mat; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"constructNativeObject_V3_Flt") ) { return constructNativeObject_V3_Flt_dyn(); }
		if (HX_FIELD_EQ(inName,"constructNativeObject_ArrFlt") ) { return constructNativeObject_ArrFlt_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_Construct_Qtrn") ) { return hx_Quaternion_Construct_Qtrn; }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_conjugate_Qtrn") ) { return hx_Quaternion_conjugate_Qtrn; }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_normalize_Qtrn") ) { return hx_Quaternion_normalize_Qtrn; }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_property_w_get") ) { return hx_Quaternion_property_w_get; }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_property_w_set") ) { return hx_Quaternion_property_w_set; }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_property_x_get") ) { return hx_Quaternion_property_x_get; }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_property_x_set") ) { return hx_Quaternion_property_x_set; }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_property_y_get") ) { return hx_Quaternion_property_y_get; }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_property_y_set") ) { return hx_Quaternion_property_y_set; }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_property_z_get") ) { return hx_Quaternion_property_z_get; }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_property_z_set") ) { return hx_Quaternion_property_z_set; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_Quaternion_Construct_FltX4") ) { return hx_Quaternion_Construct_FltX4; }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_static_identity") ) { return hx_Quaternion_static_identity; }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_static_multiply") ) { return hx_Quaternion_static_multiply; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"hx_Quaternion_Construct_V3_Flt") ) { return hx_Quaternion_Construct_V3_Flt; }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_Construct_ArrFlt") ) { return hx_Quaternion_Construct_ArrFlt; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"hx_Quaternion_static_createFromAxisAngle") ) { return hx_Quaternion_static_createFromAxisAngle; }
		break;
	case 45:
		if (HX_FIELD_EQ(inName,"hx_Quaternion_static_createFromRotationMatrix") ) { return hx_Quaternion_static_createFromRotationMatrix; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Quaternion_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return set_x(inValue); }
		if (HX_FIELD_EQ(inName,"y") ) { return set_y(inValue); }
		if (HX_FIELD_EQ(inName,"z") ) { return set_z(inValue); }
		if (HX_FIELD_EQ(inName,"w") ) { return set_w(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_zero") ) { _zero=inValue.Cast< ::org::gameplay3d::Quaternion >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_identity") ) { _identity=inValue.Cast< ::org::gameplay3d::Quaternion >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Quaternion_isZero") ) { hx_Quaternion_isZero=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hx_Quaternion_inverse") ) { hx_Quaternion_inverse=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_set_Mat") ) { hx_Quaternion_set_Mat=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Quaternion_multiply") ) { hx_Quaternion_multiply=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_set_Qtrn") ) { hx_Quaternion_set_Qtrn=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_Quaternion_Construct") ) { hx_Quaternion_Construct=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_conjugate") ) { hx_Quaternion_conjugate=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_normalize") ) { hx_Quaternion_normalize=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_set_FltX4") ) { hx_Quaternion_set_FltX4=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_Quaternion_isIdentity") ) { hx_Quaternion_isIdentity=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_set_V3_Flt") ) { hx_Quaternion_set_V3_Flt=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_set_ArrFlt") ) { hx_Quaternion_set_ArrFlt=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_Quaternion_static_lerp") ) { hx_Quaternion_static_lerp=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_setIdentity") ) { hx_Quaternion_setIdentity=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_toAxisAngle") ) { hx_Quaternion_toAxisAngle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_static_zero") ) { hx_Quaternion_static_zero=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_Quaternion_inverse_Qtrn") ) { hx_Quaternion_inverse_Qtrn=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_static_slerp") ) { hx_Quaternion_static_slerp=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_static_squad") ) { hx_Quaternion_static_squad=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"hx_Quaternion_Construct_Mat") ) { hx_Quaternion_Construct_Mat=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_Quaternion_Construct_Qtrn") ) { hx_Quaternion_Construct_Qtrn=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_conjugate_Qtrn") ) { hx_Quaternion_conjugate_Qtrn=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_normalize_Qtrn") ) { hx_Quaternion_normalize_Qtrn=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_property_w_get") ) { hx_Quaternion_property_w_get=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_property_w_set") ) { hx_Quaternion_property_w_set=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_property_x_get") ) { hx_Quaternion_property_x_get=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_property_x_set") ) { hx_Quaternion_property_x_set=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_property_y_get") ) { hx_Quaternion_property_y_get=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_property_y_set") ) { hx_Quaternion_property_y_set=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_property_z_get") ) { hx_Quaternion_property_z_get=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_property_z_set") ) { hx_Quaternion_property_z_set=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_Quaternion_Construct_FltX4") ) { hx_Quaternion_Construct_FltX4=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_static_identity") ) { hx_Quaternion_static_identity=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_static_multiply") ) { hx_Quaternion_static_multiply=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"hx_Quaternion_Construct_V3_Flt") ) { hx_Quaternion_Construct_V3_Flt=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Quaternion_Construct_ArrFlt") ) { hx_Quaternion_Construct_ArrFlt=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"hx_Quaternion_static_createFromAxisAngle") ) { hx_Quaternion_static_createFromAxisAngle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 45:
		if (HX_FIELD_EQ(inName,"hx_Quaternion_static_createFromRotationMatrix") ) { hx_Quaternion_static_createFromRotationMatrix=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Quaternion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("z"));
	outFields->push(HX_CSTRING("w"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_identity"),
	HX_CSTRING("_zero"),
	HX_CSTRING("make"),
	HX_CSTRING("make_Mat"),
	HX_CSTRING("make_Qtrn"),
	HX_CSTRING("make_V3_Flt"),
	HX_CSTRING("make_FltX4"),
	HX_CSTRING("make_ArrFlt"),
	HX_CSTRING("createFromAxisAngle"),
	HX_CSTRING("createFromRotationMatrix"),
	HX_CSTRING("identity"),
	HX_CSTRING("lerp"),
	HX_CSTRING("multiply_QtrnX3"),
	HX_CSTRING("slerp"),
	HX_CSTRING("squad"),
	HX_CSTRING("zero"),
	HX_CSTRING("constructNativeObject"),
	HX_CSTRING("constructNativeObject_Mat"),
	HX_CSTRING("constructNativeObject_Qtrn"),
	HX_CSTRING("constructNativeObject_V3_Flt"),
	HX_CSTRING("constructNativeObject_FltX4"),
	HX_CSTRING("constructNativeObject_ArrFlt"),
	HX_CSTRING("hx_Quaternion_Construct"),
	HX_CSTRING("hx_Quaternion_Construct_Mat"),
	HX_CSTRING("hx_Quaternion_Construct_Qtrn"),
	HX_CSTRING("hx_Quaternion_Construct_V3_Flt"),
	HX_CSTRING("hx_Quaternion_Construct_FltX4"),
	HX_CSTRING("hx_Quaternion_Construct_ArrFlt"),
	HX_CSTRING("hx_Quaternion_conjugate"),
	HX_CSTRING("hx_Quaternion_conjugate_Qtrn"),
	HX_CSTRING("hx_Quaternion_static_createFromAxisAngle"),
	HX_CSTRING("hx_Quaternion_static_createFromRotationMatrix"),
	HX_CSTRING("hx_Quaternion_static_identity"),
	HX_CSTRING("hx_Quaternion_inverse"),
	HX_CSTRING("hx_Quaternion_inverse_Qtrn"),
	HX_CSTRING("hx_Quaternion_isIdentity"),
	HX_CSTRING("hx_Quaternion_isZero"),
	HX_CSTRING("hx_Quaternion_static_lerp"),
	HX_CSTRING("hx_Quaternion_static_multiply"),
	HX_CSTRING("hx_Quaternion_multiply"),
	HX_CSTRING("hx_Quaternion_normalize"),
	HX_CSTRING("hx_Quaternion_normalize_Qtrn"),
	HX_CSTRING("hx_Quaternion_set_Mat"),
	HX_CSTRING("hx_Quaternion_set_Qtrn"),
	HX_CSTRING("hx_Quaternion_set_V3_Flt"),
	HX_CSTRING("hx_Quaternion_set_FltX4"),
	HX_CSTRING("hx_Quaternion_set_ArrFlt"),
	HX_CSTRING("hx_Quaternion_setIdentity"),
	HX_CSTRING("hx_Quaternion_static_slerp"),
	HX_CSTRING("hx_Quaternion_static_squad"),
	HX_CSTRING("hx_Quaternion_toAxisAngle"),
	HX_CSTRING("hx_Quaternion_static_zero"),
	HX_CSTRING("hx_Quaternion_property_w_get"),
	HX_CSTRING("hx_Quaternion_property_w_set"),
	HX_CSTRING("hx_Quaternion_property_x_get"),
	HX_CSTRING("hx_Quaternion_property_x_set"),
	HX_CSTRING("hx_Quaternion_property_y_get"),
	HX_CSTRING("hx_Quaternion_property_y_set"),
	HX_CSTRING("hx_Quaternion_property_z_get"),
	HX_CSTRING("hx_Quaternion_property_z_set"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("conjugate"),
	HX_CSTRING("conjugate_Qtrn"),
	HX_CSTRING("inverse"),
	HX_CSTRING("inverse_Qtrn"),
	HX_CSTRING("isIdentity"),
	HX_CSTRING("isZero"),
	HX_CSTRING("multiply_Qtrn"),
	HX_CSTRING("normalize"),
	HX_CSTRING("normalize_Qtrn"),
	HX_CSTRING("set_Mat"),
	HX_CSTRING("set_Qtrn"),
	HX_CSTRING("set_V3_Flt"),
	HX_CSTRING("set_FltX4"),
	HX_CSTRING("set_ArrFlt"),
	HX_CSTRING("setIdentity"),
	HX_CSTRING("toAxisAngle"),
	HX_CSTRING("get_x"),
	HX_CSTRING("set_x"),
	HX_CSTRING("get_y"),
	HX_CSTRING("set_y"),
	HX_CSTRING("get_z"),
	HX_CSTRING("set_z"),
	HX_CSTRING("get_w"),
	HX_CSTRING("set_w"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Quaternion_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Quaternion_obj::_identity,"_identity");
	HX_MARK_MEMBER_NAME(Quaternion_obj::_zero,"_zero");
	HX_MARK_MEMBER_NAME(Quaternion_obj::hx_Quaternion_Construct,"hx_Quaternion_Construct");
	HX_MARK_MEMBER_NAME(Quaternion_obj::hx_Quaternion_Construct_Mat,"hx_Quaternion_Construct_Mat");
	HX_MARK_MEMBER_NAME(Quaternion_obj::hx_Quaternion_Construct_Qtrn,"hx_Quaternion_Construct_Qtrn");
	HX_MARK_MEMBER_NAME(Quaternion_obj::hx_Quaternion_Construct_V3_Flt,"hx_Quaternion_Construct_V3_Flt");
	HX_MARK_MEMBER_NAME(Quaternion_obj::hx_Quaternion_Construct_FltX4,"hx_Quaternion_Construct_FltX4");
	HX_MARK_MEMBER_NAME(Quaternion_obj::hx_Quaternion_Construct_ArrFlt,"hx_Quaternion_Construct_ArrFlt");
	HX_MARK_MEMBER_NAME(Quaternion_obj::hx_Quaternion_conjugate,"hx_Quaternion_conjugate");
	HX_MARK_MEMBER_NAME(Quaternion_obj::hx_Quaternion_conjugate_Qtrn,"hx_Quaternion_conjugate_Qtrn");
	HX_MARK_MEMBER_NAME(Quaternion_obj::hx_Quaternion_static_createFromAxisAngle,"hx_Quaternion_static_createFromAxisAngle");
	HX_MARK_MEMBER_NAME(Quaternion_obj::hx_Quaternion_static_createFromRotationMatrix,"hx_Quaternion_static_createFromRotationMatrix");
	HX_MARK_MEMBER_NAME(Quaternion_obj::hx_Quaternion_static_identity,"hx_Quaternion_static_identity");
	HX_MARK_MEMBER_NAME(Quaternion_obj::hx_Quaternion_inverse,"hx_Quaternion_inverse");
	HX_MARK_MEMBER_NAME(Quaternion_obj::hx_Quaternion_inverse_Qtrn,"hx_Quaternion_inverse_Qtrn");
	HX_MARK_MEMBER_NAME(Quaternion_obj::hx_Quaternion_isIdentity,"hx_Quaternion_isIdentity");
	HX_MARK_MEMBER_NAME(Quaternion_obj::hx_Quaternion_isZero,"hx_Quaternion_isZero");
	HX_MARK_MEMBER_NAME(Quaternion_obj::hx_Quaternion_static_lerp,"hx_Quaternion_static_lerp");
	HX_MARK_MEMBER_NAME(Quaternion_obj::hx_Quaternion_static_multiply,"hx_Quaternion_static_multiply");
	HX_MARK_MEMBER_NAME(Quaternion_obj::hx_Quaternion_multiply,"hx_Quaternion_multiply");
	HX_MARK_MEMBER_NAME(Quaternion_obj::hx_Quaternion_normalize,"hx_Quaternion_normalize");
	HX_MARK_MEMBER_NAME(Quaternion_obj::hx_Quaternion_normalize_Qtrn,"hx_Quaternion_normalize_Qtrn");
	HX_MARK_MEMBER_NAME(Quaternion_obj::hx_Quaternion_set_Mat,"hx_Quaternion_set_Mat");
	HX_MARK_MEMBER_NAME(Quaternion_obj::hx_Quaternion_set_Qtrn,"hx_Quaternion_set_Qtrn");
	HX_MARK_MEMBER_NAME(Quaternion_obj::hx_Quaternion_set_V3_Flt,"hx_Quaternion_set_V3_Flt");
	HX_MARK_MEMBER_NAME(Quaternion_obj::hx_Quaternion_set_FltX4,"hx_Quaternion_set_FltX4");
	HX_MARK_MEMBER_NAME(Quaternion_obj::hx_Quaternion_set_ArrFlt,"hx_Quaternion_set_ArrFlt");
	HX_MARK_MEMBER_NAME(Quaternion_obj::hx_Quaternion_setIdentity,"hx_Quaternion_setIdentity");
	HX_MARK_MEMBER_NAME(Quaternion_obj::hx_Quaternion_static_slerp,"hx_Quaternion_static_slerp");
	HX_MARK_MEMBER_NAME(Quaternion_obj::hx_Quaternion_static_squad,"hx_Quaternion_static_squad");
	HX_MARK_MEMBER_NAME(Quaternion_obj::hx_Quaternion_toAxisAngle,"hx_Quaternion_toAxisAngle");
	HX_MARK_MEMBER_NAME(Quaternion_obj::hx_Quaternion_static_zero,"hx_Quaternion_static_zero");
	HX_MARK_MEMBER_NAME(Quaternion_obj::hx_Quaternion_property_w_get,"hx_Quaternion_property_w_get");
	HX_MARK_MEMBER_NAME(Quaternion_obj::hx_Quaternion_property_w_set,"hx_Quaternion_property_w_set");
	HX_MARK_MEMBER_NAME(Quaternion_obj::hx_Quaternion_property_x_get,"hx_Quaternion_property_x_get");
	HX_MARK_MEMBER_NAME(Quaternion_obj::hx_Quaternion_property_x_set,"hx_Quaternion_property_x_set");
	HX_MARK_MEMBER_NAME(Quaternion_obj::hx_Quaternion_property_y_get,"hx_Quaternion_property_y_get");
	HX_MARK_MEMBER_NAME(Quaternion_obj::hx_Quaternion_property_y_set,"hx_Quaternion_property_y_set");
	HX_MARK_MEMBER_NAME(Quaternion_obj::hx_Quaternion_property_z_get,"hx_Quaternion_property_z_get");
	HX_MARK_MEMBER_NAME(Quaternion_obj::hx_Quaternion_property_z_set,"hx_Quaternion_property_z_set");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Quaternion_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Quaternion_obj::_identity,"_identity");
	HX_VISIT_MEMBER_NAME(Quaternion_obj::_zero,"_zero");
	HX_VISIT_MEMBER_NAME(Quaternion_obj::hx_Quaternion_Construct,"hx_Quaternion_Construct");
	HX_VISIT_MEMBER_NAME(Quaternion_obj::hx_Quaternion_Construct_Mat,"hx_Quaternion_Construct_Mat");
	HX_VISIT_MEMBER_NAME(Quaternion_obj::hx_Quaternion_Construct_Qtrn,"hx_Quaternion_Construct_Qtrn");
	HX_VISIT_MEMBER_NAME(Quaternion_obj::hx_Quaternion_Construct_V3_Flt,"hx_Quaternion_Construct_V3_Flt");
	HX_VISIT_MEMBER_NAME(Quaternion_obj::hx_Quaternion_Construct_FltX4,"hx_Quaternion_Construct_FltX4");
	HX_VISIT_MEMBER_NAME(Quaternion_obj::hx_Quaternion_Construct_ArrFlt,"hx_Quaternion_Construct_ArrFlt");
	HX_VISIT_MEMBER_NAME(Quaternion_obj::hx_Quaternion_conjugate,"hx_Quaternion_conjugate");
	HX_VISIT_MEMBER_NAME(Quaternion_obj::hx_Quaternion_conjugate_Qtrn,"hx_Quaternion_conjugate_Qtrn");
	HX_VISIT_MEMBER_NAME(Quaternion_obj::hx_Quaternion_static_createFromAxisAngle,"hx_Quaternion_static_createFromAxisAngle");
	HX_VISIT_MEMBER_NAME(Quaternion_obj::hx_Quaternion_static_createFromRotationMatrix,"hx_Quaternion_static_createFromRotationMatrix");
	HX_VISIT_MEMBER_NAME(Quaternion_obj::hx_Quaternion_static_identity,"hx_Quaternion_static_identity");
	HX_VISIT_MEMBER_NAME(Quaternion_obj::hx_Quaternion_inverse,"hx_Quaternion_inverse");
	HX_VISIT_MEMBER_NAME(Quaternion_obj::hx_Quaternion_inverse_Qtrn,"hx_Quaternion_inverse_Qtrn");
	HX_VISIT_MEMBER_NAME(Quaternion_obj::hx_Quaternion_isIdentity,"hx_Quaternion_isIdentity");
	HX_VISIT_MEMBER_NAME(Quaternion_obj::hx_Quaternion_isZero,"hx_Quaternion_isZero");
	HX_VISIT_MEMBER_NAME(Quaternion_obj::hx_Quaternion_static_lerp,"hx_Quaternion_static_lerp");
	HX_VISIT_MEMBER_NAME(Quaternion_obj::hx_Quaternion_static_multiply,"hx_Quaternion_static_multiply");
	HX_VISIT_MEMBER_NAME(Quaternion_obj::hx_Quaternion_multiply,"hx_Quaternion_multiply");
	HX_VISIT_MEMBER_NAME(Quaternion_obj::hx_Quaternion_normalize,"hx_Quaternion_normalize");
	HX_VISIT_MEMBER_NAME(Quaternion_obj::hx_Quaternion_normalize_Qtrn,"hx_Quaternion_normalize_Qtrn");
	HX_VISIT_MEMBER_NAME(Quaternion_obj::hx_Quaternion_set_Mat,"hx_Quaternion_set_Mat");
	HX_VISIT_MEMBER_NAME(Quaternion_obj::hx_Quaternion_set_Qtrn,"hx_Quaternion_set_Qtrn");
	HX_VISIT_MEMBER_NAME(Quaternion_obj::hx_Quaternion_set_V3_Flt,"hx_Quaternion_set_V3_Flt");
	HX_VISIT_MEMBER_NAME(Quaternion_obj::hx_Quaternion_set_FltX4,"hx_Quaternion_set_FltX4");
	HX_VISIT_MEMBER_NAME(Quaternion_obj::hx_Quaternion_set_ArrFlt,"hx_Quaternion_set_ArrFlt");
	HX_VISIT_MEMBER_NAME(Quaternion_obj::hx_Quaternion_setIdentity,"hx_Quaternion_setIdentity");
	HX_VISIT_MEMBER_NAME(Quaternion_obj::hx_Quaternion_static_slerp,"hx_Quaternion_static_slerp");
	HX_VISIT_MEMBER_NAME(Quaternion_obj::hx_Quaternion_static_squad,"hx_Quaternion_static_squad");
	HX_VISIT_MEMBER_NAME(Quaternion_obj::hx_Quaternion_toAxisAngle,"hx_Quaternion_toAxisAngle");
	HX_VISIT_MEMBER_NAME(Quaternion_obj::hx_Quaternion_static_zero,"hx_Quaternion_static_zero");
	HX_VISIT_MEMBER_NAME(Quaternion_obj::hx_Quaternion_property_w_get,"hx_Quaternion_property_w_get");
	HX_VISIT_MEMBER_NAME(Quaternion_obj::hx_Quaternion_property_w_set,"hx_Quaternion_property_w_set");
	HX_VISIT_MEMBER_NAME(Quaternion_obj::hx_Quaternion_property_x_get,"hx_Quaternion_property_x_get");
	HX_VISIT_MEMBER_NAME(Quaternion_obj::hx_Quaternion_property_x_set,"hx_Quaternion_property_x_set");
	HX_VISIT_MEMBER_NAME(Quaternion_obj::hx_Quaternion_property_y_get,"hx_Quaternion_property_y_get");
	HX_VISIT_MEMBER_NAME(Quaternion_obj::hx_Quaternion_property_y_set,"hx_Quaternion_property_y_set");
	HX_VISIT_MEMBER_NAME(Quaternion_obj::hx_Quaternion_property_z_get,"hx_Quaternion_property_z_get");
	HX_VISIT_MEMBER_NAME(Quaternion_obj::hx_Quaternion_property_z_set,"hx_Quaternion_property_z_set");
};

#endif

Class Quaternion_obj::__mClass;

void Quaternion_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.Quaternion"), hx::TCanCast< Quaternion_obj> ,sStaticFields,sMemberFields,
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

void Quaternion_obj::__boot()
{
	hx_Quaternion_Construct= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Quaternion >(),HX_CSTRING("Construct"),(int)0);
	hx_Quaternion_Construct_Mat= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Quaternion >(),HX_CSTRING("Construct_Mat"),(int)1);
	hx_Quaternion_Construct_Qtrn= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Quaternion >(),HX_CSTRING("Construct_Qtrn"),(int)1);
	hx_Quaternion_Construct_V3_Flt= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Quaternion >(),HX_CSTRING("Construct_V3_Flt"),(int)2);
	hx_Quaternion_Construct_FltX4= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Quaternion >(),HX_CSTRING("Construct_FltX4"),(int)4);
	hx_Quaternion_Construct_ArrFlt= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Quaternion >(),HX_CSTRING("Construct_ArrFlt"),(int)1);
	hx_Quaternion_conjugate= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Quaternion >(),HX_CSTRING("conjugate"),(int)1);
	hx_Quaternion_conjugate_Qtrn= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Quaternion >(),HX_CSTRING("conjugate_Qtrn"),(int)2);
	hx_Quaternion_static_createFromAxisAngle= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Quaternion >(),HX_CSTRING("static_createFromAxisAngle"),(int)3);
	hx_Quaternion_static_createFromRotationMatrix= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Quaternion >(),HX_CSTRING("static_createFromRotationMatrix"),(int)2);
	hx_Quaternion_static_identity= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Quaternion >(),HX_CSTRING("static_identity"),(int)0);
	hx_Quaternion_inverse= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Quaternion >(),HX_CSTRING("inverse"),(int)1);
	hx_Quaternion_inverse_Qtrn= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Quaternion >(),HX_CSTRING("inverse_Qtrn"),(int)2);
	hx_Quaternion_isIdentity= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Quaternion >(),HX_CSTRING("isIdentity"),(int)1);
	hx_Quaternion_isZero= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Quaternion >(),HX_CSTRING("isZero"),(int)1);
	hx_Quaternion_static_lerp= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Quaternion >(),HX_CSTRING("static_lerp"),(int)4);
	hx_Quaternion_static_multiply= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Quaternion >(),HX_CSTRING("static_multiply"),(int)3);
	hx_Quaternion_multiply= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Quaternion >(),HX_CSTRING("multiply"),(int)2);
	hx_Quaternion_normalize= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Quaternion >(),HX_CSTRING("normalize"),(int)1);
	hx_Quaternion_normalize_Qtrn= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Quaternion >(),HX_CSTRING("normalize_Qtrn"),(int)2);
	hx_Quaternion_set_Mat= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Quaternion >(),HX_CSTRING("set_Mat"),(int)2);
	hx_Quaternion_set_Qtrn= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Quaternion >(),HX_CSTRING("set_Qtrn"),(int)2);
	hx_Quaternion_set_V3_Flt= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Quaternion >(),HX_CSTRING("set_V3_Flt"),(int)3);
	hx_Quaternion_set_FltX4= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Quaternion >(),HX_CSTRING("set_FltX4"),(int)5);
	hx_Quaternion_set_ArrFlt= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Quaternion >(),HX_CSTRING("set_ArrFlt"),(int)2);
	hx_Quaternion_setIdentity= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Quaternion >(),HX_CSTRING("setIdentity"),(int)1);
	hx_Quaternion_static_slerp= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Quaternion >(),HX_CSTRING("static_slerp"),(int)4);
	hx_Quaternion_static_squad= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Quaternion >(),HX_CSTRING("static_squad"),(int)-1);
	hx_Quaternion_toAxisAngle= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Quaternion >(),HX_CSTRING("toAxisAngle"),(int)2);
	hx_Quaternion_static_zero= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Quaternion >(),HX_CSTRING("static_zero"),(int)0);
	hx_Quaternion_property_w_get= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Quaternion >(),HX_CSTRING("property_w_get"),(int)1);
	hx_Quaternion_property_w_set= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Quaternion >(),HX_CSTRING("property_w_set"),(int)2);
	hx_Quaternion_property_x_get= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Quaternion >(),HX_CSTRING("property_x_get"),(int)1);
	hx_Quaternion_property_x_set= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Quaternion >(),HX_CSTRING("property_x_set"),(int)2);
	hx_Quaternion_property_y_get= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Quaternion >(),HX_CSTRING("property_y_get"),(int)1);
	hx_Quaternion_property_y_set= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Quaternion >(),HX_CSTRING("property_y_set"),(int)2);
	hx_Quaternion_property_z_get= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Quaternion >(),HX_CSTRING("property_z_get"),(int)1);
	hx_Quaternion_property_z_set= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Quaternion >(),HX_CSTRING("property_z_set"),(int)2);
}

} // end namespace org
} // end namespace gameplay3d
