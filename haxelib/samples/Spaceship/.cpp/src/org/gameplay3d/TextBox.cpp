#include <hxcpp.h>

#ifndef INCLUDED_org_gameplay3d_AnimationTarget
#include <org/gameplay3d/AnimationTarget.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Control
#include <org/gameplay3d/Control.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Control_Listener
#include <org/gameplay3d/Control_Listener.h>
#endif
#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Label
#include <org/gameplay3d/Label.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Ref
#include <org/gameplay3d/Ref.h>
#endif
#ifndef INCLUDED_org_gameplay3d_ScriptTarget
#include <org/gameplay3d/ScriptTarget.h>
#endif
#ifndef INCLUDED_org_gameplay3d_TextBox
#include <org/gameplay3d/TextBox.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Theme_Style
#include <org/gameplay3d/Theme_Style.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_INativeBinding
#include <org/gameplay3d/intern/INativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_ListenerWrapper
#include <org/gameplay3d/intern/ListenerWrapper.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_NativeBinding
#include <org/gameplay3d/intern/NativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_impl_AnimationTarget_ScriptTarget
#include <org/gameplay3d/intern/impl/AnimationTarget_ScriptTarget.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_NativeInterface
#include <org/gameplay3d/util/NativeInterface.h>
#endif
#ifndef INCLUDED_org_gameplay3d_wrapper_Control_ListenerWrapper
#include <org/gameplay3d/wrapper/Control_ListenerWrapper.h>
#endif
namespace org{
namespace gameplay3d{

Void TextBox_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.TextBox","new",0x7da562c3,"org.gameplay3d.TextBox.new","org/gameplay3d/TextBox.hx",9,0x88e51bad)
HX_STACK_THIS(this)
HX_STACK_ARG(nativeObjectInitializer,"nativeObjectInitializer")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(9)
	super::__construct(nativeObjectInitializer,nativeObjectInitializerParams);
}
;
	return null();
}

//TextBox_obj::~TextBox_obj() { }

Dynamic TextBox_obj::__CreateEmpty() { return  new TextBox_obj; }
hx::ObjectPtr< TextBox_obj > TextBox_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< TextBox_obj > result = new TextBox_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic TextBox_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextBox_obj > result = new TextBox_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void TextBox_obj::addListener( ::org::gameplay3d::wrapper::Control_ListenerWrapper listener,int eventFlags){
{
		HX_STACK_FRAME("org.gameplay3d.TextBox","addListener",0x611d6518,"org.gameplay3d.TextBox.addListener","org/gameplay3d/TextBox.hx",18,0x88e51bad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(listener,"listener")
		HX_STACK_ARG(eventFlags,"eventFlags")
		HX_STACK_LINE(18)
		::org::gameplay3d::TextBox_obj::hx_TextBox_addListener(this->nativeObject,(  (((listener == null()))) ? Dynamic(null()) : Dynamic(listener->nativeObject) ),eventFlags);
	}
return null();
}


int TextBox_obj::getLastKeypress( ){
	HX_STACK_FRAME("org.gameplay3d.TextBox","getLastKeypress",0x72160693,"org.gameplay3d.TextBox.getLastKeypress","org/gameplay3d/TextBox.hx",30,0x88e51bad)
	HX_STACK_THIS(this)
	HX_STACK_LINE(30)
	return ::org::gameplay3d::TextBox_obj::hx_TextBox_getLastKeypress(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(TextBox_obj,getLastKeypress,return )

::String TextBox_obj::getType( ){
	HX_STACK_FRAME("org.gameplay3d.TextBox","getType",0x9ab9a253,"org.gameplay3d.TextBox.getType","org/gameplay3d/TextBox.hx",36,0x88e51bad)
	HX_STACK_THIS(this)
	HX_STACK_LINE(36)
	return ::org::gameplay3d::TextBox_obj::hx_TextBox_getType(this->nativeObject);
}


::org::gameplay3d::TextBox TextBox_obj::create( ::String id,::org::gameplay3d::Theme_Style style){
	HX_STACK_FRAME("org.gameplay3d.TextBox","create",0x29f53479,"org.gameplay3d.TextBox.create","org/gameplay3d/TextBox.hx",24,0x88e51bad)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(style,"style")
	HX_STACK_LINE(24)
	return ::org::gameplay3d::TextBox_obj::hx_TextBox_static_create(id,(  (((style == null()))) ? Dynamic(null()) : Dynamic(style->nativeObject) ));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TextBox_obj,create,return )

Dynamic TextBox_obj::hx_TextBox_addListener;

Dynamic TextBox_obj::hx_TextBox_static_create;

Dynamic TextBox_obj::hx_TextBox_getLastKeypress;

Dynamic TextBox_obj::hx_TextBox_getType;


TextBox_obj::TextBox_obj()
{
}

Dynamic TextBox_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addListener") ) { return addListener_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getLastKeypress") ) { return getLastKeypress_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hx_TextBox_getType") ) { return hx_TextBox_getType; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_TextBox_addListener") ) { return hx_TextBox_addListener; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_TextBox_static_create") ) { return hx_TextBox_static_create; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_TextBox_getLastKeypress") ) { return hx_TextBox_getLastKeypress; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextBox_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"hx_TextBox_getType") ) { hx_TextBox_getType=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_TextBox_addListener") ) { hx_TextBox_addListener=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_TextBox_static_create") ) { hx_TextBox_static_create=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_TextBox_getLastKeypress") ) { hx_TextBox_getLastKeypress=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextBox_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create"),
	HX_CSTRING("hx_TextBox_addListener"),
	HX_CSTRING("hx_TextBox_static_create"),
	HX_CSTRING("hx_TextBox_getLastKeypress"),
	HX_CSTRING("hx_TextBox_getType"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("addListener"),
	HX_CSTRING("getLastKeypress"),
	HX_CSTRING("getType"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextBox_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextBox_obj::hx_TextBox_addListener,"hx_TextBox_addListener");
	HX_MARK_MEMBER_NAME(TextBox_obj::hx_TextBox_static_create,"hx_TextBox_static_create");
	HX_MARK_MEMBER_NAME(TextBox_obj::hx_TextBox_getLastKeypress,"hx_TextBox_getLastKeypress");
	HX_MARK_MEMBER_NAME(TextBox_obj::hx_TextBox_getType,"hx_TextBox_getType");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextBox_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextBox_obj::hx_TextBox_addListener,"hx_TextBox_addListener");
	HX_VISIT_MEMBER_NAME(TextBox_obj::hx_TextBox_static_create,"hx_TextBox_static_create");
	HX_VISIT_MEMBER_NAME(TextBox_obj::hx_TextBox_getLastKeypress,"hx_TextBox_getLastKeypress");
	HX_VISIT_MEMBER_NAME(TextBox_obj::hx_TextBox_getType,"hx_TextBox_getType");
};

#endif

Class TextBox_obj::__mClass;

void TextBox_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.TextBox"), hx::TCanCast< TextBox_obj> ,sStaticFields,sMemberFields,
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

void TextBox_obj::__boot()
{
	hx_TextBox_addListener= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::TextBox >(),HX_CSTRING("addListener"),(int)3);
	hx_TextBox_static_create= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::TextBox >(),HX_CSTRING("static_create"),(int)2);
	hx_TextBox_getLastKeypress= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::TextBox >(),HX_CSTRING("getLastKeypress"),(int)1);
	hx_TextBox_getType= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::TextBox >(),HX_CSTRING("getType"),(int)1);
}

} // end namespace org
} // end namespace gameplay3d
