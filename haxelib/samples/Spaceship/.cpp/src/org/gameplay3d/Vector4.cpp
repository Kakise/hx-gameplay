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
#ifndef INCLUDED_org_gameplay3d_Vector4
#include <org/gameplay3d/Vector4.h>
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
#ifndef INCLUDED_org_gameplay3d_util_NativeInterface
#include <org/gameplay3d/util/NativeInterface.h>
#endif
namespace org{
namespace gameplay3d{

Void Vector4_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.Vector4","new",0x8cad1ef6,"org.gameplay3d.Vector4.new","org/gameplay3d/Vector4.hx",11,0xe3a726da)
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

//Vector4_obj::~Vector4_obj() { }

Dynamic Vector4_obj::__CreateEmpty() { return  new Vector4_obj; }
hx::ObjectPtr< Vector4_obj > Vector4_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< Vector4_obj > result = new Vector4_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic Vector4_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vector4_obj > result = new Vector4_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *Vector4_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::intern::INativeBinding_obj)) return operator ::org::gameplay3d::intern::INativeBinding_obj *();
	if (inType==typeid( ::org::gameplay3d::immutable::IVector4_obj)) return operator ::org::gameplay3d::immutable::IVector4_obj *();
	return super::__ToInterface(inType);
}

Void Vector4_obj::add_V4( ::org::gameplay3d::immutable::IVector4 v){
{
		HX_STACK_FRAME("org.gameplay3d.Vector4","add_V4",0x82232ce6,"org.gameplay3d.Vector4.add_V4","org/gameplay3d/Vector4.hx",72,0xe3a726da)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(72)
		::org::gameplay3d::Vector4_obj::hx_Vector4_add(this->nativeObject,(  (((v == null()))) ? Dynamic(null()) : Dynamic(v->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,add_V4,(void))

Void Vector4_obj::clamp_V4X2( ::org::gameplay3d::immutable::IVector4 min,::org::gameplay3d::immutable::IVector4 max){
{
		HX_STACK_FRAME("org.gameplay3d.Vector4","clamp_V4X2",0xf28a66a6,"org.gameplay3d.Vector4.clamp_V4X2","org/gameplay3d/Vector4.hx",90,0xe3a726da)
		HX_STACK_THIS(this)
		HX_STACK_ARG(min,"min")
		HX_STACK_ARG(max,"max")
		HX_STACK_LINE(90)
		::org::gameplay3d::Vector4_obj::hx_Vector4_clamp(this->nativeObject,(  (((min == null()))) ? Dynamic(null()) : Dynamic(min->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((max == null()))) ? Dynamic(null()) : Dynamic(max->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Vector4_obj,clamp_V4X2,(void))

Float Vector4_obj::distance( ::org::gameplay3d::immutable::IVector4 v){
	HX_STACK_FRAME("org.gameplay3d.Vector4","distance",0x4cada4df,"org.gameplay3d.Vector4.distance","org/gameplay3d/Vector4.hx",96,0xe3a726da)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(96)
	return ::org::gameplay3d::Vector4_obj::hx_Vector4_distance(this->nativeObject,(  (((v == null()))) ? Dynamic(null()) : Dynamic(v->__Field(HX_CSTRING("nativeObject"),true)) ));
}


HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,distance,return )

Float Vector4_obj::distanceSquared( ::org::gameplay3d::immutable::IVector4 v){
	HX_STACK_FRAME("org.gameplay3d.Vector4","distanceSquared",0xbf1ff608,"org.gameplay3d.Vector4.distanceSquared","org/gameplay3d/Vector4.hx",102,0xe3a726da)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(102)
	return ::org::gameplay3d::Vector4_obj::hx_Vector4_distanceSquared(this->nativeObject,(  (((v == null()))) ? Dynamic(null()) : Dynamic(v->__Field(HX_CSTRING("nativeObject"),true)) ));
}


HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,distanceSquared,return )

Float Vector4_obj::dot_V4( ::org::gameplay3d::immutable::IVector4 v){
	HX_STACK_FRAME("org.gameplay3d.Vector4","dot_V4",0x15310d7e,"org.gameplay3d.Vector4.dot_V4","org/gameplay3d/Vector4.hx",108,0xe3a726da)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(108)
	return ::org::gameplay3d::Vector4_obj::hx_Vector4_dot(this->nativeObject,(  (((v == null()))) ? Dynamic(null()) : Dynamic(v->__Field(HX_CSTRING("nativeObject"),true)) ));
}


HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,dot_V4,return )

bool Vector4_obj::isOne( ){
	HX_STACK_FRAME("org.gameplay3d.Vector4","isOne",0x118d64b2,"org.gameplay3d.Vector4.isOne","org/gameplay3d/Vector4.hx",126,0xe3a726da)
	HX_STACK_THIS(this)
	HX_STACK_LINE(126)
	return ::org::gameplay3d::Vector4_obj::hx_Vector4_isOne(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,isOne,return )

bool Vector4_obj::isZero( ){
	HX_STACK_FRAME("org.gameplay3d.Vector4","isZero",0x5169475c,"org.gameplay3d.Vector4.isZero","org/gameplay3d/Vector4.hx",132,0xe3a726da)
	HX_STACK_THIS(this)
	HX_STACK_LINE(132)
	return ::org::gameplay3d::Vector4_obj::hx_Vector4_isZero(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,isZero,return )

Float Vector4_obj::length( ){
	HX_STACK_FRAME("org.gameplay3d.Vector4","length",0x82190810,"org.gameplay3d.Vector4.length","org/gameplay3d/Vector4.hx",138,0xe3a726da)
	HX_STACK_THIS(this)
	HX_STACK_LINE(138)
	return ::org::gameplay3d::Vector4_obj::hx_Vector4_length(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,length,return )

Float Vector4_obj::lengthSquared( ){
	HX_STACK_FRAME("org.gameplay3d.Vector4","lengthSquared",0x51decaf7,"org.gameplay3d.Vector4.lengthSquared","org/gameplay3d/Vector4.hx",144,0xe3a726da)
	HX_STACK_THIS(this)
	HX_STACK_LINE(144)
	return ::org::gameplay3d::Vector4_obj::hx_Vector4_lengthSquared(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,lengthSquared,return )

Void Vector4_obj::negate( ){
{
		HX_STACK_FRAME("org.gameplay3d.Vector4","negate",0x4a2ab4ec,"org.gameplay3d.Vector4.negate","org/gameplay3d/Vector4.hx",150,0xe3a726da)
		HX_STACK_THIS(this)
		HX_STACK_LINE(150)
		::org::gameplay3d::Vector4_obj::hx_Vector4_negate(this->nativeObject);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,negate,(void))

::org::gameplay3d::Vector4 Vector4_obj::normalize( ){
	HX_STACK_FRAME("org.gameplay3d.Vector4","normalize",0x687c9aa3,"org.gameplay3d.Vector4.normalize","org/gameplay3d/Vector4.hx",155,0xe3a726da)
	HX_STACK_THIS(this)
	HX_STACK_LINE(156)
	::org::gameplay3d::Vector4_obj::hx_Vector4_normalize(this->nativeObject);
	HX_STACK_LINE(157)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,normalize,return )

Void Vector4_obj::normalize_V4( ::org::gameplay3d::Vector4 dst){
{
		HX_STACK_FRAME("org.gameplay3d.Vector4","normalize_V4",0x43e5ce7a,"org.gameplay3d.Vector4.normalize_V4","org/gameplay3d/Vector4.hx",163,0xe3a726da)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(163)
		::org::gameplay3d::Vector4_obj::hx_Vector4_normalize_V4(this->nativeObject,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,normalize_V4,(void))

Void Vector4_obj::scale( Float scalar){
{
		HX_STACK_FRAME("org.gameplay3d.Vector4","scale",0xc9096ea0,"org.gameplay3d.Vector4.scale","org/gameplay3d/Vector4.hx",175,0xe3a726da)
		HX_STACK_THIS(this)
		HX_STACK_ARG(scalar,"scalar")
		HX_STACK_LINE(175)
		::org::gameplay3d::Vector4_obj::hx_Vector4_scale(this->nativeObject,scalar);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,scale,(void))

Void Vector4_obj::set_V4X2( ::org::gameplay3d::immutable::IVector4 p1,::org::gameplay3d::immutable::IVector4 p2){
{
		HX_STACK_FRAME("org.gameplay3d.Vector4","set_V4X2",0x47cc421f,"org.gameplay3d.Vector4.set_V4X2","org/gameplay3d/Vector4.hx",181,0xe3a726da)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p1,"p1")
		HX_STACK_ARG(p2,"p2")
		HX_STACK_LINE(181)
		::org::gameplay3d::Vector4_obj::hx_Vector4_set_V4X2(this->nativeObject,(  (((p1 == null()))) ? Dynamic(null()) : Dynamic(p1->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((p2 == null()))) ? Dynamic(null()) : Dynamic(p2->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Vector4_obj,set_V4X2,(void))

Void Vector4_obj::set_V4( ::org::gameplay3d::immutable::IVector4 v){
{
		HX_STACK_FRAME("org.gameplay3d.Vector4","set_V4",0x5289aa05,"org.gameplay3d.Vector4.set_V4","org/gameplay3d/Vector4.hx",187,0xe3a726da)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(187)
		::org::gameplay3d::Vector4_obj::hx_Vector4_set_V4(this->nativeObject,(  (((v == null()))) ? Dynamic(null()) : Dynamic(v->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,set_V4,(void))

Void Vector4_obj::set_ArrFlt( Array< Float > array){
{
		HX_STACK_FRAME("org.gameplay3d.Vector4","set_ArrFlt",0x6390c314,"org.gameplay3d.Vector4.set_ArrFlt","org/gameplay3d/Vector4.hx",193,0xe3a726da)
		HX_STACK_THIS(this)
		HX_STACK_ARG(array,"array")
		HX_STACK_LINE(193)
		::org::gameplay3d::Vector4_obj::hx_Vector4_set_ArrFlt(this->nativeObject,array);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,set_ArrFlt,(void))

Void Vector4_obj::set_FltX4( Float x,Float y,Float z,Float w){
{
		HX_STACK_FRAME("org.gameplay3d.Vector4","set_FltX4",0x799da423,"org.gameplay3d.Vector4.set_FltX4","org/gameplay3d/Vector4.hx",199,0xe3a726da)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_ARG(w,"w")
		HX_STACK_LINE(199)
		::org::gameplay3d::Vector4_obj::hx_Vector4_set_FltX4(this->nativeObject,x,y,z,w);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Vector4_obj,set_FltX4,(void))

Void Vector4_obj::subtract_V4( ::org::gameplay3d::immutable::IVector4 v){
{
		HX_STACK_FRAME("org.gameplay3d.Vector4","subtract_V4",0x40d1253f,"org.gameplay3d.Vector4.subtract_V4","org/gameplay3d/Vector4.hx",211,0xe3a726da)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(211)
		::org::gameplay3d::Vector4_obj::hx_Vector4_subtract(this->nativeObject,(  (((v == null()))) ? Dynamic(null()) : Dynamic(v->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,subtract_V4,(void))

Float Vector4_obj::get_x( ){
	HX_STACK_FRAME("org.gameplay3d.Vector4","get_x",0xe19b4565,"org.gameplay3d.Vector4.get_x","org/gameplay3d/Vector4.hx",284,0xe3a726da)
	HX_STACK_THIS(this)
	HX_STACK_LINE(284)
	return ::org::gameplay3d::Vector4_obj::hx_Vector4_property_x_get(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,get_x,return )

Float Vector4_obj::set_x( Float value){
	HX_STACK_FRAME("org.gameplay3d.Vector4","set_x",0xca6a3b71,"org.gameplay3d.Vector4.set_x","org/gameplay3d/Vector4.hx",289,0xe3a726da)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(289)
	return ::org::gameplay3d::Vector4_obj::hx_Vector4_property_x_set(this->nativeObject,value);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,set_x,return )

Float Vector4_obj::get_y( ){
	HX_STACK_FRAME("org.gameplay3d.Vector4","get_y",0xe19b4566,"org.gameplay3d.Vector4.get_y","org/gameplay3d/Vector4.hx",294,0xe3a726da)
	HX_STACK_THIS(this)
	HX_STACK_LINE(294)
	return ::org::gameplay3d::Vector4_obj::hx_Vector4_property_y_get(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,get_y,return )

Float Vector4_obj::set_y( Float value){
	HX_STACK_FRAME("org.gameplay3d.Vector4","set_y",0xca6a3b72,"org.gameplay3d.Vector4.set_y","org/gameplay3d/Vector4.hx",299,0xe3a726da)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(299)
	return ::org::gameplay3d::Vector4_obj::hx_Vector4_property_y_set(this->nativeObject,value);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,set_y,return )

Float Vector4_obj::get_z( ){
	HX_STACK_FRAME("org.gameplay3d.Vector4","get_z",0xe19b4567,"org.gameplay3d.Vector4.get_z","org/gameplay3d/Vector4.hx",304,0xe3a726da)
	HX_STACK_THIS(this)
	HX_STACK_LINE(304)
	return ::org::gameplay3d::Vector4_obj::hx_Vector4_property_z_get(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,get_z,return )

Float Vector4_obj::set_z( Float value){
	HX_STACK_FRAME("org.gameplay3d.Vector4","set_z",0xca6a3b73,"org.gameplay3d.Vector4.set_z","org/gameplay3d/Vector4.hx",309,0xe3a726da)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(309)
	return ::org::gameplay3d::Vector4_obj::hx_Vector4_property_z_set(this->nativeObject,value);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,set_z,return )

Float Vector4_obj::get_w( ){
	HX_STACK_FRAME("org.gameplay3d.Vector4","get_w",0xe19b4564,"org.gameplay3d.Vector4.get_w","org/gameplay3d/Vector4.hx",314,0xe3a726da)
	HX_STACK_THIS(this)
	HX_STACK_LINE(314)
	return ::org::gameplay3d::Vector4_obj::hx_Vector4_property_w_get(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,get_w,return )

Float Vector4_obj::set_w( Float value){
	HX_STACK_FRAME("org.gameplay3d.Vector4","set_w",0xca6a3b70,"org.gameplay3d.Vector4.set_w","org/gameplay3d/Vector4.hx",319,0xe3a726da)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(319)
	return ::org::gameplay3d::Vector4_obj::hx_Vector4_property_w_set(this->nativeObject,value);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,set_w,return )

::org::gameplay3d::Vector4 Vector4_obj::_one;

::org::gameplay3d::Vector4 Vector4_obj::_unitX;

::org::gameplay3d::Vector4 Vector4_obj::_unitY;

::org::gameplay3d::Vector4 Vector4_obj::_unitZ;

::org::gameplay3d::Vector4 Vector4_obj::_unitW;

::org::gameplay3d::Vector4 Vector4_obj::_zero;

::org::gameplay3d::Vector4 Vector4_obj::make( ){
	HX_STACK_FRAME("org.gameplay3d.Vector4","make",0x8a21ae98,"org.gameplay3d.Vector4.make","org/gameplay3d/Vector4.hx",35,0xe3a726da)
	HX_STACK_LINE(36)
	Dynamic _g = ::org::gameplay3d::Vector4_obj::constructNativeObject();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(36)
	return ::org::gameplay3d::Vector4_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,make,return )

::org::gameplay3d::Vector4 Vector4_obj::make_V4( ::org::gameplay3d::immutable::IVector4 copy){
	HX_STACK_FRAME("org.gameplay3d.Vector4","make_V4",0x285fe1a5,"org.gameplay3d.Vector4.make_V4","org/gameplay3d/Vector4.hx",41,0xe3a726da)
	HX_STACK_ARG(copy,"copy")
	HX_STACK_LINE(42)
	Dynamic _g = ::org::gameplay3d::Vector4_obj::constructNativeObject_V4(copy);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(42)
	return ::org::gameplay3d::Vector4_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,make_V4,return )

::org::gameplay3d::Vector4 Vector4_obj::make_V4X2( ::org::gameplay3d::immutable::IVector4 p1,::org::gameplay3d::immutable::IVector4 p2){
	HX_STACK_FRAME("org.gameplay3d.Vector4","make_V4X2",0xe957a1bf,"org.gameplay3d.Vector4.make_V4X2","org/gameplay3d/Vector4.hx",47,0xe3a726da)
	HX_STACK_ARG(p1,"p1")
	HX_STACK_ARG(p2,"p2")
	HX_STACK_LINE(48)
	Dynamic _g = ::org::gameplay3d::Vector4_obj::constructNativeObject_V4X2(p1,p2);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(48)
	return ::org::gameplay3d::Vector4_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector4_obj,make_V4X2,return )

::org::gameplay3d::Vector4 Vector4_obj::make_ArrFlt( Array< Float > array){
	HX_STACK_FRAME("org.gameplay3d.Vector4","make_ArrFlt",0x066b4ab4,"org.gameplay3d.Vector4.make_ArrFlt","org/gameplay3d/Vector4.hx",53,0xe3a726da)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(54)
	Dynamic _g = ::org::gameplay3d::Vector4_obj::constructNativeObject_ArrFlt(array);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(54)
	return ::org::gameplay3d::Vector4_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,make_ArrFlt,return )

::org::gameplay3d::Vector4 Vector4_obj::make_FltX4( Float x,Float y,Float z,Float w){
	HX_STACK_FRAME("org.gameplay3d.Vector4","make_FltX4",0x3205f083,"org.gameplay3d.Vector4.make_FltX4","org/gameplay3d/Vector4.hx",59,0xe3a726da)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(z,"z")
	HX_STACK_ARG(w,"w")
	HX_STACK_LINE(60)
	Dynamic _g = ::org::gameplay3d::Vector4_obj::constructNativeObject_FltX4(x,y,z,w);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(60)
	return ::org::gameplay3d::Vector4_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Vector4_obj,make_FltX4,return )

Void Vector4_obj::add_V4X3( ::org::gameplay3d::immutable::IVector4 v1,::org::gameplay3d::immutable::IVector4 v2,::org::gameplay3d::Vector4 dst){
{
		HX_STACK_FRAME("org.gameplay3d.Vector4","add_V4X3",0xb2f4ff41,"org.gameplay3d.Vector4.add_V4X3","org/gameplay3d/Vector4.hx",66,0xe3a726da)
		HX_STACK_ARG(v1,"v1")
		HX_STACK_ARG(v2,"v2")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(66)
		::org::gameplay3d::Vector4_obj::hx_Vector4_static_add((  (((v1 == null()))) ? Dynamic(null()) : Dynamic(v1->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((v2 == null()))) ? Dynamic(null()) : Dynamic(v2->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector4_obj,add_V4X3,(void))

Float Vector4_obj::angle( ::org::gameplay3d::immutable::IVector4 v1,::org::gameplay3d::immutable::IVector4 v2){
	HX_STACK_FRAME("org.gameplay3d.Vector4","angle",0x731ce3e9,"org.gameplay3d.Vector4.angle","org/gameplay3d/Vector4.hx",78,0xe3a726da)
	HX_STACK_ARG(v1,"v1")
	HX_STACK_ARG(v2,"v2")
	HX_STACK_LINE(78)
	return ::org::gameplay3d::Vector4_obj::hx_Vector4_static_angle((  (((v1 == null()))) ? Dynamic(null()) : Dynamic(v1->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((v2 == null()))) ? Dynamic(null()) : Dynamic(v2->__Field(HX_CSTRING("nativeObject"),true)) ));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector4_obj,angle,return )

Void Vector4_obj::clamp_V4X4( ::org::gameplay3d::immutable::IVector4 v,::org::gameplay3d::immutable::IVector4 min,::org::gameplay3d::immutable::IVector4 max,::org::gameplay3d::Vector4 dst){
{
		HX_STACK_FRAME("org.gameplay3d.Vector4","clamp_V4X4",0xf28a66a8,"org.gameplay3d.Vector4.clamp_V4X4","org/gameplay3d/Vector4.hx",84,0xe3a726da)
		HX_STACK_ARG(v,"v")
		HX_STACK_ARG(min,"min")
		HX_STACK_ARG(max,"max")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(84)
		::org::gameplay3d::Vector4_obj::hx_Vector4_static_clamp((  (((v == null()))) ? Dynamic(null()) : Dynamic(v->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((min == null()))) ? Dynamic(null()) : Dynamic(min->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((max == null()))) ? Dynamic(null()) : Dynamic(max->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Vector4_obj,clamp_V4X4,(void))

Float Vector4_obj::dot_V4X2( ::org::gameplay3d::immutable::IVector4 v1,::org::gameplay3d::immutable::IVector4 v2){
	HX_STACK_FRAME("org.gameplay3d.Vector4","dot_V4X2",0x8dae35d8,"org.gameplay3d.Vector4.dot_V4X2","org/gameplay3d/Vector4.hx",114,0xe3a726da)
	HX_STACK_ARG(v1,"v1")
	HX_STACK_ARG(v2,"v2")
	HX_STACK_LINE(114)
	return ::org::gameplay3d::Vector4_obj::hx_Vector4_static_dot((  (((v1 == null()))) ? Dynamic(null()) : Dynamic(v1->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((v2 == null()))) ? Dynamic(null()) : Dynamic(v2->__Field(HX_CSTRING("nativeObject"),true)) ));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector4_obj,dot_V4X2,return )

::org::gameplay3d::Vector4 Vector4_obj::fromColor( int color){
	HX_STACK_FRAME("org.gameplay3d.Vector4","fromColor",0xbbc0beaf,"org.gameplay3d.Vector4.fromColor","org/gameplay3d/Vector4.hx",120,0xe3a726da)
	HX_STACK_ARG(color,"color")
	HX_STACK_LINE(120)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector4 >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(120)
	Dynamic nativeObject = ::org::gameplay3d::Vector4_obj::hx_Vector4_static_fromColor(color);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(120)
	if (((nativeObject == null()))){
		HX_STACK_LINE(120)
		return null();
	}
	else{
		HX_STACK_LINE(120)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(120)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(120)
			::org::gameplay3d::Vector4 result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(120)
			if (((result == null()))){
				HX_STACK_LINE(120)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(120)
				::org::gameplay3d::Vector4 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(120)
				result = _g;
				HX_STACK_LINE(120)
				ref->set(result);
			}
			HX_STACK_LINE(120)
			return result;
		}
		else{
			HX_STACK_LINE(120)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(120)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(120)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,fromColor,return )

::org::gameplay3d::immutable::IVector4 Vector4_obj::one( ){
	HX_STACK_FRAME("org.gameplay3d.Vector4","one",0x8cade8fc,"org.gameplay3d.Vector4.one","org/gameplay3d/Vector4.hx",169,0xe3a726da)
	HX_STACK_LINE(28)
	if (((::org::gameplay3d::Vector4_obj::_one == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector4 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector4 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(169)
			Dynamic nativeObject = ::org::gameplay3d::Vector4_obj::hx_Vector4_static_one();		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::Vector4 result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Vector4 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return ::org::gameplay3d::Vector4_obj::_one = _g1;
	}
	else{
		HX_STACK_LINE(169)
		Dynamic _g2 = ::org::gameplay3d::Vector4_obj::hx_Vector4_static_one();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector4 _g3 = ::org::gameplay3d::Vector4_obj::_one->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return ::org::gameplay3d::Vector4_obj::_one = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,one,return )

Void Vector4_obj::subtract_V4X3( ::org::gameplay3d::immutable::IVector4 v1,::org::gameplay3d::immutable::IVector4 v2,::org::gameplay3d::Vector4 dst){
{
		HX_STACK_FRAME("org.gameplay3d.Vector4","subtract_V4X3",0xf3547fda,"org.gameplay3d.Vector4.subtract_V4X3","org/gameplay3d/Vector4.hx",205,0xe3a726da)
		HX_STACK_ARG(v1,"v1")
		HX_STACK_ARG(v2,"v2")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(205)
		::org::gameplay3d::Vector4_obj::hx_Vector4_static_subtract((  (((v1 == null()))) ? Dynamic(null()) : Dynamic(v1->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((v2 == null()))) ? Dynamic(null()) : Dynamic(v2->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector4_obj,subtract_V4X3,(void))

::org::gameplay3d::immutable::IVector4 Vector4_obj::unitW( ){
	HX_STACK_FRAME("org.gameplay3d.Vector4","unitW",0xf7220969,"org.gameplay3d.Vector4.unitW","org/gameplay3d/Vector4.hx",217,0xe3a726da)
	HX_STACK_LINE(28)
	if (((::org::gameplay3d::Vector4_obj::_unitW == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector4 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector4 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(217)
			Dynamic nativeObject = ::org::gameplay3d::Vector4_obj::hx_Vector4_static_unitW();		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::Vector4 result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Vector4 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return ::org::gameplay3d::Vector4_obj::_unitW = _g1;
	}
	else{
		HX_STACK_LINE(217)
		Dynamic _g2 = ::org::gameplay3d::Vector4_obj::hx_Vector4_static_unitW();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector4 _g3 = ::org::gameplay3d::Vector4_obj::_unitW->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return ::org::gameplay3d::Vector4_obj::_unitW = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,unitW,return )

::org::gameplay3d::immutable::IVector4 Vector4_obj::unitX( ){
	HX_STACK_FRAME("org.gameplay3d.Vector4","unitX",0xf722096a,"org.gameplay3d.Vector4.unitX","org/gameplay3d/Vector4.hx",223,0xe3a726da)
	HX_STACK_LINE(28)
	if (((::org::gameplay3d::Vector4_obj::_unitX == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector4 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector4 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(223)
			Dynamic nativeObject = ::org::gameplay3d::Vector4_obj::hx_Vector4_static_unitX();		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::Vector4 result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Vector4 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return ::org::gameplay3d::Vector4_obj::_unitX = _g1;
	}
	else{
		HX_STACK_LINE(223)
		Dynamic _g2 = ::org::gameplay3d::Vector4_obj::hx_Vector4_static_unitX();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector4 _g3 = ::org::gameplay3d::Vector4_obj::_unitX->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return ::org::gameplay3d::Vector4_obj::_unitX = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,unitX,return )

::org::gameplay3d::immutable::IVector4 Vector4_obj::unitY( ){
	HX_STACK_FRAME("org.gameplay3d.Vector4","unitY",0xf722096b,"org.gameplay3d.Vector4.unitY","org/gameplay3d/Vector4.hx",229,0xe3a726da)
	HX_STACK_LINE(28)
	if (((::org::gameplay3d::Vector4_obj::_unitY == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector4 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector4 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(229)
			Dynamic nativeObject = ::org::gameplay3d::Vector4_obj::hx_Vector4_static_unitY();		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::Vector4 result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Vector4 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return ::org::gameplay3d::Vector4_obj::_unitY = _g1;
	}
	else{
		HX_STACK_LINE(229)
		Dynamic _g2 = ::org::gameplay3d::Vector4_obj::hx_Vector4_static_unitY();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector4 _g3 = ::org::gameplay3d::Vector4_obj::_unitY->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return ::org::gameplay3d::Vector4_obj::_unitY = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,unitY,return )

::org::gameplay3d::immutable::IVector4 Vector4_obj::unitZ( ){
	HX_STACK_FRAME("org.gameplay3d.Vector4","unitZ",0xf722096c,"org.gameplay3d.Vector4.unitZ","org/gameplay3d/Vector4.hx",235,0xe3a726da)
	HX_STACK_LINE(28)
	if (((::org::gameplay3d::Vector4_obj::_unitZ == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector4 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector4 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(235)
			Dynamic nativeObject = ::org::gameplay3d::Vector4_obj::hx_Vector4_static_unitZ();		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::Vector4 result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Vector4 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return ::org::gameplay3d::Vector4_obj::_unitZ = _g1;
	}
	else{
		HX_STACK_LINE(235)
		Dynamic _g2 = ::org::gameplay3d::Vector4_obj::hx_Vector4_static_unitZ();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector4 _g3 = ::org::gameplay3d::Vector4_obj::_unitZ->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return ::org::gameplay3d::Vector4_obj::_unitZ = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,unitZ,return )

::org::gameplay3d::immutable::IVector4 Vector4_obj::zero( ){
	HX_STACK_FRAME("org.gameplay3d.Vector4","zero",0x92bc83d2,"org.gameplay3d.Vector4.zero","org/gameplay3d/Vector4.hx",241,0xe3a726da)
	HX_STACK_LINE(28)
	if (((::org::gameplay3d::Vector4_obj::_zero == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector4 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector4 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(241)
			Dynamic nativeObject = ::org::gameplay3d::Vector4_obj::hx_Vector4_static_zero();		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::Vector4 result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Vector4 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return ::org::gameplay3d::Vector4_obj::_zero = _g1;
	}
	else{
		HX_STACK_LINE(241)
		Dynamic _g2 = ::org::gameplay3d::Vector4_obj::hx_Vector4_static_zero();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector4 _g3 = ::org::gameplay3d::Vector4_obj::_zero->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return ::org::gameplay3d::Vector4_obj::_zero = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,zero,return )

Dynamic Vector4_obj::constructNativeObject( ){
	HX_STACK_FRAME("org.gameplay3d.Vector4","constructNativeObject",0x29741e83,"org.gameplay3d.Vector4.constructNativeObject","org/gameplay3d/Vector4.hx",251,0xe3a726da)
	HX_STACK_LINE(251)
	return ::org::gameplay3d::Vector4_obj::hx_Vector4_Construct();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,constructNativeObject,return )

Dynamic Vector4_obj::constructNativeObject_V4( ::org::gameplay3d::immutable::IVector4 copy){
	HX_STACK_FRAME("org.gameplay3d.Vector4","constructNativeObject_V4",0x6251f69a,"org.gameplay3d.Vector4.constructNativeObject_V4","org/gameplay3d/Vector4.hx",257,0xe3a726da)
	HX_STACK_ARG(copy,"copy")
	HX_STACK_LINE(257)
	return ::org::gameplay3d::Vector4_obj::hx_Vector4_Construct_V4((  (((copy == null()))) ? Dynamic(null()) : Dynamic(copy->__Field(HX_CSTRING("nativeObject"),true)) ));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,constructNativeObject_V4,return )

Dynamic Vector4_obj::constructNativeObject_V4X2( ::org::gameplay3d::immutable::IVector4 p1,::org::gameplay3d::immutable::IVector4 p2){
	HX_STACK_FRAME("org.gameplay3d.Vector4","constructNativeObject_V4X2",0x13b09df4,"org.gameplay3d.Vector4.constructNativeObject_V4X2","org/gameplay3d/Vector4.hx",263,0xe3a726da)
	HX_STACK_ARG(p1,"p1")
	HX_STACK_ARG(p2,"p2")
	HX_STACK_LINE(263)
	return ::org::gameplay3d::Vector4_obj::hx_Vector4_Construct_V4X2((  (((p1 == null()))) ? Dynamic(null()) : Dynamic(p1->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((p2 == null()))) ? Dynamic(null()) : Dynamic(p2->__Field(HX_CSTRING("nativeObject"),true)) ));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector4_obj,constructNativeObject_V4X2,return )

Dynamic Vector4_obj::constructNativeObject_ArrFlt( Array< Float > array){
	HX_STACK_FRAME("org.gameplay3d.Vector4","constructNativeObject_ArrFlt",0x36237e29,"org.gameplay3d.Vector4.constructNativeObject_ArrFlt","org/gameplay3d/Vector4.hx",269,0xe3a726da)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(269)
	return ::org::gameplay3d::Vector4_obj::hx_Vector4_Construct_ArrFlt(array);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,constructNativeObject_ArrFlt,return )

Dynamic Vector4_obj::constructNativeObject_FltX4( Float x,Float y,Float z,Float w){
	HX_STACK_FRAME("org.gameplay3d.Vector4","constructNativeObject_FltX4",0x1589a2ae,"org.gameplay3d.Vector4.constructNativeObject_FltX4","org/gameplay3d/Vector4.hx",275,0xe3a726da)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(z,"z")
	HX_STACK_ARG(w,"w")
	HX_STACK_LINE(275)
	return ::org::gameplay3d::Vector4_obj::hx_Vector4_Construct_FltX4(x,y,z,w);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Vector4_obj,constructNativeObject_FltX4,return )

Dynamic Vector4_obj::hx_Vector4_Construct;

Dynamic Vector4_obj::hx_Vector4_Construct_V4;

Dynamic Vector4_obj::hx_Vector4_Construct_V4X2;

Dynamic Vector4_obj::hx_Vector4_Construct_ArrFlt;

Dynamic Vector4_obj::hx_Vector4_Construct_FltX4;

Dynamic Vector4_obj::hx_Vector4_static_add;

Dynamic Vector4_obj::hx_Vector4_add;

Dynamic Vector4_obj::hx_Vector4_static_angle;

Dynamic Vector4_obj::hx_Vector4_static_clamp;

Dynamic Vector4_obj::hx_Vector4_clamp;

Dynamic Vector4_obj::hx_Vector4_distance;

Dynamic Vector4_obj::hx_Vector4_distanceSquared;

Dynamic Vector4_obj::hx_Vector4_dot;

Dynamic Vector4_obj::hx_Vector4_static_dot;

Dynamic Vector4_obj::hx_Vector4_static_fromColor;

Dynamic Vector4_obj::hx_Vector4_isOne;

Dynamic Vector4_obj::hx_Vector4_isZero;

Dynamic Vector4_obj::hx_Vector4_length;

Dynamic Vector4_obj::hx_Vector4_lengthSquared;

Dynamic Vector4_obj::hx_Vector4_negate;

Dynamic Vector4_obj::hx_Vector4_normalize;

Dynamic Vector4_obj::hx_Vector4_normalize_V4;

Dynamic Vector4_obj::hx_Vector4_static_one;

Dynamic Vector4_obj::hx_Vector4_scale;

Dynamic Vector4_obj::hx_Vector4_set_V4X2;

Dynamic Vector4_obj::hx_Vector4_set_V4;

Dynamic Vector4_obj::hx_Vector4_set_ArrFlt;

Dynamic Vector4_obj::hx_Vector4_set_FltX4;

Dynamic Vector4_obj::hx_Vector4_static_subtract;

Dynamic Vector4_obj::hx_Vector4_subtract;

Dynamic Vector4_obj::hx_Vector4_static_unitW;

Dynamic Vector4_obj::hx_Vector4_static_unitX;

Dynamic Vector4_obj::hx_Vector4_static_unitY;

Dynamic Vector4_obj::hx_Vector4_static_unitZ;

Dynamic Vector4_obj::hx_Vector4_static_zero;

Dynamic Vector4_obj::hx_Vector4_property_w_get;

Dynamic Vector4_obj::hx_Vector4_property_w_set;

Dynamic Vector4_obj::hx_Vector4_property_x_get;

Dynamic Vector4_obj::hx_Vector4_property_x_set;

Dynamic Vector4_obj::hx_Vector4_property_y_get;

Dynamic Vector4_obj::hx_Vector4_property_y_set;

Dynamic Vector4_obj::hx_Vector4_property_z_get;

Dynamic Vector4_obj::hx_Vector4_property_z_set;


Vector4_obj::Vector4_obj()
{
}

Dynamic Vector4_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return get_x(); }
		if (HX_FIELD_EQ(inName,"y") ) { return get_y(); }
		if (HX_FIELD_EQ(inName,"z") ) { return get_z(); }
		if (HX_FIELD_EQ(inName,"w") ) { return get_w(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"one") ) { return one_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_one") ) { return _one; }
		if (HX_FIELD_EQ(inName,"make") ) { return make_dyn(); }
		if (HX_FIELD_EQ(inName,"zero") ) { return zero_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_zero") ) { return _zero; }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle_dyn(); }
		if (HX_FIELD_EQ(inName,"unitW") ) { return unitW_dyn(); }
		if (HX_FIELD_EQ(inName,"unitX") ) { return unitX_dyn(); }
		if (HX_FIELD_EQ(inName,"unitY") ) { return unitY_dyn(); }
		if (HX_FIELD_EQ(inName,"unitZ") ) { return unitZ_dyn(); }
		if (HX_FIELD_EQ(inName,"isOne") ) { return isOne_dyn(); }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale_dyn(); }
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
		if (HX_FIELD_EQ(inName,"_unitX") ) { return _unitX; }
		if (HX_FIELD_EQ(inName,"_unitY") ) { return _unitY; }
		if (HX_FIELD_EQ(inName,"_unitZ") ) { return _unitZ; }
		if (HX_FIELD_EQ(inName,"_unitW") ) { return _unitW; }
		if (HX_FIELD_EQ(inName,"add_V4") ) { return add_V4_dyn(); }
		if (HX_FIELD_EQ(inName,"dot_V4") ) { return dot_V4_dyn(); }
		if (HX_FIELD_EQ(inName,"isZero") ) { return isZero_dyn(); }
		if (HX_FIELD_EQ(inName,"length") ) { return length_dyn(); }
		if (HX_FIELD_EQ(inName,"negate") ) { return negate_dyn(); }
		if (HX_FIELD_EQ(inName,"set_V4") ) { return set_V4_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"make_V4") ) { return make_V4_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"add_V4X3") ) { return add_V4X3_dyn(); }
		if (HX_FIELD_EQ(inName,"dot_V4X2") ) { return dot_V4X2_dyn(); }
		if (HX_FIELD_EQ(inName,"distance") ) { return distance_dyn(); }
		if (HX_FIELD_EQ(inName,"set_V4X2") ) { return set_V4X2_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"make_V4X2") ) { return make_V4X2_dyn(); }
		if (HX_FIELD_EQ(inName,"fromColor") ) { return fromColor_dyn(); }
		if (HX_FIELD_EQ(inName,"normalize") ) { return normalize_dyn(); }
		if (HX_FIELD_EQ(inName,"set_FltX4") ) { return set_FltX4_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"make_FltX4") ) { return make_FltX4_dyn(); }
		if (HX_FIELD_EQ(inName,"clamp_V4X4") ) { return clamp_V4X4_dyn(); }
		if (HX_FIELD_EQ(inName,"clamp_V4X2") ) { return clamp_V4X2_dyn(); }
		if (HX_FIELD_EQ(inName,"set_ArrFlt") ) { return set_ArrFlt_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"make_ArrFlt") ) { return make_ArrFlt_dyn(); }
		if (HX_FIELD_EQ(inName,"subtract_V4") ) { return subtract_V4_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"normalize_V4") ) { return normalize_V4_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"subtract_V4X3") ) { return subtract_V4X3_dyn(); }
		if (HX_FIELD_EQ(inName,"lengthSquared") ) { return lengthSquared_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"hx_Vector4_add") ) { return hx_Vector4_add; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_dot") ) { return hx_Vector4_dot; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"distanceSquared") ) { return distanceSquared_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hx_Vector4_clamp") ) { return hx_Vector4_clamp; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_isOne") ) { return hx_Vector4_isOne; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_scale") ) { return hx_Vector4_scale; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"hx_Vector4_isZero") ) { return hx_Vector4_isZero; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_length") ) { return hx_Vector4_length; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_negate") ) { return hx_Vector4_negate; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_set_V4") ) { return hx_Vector4_set_V4; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hx_Vector4_distance") ) { return hx_Vector4_distance; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_set_V4X2") ) { return hx_Vector4_set_V4X2; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_subtract") ) { return hx_Vector4_subtract; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Vector4_Construct") ) { return hx_Vector4_Construct; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_normalize") ) { return hx_Vector4_normalize; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_set_FltX4") ) { return hx_Vector4_set_FltX4; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"constructNativeObject") ) { return constructNativeObject_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Vector4_static_add") ) { return hx_Vector4_static_add; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_static_dot") ) { return hx_Vector4_static_dot; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_static_one") ) { return hx_Vector4_static_one; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_set_ArrFlt") ) { return hx_Vector4_set_ArrFlt; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Vector4_static_zero") ) { return hx_Vector4_static_zero; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_Vector4_Construct_V4") ) { return hx_Vector4_Construct_V4; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_static_angle") ) { return hx_Vector4_static_angle; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_static_clamp") ) { return hx_Vector4_static_clamp; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_normalize_V4") ) { return hx_Vector4_normalize_V4; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_static_unitW") ) { return hx_Vector4_static_unitW; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_static_unitX") ) { return hx_Vector4_static_unitX; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_static_unitY") ) { return hx_Vector4_static_unitY; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_static_unitZ") ) { return hx_Vector4_static_unitZ; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"constructNativeObject_V4") ) { return constructNativeObject_V4_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Vector4_lengthSquared") ) { return hx_Vector4_lengthSquared; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_Vector4_Construct_V4X2") ) { return hx_Vector4_Construct_V4X2; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_property_w_get") ) { return hx_Vector4_property_w_get; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_property_w_set") ) { return hx_Vector4_property_w_set; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_property_x_get") ) { return hx_Vector4_property_x_get; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_property_x_set") ) { return hx_Vector4_property_x_set; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_property_y_get") ) { return hx_Vector4_property_y_get; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_property_y_set") ) { return hx_Vector4_property_y_set; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_property_z_get") ) { return hx_Vector4_property_z_get; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_property_z_set") ) { return hx_Vector4_property_z_set; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"constructNativeObject_V4X2") ) { return constructNativeObject_V4X2_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Vector4_Construct_FltX4") ) { return hx_Vector4_Construct_FltX4; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_distanceSquared") ) { return hx_Vector4_distanceSquared; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_static_subtract") ) { return hx_Vector4_static_subtract; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"constructNativeObject_FltX4") ) { return constructNativeObject_FltX4_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Vector4_Construct_ArrFlt") ) { return hx_Vector4_Construct_ArrFlt; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_static_fromColor") ) { return hx_Vector4_static_fromColor; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"constructNativeObject_ArrFlt") ) { return constructNativeObject_ArrFlt_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Vector4_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return set_x(inValue); }
		if (HX_FIELD_EQ(inName,"y") ) { return set_y(inValue); }
		if (HX_FIELD_EQ(inName,"z") ) { return set_z(inValue); }
		if (HX_FIELD_EQ(inName,"w") ) { return set_w(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_one") ) { _one=inValue.Cast< ::org::gameplay3d::Vector4 >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_zero") ) { _zero=inValue.Cast< ::org::gameplay3d::Vector4 >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_unitX") ) { _unitX=inValue.Cast< ::org::gameplay3d::Vector4 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_unitY") ) { _unitY=inValue.Cast< ::org::gameplay3d::Vector4 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_unitZ") ) { _unitZ=inValue.Cast< ::org::gameplay3d::Vector4 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_unitW") ) { _unitW=inValue.Cast< ::org::gameplay3d::Vector4 >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"hx_Vector4_add") ) { hx_Vector4_add=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_dot") ) { hx_Vector4_dot=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hx_Vector4_clamp") ) { hx_Vector4_clamp=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_isOne") ) { hx_Vector4_isOne=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_scale") ) { hx_Vector4_scale=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"hx_Vector4_isZero") ) { hx_Vector4_isZero=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_length") ) { hx_Vector4_length=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_negate") ) { hx_Vector4_negate=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_set_V4") ) { hx_Vector4_set_V4=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hx_Vector4_distance") ) { hx_Vector4_distance=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_set_V4X2") ) { hx_Vector4_set_V4X2=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_subtract") ) { hx_Vector4_subtract=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Vector4_Construct") ) { hx_Vector4_Construct=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_normalize") ) { hx_Vector4_normalize=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_set_FltX4") ) { hx_Vector4_set_FltX4=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hx_Vector4_static_add") ) { hx_Vector4_static_add=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_static_dot") ) { hx_Vector4_static_dot=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_static_one") ) { hx_Vector4_static_one=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_set_ArrFlt") ) { hx_Vector4_set_ArrFlt=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Vector4_static_zero") ) { hx_Vector4_static_zero=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_Vector4_Construct_V4") ) { hx_Vector4_Construct_V4=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_static_angle") ) { hx_Vector4_static_angle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_static_clamp") ) { hx_Vector4_static_clamp=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_normalize_V4") ) { hx_Vector4_normalize_V4=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_static_unitW") ) { hx_Vector4_static_unitW=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_static_unitX") ) { hx_Vector4_static_unitX=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_static_unitY") ) { hx_Vector4_static_unitY=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_static_unitZ") ) { hx_Vector4_static_unitZ=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_Vector4_lengthSquared") ) { hx_Vector4_lengthSquared=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_Vector4_Construct_V4X2") ) { hx_Vector4_Construct_V4X2=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_property_w_get") ) { hx_Vector4_property_w_get=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_property_w_set") ) { hx_Vector4_property_w_set=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_property_x_get") ) { hx_Vector4_property_x_get=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_property_x_set") ) { hx_Vector4_property_x_set=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_property_y_get") ) { hx_Vector4_property_y_get=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_property_y_set") ) { hx_Vector4_property_y_set=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_property_z_get") ) { hx_Vector4_property_z_get=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_property_z_set") ) { hx_Vector4_property_z_set=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_Vector4_Construct_FltX4") ) { hx_Vector4_Construct_FltX4=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_distanceSquared") ) { hx_Vector4_distanceSquared=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_static_subtract") ) { hx_Vector4_static_subtract=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"hx_Vector4_Construct_ArrFlt") ) { hx_Vector4_Construct_ArrFlt=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector4_static_fromColor") ) { hx_Vector4_static_fromColor=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Vector4_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("z"));
	outFields->push(HX_CSTRING("w"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_one"),
	HX_CSTRING("_unitX"),
	HX_CSTRING("_unitY"),
	HX_CSTRING("_unitZ"),
	HX_CSTRING("_unitW"),
	HX_CSTRING("_zero"),
	HX_CSTRING("make"),
	HX_CSTRING("make_V4"),
	HX_CSTRING("make_V4X2"),
	HX_CSTRING("make_ArrFlt"),
	HX_CSTRING("make_FltX4"),
	HX_CSTRING("add_V4X3"),
	HX_CSTRING("angle"),
	HX_CSTRING("clamp_V4X4"),
	HX_CSTRING("dot_V4X2"),
	HX_CSTRING("fromColor"),
	HX_CSTRING("one"),
	HX_CSTRING("subtract_V4X3"),
	HX_CSTRING("unitW"),
	HX_CSTRING("unitX"),
	HX_CSTRING("unitY"),
	HX_CSTRING("unitZ"),
	HX_CSTRING("zero"),
	HX_CSTRING("constructNativeObject"),
	HX_CSTRING("constructNativeObject_V4"),
	HX_CSTRING("constructNativeObject_V4X2"),
	HX_CSTRING("constructNativeObject_ArrFlt"),
	HX_CSTRING("constructNativeObject_FltX4"),
	HX_CSTRING("hx_Vector4_Construct"),
	HX_CSTRING("hx_Vector4_Construct_V4"),
	HX_CSTRING("hx_Vector4_Construct_V4X2"),
	HX_CSTRING("hx_Vector4_Construct_ArrFlt"),
	HX_CSTRING("hx_Vector4_Construct_FltX4"),
	HX_CSTRING("hx_Vector4_static_add"),
	HX_CSTRING("hx_Vector4_add"),
	HX_CSTRING("hx_Vector4_static_angle"),
	HX_CSTRING("hx_Vector4_static_clamp"),
	HX_CSTRING("hx_Vector4_clamp"),
	HX_CSTRING("hx_Vector4_distance"),
	HX_CSTRING("hx_Vector4_distanceSquared"),
	HX_CSTRING("hx_Vector4_dot"),
	HX_CSTRING("hx_Vector4_static_dot"),
	HX_CSTRING("hx_Vector4_static_fromColor"),
	HX_CSTRING("hx_Vector4_isOne"),
	HX_CSTRING("hx_Vector4_isZero"),
	HX_CSTRING("hx_Vector4_length"),
	HX_CSTRING("hx_Vector4_lengthSquared"),
	HX_CSTRING("hx_Vector4_negate"),
	HX_CSTRING("hx_Vector4_normalize"),
	HX_CSTRING("hx_Vector4_normalize_V4"),
	HX_CSTRING("hx_Vector4_static_one"),
	HX_CSTRING("hx_Vector4_scale"),
	HX_CSTRING("hx_Vector4_set_V4X2"),
	HX_CSTRING("hx_Vector4_set_V4"),
	HX_CSTRING("hx_Vector4_set_ArrFlt"),
	HX_CSTRING("hx_Vector4_set_FltX4"),
	HX_CSTRING("hx_Vector4_static_subtract"),
	HX_CSTRING("hx_Vector4_subtract"),
	HX_CSTRING("hx_Vector4_static_unitW"),
	HX_CSTRING("hx_Vector4_static_unitX"),
	HX_CSTRING("hx_Vector4_static_unitY"),
	HX_CSTRING("hx_Vector4_static_unitZ"),
	HX_CSTRING("hx_Vector4_static_zero"),
	HX_CSTRING("hx_Vector4_property_w_get"),
	HX_CSTRING("hx_Vector4_property_w_set"),
	HX_CSTRING("hx_Vector4_property_x_get"),
	HX_CSTRING("hx_Vector4_property_x_set"),
	HX_CSTRING("hx_Vector4_property_y_get"),
	HX_CSTRING("hx_Vector4_property_y_set"),
	HX_CSTRING("hx_Vector4_property_z_get"),
	HX_CSTRING("hx_Vector4_property_z_set"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("add_V4"),
	HX_CSTRING("clamp_V4X2"),
	HX_CSTRING("distance"),
	HX_CSTRING("distanceSquared"),
	HX_CSTRING("dot_V4"),
	HX_CSTRING("isOne"),
	HX_CSTRING("isZero"),
	HX_CSTRING("length"),
	HX_CSTRING("lengthSquared"),
	HX_CSTRING("negate"),
	HX_CSTRING("normalize"),
	HX_CSTRING("normalize_V4"),
	HX_CSTRING("scale"),
	HX_CSTRING("set_V4X2"),
	HX_CSTRING("set_V4"),
	HX_CSTRING("set_ArrFlt"),
	HX_CSTRING("set_FltX4"),
	HX_CSTRING("subtract_V4"),
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
	HX_MARK_MEMBER_NAME(Vector4_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Vector4_obj::_one,"_one");
	HX_MARK_MEMBER_NAME(Vector4_obj::_unitX,"_unitX");
	HX_MARK_MEMBER_NAME(Vector4_obj::_unitY,"_unitY");
	HX_MARK_MEMBER_NAME(Vector4_obj::_unitZ,"_unitZ");
	HX_MARK_MEMBER_NAME(Vector4_obj::_unitW,"_unitW");
	HX_MARK_MEMBER_NAME(Vector4_obj::_zero,"_zero");
	HX_MARK_MEMBER_NAME(Vector4_obj::hx_Vector4_Construct,"hx_Vector4_Construct");
	HX_MARK_MEMBER_NAME(Vector4_obj::hx_Vector4_Construct_V4,"hx_Vector4_Construct_V4");
	HX_MARK_MEMBER_NAME(Vector4_obj::hx_Vector4_Construct_V4X2,"hx_Vector4_Construct_V4X2");
	HX_MARK_MEMBER_NAME(Vector4_obj::hx_Vector4_Construct_ArrFlt,"hx_Vector4_Construct_ArrFlt");
	HX_MARK_MEMBER_NAME(Vector4_obj::hx_Vector4_Construct_FltX4,"hx_Vector4_Construct_FltX4");
	HX_MARK_MEMBER_NAME(Vector4_obj::hx_Vector4_static_add,"hx_Vector4_static_add");
	HX_MARK_MEMBER_NAME(Vector4_obj::hx_Vector4_add,"hx_Vector4_add");
	HX_MARK_MEMBER_NAME(Vector4_obj::hx_Vector4_static_angle,"hx_Vector4_static_angle");
	HX_MARK_MEMBER_NAME(Vector4_obj::hx_Vector4_static_clamp,"hx_Vector4_static_clamp");
	HX_MARK_MEMBER_NAME(Vector4_obj::hx_Vector4_clamp,"hx_Vector4_clamp");
	HX_MARK_MEMBER_NAME(Vector4_obj::hx_Vector4_distance,"hx_Vector4_distance");
	HX_MARK_MEMBER_NAME(Vector4_obj::hx_Vector4_distanceSquared,"hx_Vector4_distanceSquared");
	HX_MARK_MEMBER_NAME(Vector4_obj::hx_Vector4_dot,"hx_Vector4_dot");
	HX_MARK_MEMBER_NAME(Vector4_obj::hx_Vector4_static_dot,"hx_Vector4_static_dot");
	HX_MARK_MEMBER_NAME(Vector4_obj::hx_Vector4_static_fromColor,"hx_Vector4_static_fromColor");
	HX_MARK_MEMBER_NAME(Vector4_obj::hx_Vector4_isOne,"hx_Vector4_isOne");
	HX_MARK_MEMBER_NAME(Vector4_obj::hx_Vector4_isZero,"hx_Vector4_isZero");
	HX_MARK_MEMBER_NAME(Vector4_obj::hx_Vector4_length,"hx_Vector4_length");
	HX_MARK_MEMBER_NAME(Vector4_obj::hx_Vector4_lengthSquared,"hx_Vector4_lengthSquared");
	HX_MARK_MEMBER_NAME(Vector4_obj::hx_Vector4_negate,"hx_Vector4_negate");
	HX_MARK_MEMBER_NAME(Vector4_obj::hx_Vector4_normalize,"hx_Vector4_normalize");
	HX_MARK_MEMBER_NAME(Vector4_obj::hx_Vector4_normalize_V4,"hx_Vector4_normalize_V4");
	HX_MARK_MEMBER_NAME(Vector4_obj::hx_Vector4_static_one,"hx_Vector4_static_one");
	HX_MARK_MEMBER_NAME(Vector4_obj::hx_Vector4_scale,"hx_Vector4_scale");
	HX_MARK_MEMBER_NAME(Vector4_obj::hx_Vector4_set_V4X2,"hx_Vector4_set_V4X2");
	HX_MARK_MEMBER_NAME(Vector4_obj::hx_Vector4_set_V4,"hx_Vector4_set_V4");
	HX_MARK_MEMBER_NAME(Vector4_obj::hx_Vector4_set_ArrFlt,"hx_Vector4_set_ArrFlt");
	HX_MARK_MEMBER_NAME(Vector4_obj::hx_Vector4_set_FltX4,"hx_Vector4_set_FltX4");
	HX_MARK_MEMBER_NAME(Vector4_obj::hx_Vector4_static_subtract,"hx_Vector4_static_subtract");
	HX_MARK_MEMBER_NAME(Vector4_obj::hx_Vector4_subtract,"hx_Vector4_subtract");
	HX_MARK_MEMBER_NAME(Vector4_obj::hx_Vector4_static_unitW,"hx_Vector4_static_unitW");
	HX_MARK_MEMBER_NAME(Vector4_obj::hx_Vector4_static_unitX,"hx_Vector4_static_unitX");
	HX_MARK_MEMBER_NAME(Vector4_obj::hx_Vector4_static_unitY,"hx_Vector4_static_unitY");
	HX_MARK_MEMBER_NAME(Vector4_obj::hx_Vector4_static_unitZ,"hx_Vector4_static_unitZ");
	HX_MARK_MEMBER_NAME(Vector4_obj::hx_Vector4_static_zero,"hx_Vector4_static_zero");
	HX_MARK_MEMBER_NAME(Vector4_obj::hx_Vector4_property_w_get,"hx_Vector4_property_w_get");
	HX_MARK_MEMBER_NAME(Vector4_obj::hx_Vector4_property_w_set,"hx_Vector4_property_w_set");
	HX_MARK_MEMBER_NAME(Vector4_obj::hx_Vector4_property_x_get,"hx_Vector4_property_x_get");
	HX_MARK_MEMBER_NAME(Vector4_obj::hx_Vector4_property_x_set,"hx_Vector4_property_x_set");
	HX_MARK_MEMBER_NAME(Vector4_obj::hx_Vector4_property_y_get,"hx_Vector4_property_y_get");
	HX_MARK_MEMBER_NAME(Vector4_obj::hx_Vector4_property_y_set,"hx_Vector4_property_y_set");
	HX_MARK_MEMBER_NAME(Vector4_obj::hx_Vector4_property_z_get,"hx_Vector4_property_z_get");
	HX_MARK_MEMBER_NAME(Vector4_obj::hx_Vector4_property_z_set,"hx_Vector4_property_z_set");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vector4_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Vector4_obj::_one,"_one");
	HX_VISIT_MEMBER_NAME(Vector4_obj::_unitX,"_unitX");
	HX_VISIT_MEMBER_NAME(Vector4_obj::_unitY,"_unitY");
	HX_VISIT_MEMBER_NAME(Vector4_obj::_unitZ,"_unitZ");
	HX_VISIT_MEMBER_NAME(Vector4_obj::_unitW,"_unitW");
	HX_VISIT_MEMBER_NAME(Vector4_obj::_zero,"_zero");
	HX_VISIT_MEMBER_NAME(Vector4_obj::hx_Vector4_Construct,"hx_Vector4_Construct");
	HX_VISIT_MEMBER_NAME(Vector4_obj::hx_Vector4_Construct_V4,"hx_Vector4_Construct_V4");
	HX_VISIT_MEMBER_NAME(Vector4_obj::hx_Vector4_Construct_V4X2,"hx_Vector4_Construct_V4X2");
	HX_VISIT_MEMBER_NAME(Vector4_obj::hx_Vector4_Construct_ArrFlt,"hx_Vector4_Construct_ArrFlt");
	HX_VISIT_MEMBER_NAME(Vector4_obj::hx_Vector4_Construct_FltX4,"hx_Vector4_Construct_FltX4");
	HX_VISIT_MEMBER_NAME(Vector4_obj::hx_Vector4_static_add,"hx_Vector4_static_add");
	HX_VISIT_MEMBER_NAME(Vector4_obj::hx_Vector4_add,"hx_Vector4_add");
	HX_VISIT_MEMBER_NAME(Vector4_obj::hx_Vector4_static_angle,"hx_Vector4_static_angle");
	HX_VISIT_MEMBER_NAME(Vector4_obj::hx_Vector4_static_clamp,"hx_Vector4_static_clamp");
	HX_VISIT_MEMBER_NAME(Vector4_obj::hx_Vector4_clamp,"hx_Vector4_clamp");
	HX_VISIT_MEMBER_NAME(Vector4_obj::hx_Vector4_distance,"hx_Vector4_distance");
	HX_VISIT_MEMBER_NAME(Vector4_obj::hx_Vector4_distanceSquared,"hx_Vector4_distanceSquared");
	HX_VISIT_MEMBER_NAME(Vector4_obj::hx_Vector4_dot,"hx_Vector4_dot");
	HX_VISIT_MEMBER_NAME(Vector4_obj::hx_Vector4_static_dot,"hx_Vector4_static_dot");
	HX_VISIT_MEMBER_NAME(Vector4_obj::hx_Vector4_static_fromColor,"hx_Vector4_static_fromColor");
	HX_VISIT_MEMBER_NAME(Vector4_obj::hx_Vector4_isOne,"hx_Vector4_isOne");
	HX_VISIT_MEMBER_NAME(Vector4_obj::hx_Vector4_isZero,"hx_Vector4_isZero");
	HX_VISIT_MEMBER_NAME(Vector4_obj::hx_Vector4_length,"hx_Vector4_length");
	HX_VISIT_MEMBER_NAME(Vector4_obj::hx_Vector4_lengthSquared,"hx_Vector4_lengthSquared");
	HX_VISIT_MEMBER_NAME(Vector4_obj::hx_Vector4_negate,"hx_Vector4_negate");
	HX_VISIT_MEMBER_NAME(Vector4_obj::hx_Vector4_normalize,"hx_Vector4_normalize");
	HX_VISIT_MEMBER_NAME(Vector4_obj::hx_Vector4_normalize_V4,"hx_Vector4_normalize_V4");
	HX_VISIT_MEMBER_NAME(Vector4_obj::hx_Vector4_static_one,"hx_Vector4_static_one");
	HX_VISIT_MEMBER_NAME(Vector4_obj::hx_Vector4_scale,"hx_Vector4_scale");
	HX_VISIT_MEMBER_NAME(Vector4_obj::hx_Vector4_set_V4X2,"hx_Vector4_set_V4X2");
	HX_VISIT_MEMBER_NAME(Vector4_obj::hx_Vector4_set_V4,"hx_Vector4_set_V4");
	HX_VISIT_MEMBER_NAME(Vector4_obj::hx_Vector4_set_ArrFlt,"hx_Vector4_set_ArrFlt");
	HX_VISIT_MEMBER_NAME(Vector4_obj::hx_Vector4_set_FltX4,"hx_Vector4_set_FltX4");
	HX_VISIT_MEMBER_NAME(Vector4_obj::hx_Vector4_static_subtract,"hx_Vector4_static_subtract");
	HX_VISIT_MEMBER_NAME(Vector4_obj::hx_Vector4_subtract,"hx_Vector4_subtract");
	HX_VISIT_MEMBER_NAME(Vector4_obj::hx_Vector4_static_unitW,"hx_Vector4_static_unitW");
	HX_VISIT_MEMBER_NAME(Vector4_obj::hx_Vector4_static_unitX,"hx_Vector4_static_unitX");
	HX_VISIT_MEMBER_NAME(Vector4_obj::hx_Vector4_static_unitY,"hx_Vector4_static_unitY");
	HX_VISIT_MEMBER_NAME(Vector4_obj::hx_Vector4_static_unitZ,"hx_Vector4_static_unitZ");
	HX_VISIT_MEMBER_NAME(Vector4_obj::hx_Vector4_static_zero,"hx_Vector4_static_zero");
	HX_VISIT_MEMBER_NAME(Vector4_obj::hx_Vector4_property_w_get,"hx_Vector4_property_w_get");
	HX_VISIT_MEMBER_NAME(Vector4_obj::hx_Vector4_property_w_set,"hx_Vector4_property_w_set");
	HX_VISIT_MEMBER_NAME(Vector4_obj::hx_Vector4_property_x_get,"hx_Vector4_property_x_get");
	HX_VISIT_MEMBER_NAME(Vector4_obj::hx_Vector4_property_x_set,"hx_Vector4_property_x_set");
	HX_VISIT_MEMBER_NAME(Vector4_obj::hx_Vector4_property_y_get,"hx_Vector4_property_y_get");
	HX_VISIT_MEMBER_NAME(Vector4_obj::hx_Vector4_property_y_set,"hx_Vector4_property_y_set");
	HX_VISIT_MEMBER_NAME(Vector4_obj::hx_Vector4_property_z_get,"hx_Vector4_property_z_get");
	HX_VISIT_MEMBER_NAME(Vector4_obj::hx_Vector4_property_z_set,"hx_Vector4_property_z_set");
};

#endif

Class Vector4_obj::__mClass;

void Vector4_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.Vector4"), hx::TCanCast< Vector4_obj> ,sStaticFields,sMemberFields,
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

void Vector4_obj::__boot()
{
	hx_Vector4_Construct= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector4 >(),HX_CSTRING("Construct"),(int)0);
	hx_Vector4_Construct_V4= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector4 >(),HX_CSTRING("Construct_V4"),(int)1);
	hx_Vector4_Construct_V4X2= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector4 >(),HX_CSTRING("Construct_V4X2"),(int)2);
	hx_Vector4_Construct_ArrFlt= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector4 >(),HX_CSTRING("Construct_ArrFlt"),(int)1);
	hx_Vector4_Construct_FltX4= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector4 >(),HX_CSTRING("Construct_FltX4"),(int)4);
	hx_Vector4_static_add= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector4 >(),HX_CSTRING("static_add"),(int)3);
	hx_Vector4_add= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector4 >(),HX_CSTRING("add"),(int)2);
	hx_Vector4_static_angle= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector4 >(),HX_CSTRING("static_angle"),(int)2);
	hx_Vector4_static_clamp= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector4 >(),HX_CSTRING("static_clamp"),(int)4);
	hx_Vector4_clamp= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector4 >(),HX_CSTRING("clamp"),(int)3);
	hx_Vector4_distance= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector4 >(),HX_CSTRING("distance"),(int)2);
	hx_Vector4_distanceSquared= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector4 >(),HX_CSTRING("distanceSquared"),(int)2);
	hx_Vector4_dot= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector4 >(),HX_CSTRING("dot"),(int)2);
	hx_Vector4_static_dot= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector4 >(),HX_CSTRING("static_dot"),(int)2);
	hx_Vector4_static_fromColor= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector4 >(),HX_CSTRING("static_fromColor"),(int)1);
	hx_Vector4_isOne= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector4 >(),HX_CSTRING("isOne"),(int)1);
	hx_Vector4_isZero= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector4 >(),HX_CSTRING("isZero"),(int)1);
	hx_Vector4_length= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector4 >(),HX_CSTRING("length"),(int)1);
	hx_Vector4_lengthSquared= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector4 >(),HX_CSTRING("lengthSquared"),(int)1);
	hx_Vector4_negate= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector4 >(),HX_CSTRING("negate"),(int)1);
	hx_Vector4_normalize= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector4 >(),HX_CSTRING("normalize"),(int)1);
	hx_Vector4_normalize_V4= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector4 >(),HX_CSTRING("normalize_V4"),(int)2);
	hx_Vector4_static_one= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector4 >(),HX_CSTRING("static_one"),(int)0);
	hx_Vector4_scale= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector4 >(),HX_CSTRING("scale"),(int)2);
	hx_Vector4_set_V4X2= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector4 >(),HX_CSTRING("set_V4X2"),(int)3);
	hx_Vector4_set_V4= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector4 >(),HX_CSTRING("set_V4"),(int)2);
	hx_Vector4_set_ArrFlt= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector4 >(),HX_CSTRING("set_ArrFlt"),(int)2);
	hx_Vector4_set_FltX4= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector4 >(),HX_CSTRING("set_FltX4"),(int)5);
	hx_Vector4_static_subtract= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector4 >(),HX_CSTRING("static_subtract"),(int)3);
	hx_Vector4_subtract= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector4 >(),HX_CSTRING("subtract"),(int)2);
	hx_Vector4_static_unitW= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector4 >(),HX_CSTRING("static_unitW"),(int)0);
	hx_Vector4_static_unitX= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector4 >(),HX_CSTRING("static_unitX"),(int)0);
	hx_Vector4_static_unitY= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector4 >(),HX_CSTRING("static_unitY"),(int)0);
	hx_Vector4_static_unitZ= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector4 >(),HX_CSTRING("static_unitZ"),(int)0);
	hx_Vector4_static_zero= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector4 >(),HX_CSTRING("static_zero"),(int)0);
	hx_Vector4_property_w_get= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector4 >(),HX_CSTRING("property_w_get"),(int)1);
	hx_Vector4_property_w_set= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector4 >(),HX_CSTRING("property_w_set"),(int)2);
	hx_Vector4_property_x_get= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector4 >(),HX_CSTRING("property_x_get"),(int)1);
	hx_Vector4_property_x_set= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector4 >(),HX_CSTRING("property_x_set"),(int)2);
	hx_Vector4_property_y_get= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector4 >(),HX_CSTRING("property_y_get"),(int)1);
	hx_Vector4_property_y_set= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector4 >(),HX_CSTRING("property_y_set"),(int)2);
	hx_Vector4_property_z_get= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector4 >(),HX_CSTRING("property_z_get"),(int)1);
	hx_Vector4_property_z_set= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector4 >(),HX_CSTRING("property_z_set"),(int)2);
}

} // end namespace org
} // end namespace gameplay3d
