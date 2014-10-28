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
#ifndef INCLUDED_org_gameplay3d_Vector2
#include <org/gameplay3d/Vector2.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IVector2
#include <org/gameplay3d/immutable/IVector2.h>
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

Void Vector2_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.Vector2","new",0x65dff5f4,"org.gameplay3d.Vector2.new","org/gameplay3d/Vector2.hx",11,0xe254b99c)
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

//Vector2_obj::~Vector2_obj() { }

Dynamic Vector2_obj::__CreateEmpty() { return  new Vector2_obj; }
hx::ObjectPtr< Vector2_obj > Vector2_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< Vector2_obj > result = new Vector2_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic Vector2_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vector2_obj > result = new Vector2_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *Vector2_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::intern::INativeBinding_obj)) return operator ::org::gameplay3d::intern::INativeBinding_obj *();
	if (inType==typeid( ::org::gameplay3d::immutable::IVector2_obj)) return operator ::org::gameplay3d::immutable::IVector2_obj *();
	return super::__ToInterface(inType);
}

Void Vector2_obj::add_V2( ::org::gameplay3d::immutable::IVector2 v){
{
		HX_STACK_FRAME("org.gameplay3d.Vector2","add_V2",0x0fbe48a6,"org.gameplay3d.Vector2.add_V2","org/gameplay3d/Vector2.hx",68,0xe254b99c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(68)
		::org::gameplay3d::Vector2_obj::hx_Vector2_add(this->nativeObject,(  (((v == null()))) ? Dynamic(null()) : Dynamic(v->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector2_obj,add_V2,(void))

Void Vector2_obj::clamp_V2X2( ::org::gameplay3d::immutable::IVector2 min,::org::gameplay3d::immutable::IVector2 max){
{
		HX_STACK_FRAME("org.gameplay3d.Vector2","clamp_V2X2",0x6f0a06e6,"org.gameplay3d.Vector2.clamp_V2X2","org/gameplay3d/Vector2.hx",86,0xe254b99c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(min,"min")
		HX_STACK_ARG(max,"max")
		HX_STACK_LINE(86)
		::org::gameplay3d::Vector2_obj::hx_Vector2_clamp(this->nativeObject,(  (((min == null()))) ? Dynamic(null()) : Dynamic(min->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((max == null()))) ? Dynamic(null()) : Dynamic(max->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Vector2_obj,clamp_V2X2,(void))

Float Vector2_obj::distance( ::org::gameplay3d::immutable::IVector2 v){
	HX_STACK_FRAME("org.gameplay3d.Vector2","distance",0xcc18b521,"org.gameplay3d.Vector2.distance","org/gameplay3d/Vector2.hx",92,0xe254b99c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(92)
	return ::org::gameplay3d::Vector2_obj::hx_Vector2_distance(this->nativeObject,(  (((v == null()))) ? Dynamic(null()) : Dynamic(v->__Field(HX_CSTRING("nativeObject"),true)) ));
}


HX_DEFINE_DYNAMIC_FUNC1(Vector2_obj,distance,return )

Float Vector2_obj::distanceSquared( ::org::gameplay3d::immutable::IVector2 v){
	HX_STACK_FRAME("org.gameplay3d.Vector2","distanceSquared",0xb9385206,"org.gameplay3d.Vector2.distanceSquared","org/gameplay3d/Vector2.hx",98,0xe254b99c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(98)
	return ::org::gameplay3d::Vector2_obj::hx_Vector2_distanceSquared(this->nativeObject,(  (((v == null()))) ? Dynamic(null()) : Dynamic(v->__Field(HX_CSTRING("nativeObject"),true)) ));
}


HX_DEFINE_DYNAMIC_FUNC1(Vector2_obj,distanceSquared,return )

Float Vector2_obj::dot_V2( ::org::gameplay3d::immutable::IVector2 v){
	HX_STACK_FRAME("org.gameplay3d.Vector2","dot_V2",0xa2cc293e,"org.gameplay3d.Vector2.dot_V2","org/gameplay3d/Vector2.hx",104,0xe254b99c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(104)
	return ::org::gameplay3d::Vector2_obj::hx_Vector2_dot(this->nativeObject,(  (((v == null()))) ? Dynamic(null()) : Dynamic(v->__Field(HX_CSTRING("nativeObject"),true)) ));
}


HX_DEFINE_DYNAMIC_FUNC1(Vector2_obj,dot_V2,return )

bool Vector2_obj::isOne( ){
	HX_STACK_FRAME("org.gameplay3d.Vector2","isOne",0xbe627730,"org.gameplay3d.Vector2.isOne","org/gameplay3d/Vector2.hx",116,0xe254b99c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(116)
	return ::org::gameplay3d::Vector2_obj::hx_Vector2_isOne(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector2_obj,isOne,return )

bool Vector2_obj::isZero( ){
	HX_STACK_FRAME("org.gameplay3d.Vector2","isZero",0xdf04631e,"org.gameplay3d.Vector2.isZero","org/gameplay3d/Vector2.hx",122,0xe254b99c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(122)
	return ::org::gameplay3d::Vector2_obj::hx_Vector2_isZero(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector2_obj,isZero,return )

Float Vector2_obj::length( ){
	HX_STACK_FRAME("org.gameplay3d.Vector2","length",0x0fb423d2,"org.gameplay3d.Vector2.length","org/gameplay3d/Vector2.hx",128,0xe254b99c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(128)
	return ::org::gameplay3d::Vector2_obj::hx_Vector2_length(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector2_obj,length,return )

Float Vector2_obj::lengthSquared( ){
	HX_STACK_FRAME("org.gameplay3d.Vector2","lengthSquared",0x27e78b75,"org.gameplay3d.Vector2.lengthSquared","org/gameplay3d/Vector2.hx",134,0xe254b99c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(134)
	return ::org::gameplay3d::Vector2_obj::hx_Vector2_lengthSquared(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector2_obj,lengthSquared,return )

Void Vector2_obj::negate( ){
{
		HX_STACK_FRAME("org.gameplay3d.Vector2","negate",0xd7c5d0ae,"org.gameplay3d.Vector2.negate","org/gameplay3d/Vector2.hx",140,0xe254b99c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(140)
		::org::gameplay3d::Vector2_obj::hx_Vector2_negate(this->nativeObject);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Vector2_obj,negate,(void))

::org::gameplay3d::Vector2 Vector2_obj::normalize( ){
	HX_STACK_FRAME("org.gameplay3d.Vector2","normalize",0x66bfc421,"org.gameplay3d.Vector2.normalize","org/gameplay3d/Vector2.hx",145,0xe254b99c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(146)
	::org::gameplay3d::Vector2_obj::hx_Vector2_normalize(this->nativeObject);
	HX_STACK_LINE(147)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector2_obj,normalize,return )

Void Vector2_obj::normalize_V2( ::org::gameplay3d::Vector2 dst){
{
		HX_STACK_FRAME("org.gameplay3d.Vector2","normalize_V2",0xbe8b27ba,"org.gameplay3d.Vector2.normalize_V2","org/gameplay3d/Vector2.hx",153,0xe254b99c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(153)
		::org::gameplay3d::Vector2_obj::hx_Vector2_normalize_V2(this->nativeObject,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector2_obj,normalize_V2,(void))

Void Vector2_obj::rotate( ::org::gameplay3d::immutable::IVector2 point,Float angle){
{
		HX_STACK_FRAME("org.gameplay3d.Vector2","rotate",0x3bccd547,"org.gameplay3d.Vector2.rotate","org/gameplay3d/Vector2.hx",165,0xe254b99c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(point,"point")
		HX_STACK_ARG(angle,"angle")
		HX_STACK_LINE(165)
		::org::gameplay3d::Vector2_obj::hx_Vector2_rotate(this->nativeObject,(  (((point == null()))) ? Dynamic(null()) : Dynamic(point->__Field(HX_CSTRING("nativeObject"),true)) ),angle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Vector2_obj,rotate,(void))

Void Vector2_obj::scale_V2( ::org::gameplay3d::immutable::IVector2 scale){
{
		HX_STACK_FRAME("org.gameplay3d.Vector2","scale_V2",0x6184e6dd,"org.gameplay3d.Vector2.scale_V2","org/gameplay3d/Vector2.hx",171,0xe254b99c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(scale,"scale")
		HX_STACK_LINE(171)
		::org::gameplay3d::Vector2_obj::hx_Vector2_scale_V2(this->nativeObject,(  (((scale == null()))) ? Dynamic(null()) : Dynamic(scale->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector2_obj,scale_V2,(void))

Void Vector2_obj::scale_Flt( Float scalar){
{
		HX_STACK_FRAME("org.gameplay3d.Vector2","scale_Flt",0xf2b9296d,"org.gameplay3d.Vector2.scale_Flt","org/gameplay3d/Vector2.hx",177,0xe254b99c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(scalar,"scalar")
		HX_STACK_LINE(177)
		::org::gameplay3d::Vector2_obj::hx_Vector2_scale_Flt(this->nativeObject,scalar);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector2_obj,scale_Flt,(void))

Void Vector2_obj::set_V2X2( ::org::gameplay3d::immutable::IVector2 p1,::org::gameplay3d::immutable::IVector2 p2){
{
		HX_STACK_FRAME("org.gameplay3d.Vector2","set_V2X2",0xc735cddf,"org.gameplay3d.Vector2.set_V2X2","org/gameplay3d/Vector2.hx",183,0xe254b99c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p1,"p1")
		HX_STACK_ARG(p2,"p2")
		HX_STACK_LINE(183)
		::org::gameplay3d::Vector2_obj::hx_Vector2_set_V2X2(this->nativeObject,(  (((p1 == null()))) ? Dynamic(null()) : Dynamic(p1->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((p2 == null()))) ? Dynamic(null()) : Dynamic(p2->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Vector2_obj,set_V2X2,(void))

Void Vector2_obj::set_V2( ::org::gameplay3d::immutable::IVector2 v){
{
		HX_STACK_FRAME("org.gameplay3d.Vector2","set_V2",0xe024c5c5,"org.gameplay3d.Vector2.set_V2","org/gameplay3d/Vector2.hx",189,0xe254b99c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(189)
		::org::gameplay3d::Vector2_obj::hx_Vector2_set_V2(this->nativeObject,(  (((v == null()))) ? Dynamic(null()) : Dynamic(v->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector2_obj,set_V2,(void))

Void Vector2_obj::set_ArrFlt( Array< Float > array){
{
		HX_STACK_FRAME("org.gameplay3d.Vector2","set_ArrFlt",0xe011e7d6,"org.gameplay3d.Vector2.set_ArrFlt","org/gameplay3d/Vector2.hx",195,0xe254b99c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(array,"array")
		HX_STACK_LINE(195)
		::org::gameplay3d::Vector2_obj::hx_Vector2_set_ArrFlt(this->nativeObject,array);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector2_obj,set_ArrFlt,(void))

Void Vector2_obj::set_FltX2( Float x,Float y){
{
		HX_STACK_FRAME("org.gameplay3d.Vector2","set_FltX2",0x77e0cd9f,"org.gameplay3d.Vector2.set_FltX2","org/gameplay3d/Vector2.hx",201,0xe254b99c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(201)
		::org::gameplay3d::Vector2_obj::hx_Vector2_set_FltX2(this->nativeObject,x,y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Vector2_obj,set_FltX2,(void))

Void Vector2_obj::smooth( ::org::gameplay3d::immutable::IVector2 target,Float elapsedTime,Float responseTime){
{
		HX_STACK_FRAME("org.gameplay3d.Vector2","smooth",0x7817971a,"org.gameplay3d.Vector2.smooth","org/gameplay3d/Vector2.hx",207,0xe254b99c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(elapsedTime,"elapsedTime")
		HX_STACK_ARG(responseTime,"responseTime")
		HX_STACK_LINE(207)
		::org::gameplay3d::Vector2_obj::hx_Vector2_smooth(this->nativeObject,(  (((target == null()))) ? Dynamic(null()) : Dynamic(target->__Field(HX_CSTRING("nativeObject"),true)) ),elapsedTime,responseTime);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Vector2_obj,smooth,(void))

Void Vector2_obj::subtract_V2( ::org::gameplay3d::immutable::IVector2 v){
{
		HX_STACK_FRAME("org.gameplay3d.Vector2","subtract_V2",0xb5502a3b,"org.gameplay3d.Vector2.subtract_V2","org/gameplay3d/Vector2.hx",219,0xe254b99c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(219)
		::org::gameplay3d::Vector2_obj::hx_Vector2_subtract(this->nativeObject,(  (((v == null()))) ? Dynamic(null()) : Dynamic(v->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector2_obj,subtract_V2,(void))

Float Vector2_obj::get_x( ){
	HX_STACK_FRAME("org.gameplay3d.Vector2","get_x",0x8e7057e3,"org.gameplay3d.Vector2.get_x","org/gameplay3d/Vector2.hx",280,0xe254b99c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(280)
	return ::org::gameplay3d::Vector2_obj::hx_Vector2_property_x_get(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector2_obj,get_x,return )

Float Vector2_obj::set_x( Float value){
	HX_STACK_FRAME("org.gameplay3d.Vector2","set_x",0x773f4def,"org.gameplay3d.Vector2.set_x","org/gameplay3d/Vector2.hx",285,0xe254b99c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(285)
	return ::org::gameplay3d::Vector2_obj::hx_Vector2_property_x_set(this->nativeObject,value);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector2_obj,set_x,return )

Float Vector2_obj::get_y( ){
	HX_STACK_FRAME("org.gameplay3d.Vector2","get_y",0x8e7057e4,"org.gameplay3d.Vector2.get_y","org/gameplay3d/Vector2.hx",290,0xe254b99c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(290)
	return ::org::gameplay3d::Vector2_obj::hx_Vector2_property_y_get(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector2_obj,get_y,return )

Float Vector2_obj::set_y( Float value){
	HX_STACK_FRAME("org.gameplay3d.Vector2","set_y",0x773f4df0,"org.gameplay3d.Vector2.set_y","org/gameplay3d/Vector2.hx",295,0xe254b99c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(295)
	return ::org::gameplay3d::Vector2_obj::hx_Vector2_property_y_set(this->nativeObject,value);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector2_obj,set_y,return )

::org::gameplay3d::Vector2 Vector2_obj::_one;

::org::gameplay3d::Vector2 Vector2_obj::_unitX;

::org::gameplay3d::Vector2 Vector2_obj::_unitY;

::org::gameplay3d::Vector2 Vector2_obj::_zero;

::org::gameplay3d::Vector2 Vector2_obj::make( ){
	HX_STACK_FRAME("org.gameplay3d.Vector2","make",0xbd6af5da,"org.gameplay3d.Vector2.make","org/gameplay3d/Vector2.hx",31,0xe254b99c)
	HX_STACK_LINE(32)
	Dynamic _g = ::org::gameplay3d::Vector2_obj::constructNativeObject();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(32)
	return ::org::gameplay3d::Vector2_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector2_obj,make,return )

::org::gameplay3d::Vector2 Vector2_obj::make_V2( ::org::gameplay3d::immutable::IVector2 copy){
	HX_STACK_FRAME("org.gameplay3d.Vector2","make_V2",0x827d0fa1,"org.gameplay3d.Vector2.make_V2","org/gameplay3d/Vector2.hx",37,0xe254b99c)
	HX_STACK_ARG(copy,"copy")
	HX_STACK_LINE(38)
	Dynamic _g = ::org::gameplay3d::Vector2_obj::constructNativeObject_V2(copy);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(38)
	return ::org::gameplay3d::Vector2_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector2_obj,make_V2,return )

::org::gameplay3d::Vector2 Vector2_obj::make_V2X2( ::org::gameplay3d::immutable::IVector2 p1,::org::gameplay3d::immutable::IVector2 p2){
	HX_STACK_FRAME("org.gameplay3d.Vector2","make_V2X2",0xe79946bb,"org.gameplay3d.Vector2.make_V2X2","org/gameplay3d/Vector2.hx",43,0xe254b99c)
	HX_STACK_ARG(p1,"p1")
	HX_STACK_ARG(p2,"p2")
	HX_STACK_LINE(44)
	Dynamic _g = ::org::gameplay3d::Vector2_obj::constructNativeObject_V2X2(p1,p2);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(44)
	return ::org::gameplay3d::Vector2_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector2_obj,make_V2X2,return )

::org::gameplay3d::Vector2 Vector2_obj::make_ArrFlt( Array< Float > array){
	HX_STACK_FRAME("org.gameplay3d.Vector2","make_ArrFlt",0x7aea4fb2,"org.gameplay3d.Vector2.make_ArrFlt","org/gameplay3d/Vector2.hx",49,0xe254b99c)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(50)
	Dynamic _g = ::org::gameplay3d::Vector2_obj::constructNativeObject_ArrFlt(array);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(50)
	return ::org::gameplay3d::Vector2_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector2_obj,make_ArrFlt,return )

::org::gameplay3d::Vector2 Vector2_obj::make_FltX2( Float x,Float y){
	HX_STACK_FRAME("org.gameplay3d.Vector2","make_FltX2",0xae871543,"org.gameplay3d.Vector2.make_FltX2","org/gameplay3d/Vector2.hx",55,0xe254b99c)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(56)
	Dynamic _g = ::org::gameplay3d::Vector2_obj::constructNativeObject_FltX2(x,y);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(56)
	return ::org::gameplay3d::Vector2_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector2_obj,make_FltX2,return )

Void Vector2_obj::add_V2X3( ::org::gameplay3d::immutable::IVector2 v1,::org::gameplay3d::immutable::IVector2 v2,::org::gameplay3d::Vector2 dst){
{
		HX_STACK_FRAME("org.gameplay3d.Vector2","add_V2X3",0x325e8b01,"org.gameplay3d.Vector2.add_V2X3","org/gameplay3d/Vector2.hx",62,0xe254b99c)
		HX_STACK_ARG(v1,"v1")
		HX_STACK_ARG(v2,"v2")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(62)
		::org::gameplay3d::Vector2_obj::hx_Vector2_static_add((  (((v1 == null()))) ? Dynamic(null()) : Dynamic(v1->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((v2 == null()))) ? Dynamic(null()) : Dynamic(v2->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector2_obj,add_V2X3,(void))

Float Vector2_obj::angle( ::org::gameplay3d::immutable::IVector2 v1,::org::gameplay3d::immutable::IVector2 v2){
	HX_STACK_FRAME("org.gameplay3d.Vector2","angle",0x1ff1f667,"org.gameplay3d.Vector2.angle","org/gameplay3d/Vector2.hx",74,0xe254b99c)
	HX_STACK_ARG(v1,"v1")
	HX_STACK_ARG(v2,"v2")
	HX_STACK_LINE(74)
	return ::org::gameplay3d::Vector2_obj::hx_Vector2_static_angle((  (((v1 == null()))) ? Dynamic(null()) : Dynamic(v1->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((v2 == null()))) ? Dynamic(null()) : Dynamic(v2->__Field(HX_CSTRING("nativeObject"),true)) ));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector2_obj,angle,return )

Void Vector2_obj::clamp_V2X4( ::org::gameplay3d::immutable::IVector2 v,::org::gameplay3d::immutable::IVector2 min,::org::gameplay3d::immutable::IVector2 max,::org::gameplay3d::Vector2 dst){
{
		HX_STACK_FRAME("org.gameplay3d.Vector2","clamp_V2X4",0x6f0a06e8,"org.gameplay3d.Vector2.clamp_V2X4","org/gameplay3d/Vector2.hx",80,0xe254b99c)
		HX_STACK_ARG(v,"v")
		HX_STACK_ARG(min,"min")
		HX_STACK_ARG(max,"max")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(80)
		::org::gameplay3d::Vector2_obj::hx_Vector2_static_clamp((  (((v == null()))) ? Dynamic(null()) : Dynamic(v->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((min == null()))) ? Dynamic(null()) : Dynamic(min->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((max == null()))) ? Dynamic(null()) : Dynamic(max->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Vector2_obj,clamp_V2X4,(void))

Float Vector2_obj::dot_V2X2( ::org::gameplay3d::immutable::IVector2 v1,::org::gameplay3d::immutable::IVector2 v2){
	HX_STACK_FRAME("org.gameplay3d.Vector2","dot_V2X2",0x0d17c198,"org.gameplay3d.Vector2.dot_V2X2","org/gameplay3d/Vector2.hx",110,0xe254b99c)
	HX_STACK_ARG(v1,"v1")
	HX_STACK_ARG(v2,"v2")
	HX_STACK_LINE(110)
	return ::org::gameplay3d::Vector2_obj::hx_Vector2_static_dot((  (((v1 == null()))) ? Dynamic(null()) : Dynamic(v1->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((v2 == null()))) ? Dynamic(null()) : Dynamic(v2->__Field(HX_CSTRING("nativeObject"),true)) ));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector2_obj,dot_V2X2,return )

::org::gameplay3d::immutable::IVector2 Vector2_obj::one( ){
	HX_STACK_FRAME("org.gameplay3d.Vector2","one",0x65e0bffa,"org.gameplay3d.Vector2.one","org/gameplay3d/Vector2.hx",159,0xe254b99c)
	HX_STACK_LINE(28)
	if (((::org::gameplay3d::Vector2_obj::_one == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector2 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector2 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(159)
			Dynamic nativeObject = ::org::gameplay3d::Vector2_obj::hx_Vector2_static_one();		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::Vector2 result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Vector2 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return ::org::gameplay3d::Vector2_obj::_one = _g1;
	}
	else{
		HX_STACK_LINE(159)
		Dynamic _g2 = ::org::gameplay3d::Vector2_obj::hx_Vector2_static_one();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector2 _g3 = ::org::gameplay3d::Vector2_obj::_one->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return ::org::gameplay3d::Vector2_obj::_one = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector2_obj,one,return )

Void Vector2_obj::subtract_V2X3( ::org::gameplay3d::immutable::IVector2 v1,::org::gameplay3d::immutable::IVector2 v2,::org::gameplay3d::Vector2 dst){
{
		HX_STACK_FRAME("org.gameplay3d.Vector2","subtract_V2X3",0xc95bbbd6,"org.gameplay3d.Vector2.subtract_V2X3","org/gameplay3d/Vector2.hx",213,0xe254b99c)
		HX_STACK_ARG(v1,"v1")
		HX_STACK_ARG(v2,"v2")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(213)
		::org::gameplay3d::Vector2_obj::hx_Vector2_static_subtract((  (((v1 == null()))) ? Dynamic(null()) : Dynamic(v1->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((v2 == null()))) ? Dynamic(null()) : Dynamic(v2->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector2_obj,subtract_V2X3,(void))

::org::gameplay3d::immutable::IVector2 Vector2_obj::unitX( ){
	HX_STACK_FRAME("org.gameplay3d.Vector2","unitX",0xa3f71be8,"org.gameplay3d.Vector2.unitX","org/gameplay3d/Vector2.hx",225,0xe254b99c)
	HX_STACK_LINE(28)
	if (((::org::gameplay3d::Vector2_obj::_unitX == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector2 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector2 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(225)
			Dynamic nativeObject = ::org::gameplay3d::Vector2_obj::hx_Vector2_static_unitX();		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::Vector2 result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Vector2 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return ::org::gameplay3d::Vector2_obj::_unitX = _g1;
	}
	else{
		HX_STACK_LINE(225)
		Dynamic _g2 = ::org::gameplay3d::Vector2_obj::hx_Vector2_static_unitX();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector2 _g3 = ::org::gameplay3d::Vector2_obj::_unitX->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return ::org::gameplay3d::Vector2_obj::_unitX = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector2_obj,unitX,return )

::org::gameplay3d::immutable::IVector2 Vector2_obj::unitY( ){
	HX_STACK_FRAME("org.gameplay3d.Vector2","unitY",0xa3f71be9,"org.gameplay3d.Vector2.unitY","org/gameplay3d/Vector2.hx",231,0xe254b99c)
	HX_STACK_LINE(28)
	if (((::org::gameplay3d::Vector2_obj::_unitY == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector2 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector2 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(231)
			Dynamic nativeObject = ::org::gameplay3d::Vector2_obj::hx_Vector2_static_unitY();		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::Vector2 result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Vector2 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return ::org::gameplay3d::Vector2_obj::_unitY = _g1;
	}
	else{
		HX_STACK_LINE(231)
		Dynamic _g2 = ::org::gameplay3d::Vector2_obj::hx_Vector2_static_unitY();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector2 _g3 = ::org::gameplay3d::Vector2_obj::_unitY->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return ::org::gameplay3d::Vector2_obj::_unitY = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector2_obj,unitY,return )

::org::gameplay3d::immutable::IVector2 Vector2_obj::zero( ){
	HX_STACK_FRAME("org.gameplay3d.Vector2","zero",0xc605cb14,"org.gameplay3d.Vector2.zero","org/gameplay3d/Vector2.hx",237,0xe254b99c)
	HX_STACK_LINE(28)
	if (((::org::gameplay3d::Vector2_obj::_zero == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector2 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector2 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(237)
			Dynamic nativeObject = ::org::gameplay3d::Vector2_obj::hx_Vector2_static_zero();		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::Vector2 result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Vector2 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return ::org::gameplay3d::Vector2_obj::_zero = _g1;
	}
	else{
		HX_STACK_LINE(237)
		Dynamic _g2 = ::org::gameplay3d::Vector2_obj::hx_Vector2_static_zero();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector2 _g3 = ::org::gameplay3d::Vector2_obj::_zero->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return ::org::gameplay3d::Vector2_obj::_zero = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector2_obj,zero,return )

Dynamic Vector2_obj::constructNativeObject( ){
	HX_STACK_FRAME("org.gameplay3d.Vector2","constructNativeObject",0x290e8d01,"org.gameplay3d.Vector2.constructNativeObject","org/gameplay3d/Vector2.hx",247,0xe254b99c)
	HX_STACK_LINE(247)
	return ::org::gameplay3d::Vector2_obj::hx_Vector2_Construct();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector2_obj,constructNativeObject,return )

Dynamic Vector2_obj::constructNativeObject_V2( ::org::gameplay3d::immutable::IVector2 copy){
	HX_STACK_FRAME("org.gameplay3d.Vector2","constructNativeObject_V2",0xa7b92ada,"org.gameplay3d.Vector2.constructNativeObject_V2","org/gameplay3d/Vector2.hx",253,0xe254b99c)
	HX_STACK_ARG(copy,"copy")
	HX_STACK_LINE(253)
	return ::org::gameplay3d::Vector2_obj::hx_Vector2_Construct_V2((  (((copy == null()))) ? Dynamic(null()) : Dynamic(copy->__Field(HX_CSTRING("nativeObject"),true)) ));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector2_obj,constructNativeObject_V2,return )

Dynamic Vector2_obj::constructNativeObject_V2X2( ::org::gameplay3d::immutable::IVector2 p1,::org::gameplay3d::immutable::IVector2 p2){
	HX_STACK_FRAME("org.gameplay3d.Vector2","constructNativeObject_V2X2",0xe87d6234,"org.gameplay3d.Vector2.constructNativeObject_V2X2","org/gameplay3d/Vector2.hx",259,0xe254b99c)
	HX_STACK_ARG(p1,"p1")
	HX_STACK_ARG(p2,"p2")
	HX_STACK_LINE(259)
	return ::org::gameplay3d::Vector2_obj::hx_Vector2_Construct_V2X2((  (((p1 == null()))) ? Dynamic(null()) : Dynamic(p1->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((p2 == null()))) ? Dynamic(null()) : Dynamic(p2->__Field(HX_CSTRING("nativeObject"),true)) ));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector2_obj,constructNativeObject_V2X2,return )

Dynamic Vector2_obj::constructNativeObject_ArrFlt( Array< Float > array){
	HX_STACK_FRAME("org.gameplay3d.Vector2","constructNativeObject_ArrFlt",0x91a6fb6b,"org.gameplay3d.Vector2.constructNativeObject_ArrFlt","org/gameplay3d/Vector2.hx",265,0xe254b99c)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(265)
	return ::org::gameplay3d::Vector2_obj::hx_Vector2_Construct_ArrFlt(array);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector2_obj,constructNativeObject_ArrFlt,return )

Dynamic Vector2_obj::constructNativeObject_FltX2( Float x,Float y){
	HX_STACK_FRAME("org.gameplay3d.Vector2","constructNativeObject_FltX2",0x753b03aa,"org.gameplay3d.Vector2.constructNativeObject_FltX2","org/gameplay3d/Vector2.hx",271,0xe254b99c)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(271)
	return ::org::gameplay3d::Vector2_obj::hx_Vector2_Construct_FltX2(x,y);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector2_obj,constructNativeObject_FltX2,return )

Dynamic Vector2_obj::hx_Vector2_Construct;

Dynamic Vector2_obj::hx_Vector2_Construct_V2;

Dynamic Vector2_obj::hx_Vector2_Construct_V2X2;

Dynamic Vector2_obj::hx_Vector2_Construct_ArrFlt;

Dynamic Vector2_obj::hx_Vector2_Construct_FltX2;

Dynamic Vector2_obj::hx_Vector2_static_add;

Dynamic Vector2_obj::hx_Vector2_add;

Dynamic Vector2_obj::hx_Vector2_static_angle;

Dynamic Vector2_obj::hx_Vector2_static_clamp;

Dynamic Vector2_obj::hx_Vector2_clamp;

Dynamic Vector2_obj::hx_Vector2_distance;

Dynamic Vector2_obj::hx_Vector2_distanceSquared;

Dynamic Vector2_obj::hx_Vector2_dot;

Dynamic Vector2_obj::hx_Vector2_static_dot;

Dynamic Vector2_obj::hx_Vector2_isOne;

Dynamic Vector2_obj::hx_Vector2_isZero;

Dynamic Vector2_obj::hx_Vector2_length;

Dynamic Vector2_obj::hx_Vector2_lengthSquared;

Dynamic Vector2_obj::hx_Vector2_negate;

Dynamic Vector2_obj::hx_Vector2_normalize;

Dynamic Vector2_obj::hx_Vector2_normalize_V2;

Dynamic Vector2_obj::hx_Vector2_static_one;

Dynamic Vector2_obj::hx_Vector2_rotate;

Dynamic Vector2_obj::hx_Vector2_scale_V2;

Dynamic Vector2_obj::hx_Vector2_scale_Flt;

Dynamic Vector2_obj::hx_Vector2_set_V2X2;

Dynamic Vector2_obj::hx_Vector2_set_V2;

Dynamic Vector2_obj::hx_Vector2_set_ArrFlt;

Dynamic Vector2_obj::hx_Vector2_set_FltX2;

Dynamic Vector2_obj::hx_Vector2_smooth;

Dynamic Vector2_obj::hx_Vector2_static_subtract;

Dynamic Vector2_obj::hx_Vector2_subtract;

Dynamic Vector2_obj::hx_Vector2_static_unitX;

Dynamic Vector2_obj::hx_Vector2_static_unitY;

Dynamic Vector2_obj::hx_Vector2_static_zero;

Dynamic Vector2_obj::hx_Vector2_property_x_get;

Dynamic Vector2_obj::hx_Vector2_property_x_set;

Dynamic Vector2_obj::hx_Vector2_property_y_get;

Dynamic Vector2_obj::hx_Vector2_property_y_set;


Vector2_obj::Vector2_obj()
{
}

Dynamic Vector2_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return get_x(); }
		if (HX_FIELD_EQ(inName,"y") ) { return get_y(); }
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
		if (HX_FIELD_EQ(inName,"unitX") ) { return unitX_dyn(); }
		if (HX_FIELD_EQ(inName,"unitY") ) { return unitY_dyn(); }
		if (HX_FIELD_EQ(inName,"isOne") ) { return isOne_dyn(); }
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_unitX") ) { return _unitX; }
		if (HX_FIELD_EQ(inName,"_unitY") ) { return _unitY; }
		if (HX_FIELD_EQ(inName,"add_V2") ) { return add_V2_dyn(); }
		if (HX_FIELD_EQ(inName,"dot_V2") ) { return dot_V2_dyn(); }
		if (HX_FIELD_EQ(inName,"isZero") ) { return isZero_dyn(); }
		if (HX_FIELD_EQ(inName,"length") ) { return length_dyn(); }
		if (HX_FIELD_EQ(inName,"negate") ) { return negate_dyn(); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate_dyn(); }
		if (HX_FIELD_EQ(inName,"set_V2") ) { return set_V2_dyn(); }
		if (HX_FIELD_EQ(inName,"smooth") ) { return smooth_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"make_V2") ) { return make_V2_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"add_V2X3") ) { return add_V2X3_dyn(); }
		if (HX_FIELD_EQ(inName,"dot_V2X2") ) { return dot_V2X2_dyn(); }
		if (HX_FIELD_EQ(inName,"distance") ) { return distance_dyn(); }
		if (HX_FIELD_EQ(inName,"scale_V2") ) { return scale_V2_dyn(); }
		if (HX_FIELD_EQ(inName,"set_V2X2") ) { return set_V2X2_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"make_V2X2") ) { return make_V2X2_dyn(); }
		if (HX_FIELD_EQ(inName,"normalize") ) { return normalize_dyn(); }
		if (HX_FIELD_EQ(inName,"scale_Flt") ) { return scale_Flt_dyn(); }
		if (HX_FIELD_EQ(inName,"set_FltX2") ) { return set_FltX2_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"make_FltX2") ) { return make_FltX2_dyn(); }
		if (HX_FIELD_EQ(inName,"clamp_V2X4") ) { return clamp_V2X4_dyn(); }
		if (HX_FIELD_EQ(inName,"clamp_V2X2") ) { return clamp_V2X2_dyn(); }
		if (HX_FIELD_EQ(inName,"set_ArrFlt") ) { return set_ArrFlt_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"make_ArrFlt") ) { return make_ArrFlt_dyn(); }
		if (HX_FIELD_EQ(inName,"subtract_V2") ) { return subtract_V2_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"normalize_V2") ) { return normalize_V2_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"subtract_V2X3") ) { return subtract_V2X3_dyn(); }
		if (HX_FIELD_EQ(inName,"lengthSquared") ) { return lengthSquared_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"hx_Vector2_add") ) { return hx_Vector2_add; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_dot") ) { return hx_Vector2_dot; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"distanceSquared") ) { return distanceSquared_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hx_Vector2_clamp") ) { return hx_Vector2_clamp; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_isOne") ) { return hx_Vector2_isOne; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"hx_Vector2_isZero") ) { return hx_Vector2_isZero; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_length") ) { return hx_Vector2_length; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_negate") ) { return hx_Vector2_negate; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_rotate") ) { return hx_Vector2_rotate; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_set_V2") ) { return hx_Vector2_set_V2; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_smooth") ) { return hx_Vector2_smooth; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hx_Vector2_distance") ) { return hx_Vector2_distance; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_scale_V2") ) { return hx_Vector2_scale_V2; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_set_V2X2") ) { return hx_Vector2_set_V2X2; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_subtract") ) { return hx_Vector2_subtract; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Vector2_Construct") ) { return hx_Vector2_Construct; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_normalize") ) { return hx_Vector2_normalize; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_scale_Flt") ) { return hx_Vector2_scale_Flt; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_set_FltX2") ) { return hx_Vector2_set_FltX2; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"constructNativeObject") ) { return constructNativeObject_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Vector2_static_add") ) { return hx_Vector2_static_add; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_static_dot") ) { return hx_Vector2_static_dot; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_static_one") ) { return hx_Vector2_static_one; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_set_ArrFlt") ) { return hx_Vector2_set_ArrFlt; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Vector2_static_zero") ) { return hx_Vector2_static_zero; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_Vector2_Construct_V2") ) { return hx_Vector2_Construct_V2; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_static_angle") ) { return hx_Vector2_static_angle; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_static_clamp") ) { return hx_Vector2_static_clamp; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_normalize_V2") ) { return hx_Vector2_normalize_V2; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_static_unitX") ) { return hx_Vector2_static_unitX; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_static_unitY") ) { return hx_Vector2_static_unitY; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"constructNativeObject_V2") ) { return constructNativeObject_V2_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Vector2_lengthSquared") ) { return hx_Vector2_lengthSquared; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_Vector2_Construct_V2X2") ) { return hx_Vector2_Construct_V2X2; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_property_x_get") ) { return hx_Vector2_property_x_get; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_property_x_set") ) { return hx_Vector2_property_x_set; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_property_y_get") ) { return hx_Vector2_property_y_get; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_property_y_set") ) { return hx_Vector2_property_y_set; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"constructNativeObject_V2X2") ) { return constructNativeObject_V2X2_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Vector2_Construct_FltX2") ) { return hx_Vector2_Construct_FltX2; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_distanceSquared") ) { return hx_Vector2_distanceSquared; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_static_subtract") ) { return hx_Vector2_static_subtract; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"constructNativeObject_FltX2") ) { return constructNativeObject_FltX2_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Vector2_Construct_ArrFlt") ) { return hx_Vector2_Construct_ArrFlt; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"constructNativeObject_ArrFlt") ) { return constructNativeObject_ArrFlt_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Vector2_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return set_x(inValue); }
		if (HX_FIELD_EQ(inName,"y") ) { return set_y(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_one") ) { _one=inValue.Cast< ::org::gameplay3d::Vector2 >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_zero") ) { _zero=inValue.Cast< ::org::gameplay3d::Vector2 >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_unitX") ) { _unitX=inValue.Cast< ::org::gameplay3d::Vector2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_unitY") ) { _unitY=inValue.Cast< ::org::gameplay3d::Vector2 >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"hx_Vector2_add") ) { hx_Vector2_add=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_dot") ) { hx_Vector2_dot=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hx_Vector2_clamp") ) { hx_Vector2_clamp=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_isOne") ) { hx_Vector2_isOne=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"hx_Vector2_isZero") ) { hx_Vector2_isZero=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_length") ) { hx_Vector2_length=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_negate") ) { hx_Vector2_negate=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_rotate") ) { hx_Vector2_rotate=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_set_V2") ) { hx_Vector2_set_V2=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_smooth") ) { hx_Vector2_smooth=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hx_Vector2_distance") ) { hx_Vector2_distance=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_scale_V2") ) { hx_Vector2_scale_V2=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_set_V2X2") ) { hx_Vector2_set_V2X2=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_subtract") ) { hx_Vector2_subtract=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Vector2_Construct") ) { hx_Vector2_Construct=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_normalize") ) { hx_Vector2_normalize=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_scale_Flt") ) { hx_Vector2_scale_Flt=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_set_FltX2") ) { hx_Vector2_set_FltX2=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hx_Vector2_static_add") ) { hx_Vector2_static_add=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_static_dot") ) { hx_Vector2_static_dot=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_static_one") ) { hx_Vector2_static_one=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_set_ArrFlt") ) { hx_Vector2_set_ArrFlt=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Vector2_static_zero") ) { hx_Vector2_static_zero=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_Vector2_Construct_V2") ) { hx_Vector2_Construct_V2=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_static_angle") ) { hx_Vector2_static_angle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_static_clamp") ) { hx_Vector2_static_clamp=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_normalize_V2") ) { hx_Vector2_normalize_V2=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_static_unitX") ) { hx_Vector2_static_unitX=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_static_unitY") ) { hx_Vector2_static_unitY=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_Vector2_lengthSquared") ) { hx_Vector2_lengthSquared=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_Vector2_Construct_V2X2") ) { hx_Vector2_Construct_V2X2=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_property_x_get") ) { hx_Vector2_property_x_get=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_property_x_set") ) { hx_Vector2_property_x_set=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_property_y_get") ) { hx_Vector2_property_y_get=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_property_y_set") ) { hx_Vector2_property_y_set=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_Vector2_Construct_FltX2") ) { hx_Vector2_Construct_FltX2=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_distanceSquared") ) { hx_Vector2_distanceSquared=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector2_static_subtract") ) { hx_Vector2_static_subtract=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"hx_Vector2_Construct_ArrFlt") ) { hx_Vector2_Construct_ArrFlt=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Vector2_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_one"),
	HX_CSTRING("_unitX"),
	HX_CSTRING("_unitY"),
	HX_CSTRING("_zero"),
	HX_CSTRING("make"),
	HX_CSTRING("make_V2"),
	HX_CSTRING("make_V2X2"),
	HX_CSTRING("make_ArrFlt"),
	HX_CSTRING("make_FltX2"),
	HX_CSTRING("add_V2X3"),
	HX_CSTRING("angle"),
	HX_CSTRING("clamp_V2X4"),
	HX_CSTRING("dot_V2X2"),
	HX_CSTRING("one"),
	HX_CSTRING("subtract_V2X3"),
	HX_CSTRING("unitX"),
	HX_CSTRING("unitY"),
	HX_CSTRING("zero"),
	HX_CSTRING("constructNativeObject"),
	HX_CSTRING("constructNativeObject_V2"),
	HX_CSTRING("constructNativeObject_V2X2"),
	HX_CSTRING("constructNativeObject_ArrFlt"),
	HX_CSTRING("constructNativeObject_FltX2"),
	HX_CSTRING("hx_Vector2_Construct"),
	HX_CSTRING("hx_Vector2_Construct_V2"),
	HX_CSTRING("hx_Vector2_Construct_V2X2"),
	HX_CSTRING("hx_Vector2_Construct_ArrFlt"),
	HX_CSTRING("hx_Vector2_Construct_FltX2"),
	HX_CSTRING("hx_Vector2_static_add"),
	HX_CSTRING("hx_Vector2_add"),
	HX_CSTRING("hx_Vector2_static_angle"),
	HX_CSTRING("hx_Vector2_static_clamp"),
	HX_CSTRING("hx_Vector2_clamp"),
	HX_CSTRING("hx_Vector2_distance"),
	HX_CSTRING("hx_Vector2_distanceSquared"),
	HX_CSTRING("hx_Vector2_dot"),
	HX_CSTRING("hx_Vector2_static_dot"),
	HX_CSTRING("hx_Vector2_isOne"),
	HX_CSTRING("hx_Vector2_isZero"),
	HX_CSTRING("hx_Vector2_length"),
	HX_CSTRING("hx_Vector2_lengthSquared"),
	HX_CSTRING("hx_Vector2_negate"),
	HX_CSTRING("hx_Vector2_normalize"),
	HX_CSTRING("hx_Vector2_normalize_V2"),
	HX_CSTRING("hx_Vector2_static_one"),
	HX_CSTRING("hx_Vector2_rotate"),
	HX_CSTRING("hx_Vector2_scale_V2"),
	HX_CSTRING("hx_Vector2_scale_Flt"),
	HX_CSTRING("hx_Vector2_set_V2X2"),
	HX_CSTRING("hx_Vector2_set_V2"),
	HX_CSTRING("hx_Vector2_set_ArrFlt"),
	HX_CSTRING("hx_Vector2_set_FltX2"),
	HX_CSTRING("hx_Vector2_smooth"),
	HX_CSTRING("hx_Vector2_static_subtract"),
	HX_CSTRING("hx_Vector2_subtract"),
	HX_CSTRING("hx_Vector2_static_unitX"),
	HX_CSTRING("hx_Vector2_static_unitY"),
	HX_CSTRING("hx_Vector2_static_zero"),
	HX_CSTRING("hx_Vector2_property_x_get"),
	HX_CSTRING("hx_Vector2_property_x_set"),
	HX_CSTRING("hx_Vector2_property_y_get"),
	HX_CSTRING("hx_Vector2_property_y_set"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("add_V2"),
	HX_CSTRING("clamp_V2X2"),
	HX_CSTRING("distance"),
	HX_CSTRING("distanceSquared"),
	HX_CSTRING("dot_V2"),
	HX_CSTRING("isOne"),
	HX_CSTRING("isZero"),
	HX_CSTRING("length"),
	HX_CSTRING("lengthSquared"),
	HX_CSTRING("negate"),
	HX_CSTRING("normalize"),
	HX_CSTRING("normalize_V2"),
	HX_CSTRING("rotate"),
	HX_CSTRING("scale_V2"),
	HX_CSTRING("scale_Flt"),
	HX_CSTRING("set_V2X2"),
	HX_CSTRING("set_V2"),
	HX_CSTRING("set_ArrFlt"),
	HX_CSTRING("set_FltX2"),
	HX_CSTRING("smooth"),
	HX_CSTRING("subtract_V2"),
	HX_CSTRING("get_x"),
	HX_CSTRING("set_x"),
	HX_CSTRING("get_y"),
	HX_CSTRING("set_y"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vector2_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Vector2_obj::_one,"_one");
	HX_MARK_MEMBER_NAME(Vector2_obj::_unitX,"_unitX");
	HX_MARK_MEMBER_NAME(Vector2_obj::_unitY,"_unitY");
	HX_MARK_MEMBER_NAME(Vector2_obj::_zero,"_zero");
	HX_MARK_MEMBER_NAME(Vector2_obj::hx_Vector2_Construct,"hx_Vector2_Construct");
	HX_MARK_MEMBER_NAME(Vector2_obj::hx_Vector2_Construct_V2,"hx_Vector2_Construct_V2");
	HX_MARK_MEMBER_NAME(Vector2_obj::hx_Vector2_Construct_V2X2,"hx_Vector2_Construct_V2X2");
	HX_MARK_MEMBER_NAME(Vector2_obj::hx_Vector2_Construct_ArrFlt,"hx_Vector2_Construct_ArrFlt");
	HX_MARK_MEMBER_NAME(Vector2_obj::hx_Vector2_Construct_FltX2,"hx_Vector2_Construct_FltX2");
	HX_MARK_MEMBER_NAME(Vector2_obj::hx_Vector2_static_add,"hx_Vector2_static_add");
	HX_MARK_MEMBER_NAME(Vector2_obj::hx_Vector2_add,"hx_Vector2_add");
	HX_MARK_MEMBER_NAME(Vector2_obj::hx_Vector2_static_angle,"hx_Vector2_static_angle");
	HX_MARK_MEMBER_NAME(Vector2_obj::hx_Vector2_static_clamp,"hx_Vector2_static_clamp");
	HX_MARK_MEMBER_NAME(Vector2_obj::hx_Vector2_clamp,"hx_Vector2_clamp");
	HX_MARK_MEMBER_NAME(Vector2_obj::hx_Vector2_distance,"hx_Vector2_distance");
	HX_MARK_MEMBER_NAME(Vector2_obj::hx_Vector2_distanceSquared,"hx_Vector2_distanceSquared");
	HX_MARK_MEMBER_NAME(Vector2_obj::hx_Vector2_dot,"hx_Vector2_dot");
	HX_MARK_MEMBER_NAME(Vector2_obj::hx_Vector2_static_dot,"hx_Vector2_static_dot");
	HX_MARK_MEMBER_NAME(Vector2_obj::hx_Vector2_isOne,"hx_Vector2_isOne");
	HX_MARK_MEMBER_NAME(Vector2_obj::hx_Vector2_isZero,"hx_Vector2_isZero");
	HX_MARK_MEMBER_NAME(Vector2_obj::hx_Vector2_length,"hx_Vector2_length");
	HX_MARK_MEMBER_NAME(Vector2_obj::hx_Vector2_lengthSquared,"hx_Vector2_lengthSquared");
	HX_MARK_MEMBER_NAME(Vector2_obj::hx_Vector2_negate,"hx_Vector2_negate");
	HX_MARK_MEMBER_NAME(Vector2_obj::hx_Vector2_normalize,"hx_Vector2_normalize");
	HX_MARK_MEMBER_NAME(Vector2_obj::hx_Vector2_normalize_V2,"hx_Vector2_normalize_V2");
	HX_MARK_MEMBER_NAME(Vector2_obj::hx_Vector2_static_one,"hx_Vector2_static_one");
	HX_MARK_MEMBER_NAME(Vector2_obj::hx_Vector2_rotate,"hx_Vector2_rotate");
	HX_MARK_MEMBER_NAME(Vector2_obj::hx_Vector2_scale_V2,"hx_Vector2_scale_V2");
	HX_MARK_MEMBER_NAME(Vector2_obj::hx_Vector2_scale_Flt,"hx_Vector2_scale_Flt");
	HX_MARK_MEMBER_NAME(Vector2_obj::hx_Vector2_set_V2X2,"hx_Vector2_set_V2X2");
	HX_MARK_MEMBER_NAME(Vector2_obj::hx_Vector2_set_V2,"hx_Vector2_set_V2");
	HX_MARK_MEMBER_NAME(Vector2_obj::hx_Vector2_set_ArrFlt,"hx_Vector2_set_ArrFlt");
	HX_MARK_MEMBER_NAME(Vector2_obj::hx_Vector2_set_FltX2,"hx_Vector2_set_FltX2");
	HX_MARK_MEMBER_NAME(Vector2_obj::hx_Vector2_smooth,"hx_Vector2_smooth");
	HX_MARK_MEMBER_NAME(Vector2_obj::hx_Vector2_static_subtract,"hx_Vector2_static_subtract");
	HX_MARK_MEMBER_NAME(Vector2_obj::hx_Vector2_subtract,"hx_Vector2_subtract");
	HX_MARK_MEMBER_NAME(Vector2_obj::hx_Vector2_static_unitX,"hx_Vector2_static_unitX");
	HX_MARK_MEMBER_NAME(Vector2_obj::hx_Vector2_static_unitY,"hx_Vector2_static_unitY");
	HX_MARK_MEMBER_NAME(Vector2_obj::hx_Vector2_static_zero,"hx_Vector2_static_zero");
	HX_MARK_MEMBER_NAME(Vector2_obj::hx_Vector2_property_x_get,"hx_Vector2_property_x_get");
	HX_MARK_MEMBER_NAME(Vector2_obj::hx_Vector2_property_x_set,"hx_Vector2_property_x_set");
	HX_MARK_MEMBER_NAME(Vector2_obj::hx_Vector2_property_y_get,"hx_Vector2_property_y_get");
	HX_MARK_MEMBER_NAME(Vector2_obj::hx_Vector2_property_y_set,"hx_Vector2_property_y_set");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vector2_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Vector2_obj::_one,"_one");
	HX_VISIT_MEMBER_NAME(Vector2_obj::_unitX,"_unitX");
	HX_VISIT_MEMBER_NAME(Vector2_obj::_unitY,"_unitY");
	HX_VISIT_MEMBER_NAME(Vector2_obj::_zero,"_zero");
	HX_VISIT_MEMBER_NAME(Vector2_obj::hx_Vector2_Construct,"hx_Vector2_Construct");
	HX_VISIT_MEMBER_NAME(Vector2_obj::hx_Vector2_Construct_V2,"hx_Vector2_Construct_V2");
	HX_VISIT_MEMBER_NAME(Vector2_obj::hx_Vector2_Construct_V2X2,"hx_Vector2_Construct_V2X2");
	HX_VISIT_MEMBER_NAME(Vector2_obj::hx_Vector2_Construct_ArrFlt,"hx_Vector2_Construct_ArrFlt");
	HX_VISIT_MEMBER_NAME(Vector2_obj::hx_Vector2_Construct_FltX2,"hx_Vector2_Construct_FltX2");
	HX_VISIT_MEMBER_NAME(Vector2_obj::hx_Vector2_static_add,"hx_Vector2_static_add");
	HX_VISIT_MEMBER_NAME(Vector2_obj::hx_Vector2_add,"hx_Vector2_add");
	HX_VISIT_MEMBER_NAME(Vector2_obj::hx_Vector2_static_angle,"hx_Vector2_static_angle");
	HX_VISIT_MEMBER_NAME(Vector2_obj::hx_Vector2_static_clamp,"hx_Vector2_static_clamp");
	HX_VISIT_MEMBER_NAME(Vector2_obj::hx_Vector2_clamp,"hx_Vector2_clamp");
	HX_VISIT_MEMBER_NAME(Vector2_obj::hx_Vector2_distance,"hx_Vector2_distance");
	HX_VISIT_MEMBER_NAME(Vector2_obj::hx_Vector2_distanceSquared,"hx_Vector2_distanceSquared");
	HX_VISIT_MEMBER_NAME(Vector2_obj::hx_Vector2_dot,"hx_Vector2_dot");
	HX_VISIT_MEMBER_NAME(Vector2_obj::hx_Vector2_static_dot,"hx_Vector2_static_dot");
	HX_VISIT_MEMBER_NAME(Vector2_obj::hx_Vector2_isOne,"hx_Vector2_isOne");
	HX_VISIT_MEMBER_NAME(Vector2_obj::hx_Vector2_isZero,"hx_Vector2_isZero");
	HX_VISIT_MEMBER_NAME(Vector2_obj::hx_Vector2_length,"hx_Vector2_length");
	HX_VISIT_MEMBER_NAME(Vector2_obj::hx_Vector2_lengthSquared,"hx_Vector2_lengthSquared");
	HX_VISIT_MEMBER_NAME(Vector2_obj::hx_Vector2_negate,"hx_Vector2_negate");
	HX_VISIT_MEMBER_NAME(Vector2_obj::hx_Vector2_normalize,"hx_Vector2_normalize");
	HX_VISIT_MEMBER_NAME(Vector2_obj::hx_Vector2_normalize_V2,"hx_Vector2_normalize_V2");
	HX_VISIT_MEMBER_NAME(Vector2_obj::hx_Vector2_static_one,"hx_Vector2_static_one");
	HX_VISIT_MEMBER_NAME(Vector2_obj::hx_Vector2_rotate,"hx_Vector2_rotate");
	HX_VISIT_MEMBER_NAME(Vector2_obj::hx_Vector2_scale_V2,"hx_Vector2_scale_V2");
	HX_VISIT_MEMBER_NAME(Vector2_obj::hx_Vector2_scale_Flt,"hx_Vector2_scale_Flt");
	HX_VISIT_MEMBER_NAME(Vector2_obj::hx_Vector2_set_V2X2,"hx_Vector2_set_V2X2");
	HX_VISIT_MEMBER_NAME(Vector2_obj::hx_Vector2_set_V2,"hx_Vector2_set_V2");
	HX_VISIT_MEMBER_NAME(Vector2_obj::hx_Vector2_set_ArrFlt,"hx_Vector2_set_ArrFlt");
	HX_VISIT_MEMBER_NAME(Vector2_obj::hx_Vector2_set_FltX2,"hx_Vector2_set_FltX2");
	HX_VISIT_MEMBER_NAME(Vector2_obj::hx_Vector2_smooth,"hx_Vector2_smooth");
	HX_VISIT_MEMBER_NAME(Vector2_obj::hx_Vector2_static_subtract,"hx_Vector2_static_subtract");
	HX_VISIT_MEMBER_NAME(Vector2_obj::hx_Vector2_subtract,"hx_Vector2_subtract");
	HX_VISIT_MEMBER_NAME(Vector2_obj::hx_Vector2_static_unitX,"hx_Vector2_static_unitX");
	HX_VISIT_MEMBER_NAME(Vector2_obj::hx_Vector2_static_unitY,"hx_Vector2_static_unitY");
	HX_VISIT_MEMBER_NAME(Vector2_obj::hx_Vector2_static_zero,"hx_Vector2_static_zero");
	HX_VISIT_MEMBER_NAME(Vector2_obj::hx_Vector2_property_x_get,"hx_Vector2_property_x_get");
	HX_VISIT_MEMBER_NAME(Vector2_obj::hx_Vector2_property_x_set,"hx_Vector2_property_x_set");
	HX_VISIT_MEMBER_NAME(Vector2_obj::hx_Vector2_property_y_get,"hx_Vector2_property_y_get");
	HX_VISIT_MEMBER_NAME(Vector2_obj::hx_Vector2_property_y_set,"hx_Vector2_property_y_set");
};

#endif

Class Vector2_obj::__mClass;

void Vector2_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.Vector2"), hx::TCanCast< Vector2_obj> ,sStaticFields,sMemberFields,
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

void Vector2_obj::__boot()
{
	hx_Vector2_Construct= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector2 >(),HX_CSTRING("Construct"),(int)0);
	hx_Vector2_Construct_V2= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector2 >(),HX_CSTRING("Construct_V2"),(int)1);
	hx_Vector2_Construct_V2X2= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector2 >(),HX_CSTRING("Construct_V2X2"),(int)2);
	hx_Vector2_Construct_ArrFlt= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector2 >(),HX_CSTRING("Construct_ArrFlt"),(int)1);
	hx_Vector2_Construct_FltX2= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector2 >(),HX_CSTRING("Construct_FltX2"),(int)2);
	hx_Vector2_static_add= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector2 >(),HX_CSTRING("static_add"),(int)3);
	hx_Vector2_add= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector2 >(),HX_CSTRING("add"),(int)2);
	hx_Vector2_static_angle= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector2 >(),HX_CSTRING("static_angle"),(int)2);
	hx_Vector2_static_clamp= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector2 >(),HX_CSTRING("static_clamp"),(int)4);
	hx_Vector2_clamp= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector2 >(),HX_CSTRING("clamp"),(int)3);
	hx_Vector2_distance= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector2 >(),HX_CSTRING("distance"),(int)2);
	hx_Vector2_distanceSquared= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector2 >(),HX_CSTRING("distanceSquared"),(int)2);
	hx_Vector2_dot= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector2 >(),HX_CSTRING("dot"),(int)2);
	hx_Vector2_static_dot= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector2 >(),HX_CSTRING("static_dot"),(int)2);
	hx_Vector2_isOne= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector2 >(),HX_CSTRING("isOne"),(int)1);
	hx_Vector2_isZero= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector2 >(),HX_CSTRING("isZero"),(int)1);
	hx_Vector2_length= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector2 >(),HX_CSTRING("length"),(int)1);
	hx_Vector2_lengthSquared= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector2 >(),HX_CSTRING("lengthSquared"),(int)1);
	hx_Vector2_negate= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector2 >(),HX_CSTRING("negate"),(int)1);
	hx_Vector2_normalize= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector2 >(),HX_CSTRING("normalize"),(int)1);
	hx_Vector2_normalize_V2= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector2 >(),HX_CSTRING("normalize_V2"),(int)2);
	hx_Vector2_static_one= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector2 >(),HX_CSTRING("static_one"),(int)0);
	hx_Vector2_rotate= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector2 >(),HX_CSTRING("rotate"),(int)3);
	hx_Vector2_scale_V2= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector2 >(),HX_CSTRING("scale_V2"),(int)2);
	hx_Vector2_scale_Flt= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector2 >(),HX_CSTRING("scale_Flt"),(int)2);
	hx_Vector2_set_V2X2= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector2 >(),HX_CSTRING("set_V2X2"),(int)3);
	hx_Vector2_set_V2= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector2 >(),HX_CSTRING("set_V2"),(int)2);
	hx_Vector2_set_ArrFlt= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector2 >(),HX_CSTRING("set_ArrFlt"),(int)2);
	hx_Vector2_set_FltX2= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector2 >(),HX_CSTRING("set_FltX2"),(int)3);
	hx_Vector2_smooth= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector2 >(),HX_CSTRING("smooth"),(int)4);
	hx_Vector2_static_subtract= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector2 >(),HX_CSTRING("static_subtract"),(int)3);
	hx_Vector2_subtract= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector2 >(),HX_CSTRING("subtract"),(int)2);
	hx_Vector2_static_unitX= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector2 >(),HX_CSTRING("static_unitX"),(int)0);
	hx_Vector2_static_unitY= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector2 >(),HX_CSTRING("static_unitY"),(int)0);
	hx_Vector2_static_zero= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector2 >(),HX_CSTRING("static_zero"),(int)0);
	hx_Vector2_property_x_get= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector2 >(),HX_CSTRING("property_x_get"),(int)1);
	hx_Vector2_property_x_set= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector2 >(),HX_CSTRING("property_x_set"),(int)2);
	hx_Vector2_property_y_get= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector2 >(),HX_CSTRING("property_y_get"),(int)1);
	hx_Vector2_property_y_set= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector2 >(),HX_CSTRING("property_y_set"),(int)2);
}

} // end namespace org
} // end namespace gameplay3d
