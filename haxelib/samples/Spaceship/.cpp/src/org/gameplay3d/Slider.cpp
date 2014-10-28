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
#ifndef INCLUDED_org_gameplay3d_Slider
#include <org/gameplay3d/Slider.h>
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

Void Slider_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.Slider","new",0x5cb3d380,"org.gameplay3d.Slider.new","org/gameplay3d/Slider.hx",10,0x753efa50)
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

//Slider_obj::~Slider_obj() { }

Dynamic Slider_obj::__CreateEmpty() { return  new Slider_obj; }
hx::ObjectPtr< Slider_obj > Slider_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< Slider_obj > result = new Slider_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic Slider_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Slider_obj > result = new Slider_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Slider_obj::addListener( ::org::gameplay3d::wrapper::Control_ListenerWrapper listener,int eventFlags){
{
		HX_STACK_FRAME("org.gameplay3d.Slider","addListener",0x58565ad5,"org.gameplay3d.Slider.addListener","org/gameplay3d/Slider.hx",19,0x753efa50)
		HX_STACK_THIS(this)
		HX_STACK_ARG(listener,"listener")
		HX_STACK_ARG(eventFlags,"eventFlags")
		HX_STACK_LINE(19)
		::org::gameplay3d::Slider_obj::hx_Slider_addListener(this->nativeObject,(  (((listener == null()))) ? Dynamic(null()) : Dynamic(listener->nativeObject) ),eventFlags);
	}
return null();
}


Float Slider_obj::getMax( ){
	HX_STACK_FRAME("org.gameplay3d.Slider","getMax",0x538cf48e,"org.gameplay3d.Slider.getMax","org/gameplay3d/Slider.hx",31,0x753efa50)
	HX_STACK_THIS(this)
	HX_STACK_LINE(31)
	return ::org::gameplay3d::Slider_obj::hx_Slider_getMax(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Slider_obj,getMax,return )

Float Slider_obj::getMin( ){
	HX_STACK_FRAME("org.gameplay3d.Slider","getMin",0x538cfb7c,"org.gameplay3d.Slider.getMin","org/gameplay3d/Slider.hx",37,0x753efa50)
	HX_STACK_THIS(this)
	HX_STACK_LINE(37)
	return ::org::gameplay3d::Slider_obj::hx_Slider_getMin(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Slider_obj,getMin,return )

Float Slider_obj::getStep( ){
	HX_STACK_FRAME("org.gameplay3d.Slider","getStep",0xcbceaa22,"org.gameplay3d.Slider.getStep","org/gameplay3d/Slider.hx",43,0x753efa50)
	HX_STACK_THIS(this)
	HX_STACK_LINE(43)
	return ::org::gameplay3d::Slider_obj::hx_Slider_getStep(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Slider_obj,getStep,return )

::String Slider_obj::getType( ){
	HX_STACK_FRAME("org.gameplay3d.Slider","getType",0xcc7bb590,"org.gameplay3d.Slider.getType","org/gameplay3d/Slider.hx",49,0x753efa50)
	HX_STACK_THIS(this)
	HX_STACK_LINE(49)
	return ::org::gameplay3d::Slider_obj::hx_Slider_getType(this->nativeObject);
}


Float Slider_obj::getValue( ){
	HX_STACK_FRAME("org.gameplay3d.Slider","getValue",0x36b037db,"org.gameplay3d.Slider.getValue","org/gameplay3d/Slider.hx",55,0x753efa50)
	HX_STACK_THIS(this)
	HX_STACK_LINE(55)
	return ::org::gameplay3d::Slider_obj::hx_Slider_getValue(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Slider_obj,getValue,return )

int Slider_obj::getValueTextAlignment( ){
	HX_STACK_FRAME("org.gameplay3d.Slider","getValueTextAlignment",0x0c40839b,"org.gameplay3d.Slider.getValueTextAlignment","org/gameplay3d/Slider.hx",61,0x753efa50)
	HX_STACK_THIS(this)
	HX_STACK_LINE(61)
	return ::org::gameplay3d::Slider_obj::hx_Slider_getValueTextAlignment(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Slider_obj,getValueTextAlignment,return )

int Slider_obj::getValueTextPrecision( ){
	HX_STACK_FRAME("org.gameplay3d.Slider","getValueTextPrecision",0xa2ca75f6,"org.gameplay3d.Slider.getValueTextPrecision","org/gameplay3d/Slider.hx",67,0x753efa50)
	HX_STACK_THIS(this)
	HX_STACK_LINE(67)
	return ::org::gameplay3d::Slider_obj::hx_Slider_getValueTextPrecision(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Slider_obj,getValueTextPrecision,return )

bool Slider_obj::isValueTextVisible( ){
	HX_STACK_FRAME("org.gameplay3d.Slider","isValueTextVisible",0x179ffc3e,"org.gameplay3d.Slider.isValueTextVisible","org/gameplay3d/Slider.hx",73,0x753efa50)
	HX_STACK_THIS(this)
	HX_STACK_LINE(73)
	return ::org::gameplay3d::Slider_obj::hx_Slider_isValueTextVisible(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Slider_obj,isValueTextVisible,return )

Void Slider_obj::setMax( Float max){
{
		HX_STACK_FRAME("org.gameplay3d.Slider","setMax",0x1fd54902,"org.gameplay3d.Slider.setMax","org/gameplay3d/Slider.hx",79,0x753efa50)
		HX_STACK_THIS(this)
		HX_STACK_ARG(max,"max")
		HX_STACK_LINE(79)
		::org::gameplay3d::Slider_obj::hx_Slider_setMax(this->nativeObject,max);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Slider_obj,setMax,(void))

Void Slider_obj::setMin( Float min){
{
		HX_STACK_FRAME("org.gameplay3d.Slider","setMin",0x1fd54ff0,"org.gameplay3d.Slider.setMin","org/gameplay3d/Slider.hx",85,0x753efa50)
		HX_STACK_THIS(this)
		HX_STACK_ARG(min,"min")
		HX_STACK_LINE(85)
		::org::gameplay3d::Slider_obj::hx_Slider_setMin(this->nativeObject,min);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Slider_obj,setMin,(void))

Void Slider_obj::setStep( Float step){
{
		HX_STACK_FRAME("org.gameplay3d.Slider","setStep",0xbed03b2e,"org.gameplay3d.Slider.setStep","org/gameplay3d/Slider.hx",91,0x753efa50)
		HX_STACK_THIS(this)
		HX_STACK_ARG(step,"step")
		HX_STACK_LINE(91)
		::org::gameplay3d::Slider_obj::hx_Slider_setStep(this->nativeObject,step);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Slider_obj,setStep,(void))

Void Slider_obj::setValue( Float value){
{
		HX_STACK_FRAME("org.gameplay3d.Slider","setValue",0xe50d914f,"org.gameplay3d.Slider.setValue","org/gameplay3d/Slider.hx",97,0x753efa50)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(97)
		::org::gameplay3d::Slider_obj::hx_Slider_setValue(this->nativeObject,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Slider_obj,setValue,(void))

Void Slider_obj::setValueTextAlignment( int alignment){
{
		HX_STACK_FRAME("org.gameplay3d.Slider","setValueTextAlignment",0x604951a7,"org.gameplay3d.Slider.setValueTextAlignment","org/gameplay3d/Slider.hx",103,0x753efa50)
		HX_STACK_THIS(this)
		HX_STACK_ARG(alignment,"alignment")
		HX_STACK_LINE(103)
		::org::gameplay3d::Slider_obj::hx_Slider_setValueTextAlignment(this->nativeObject,alignment);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Slider_obj,setValueTextAlignment,(void))

Void Slider_obj::setValueTextPrecision( int precision){
{
		HX_STACK_FRAME("org.gameplay3d.Slider","setValueTextPrecision",0xf6d34402,"org.gameplay3d.Slider.setValueTextPrecision","org/gameplay3d/Slider.hx",109,0x753efa50)
		HX_STACK_THIS(this)
		HX_STACK_ARG(precision,"precision")
		HX_STACK_LINE(109)
		::org::gameplay3d::Slider_obj::hx_Slider_setValueTextPrecision(this->nativeObject,precision);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Slider_obj,setValueTextPrecision,(void))

Void Slider_obj::setValueTextVisible( bool visible){
{
		HX_STACK_FRAME("org.gameplay3d.Slider","setValueTextVisible",0xe613ee36,"org.gameplay3d.Slider.setValueTextVisible","org/gameplay3d/Slider.hx",115,0x753efa50)
		HX_STACK_THIS(this)
		HX_STACK_ARG(visible,"visible")
		HX_STACK_LINE(115)
		::org::gameplay3d::Slider_obj::hx_Slider_setValueTextVisible(this->nativeObject,visible);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Slider_obj,setValueTextVisible,(void))

::org::gameplay3d::Slider Slider_obj::create( ::String id,::org::gameplay3d::Theme_Style style){
	HX_STACK_FRAME("org.gameplay3d.Slider","create",0x2c7a17dc,"org.gameplay3d.Slider.create","org/gameplay3d/Slider.hx",25,0x753efa50)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(style,"style")
	HX_STACK_LINE(25)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Slider >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(25)
	Dynamic nativeObject = ::org::gameplay3d::Slider_obj::hx_Slider_static_create(id,(  (((style == null()))) ? Dynamic(null()) : Dynamic(style->nativeObject) ));		HX_STACK_VAR(nativeObject,"nativeObject");
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
			::org::gameplay3d::Slider result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(25)
			if (((result == null()))){
				HX_STACK_LINE(25)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(25)
				::org::gameplay3d::Slider _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Slider_obj,create,return )

Dynamic Slider_obj::hx_Slider_addListener;

Dynamic Slider_obj::hx_Slider_static_create;

Dynamic Slider_obj::hx_Slider_getMax;

Dynamic Slider_obj::hx_Slider_getMin;

Dynamic Slider_obj::hx_Slider_getStep;

Dynamic Slider_obj::hx_Slider_getType;

Dynamic Slider_obj::hx_Slider_getValue;

Dynamic Slider_obj::hx_Slider_getValueTextAlignment;

Dynamic Slider_obj::hx_Slider_getValueTextPrecision;

Dynamic Slider_obj::hx_Slider_isValueTextVisible;

Dynamic Slider_obj::hx_Slider_setMax;

Dynamic Slider_obj::hx_Slider_setMin;

Dynamic Slider_obj::hx_Slider_setStep;

Dynamic Slider_obj::hx_Slider_setValue;

Dynamic Slider_obj::hx_Slider_setValueTextAlignment;

Dynamic Slider_obj::hx_Slider_setValueTextPrecision;

Dynamic Slider_obj::hx_Slider_setValueTextVisible;


Slider_obj::Slider_obj()
{
}

Dynamic Slider_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"getMax") ) { return getMax_dyn(); }
		if (HX_FIELD_EQ(inName,"getMin") ) { return getMin_dyn(); }
		if (HX_FIELD_EQ(inName,"setMax") ) { return setMax_dyn(); }
		if (HX_FIELD_EQ(inName,"setMin") ) { return setMin_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getStep") ) { return getStep_dyn(); }
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
		if (HX_FIELD_EQ(inName,"setStep") ) { return setStep_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getValue") ) { return getValue_dyn(); }
		if (HX_FIELD_EQ(inName,"setValue") ) { return setValue_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addListener") ) { return addListener_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hx_Slider_getMax") ) { return hx_Slider_getMax; }
		if (HX_FIELD_EQ(inName,"hx_Slider_getMin") ) { return hx_Slider_getMin; }
		if (HX_FIELD_EQ(inName,"hx_Slider_setMax") ) { return hx_Slider_setMax; }
		if (HX_FIELD_EQ(inName,"hx_Slider_setMin") ) { return hx_Slider_setMin; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"hx_Slider_getStep") ) { return hx_Slider_getStep; }
		if (HX_FIELD_EQ(inName,"hx_Slider_getType") ) { return hx_Slider_getType; }
		if (HX_FIELD_EQ(inName,"hx_Slider_setStep") ) { return hx_Slider_setStep; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hx_Slider_getValue") ) { return hx_Slider_getValue; }
		if (HX_FIELD_EQ(inName,"hx_Slider_setValue") ) { return hx_Slider_setValue; }
		if (HX_FIELD_EQ(inName,"isValueTextVisible") ) { return isValueTextVisible_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"setValueTextVisible") ) { return setValueTextVisible_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hx_Slider_addListener") ) { return hx_Slider_addListener; }
		if (HX_FIELD_EQ(inName,"getValueTextAlignment") ) { return getValueTextAlignment_dyn(); }
		if (HX_FIELD_EQ(inName,"getValueTextPrecision") ) { return getValueTextPrecision_dyn(); }
		if (HX_FIELD_EQ(inName,"setValueTextAlignment") ) { return setValueTextAlignment_dyn(); }
		if (HX_FIELD_EQ(inName,"setValueTextPrecision") ) { return setValueTextPrecision_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_Slider_static_create") ) { return hx_Slider_static_create; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_Slider_isValueTextVisible") ) { return hx_Slider_isValueTextVisible; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_Slider_setValueTextVisible") ) { return hx_Slider_setValueTextVisible; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"hx_Slider_getValueTextAlignment") ) { return hx_Slider_getValueTextAlignment; }
		if (HX_FIELD_EQ(inName,"hx_Slider_getValueTextPrecision") ) { return hx_Slider_getValueTextPrecision; }
		if (HX_FIELD_EQ(inName,"hx_Slider_setValueTextAlignment") ) { return hx_Slider_setValueTextAlignment; }
		if (HX_FIELD_EQ(inName,"hx_Slider_setValueTextPrecision") ) { return hx_Slider_setValueTextPrecision; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Slider_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"hx_Slider_getMax") ) { hx_Slider_getMax=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Slider_getMin") ) { hx_Slider_getMin=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Slider_setMax") ) { hx_Slider_setMax=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Slider_setMin") ) { hx_Slider_setMin=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"hx_Slider_getStep") ) { hx_Slider_getStep=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Slider_getType") ) { hx_Slider_getType=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Slider_setStep") ) { hx_Slider_setStep=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hx_Slider_getValue") ) { hx_Slider_getValue=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Slider_setValue") ) { hx_Slider_setValue=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hx_Slider_addListener") ) { hx_Slider_addListener=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_Slider_static_create") ) { hx_Slider_static_create=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_Slider_isValueTextVisible") ) { hx_Slider_isValueTextVisible=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_Slider_setValueTextVisible") ) { hx_Slider_setValueTextVisible=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"hx_Slider_getValueTextAlignment") ) { hx_Slider_getValueTextAlignment=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Slider_getValueTextPrecision") ) { hx_Slider_getValueTextPrecision=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Slider_setValueTextAlignment") ) { hx_Slider_setValueTextAlignment=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Slider_setValueTextPrecision") ) { hx_Slider_setValueTextPrecision=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Slider_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create"),
	HX_CSTRING("hx_Slider_addListener"),
	HX_CSTRING("hx_Slider_static_create"),
	HX_CSTRING("hx_Slider_getMax"),
	HX_CSTRING("hx_Slider_getMin"),
	HX_CSTRING("hx_Slider_getStep"),
	HX_CSTRING("hx_Slider_getType"),
	HX_CSTRING("hx_Slider_getValue"),
	HX_CSTRING("hx_Slider_getValueTextAlignment"),
	HX_CSTRING("hx_Slider_getValueTextPrecision"),
	HX_CSTRING("hx_Slider_isValueTextVisible"),
	HX_CSTRING("hx_Slider_setMax"),
	HX_CSTRING("hx_Slider_setMin"),
	HX_CSTRING("hx_Slider_setStep"),
	HX_CSTRING("hx_Slider_setValue"),
	HX_CSTRING("hx_Slider_setValueTextAlignment"),
	HX_CSTRING("hx_Slider_setValueTextPrecision"),
	HX_CSTRING("hx_Slider_setValueTextVisible"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("addListener"),
	HX_CSTRING("getMax"),
	HX_CSTRING("getMin"),
	HX_CSTRING("getStep"),
	HX_CSTRING("getType"),
	HX_CSTRING("getValue"),
	HX_CSTRING("getValueTextAlignment"),
	HX_CSTRING("getValueTextPrecision"),
	HX_CSTRING("isValueTextVisible"),
	HX_CSTRING("setMax"),
	HX_CSTRING("setMin"),
	HX_CSTRING("setStep"),
	HX_CSTRING("setValue"),
	HX_CSTRING("setValueTextAlignment"),
	HX_CSTRING("setValueTextPrecision"),
	HX_CSTRING("setValueTextVisible"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Slider_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Slider_obj::hx_Slider_addListener,"hx_Slider_addListener");
	HX_MARK_MEMBER_NAME(Slider_obj::hx_Slider_static_create,"hx_Slider_static_create");
	HX_MARK_MEMBER_NAME(Slider_obj::hx_Slider_getMax,"hx_Slider_getMax");
	HX_MARK_MEMBER_NAME(Slider_obj::hx_Slider_getMin,"hx_Slider_getMin");
	HX_MARK_MEMBER_NAME(Slider_obj::hx_Slider_getStep,"hx_Slider_getStep");
	HX_MARK_MEMBER_NAME(Slider_obj::hx_Slider_getType,"hx_Slider_getType");
	HX_MARK_MEMBER_NAME(Slider_obj::hx_Slider_getValue,"hx_Slider_getValue");
	HX_MARK_MEMBER_NAME(Slider_obj::hx_Slider_getValueTextAlignment,"hx_Slider_getValueTextAlignment");
	HX_MARK_MEMBER_NAME(Slider_obj::hx_Slider_getValueTextPrecision,"hx_Slider_getValueTextPrecision");
	HX_MARK_MEMBER_NAME(Slider_obj::hx_Slider_isValueTextVisible,"hx_Slider_isValueTextVisible");
	HX_MARK_MEMBER_NAME(Slider_obj::hx_Slider_setMax,"hx_Slider_setMax");
	HX_MARK_MEMBER_NAME(Slider_obj::hx_Slider_setMin,"hx_Slider_setMin");
	HX_MARK_MEMBER_NAME(Slider_obj::hx_Slider_setStep,"hx_Slider_setStep");
	HX_MARK_MEMBER_NAME(Slider_obj::hx_Slider_setValue,"hx_Slider_setValue");
	HX_MARK_MEMBER_NAME(Slider_obj::hx_Slider_setValueTextAlignment,"hx_Slider_setValueTextAlignment");
	HX_MARK_MEMBER_NAME(Slider_obj::hx_Slider_setValueTextPrecision,"hx_Slider_setValueTextPrecision");
	HX_MARK_MEMBER_NAME(Slider_obj::hx_Slider_setValueTextVisible,"hx_Slider_setValueTextVisible");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Slider_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Slider_obj::hx_Slider_addListener,"hx_Slider_addListener");
	HX_VISIT_MEMBER_NAME(Slider_obj::hx_Slider_static_create,"hx_Slider_static_create");
	HX_VISIT_MEMBER_NAME(Slider_obj::hx_Slider_getMax,"hx_Slider_getMax");
	HX_VISIT_MEMBER_NAME(Slider_obj::hx_Slider_getMin,"hx_Slider_getMin");
	HX_VISIT_MEMBER_NAME(Slider_obj::hx_Slider_getStep,"hx_Slider_getStep");
	HX_VISIT_MEMBER_NAME(Slider_obj::hx_Slider_getType,"hx_Slider_getType");
	HX_VISIT_MEMBER_NAME(Slider_obj::hx_Slider_getValue,"hx_Slider_getValue");
	HX_VISIT_MEMBER_NAME(Slider_obj::hx_Slider_getValueTextAlignment,"hx_Slider_getValueTextAlignment");
	HX_VISIT_MEMBER_NAME(Slider_obj::hx_Slider_getValueTextPrecision,"hx_Slider_getValueTextPrecision");
	HX_VISIT_MEMBER_NAME(Slider_obj::hx_Slider_isValueTextVisible,"hx_Slider_isValueTextVisible");
	HX_VISIT_MEMBER_NAME(Slider_obj::hx_Slider_setMax,"hx_Slider_setMax");
	HX_VISIT_MEMBER_NAME(Slider_obj::hx_Slider_setMin,"hx_Slider_setMin");
	HX_VISIT_MEMBER_NAME(Slider_obj::hx_Slider_setStep,"hx_Slider_setStep");
	HX_VISIT_MEMBER_NAME(Slider_obj::hx_Slider_setValue,"hx_Slider_setValue");
	HX_VISIT_MEMBER_NAME(Slider_obj::hx_Slider_setValueTextAlignment,"hx_Slider_setValueTextAlignment");
	HX_VISIT_MEMBER_NAME(Slider_obj::hx_Slider_setValueTextPrecision,"hx_Slider_setValueTextPrecision");
	HX_VISIT_MEMBER_NAME(Slider_obj::hx_Slider_setValueTextVisible,"hx_Slider_setValueTextVisible");
};

#endif

Class Slider_obj::__mClass;

void Slider_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.Slider"), hx::TCanCast< Slider_obj> ,sStaticFields,sMemberFields,
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

void Slider_obj::__boot()
{
	hx_Slider_addListener= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Slider >(),HX_CSTRING("addListener"),(int)3);
	hx_Slider_static_create= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Slider >(),HX_CSTRING("static_create"),(int)2);
	hx_Slider_getMax= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Slider >(),HX_CSTRING("getMax"),(int)1);
	hx_Slider_getMin= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Slider >(),HX_CSTRING("getMin"),(int)1);
	hx_Slider_getStep= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Slider >(),HX_CSTRING("getStep"),(int)1);
	hx_Slider_getType= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Slider >(),HX_CSTRING("getType"),(int)1);
	hx_Slider_getValue= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Slider >(),HX_CSTRING("getValue"),(int)1);
	hx_Slider_getValueTextAlignment= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Slider >(),HX_CSTRING("getValueTextAlignment"),(int)1);
	hx_Slider_getValueTextPrecision= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Slider >(),HX_CSTRING("getValueTextPrecision"),(int)1);
	hx_Slider_isValueTextVisible= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Slider >(),HX_CSTRING("isValueTextVisible"),(int)1);
	hx_Slider_setMax= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Slider >(),HX_CSTRING("setMax"),(int)2);
	hx_Slider_setMin= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Slider >(),HX_CSTRING("setMin"),(int)2);
	hx_Slider_setStep= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Slider >(),HX_CSTRING("setStep"),(int)2);
	hx_Slider_setValue= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Slider >(),HX_CSTRING("setValue"),(int)2);
	hx_Slider_setValueTextAlignment= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Slider >(),HX_CSTRING("setValueTextAlignment"),(int)2);
	hx_Slider_setValueTextPrecision= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Slider >(),HX_CSTRING("setValueTextPrecision"),(int)2);
	hx_Slider_setValueTextVisible= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Slider >(),HX_CSTRING("setValueTextVisible"),(int)2);
}

} // end namespace org
} // end namespace gameplay3d
