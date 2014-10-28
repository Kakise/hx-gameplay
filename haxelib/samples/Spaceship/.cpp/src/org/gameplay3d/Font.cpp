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
#ifndef INCLUDED_org_gameplay3d_Font
#include <org/gameplay3d/Font.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Font_Text
#include <org/gameplay3d/Font_Text.h>
#endif
#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Rectangle
#include <org/gameplay3d/Rectangle.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Ref
#include <org/gameplay3d/Ref.h>
#endif
#ifndef INCLUDED_org_gameplay3d_SpriteBatch
#include <org/gameplay3d/SpriteBatch.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Vector2
#include <org/gameplay3d/Vector2.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IRectangle
#include <org/gameplay3d/immutable/IRectangle.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IVector2
#include <org/gameplay3d/immutable/IVector2.h>
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

Void Font_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.Font","new",0xcc5814ee,"org.gameplay3d.Font.new","org/gameplay3d/Font.hx",13,0x7c01e8a2)
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

//Font_obj::~Font_obj() { }

Dynamic Font_obj::__CreateEmpty() { return  new Font_obj; }
hx::ObjectPtr< Font_obj > Font_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< Font_obj > result = new Font_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic Font_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Font_obj > result = new Font_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *Font_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::intern::INativeBinding_obj)) return operator ::org::gameplay3d::intern::INativeBinding_obj *();
	if (inType==typeid( ::org::gameplay3d::Ref_obj)) return operator ::org::gameplay3d::Ref_obj *();
	return super::__ToInterface(inType);
}

::org::gameplay3d::Font_Text Font_obj::createText( ::String text,::org::gameplay3d::immutable::IRectangle area,::org::gameplay3d::immutable::IVector4 color,hx::Null< int >  __o_size,hx::Null< int >  __o_justify,hx::Null< bool >  __o_wrap,hx::Null< bool >  __o_rightToLeft,::org::gameplay3d::Rectangle clip){
int size = __o_size.Default(0);
int justify = __o_justify.Default(17);
bool wrap = __o_wrap.Default(true);
bool rightToLeft = __o_rightToLeft.Default(false);
	HX_STACK_FRAME("org.gameplay3d.Font","createText",0xfc4f16fb,"org.gameplay3d.Font.createText","org/gameplay3d/Font.hx",28,0x7c01e8a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(text,"text")
	HX_STACK_ARG(area,"area")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(justify,"justify")
	HX_STACK_ARG(wrap,"wrap")
	HX_STACK_ARG(rightToLeft,"rightToLeft")
	HX_STACK_ARG(clip,"clip")
{
		HX_STACK_LINE(28)
		::Class classObj = hx::ClassOf< ::org::gameplay3d::Font_Text >();		HX_STACK_VAR(classObj,"classObj");
		HX_STACK_LINE(28)
		Dynamic nativeObject = ::org::gameplay3d::Font_obj::hx_Font_createText(this->nativeObject,text,(  (((area == null()))) ? Dynamic(null()) : Dynamic(area->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((color == null()))) ? Dynamic(null()) : Dynamic(color->__Field(HX_CSTRING("nativeObject"),true)) ),size,justify,wrap,rightToLeft,(  (((clip == null()))) ? Dynamic(null()) : Dynamic(clip->nativeObject) ));		HX_STACK_VAR(nativeObject,"nativeObject");
		HX_STACK_LINE(28)
		if (((nativeObject == null()))){
			HX_STACK_LINE(28)
			return null();
		}
		else{
			HX_STACK_LINE(28)
			if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
				HX_STACK_LINE(28)
				::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
				HX_STACK_LINE(28)
				::org::gameplay3d::Font_Text result = ref->get();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(28)
				if (((result == null()))){
					HX_STACK_LINE(28)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
					HX_STACK_LINE(28)
					::org::gameplay3d::Font_Text _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(28)
					result = _g;
					HX_STACK_LINE(28)
					ref->set(result);
				}
				HX_STACK_LINE(28)
				return result;
			}
			else{
				HX_STACK_LINE(28)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
				HX_STACK_LINE(28)
				return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
			}
		}
		HX_STACK_LINE(28)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC8(Font_obj,createText,return )

Void Font_obj::drawText_Txt( ::org::gameplay3d::Font_Text text){
{
		HX_STACK_FRAME("org.gameplay3d.Font","drawText_Txt",0x31c2d854,"org.gameplay3d.Font.drawText_Txt","org/gameplay3d/Font.hx",34,0x7c01e8a2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(text,"text")
		HX_STACK_LINE(34)
		::org::gameplay3d::Font_obj::hx_Font_drawText_Txt(this->nativeObject,(  (((text == null()))) ? Dynamic(null()) : Dynamic(text->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Font_obj,drawText_Txt,(void))

Void Font_obj::drawText_Str_Rct_V4_IntX2_BoolX2_Rct( ::String text,::org::gameplay3d::immutable::IRectangle area,::org::gameplay3d::immutable::IVector4 color,hx::Null< int >  __o_size,hx::Null< int >  __o_justify,hx::Null< bool >  __o_wrap,hx::Null< bool >  __o_rightToLeft,::org::gameplay3d::Rectangle clip){
int size = __o_size.Default(0);
int justify = __o_justify.Default(17);
bool wrap = __o_wrap.Default(true);
bool rightToLeft = __o_rightToLeft.Default(false);
	HX_STACK_FRAME("org.gameplay3d.Font","drawText_Str_Rct_V4_IntX2_BoolX2_Rct",0xde338b19,"org.gameplay3d.Font.drawText_Str_Rct_V4_IntX2_BoolX2_Rct","org/gameplay3d/Font.hx",40,0x7c01e8a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(text,"text")
	HX_STACK_ARG(area,"area")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(justify,"justify")
	HX_STACK_ARG(wrap,"wrap")
	HX_STACK_ARG(rightToLeft,"rightToLeft")
	HX_STACK_ARG(clip,"clip")
{
		HX_STACK_LINE(40)
		::org::gameplay3d::Font_obj::hx_Font_drawText_Str_Rct_V4_IntX2_BoolX2_Rct(this->nativeObject,text,(  (((area == null()))) ? Dynamic(null()) : Dynamic(area->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((color == null()))) ? Dynamic(null()) : Dynamic(color->__Field(HX_CSTRING("nativeObject"),true)) ),size,justify,wrap,rightToLeft,(  (((clip == null()))) ? Dynamic(null()) : Dynamic(clip->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(Font_obj,drawText_Str_Rct_V4_IntX2_BoolX2_Rct,(void))

Void Font_obj::drawText_Str_IntX2_V4_Int_Bool( ::String text,int x,int y,::org::gameplay3d::immutable::IVector4 color,hx::Null< int >  __o_size,hx::Null< bool >  __o_rightToLeft){
int size = __o_size.Default(0);
bool rightToLeft = __o_rightToLeft.Default(false);
	HX_STACK_FRAME("org.gameplay3d.Font","drawText_Str_IntX2_V4_Int_Bool",0xea4a5cfb,"org.gameplay3d.Font.drawText_Str_IntX2_V4_Int_Bool","org/gameplay3d/Font.hx",46,0x7c01e8a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(text,"text")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(rightToLeft,"rightToLeft")
{
		HX_STACK_LINE(46)
		::org::gameplay3d::Font_obj::hx_Font_drawText_Str_IntX2_V4_Int_Bool(this->nativeObject,text,x,y,(  (((color == null()))) ? Dynamic(null()) : Dynamic(color->__Field(HX_CSTRING("nativeObject"),true)) ),size,rightToLeft);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Font_obj,drawText_Str_IntX2_V4_Int_Bool,(void))

Void Font_obj::drawText_Str_IntX2_FltX4_Int_Bool( ::String text,int x,int y,Float red,Float green,Float blue,Float alpha,hx::Null< int >  __o_size,hx::Null< bool >  __o_rightToLeft){
int size = __o_size.Default(0);
bool rightToLeft = __o_rightToLeft.Default(false);
	HX_STACK_FRAME("org.gameplay3d.Font","drawText_Str_IntX2_FltX4_Int_Bool",0xa92136ef,"org.gameplay3d.Font.drawText_Str_IntX2_FltX4_Int_Bool","org/gameplay3d/Font.hx",52,0x7c01e8a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(text,"text")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(red,"red")
	HX_STACK_ARG(green,"green")
	HX_STACK_ARG(blue,"blue")
	HX_STACK_ARG(alpha,"alpha")
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(rightToLeft,"rightToLeft")
{
		HX_STACK_LINE(52)
		::org::gameplay3d::Font_obj::hx_Font_drawText_Str_IntX2_FltX4_Int_Bool(this->nativeObject,text,x,y,red,green,blue,alpha,size,rightToLeft);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC9(Font_obj,drawText_Str_IntX2_FltX4_Int_Bool,(void))

Void Font_obj::finish( ){
{
		HX_STACK_FRAME("org.gameplay3d.Font","finish",0x6559c885,"org.gameplay3d.Font.finish","org/gameplay3d/Font.hx",58,0x7c01e8a2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(58)
		::org::gameplay3d::Font_obj::hx_Font_finish(this->nativeObject);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Font_obj,finish,(void))

int Font_obj::getIndexAtLocation( ::String text,::org::gameplay3d::immutable::IRectangle clip,int size,::org::gameplay3d::immutable::IVector2 inLocation,::org::gameplay3d::Vector2 outLocation,hx::Null< int >  __o_justify,hx::Null< bool >  __o_wrap,hx::Null< bool >  __o_rightToLeft){
int justify = __o_justify.Default(17);
bool wrap = __o_wrap.Default(true);
bool rightToLeft = __o_rightToLeft.Default(false);
	HX_STACK_FRAME("org.gameplay3d.Font","getIndexAtLocation",0xd3d0bf36,"org.gameplay3d.Font.getIndexAtLocation","org/gameplay3d/Font.hx",64,0x7c01e8a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(text,"text")
	HX_STACK_ARG(clip,"clip")
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(inLocation,"inLocation")
	HX_STACK_ARG(outLocation,"outLocation")
	HX_STACK_ARG(justify,"justify")
	HX_STACK_ARG(wrap,"wrap")
	HX_STACK_ARG(rightToLeft,"rightToLeft")
{
		HX_STACK_LINE(64)
		return ::org::gameplay3d::Font_obj::hx_Font_getIndexAtLocation(this->nativeObject,text,(  (((clip == null()))) ? Dynamic(null()) : Dynamic(clip->__Field(HX_CSTRING("nativeObject"),true)) ),size,(  (((inLocation == null()))) ? Dynamic(null()) : Dynamic(inLocation->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((outLocation == null()))) ? Dynamic(null()) : Dynamic(outLocation->nativeObject) ),justify,wrap,rightToLeft);
	}
}


HX_DEFINE_DYNAMIC_FUNC8(Font_obj,getIndexAtLocation,return )

Void Font_obj::getLocationAtIndex( ::String text,::org::gameplay3d::immutable::IRectangle clip,int size,::org::gameplay3d::Vector2 outLocation,int destIndex,hx::Null< int >  __o_justify,hx::Null< bool >  __o_wrap,hx::Null< bool >  __o_rightToLeft){
int justify = __o_justify.Default(17);
bool wrap = __o_wrap.Default(true);
bool rightToLeft = __o_rightToLeft.Default(false);
	HX_STACK_FRAME("org.gameplay3d.Font","getLocationAtIndex",0x0874aaa6,"org.gameplay3d.Font.getLocationAtIndex","org/gameplay3d/Font.hx",76,0x7c01e8a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(text,"text")
	HX_STACK_ARG(clip,"clip")
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(outLocation,"outLocation")
	HX_STACK_ARG(destIndex,"destIndex")
	HX_STACK_ARG(justify,"justify")
	HX_STACK_ARG(wrap,"wrap")
	HX_STACK_ARG(rightToLeft,"rightToLeft")
{
		HX_STACK_LINE(76)
		::org::gameplay3d::Font_obj::hx_Font_getLocationAtIndex(this->nativeObject,text,(  (((clip == null()))) ? Dynamic(null()) : Dynamic(clip->__Field(HX_CSTRING("nativeObject"),true)) ),size,(  (((outLocation == null()))) ? Dynamic(null()) : Dynamic(outLocation->nativeObject) ),destIndex,justify,wrap,rightToLeft);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(Font_obj,getLocationAtIndex,(void))

int Font_obj::getSize( ){
	HX_STACK_FRAME("org.gameplay3d.Font","getSize",0x3f32f405,"org.gameplay3d.Font.getSize","org/gameplay3d/Font.hx",82,0x7c01e8a2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(82)
	return ::org::gameplay3d::Font_obj::hx_Font_getSize(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Font_obj,getSize,return )

::org::gameplay3d::SpriteBatch Font_obj::getSpriteBatch( ){
	HX_STACK_FRAME("org.gameplay3d.Font","getSpriteBatch",0x27c526b1,"org.gameplay3d.Font.getSpriteBatch","org/gameplay3d/Font.hx",88,0x7c01e8a2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(88)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::SpriteBatch >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(88)
	Dynamic nativeObject = ::org::gameplay3d::Font_obj::hx_Font_getSpriteBatch(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(88)
	if (((nativeObject == null()))){
		HX_STACK_LINE(88)
		return null();
	}
	else{
		HX_STACK_LINE(88)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(88)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(88)
			::org::gameplay3d::SpriteBatch result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(88)
			if (((result == null()))){
				HX_STACK_LINE(88)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(88)
				::org::gameplay3d::SpriteBatch _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(88)
				result = _g;
				HX_STACK_LINE(88)
				ref->set(result);
			}
			HX_STACK_LINE(88)
			return result;
		}
		else{
			HX_STACK_LINE(88)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(88)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(88)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Font_obj,getSpriteBatch,return )

Void Font_obj::measureText_Str_Rct_Int_Rct_Int_BoolX2( ::String text,::org::gameplay3d::immutable::IRectangle clip,int size,::org::gameplay3d::Rectangle out,hx::Null< int >  __o_justify,hx::Null< bool >  __o_wrap,hx::Null< bool >  __o_ignoreClip){
int justify = __o_justify.Default(17);
bool wrap = __o_wrap.Default(true);
bool ignoreClip = __o_ignoreClip.Default(false);
	HX_STACK_FRAME("org.gameplay3d.Font","measureText_Str_Rct_Int_Rct_Int_BoolX2",0x4bc46b30,"org.gameplay3d.Font.measureText_Str_Rct_Int_Rct_Int_BoolX2","org/gameplay3d/Font.hx",94,0x7c01e8a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(text,"text")
	HX_STACK_ARG(clip,"clip")
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(out,"out")
	HX_STACK_ARG(justify,"justify")
	HX_STACK_ARG(wrap,"wrap")
	HX_STACK_ARG(ignoreClip,"ignoreClip")
{
		HX_STACK_LINE(94)
		::org::gameplay3d::Font_obj::hx_Font_measureText_Str_Rct_Int_Rct_Int_BoolX2(this->nativeObject,text,(  (((clip == null()))) ? Dynamic(null()) : Dynamic(clip->__Field(HX_CSTRING("nativeObject"),true)) ),size,(  (((out == null()))) ? Dynamic(null()) : Dynamic(out->nativeObject) ),justify,wrap,ignoreClip);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(Font_obj,measureText_Str_Rct_Int_Rct_Int_BoolX2,(void))

Void Font_obj::measureText_Str_Int_OutIntX2( ::String text,int size,Dynamic widthOut,Dynamic heightOut){
{
		HX_STACK_FRAME("org.gameplay3d.Font","measureText_Str_Int_OutIntX2",0xae34f91f,"org.gameplay3d.Font.measureText_Str_Int_OutIntX2","org/gameplay3d/Font.hx",100,0x7c01e8a2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(text,"text")
		HX_STACK_ARG(size,"size")
		HX_STACK_ARG(widthOut,"widthOut")
		HX_STACK_ARG(heightOut,"heightOut")
		HX_STACK_LINE(100)
		::org::gameplay3d::Font_obj::hx_Font_measureText_Str_Int_OutIntX2(this->nativeObject,text,size,widthOut,heightOut);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Font_obj,measureText_Str_Int_OutIntX2,(void))

Void Font_obj::start( ){
{
		HX_STACK_FRAME("org.gameplay3d.Font","start",0x8d147870,"org.gameplay3d.Font.start","org/gameplay3d/Font.hx",106,0x7c01e8a2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(106)
		::org::gameplay3d::Font_obj::hx_Font_start(this->nativeObject);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Font_obj,start,(void))

::org::gameplay3d::Font Font_obj::create( ::String path,::String id){
	HX_STACK_FRAME("org.gameplay3d.Font","create",0x5ae9ef2e,"org.gameplay3d.Font.create","org/gameplay3d/Font.hx",22,0x7c01e8a2)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(22)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Font >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(22)
	Dynamic nativeObject = ::org::gameplay3d::Font_obj::hx_Font_static_create(path,id);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(22)
	if (((nativeObject == null()))){
		HX_STACK_LINE(22)
		return null();
	}
	else{
		HX_STACK_LINE(22)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(22)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(22)
			::org::gameplay3d::Font result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(22)
			if (((result == null()))){
				HX_STACK_LINE(22)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(22)
				::org::gameplay3d::Font _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(22)
				result = _g;
				HX_STACK_LINE(22)
				ref->set(result);
			}
			HX_STACK_LINE(22)
			return result;
		}
		else{
			HX_STACK_LINE(22)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(22)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(22)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Font_obj,create,return )

int Font_obj::getJustify( ::String justify){
	HX_STACK_FRAME("org.gameplay3d.Font","getJustify",0x6fdeee8c,"org.gameplay3d.Font.getJustify","org/gameplay3d/Font.hx",70,0x7c01e8a2)
	HX_STACK_ARG(justify,"justify")
	HX_STACK_LINE(70)
	return ::org::gameplay3d::Font_obj::hx_Font_static_getJustify(justify);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,getJustify,return )

Dynamic Font_obj::hx_Font_static_create;

Dynamic Font_obj::hx_Font_createText;

Dynamic Font_obj::hx_Font_drawText_Txt;

Dynamic Font_obj::hx_Font_drawText_Str_Rct_V4_IntX2_BoolX2_Rct;

Dynamic Font_obj::hx_Font_drawText_Str_IntX2_V4_Int_Bool;

Dynamic Font_obj::hx_Font_drawText_Str_IntX2_FltX4_Int_Bool;

Dynamic Font_obj::hx_Font_finish;

Dynamic Font_obj::hx_Font_getIndexAtLocation;

Dynamic Font_obj::hx_Font_static_getJustify;

Dynamic Font_obj::hx_Font_getLocationAtIndex;

Dynamic Font_obj::hx_Font_getSize;

Dynamic Font_obj::hx_Font_getSpriteBatch;

Dynamic Font_obj::hx_Font_measureText_Str_Rct_Int_Rct_Int_BoolX2;

Dynamic Font_obj::hx_Font_measureText_Str_Int_OutIntX2;

Dynamic Font_obj::hx_Font_start;


Font_obj::Font_obj()
{
}

Dynamic Font_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"finish") ) { return finish_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getSize") ) { return getSize_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getJustify") ) { return getJustify_dyn(); }
		if (HX_FIELD_EQ(inName,"createText") ) { return createText_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"drawText_Txt") ) { return drawText_Txt_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"hx_Font_start") ) { return hx_Font_start; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"hx_Font_finish") ) { return hx_Font_finish; }
		if (HX_FIELD_EQ(inName,"getSpriteBatch") ) { return getSpriteBatch_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hx_Font_getSize") ) { return hx_Font_getSize; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hx_Font_createText") ) { return hx_Font_createText; }
		if (HX_FIELD_EQ(inName,"getIndexAtLocation") ) { return getIndexAtLocation_dyn(); }
		if (HX_FIELD_EQ(inName,"getLocationAtIndex") ) { return getLocationAtIndex_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Font_drawText_Txt") ) { return hx_Font_drawText_Txt; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hx_Font_static_create") ) { return hx_Font_static_create; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Font_getSpriteBatch") ) { return hx_Font_getSpriteBatch; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_Font_static_getJustify") ) { return hx_Font_static_getJustify; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_Font_getIndexAtLocation") ) { return hx_Font_getIndexAtLocation; }
		if (HX_FIELD_EQ(inName,"hx_Font_getLocationAtIndex") ) { return hx_Font_getLocationAtIndex; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"measureText_Str_Int_OutIntX2") ) { return measureText_Str_Int_OutIntX2_dyn(); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"drawText_Str_IntX2_V4_Int_Bool") ) { return drawText_Str_IntX2_V4_Int_Bool_dyn(); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"drawText_Str_IntX2_FltX4_Int_Bool") ) { return drawText_Str_IntX2_FltX4_Int_Bool_dyn(); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"hx_Font_measureText_Str_Int_OutIntX2") ) { return hx_Font_measureText_Str_Int_OutIntX2; }
		if (HX_FIELD_EQ(inName,"drawText_Str_Rct_V4_IntX2_BoolX2_Rct") ) { return drawText_Str_Rct_V4_IntX2_BoolX2_Rct_dyn(); }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"hx_Font_drawText_Str_IntX2_V4_Int_Bool") ) { return hx_Font_drawText_Str_IntX2_V4_Int_Bool; }
		if (HX_FIELD_EQ(inName,"measureText_Str_Rct_Int_Rct_Int_BoolX2") ) { return measureText_Str_Rct_Int_Rct_Int_BoolX2_dyn(); }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"hx_Font_drawText_Str_IntX2_FltX4_Int_Bool") ) { return hx_Font_drawText_Str_IntX2_FltX4_Int_Bool; }
		break;
	case 44:
		if (HX_FIELD_EQ(inName,"hx_Font_drawText_Str_Rct_V4_IntX2_BoolX2_Rct") ) { return hx_Font_drawText_Str_Rct_V4_IntX2_BoolX2_Rct; }
		break;
	case 46:
		if (HX_FIELD_EQ(inName,"hx_Font_measureText_Str_Rct_Int_Rct_Int_BoolX2") ) { return hx_Font_measureText_Str_Rct_Int_Rct_Int_BoolX2; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Font_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"hx_Font_start") ) { hx_Font_start=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"hx_Font_finish") ) { hx_Font_finish=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hx_Font_getSize") ) { hx_Font_getSize=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hx_Font_createText") ) { hx_Font_createText=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Font_drawText_Txt") ) { hx_Font_drawText_Txt=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hx_Font_static_create") ) { hx_Font_static_create=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Font_getSpriteBatch") ) { hx_Font_getSpriteBatch=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_Font_static_getJustify") ) { hx_Font_static_getJustify=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_Font_getIndexAtLocation") ) { hx_Font_getIndexAtLocation=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Font_getLocationAtIndex") ) { hx_Font_getLocationAtIndex=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"hx_Font_measureText_Str_Int_OutIntX2") ) { hx_Font_measureText_Str_Int_OutIntX2=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"hx_Font_drawText_Str_IntX2_V4_Int_Bool") ) { hx_Font_drawText_Str_IntX2_V4_Int_Bool=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"hx_Font_drawText_Str_IntX2_FltX4_Int_Bool") ) { hx_Font_drawText_Str_IntX2_FltX4_Int_Bool=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 44:
		if (HX_FIELD_EQ(inName,"hx_Font_drawText_Str_Rct_V4_IntX2_BoolX2_Rct") ) { hx_Font_drawText_Str_Rct_V4_IntX2_BoolX2_Rct=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 46:
		if (HX_FIELD_EQ(inName,"hx_Font_measureText_Str_Rct_Int_Rct_Int_BoolX2") ) { hx_Font_measureText_Str_Rct_Int_Rct_Int_BoolX2=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Font_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create"),
	HX_CSTRING("getJustify"),
	HX_CSTRING("hx_Font_static_create"),
	HX_CSTRING("hx_Font_createText"),
	HX_CSTRING("hx_Font_drawText_Txt"),
	HX_CSTRING("hx_Font_drawText_Str_Rct_V4_IntX2_BoolX2_Rct"),
	HX_CSTRING("hx_Font_drawText_Str_IntX2_V4_Int_Bool"),
	HX_CSTRING("hx_Font_drawText_Str_IntX2_FltX4_Int_Bool"),
	HX_CSTRING("hx_Font_finish"),
	HX_CSTRING("hx_Font_getIndexAtLocation"),
	HX_CSTRING("hx_Font_static_getJustify"),
	HX_CSTRING("hx_Font_getLocationAtIndex"),
	HX_CSTRING("hx_Font_getSize"),
	HX_CSTRING("hx_Font_getSpriteBatch"),
	HX_CSTRING("hx_Font_measureText_Str_Rct_Int_Rct_Int_BoolX2"),
	HX_CSTRING("hx_Font_measureText_Str_Int_OutIntX2"),
	HX_CSTRING("hx_Font_start"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("createText"),
	HX_CSTRING("drawText_Txt"),
	HX_CSTRING("drawText_Str_Rct_V4_IntX2_BoolX2_Rct"),
	HX_CSTRING("drawText_Str_IntX2_V4_Int_Bool"),
	HX_CSTRING("drawText_Str_IntX2_FltX4_Int_Bool"),
	HX_CSTRING("finish"),
	HX_CSTRING("getIndexAtLocation"),
	HX_CSTRING("getLocationAtIndex"),
	HX_CSTRING("getSize"),
	HX_CSTRING("getSpriteBatch"),
	HX_CSTRING("measureText_Str_Rct_Int_Rct_Int_BoolX2"),
	HX_CSTRING("measureText_Str_Int_OutIntX2"),
	HX_CSTRING("start"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Font_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Font_obj::hx_Font_static_create,"hx_Font_static_create");
	HX_MARK_MEMBER_NAME(Font_obj::hx_Font_createText,"hx_Font_createText");
	HX_MARK_MEMBER_NAME(Font_obj::hx_Font_drawText_Txt,"hx_Font_drawText_Txt");
	HX_MARK_MEMBER_NAME(Font_obj::hx_Font_drawText_Str_Rct_V4_IntX2_BoolX2_Rct,"hx_Font_drawText_Str_Rct_V4_IntX2_BoolX2_Rct");
	HX_MARK_MEMBER_NAME(Font_obj::hx_Font_drawText_Str_IntX2_V4_Int_Bool,"hx_Font_drawText_Str_IntX2_V4_Int_Bool");
	HX_MARK_MEMBER_NAME(Font_obj::hx_Font_drawText_Str_IntX2_FltX4_Int_Bool,"hx_Font_drawText_Str_IntX2_FltX4_Int_Bool");
	HX_MARK_MEMBER_NAME(Font_obj::hx_Font_finish,"hx_Font_finish");
	HX_MARK_MEMBER_NAME(Font_obj::hx_Font_getIndexAtLocation,"hx_Font_getIndexAtLocation");
	HX_MARK_MEMBER_NAME(Font_obj::hx_Font_static_getJustify,"hx_Font_static_getJustify");
	HX_MARK_MEMBER_NAME(Font_obj::hx_Font_getLocationAtIndex,"hx_Font_getLocationAtIndex");
	HX_MARK_MEMBER_NAME(Font_obj::hx_Font_getSize,"hx_Font_getSize");
	HX_MARK_MEMBER_NAME(Font_obj::hx_Font_getSpriteBatch,"hx_Font_getSpriteBatch");
	HX_MARK_MEMBER_NAME(Font_obj::hx_Font_measureText_Str_Rct_Int_Rct_Int_BoolX2,"hx_Font_measureText_Str_Rct_Int_Rct_Int_BoolX2");
	HX_MARK_MEMBER_NAME(Font_obj::hx_Font_measureText_Str_Int_OutIntX2,"hx_Font_measureText_Str_Int_OutIntX2");
	HX_MARK_MEMBER_NAME(Font_obj::hx_Font_start,"hx_Font_start");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Font_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Font_obj::hx_Font_static_create,"hx_Font_static_create");
	HX_VISIT_MEMBER_NAME(Font_obj::hx_Font_createText,"hx_Font_createText");
	HX_VISIT_MEMBER_NAME(Font_obj::hx_Font_drawText_Txt,"hx_Font_drawText_Txt");
	HX_VISIT_MEMBER_NAME(Font_obj::hx_Font_drawText_Str_Rct_V4_IntX2_BoolX2_Rct,"hx_Font_drawText_Str_Rct_V4_IntX2_BoolX2_Rct");
	HX_VISIT_MEMBER_NAME(Font_obj::hx_Font_drawText_Str_IntX2_V4_Int_Bool,"hx_Font_drawText_Str_IntX2_V4_Int_Bool");
	HX_VISIT_MEMBER_NAME(Font_obj::hx_Font_drawText_Str_IntX2_FltX4_Int_Bool,"hx_Font_drawText_Str_IntX2_FltX4_Int_Bool");
	HX_VISIT_MEMBER_NAME(Font_obj::hx_Font_finish,"hx_Font_finish");
	HX_VISIT_MEMBER_NAME(Font_obj::hx_Font_getIndexAtLocation,"hx_Font_getIndexAtLocation");
	HX_VISIT_MEMBER_NAME(Font_obj::hx_Font_static_getJustify,"hx_Font_static_getJustify");
	HX_VISIT_MEMBER_NAME(Font_obj::hx_Font_getLocationAtIndex,"hx_Font_getLocationAtIndex");
	HX_VISIT_MEMBER_NAME(Font_obj::hx_Font_getSize,"hx_Font_getSize");
	HX_VISIT_MEMBER_NAME(Font_obj::hx_Font_getSpriteBatch,"hx_Font_getSpriteBatch");
	HX_VISIT_MEMBER_NAME(Font_obj::hx_Font_measureText_Str_Rct_Int_Rct_Int_BoolX2,"hx_Font_measureText_Str_Rct_Int_Rct_Int_BoolX2");
	HX_VISIT_MEMBER_NAME(Font_obj::hx_Font_measureText_Str_Int_OutIntX2,"hx_Font_measureText_Str_Int_OutIntX2");
	HX_VISIT_MEMBER_NAME(Font_obj::hx_Font_start,"hx_Font_start");
};

#endif

Class Font_obj::__mClass;

void Font_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.Font"), hx::TCanCast< Font_obj> ,sStaticFields,sMemberFields,
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

void Font_obj::__boot()
{
	hx_Font_static_create= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Font >(),HX_CSTRING("static_create"),(int)2);
	hx_Font_createText= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Font >(),HX_CSTRING("createText"),(int)-1);
	hx_Font_drawText_Txt= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Font >(),HX_CSTRING("drawText_Txt"),(int)2);
	hx_Font_drawText_Str_Rct_V4_IntX2_BoolX2_Rct= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Font >(),HX_CSTRING("drawText_Str_Rct_V4_IntX2_BoolX2_Rct"),(int)-1);
	hx_Font_drawText_Str_IntX2_V4_Int_Bool= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Font >(),HX_CSTRING("drawText_Str_IntX2_V4_Int_Bool"),(int)-1);
	hx_Font_drawText_Str_IntX2_FltX4_Int_Bool= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Font >(),HX_CSTRING("drawText_Str_IntX2_FltX4_Int_Bool"),(int)-1);
	hx_Font_finish= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Font >(),HX_CSTRING("finish"),(int)1);
	hx_Font_getIndexAtLocation= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Font >(),HX_CSTRING("getIndexAtLocation"),(int)-1);
	hx_Font_static_getJustify= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Font >(),HX_CSTRING("static_getJustify"),(int)1);
	hx_Font_getLocationAtIndex= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Font >(),HX_CSTRING("getLocationAtIndex"),(int)-1);
	hx_Font_getSize= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Font >(),HX_CSTRING("getSize"),(int)1);
	hx_Font_getSpriteBatch= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Font >(),HX_CSTRING("getSpriteBatch"),(int)1);
	hx_Font_measureText_Str_Rct_Int_Rct_Int_BoolX2= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Font >(),HX_CSTRING("measureText_Str_Rct_Int_Rct_Int_BoolX2"),(int)-1);
	hx_Font_measureText_Str_Int_OutIntX2= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Font >(),HX_CSTRING("measureText_Str_Int_OutIntX2"),(int)5);
	hx_Font_start= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Font >(),HX_CSTRING("start"),(int)1);
}

} // end namespace org
} // end namespace gameplay3d
