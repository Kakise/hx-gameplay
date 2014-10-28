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
#ifndef INCLUDED_org_gameplay3d_Rectangle
#include <org/gameplay3d/Rectangle.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IRectangle
#include <org/gameplay3d/immutable/IRectangle.h>
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

Void Rectangle_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.Rectangle","new",0x245662d4,"org.gameplay3d.Rectangle.new","org/gameplay3d/Rectangle.hx",11,0xbfa430bc)
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

//Rectangle_obj::~Rectangle_obj() { }

Dynamic Rectangle_obj::__CreateEmpty() { return  new Rectangle_obj; }
hx::ObjectPtr< Rectangle_obj > Rectangle_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< Rectangle_obj > result = new Rectangle_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic Rectangle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Rectangle_obj > result = new Rectangle_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *Rectangle_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::intern::INativeBinding_obj)) return operator ::org::gameplay3d::intern::INativeBinding_obj *();
	if (inType==typeid( ::org::gameplay3d::immutable::IRectangle_obj)) return operator ::org::gameplay3d::immutable::IRectangle_obj *();
	return super::__ToInterface(inType);
}

Float Rectangle_obj::bottom( ){
	HX_STACK_FRAME("org.gameplay3d.Rectangle","bottom",0xfc8a54f7,"org.gameplay3d.Rectangle.bottom","org/gameplay3d/Rectangle.hx",55,0xbfa430bc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(55)
	return ::org::gameplay3d::Rectangle_obj::hx_Rectangle_bottom(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,bottom,return )

bool Rectangle_obj::contains_Rct( ::org::gameplay3d::immutable::IRectangle r){
	HX_STACK_FRAME("org.gameplay3d.Rectangle","contains_Rct",0x947fa92f,"org.gameplay3d.Rectangle.contains_Rct","org/gameplay3d/Rectangle.hx",67,0xbfa430bc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(r,"r")
	HX_STACK_LINE(67)
	return ::org::gameplay3d::Rectangle_obj::hx_Rectangle_contains_Rct(this->nativeObject,(  (((r == null()))) ? Dynamic(null()) : Dynamic(r->__Field(HX_CSTRING("nativeObject"),true)) ));
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,contains_Rct,return )

bool Rectangle_obj::contains_FltX2( Float x,Float y){
	HX_STACK_FRAME("org.gameplay3d.Rectangle","contains_FltX2",0x8fc3d554,"org.gameplay3d.Rectangle.contains_FltX2","org/gameplay3d/Rectangle.hx",73,0xbfa430bc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(73)
	return ::org::gameplay3d::Rectangle_obj::hx_Rectangle_contains_FltX2(this->nativeObject,x,y);
}


HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,contains_FltX2,return )

bool Rectangle_obj::contains_FltX4( Float x,Float y,Float width,Float height){
	HX_STACK_FRAME("org.gameplay3d.Rectangle","contains_FltX4",0x8fc3d556,"org.gameplay3d.Rectangle.contains_FltX4","org/gameplay3d/Rectangle.hx",79,0xbfa430bc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_LINE(79)
	return ::org::gameplay3d::Rectangle_obj::hx_Rectangle_contains_FltX4(this->nativeObject,x,y,width,height);
}


HX_DEFINE_DYNAMIC_FUNC4(Rectangle_obj,contains_FltX4,return )

Void Rectangle_obj::inflate( Float horizontalAmount,Float verticalAmount){
{
		HX_STACK_FRAME("org.gameplay3d.Rectangle","inflate",0xa44a78fb,"org.gameplay3d.Rectangle.inflate","org/gameplay3d/Rectangle.hx",91,0xbfa430bc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(horizontalAmount,"horizontalAmount")
		HX_STACK_ARG(verticalAmount,"verticalAmount")
		HX_STACK_LINE(91)
		::org::gameplay3d::Rectangle_obj::hx_Rectangle_inflate(this->nativeObject,horizontalAmount,verticalAmount);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,inflate,(void))

bool Rectangle_obj::intersects_Rct( ::org::gameplay3d::immutable::IRectangle r){
	HX_STACK_FRAME("org.gameplay3d.Rectangle","intersects_Rct",0x839f5b44,"org.gameplay3d.Rectangle.intersects_Rct","org/gameplay3d/Rectangle.hx",97,0xbfa430bc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(r,"r")
	HX_STACK_LINE(97)
	return ::org::gameplay3d::Rectangle_obj::hx_Rectangle_intersects_Rct(this->nativeObject,(  (((r == null()))) ? Dynamic(null()) : Dynamic(r->__Field(HX_CSTRING("nativeObject"),true)) ));
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,intersects_Rct,return )

bool Rectangle_obj::intersects_FltX4( Float x,Float y,Float width,Float height){
	HX_STACK_FRAME("org.gameplay3d.Rectangle","intersects_FltX4",0x4bc3f6ab,"org.gameplay3d.Rectangle.intersects_FltX4","org/gameplay3d/Rectangle.hx",103,0xbfa430bc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_LINE(103)
	return ::org::gameplay3d::Rectangle_obj::hx_Rectangle_intersects_FltX4(this->nativeObject,x,y,width,height);
}


HX_DEFINE_DYNAMIC_FUNC4(Rectangle_obj,intersects_FltX4,return )

bool Rectangle_obj::isEmpty( ){
	HX_STACK_FRAME("org.gameplay3d.Rectangle","isEmpty",0xa48ebab7,"org.gameplay3d.Rectangle.isEmpty","org/gameplay3d/Rectangle.hx",109,0xbfa430bc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(109)
	return ::org::gameplay3d::Rectangle_obj::hx_Rectangle_isEmpty(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,isEmpty,return )

Float Rectangle_obj::left( ){
	HX_STACK_FRAME("org.gameplay3d.Rectangle","left",0xa5ed9b13,"org.gameplay3d.Rectangle.left","org/gameplay3d/Rectangle.hx",115,0xbfa430bc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(115)
	return ::org::gameplay3d::Rectangle_obj::hx_Rectangle_left(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,left,return )

Float Rectangle_obj::right( ){
	HX_STACK_FRAME("org.gameplay3d.Rectangle","right",0x01072350,"org.gameplay3d.Rectangle.right","org/gameplay3d/Rectangle.hx",121,0xbfa430bc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(121)
	return ::org::gameplay3d::Rectangle_obj::hx_Rectangle_right(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,right,return )

Void Rectangle_obj::set_Rct( ::org::gameplay3d::immutable::IRectangle r){
{
		HX_STACK_FRAME("org.gameplay3d.Rectangle","set_Rct",0xb1e3c59a,"org.gameplay3d.Rectangle.set_Rct","org/gameplay3d/Rectangle.hx",127,0xbfa430bc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(r,"r")
		HX_STACK_LINE(127)
		::org::gameplay3d::Rectangle_obj::hx_Rectangle_set_Rct(this->nativeObject,(  (((r == null()))) ? Dynamic(null()) : Dynamic(r->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_Rct,(void))

Void Rectangle_obj::set_FltX4( Float x,Float y,Float width,Float height){
{
		HX_STACK_FRAME("org.gameplay3d.Rectangle","set_FltX4",0xe3b82281,"org.gameplay3d.Rectangle.set_FltX4","org/gameplay3d/Rectangle.hx",133,0xbfa430bc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(133)
		::org::gameplay3d::Rectangle_obj::hx_Rectangle_set_FltX4(this->nativeObject,x,y,width,height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Rectangle_obj,set_FltX4,(void))

Void Rectangle_obj::setPosition( Float x,Float y){
{
		HX_STACK_FRAME("org.gameplay3d.Rectangle","setPosition",0x34a390df,"org.gameplay3d.Rectangle.setPosition","org/gameplay3d/Rectangle.hx",139,0xbfa430bc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(139)
		::org::gameplay3d::Rectangle_obj::hx_Rectangle_setPosition(this->nativeObject,x,y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,setPosition,(void))

Float Rectangle_obj::top( ){
	HX_STACK_FRAME("org.gameplay3d.Rectangle","top",0x245af909,"org.gameplay3d.Rectangle.top","org/gameplay3d/Rectangle.hx",145,0xbfa430bc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(145)
	return ::org::gameplay3d::Rectangle_obj::hx_Rectangle_top(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,top,return )

Float Rectangle_obj::get_x( ){
	HX_STACK_FRAME("org.gameplay3d.Rectangle","get_x",0xa903bcc3,"org.gameplay3d.Rectangle.get_x","org/gameplay3d/Rectangle.hx",182,0xbfa430bc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(182)
	return ::org::gameplay3d::Rectangle_obj::hx_Rectangle_property_x_get(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_x,return )

Float Rectangle_obj::set_x( Float value){
	HX_STACK_FRAME("org.gameplay3d.Rectangle","set_x",0x91d2b2cf,"org.gameplay3d.Rectangle.set_x","org/gameplay3d/Rectangle.hx",187,0xbfa430bc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(187)
	return ::org::gameplay3d::Rectangle_obj::hx_Rectangle_property_x_set(this->nativeObject,value);
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_x,return )

Float Rectangle_obj::get_y( ){
	HX_STACK_FRAME("org.gameplay3d.Rectangle","get_y",0xa903bcc4,"org.gameplay3d.Rectangle.get_y","org/gameplay3d/Rectangle.hx",192,0xbfa430bc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(192)
	return ::org::gameplay3d::Rectangle_obj::hx_Rectangle_property_y_get(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_y,return )

Float Rectangle_obj::set_y( Float value){
	HX_STACK_FRAME("org.gameplay3d.Rectangle","set_y",0x91d2b2d0,"org.gameplay3d.Rectangle.set_y","org/gameplay3d/Rectangle.hx",197,0xbfa430bc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(197)
	return ::org::gameplay3d::Rectangle_obj::hx_Rectangle_property_y_set(this->nativeObject,value);
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_y,return )

Float Rectangle_obj::get_width( ){
	HX_STACK_FRAME("org.gameplay3d.Rectangle","get_width",0x3501f3d1,"org.gameplay3d.Rectangle.get_width","org/gameplay3d/Rectangle.hx",202,0xbfa430bc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(202)
	return ::org::gameplay3d::Rectangle_obj::hx_Rectangle_property_width_get(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_width,return )

Float Rectangle_obj::set_width( Float value){
	HX_STACK_FRAME("org.gameplay3d.Rectangle","set_width",0x1852dfdd,"org.gameplay3d.Rectangle.set_width","org/gameplay3d/Rectangle.hx",207,0xbfa430bc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(207)
	return ::org::gameplay3d::Rectangle_obj::hx_Rectangle_property_width_set(this->nativeObject,value);
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_width,return )

Float Rectangle_obj::get_height( ){
	HX_STACK_FRAME("org.gameplay3d.Rectangle","get_height",0xe302dbbc,"org.gameplay3d.Rectangle.get_height","org/gameplay3d/Rectangle.hx",212,0xbfa430bc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(212)
	return ::org::gameplay3d::Rectangle_obj::hx_Rectangle_property_height_get(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_height,return )

Float Rectangle_obj::set_height( Float value){
	HX_STACK_FRAME("org.gameplay3d.Rectangle","set_height",0xe6807a30,"org.gameplay3d.Rectangle.set_height","org/gameplay3d/Rectangle.hx",217,0xbfa430bc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(217)
	return ::org::gameplay3d::Rectangle_obj::hx_Rectangle_property_height_set(this->nativeObject,value);
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_height,return )

::org::gameplay3d::Rectangle Rectangle_obj::_empty;

::org::gameplay3d::Rectangle Rectangle_obj::make( ){
	HX_STACK_FRAME("org.gameplay3d.Rectangle","make",0xa693ccfa,"org.gameplay3d.Rectangle.make","org/gameplay3d/Rectangle.hx",30,0xbfa430bc)
	HX_STACK_LINE(31)
	Dynamic _g = ::org::gameplay3d::Rectangle_obj::constructNativeObject();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(31)
	return ::org::gameplay3d::Rectangle_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,make,return )

::org::gameplay3d::Rectangle Rectangle_obj::make_Rct( ::org::gameplay3d::immutable::IRectangle copy){
	HX_STACK_FRAME("org.gameplay3d.Rectangle","make_Rct",0xdba0a67e,"org.gameplay3d.Rectangle.make_Rct","org/gameplay3d/Rectangle.hx",36,0xbfa430bc)
	HX_STACK_ARG(copy,"copy")
	HX_STACK_LINE(37)
	Dynamic _g = ::org::gameplay3d::Rectangle_obj::constructNativeObject_Rct(copy);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(37)
	return ::org::gameplay3d::Rectangle_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,make_Rct,return )

::org::gameplay3d::Rectangle Rectangle_obj::make_FltX2( Float width,Float height){
	HX_STACK_FRAME("org.gameplay3d.Rectangle","make_FltX2",0x9f1a0463,"org.gameplay3d.Rectangle.make_FltX2","org/gameplay3d/Rectangle.hx",42,0xbfa430bc)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_LINE(43)
	Dynamic _g = ::org::gameplay3d::Rectangle_obj::constructNativeObject_FltX2(width,height);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(43)
	return ::org::gameplay3d::Rectangle_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,make_FltX2,return )

::org::gameplay3d::Rectangle Rectangle_obj::make_FltX4( Float x,Float y,Float width,Float height){
	HX_STACK_FRAME("org.gameplay3d.Rectangle","make_FltX4",0x9f1a0465,"org.gameplay3d.Rectangle.make_FltX4","org/gameplay3d/Rectangle.hx",48,0xbfa430bc)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_LINE(49)
	Dynamic _g = ::org::gameplay3d::Rectangle_obj::constructNativeObject_FltX4(x,y,width,height);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(49)
	return ::org::gameplay3d::Rectangle_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Rectangle_obj,make_FltX4,return )

Void Rectangle_obj::combine( ::org::gameplay3d::immutable::IRectangle r1,::org::gameplay3d::immutable::IRectangle r2,::org::gameplay3d::Rectangle dst){
{
		HX_STACK_FRAME("org.gameplay3d.Rectangle","combine",0x125d06f3,"org.gameplay3d.Rectangle.combine","org/gameplay3d/Rectangle.hx",61,0xbfa430bc)
		HX_STACK_ARG(r1,"r1")
		HX_STACK_ARG(r2,"r2")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(61)
		::org::gameplay3d::Rectangle_obj::hx_Rectangle_static_combine((  (((r1 == null()))) ? Dynamic(null()) : Dynamic(r1->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((r2 == null()))) ? Dynamic(null()) : Dynamic(r2->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Rectangle_obj,combine,(void))

::org::gameplay3d::immutable::IRectangle Rectangle_obj::empty( ){
	HX_STACK_FRAME("org.gameplay3d.Rectangle","empty",0x877d5201,"org.gameplay3d.Rectangle.empty","org/gameplay3d/Rectangle.hx",85,0xbfa430bc)
	HX_STACK_LINE(28)
	if (((::org::gameplay3d::Rectangle_obj::_empty == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Rectangle _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Rectangle >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(85)
			Dynamic nativeObject = ::org::gameplay3d::Rectangle_obj::hx_Rectangle_static_empty();		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::Rectangle result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Rectangle _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return ::org::gameplay3d::Rectangle_obj::_empty = _g1;
	}
	else{
		HX_STACK_LINE(85)
		Dynamic _g2 = ::org::gameplay3d::Rectangle_obj::hx_Rectangle_static_empty();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Rectangle _g3 = ::org::gameplay3d::Rectangle_obj::_empty->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return ::org::gameplay3d::Rectangle_obj::_empty = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,empty,return )

Dynamic Rectangle_obj::constructNativeObject( ){
	HX_STACK_FRAME("org.gameplay3d.Rectangle","constructNativeObject",0xad01b1e1,"org.gameplay3d.Rectangle.constructNativeObject","org/gameplay3d/Rectangle.hx",155,0xbfa430bc)
	HX_STACK_LINE(155)
	return ::org::gameplay3d::Rectangle_obj::hx_Rectangle_Construct();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,constructNativeObject,return )

Dynamic Rectangle_obj::constructNativeObject_Rct( ::org::gameplay3d::immutable::IRectangle copy){
	HX_STACK_FRAME("org.gameplay3d.Rectangle","constructNativeObject_Rct",0x7a608ae5,"org.gameplay3d.Rectangle.constructNativeObject_Rct","org/gameplay3d/Rectangle.hx",161,0xbfa430bc)
	HX_STACK_ARG(copy,"copy")
	HX_STACK_LINE(161)
	return ::org::gameplay3d::Rectangle_obj::hx_Rectangle_Construct_Rct((  (((copy == null()))) ? Dynamic(null()) : Dynamic(copy->__Field(HX_CSTRING("nativeObject"),true)) ));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,constructNativeObject_Rct,return )

Dynamic Rectangle_obj::constructNativeObject_FltX2( Float width,Float height){
	HX_STACK_FRAME("org.gameplay3d.Rectangle","constructNativeObject_FltX2",0x58e9108a,"org.gameplay3d.Rectangle.constructNativeObject_FltX2","org/gameplay3d/Rectangle.hx",167,0xbfa430bc)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_LINE(167)
	return ::org::gameplay3d::Rectangle_obj::hx_Rectangle_Construct_FltX2(width,height);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,constructNativeObject_FltX2,return )

Dynamic Rectangle_obj::constructNativeObject_FltX4( Float x,Float y,Float width,Float height){
	HX_STACK_FRAME("org.gameplay3d.Rectangle","constructNativeObject_FltX4",0x58e9108c,"org.gameplay3d.Rectangle.constructNativeObject_FltX4","org/gameplay3d/Rectangle.hx",173,0xbfa430bc)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_LINE(173)
	return ::org::gameplay3d::Rectangle_obj::hx_Rectangle_Construct_FltX4(x,y,width,height);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Rectangle_obj,constructNativeObject_FltX4,return )

Dynamic Rectangle_obj::hx_Rectangle_Construct;

Dynamic Rectangle_obj::hx_Rectangle_Construct_Rct;

Dynamic Rectangle_obj::hx_Rectangle_Construct_FltX2;

Dynamic Rectangle_obj::hx_Rectangle_Construct_FltX4;

Dynamic Rectangle_obj::hx_Rectangle_bottom;

Dynamic Rectangle_obj::hx_Rectangle_static_combine;

Dynamic Rectangle_obj::hx_Rectangle_contains_Rct;

Dynamic Rectangle_obj::hx_Rectangle_contains_FltX2;

Dynamic Rectangle_obj::hx_Rectangle_contains_FltX4;

Dynamic Rectangle_obj::hx_Rectangle_static_empty;

Dynamic Rectangle_obj::hx_Rectangle_inflate;

Dynamic Rectangle_obj::hx_Rectangle_intersects_Rct;

Dynamic Rectangle_obj::hx_Rectangle_intersects_FltX4;

Dynamic Rectangle_obj::hx_Rectangle_isEmpty;

Dynamic Rectangle_obj::hx_Rectangle_left;

Dynamic Rectangle_obj::hx_Rectangle_right;

Dynamic Rectangle_obj::hx_Rectangle_set_Rct;

Dynamic Rectangle_obj::hx_Rectangle_set_FltX4;

Dynamic Rectangle_obj::hx_Rectangle_setPosition;

Dynamic Rectangle_obj::hx_Rectangle_top;

Dynamic Rectangle_obj::hx_Rectangle_property_x_get;

Dynamic Rectangle_obj::hx_Rectangle_property_x_set;

Dynamic Rectangle_obj::hx_Rectangle_property_y_get;

Dynamic Rectangle_obj::hx_Rectangle_property_y_set;

Dynamic Rectangle_obj::hx_Rectangle_property_width_get;

Dynamic Rectangle_obj::hx_Rectangle_property_width_set;

Dynamic Rectangle_obj::hx_Rectangle_property_height_get;

Dynamic Rectangle_obj::hx_Rectangle_property_height_set;


Rectangle_obj::Rectangle_obj()
{
}

Dynamic Rectangle_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return get_x(); }
		if (HX_FIELD_EQ(inName,"y") ) { return get_y(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { return top_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { return make_dyn(); }
		if (HX_FIELD_EQ(inName,"left") ) { return left_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"width") ) { return get_width(); }
		if (HX_FIELD_EQ(inName,"right") ) { return right_dyn(); }
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_empty") ) { return _empty; }
		if (HX_FIELD_EQ(inName,"height") ) { return get_height(); }
		if (HX_FIELD_EQ(inName,"bottom") ) { return bottom_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"combine") ) { return combine_dyn(); }
		if (HX_FIELD_EQ(inName,"inflate") ) { return inflate_dyn(); }
		if (HX_FIELD_EQ(inName,"isEmpty") ) { return isEmpty_dyn(); }
		if (HX_FIELD_EQ(inName,"set_Rct") ) { return set_Rct_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"make_Rct") ) { return make_Rct_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_FltX4") ) { return set_FltX4_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"make_FltX2") ) { return make_FltX2_dyn(); }
		if (HX_FIELD_EQ(inName,"make_FltX4") ) { return make_FltX4_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setPosition") ) { return setPosition_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"contains_Rct") ) { return contains_Rct_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"contains_FltX2") ) { return contains_FltX2_dyn(); }
		if (HX_FIELD_EQ(inName,"contains_FltX4") ) { return contains_FltX4_dyn(); }
		if (HX_FIELD_EQ(inName,"intersects_Rct") ) { return intersects_Rct_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hx_Rectangle_top") ) { return hx_Rectangle_top; }
		if (HX_FIELD_EQ(inName,"intersects_FltX4") ) { return intersects_FltX4_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"hx_Rectangle_left") ) { return hx_Rectangle_left; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hx_Rectangle_right") ) { return hx_Rectangle_right; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hx_Rectangle_bottom") ) { return hx_Rectangle_bottom; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Rectangle_inflate") ) { return hx_Rectangle_inflate; }
		if (HX_FIELD_EQ(inName,"hx_Rectangle_isEmpty") ) { return hx_Rectangle_isEmpty; }
		if (HX_FIELD_EQ(inName,"hx_Rectangle_set_Rct") ) { return hx_Rectangle_set_Rct; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"constructNativeObject") ) { return constructNativeObject_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Rectangle_Construct") ) { return hx_Rectangle_Construct; }
		if (HX_FIELD_EQ(inName,"hx_Rectangle_set_FltX4") ) { return hx_Rectangle_set_FltX4; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_Rectangle_setPosition") ) { return hx_Rectangle_setPosition; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"constructNativeObject_Rct") ) { return constructNativeObject_Rct_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Rectangle_contains_Rct") ) { return hx_Rectangle_contains_Rct; }
		if (HX_FIELD_EQ(inName,"hx_Rectangle_static_empty") ) { return hx_Rectangle_static_empty; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_Rectangle_Construct_Rct") ) { return hx_Rectangle_Construct_Rct; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"constructNativeObject_FltX2") ) { return constructNativeObject_FltX2_dyn(); }
		if (HX_FIELD_EQ(inName,"constructNativeObject_FltX4") ) { return constructNativeObject_FltX4_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Rectangle_static_combine") ) { return hx_Rectangle_static_combine; }
		if (HX_FIELD_EQ(inName,"hx_Rectangle_contains_FltX2") ) { return hx_Rectangle_contains_FltX2; }
		if (HX_FIELD_EQ(inName,"hx_Rectangle_contains_FltX4") ) { return hx_Rectangle_contains_FltX4; }
		if (HX_FIELD_EQ(inName,"hx_Rectangle_intersects_Rct") ) { return hx_Rectangle_intersects_Rct; }
		if (HX_FIELD_EQ(inName,"hx_Rectangle_property_x_get") ) { return hx_Rectangle_property_x_get; }
		if (HX_FIELD_EQ(inName,"hx_Rectangle_property_x_set") ) { return hx_Rectangle_property_x_set; }
		if (HX_FIELD_EQ(inName,"hx_Rectangle_property_y_get") ) { return hx_Rectangle_property_y_get; }
		if (HX_FIELD_EQ(inName,"hx_Rectangle_property_y_set") ) { return hx_Rectangle_property_y_set; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_Rectangle_Construct_FltX2") ) { return hx_Rectangle_Construct_FltX2; }
		if (HX_FIELD_EQ(inName,"hx_Rectangle_Construct_FltX4") ) { return hx_Rectangle_Construct_FltX4; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_Rectangle_intersects_FltX4") ) { return hx_Rectangle_intersects_FltX4; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"hx_Rectangle_property_width_get") ) { return hx_Rectangle_property_width_get; }
		if (HX_FIELD_EQ(inName,"hx_Rectangle_property_width_set") ) { return hx_Rectangle_property_width_set; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"hx_Rectangle_property_height_get") ) { return hx_Rectangle_property_height_get; }
		if (HX_FIELD_EQ(inName,"hx_Rectangle_property_height_set") ) { return hx_Rectangle_property_height_set; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Rectangle_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return set_x(inValue); }
		if (HX_FIELD_EQ(inName,"y") ) { return set_y(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return set_width(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_empty") ) { _empty=inValue.Cast< ::org::gameplay3d::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { return set_height(inValue); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hx_Rectangle_top") ) { hx_Rectangle_top=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"hx_Rectangle_left") ) { hx_Rectangle_left=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hx_Rectangle_right") ) { hx_Rectangle_right=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hx_Rectangle_bottom") ) { hx_Rectangle_bottom=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Rectangle_inflate") ) { hx_Rectangle_inflate=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Rectangle_isEmpty") ) { hx_Rectangle_isEmpty=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Rectangle_set_Rct") ) { hx_Rectangle_set_Rct=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Rectangle_Construct") ) { hx_Rectangle_Construct=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Rectangle_set_FltX4") ) { hx_Rectangle_set_FltX4=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_Rectangle_setPosition") ) { hx_Rectangle_setPosition=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_Rectangle_contains_Rct") ) { hx_Rectangle_contains_Rct=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Rectangle_static_empty") ) { hx_Rectangle_static_empty=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_Rectangle_Construct_Rct") ) { hx_Rectangle_Construct_Rct=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"hx_Rectangle_static_combine") ) { hx_Rectangle_static_combine=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Rectangle_contains_FltX2") ) { hx_Rectangle_contains_FltX2=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Rectangle_contains_FltX4") ) { hx_Rectangle_contains_FltX4=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Rectangle_intersects_Rct") ) { hx_Rectangle_intersects_Rct=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Rectangle_property_x_get") ) { hx_Rectangle_property_x_get=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Rectangle_property_x_set") ) { hx_Rectangle_property_x_set=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Rectangle_property_y_get") ) { hx_Rectangle_property_y_get=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Rectangle_property_y_set") ) { hx_Rectangle_property_y_set=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_Rectangle_Construct_FltX2") ) { hx_Rectangle_Construct_FltX2=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Rectangle_Construct_FltX4") ) { hx_Rectangle_Construct_FltX4=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_Rectangle_intersects_FltX4") ) { hx_Rectangle_intersects_FltX4=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"hx_Rectangle_property_width_get") ) { hx_Rectangle_property_width_get=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Rectangle_property_width_set") ) { hx_Rectangle_property_width_set=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"hx_Rectangle_property_height_get") ) { hx_Rectangle_property_height_get=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Rectangle_property_height_set") ) { hx_Rectangle_property_height_set=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Rectangle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_empty"),
	HX_CSTRING("make"),
	HX_CSTRING("make_Rct"),
	HX_CSTRING("make_FltX2"),
	HX_CSTRING("make_FltX4"),
	HX_CSTRING("combine"),
	HX_CSTRING("empty"),
	HX_CSTRING("constructNativeObject"),
	HX_CSTRING("constructNativeObject_Rct"),
	HX_CSTRING("constructNativeObject_FltX2"),
	HX_CSTRING("constructNativeObject_FltX4"),
	HX_CSTRING("hx_Rectangle_Construct"),
	HX_CSTRING("hx_Rectangle_Construct_Rct"),
	HX_CSTRING("hx_Rectangle_Construct_FltX2"),
	HX_CSTRING("hx_Rectangle_Construct_FltX4"),
	HX_CSTRING("hx_Rectangle_bottom"),
	HX_CSTRING("hx_Rectangle_static_combine"),
	HX_CSTRING("hx_Rectangle_contains_Rct"),
	HX_CSTRING("hx_Rectangle_contains_FltX2"),
	HX_CSTRING("hx_Rectangle_contains_FltX4"),
	HX_CSTRING("hx_Rectangle_static_empty"),
	HX_CSTRING("hx_Rectangle_inflate"),
	HX_CSTRING("hx_Rectangle_intersects_Rct"),
	HX_CSTRING("hx_Rectangle_intersects_FltX4"),
	HX_CSTRING("hx_Rectangle_isEmpty"),
	HX_CSTRING("hx_Rectangle_left"),
	HX_CSTRING("hx_Rectangle_right"),
	HX_CSTRING("hx_Rectangle_set_Rct"),
	HX_CSTRING("hx_Rectangle_set_FltX4"),
	HX_CSTRING("hx_Rectangle_setPosition"),
	HX_CSTRING("hx_Rectangle_top"),
	HX_CSTRING("hx_Rectangle_property_x_get"),
	HX_CSTRING("hx_Rectangle_property_x_set"),
	HX_CSTRING("hx_Rectangle_property_y_get"),
	HX_CSTRING("hx_Rectangle_property_y_set"),
	HX_CSTRING("hx_Rectangle_property_width_get"),
	HX_CSTRING("hx_Rectangle_property_width_set"),
	HX_CSTRING("hx_Rectangle_property_height_get"),
	HX_CSTRING("hx_Rectangle_property_height_set"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("bottom"),
	HX_CSTRING("contains_Rct"),
	HX_CSTRING("contains_FltX2"),
	HX_CSTRING("contains_FltX4"),
	HX_CSTRING("inflate"),
	HX_CSTRING("intersects_Rct"),
	HX_CSTRING("intersects_FltX4"),
	HX_CSTRING("isEmpty"),
	HX_CSTRING("left"),
	HX_CSTRING("right"),
	HX_CSTRING("set_Rct"),
	HX_CSTRING("set_FltX4"),
	HX_CSTRING("setPosition"),
	HX_CSTRING("top"),
	HX_CSTRING("get_x"),
	HX_CSTRING("set_x"),
	HX_CSTRING("get_y"),
	HX_CSTRING("set_y"),
	HX_CSTRING("get_width"),
	HX_CSTRING("set_width"),
	HX_CSTRING("get_height"),
	HX_CSTRING("set_height"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Rectangle_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Rectangle_obj::_empty,"_empty");
	HX_MARK_MEMBER_NAME(Rectangle_obj::hx_Rectangle_Construct,"hx_Rectangle_Construct");
	HX_MARK_MEMBER_NAME(Rectangle_obj::hx_Rectangle_Construct_Rct,"hx_Rectangle_Construct_Rct");
	HX_MARK_MEMBER_NAME(Rectangle_obj::hx_Rectangle_Construct_FltX2,"hx_Rectangle_Construct_FltX2");
	HX_MARK_MEMBER_NAME(Rectangle_obj::hx_Rectangle_Construct_FltX4,"hx_Rectangle_Construct_FltX4");
	HX_MARK_MEMBER_NAME(Rectangle_obj::hx_Rectangle_bottom,"hx_Rectangle_bottom");
	HX_MARK_MEMBER_NAME(Rectangle_obj::hx_Rectangle_static_combine,"hx_Rectangle_static_combine");
	HX_MARK_MEMBER_NAME(Rectangle_obj::hx_Rectangle_contains_Rct,"hx_Rectangle_contains_Rct");
	HX_MARK_MEMBER_NAME(Rectangle_obj::hx_Rectangle_contains_FltX2,"hx_Rectangle_contains_FltX2");
	HX_MARK_MEMBER_NAME(Rectangle_obj::hx_Rectangle_contains_FltX4,"hx_Rectangle_contains_FltX4");
	HX_MARK_MEMBER_NAME(Rectangle_obj::hx_Rectangle_static_empty,"hx_Rectangle_static_empty");
	HX_MARK_MEMBER_NAME(Rectangle_obj::hx_Rectangle_inflate,"hx_Rectangle_inflate");
	HX_MARK_MEMBER_NAME(Rectangle_obj::hx_Rectangle_intersects_Rct,"hx_Rectangle_intersects_Rct");
	HX_MARK_MEMBER_NAME(Rectangle_obj::hx_Rectangle_intersects_FltX4,"hx_Rectangle_intersects_FltX4");
	HX_MARK_MEMBER_NAME(Rectangle_obj::hx_Rectangle_isEmpty,"hx_Rectangle_isEmpty");
	HX_MARK_MEMBER_NAME(Rectangle_obj::hx_Rectangle_left,"hx_Rectangle_left");
	HX_MARK_MEMBER_NAME(Rectangle_obj::hx_Rectangle_right,"hx_Rectangle_right");
	HX_MARK_MEMBER_NAME(Rectangle_obj::hx_Rectangle_set_Rct,"hx_Rectangle_set_Rct");
	HX_MARK_MEMBER_NAME(Rectangle_obj::hx_Rectangle_set_FltX4,"hx_Rectangle_set_FltX4");
	HX_MARK_MEMBER_NAME(Rectangle_obj::hx_Rectangle_setPosition,"hx_Rectangle_setPosition");
	HX_MARK_MEMBER_NAME(Rectangle_obj::hx_Rectangle_top,"hx_Rectangle_top");
	HX_MARK_MEMBER_NAME(Rectangle_obj::hx_Rectangle_property_x_get,"hx_Rectangle_property_x_get");
	HX_MARK_MEMBER_NAME(Rectangle_obj::hx_Rectangle_property_x_set,"hx_Rectangle_property_x_set");
	HX_MARK_MEMBER_NAME(Rectangle_obj::hx_Rectangle_property_y_get,"hx_Rectangle_property_y_get");
	HX_MARK_MEMBER_NAME(Rectangle_obj::hx_Rectangle_property_y_set,"hx_Rectangle_property_y_set");
	HX_MARK_MEMBER_NAME(Rectangle_obj::hx_Rectangle_property_width_get,"hx_Rectangle_property_width_get");
	HX_MARK_MEMBER_NAME(Rectangle_obj::hx_Rectangle_property_width_set,"hx_Rectangle_property_width_set");
	HX_MARK_MEMBER_NAME(Rectangle_obj::hx_Rectangle_property_height_get,"hx_Rectangle_property_height_get");
	HX_MARK_MEMBER_NAME(Rectangle_obj::hx_Rectangle_property_height_set,"hx_Rectangle_property_height_set");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Rectangle_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Rectangle_obj::_empty,"_empty");
	HX_VISIT_MEMBER_NAME(Rectangle_obj::hx_Rectangle_Construct,"hx_Rectangle_Construct");
	HX_VISIT_MEMBER_NAME(Rectangle_obj::hx_Rectangle_Construct_Rct,"hx_Rectangle_Construct_Rct");
	HX_VISIT_MEMBER_NAME(Rectangle_obj::hx_Rectangle_Construct_FltX2,"hx_Rectangle_Construct_FltX2");
	HX_VISIT_MEMBER_NAME(Rectangle_obj::hx_Rectangle_Construct_FltX4,"hx_Rectangle_Construct_FltX4");
	HX_VISIT_MEMBER_NAME(Rectangle_obj::hx_Rectangle_bottom,"hx_Rectangle_bottom");
	HX_VISIT_MEMBER_NAME(Rectangle_obj::hx_Rectangle_static_combine,"hx_Rectangle_static_combine");
	HX_VISIT_MEMBER_NAME(Rectangle_obj::hx_Rectangle_contains_Rct,"hx_Rectangle_contains_Rct");
	HX_VISIT_MEMBER_NAME(Rectangle_obj::hx_Rectangle_contains_FltX2,"hx_Rectangle_contains_FltX2");
	HX_VISIT_MEMBER_NAME(Rectangle_obj::hx_Rectangle_contains_FltX4,"hx_Rectangle_contains_FltX4");
	HX_VISIT_MEMBER_NAME(Rectangle_obj::hx_Rectangle_static_empty,"hx_Rectangle_static_empty");
	HX_VISIT_MEMBER_NAME(Rectangle_obj::hx_Rectangle_inflate,"hx_Rectangle_inflate");
	HX_VISIT_MEMBER_NAME(Rectangle_obj::hx_Rectangle_intersects_Rct,"hx_Rectangle_intersects_Rct");
	HX_VISIT_MEMBER_NAME(Rectangle_obj::hx_Rectangle_intersects_FltX4,"hx_Rectangle_intersects_FltX4");
	HX_VISIT_MEMBER_NAME(Rectangle_obj::hx_Rectangle_isEmpty,"hx_Rectangle_isEmpty");
	HX_VISIT_MEMBER_NAME(Rectangle_obj::hx_Rectangle_left,"hx_Rectangle_left");
	HX_VISIT_MEMBER_NAME(Rectangle_obj::hx_Rectangle_right,"hx_Rectangle_right");
	HX_VISIT_MEMBER_NAME(Rectangle_obj::hx_Rectangle_set_Rct,"hx_Rectangle_set_Rct");
	HX_VISIT_MEMBER_NAME(Rectangle_obj::hx_Rectangle_set_FltX4,"hx_Rectangle_set_FltX4");
	HX_VISIT_MEMBER_NAME(Rectangle_obj::hx_Rectangle_setPosition,"hx_Rectangle_setPosition");
	HX_VISIT_MEMBER_NAME(Rectangle_obj::hx_Rectangle_top,"hx_Rectangle_top");
	HX_VISIT_MEMBER_NAME(Rectangle_obj::hx_Rectangle_property_x_get,"hx_Rectangle_property_x_get");
	HX_VISIT_MEMBER_NAME(Rectangle_obj::hx_Rectangle_property_x_set,"hx_Rectangle_property_x_set");
	HX_VISIT_MEMBER_NAME(Rectangle_obj::hx_Rectangle_property_y_get,"hx_Rectangle_property_y_get");
	HX_VISIT_MEMBER_NAME(Rectangle_obj::hx_Rectangle_property_y_set,"hx_Rectangle_property_y_set");
	HX_VISIT_MEMBER_NAME(Rectangle_obj::hx_Rectangle_property_width_get,"hx_Rectangle_property_width_get");
	HX_VISIT_MEMBER_NAME(Rectangle_obj::hx_Rectangle_property_width_set,"hx_Rectangle_property_width_set");
	HX_VISIT_MEMBER_NAME(Rectangle_obj::hx_Rectangle_property_height_get,"hx_Rectangle_property_height_get");
	HX_VISIT_MEMBER_NAME(Rectangle_obj::hx_Rectangle_property_height_set,"hx_Rectangle_property_height_set");
};

#endif

Class Rectangle_obj::__mClass;

void Rectangle_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.Rectangle"), hx::TCanCast< Rectangle_obj> ,sStaticFields,sMemberFields,
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

void Rectangle_obj::__boot()
{
	hx_Rectangle_Construct= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Rectangle >(),HX_CSTRING("Construct"),(int)0);
	hx_Rectangle_Construct_Rct= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Rectangle >(),HX_CSTRING("Construct_Rct"),(int)1);
	hx_Rectangle_Construct_FltX2= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Rectangle >(),HX_CSTRING("Construct_FltX2"),(int)2);
	hx_Rectangle_Construct_FltX4= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Rectangle >(),HX_CSTRING("Construct_FltX4"),(int)4);
	hx_Rectangle_bottom= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Rectangle >(),HX_CSTRING("bottom"),(int)1);
	hx_Rectangle_static_combine= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Rectangle >(),HX_CSTRING("static_combine"),(int)3);
	hx_Rectangle_contains_Rct= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Rectangle >(),HX_CSTRING("contains_Rct"),(int)2);
	hx_Rectangle_contains_FltX2= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Rectangle >(),HX_CSTRING("contains_FltX2"),(int)3);
	hx_Rectangle_contains_FltX4= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Rectangle >(),HX_CSTRING("contains_FltX4"),(int)5);
	hx_Rectangle_static_empty= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Rectangle >(),HX_CSTRING("static_empty"),(int)0);
	hx_Rectangle_inflate= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Rectangle >(),HX_CSTRING("inflate"),(int)3);
	hx_Rectangle_intersects_Rct= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Rectangle >(),HX_CSTRING("intersects_Rct"),(int)2);
	hx_Rectangle_intersects_FltX4= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Rectangle >(),HX_CSTRING("intersects_FltX4"),(int)5);
	hx_Rectangle_isEmpty= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Rectangle >(),HX_CSTRING("isEmpty"),(int)1);
	hx_Rectangle_left= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Rectangle >(),HX_CSTRING("left"),(int)1);
	hx_Rectangle_right= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Rectangle >(),HX_CSTRING("right"),(int)1);
	hx_Rectangle_set_Rct= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Rectangle >(),HX_CSTRING("set_Rct"),(int)2);
	hx_Rectangle_set_FltX4= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Rectangle >(),HX_CSTRING("set_FltX4"),(int)5);
	hx_Rectangle_setPosition= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Rectangle >(),HX_CSTRING("setPosition"),(int)3);
	hx_Rectangle_top= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Rectangle >(),HX_CSTRING("top"),(int)1);
	hx_Rectangle_property_x_get= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Rectangle >(),HX_CSTRING("property_x_get"),(int)1);
	hx_Rectangle_property_x_set= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Rectangle >(),HX_CSTRING("property_x_set"),(int)2);
	hx_Rectangle_property_y_get= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Rectangle >(),HX_CSTRING("property_y_get"),(int)1);
	hx_Rectangle_property_y_set= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Rectangle >(),HX_CSTRING("property_y_set"),(int)2);
	hx_Rectangle_property_width_get= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Rectangle >(),HX_CSTRING("property_width_get"),(int)1);
	hx_Rectangle_property_width_set= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Rectangle >(),HX_CSTRING("property_width_set"),(int)2);
	hx_Rectangle_property_height_get= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Rectangle >(),HX_CSTRING("property_height_get"),(int)1);
	hx_Rectangle_property_height_set= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Rectangle >(),HX_CSTRING("property_height_set"),(int)2);
}

} // end namespace org
} // end namespace gameplay3d
