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

Void Label_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.Label","new",0x67d58d99,"org.gameplay3d.Label.new","org/gameplay3d/Label.hx",10,0xd02ff597)
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

//Label_obj::~Label_obj() { }

Dynamic Label_obj::__CreateEmpty() { return  new Label_obj; }
hx::ObjectPtr< Label_obj > Label_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< Label_obj > result = new Label_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic Label_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Label_obj > result = new Label_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Label_obj::addListener( ::org::gameplay3d::wrapper::Control_ListenerWrapper listener,int eventFlags){
{
		HX_STACK_FRAME("org.gameplay3d.Label","addListener",0xec5555ee,"org.gameplay3d.Label.addListener","org/gameplay3d/Label.hx",19,0xd02ff597)
		HX_STACK_THIS(this)
		HX_STACK_ARG(listener,"listener")
		HX_STACK_ARG(eventFlags,"eventFlags")
		HX_STACK_LINE(19)
		::org::gameplay3d::Label_obj::hx_Label_addListener(this->nativeObject,(  (((listener == null()))) ? Dynamic(null()) : Dynamic(listener->nativeObject) ),eventFlags);
	}
return null();
}


::String Label_obj::getText( ){
	HX_STACK_FRAME("org.gameplay3d.Label","getText",0x68f7ca1c,"org.gameplay3d.Label.getText","org/gameplay3d/Label.hx",31,0xd02ff597)
	HX_STACK_THIS(this)
	HX_STACK_LINE(31)
	return ::org::gameplay3d::Label_obj::hx_Label_getText(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,getText,return )

::String Label_obj::getType( ){
	HX_STACK_FRAME("org.gameplay3d.Label","getType",0x6906f029,"org.gameplay3d.Label.getType","org/gameplay3d/Label.hx",37,0xd02ff597)
	HX_STACK_THIS(this)
	HX_STACK_LINE(37)
	return ::org::gameplay3d::Label_obj::hx_Label_getType(this->nativeObject);
}


Void Label_obj::setText( ::String text){
{
		HX_STACK_FRAME("org.gameplay3d.Label","setText",0x5bf95b28,"org.gameplay3d.Label.setText","org/gameplay3d/Label.hx",43,0xd02ff597)
		HX_STACK_THIS(this)
		HX_STACK_ARG(text,"text")
		HX_STACK_LINE(43)
		::org::gameplay3d::Label_obj::hx_Label_setText(this->nativeObject,text);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,setText,(void))

::org::gameplay3d::Label Label_obj::create( ::String id,::org::gameplay3d::Theme_Style style){
	HX_STACK_FRAME("org.gameplay3d.Label","create",0x0e2ef363,"org.gameplay3d.Label.create","org/gameplay3d/Label.hx",25,0xd02ff597)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(style,"style")
	HX_STACK_LINE(25)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Label >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(25)
	Dynamic nativeObject = ::org::gameplay3d::Label_obj::hx_Label_static_create(id,(  (((style == null()))) ? Dynamic(null()) : Dynamic(style->nativeObject) ));		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(25)
	if (((nativeObject == null()))){
		HX_STACK_LINE(25)
		return null();
	}
	else{
		HX_STACK_LINE(25)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(25)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(25)
			::org::gameplay3d::Label result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(25)
			if (((result == null()))){
				HX_STACK_LINE(25)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(25)
				::org::gameplay3d::Label _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(25)
				result = _g;
				HX_STACK_LINE(25)
				ref->set(result);
			}
			HX_STACK_LINE(25)
			return result;
		}
		else{
			HX_STACK_LINE(25)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(25)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(25)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Label_obj,create,return )

Dynamic Label_obj::hx_Label_addListener;

Dynamic Label_obj::hx_Label_static_create;

Dynamic Label_obj::hx_Label_getText;

Dynamic Label_obj::hx_Label_getType;

Dynamic Label_obj::hx_Label_setText;


Label_obj::Label_obj()
{
}

Dynamic Label_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getText") ) { return getText_dyn(); }
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
		if (HX_FIELD_EQ(inName,"setText") ) { return setText_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addListener") ) { return addListener_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hx_Label_getText") ) { return hx_Label_getText; }
		if (HX_FIELD_EQ(inName,"hx_Label_getType") ) { return hx_Label_getType; }
		if (HX_FIELD_EQ(inName,"hx_Label_setText") ) { return hx_Label_setText; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Label_addListener") ) { return hx_Label_addListener; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Label_static_create") ) { return hx_Label_static_create; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Label_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"hx_Label_getText") ) { hx_Label_getText=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Label_getType") ) { hx_Label_getType=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Label_setText") ) { hx_Label_setText=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Label_addListener") ) { hx_Label_addListener=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Label_static_create") ) { hx_Label_static_create=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Label_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create"),
	HX_CSTRING("hx_Label_addListener"),
	HX_CSTRING("hx_Label_static_create"),
	HX_CSTRING("hx_Label_getText"),
	HX_CSTRING("hx_Label_getType"),
	HX_CSTRING("hx_Label_setText"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("addListener"),
	HX_CSTRING("getText"),
	HX_CSTRING("getType"),
	HX_CSTRING("setText"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Label_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Label_obj::hx_Label_addListener,"hx_Label_addListener");
	HX_MARK_MEMBER_NAME(Label_obj::hx_Label_static_create,"hx_Label_static_create");
	HX_MARK_MEMBER_NAME(Label_obj::hx_Label_getText,"hx_Label_getText");
	HX_MARK_MEMBER_NAME(Label_obj::hx_Label_getType,"hx_Label_getType");
	HX_MARK_MEMBER_NAME(Label_obj::hx_Label_setText,"hx_Label_setText");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Label_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Label_obj::hx_Label_addListener,"hx_Label_addListener");
	HX_VISIT_MEMBER_NAME(Label_obj::hx_Label_static_create,"hx_Label_static_create");
	HX_VISIT_MEMBER_NAME(Label_obj::hx_Label_getText,"hx_Label_getText");
	HX_VISIT_MEMBER_NAME(Label_obj::hx_Label_getType,"hx_Label_getType");
	HX_VISIT_MEMBER_NAME(Label_obj::hx_Label_setText,"hx_Label_setText");
};

#endif

Class Label_obj::__mClass;

void Label_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.Label"), hx::TCanCast< Label_obj> ,sStaticFields,sMemberFields,
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

void Label_obj::__boot()
{
	hx_Label_addListener= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Label >(),HX_CSTRING("addListener"),(int)3);
	hx_Label_static_create= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Label >(),HX_CSTRING("static_create"),(int)2);
	hx_Label_getText= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Label >(),HX_CSTRING("getText"),(int)1);
	hx_Label_getType= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Label >(),HX_CSTRING("getType"),(int)1);
	hx_Label_setText= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Label >(),HX_CSTRING("setText"),(int)2);
}

} // end namespace org
} // end namespace gameplay3d
