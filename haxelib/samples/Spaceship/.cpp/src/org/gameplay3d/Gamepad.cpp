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
#ifndef INCLUDED_org_gameplay3d_Container
#include <org/gameplay3d/Container.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Control
#include <org/gameplay3d/Control.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Form
#include <org/gameplay3d/Form.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Gamepad
#include <org/gameplay3d/Gamepad.h>
#endif
#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Ref
#include <org/gameplay3d/Ref.h>
#endif
#ifndef INCLUDED_org_gameplay3d_ScriptTarget
#include <org/gameplay3d/ScriptTarget.h>
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
#ifndef INCLUDED_org_gameplay3d_intern_impl_AnimationTarget_ScriptTarget
#include <org/gameplay3d/intern/impl/AnimationTarget_ScriptTarget.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_NativeInterface
#include <org/gameplay3d/util/NativeInterface.h>
#endif
namespace org{
namespace gameplay3d{

Void Gamepad_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.Gamepad","new",0xe2b48d86,"org.gameplay3d.Gamepad.new","org/gameplay3d/Gamepad.hx",10,0xdc00ba4a)
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

//Gamepad_obj::~Gamepad_obj() { }

Dynamic Gamepad_obj::__CreateEmpty() { return  new Gamepad_obj; }
hx::ObjectPtr< Gamepad_obj > Gamepad_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< Gamepad_obj > result = new Gamepad_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic Gamepad_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Gamepad_obj > result = new Gamepad_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Gamepad_obj::draw( ){
{
		HX_STACK_FRAME("org.gameplay3d.Gamepad","draw",0x74b4f01e,"org.gameplay3d.Gamepad.draw","org/gameplay3d/Gamepad.hx",19,0xdc00ba4a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(19)
		::org::gameplay3d::Gamepad_obj::hx_Gamepad_draw(this->nativeObject);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Gamepad_obj,draw,(void))

int Gamepad_obj::getButtonCount( ){
	HX_STACK_FRAME("org.gameplay3d.Gamepad","getButtonCount",0xafa50121,"org.gameplay3d.Gamepad.getButtonCount","org/gameplay3d/Gamepad.hx",25,0xdc00ba4a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(25)
	return ::org::gameplay3d::Gamepad_obj::hx_Gamepad_getButtonCount(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Gamepad_obj,getButtonCount,return )

::org::gameplay3d::Form Gamepad_obj::getForm( ){
	HX_STACK_FRAME("org.gameplay3d.Gamepad","getForm",0x45805920,"org.gameplay3d.Gamepad.getForm","org/gameplay3d/Gamepad.hx",31,0xdc00ba4a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(31)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Form >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(31)
	Dynamic nativeObject = ::org::gameplay3d::Gamepad_obj::hx_Gamepad_getForm(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(31)
	if (((nativeObject == null()))){
		HX_STACK_LINE(31)
		return null();
	}
	else{
		HX_STACK_LINE(31)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(31)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(31)
			::org::gameplay3d::Form result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(31)
			if (((result == null()))){
				HX_STACK_LINE(31)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(31)
				::org::gameplay3d::Form _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(31)
				result = _g;
				HX_STACK_LINE(31)
				ref->set(result);
			}
			HX_STACK_LINE(31)
			return result;
		}
		else{
			HX_STACK_LINE(31)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(31)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(31)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Gamepad_obj,getForm,return )

int Gamepad_obj::getJoystickCount( ){
	HX_STACK_FRAME("org.gameplay3d.Gamepad","getJoystickCount",0xdbf2d717,"org.gameplay3d.Gamepad.getJoystickCount","org/gameplay3d/Gamepad.hx",37,0xdc00ba4a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(37)
	return ::org::gameplay3d::Gamepad_obj::hx_Gamepad_getJoystickCount(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Gamepad_obj,getJoystickCount,return )

Void Gamepad_obj::getJoystickValues( int joystickId,::org::gameplay3d::Vector2 outValues){
{
		HX_STACK_FRAME("org.gameplay3d.Gamepad","getJoystickValues",0x1bc7709a,"org.gameplay3d.Gamepad.getJoystickValues","org/gameplay3d/Gamepad.hx",43,0xdc00ba4a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(joystickId,"joystickId")
		HX_STACK_ARG(outValues,"outValues")
		HX_STACK_LINE(43)
		::org::gameplay3d::Gamepad_obj::hx_Gamepad_getJoystickValues(this->nativeObject,joystickId,(  (((outValues == null()))) ? Dynamic(null()) : Dynamic(outValues->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Gamepad_obj,getJoystickValues,(void))

int Gamepad_obj::getProductId( ){
	HX_STACK_FRAME("org.gameplay3d.Gamepad","getProductId",0xcbc1a38e,"org.gameplay3d.Gamepad.getProductId","org/gameplay3d/Gamepad.hx",49,0xdc00ba4a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(49)
	return ::org::gameplay3d::Gamepad_obj::hx_Gamepad_getProductId(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Gamepad_obj,getProductId,return )

::String Gamepad_obj::getProductString( ){
	HX_STACK_FRAME("org.gameplay3d.Gamepad","getProductString",0xd55ac604,"org.gameplay3d.Gamepad.getProductString","org/gameplay3d/Gamepad.hx",55,0xdc00ba4a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(55)
	return ::org::gameplay3d::Gamepad_obj::hx_Gamepad_getProductString(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Gamepad_obj,getProductString,return )

int Gamepad_obj::getTriggerCount( ){
	HX_STACK_FRAME("org.gameplay3d.Gamepad","getTriggerCount",0x557ea853,"org.gameplay3d.Gamepad.getTriggerCount","org/gameplay3d/Gamepad.hx",61,0xdc00ba4a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(61)
	return ::org::gameplay3d::Gamepad_obj::hx_Gamepad_getTriggerCount(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Gamepad_obj,getTriggerCount,return )

Float Gamepad_obj::getTriggerValue( int triggerId){
	HX_STACK_FRAME("org.gameplay3d.Gamepad","getTriggerValue",0x3cd3e2f5,"org.gameplay3d.Gamepad.getTriggerValue","org/gameplay3d/Gamepad.hx",67,0xdc00ba4a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(triggerId,"triggerId")
	HX_STACK_LINE(67)
	return ::org::gameplay3d::Gamepad_obj::hx_Gamepad_getTriggerValue(this->nativeObject,triggerId);
}


HX_DEFINE_DYNAMIC_FUNC1(Gamepad_obj,getTriggerValue,return )

int Gamepad_obj::getVendorId( ){
	HX_STACK_FRAME("org.gameplay3d.Gamepad","getVendorId",0x90f0ad5f,"org.gameplay3d.Gamepad.getVendorId","org/gameplay3d/Gamepad.hx",73,0xdc00ba4a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(73)
	return ::org::gameplay3d::Gamepad_obj::hx_Gamepad_getVendorId(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Gamepad_obj,getVendorId,return )

::String Gamepad_obj::getVendorString( ){
	HX_STACK_FRAME("org.gameplay3d.Gamepad","getVendorString",0x50018c55,"org.gameplay3d.Gamepad.getVendorString","org/gameplay3d/Gamepad.hx",79,0xdc00ba4a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(79)
	return ::org::gameplay3d::Gamepad_obj::hx_Gamepad_getVendorString(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Gamepad_obj,getVendorString,return )

bool Gamepad_obj::isButtonDown( int button){
	HX_STACK_FRAME("org.gameplay3d.Gamepad","isButtonDown",0xd5b0fe18,"org.gameplay3d.Gamepad.isButtonDown","org/gameplay3d/Gamepad.hx",85,0xdc00ba4a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(button,"button")
	HX_STACK_LINE(85)
	return ::org::gameplay3d::Gamepad_obj::hx_Gamepad_isButtonDown(this->nativeObject,button);
}


HX_DEFINE_DYNAMIC_FUNC1(Gamepad_obj,isButtonDown,return )

bool Gamepad_obj::isVirtual( ){
	HX_STACK_FRAME("org.gameplay3d.Gamepad","isVirtual",0x8a4c38e7,"org.gameplay3d.Gamepad.isVirtual","org/gameplay3d/Gamepad.hx",91,0xdc00ba4a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(91)
	return ::org::gameplay3d::Gamepad_obj::hx_Gamepad_isVirtual(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Gamepad_obj,isVirtual,return )

Void Gamepad_obj::update( Float elapsedTime){
{
		HX_STACK_FRAME("org.gameplay3d.Gamepad","update",0x671704a3,"org.gameplay3d.Gamepad.update","org/gameplay3d/Gamepad.hx",97,0xdc00ba4a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsedTime,"elapsedTime")
		HX_STACK_LINE(97)
		::org::gameplay3d::Gamepad_obj::hx_Gamepad_update(this->nativeObject,elapsedTime);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Gamepad_obj,update,(void))

Dynamic Gamepad_obj::hx_Gamepad_draw;

Dynamic Gamepad_obj::hx_Gamepad_getButtonCount;

Dynamic Gamepad_obj::hx_Gamepad_getForm;

Dynamic Gamepad_obj::hx_Gamepad_getJoystickCount;

Dynamic Gamepad_obj::hx_Gamepad_getJoystickValues;

Dynamic Gamepad_obj::hx_Gamepad_getProductId;

Dynamic Gamepad_obj::hx_Gamepad_getProductString;

Dynamic Gamepad_obj::hx_Gamepad_getTriggerCount;

Dynamic Gamepad_obj::hx_Gamepad_getTriggerValue;

Dynamic Gamepad_obj::hx_Gamepad_getVendorId;

Dynamic Gamepad_obj::hx_Gamepad_getVendorString;

Dynamic Gamepad_obj::hx_Gamepad_isButtonDown;

Dynamic Gamepad_obj::hx_Gamepad_isVirtual;

Dynamic Gamepad_obj::hx_Gamepad_update;


Gamepad_obj::Gamepad_obj()
{
}

Dynamic Gamepad_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getForm") ) { return getForm_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isVirtual") ) { return isVirtual_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getVendorId") ) { return getVendorId_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getProductId") ) { return getProductId_dyn(); }
		if (HX_FIELD_EQ(inName,"isButtonDown") ) { return isButtonDown_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getButtonCount") ) { return getButtonCount_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hx_Gamepad_draw") ) { return hx_Gamepad_draw; }
		if (HX_FIELD_EQ(inName,"getTriggerCount") ) { return getTriggerCount_dyn(); }
		if (HX_FIELD_EQ(inName,"getTriggerValue") ) { return getTriggerValue_dyn(); }
		if (HX_FIELD_EQ(inName,"getVendorString") ) { return getVendorString_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getJoystickCount") ) { return getJoystickCount_dyn(); }
		if (HX_FIELD_EQ(inName,"getProductString") ) { return getProductString_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"hx_Gamepad_update") ) { return hx_Gamepad_update; }
		if (HX_FIELD_EQ(inName,"getJoystickValues") ) { return getJoystickValues_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hx_Gamepad_getForm") ) { return hx_Gamepad_getForm; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Gamepad_isVirtual") ) { return hx_Gamepad_isVirtual; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Gamepad_getVendorId") ) { return hx_Gamepad_getVendorId; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_Gamepad_getProductId") ) { return hx_Gamepad_getProductId; }
		if (HX_FIELD_EQ(inName,"hx_Gamepad_isButtonDown") ) { return hx_Gamepad_isButtonDown; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_Gamepad_getButtonCount") ) { return hx_Gamepad_getButtonCount; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_Gamepad_getTriggerCount") ) { return hx_Gamepad_getTriggerCount; }
		if (HX_FIELD_EQ(inName,"hx_Gamepad_getTriggerValue") ) { return hx_Gamepad_getTriggerValue; }
		if (HX_FIELD_EQ(inName,"hx_Gamepad_getVendorString") ) { return hx_Gamepad_getVendorString; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"hx_Gamepad_getJoystickCount") ) { return hx_Gamepad_getJoystickCount; }
		if (HX_FIELD_EQ(inName,"hx_Gamepad_getProductString") ) { return hx_Gamepad_getProductString; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_Gamepad_getJoystickValues") ) { return hx_Gamepad_getJoystickValues; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Gamepad_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"hx_Gamepad_draw") ) { hx_Gamepad_draw=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"hx_Gamepad_update") ) { hx_Gamepad_update=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hx_Gamepad_getForm") ) { hx_Gamepad_getForm=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Gamepad_isVirtual") ) { hx_Gamepad_isVirtual=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Gamepad_getVendorId") ) { hx_Gamepad_getVendorId=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_Gamepad_getProductId") ) { hx_Gamepad_getProductId=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Gamepad_isButtonDown") ) { hx_Gamepad_isButtonDown=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_Gamepad_getButtonCount") ) { hx_Gamepad_getButtonCount=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_Gamepad_getTriggerCount") ) { hx_Gamepad_getTriggerCount=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Gamepad_getTriggerValue") ) { hx_Gamepad_getTriggerValue=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Gamepad_getVendorString") ) { hx_Gamepad_getVendorString=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"hx_Gamepad_getJoystickCount") ) { hx_Gamepad_getJoystickCount=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Gamepad_getProductString") ) { hx_Gamepad_getProductString=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_Gamepad_getJoystickValues") ) { hx_Gamepad_getJoystickValues=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Gamepad_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("hx_Gamepad_draw"),
	HX_CSTRING("hx_Gamepad_getButtonCount"),
	HX_CSTRING("hx_Gamepad_getForm"),
	HX_CSTRING("hx_Gamepad_getJoystickCount"),
	HX_CSTRING("hx_Gamepad_getJoystickValues"),
	HX_CSTRING("hx_Gamepad_getProductId"),
	HX_CSTRING("hx_Gamepad_getProductString"),
	HX_CSTRING("hx_Gamepad_getTriggerCount"),
	HX_CSTRING("hx_Gamepad_getTriggerValue"),
	HX_CSTRING("hx_Gamepad_getVendorId"),
	HX_CSTRING("hx_Gamepad_getVendorString"),
	HX_CSTRING("hx_Gamepad_isButtonDown"),
	HX_CSTRING("hx_Gamepad_isVirtual"),
	HX_CSTRING("hx_Gamepad_update"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("draw"),
	HX_CSTRING("getButtonCount"),
	HX_CSTRING("getForm"),
	HX_CSTRING("getJoystickCount"),
	HX_CSTRING("getJoystickValues"),
	HX_CSTRING("getProductId"),
	HX_CSTRING("getProductString"),
	HX_CSTRING("getTriggerCount"),
	HX_CSTRING("getTriggerValue"),
	HX_CSTRING("getVendorId"),
	HX_CSTRING("getVendorString"),
	HX_CSTRING("isButtonDown"),
	HX_CSTRING("isVirtual"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Gamepad_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Gamepad_obj::hx_Gamepad_draw,"hx_Gamepad_draw");
	HX_MARK_MEMBER_NAME(Gamepad_obj::hx_Gamepad_getButtonCount,"hx_Gamepad_getButtonCount");
	HX_MARK_MEMBER_NAME(Gamepad_obj::hx_Gamepad_getForm,"hx_Gamepad_getForm");
	HX_MARK_MEMBER_NAME(Gamepad_obj::hx_Gamepad_getJoystickCount,"hx_Gamepad_getJoystickCount");
	HX_MARK_MEMBER_NAME(Gamepad_obj::hx_Gamepad_getJoystickValues,"hx_Gamepad_getJoystickValues");
	HX_MARK_MEMBER_NAME(Gamepad_obj::hx_Gamepad_getProductId,"hx_Gamepad_getProductId");
	HX_MARK_MEMBER_NAME(Gamepad_obj::hx_Gamepad_getProductString,"hx_Gamepad_getProductString");
	HX_MARK_MEMBER_NAME(Gamepad_obj::hx_Gamepad_getTriggerCount,"hx_Gamepad_getTriggerCount");
	HX_MARK_MEMBER_NAME(Gamepad_obj::hx_Gamepad_getTriggerValue,"hx_Gamepad_getTriggerValue");
	HX_MARK_MEMBER_NAME(Gamepad_obj::hx_Gamepad_getVendorId,"hx_Gamepad_getVendorId");
	HX_MARK_MEMBER_NAME(Gamepad_obj::hx_Gamepad_getVendorString,"hx_Gamepad_getVendorString");
	HX_MARK_MEMBER_NAME(Gamepad_obj::hx_Gamepad_isButtonDown,"hx_Gamepad_isButtonDown");
	HX_MARK_MEMBER_NAME(Gamepad_obj::hx_Gamepad_isVirtual,"hx_Gamepad_isVirtual");
	HX_MARK_MEMBER_NAME(Gamepad_obj::hx_Gamepad_update,"hx_Gamepad_update");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Gamepad_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Gamepad_obj::hx_Gamepad_draw,"hx_Gamepad_draw");
	HX_VISIT_MEMBER_NAME(Gamepad_obj::hx_Gamepad_getButtonCount,"hx_Gamepad_getButtonCount");
	HX_VISIT_MEMBER_NAME(Gamepad_obj::hx_Gamepad_getForm,"hx_Gamepad_getForm");
	HX_VISIT_MEMBER_NAME(Gamepad_obj::hx_Gamepad_getJoystickCount,"hx_Gamepad_getJoystickCount");
	HX_VISIT_MEMBER_NAME(Gamepad_obj::hx_Gamepad_getJoystickValues,"hx_Gamepad_getJoystickValues");
	HX_VISIT_MEMBER_NAME(Gamepad_obj::hx_Gamepad_getProductId,"hx_Gamepad_getProductId");
	HX_VISIT_MEMBER_NAME(Gamepad_obj::hx_Gamepad_getProductString,"hx_Gamepad_getProductString");
	HX_VISIT_MEMBER_NAME(Gamepad_obj::hx_Gamepad_getTriggerCount,"hx_Gamepad_getTriggerCount");
	HX_VISIT_MEMBER_NAME(Gamepad_obj::hx_Gamepad_getTriggerValue,"hx_Gamepad_getTriggerValue");
	HX_VISIT_MEMBER_NAME(Gamepad_obj::hx_Gamepad_getVendorId,"hx_Gamepad_getVendorId");
	HX_VISIT_MEMBER_NAME(Gamepad_obj::hx_Gamepad_getVendorString,"hx_Gamepad_getVendorString");
	HX_VISIT_MEMBER_NAME(Gamepad_obj::hx_Gamepad_isButtonDown,"hx_Gamepad_isButtonDown");
	HX_VISIT_MEMBER_NAME(Gamepad_obj::hx_Gamepad_isVirtual,"hx_Gamepad_isVirtual");
	HX_VISIT_MEMBER_NAME(Gamepad_obj::hx_Gamepad_update,"hx_Gamepad_update");
};

#endif

Class Gamepad_obj::__mClass;

void Gamepad_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.Gamepad"), hx::TCanCast< Gamepad_obj> ,sStaticFields,sMemberFields,
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

void Gamepad_obj::__boot()
{
	hx_Gamepad_draw= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Gamepad >(),HX_CSTRING("draw"),(int)1);
	hx_Gamepad_getButtonCount= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Gamepad >(),HX_CSTRING("getButtonCount"),(int)1);
	hx_Gamepad_getForm= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Gamepad >(),HX_CSTRING("getForm"),(int)1);
	hx_Gamepad_getJoystickCount= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Gamepad >(),HX_CSTRING("getJoystickCount"),(int)1);
	hx_Gamepad_getJoystickValues= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Gamepad >(),HX_CSTRING("getJoystickValues"),(int)3);
	hx_Gamepad_getProductId= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Gamepad >(),HX_CSTRING("getProductId"),(int)1);
	hx_Gamepad_getProductString= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Gamepad >(),HX_CSTRING("getProductString"),(int)1);
	hx_Gamepad_getTriggerCount= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Gamepad >(),HX_CSTRING("getTriggerCount"),(int)1);
	hx_Gamepad_getTriggerValue= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Gamepad >(),HX_CSTRING("getTriggerValue"),(int)2);
	hx_Gamepad_getVendorId= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Gamepad >(),HX_CSTRING("getVendorId"),(int)1);
	hx_Gamepad_getVendorString= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Gamepad >(),HX_CSTRING("getVendorString"),(int)1);
	hx_Gamepad_isButtonDown= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Gamepad >(),HX_CSTRING("isButtonDown"),(int)2);
	hx_Gamepad_isVirtual= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Gamepad >(),HX_CSTRING("isVirtual"),(int)1);
	hx_Gamepad_update= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Gamepad >(),HX_CSTRING("update"),(int)2);
}

} // end namespace org
} // end namespace gameplay3d
