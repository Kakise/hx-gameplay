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
#ifndef INCLUDED_org_gameplay3d_RadioButton
#include <org/gameplay3d/RadioButton.h>
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

Void RadioButton_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.RadioButton","new",0xb35cfdb2,"org.gameplay3d.RadioButton.new","org/gameplay3d/RadioButton.hx",11,0xd6f5c39e)
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

//RadioButton_obj::~RadioButton_obj() { }

Dynamic RadioButton_obj::__CreateEmpty() { return  new RadioButton_obj; }
hx::ObjectPtr< RadioButton_obj > RadioButton_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< RadioButton_obj > result = new RadioButton_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic RadioButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RadioButton_obj > result = new RadioButton_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void RadioButton_obj::addListener( ::org::gameplay3d::wrapper::Control_ListenerWrapper listener,int eventFlags){
{
		HX_STACK_FRAME("org.gameplay3d.RadioButton","addListener",0xce600707,"org.gameplay3d.RadioButton.addListener","org/gameplay3d/RadioButton.hx",20,0xd6f5c39e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(listener,"listener")
		HX_STACK_ARG(eventFlags,"eventFlags")
		HX_STACK_LINE(20)
		::org::gameplay3d::RadioButton_obj::hx_RadioButton_addListener(this->nativeObject,(  (((listener == null()))) ? Dynamic(null()) : Dynamic(listener->nativeObject) ),eventFlags);
	}
return null();
}


::String RadioButton_obj::getGroupId( ){
	HX_STACK_FRAME("org.gameplay3d.RadioButton","getGroupId",0xb6a807f2,"org.gameplay3d.RadioButton.getGroupId","org/gameplay3d/RadioButton.hx",32,0xd6f5c39e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(32)
	return ::org::gameplay3d::RadioButton_obj::hx_RadioButton_getGroupId(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(RadioButton_obj,getGroupId,return )

::org::gameplay3d::immutable::IVector2 RadioButton_obj::getImageSize( ){
	HX_STACK_FRAME("org.gameplay3d.RadioButton","getImageSize",0x10a26ab4,"org.gameplay3d.RadioButton.getImageSize","org/gameplay3d/RadioButton.hx",38,0xd6f5c39e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(38)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector2 >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(38)
	Dynamic nativeObject = ::org::gameplay3d::RadioButton_obj::hx_RadioButton_getImageSize(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(38)
	if (((nativeObject == null()))){
		HX_STACK_LINE(38)
		return null();
	}
	else{
		HX_STACK_LINE(38)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(38)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(38)
			::org::gameplay3d::Vector2 result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(38)
			if (((result == null()))){
				HX_STACK_LINE(38)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(38)
				::org::gameplay3d::Vector2 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(38)
				result = _g;
				HX_STACK_LINE(38)
				ref->set(result);
			}
			HX_STACK_LINE(38)
			return result;
		}
		else{
			HX_STACK_LINE(38)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(38)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(38)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RadioButton_obj,getImageSize,return )

::String RadioButton_obj::getType( ){
	HX_STACK_FRAME("org.gameplay3d.RadioButton","getType",0xca0ae0c2,"org.gameplay3d.RadioButton.getType","org/gameplay3d/RadioButton.hx",44,0xd6f5c39e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(44)
	return ::org::gameplay3d::RadioButton_obj::hx_RadioButton_getType(this->nativeObject);
}


bool RadioButton_obj::isSelected( ){
	HX_STACK_FRAME("org.gameplay3d.RadioButton","isSelected",0x0c6b3d53,"org.gameplay3d.RadioButton.isSelected","org/gameplay3d/RadioButton.hx",50,0xd6f5c39e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(50)
	return ::org::gameplay3d::RadioButton_obj::hx_RadioButton_isSelected(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(RadioButton_obj,isSelected,return )

Void RadioButton_obj::setGroupId( ::String groupId){
{
		HX_STACK_FRAME("org.gameplay3d.RadioButton","setGroupId",0xba25a666,"org.gameplay3d.RadioButton.setGroupId","org/gameplay3d/RadioButton.hx",56,0xd6f5c39e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(groupId,"groupId")
		HX_STACK_LINE(56)
		::org::gameplay3d::RadioButton_obj::hx_RadioButton_setGroupId(this->nativeObject,groupId);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RadioButton_obj,setGroupId,(void))

Void RadioButton_obj::setImageSize( Float width,Float height){
{
		HX_STACK_FRAME("org.gameplay3d.RadioButton","setImageSize",0x259b8e28,"org.gameplay3d.RadioButton.setImageSize","org/gameplay3d/RadioButton.hx",62,0xd6f5c39e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(62)
		::org::gameplay3d::RadioButton_obj::hx_RadioButton_setImageSize(this->nativeObject,width,height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(RadioButton_obj,setImageSize,(void))

Void RadioButton_obj::setSelected( bool selected){
{
		HX_STACK_FRAME("org.gameplay3d.RadioButton","setSelected",0x469fc36f,"org.gameplay3d.RadioButton.setSelected","org/gameplay3d/RadioButton.hx",68,0xd6f5c39e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(selected,"selected")
		HX_STACK_LINE(68)
		::org::gameplay3d::RadioButton_obj::hx_RadioButton_setSelected(this->nativeObject,selected);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RadioButton_obj,setSelected,(void))

::org::gameplay3d::RadioButton RadioButton_obj::create( ::String id,::org::gameplay3d::Theme_Style style){
	HX_STACK_FRAME("org.gameplay3d.RadioButton","create",0x8973d8ea,"org.gameplay3d.RadioButton.create","org/gameplay3d/RadioButton.hx",26,0xd6f5c39e)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(style,"style")
	HX_STACK_LINE(26)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::RadioButton >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(26)
	Dynamic nativeObject = ::org::gameplay3d::RadioButton_obj::hx_RadioButton_static_create(id,(  (((style == null()))) ? Dynamic(null()) : Dynamic(style->nativeObject) ));		HX_STACK_VAR(nativeObject,"nativeObject");
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
			::org::gameplay3d::RadioButton result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(26)
			if (((result == null()))){
				HX_STACK_LINE(26)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(26)
				::org::gameplay3d::RadioButton _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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


STATIC_HX_DEFINE_DYNAMIC_FUNC2(RadioButton_obj,create,return )

Dynamic RadioButton_obj::hx_RadioButton_addListener;

Dynamic RadioButton_obj::hx_RadioButton_static_create;

Dynamic RadioButton_obj::hx_RadioButton_getGroupId;

Dynamic RadioButton_obj::hx_RadioButton_getImageSize;

Dynamic RadioButton_obj::hx_RadioButton_getType;

Dynamic RadioButton_obj::hx_RadioButton_isSelected;

Dynamic RadioButton_obj::hx_RadioButton_setGroupId;

Dynamic RadioButton_obj::hx_RadioButton_setImageSize;

Dynamic RadioButton_obj::hx_RadioButton_setSelected;


RadioButton_obj::RadioButton_obj()
{
}

Dynamic RadioButton_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getGroupId") ) { return getGroupId_dyn(); }
		if (HX_FIELD_EQ(inName,"isSelected") ) { return isSelected_dyn(); }
		if (HX_FIELD_EQ(inName,"setGroupId") ) { return setGroupId_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addListener") ) { return addListener_dyn(); }
		if (HX_FIELD_EQ(inName,"setSelected") ) { return setSelected_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getImageSize") ) { return getImageSize_dyn(); }
		if (HX_FIELD_EQ(inName,"setImageSize") ) { return setImageSize_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_RadioButton_getType") ) { return hx_RadioButton_getType; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_RadioButton_getGroupId") ) { return hx_RadioButton_getGroupId; }
		if (HX_FIELD_EQ(inName,"hx_RadioButton_isSelected") ) { return hx_RadioButton_isSelected; }
		if (HX_FIELD_EQ(inName,"hx_RadioButton_setGroupId") ) { return hx_RadioButton_setGroupId; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_RadioButton_addListener") ) { return hx_RadioButton_addListener; }
		if (HX_FIELD_EQ(inName,"hx_RadioButton_setSelected") ) { return hx_RadioButton_setSelected; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"hx_RadioButton_getImageSize") ) { return hx_RadioButton_getImageSize; }
		if (HX_FIELD_EQ(inName,"hx_RadioButton_setImageSize") ) { return hx_RadioButton_setImageSize; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_RadioButton_static_create") ) { return hx_RadioButton_static_create; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RadioButton_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 22:
		if (HX_FIELD_EQ(inName,"hx_RadioButton_getType") ) { hx_RadioButton_getType=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_RadioButton_getGroupId") ) { hx_RadioButton_getGroupId=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_RadioButton_isSelected") ) { hx_RadioButton_isSelected=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_RadioButton_setGroupId") ) { hx_RadioButton_setGroupId=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_RadioButton_addListener") ) { hx_RadioButton_addListener=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_RadioButton_setSelected") ) { hx_RadioButton_setSelected=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"hx_RadioButton_getImageSize") ) { hx_RadioButton_getImageSize=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_RadioButton_setImageSize") ) { hx_RadioButton_setImageSize=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_RadioButton_static_create") ) { hx_RadioButton_static_create=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RadioButton_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create"),
	HX_CSTRING("hx_RadioButton_addListener"),
	HX_CSTRING("hx_RadioButton_static_create"),
	HX_CSTRING("hx_RadioButton_getGroupId"),
	HX_CSTRING("hx_RadioButton_getImageSize"),
	HX_CSTRING("hx_RadioButton_getType"),
	HX_CSTRING("hx_RadioButton_isSelected"),
	HX_CSTRING("hx_RadioButton_setGroupId"),
	HX_CSTRING("hx_RadioButton_setImageSize"),
	HX_CSTRING("hx_RadioButton_setSelected"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("addListener"),
	HX_CSTRING("getGroupId"),
	HX_CSTRING("getImageSize"),
	HX_CSTRING("getType"),
	HX_CSTRING("isSelected"),
	HX_CSTRING("setGroupId"),
	HX_CSTRING("setImageSize"),
	HX_CSTRING("setSelected"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RadioButton_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(RadioButton_obj::hx_RadioButton_addListener,"hx_RadioButton_addListener");
	HX_MARK_MEMBER_NAME(RadioButton_obj::hx_RadioButton_static_create,"hx_RadioButton_static_create");
	HX_MARK_MEMBER_NAME(RadioButton_obj::hx_RadioButton_getGroupId,"hx_RadioButton_getGroupId");
	HX_MARK_MEMBER_NAME(RadioButton_obj::hx_RadioButton_getImageSize,"hx_RadioButton_getImageSize");
	HX_MARK_MEMBER_NAME(RadioButton_obj::hx_RadioButton_getType,"hx_RadioButton_getType");
	HX_MARK_MEMBER_NAME(RadioButton_obj::hx_RadioButton_isSelected,"hx_RadioButton_isSelected");
	HX_MARK_MEMBER_NAME(RadioButton_obj::hx_RadioButton_setGroupId,"hx_RadioButton_setGroupId");
	HX_MARK_MEMBER_NAME(RadioButton_obj::hx_RadioButton_setImageSize,"hx_RadioButton_setImageSize");
	HX_MARK_MEMBER_NAME(RadioButton_obj::hx_RadioButton_setSelected,"hx_RadioButton_setSelected");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RadioButton_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(RadioButton_obj::hx_RadioButton_addListener,"hx_RadioButton_addListener");
	HX_VISIT_MEMBER_NAME(RadioButton_obj::hx_RadioButton_static_create,"hx_RadioButton_static_create");
	HX_VISIT_MEMBER_NAME(RadioButton_obj::hx_RadioButton_getGroupId,"hx_RadioButton_getGroupId");
	HX_VISIT_MEMBER_NAME(RadioButton_obj::hx_RadioButton_getImageSize,"hx_RadioButton_getImageSize");
	HX_VISIT_MEMBER_NAME(RadioButton_obj::hx_RadioButton_getType,"hx_RadioButton_getType");
	HX_VISIT_MEMBER_NAME(RadioButton_obj::hx_RadioButton_isSelected,"hx_RadioButton_isSelected");
	HX_VISIT_MEMBER_NAME(RadioButton_obj::hx_RadioButton_setGroupId,"hx_RadioButton_setGroupId");
	HX_VISIT_MEMBER_NAME(RadioButton_obj::hx_RadioButton_setImageSize,"hx_RadioButton_setImageSize");
	HX_VISIT_MEMBER_NAME(RadioButton_obj::hx_RadioButton_setSelected,"hx_RadioButton_setSelected");
};

#endif

Class RadioButton_obj::__mClass;

void RadioButton_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.RadioButton"), hx::TCanCast< RadioButton_obj> ,sStaticFields,sMemberFields,
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

void RadioButton_obj::__boot()
{
	hx_RadioButton_addListener= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::RadioButton >(),HX_CSTRING("addListener"),(int)3);
	hx_RadioButton_static_create= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::RadioButton >(),HX_CSTRING("static_create"),(int)2);
	hx_RadioButton_getGroupId= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::RadioButton >(),HX_CSTRING("getGroupId"),(int)1);
	hx_RadioButton_getImageSize= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::RadioButton >(),HX_CSTRING("getImageSize"),(int)1);
	hx_RadioButton_getType= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::RadioButton >(),HX_CSTRING("getType"),(int)1);
	hx_RadioButton_isSelected= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::RadioButton >(),HX_CSTRING("isSelected"),(int)1);
	hx_RadioButton_setGroupId= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::RadioButton >(),HX_CSTRING("setGroupId"),(int)2);
	hx_RadioButton_setImageSize= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::RadioButton >(),HX_CSTRING("setImageSize"),(int)3);
	hx_RadioButton_setSelected= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::RadioButton >(),HX_CSTRING("setSelected"),(int)2);
}

} // end namespace org
} // end namespace gameplay3d
