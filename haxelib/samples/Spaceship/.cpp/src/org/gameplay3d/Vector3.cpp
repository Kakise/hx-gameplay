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
#ifndef INCLUDED_org_gameplay3d_Vector3
#include <org/gameplay3d/Vector3.h>
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

Void Vector3_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.Vector3","new",0xf9468a75,"org.gameplay3d.Vector3.new","org/gameplay3d/Vector3.hx",10,0xe2fdf03b)
HX_STACK_THIS(this)
HX_STACK_ARG(nativeObjectInitializer,"nativeObjectInitializer")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(10)
	super::__construct(nativeObjectInitializer,nativeObjectInitializerParams);
}
;
	return null();
}

//Vector3_obj::~Vector3_obj() { }

Dynamic Vector3_obj::__CreateEmpty() { return  new Vector3_obj; }
hx::ObjectPtr< Vector3_obj > Vector3_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< Vector3_obj > result = new Vector3_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic Vector3_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vector3_obj > result = new Vector3_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *Vector3_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::intern::INativeBinding_obj)) return operator ::org::gameplay3d::intern::INativeBinding_obj *();
	if (inType==typeid( ::org::gameplay3d::immutable::IVector3_obj)) return operator ::org::gameplay3d::immutable::IVector3_obj *();
	return super::__ToInterface(inType);
}

Void Vector3_obj::add_V3( ::org::gameplay3d::immutable::IVector3 v){
{
		HX_STACK_FRAME("org.gameplay3d.Vector3","add_V3",0x48f0bac6,"org.gameplay3d.Vector3.add_V3","org/gameplay3d/Vector3.hx",69,0xe2fdf03b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(69)
		::org::gameplay3d::Vector3_obj::hx_Vector3_add(this->nativeObject,(  (((v == null()))) ? Dynamic(null()) : Dynamic(v->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3_obj,add_V3,(void))

Void Vector3_obj::clamp_V3X2( ::org::gameplay3d::immutable::IVector3 min,::org::gameplay3d::immutable::IVector3 max){
{
		HX_STACK_FRAME("org.gameplay3d.Vector3","clamp_V3X2",0xb0ca36c6,"org.gameplay3d.Vector3.clamp_V3X2","org/gameplay3d/Vector3.hx",87,0xe2fdf03b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(min,"min")
		HX_STACK_ARG(max,"max")
		HX_STACK_LINE(87)
		::org::gameplay3d::Vector3_obj::hx_Vector3_clamp(this->nativeObject,(  (((min == null()))) ? Dynamic(null()) : Dynamic(min->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((max == null()))) ? Dynamic(null()) : Dynamic(max->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Vector3_obj,clamp_V3X2,(void))

Void Vector3_obj::cross_V3( ::org::gameplay3d::immutable::IVector3 v){
{
		HX_STACK_FRAME("org.gameplay3d.Vector3","cross_V3",0xa8784b87,"org.gameplay3d.Vector3.cross_V3","org/gameplay3d/Vector3.hx",99,0xe2fdf03b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(99)
		::org::gameplay3d::Vector3_obj::hx_Vector3_cross(this->nativeObject,(  (((v == null()))) ? Dynamic(null()) : Dynamic(v->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3_obj,cross_V3,(void))

Float Vector3_obj::distance( ::org::gameplay3d::immutable::IVector3 v){
	HX_STACK_FRAME("org.gameplay3d.Vector3","distance",0x8c632d00,"org.gameplay3d.Vector3.distance","org/gameplay3d/Vector3.hx",105,0xe2fdf03b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(105)
	return ::org::gameplay3d::Vector3_obj::hx_Vector3_distance(this->nativeObject,(  (((v == null()))) ? Dynamic(null()) : Dynamic(v->__Field(HX_CSTRING("nativeObject"),true)) ));
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3_obj,distance,return )

Float Vector3_obj::distanceSquared( ::org::gameplay3d::immutable::IVector3 v){
	HX_STACK_FRAME("org.gameplay3d.Vector3","distanceSquared",0x3c2c2407,"org.gameplay3d.Vector3.distanceSquared","org/gameplay3d/Vector3.hx",111,0xe2fdf03b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(111)
	return ::org::gameplay3d::Vector3_obj::hx_Vector3_distanceSquared(this->nativeObject,(  (((v == null()))) ? Dynamic(null()) : Dynamic(v->__Field(HX_CSTRING("nativeObject"),true)) ));
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3_obj,distanceSquared,return )

Float Vector3_obj::dot_V3( ::org::gameplay3d::immutable::IVector3 v){
	HX_STACK_FRAME("org.gameplay3d.Vector3","dot_V3",0xdbfe9b5e,"org.gameplay3d.Vector3.dot_V3","org/gameplay3d/Vector3.hx",117,0xe2fdf03b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(117)
	return ::org::gameplay3d::Vector3_obj::hx_Vector3_dot(this->nativeObject,(  (((v == null()))) ? Dynamic(null()) : Dynamic(v->__Field(HX_CSTRING("nativeObject"),true)) ));
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3_obj,dot_V3,return )

bool Vector3_obj::isOne( ){
	HX_STACK_FRAME("org.gameplay3d.Vector3","isOne",0xe7f7edf1,"org.gameplay3d.Vector3.isOne","org/gameplay3d/Vector3.hx",135,0xe2fdf03b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(135)
	return ::org::gameplay3d::Vector3_obj::hx_Vector3_isOne(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3_obj,isOne,return )

bool Vector3_obj::isZero( ){
	HX_STACK_FRAME("org.gameplay3d.Vector3","isZero",0x1836d53d,"org.gameplay3d.Vector3.isZero","org/gameplay3d/Vector3.hx",141,0xe2fdf03b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(141)
	return ::org::gameplay3d::Vector3_obj::hx_Vector3_isZero(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3_obj,isZero,return )

Float Vector3_obj::length( ){
	HX_STACK_FRAME("org.gameplay3d.Vector3","length",0x48e695f1,"org.gameplay3d.Vector3.length","org/gameplay3d/Vector3.hx",147,0xe2fdf03b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(147)
	return ::org::gameplay3d::Vector3_obj::hx_Vector3_length(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3_obj,length,return )

Float Vector3_obj::lengthSquared( ){
	HX_STACK_FRAME("org.gameplay3d.Vector3","lengthSquared",0xbce32b36,"org.gameplay3d.Vector3.lengthSquared","org/gameplay3d/Vector3.hx",153,0xe2fdf03b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(153)
	return ::org::gameplay3d::Vector3_obj::hx_Vector3_lengthSquared(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3_obj,lengthSquared,return )

Void Vector3_obj::negate( ){
{
		HX_STACK_FRAME("org.gameplay3d.Vector3","negate",0x10f842cd,"org.gameplay3d.Vector3.negate","org/gameplay3d/Vector3.hx",159,0xe2fdf03b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(159)
		::org::gameplay3d::Vector3_obj::hx_Vector3_negate(this->nativeObject);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3_obj,negate,(void))

::org::gameplay3d::Vector3 Vector3_obj::normalize( ){
	HX_STACK_FRAME("org.gameplay3d.Vector3","normalize",0xe79e2f62,"org.gameplay3d.Vector3.normalize","org/gameplay3d/Vector3.hx",164,0xe2fdf03b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(165)
	::org::gameplay3d::Vector3_obj::hx_Vector3_normalize(this->nativeObject);
	HX_STACK_LINE(166)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3_obj,normalize,return )

Void Vector3_obj::normalize_V3( ::org::gameplay3d::Vector3 dst){
{
		HX_STACK_FRAME("org.gameplay3d.Vector3","normalize_V3",0x81387b1a,"org.gameplay3d.Vector3.normalize_V3","org/gameplay3d/Vector3.hx",172,0xe2fdf03b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(172)
		::org::gameplay3d::Vector3_obj::hx_Vector3_normalize_V3(this->nativeObject,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3_obj,normalize_V3,(void))

Void Vector3_obj::scale( Float scalar){
{
		HX_STACK_FRAME("org.gameplay3d.Vector3","scale",0x9f73f7df,"org.gameplay3d.Vector3.scale","org/gameplay3d/Vector3.hx",184,0xe2fdf03b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(scalar,"scalar")
		HX_STACK_LINE(184)
		::org::gameplay3d::Vector3_obj::hx_Vector3_scale(this->nativeObject,scalar);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3_obj,scale,(void))

Void Vector3_obj::set_V3X2( ::org::gameplay3d::immutable::IVector3 p1,::org::gameplay3d::immutable::IVector3 p2){
{
		HX_STACK_FRAME("org.gameplay3d.Vector3","set_V3X2",0x878107ff,"org.gameplay3d.Vector3.set_V3X2","org/gameplay3d/Vector3.hx",190,0xe2fdf03b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p1,"p1")
		HX_STACK_ARG(p2,"p2")
		HX_STACK_LINE(190)
		::org::gameplay3d::Vector3_obj::hx_Vector3_set_V3X2(this->nativeObject,(  (((p1 == null()))) ? Dynamic(null()) : Dynamic(p1->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((p2 == null()))) ? Dynamic(null()) : Dynamic(p2->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Vector3_obj,set_V3X2,(void))

Void Vector3_obj::set_V3( ::org::gameplay3d::immutable::IVector3 v){
{
		HX_STACK_FRAME("org.gameplay3d.Vector3","set_V3",0x195737e5,"org.gameplay3d.Vector3.set_V3","org/gameplay3d/Vector3.hx",196,0xe2fdf03b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(196)
		::org::gameplay3d::Vector3_obj::hx_Vector3_set_V3(this->nativeObject,(  (((v == null()))) ? Dynamic(null()) : Dynamic(v->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3_obj,set_V3,(void))

Void Vector3_obj::set_ArrFlt( Array< Float > array){
{
		HX_STACK_FRAME("org.gameplay3d.Vector3","set_ArrFlt",0x21d15575,"org.gameplay3d.Vector3.set_ArrFlt","org/gameplay3d/Vector3.hx",202,0xe2fdf03b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(array,"array")
		HX_STACK_LINE(202)
		::org::gameplay3d::Vector3_obj::hx_Vector3_set_ArrFlt(this->nativeObject,array);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3_obj,set_ArrFlt,(void))

Void Vector3_obj::set_FltX3( Float x,Float y,Float z){
{
		HX_STACK_FRAME("org.gameplay3d.Vector3","set_FltX3",0xf8bf38e1,"org.gameplay3d.Vector3.set_FltX3","org/gameplay3d/Vector3.hx",208,0xe2fdf03b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(208)
		::org::gameplay3d::Vector3_obj::hx_Vector3_set_FltX3(this->nativeObject,x,y,z);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Vector3_obj,set_FltX3,(void))

Void Vector3_obj::smooth( ::org::gameplay3d::immutable::IVector3 target,Float elapsedTime,Float responseTime){
{
		HX_STACK_FRAME("org.gameplay3d.Vector3","smooth",0xb14a0939,"org.gameplay3d.Vector3.smooth","org/gameplay3d/Vector3.hx",214,0xe2fdf03b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(elapsedTime,"elapsedTime")
		HX_STACK_ARG(responseTime,"responseTime")
		HX_STACK_LINE(214)
		::org::gameplay3d::Vector3_obj::hx_Vector3_smooth(this->nativeObject,(  (((target == null()))) ? Dynamic(null()) : Dynamic(target->__Field(HX_CSTRING("nativeObject"),true)) ),elapsedTime,responseTime);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Vector3_obj,smooth,(void))

Void Vector3_obj::subtract_V3( ::org::gameplay3d::immutable::IVector3 v){
{
		HX_STACK_FRAME("org.gameplay3d.Vector3","subtract_V3",0xfb10a7bd,"org.gameplay3d.Vector3.subtract_V3","org/gameplay3d/Vector3.hx",226,0xe2fdf03b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(226)
		::org::gameplay3d::Vector3_obj::hx_Vector3_subtract(this->nativeObject,(  (((v == null()))) ? Dynamic(null()) : Dynamic(v->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3_obj,subtract_V3,(void))

Float Vector3_obj::get_x( ){
	HX_STACK_FRAME("org.gameplay3d.Vector3","get_x",0xb805cea4,"org.gameplay3d.Vector3.get_x","org/gameplay3d/Vector3.hx",288,0xe2fdf03b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(288)
	return ::org::gameplay3d::Vector3_obj::hx_Vector3_property_x_get(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3_obj,get_x,return )

Float Vector3_obj::set_x( Float value){
	HX_STACK_FRAME("org.gameplay3d.Vector3","set_x",0xa0d4c4b0,"org.gameplay3d.Vector3.set_x","org/gameplay3d/Vector3.hx",293,0xe2fdf03b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(293)
	return ::org::gameplay3d::Vector3_obj::hx_Vector3_property_x_set(this->nativeObject,value);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3_obj,set_x,return )

Float Vector3_obj::get_y( ){
	HX_STACK_FRAME("org.gameplay3d.Vector3","get_y",0xb805cea5,"org.gameplay3d.Vector3.get_y","org/gameplay3d/Vector3.hx",298,0xe2fdf03b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(298)
	return ::org::gameplay3d::Vector3_obj::hx_Vector3_property_y_get(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3_obj,get_y,return )

Float Vector3_obj::set_y( Float value){
	HX_STACK_FRAME("org.gameplay3d.Vector3","set_y",0xa0d4c4b1,"org.gameplay3d.Vector3.set_y","org/gameplay3d/Vector3.hx",303,0xe2fdf03b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(303)
	return ::org::gameplay3d::Vector3_obj::hx_Vector3_property_y_set(this->nativeObject,value);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3_obj,set_y,return )

Float Vector3_obj::get_z( ){
	HX_STACK_FRAME("org.gameplay3d.Vector3","get_z",0xb805cea6,"org.gameplay3d.Vector3.get_z","org/gameplay3d/Vector3.hx",308,0xe2fdf03b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(308)
	return ::org::gameplay3d::Vector3_obj::hx_Vector3_property_z_get(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3_obj,get_z,return )

Float Vector3_obj::set_z( Float value){
	HX_STACK_FRAME("org.gameplay3d.Vector3","set_z",0xa0d4c4b2,"org.gameplay3d.Vector3.set_z","org/gameplay3d/Vector3.hx",313,0xe2fdf03b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(313)
	return ::org::gameplay3d::Vector3_obj::hx_Vector3_property_z_set(this->nativeObject,value);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3_obj,set_z,return )

::org::gameplay3d::Vector3 Vector3_obj::_one;

::org::gameplay3d::Vector3 Vector3_obj::_unitX;

::org::gameplay3d::Vector3 Vector3_obj::_unitY;

::org::gameplay3d::Vector3 Vector3_obj::_unitZ;

::org::gameplay3d::Vector3 Vector3_obj::_zero;

::org::gameplay3d::Vector3 Vector3_obj::make( ){
	HX_STACK_FRAME("org.gameplay3d.Vector3","make",0x23c65239,"org.gameplay3d.Vector3.make","org/gameplay3d/Vector3.hx",32,0xe2fdf03b)
	HX_STACK_LINE(33)
	Dynamic _g = ::org::gameplay3d::Vector3_obj::constructNativeObject();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(33)
	return ::org::gameplay3d::Vector3_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector3_obj,make,return )

::org::gameplay3d::Vector3 Vector3_obj::make_V3( ::org::gameplay3d::immutable::IVector3 copy){
	HX_STACK_FRAME("org.gameplay3d.Vector3","make_V3",0x556e78a3,"org.gameplay3d.Vector3.make_V3","org/gameplay3d/Vector3.hx",38,0xe2fdf03b)
	HX_STACK_ARG(copy,"copy")
	HX_STACK_LINE(39)
	Dynamic _g = ::org::gameplay3d::Vector3_obj::constructNativeObject_V3(copy);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(39)
	return ::org::gameplay3d::Vector3_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector3_obj,make_V3,return )

::org::gameplay3d::Vector3 Vector3_obj::make_V3X2( ::org::gameplay3d::immutable::IVector3 p1,::org::gameplay3d::immutable::IVector3 p2){
	HX_STACK_FRAME("org.gameplay3d.Vector3","make_V3X2",0x6878743d,"org.gameplay3d.Vector3.make_V3X2","org/gameplay3d/Vector3.hx",44,0xe2fdf03b)
	HX_STACK_ARG(p1,"p1")
	HX_STACK_ARG(p2,"p2")
	HX_STACK_LINE(45)
	Dynamic _g = ::org::gameplay3d::Vector3_obj::constructNativeObject_V3X2(p1,p2);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(45)
	return ::org::gameplay3d::Vector3_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector3_obj,make_V3X2,return )

::org::gameplay3d::Vector3 Vector3_obj::make_ArrFlt( Array< Float > array){
	HX_STACK_FRAME("org.gameplay3d.Vector3","make_ArrFlt",0xc0aacd33,"org.gameplay3d.Vector3.make_ArrFlt","org/gameplay3d/Vector3.hx",50,0xe2fdf03b)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(51)
	Dynamic _g = ::org::gameplay3d::Vector3_obj::constructNativeObject_ArrFlt(array);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(51)
	return ::org::gameplay3d::Vector3_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector3_obj,make_ArrFlt,return )

::org::gameplay3d::Vector3 Vector3_obj::make_FltX3( Float x,Float y,Float z){
	HX_STACK_FRAME("org.gameplay3d.Vector3","make_FltX3",0xf04682e3,"org.gameplay3d.Vector3.make_FltX3","org/gameplay3d/Vector3.hx",56,0xe2fdf03b)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(z,"z")
	HX_STACK_LINE(57)
	Dynamic _g = ::org::gameplay3d::Vector3_obj::constructNativeObject_FltX3(x,y,z);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(57)
	return ::org::gameplay3d::Vector3_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector3_obj,make_FltX3,return )

Void Vector3_obj::add_V3X3( ::org::gameplay3d::immutable::IVector3 v1,::org::gameplay3d::immutable::IVector3 v2,::org::gameplay3d::Vector3 dst){
{
		HX_STACK_FRAME("org.gameplay3d.Vector3","add_V3X3",0xf2a9c521,"org.gameplay3d.Vector3.add_V3X3","org/gameplay3d/Vector3.hx",63,0xe2fdf03b)
		HX_STACK_ARG(v1,"v1")
		HX_STACK_ARG(v2,"v2")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(63)
		::org::gameplay3d::Vector3_obj::hx_Vector3_static_add((  (((v1 == null()))) ? Dynamic(null()) : Dynamic(v1->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((v2 == null()))) ? Dynamic(null()) : Dynamic(v2->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector3_obj,add_V3X3,(void))

Float Vector3_obj::angle( ::org::gameplay3d::immutable::IVector3 v1,::org::gameplay3d::immutable::IVector3 v2){
	HX_STACK_FRAME("org.gameplay3d.Vector3","angle",0x49876d28,"org.gameplay3d.Vector3.angle","org/gameplay3d/Vector3.hx",75,0xe2fdf03b)
	HX_STACK_ARG(v1,"v1")
	HX_STACK_ARG(v2,"v2")
	HX_STACK_LINE(75)
	return ::org::gameplay3d::Vector3_obj::hx_Vector3_static_angle((  (((v1 == null()))) ? Dynamic(null()) : Dynamic(v1->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((v2 == null()))) ? Dynamic(null()) : Dynamic(v2->__Field(HX_CSTRING("nativeObject"),true)) ));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector3_obj,angle,return )

Void Vector3_obj::clamp_V3X4( ::org::gameplay3d::immutable::IVector3 v,::org::gameplay3d::immutable::IVector3 min,::org::gameplay3d::immutable::IVector3 max,::org::gameplay3d::Vector3 dst){
{
		HX_STACK_FRAME("org.gameplay3d.Vector3","clamp_V3X4",0xb0ca36c8,"org.gameplay3d.Vector3.clamp_V3X4","org/gameplay3d/Vector3.hx",81,0xe2fdf03b)
		HX_STACK_ARG(v,"v")
		HX_STACK_ARG(min,"min")
		HX_STACK_ARG(max,"max")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(81)
		::org::gameplay3d::Vector3_obj::hx_Vector3_static_clamp((  (((v == null()))) ? Dynamic(null()) : Dynamic(v->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((min == null()))) ? Dynamic(null()) : Dynamic(min->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((max == null()))) ? Dynamic(null()) : Dynamic(max->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Vector3_obj,clamp_V3X4,(void))

Void Vector3_obj::cross_V3X3( ::org::gameplay3d::immutable::IVector3 v1,::org::gameplay3d::immutable::IVector3 v2,::org::gameplay3d::Vector3 dst){
{
		HX_STACK_FRAME("org.gameplay3d.Vector3","cross_V3X3",0xefc7c822,"org.gameplay3d.Vector3.cross_V3X3","org/gameplay3d/Vector3.hx",93,0xe2fdf03b)
		HX_STACK_ARG(v1,"v1")
		HX_STACK_ARG(v2,"v2")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(93)
		::org::gameplay3d::Vector3_obj::hx_Vector3_static_cross((  (((v1 == null()))) ? Dynamic(null()) : Dynamic(v1->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((v2 == null()))) ? Dynamic(null()) : Dynamic(v2->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector3_obj,cross_V3X3,(void))

Float Vector3_obj::dot_V3X2( ::org::gameplay3d::immutable::IVector3 v1,::org::gameplay3d::immutable::IVector3 v2){
	HX_STACK_FRAME("org.gameplay3d.Vector3","dot_V3X2",0xcd62fbb8,"org.gameplay3d.Vector3.dot_V3X2","org/gameplay3d/Vector3.hx",123,0xe2fdf03b)
	HX_STACK_ARG(v1,"v1")
	HX_STACK_ARG(v2,"v2")
	HX_STACK_LINE(123)
	return ::org::gameplay3d::Vector3_obj::hx_Vector3_static_dot((  (((v1 == null()))) ? Dynamic(null()) : Dynamic(v1->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((v2 == null()))) ? Dynamic(null()) : Dynamic(v2->__Field(HX_CSTRING("nativeObject"),true)) ));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector3_obj,dot_V3X2,return )

::org::gameplay3d::Vector3 Vector3_obj::fromColor( int color){
	HX_STACK_FRAME("org.gameplay3d.Vector3","fromColor",0x3ae2536e,"org.gameplay3d.Vector3.fromColor","org/gameplay3d/Vector3.hx",129,0xe2fdf03b)
	HX_STACK_ARG(color,"color")
	HX_STACK_LINE(129)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(129)
	Dynamic nativeObject = ::org::gameplay3d::Vector3_obj::hx_Vector3_static_fromColor(color);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(129)
	if (((nativeObject == null()))){
		HX_STACK_LINE(129)
		return null();
	}
	else{
		HX_STACK_LINE(129)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(129)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(129)
			::org::gameplay3d::Vector3 result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(129)
			if (((result == null()))){
				HX_STACK_LINE(129)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(129)
				::org::gameplay3d::Vector3 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(129)
				result = _g;
				HX_STACK_LINE(129)
				ref->set(result);
			}
			HX_STACK_LINE(129)
			return result;
		}
		else{
			HX_STACK_LINE(129)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(129)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(129)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector3_obj,fromColor,return )

::org::gameplay3d::immutable::IVector3 Vector3_obj::one( ){
	HX_STACK_FRAME("org.gameplay3d.Vector3","one",0xf947547b,"org.gameplay3d.Vector3.one","org/gameplay3d/Vector3.hx",178,0xe2fdf03b)
	HX_STACK_LINE(28)
	if (((::org::gameplay3d::Vector3_obj::_one == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(178)
			Dynamic nativeObject = ::org::gameplay3d::Vector3_obj::hx_Vector3_static_one();		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::Vector3 result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Vector3 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return ::org::gameplay3d::Vector3_obj::_one = _g1;
	}
	else{
		HX_STACK_LINE(178)
		Dynamic _g2 = ::org::gameplay3d::Vector3_obj::hx_Vector3_static_one();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g3 = ::org::gameplay3d::Vector3_obj::_one->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return ::org::gameplay3d::Vector3_obj::_one = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector3_obj,one,return )

Void Vector3_obj::subtract_V3X3( ::org::gameplay3d::immutable::IVector3 v1,::org::gameplay3d::immutable::IVector3 v2,::org::gameplay3d::Vector3 dst){
{
		HX_STACK_FRAME("org.gameplay3d.Vector3","subtract_V3X3",0x5e581dd8,"org.gameplay3d.Vector3.subtract_V3X3","org/gameplay3d/Vector3.hx",220,0xe2fdf03b)
		HX_STACK_ARG(v1,"v1")
		HX_STACK_ARG(v2,"v2")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(220)
		::org::gameplay3d::Vector3_obj::hx_Vector3_static_subtract((  (((v1 == null()))) ? Dynamic(null()) : Dynamic(v1->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((v2 == null()))) ? Dynamic(null()) : Dynamic(v2->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector3_obj,subtract_V3X3,(void))

::org::gameplay3d::immutable::IVector3 Vector3_obj::unitX( ){
	HX_STACK_FRAME("org.gameplay3d.Vector3","unitX",0xcd8c92a9,"org.gameplay3d.Vector3.unitX","org/gameplay3d/Vector3.hx",232,0xe2fdf03b)
	HX_STACK_LINE(28)
	if (((::org::gameplay3d::Vector3_obj::_unitX == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(232)
			Dynamic nativeObject = ::org::gameplay3d::Vector3_obj::hx_Vector3_static_unitX();		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::Vector3 result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Vector3 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return ::org::gameplay3d::Vector3_obj::_unitX = _g1;
	}
	else{
		HX_STACK_LINE(232)
		Dynamic _g2 = ::org::gameplay3d::Vector3_obj::hx_Vector3_static_unitX();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g3 = ::org::gameplay3d::Vector3_obj::_unitX->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return ::org::gameplay3d::Vector3_obj::_unitX = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector3_obj,unitX,return )

::org::gameplay3d::immutable::IVector3 Vector3_obj::unitY( ){
	HX_STACK_FRAME("org.gameplay3d.Vector3","unitY",0xcd8c92aa,"org.gameplay3d.Vector3.unitY","org/gameplay3d/Vector3.hx",238,0xe2fdf03b)
	HX_STACK_LINE(28)
	if (((::org::gameplay3d::Vector3_obj::_unitY == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(238)
			Dynamic nativeObject = ::org::gameplay3d::Vector3_obj::hx_Vector3_static_unitY();		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::Vector3 result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Vector3 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return ::org::gameplay3d::Vector3_obj::_unitY = _g1;
	}
	else{
		HX_STACK_LINE(238)
		Dynamic _g2 = ::org::gameplay3d::Vector3_obj::hx_Vector3_static_unitY();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g3 = ::org::gameplay3d::Vector3_obj::_unitY->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return ::org::gameplay3d::Vector3_obj::_unitY = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector3_obj,unitY,return )

::org::gameplay3d::immutable::IVector3 Vector3_obj::unitZ( ){
	HX_STACK_FRAME("org.gameplay3d.Vector3","unitZ",0xcd8c92ab,"org.gameplay3d.Vector3.unitZ","org/gameplay3d/Vector3.hx",244,0xe2fdf03b)
	HX_STACK_LINE(28)
	if (((::org::gameplay3d::Vector3_obj::_unitX == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(244)
			Dynamic nativeObject = ::org::gameplay3d::Vector3_obj::hx_Vector3_static_unitZ();		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::Vector3 result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Vector3 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return ::org::gameplay3d::Vector3_obj::_unitX = _g1;
	}
	else{
		HX_STACK_LINE(244)
		Dynamic _g2 = ::org::gameplay3d::Vector3_obj::hx_Vector3_static_unitZ();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g3 = ::org::gameplay3d::Vector3_obj::_unitX->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return ::org::gameplay3d::Vector3_obj::_unitX = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector3_obj,unitZ,return )

::org::gameplay3d::immutable::IVector3 Vector3_obj::zero( ){
	HX_STACK_FRAME("org.gameplay3d.Vector3","zero",0x2c612773,"org.gameplay3d.Vector3.zero","org/gameplay3d/Vector3.hx",250,0xe2fdf03b)
	HX_STACK_LINE(28)
	if (((::org::gameplay3d::Vector3_obj::_zero == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(250)
			Dynamic nativeObject = ::org::gameplay3d::Vector3_obj::hx_Vector3_static_zero();		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::Vector3 result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Vector3 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return ::org::gameplay3d::Vector3_obj::_zero = _g1;
	}
	else{
		HX_STACK_LINE(250)
		Dynamic _g2 = ::org::gameplay3d::Vector3_obj::hx_Vector3_static_zero();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g3 = ::org::gameplay3d::Vector3_obj::_zero->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return ::org::gameplay3d::Vector3_obj::_zero = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector3_obj,zero,return )

Dynamic Vector3_obj::constructNativeObject( ){
	HX_STACK_FRAME("org.gameplay3d.Vector3","constructNativeObject",0xa94155c2,"org.gameplay3d.Vector3.constructNativeObject","org/gameplay3d/Vector3.hx",259,0xe2fdf03b)
	HX_STACK_LINE(259)
	return ::org::gameplay3d::Vector3_obj::hx_Vector3_Construct();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector3_obj,constructNativeObject,return )

Dynamic Vector3_obj::constructNativeObject_V3( ::org::gameplay3d::immutable::IVector3 copy){
	HX_STACK_FRAME("org.gameplay3d.Vector3","constructNativeObject_V3",0x850590ba,"org.gameplay3d.Vector3.constructNativeObject_V3","org/gameplay3d/Vector3.hx",264,0xe2fdf03b)
	HX_STACK_ARG(copy,"copy")
	HX_STACK_LINE(264)
	return ::org::gameplay3d::Vector3_obj::hx_Vector3_Construct_V3((  (((copy == null()))) ? Dynamic(null()) : Dynamic(copy->__Field(HX_CSTRING("nativeObject"),true)) ));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector3_obj,constructNativeObject_V3,return )

Dynamic Vector3_obj::constructNativeObject_V3X2( ::org::gameplay3d::immutable::IVector3 p1,::org::gameplay3d::immutable::IVector3 p2){
	HX_STACK_FRAME("org.gameplay3d.Vector3","constructNativeObject_V3X2",0xfe170014,"org.gameplay3d.Vector3.constructNativeObject_V3X2","org/gameplay3d/Vector3.hx",269,0xe2fdf03b)
	HX_STACK_ARG(p1,"p1")
	HX_STACK_ARG(p2,"p2")
	HX_STACK_LINE(269)
	return ::org::gameplay3d::Vector3_obj::hx_Vector3_Construct_V3X2((  (((p1 == null()))) ? Dynamic(null()) : Dynamic(p1->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((p2 == null()))) ? Dynamic(null()) : Dynamic(p2->__Field(HX_CSTRING("nativeObject"),true)) ));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector3_obj,constructNativeObject_V3X2,return )

Dynamic Vector3_obj::constructNativeObject_ArrFlt( Array< Float > array){
	HX_STACK_FRAME("org.gameplay3d.Vector3","constructNativeObject_ArrFlt",0xe3e53cca,"org.gameplay3d.Vector3.constructNativeObject_ArrFlt","org/gameplay3d/Vector3.hx",274,0xe2fdf03b)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(274)
	return ::org::gameplay3d::Vector3_obj::hx_Vector3_Construct_ArrFlt(array);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector3_obj,constructNativeObject_ArrFlt,return )

Dynamic Vector3_obj::constructNativeObject_FltX3( Float x,Float y,Float z){
	HX_STACK_FRAME("org.gameplay3d.Vector3","constructNativeObject_FltX3",0x4562532c,"org.gameplay3d.Vector3.constructNativeObject_FltX3","org/gameplay3d/Vector3.hx",279,0xe2fdf03b)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(z,"z")
	HX_STACK_LINE(279)
	return ::org::gameplay3d::Vector3_obj::hx_Vector3_Construct_FltX3(x,y,z);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector3_obj,constructNativeObject_FltX3,return )

Dynamic Vector3_obj::hx_Vector3_Construct;

Dynamic Vector3_obj::hx_Vector3_Construct_V3;

Dynamic Vector3_obj::hx_Vector3_Construct_V3X2;

Dynamic Vector3_obj::hx_Vector3_Construct_ArrFlt;

Dynamic Vector3_obj::hx_Vector3_Construct_FltX3;

Dynamic Vector3_obj::hx_Vector3_static_add;

Dynamic Vector3_obj::hx_Vector3_add;

Dynamic Vector3_obj::hx_Vector3_static_angle;

Dynamic Vector3_obj::hx_Vector3_static_clamp;

Dynamic Vector3_obj::hx_Vector3_clamp;

Dynamic Vector3_obj::hx_Vector3_static_cross;

Dynamic Vector3_obj::hx_Vector3_cross;

Dynamic Vector3_obj::hx_Vector3_distance;

Dynamic Vector3_obj::hx_Vector3_distanceSquared;

Dynamic Vector3_obj::hx_Vector3_dot;

Dynamic Vector3_obj::hx_Vector3_static_dot;

Dynamic Vector3_obj::hx_Vector3_static_fromColor;

Dynamic Vector3_obj::hx_Vector3_isOne;

Dynamic Vector3_obj::hx_Vector3_isZero;

Dynamic Vector3_obj::hx_Vector3_length;

Dynamic Vector3_obj::hx_Vector3_lengthSquared;

Dynamic Vector3_obj::hx_Vector3_negate;

Dynamic Vector3_obj::hx_Vector3_normalize;

Dynamic Vector3_obj::hx_Vector3_normalize_V3;

Dynamic Vector3_obj::hx_Vector3_static_one;

Dynamic Vector3_obj::hx_Vector3_scale;

Dynamic Vector3_obj::hx_Vector3_set_V3X2;

Dynamic Vector3_obj::hx_Vector3_set_V3;

Dynamic Vector3_obj::hx_Vector3_set_ArrFlt;

Dynamic Vector3_obj::hx_Vector3_set_FltX3;

Dynamic Vector3_obj::hx_Vector3_smooth;

Dynamic Vector3_obj::hx_Vector3_static_subtract;

Dynamic Vector3_obj::hx_Vector3_subtract;

Dynamic Vector3_obj::hx_Vector3_static_unitX;

Dynamic Vector3_obj::hx_Vector3_static_unitY;

Dynamic Vector3_obj::hx_Vector3_static_unitZ;

Dynamic Vector3_obj::hx_Vector3_static_zero;

Dynamic Vector3_obj::hx_Vector3_property_x_get;

Dynamic Vector3_obj::hx_Vector3_property_x_set;

Dynamic Vector3_obj::hx_Vector3_property_y_get;

Dynamic Vector3_obj::hx_Vector3_property_y_set;

Dynamic Vector3_obj::hx_Vector3_property_z_get;

Dynamic Vector3_obj::hx_Vector3_property_z_set;


Vector3_obj::Vector3_obj()
{
}

Dynamic Vector3_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return get_x(); }
		if (HX_FIELD_EQ(inName,"y") ) { return get_y(); }
		if (HX_FIELD_EQ(inName,"z") ) { return get_z(); }
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
		if (HX_FIELD_EQ(inName,"unitZ") ) { return unitZ_dyn(); }
		if (HX_FIELD_EQ(inName,"isOne") ) { return isOne_dyn(); }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale_dyn(); }
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"get_z") ) { return get_z_dyn(); }
		if (HX_FIELD_EQ(inName,"set_z") ) { return set_z_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_unitX") ) { return _unitX; }
		if (HX_FIELD_EQ(inName,"_unitY") ) { return _unitY; }
		if (HX_FIELD_EQ(inName,"_unitZ") ) { return _unitZ; }
		if (HX_FIELD_EQ(inName,"add_V3") ) { return add_V3_dyn(); }
		if (HX_FIELD_EQ(inName,"dot_V3") ) { return dot_V3_dyn(); }
		if (HX_FIELD_EQ(inName,"isZero") ) { return isZero_dyn(); }
		if (HX_FIELD_EQ(inName,"length") ) { return length_dyn(); }
		if (HX_FIELD_EQ(inName,"negate") ) { return negate_dyn(); }
		if (HX_FIELD_EQ(inName,"set_V3") ) { return set_V3_dyn(); }
		if (HX_FIELD_EQ(inName,"smooth") ) { return smooth_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"make_V3") ) { return make_V3_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"add_V3X3") ) { return add_V3X3_dyn(); }
		if (HX_FIELD_EQ(inName,"dot_V3X2") ) { return dot_V3X2_dyn(); }
		if (HX_FIELD_EQ(inName,"cross_V3") ) { return cross_V3_dyn(); }
		if (HX_FIELD_EQ(inName,"distance") ) { return distance_dyn(); }
		if (HX_FIELD_EQ(inName,"set_V3X2") ) { return set_V3X2_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"make_V3X2") ) { return make_V3X2_dyn(); }
		if (HX_FIELD_EQ(inName,"fromColor") ) { return fromColor_dyn(); }
		if (HX_FIELD_EQ(inName,"normalize") ) { return normalize_dyn(); }
		if (HX_FIELD_EQ(inName,"set_FltX3") ) { return set_FltX3_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"make_FltX3") ) { return make_FltX3_dyn(); }
		if (HX_FIELD_EQ(inName,"clamp_V3X4") ) { return clamp_V3X4_dyn(); }
		if (HX_FIELD_EQ(inName,"cross_V3X3") ) { return cross_V3X3_dyn(); }
		if (HX_FIELD_EQ(inName,"clamp_V3X2") ) { return clamp_V3X2_dyn(); }
		if (HX_FIELD_EQ(inName,"set_ArrFlt") ) { return set_ArrFlt_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"make_ArrFlt") ) { return make_ArrFlt_dyn(); }
		if (HX_FIELD_EQ(inName,"subtract_V3") ) { return subtract_V3_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"normalize_V3") ) { return normalize_V3_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"subtract_V3X3") ) { return subtract_V3X3_dyn(); }
		if (HX_FIELD_EQ(inName,"lengthSquared") ) { return lengthSquared_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"hx_Vector3_add") ) { return hx_Vector3_add; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_dot") ) { return hx_Vector3_dot; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"distanceSquared") ) { return distanceSquared_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hx_Vector3_clamp") ) { return hx_Vector3_clamp; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_cross") ) { return hx_Vector3_cross; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_isOne") ) { return hx_Vector3_isOne; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_scale") ) { return hx_Vector3_scale; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"hx_Vector3_isZero") ) { return hx_Vector3_isZero; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_length") ) { return hx_Vector3_length; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_negate") ) { return hx_Vector3_negate; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_set_V3") ) { return hx_Vector3_set_V3; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_smooth") ) { return hx_Vector3_smooth; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hx_Vector3_distance") ) { return hx_Vector3_distance; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_set_V3X2") ) { return hx_Vector3_set_V3X2; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_subtract") ) { return hx_Vector3_subtract; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Vector3_Construct") ) { return hx_Vector3_Construct; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_normalize") ) { return hx_Vector3_normalize; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_set_FltX3") ) { return hx_Vector3_set_FltX3; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"constructNativeObject") ) { return constructNativeObject_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Vector3_static_add") ) { return hx_Vector3_static_add; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_static_dot") ) { return hx_Vector3_static_dot; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_static_one") ) { return hx_Vector3_static_one; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_set_ArrFlt") ) { return hx_Vector3_set_ArrFlt; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Vector3_static_zero") ) { return hx_Vector3_static_zero; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_Vector3_Construct_V3") ) { return hx_Vector3_Construct_V3; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_static_angle") ) { return hx_Vector3_static_angle; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_static_clamp") ) { return hx_Vector3_static_clamp; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_static_cross") ) { return hx_Vector3_static_cross; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_normalize_V3") ) { return hx_Vector3_normalize_V3; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_static_unitX") ) { return hx_Vector3_static_unitX; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_static_unitY") ) { return hx_Vector3_static_unitY; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_static_unitZ") ) { return hx_Vector3_static_unitZ; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"constructNativeObject_V3") ) { return constructNativeObject_V3_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Vector3_lengthSquared") ) { return hx_Vector3_lengthSquared; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_Vector3_Construct_V3X2") ) { return hx_Vector3_Construct_V3X2; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_property_x_get") ) { return hx_Vector3_property_x_get; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_property_x_set") ) { return hx_Vector3_property_x_set; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_property_y_get") ) { return hx_Vector3_property_y_get; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_property_y_set") ) { return hx_Vector3_property_y_set; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_property_z_get") ) { return hx_Vector3_property_z_get; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_property_z_set") ) { return hx_Vector3_property_z_set; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"constructNativeObject_V3X2") ) { return constructNativeObject_V3X2_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Vector3_Construct_FltX3") ) { return hx_Vector3_Construct_FltX3; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_distanceSquared") ) { return hx_Vector3_distanceSquared; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_static_subtract") ) { return hx_Vector3_static_subtract; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"constructNativeObject_FltX3") ) { return constructNativeObject_FltX3_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Vector3_Construct_ArrFlt") ) { return hx_Vector3_Construct_ArrFlt; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_static_fromColor") ) { return hx_Vector3_static_fromColor; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"constructNativeObject_ArrFlt") ) { return constructNativeObject_ArrFlt_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Vector3_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return set_x(inValue); }
		if (HX_FIELD_EQ(inName,"y") ) { return set_y(inValue); }
		if (HX_FIELD_EQ(inName,"z") ) { return set_z(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_one") ) { _one=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_zero") ) { _zero=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_unitX") ) { _unitX=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_unitY") ) { _unitY=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_unitZ") ) { _unitZ=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"hx_Vector3_add") ) { hx_Vector3_add=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_dot") ) { hx_Vector3_dot=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hx_Vector3_clamp") ) { hx_Vector3_clamp=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_cross") ) { hx_Vector3_cross=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_isOne") ) { hx_Vector3_isOne=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_scale") ) { hx_Vector3_scale=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"hx_Vector3_isZero") ) { hx_Vector3_isZero=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_length") ) { hx_Vector3_length=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_negate") ) { hx_Vector3_negate=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_set_V3") ) { hx_Vector3_set_V3=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_smooth") ) { hx_Vector3_smooth=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hx_Vector3_distance") ) { hx_Vector3_distance=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_set_V3X2") ) { hx_Vector3_set_V3X2=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_subtract") ) { hx_Vector3_subtract=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Vector3_Construct") ) { hx_Vector3_Construct=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_normalize") ) { hx_Vector3_normalize=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_set_FltX3") ) { hx_Vector3_set_FltX3=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hx_Vector3_static_add") ) { hx_Vector3_static_add=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_static_dot") ) { hx_Vector3_static_dot=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_static_one") ) { hx_Vector3_static_one=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_set_ArrFlt") ) { hx_Vector3_set_ArrFlt=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Vector3_static_zero") ) { hx_Vector3_static_zero=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_Vector3_Construct_V3") ) { hx_Vector3_Construct_V3=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_static_angle") ) { hx_Vector3_static_angle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_static_clamp") ) { hx_Vector3_static_clamp=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_static_cross") ) { hx_Vector3_static_cross=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_normalize_V3") ) { hx_Vector3_normalize_V3=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_static_unitX") ) { hx_Vector3_static_unitX=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_static_unitY") ) { hx_Vector3_static_unitY=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_static_unitZ") ) { hx_Vector3_static_unitZ=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_Vector3_lengthSquared") ) { hx_Vector3_lengthSquared=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_Vector3_Construct_V3X2") ) { hx_Vector3_Construct_V3X2=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_property_x_get") ) { hx_Vector3_property_x_get=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_property_x_set") ) { hx_Vector3_property_x_set=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_property_y_get") ) { hx_Vector3_property_y_get=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_property_y_set") ) { hx_Vector3_property_y_set=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_property_z_get") ) { hx_Vector3_property_z_get=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_property_z_set") ) { hx_Vector3_property_z_set=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_Vector3_Construct_FltX3") ) { hx_Vector3_Construct_FltX3=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_distanceSquared") ) { hx_Vector3_distanceSquared=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_static_subtract") ) { hx_Vector3_static_subtract=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"hx_Vector3_Construct_ArrFlt") ) { hx_Vector3_Construct_ArrFlt=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Vector3_static_fromColor") ) { hx_Vector3_static_fromColor=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Vector3_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("z"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_one"),
	HX_CSTRING("_unitX"),
	HX_CSTRING("_unitY"),
	HX_CSTRING("_unitZ"),
	HX_CSTRING("_zero"),
	HX_CSTRING("make"),
	HX_CSTRING("make_V3"),
	HX_CSTRING("make_V3X2"),
	HX_CSTRING("make_ArrFlt"),
	HX_CSTRING("make_FltX3"),
	HX_CSTRING("add_V3X3"),
	HX_CSTRING("angle"),
	HX_CSTRING("clamp_V3X4"),
	HX_CSTRING("cross_V3X3"),
	HX_CSTRING("dot_V3X2"),
	HX_CSTRING("fromColor"),
	HX_CSTRING("one"),
	HX_CSTRING("subtract_V3X3"),
	HX_CSTRING("unitX"),
	HX_CSTRING("unitY"),
	HX_CSTRING("unitZ"),
	HX_CSTRING("zero"),
	HX_CSTRING("constructNativeObject"),
	HX_CSTRING("constructNativeObject_V3"),
	HX_CSTRING("constructNativeObject_V3X2"),
	HX_CSTRING("constructNativeObject_ArrFlt"),
	HX_CSTRING("constructNativeObject_FltX3"),
	HX_CSTRING("hx_Vector3_Construct"),
	HX_CSTRING("hx_Vector3_Construct_V3"),
	HX_CSTRING("hx_Vector3_Construct_V3X2"),
	HX_CSTRING("hx_Vector3_Construct_ArrFlt"),
	HX_CSTRING("hx_Vector3_Construct_FltX3"),
	HX_CSTRING("hx_Vector3_static_add"),
	HX_CSTRING("hx_Vector3_add"),
	HX_CSTRING("hx_Vector3_static_angle"),
	HX_CSTRING("hx_Vector3_static_clamp"),
	HX_CSTRING("hx_Vector3_clamp"),
	HX_CSTRING("hx_Vector3_static_cross"),
	HX_CSTRING("hx_Vector3_cross"),
	HX_CSTRING("hx_Vector3_distance"),
	HX_CSTRING("hx_Vector3_distanceSquared"),
	HX_CSTRING("hx_Vector3_dot"),
	HX_CSTRING("hx_Vector3_static_dot"),
	HX_CSTRING("hx_Vector3_static_fromColor"),
	HX_CSTRING("hx_Vector3_isOne"),
	HX_CSTRING("hx_Vector3_isZero"),
	HX_CSTRING("hx_Vector3_length"),
	HX_CSTRING("hx_Vector3_lengthSquared"),
	HX_CSTRING("hx_Vector3_negate"),
	HX_CSTRING("hx_Vector3_normalize"),
	HX_CSTRING("hx_Vector3_normalize_V3"),
	HX_CSTRING("hx_Vector3_static_one"),
	HX_CSTRING("hx_Vector3_scale"),
	HX_CSTRING("hx_Vector3_set_V3X2"),
	HX_CSTRING("hx_Vector3_set_V3"),
	HX_CSTRING("hx_Vector3_set_ArrFlt"),
	HX_CSTRING("hx_Vector3_set_FltX3"),
	HX_CSTRING("hx_Vector3_smooth"),
	HX_CSTRING("hx_Vector3_static_subtract"),
	HX_CSTRING("hx_Vector3_subtract"),
	HX_CSTRING("hx_Vector3_static_unitX"),
	HX_CSTRING("hx_Vector3_static_unitY"),
	HX_CSTRING("hx_Vector3_static_unitZ"),
	HX_CSTRING("hx_Vector3_static_zero"),
	HX_CSTRING("hx_Vector3_property_x_get"),
	HX_CSTRING("hx_Vector3_property_x_set"),
	HX_CSTRING("hx_Vector3_property_y_get"),
	HX_CSTRING("hx_Vector3_property_y_set"),
	HX_CSTRING("hx_Vector3_property_z_get"),
	HX_CSTRING("hx_Vector3_property_z_set"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("add_V3"),
	HX_CSTRING("clamp_V3X2"),
	HX_CSTRING("cross_V3"),
	HX_CSTRING("distance"),
	HX_CSTRING("distanceSquared"),
	HX_CSTRING("dot_V3"),
	HX_CSTRING("isOne"),
	HX_CSTRING("isZero"),
	HX_CSTRING("length"),
	HX_CSTRING("lengthSquared"),
	HX_CSTRING("negate"),
	HX_CSTRING("normalize"),
	HX_CSTRING("normalize_V3"),
	HX_CSTRING("scale"),
	HX_CSTRING("set_V3X2"),
	HX_CSTRING("set_V3"),
	HX_CSTRING("set_ArrFlt"),
	HX_CSTRING("set_FltX3"),
	HX_CSTRING("smooth"),
	HX_CSTRING("subtract_V3"),
	HX_CSTRING("get_x"),
	HX_CSTRING("set_x"),
	HX_CSTRING("get_y"),
	HX_CSTRING("set_y"),
	HX_CSTRING("get_z"),
	HX_CSTRING("set_z"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vector3_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Vector3_obj::_one,"_one");
	HX_MARK_MEMBER_NAME(Vector3_obj::_unitX,"_unitX");
	HX_MARK_MEMBER_NAME(Vector3_obj::_unitY,"_unitY");
	HX_MARK_MEMBER_NAME(Vector3_obj::_unitZ,"_unitZ");
	HX_MARK_MEMBER_NAME(Vector3_obj::_zero,"_zero");
	HX_MARK_MEMBER_NAME(Vector3_obj::hx_Vector3_Construct,"hx_Vector3_Construct");
	HX_MARK_MEMBER_NAME(Vector3_obj::hx_Vector3_Construct_V3,"hx_Vector3_Construct_V3");
	HX_MARK_MEMBER_NAME(Vector3_obj::hx_Vector3_Construct_V3X2,"hx_Vector3_Construct_V3X2");
	HX_MARK_MEMBER_NAME(Vector3_obj::hx_Vector3_Construct_ArrFlt,"hx_Vector3_Construct_ArrFlt");
	HX_MARK_MEMBER_NAME(Vector3_obj::hx_Vector3_Construct_FltX3,"hx_Vector3_Construct_FltX3");
	HX_MARK_MEMBER_NAME(Vector3_obj::hx_Vector3_static_add,"hx_Vector3_static_add");
	HX_MARK_MEMBER_NAME(Vector3_obj::hx_Vector3_add,"hx_Vector3_add");
	HX_MARK_MEMBER_NAME(Vector3_obj::hx_Vector3_static_angle,"hx_Vector3_static_angle");
	HX_MARK_MEMBER_NAME(Vector3_obj::hx_Vector3_static_clamp,"hx_Vector3_static_clamp");
	HX_MARK_MEMBER_NAME(Vector3_obj::hx_Vector3_clamp,"hx_Vector3_clamp");
	HX_MARK_MEMBER_NAME(Vector3_obj::hx_Vector3_static_cross,"hx_Vector3_static_cross");
	HX_MARK_MEMBER_NAME(Vector3_obj::hx_Vector3_cross,"hx_Vector3_cross");
	HX_MARK_MEMBER_NAME(Vector3_obj::hx_Vector3_distance,"hx_Vector3_distance");
	HX_MARK_MEMBER_NAME(Vector3_obj::hx_Vector3_distanceSquared,"hx_Vector3_distanceSquared");
	HX_MARK_MEMBER_NAME(Vector3_obj::hx_Vector3_dot,"hx_Vector3_dot");
	HX_MARK_MEMBER_NAME(Vector3_obj::hx_Vector3_static_dot,"hx_Vector3_static_dot");
	HX_MARK_MEMBER_NAME(Vector3_obj::hx_Vector3_static_fromColor,"hx_Vector3_static_fromColor");
	HX_MARK_MEMBER_NAME(Vector3_obj::hx_Vector3_isOne,"hx_Vector3_isOne");
	HX_MARK_MEMBER_NAME(Vector3_obj::hx_Vector3_isZero,"hx_Vector3_isZero");
	HX_MARK_MEMBER_NAME(Vector3_obj::hx_Vector3_length,"hx_Vector3_length");
	HX_MARK_MEMBER_NAME(Vector3_obj::hx_Vector3_lengthSquared,"hx_Vector3_lengthSquared");
	HX_MARK_MEMBER_NAME(Vector3_obj::hx_Vector3_negate,"hx_Vector3_negate");
	HX_MARK_MEMBER_NAME(Vector3_obj::hx_Vector3_normalize,"hx_Vector3_normalize");
	HX_MARK_MEMBER_NAME(Vector3_obj::hx_Vector3_normalize_V3,"hx_Vector3_normalize_V3");
	HX_MARK_MEMBER_NAME(Vector3_obj::hx_Vector3_static_one,"hx_Vector3_static_one");
	HX_MARK_MEMBER_NAME(Vector3_obj::hx_Vector3_scale,"hx_Vector3_scale");
	HX_MARK_MEMBER_NAME(Vector3_obj::hx_Vector3_set_V3X2,"hx_Vector3_set_V3X2");
	HX_MARK_MEMBER_NAME(Vector3_obj::hx_Vector3_set_V3,"hx_Vector3_set_V3");
	HX_MARK_MEMBER_NAME(Vector3_obj::hx_Vector3_set_ArrFlt,"hx_Vector3_set_ArrFlt");
	HX_MARK_MEMBER_NAME(Vector3_obj::hx_Vector3_set_FltX3,"hx_Vector3_set_FltX3");
	HX_MARK_MEMBER_NAME(Vector3_obj::hx_Vector3_smooth,"hx_Vector3_smooth");
	HX_MARK_MEMBER_NAME(Vector3_obj::hx_Vector3_static_subtract,"hx_Vector3_static_subtract");
	HX_MARK_MEMBER_NAME(Vector3_obj::hx_Vector3_subtract,"hx_Vector3_subtract");
	HX_MARK_MEMBER_NAME(Vector3_obj::hx_Vector3_static_unitX,"hx_Vector3_static_unitX");
	HX_MARK_MEMBER_NAME(Vector3_obj::hx_Vector3_static_unitY,"hx_Vector3_static_unitY");
	HX_MARK_MEMBER_NAME(Vector3_obj::hx_Vector3_static_unitZ,"hx_Vector3_static_unitZ");
	HX_MARK_MEMBER_NAME(Vector3_obj::hx_Vector3_static_zero,"hx_Vector3_static_zero");
	HX_MARK_MEMBER_NAME(Vector3_obj::hx_Vector3_property_x_get,"hx_Vector3_property_x_get");
	HX_MARK_MEMBER_NAME(Vector3_obj::hx_Vector3_property_x_set,"hx_Vector3_property_x_set");
	HX_MARK_MEMBER_NAME(Vector3_obj::hx_Vector3_property_y_get,"hx_Vector3_property_y_get");
	HX_MARK_MEMBER_NAME(Vector3_obj::hx_Vector3_property_y_set,"hx_Vector3_property_y_set");
	HX_MARK_MEMBER_NAME(Vector3_obj::hx_Vector3_property_z_get,"hx_Vector3_property_z_get");
	HX_MARK_MEMBER_NAME(Vector3_obj::hx_Vector3_property_z_set,"hx_Vector3_property_z_set");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vector3_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Vector3_obj::_one,"_one");
	HX_VISIT_MEMBER_NAME(Vector3_obj::_unitX,"_unitX");
	HX_VISIT_MEMBER_NAME(Vector3_obj::_unitY,"_unitY");
	HX_VISIT_MEMBER_NAME(Vector3_obj::_unitZ,"_unitZ");
	HX_VISIT_MEMBER_NAME(Vector3_obj::_zero,"_zero");
	HX_VISIT_MEMBER_NAME(Vector3_obj::hx_Vector3_Construct,"hx_Vector3_Construct");
	HX_VISIT_MEMBER_NAME(Vector3_obj::hx_Vector3_Construct_V3,"hx_Vector3_Construct_V3");
	HX_VISIT_MEMBER_NAME(Vector3_obj::hx_Vector3_Construct_V3X2,"hx_Vector3_Construct_V3X2");
	HX_VISIT_MEMBER_NAME(Vector3_obj::hx_Vector3_Construct_ArrFlt,"hx_Vector3_Construct_ArrFlt");
	HX_VISIT_MEMBER_NAME(Vector3_obj::hx_Vector3_Construct_FltX3,"hx_Vector3_Construct_FltX3");
	HX_VISIT_MEMBER_NAME(Vector3_obj::hx_Vector3_static_add,"hx_Vector3_static_add");
	HX_VISIT_MEMBER_NAME(Vector3_obj::hx_Vector3_add,"hx_Vector3_add");
	HX_VISIT_MEMBER_NAME(Vector3_obj::hx_Vector3_static_angle,"hx_Vector3_static_angle");
	HX_VISIT_MEMBER_NAME(Vector3_obj::hx_Vector3_static_clamp,"hx_Vector3_static_clamp");
	HX_VISIT_MEMBER_NAME(Vector3_obj::hx_Vector3_clamp,"hx_Vector3_clamp");
	HX_VISIT_MEMBER_NAME(Vector3_obj::hx_Vector3_static_cross,"hx_Vector3_static_cross");
	HX_VISIT_MEMBER_NAME(Vector3_obj::hx_Vector3_cross,"hx_Vector3_cross");
	HX_VISIT_MEMBER_NAME(Vector3_obj::hx_Vector3_distance,"hx_Vector3_distance");
	HX_VISIT_MEMBER_NAME(Vector3_obj::hx_Vector3_distanceSquared,"hx_Vector3_distanceSquared");
	HX_VISIT_MEMBER_NAME(Vector3_obj::hx_Vector3_dot,"hx_Vector3_dot");
	HX_VISIT_MEMBER_NAME(Vector3_obj::hx_Vector3_static_dot,"hx_Vector3_static_dot");
	HX_VISIT_MEMBER_NAME(Vector3_obj::hx_Vector3_static_fromColor,"hx_Vector3_static_fromColor");
	HX_VISIT_MEMBER_NAME(Vector3_obj::hx_Vector3_isOne,"hx_Vector3_isOne");
	HX_VISIT_MEMBER_NAME(Vector3_obj::hx_Vector3_isZero,"hx_Vector3_isZero");
	HX_VISIT_MEMBER_NAME(Vector3_obj::hx_Vector3_length,"hx_Vector3_length");
	HX_VISIT_MEMBER_NAME(Vector3_obj::hx_Vector3_lengthSquared,"hx_Vector3_lengthSquared");
	HX_VISIT_MEMBER_NAME(Vector3_obj::hx_Vector3_negate,"hx_Vector3_negate");
	HX_VISIT_MEMBER_NAME(Vector3_obj::hx_Vector3_normalize,"hx_Vector3_normalize");
	HX_VISIT_MEMBER_NAME(Vector3_obj::hx_Vector3_normalize_V3,"hx_Vector3_normalize_V3");
	HX_VISIT_MEMBER_NAME(Vector3_obj::hx_Vector3_static_one,"hx_Vector3_static_one");
	HX_VISIT_MEMBER_NAME(Vector3_obj::hx_Vector3_scale,"hx_Vector3_scale");
	HX_VISIT_MEMBER_NAME(Vector3_obj::hx_Vector3_set_V3X2,"hx_Vector3_set_V3X2");
	HX_VISIT_MEMBER_NAME(Vector3_obj::hx_Vector3_set_V3,"hx_Vector3_set_V3");
	HX_VISIT_MEMBER_NAME(Vector3_obj::hx_Vector3_set_ArrFlt,"hx_Vector3_set_ArrFlt");
	HX_VISIT_MEMBER_NAME(Vector3_obj::hx_Vector3_set_FltX3,"hx_Vector3_set_FltX3");
	HX_VISIT_MEMBER_NAME(Vector3_obj::hx_Vector3_smooth,"hx_Vector3_smooth");
	HX_VISIT_MEMBER_NAME(Vector3_obj::hx_Vector3_static_subtract,"hx_Vector3_static_subtract");
	HX_VISIT_MEMBER_NAME(Vector3_obj::hx_Vector3_subtract,"hx_Vector3_subtract");
	HX_VISIT_MEMBER_NAME(Vector3_obj::hx_Vector3_static_unitX,"hx_Vector3_static_unitX");
	HX_VISIT_MEMBER_NAME(Vector3_obj::hx_Vector3_static_unitY,"hx_Vector3_static_unitY");
	HX_VISIT_MEMBER_NAME(Vector3_obj::hx_Vector3_static_unitZ,"hx_Vector3_static_unitZ");
	HX_VISIT_MEMBER_NAME(Vector3_obj::hx_Vector3_static_zero,"hx_Vector3_static_zero");
	HX_VISIT_MEMBER_NAME(Vector3_obj::hx_Vector3_property_x_get,"hx_Vector3_property_x_get");
	HX_VISIT_MEMBER_NAME(Vector3_obj::hx_Vector3_property_x_set,"hx_Vector3_property_x_set");
	HX_VISIT_MEMBER_NAME(Vector3_obj::hx_Vector3_property_y_get,"hx_Vector3_property_y_get");
	HX_VISIT_MEMBER_NAME(Vector3_obj::hx_Vector3_property_y_set,"hx_Vector3_property_y_set");
	HX_VISIT_MEMBER_NAME(Vector3_obj::hx_Vector3_property_z_get,"hx_Vector3_property_z_get");
	HX_VISIT_MEMBER_NAME(Vector3_obj::hx_Vector3_property_z_set,"hx_Vector3_property_z_set");
};

#endif

Class Vector3_obj::__mClass;

void Vector3_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.Vector3"), hx::TCanCast< Vector3_obj> ,sStaticFields,sMemberFields,
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

void Vector3_obj::__boot()
{
	hx_Vector3_Construct= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector3 >(),HX_CSTRING("Construct"),(int)0);
	hx_Vector3_Construct_V3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector3 >(),HX_CSTRING("Construct_V3"),(int)1);
	hx_Vector3_Construct_V3X2= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector3 >(),HX_CSTRING("Construct_V3X2"),(int)2);
	hx_Vector3_Construct_ArrFlt= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector3 >(),HX_CSTRING("Construct_ArrFlt"),(int)1);
	hx_Vector3_Construct_FltX3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector3 >(),HX_CSTRING("Construct_FltX3"),(int)3);
	hx_Vector3_static_add= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector3 >(),HX_CSTRING("static_add"),(int)3);
	hx_Vector3_add= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector3 >(),HX_CSTRING("add"),(int)2);
	hx_Vector3_static_angle= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector3 >(),HX_CSTRING("static_angle"),(int)2);
	hx_Vector3_static_clamp= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector3 >(),HX_CSTRING("static_clamp"),(int)4);
	hx_Vector3_clamp= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector3 >(),HX_CSTRING("clamp"),(int)3);
	hx_Vector3_static_cross= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector3 >(),HX_CSTRING("static_cross"),(int)3);
	hx_Vector3_cross= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector3 >(),HX_CSTRING("cross"),(int)2);
	hx_Vector3_distance= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector3 >(),HX_CSTRING("distance"),(int)2);
	hx_Vector3_distanceSquared= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector3 >(),HX_CSTRING("distanceSquared"),(int)2);
	hx_Vector3_dot= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector3 >(),HX_CSTRING("dot"),(int)2);
	hx_Vector3_static_dot= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector3 >(),HX_CSTRING("static_dot"),(int)2);
	hx_Vector3_static_fromColor= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector3 >(),HX_CSTRING("static_fromColor"),(int)1);
	hx_Vector3_isOne= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector3 >(),HX_CSTRING("isOne"),(int)1);
	hx_Vector3_isZero= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector3 >(),HX_CSTRING("isZero"),(int)1);
	hx_Vector3_length= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector3 >(),HX_CSTRING("length"),(int)1);
	hx_Vector3_lengthSquared= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector3 >(),HX_CSTRING("lengthSquared"),(int)1);
	hx_Vector3_negate= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector3 >(),HX_CSTRING("negate"),(int)1);
	hx_Vector3_normalize= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector3 >(),HX_CSTRING("normalize"),(int)1);
	hx_Vector3_normalize_V3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector3 >(),HX_CSTRING("normalize_V3"),(int)2);
	hx_Vector3_static_one= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector3 >(),HX_CSTRING("static_one"),(int)0);
	hx_Vector3_scale= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector3 >(),HX_CSTRING("scale"),(int)2);
	hx_Vector3_set_V3X2= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector3 >(),HX_CSTRING("set_V3X2"),(int)3);
	hx_Vector3_set_V3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector3 >(),HX_CSTRING("set_V3"),(int)2);
	hx_Vector3_set_ArrFlt= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector3 >(),HX_CSTRING("set_ArrFlt"),(int)2);
	hx_Vector3_set_FltX3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector3 >(),HX_CSTRING("set_FltX3"),(int)4);
	hx_Vector3_smooth= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector3 >(),HX_CSTRING("smooth"),(int)4);
	hx_Vector3_static_subtract= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector3 >(),HX_CSTRING("static_subtract"),(int)3);
	hx_Vector3_subtract= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector3 >(),HX_CSTRING("subtract"),(int)2);
	hx_Vector3_static_unitX= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector3 >(),HX_CSTRING("static_unitX"),(int)0);
	hx_Vector3_static_unitY= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector3 >(),HX_CSTRING("static_unitY"),(int)0);
	hx_Vector3_static_unitZ= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector3 >(),HX_CSTRING("static_unitZ"),(int)0);
	hx_Vector3_static_zero= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector3 >(),HX_CSTRING("static_zero"),(int)0);
	hx_Vector3_property_x_get= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector3 >(),HX_CSTRING("property_x_get"),(int)1);
	hx_Vector3_property_x_set= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector3 >(),HX_CSTRING("property_x_set"),(int)2);
	hx_Vector3_property_y_get= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector3 >(),HX_CSTRING("property_y_get"),(int)1);
	hx_Vector3_property_y_set= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector3 >(),HX_CSTRING("property_y_set"),(int)2);
	hx_Vector3_property_z_get= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector3 >(),HX_CSTRING("property_z_get"),(int)1);
	hx_Vector3_property_z_set= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Vector3 >(),HX_CSTRING("property_z_set"),(int)2);
}

} // end namespace org
} // end namespace gameplay3d
