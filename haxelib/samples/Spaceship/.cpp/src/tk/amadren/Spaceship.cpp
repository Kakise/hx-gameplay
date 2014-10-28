#include <hxcpp.h>

#ifndef INCLUDED_org_gameplay3d_Font
#include <org/gameplay3d/Font.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Game
#include <org/gameplay3d/Game.h>
#endif
#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Platform
#include <org/gameplay3d/Platform.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Ref
#include <org/gameplay3d/Ref.h>
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
#ifndef INCLUDED_org_gameplay3d_util_Handle
#include <org/gameplay3d/util/Handle.h>
#endif
#ifndef INCLUDED_tk_amadren_Spaceship
#include <tk/amadren/Spaceship.h>
#endif
namespace tk{
namespace amadren{

Void Spaceship_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("tk.amadren.Spaceship","new",0x49732d1b,"tk.amadren.Spaceship.new","tk/amadren/Spaceship.hx",12,0x78e612b7)
HX_STACK_THIS(this)
HX_STACK_ARG(nativeObjectInitializer,"nativeObjectInitializer")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(16)
	this->_y = (int)40;
	HX_STACK_LINE(15)
	this->_x = (int)175;
	HX_STACK_LINE(12)
	super::__construct(nativeObjectInitializer,nativeObjectInitializerParams);
}
;
	return null();
}

//Spaceship_obj::~Spaceship_obj() { }

Dynamic Spaceship_obj::__CreateEmpty() { return  new Spaceship_obj; }
hx::ObjectPtr< Spaceship_obj > Spaceship_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< Spaceship_obj > result = new Spaceship_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic Spaceship_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Spaceship_obj > result = new Spaceship_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Spaceship_obj::initialize( ){
{
		HX_STACK_FRAME("tk.amadren.Spaceship","initialize",0x7e58b1f5,"tk.amadren.Spaceship.initialize","tk/amadren/Spaceship.hx",34,0x78e612b7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(34)
		::org::gameplay3d::Font _font = ::org::gameplay3d::Font_obj::create(HX_CSTRING("res/arial40.gpb"),null());		HX_STACK_VAR(_font,"_font");
	}
return null();
}


Void Spaceship_obj::finalize( ){
{
		HX_STACK_FRAME("tk.amadren.Spaceship","finalize",0xd5a9e303,"tk.amadren.Spaceship.finalize","tk/amadren/Spaceship.hx",42,0x78e612b7)
		HX_STACK_THIS(this)
	}
return null();
}


Void Spaceship_obj::update( Float elapsedTime){
{
		HX_STACK_FRAME("tk.amadren.Spaceship","update",0xc682902e,"tk.amadren.Spaceship.update","tk/amadren/Spaceship.hx",51,0x78e612b7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsedTime,"elapsedTime")
	}
return null();
}


Void Spaceship_obj::render( Float elapsedTime){
{
		HX_STACK_FRAME("tk.amadren.Spaceship","render",0x44a6757b,"tk.amadren.Spaceship.render","tk/amadren/Spaceship.hx",60,0x78e612b7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsedTime,"elapsedTime")
		HX_STACK_LINE(62)
		this->_font->start();
		HX_STACK_LINE(63)
		::org::gameplay3d::immutable::IVector4 _g = ::org::gameplay3d::Vector4_obj::one();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(63)
		int _g1 = this->_font->getSize();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(63)
		this->_font->drawText_Str_IntX2_V4_Int_Bool(HX_CSTRING("Click to Play Again"),(int)25,(int)60,_g,_g1,null());
		HX_STACK_LINE(64)
		this->_font->finish();
	}
return null();
}


Void Spaceship_obj::keyEvent( int evt,int key){
{
		HX_STACK_FRAME("tk.amadren.Spaceship","keyEvent",0x9a9e0b60,"tk.amadren.Spaceship.keyEvent","tk/amadren/Spaceship.hx",73,0x78e612b7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(evt,"evt")
		HX_STACK_ARG(key,"key")
	}
return null();
}


Void Spaceship_obj::touchEvent( int evt,int x,int y,int contactIndex){
{
		HX_STACK_FRAME("tk.amadren.Spaceship","touchEvent",0x00f32c80,"tk.amadren.Spaceship.touchEvent","tk/amadren/Spaceship.hx",81,0x78e612b7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(evt,"evt")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(contactIndex,"contactIndex")
	}
return null();
}


bool Spaceship_obj::mouseEvent( int evt,int x,int y,int wheelDelta){
	HX_STACK_FRAME("tk.amadren.Spaceship","mouseEvent",0x252f3c5a,"tk.amadren.Spaceship.mouseEvent","tk/amadren/Spaceship.hx",94,0x78e612b7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(evt,"evt")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(wheelDelta,"wheelDelta")
	HX_STACK_LINE(94)
	return false;
}


::tk::amadren::Spaceship Spaceship_obj::make( ){
	HX_STACK_FRAME("tk.amadren.Spaceship","make",0xfaa800d3,"tk.amadren.Spaceship.make","tk/amadren/Spaceship.hx",20,0x78e612b7)
	HX_STACK_LINE(20)
	return ::tk::amadren::Spaceship_obj::__new(::org::gameplay3d::Game_obj::constructNativeObject_dyn(),Dynamic( Array_obj<Dynamic>::__new().Add(null())));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Spaceship_obj,make,return )

Void Spaceship_obj::main( ){
{
		HX_STACK_FRAME("tk.amadren.Spaceship","main",0xfaa7ff1e,"tk.amadren.Spaceship.main","tk/amadren/Spaceship.hx",102,0x78e612b7)
		HX_STACK_LINE(104)
		::tk::amadren::Spaceship _g = ::tk::amadren::Spaceship_obj::make();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(104)
		::org::gameplay3d::Platform_obj::create(_g,null())->enterMessagePump();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Spaceship_obj,main,(void))


Spaceship_obj::Spaceship_obj()
{
}

void Spaceship_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Spaceship);
	HX_MARK_MEMBER_NAME(_font,"_font");
	HX_MARK_MEMBER_NAME(_x,"_x");
	HX_MARK_MEMBER_NAME(_y,"_y");
	::org::gameplay3d::Game_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Spaceship_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_font,"_font");
	HX_VISIT_MEMBER_NAME(_x,"_x");
	HX_VISIT_MEMBER_NAME(_y,"_y");
	::org::gameplay3d::Game_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Spaceship_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_x") ) { return _x; }
		if (HX_FIELD_EQ(inName,"_y") ) { return _y; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { return make_dyn(); }
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_font") ) { return _font; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finalize") ) { return finalize_dyn(); }
		if (HX_FIELD_EQ(inName,"keyEvent") ) { return keyEvent_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"touchEvent") ) { return touchEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseEvent") ) { return mouseEvent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Spaceship_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_x") ) { _x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_y") ) { _y=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_font") ) { _font=inValue.Cast< ::org::gameplay3d::Font >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Spaceship_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_font"));
	outFields->push(HX_CSTRING("_x"));
	outFields->push(HX_CSTRING("_y"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("make"),
	HX_CSTRING("main"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::org::gameplay3d::Font*/ ,(int)offsetof(Spaceship_obj,_font),HX_CSTRING("_font")},
	{hx::fsInt,(int)offsetof(Spaceship_obj,_x),HX_CSTRING("_x")},
	{hx::fsInt,(int)offsetof(Spaceship_obj,_y),HX_CSTRING("_y")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_font"),
	HX_CSTRING("_x"),
	HX_CSTRING("_y"),
	HX_CSTRING("initialize"),
	HX_CSTRING("finalize"),
	HX_CSTRING("update"),
	HX_CSTRING("render"),
	HX_CSTRING("keyEvent"),
	HX_CSTRING("touchEvent"),
	HX_CSTRING("mouseEvent"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Spaceship_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Spaceship_obj::__mClass,"__mClass");
};

#endif

Class Spaceship_obj::__mClass;

void Spaceship_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("tk.amadren.Spaceship"), hx::TCanCast< Spaceship_obj> ,sStaticFields,sMemberFields,
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

void Spaceship_obj::__boot()
{
}

} // end namespace tk
} // end namespace amadren
