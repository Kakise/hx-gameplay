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
#ifndef INCLUDED_org_gameplay3d_Button
#include <org/gameplay3d/Button.h>
#endif
#ifndef INCLUDED_org_gameplay3d_CheckBox
#include <org/gameplay3d/CheckBox.h>
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
#ifndef INCLUDED_org_gameplay3d_Vector2
#include <org/gameplay3d/Vector2.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IVector2
#include <org/gameplay3d/immutable/IVector2.h>
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

Void CheckBox_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.CheckBox","new",0x025f55c2,"org.gameplay3d.CheckBox.new","org/gameplay3d/CheckBox.hx",11,0x2a6c4e4e)
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

//CheckBox_obj::~CheckBox_obj() { }

Dynamic CheckBox_obj::__CreateEmpty() { return  new CheckBox_obj; }
hx::ObjectPtr< CheckBox_obj > CheckBox_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< CheckBox_obj > result = new CheckBox_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic CheckBox_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CheckBox_obj > result = new CheckBox_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void CheckBox_obj::addListener( ::org::gameplay3d::wrapper::Control_ListenerWrapper listener,int eventFlags){
{
		HX_STACK_FRAME("org.gameplay3d.CheckBox","addListener",0x1a90ef17,"org.gameplay3d.CheckBox.addListener","org/gameplay3d/CheckBox.hx",20,0x2a6c4e4e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(listener,"listener")
		HX_STACK_ARG(eventFlags,"eventFlags")
		HX_STACK_LINE(20)
		::org::gameplay3d::CheckBox_obj::hx_CheckBox_addListener(this->nativeObject,(  (((listener == null()))) ? Dynamic(null()) : Dynamic(listener->nativeObject) ),eventFlags);
	}
return null();
}


::org::gameplay3d::immutable::IVector2 CheckBox_obj::getImageSize( ){
	HX_STACK_FRAME("org.gameplay3d.CheckBox","getImageSize",0x6f3c90a4,"org.gameplay3d.CheckBox.getImageSize","org/gameplay3d/CheckBox.hx",32,0x2a6c4e4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(32)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector2 >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(32)
	Dynamic nativeObject = ::org::gameplay3d::CheckBox_obj::hx_CheckBox_getImageSize(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(32)
	if (((nativeObject == null()))){
		HX_STACK_LINE(32)
		return null();
	}
	else{
		HX_STACK_LINE(32)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(32)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(32)
			::org::gameplay3d::Vector2 result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(32)
			if (((result == null()))){
				HX_STACK_LINE(32)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(32)
				::org::gameplay3d::Vector2 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(32)
				result = _g;
				HX_STACK_LINE(32)
				ref->set(result);
			}
			HX_STACK_LINE(32)
			return result;
		}
		else{
			HX_STACK_LINE(32)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(32)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(32)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CheckBox_obj,getImageSize,return )

::String CheckBox_obj::getType( ){
	HX_STACK_FRAME("org.gameplay3d.CheckBox","getType",0x3b8280d2,"org.gameplay3d.CheckBox.getType","org/gameplay3d/CheckBox.hx",38,0x2a6c4e4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(38)
	return ::org::gameplay3d::CheckBox_obj::hx_CheckBox_getType(this->nativeObject);
}


bool CheckBox_obj::isChecked( ){
	HX_STACK_FRAME("org.gameplay3d.CheckBox","isChecked",0x4557eb3f,"org.gameplay3d.CheckBox.isChecked","org/gameplay3d/CheckBox.hx",44,0x2a6c4e4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(44)
	return ::org::gameplay3d::CheckBox_obj::hx_CheckBox_isChecked(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(CheckBox_obj,isChecked,return )

Void CheckBox_obj::setChecked( bool checked){
{
		HX_STACK_FRAME("org.gameplay3d.CheckBox","setChecked",0xa5f2a283,"org.gameplay3d.CheckBox.setChecked","org/gameplay3d/CheckBox.hx",50,0x2a6c4e4e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(checked,"checked")
		HX_STACK_LINE(50)
		::org::gameplay3d::CheckBox_obj::hx_CheckBox_setChecked(this->nativeObject,checked);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CheckBox_obj,setChecked,(void))

Void CheckBox_obj::setImageSize( Float width,Float height){
{
		HX_STACK_FRAME("org.gameplay3d.CheckBox","setImageSize",0x8435b418,"org.gameplay3d.CheckBox.setImageSize","org/gameplay3d/CheckBox.hx",56,0x2a6c4e4e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(56)
		::org::gameplay3d::CheckBox_obj::hx_CheckBox_setImageSize(this->nativeObject,width,height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(CheckBox_obj,setImageSize,(void))

::org::gameplay3d::CheckBox CheckBox_obj::create( ::String id,::org::gameplay3d::Theme_Style style){
	HX_STACK_FRAME("org.gameplay3d.CheckBox","create",0x3d0beada,"org.gameplay3d.CheckBox.create","org/gameplay3d/CheckBox.hx",26,0x2a6c4e4e)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(style,"style")
	HX_STACK_LINE(26)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::CheckBox >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(26)
	Dynamic nativeObject = ::org::gameplay3d::CheckBox_obj::hx_CheckBox_static_create(id,(  (((style == null()))) ? Dynamic(null()) : Dynamic(style->nativeObject) ));		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(26)
	if (((nativeObject == null()))){
		HX_STACK_LINE(26)
		return null();
	}
	else{
		HX_STACK_LINE(26)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(26)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(26)
			::org::gameplay3d::CheckBox result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(26)
			if (((result == null()))){
				HX_STACK_LINE(26)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(26)
				::org::gameplay3d::CheckBox _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(26)
				result = _g;
				HX_STACK_LINE(26)
				ref->set(result);
			}
			HX_STACK_LINE(26)
			return result;
		}
		else{
			HX_STACK_LINE(26)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(26)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(26)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CheckBox_obj,create,return )

Dynamic CheckBox_obj::hx_CheckBox_addListener;

Dynamic CheckBox_obj::hx_CheckBox_static_create;

Dynamic CheckBox_obj::hx_CheckBox_getImageSize;

Dynamic CheckBox_obj::hx_CheckBox_getType;

Dynamic CheckBox_obj::hx_CheckBox_isChecked;

Dynamic CheckBox_obj::hx_CheckBox_setChecked;

Dynamic CheckBox_obj::hx_CheckBox_setImageSize;


CheckBox_obj::CheckBox_obj()
{
}

Dynamic CheckBox_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isChecked") ) { return isChecked_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setChecked") ) { return setChecked_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addListener") ) { return addListener_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getImageSize") ) { return getImageSize_dyn(); }
		if (HX_FIELD_EQ(inName,"setImageSize") ) { return setImageSize_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hx_CheckBox_getType") ) { return hx_CheckBox_getType; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hx_CheckBox_isChecked") ) { return hx_CheckBox_isChecked; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_CheckBox_setChecked") ) { return hx_CheckBox_setChecked; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_CheckBox_addListener") ) { return hx_CheckBox_addListener; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_CheckBox_getImageSize") ) { return hx_CheckBox_getImageSize; }
		if (HX_FIELD_EQ(inName,"hx_CheckBox_setImageSize") ) { return hx_CheckBox_setImageSize; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_CheckBox_static_create") ) { return hx_CheckBox_static_create; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CheckBox_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"hx_CheckBox_getType") ) { hx_CheckBox_getType=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hx_CheckBox_isChecked") ) { hx_CheckBox_isChecked=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_CheckBox_setChecked") ) { hx_CheckBox_setChecked=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_CheckBox_addListener") ) { hx_CheckBox_addListener=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_CheckBox_getImageSize") ) { hx_CheckBox_getImageSize=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_CheckBox_setImageSize") ) { hx_CheckBox_setImageSize=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_CheckBox_static_create") ) { hx_CheckBox_static_create=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CheckBox_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create"),
	HX_CSTRING("hx_CheckBox_addListener"),
	HX_CSTRING("hx_CheckBox_static_create"),
	HX_CSTRING("hx_CheckBox_getImageSize"),
	HX_CSTRING("hx_CheckBox_getType"),
	HX_CSTRING("hx_CheckBox_isChecked"),
	HX_CSTRING("hx_CheckBox_setChecked"),
	HX_CSTRING("hx_CheckBox_setImageSize"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("addListener"),
	HX_CSTRING("getImageSize"),
	HX_CSTRING("getType"),
	HX_CSTRING("isChecked"),
	HX_CSTRING("setChecked"),
	HX_CSTRING("setImageSize"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CheckBox_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CheckBox_obj::hx_CheckBox_addListener,"hx_CheckBox_addListener");
	HX_MARK_MEMBER_NAME(CheckBox_obj::hx_CheckBox_static_create,"hx_CheckBox_static_create");
	HX_MARK_MEMBER_NAME(CheckBox_obj::hx_CheckBox_getImageSize,"hx_CheckBox_getImageSize");
	HX_MARK_MEMBER_NAME(CheckBox_obj::hx_CheckBox_getType,"hx_CheckBox_getType");
	HX_MARK_MEMBER_NAME(CheckBox_obj::hx_CheckBox_isChecked,"hx_CheckBox_isChecked");
	HX_MARK_MEMBER_NAME(CheckBox_obj::hx_CheckBox_setChecked,"hx_CheckBox_setChecked");
	HX_MARK_MEMBER_NAME(CheckBox_obj::hx_CheckBox_setImageSize,"hx_CheckBox_setImageSize");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CheckBox_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CheckBox_obj::hx_CheckBox_addListener,"hx_CheckBox_addListener");
	HX_VISIT_MEMBER_NAME(CheckBox_obj::hx_CheckBox_static_create,"hx_CheckBox_static_create");
	HX_VISIT_MEMBER_NAME(CheckBox_obj::hx_CheckBox_getImageSize,"hx_CheckBox_getImageSize");
	HX_VISIT_MEMBER_NAME(CheckBox_obj::hx_CheckBox_getType,"hx_CheckBox_getType");
	HX_VISIT_MEMBER_NAME(CheckBox_obj::hx_CheckBox_isChecked,"hx_CheckBox_isChecked");
	HX_VISIT_MEMBER_NAME(CheckBox_obj::hx_CheckBox_setChecked,"hx_CheckBox_setChecked");
	HX_VISIT_MEMBER_NAME(CheckBox_obj::hx_CheckBox_setImageSize,"hx_CheckBox_setImageSize");
};

#endif

Class CheckBox_obj::__mClass;

void CheckBox_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.CheckBox"), hx::TCanCast< CheckBox_obj> ,sStaticFields,sMemberFields,
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

void CheckBox_obj::__boot()
{
	hx_CheckBox_addListener= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::CheckBox >(),HX_CSTRING("addListener"),(int)3);
	hx_CheckBox_static_create= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::CheckBox >(),HX_CSTRING("static_create"),(int)2);
	hx_CheckBox_getImageSize= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::CheckBox >(),HX_CSTRING("getImageSize"),(int)1);
	hx_CheckBox_getType= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::CheckBox >(),HX_CSTRING("getType"),(int)1);
	hx_CheckBox_isChecked= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::CheckBox >(),HX_CSTRING("isChecked"),(int)1);
	hx_CheckBox_setChecked= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::CheckBox >(),HX_CSTRING("setChecked"),(int)2);
	hx_CheckBox_setImageSize= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::CheckBox >(),HX_CSTRING("setImageSize"),(int)3);
}

} // end namespace org
} // end namespace gameplay3d
