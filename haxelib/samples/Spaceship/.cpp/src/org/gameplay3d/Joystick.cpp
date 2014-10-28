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
#ifndef INCLUDED_org_gameplay3d_Joystick
#include <org/gameplay3d/Joystick.h>
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

Void Joystick_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.Joystick","new",0x99a56cdb,"org.gameplay3d.Joystick.new","org/gameplay3d/Joystick.hx",11,0x1d535d55)
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

//Joystick_obj::~Joystick_obj() { }

Dynamic Joystick_obj::__CreateEmpty() { return  new Joystick_obj; }
hx::ObjectPtr< Joystick_obj > Joystick_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< Joystick_obj > result = new Joystick_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic Joystick_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Joystick_obj > result = new Joystick_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Joystick_obj::addListener( ::org::gameplay3d::wrapper::Control_ListenerWrapper listener,int eventFlags){
{
		HX_STACK_FRAME("org.gameplay3d.Joystick","addListener",0xb1d94730,"org.gameplay3d.Joystick.addListener","org/gameplay3d/Joystick.hx",20,0x1d535d55)
		HX_STACK_THIS(this)
		HX_STACK_ARG(listener,"listener")
		HX_STACK_ARG(eventFlags,"eventFlags")
		HX_STACK_LINE(20)
		::org::gameplay3d::Joystick_obj::hx_Joystick_addListener(this->nativeObject,(  (((listener == null()))) ? Dynamic(null()) : Dynamic(listener->nativeObject) ),eventFlags);
	}
return null();
}


int Joystick_obj::getIndex( ){
	HX_STACK_FRAME("org.gameplay3d.Joystick","getIndex",0xf929f041,"org.gameplay3d.Joystick.getIndex","org/gameplay3d/Joystick.hx",32,0x1d535d55)
	HX_STACK_THIS(this)
	HX_STACK_LINE(32)
	return ::org::gameplay3d::Joystick_obj::hx_Joystick_getIndex(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Joystick_obj,getIndex,return )

::org::gameplay3d::immutable::IVector2 Joystick_obj::getInnerRegionSize( ){
	HX_STACK_FRAME("org.gameplay3d.Joystick","getInnerRegionSize",0x294daafa,"org.gameplay3d.Joystick.getInnerRegionSize","org/gameplay3d/Joystick.hx",38,0x1d535d55)
	HX_STACK_THIS(this)
	HX_STACK_LINE(38)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector2 >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(38)
	Dynamic nativeObject = ::org::gameplay3d::Joystick_obj::hx_Joystick_getInnerRegionSize(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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


HX_DEFINE_DYNAMIC_FUNC0(Joystick_obj,getInnerRegionSize,return )

::org::gameplay3d::immutable::IVector2 Joystick_obj::getOuterRegionSize( ){
	HX_STACK_FRAME("org.gameplay3d.Joystick","getOuterRegionSize",0x9c73a21f,"org.gameplay3d.Joystick.getOuterRegionSize","org/gameplay3d/Joystick.hx",44,0x1d535d55)
	HX_STACK_THIS(this)
	HX_STACK_LINE(44)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector2 >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(44)
	Dynamic nativeObject = ::org::gameplay3d::Joystick_obj::hx_Joystick_getOuterRegionSize(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(44)
	if (((nativeObject == null()))){
		HX_STACK_LINE(44)
		return null();
	}
	else{
		HX_STACK_LINE(44)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(44)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(44)
			::org::gameplay3d::Vector2 result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(44)
			if (((result == null()))){
				HX_STACK_LINE(44)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(44)
				::org::gameplay3d::Vector2 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(44)
				result = _g;
				HX_STACK_LINE(44)
				ref->set(result);
			}
			HX_STACK_LINE(44)
			return result;
		}
		else{
			HX_STACK_LINE(44)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(44)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(44)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Joystick_obj,getOuterRegionSize,return )

::String Joystick_obj::getType( ){
	HX_STACK_FRAME("org.gameplay3d.Joystick","getType",0x8a24986b,"org.gameplay3d.Joystick.getType","org/gameplay3d/Joystick.hx",50,0x1d535d55)
	HX_STACK_THIS(this)
	HX_STACK_LINE(50)
	return ::org::gameplay3d::Joystick_obj::hx_Joystick_getType(this->nativeObject);
}


::org::gameplay3d::immutable::IVector2 Joystick_obj::getValue( ){
	HX_STACK_FRAME("org.gameplay3d.Joystick","getValue",0x6ccdd4a0,"org.gameplay3d.Joystick.getValue","org/gameplay3d/Joystick.hx",56,0x1d535d55)
	HX_STACK_THIS(this)
	HX_STACK_LINE(56)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector2 >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(56)
	Dynamic nativeObject = ::org::gameplay3d::Joystick_obj::hx_Joystick_getValue(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(56)
	if (((nativeObject == null()))){
		HX_STACK_LINE(56)
		return null();
	}
	else{
		HX_STACK_LINE(56)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(56)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(56)
			::org::gameplay3d::Vector2 result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(56)
			if (((result == null()))){
				HX_STACK_LINE(56)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(56)
				::org::gameplay3d::Vector2 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(56)
				result = _g;
				HX_STACK_LINE(56)
				ref->set(result);
			}
			HX_STACK_LINE(56)
			return result;
		}
		else{
			HX_STACK_LINE(56)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(56)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(56)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Joystick_obj,getValue,return )

bool Joystick_obj::isRelative( ){
	HX_STACK_FRAME("org.gameplay3d.Joystick","isRelative",0x8c1a87bb,"org.gameplay3d.Joystick.isRelative","org/gameplay3d/Joystick.hx",62,0x1d535d55)
	HX_STACK_THIS(this)
	HX_STACK_LINE(62)
	return ::org::gameplay3d::Joystick_obj::hx_Joystick_isRelative(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Joystick_obj,isRelative,return )

Void Joystick_obj::setInnerRegionSize( ::org::gameplay3d::immutable::IVector2 size){
{
		HX_STACK_FRAME("org.gameplay3d.Joystick","setInnerRegionSize",0x05fcdd6e,"org.gameplay3d.Joystick.setInnerRegionSize","org/gameplay3d/Joystick.hx",68,0x1d535d55)
		HX_STACK_THIS(this)
		HX_STACK_ARG(size,"size")
		HX_STACK_LINE(68)
		::org::gameplay3d::Joystick_obj::hx_Joystick_setInnerRegionSize(this->nativeObject,(  (((size == null()))) ? Dynamic(null()) : Dynamic(size->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,setInnerRegionSize,(void))

Void Joystick_obj::setOuterRegionSize( ::org::gameplay3d::immutable::IVector2 size){
{
		HX_STACK_FRAME("org.gameplay3d.Joystick","setOuterRegionSize",0x7922d493,"org.gameplay3d.Joystick.setOuterRegionSize","org/gameplay3d/Joystick.hx",74,0x1d535d55)
		HX_STACK_THIS(this)
		HX_STACK_ARG(size,"size")
		HX_STACK_LINE(74)
		::org::gameplay3d::Joystick_obj::hx_Joystick_setOuterRegionSize(this->nativeObject,(  (((size == null()))) ? Dynamic(null()) : Dynamic(size->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,setOuterRegionSize,(void))

Void Joystick_obj::setRelative( bool relative){
{
		HX_STACK_FRAME("org.gameplay3d.Joystick","setRelative",0xae809609,"org.gameplay3d.Joystick.setRelative","org/gameplay3d/Joystick.hx",80,0x1d535d55)
		HX_STACK_THIS(this)
		HX_STACK_ARG(relative,"relative")
		HX_STACK_LINE(80)
		::org::gameplay3d::Joystick_obj::hx_Joystick_setRelative(this->nativeObject,relative);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,setRelative,(void))

::org::gameplay3d::Joystick Joystick_obj::create( ::String id,::org::gameplay3d::Theme_Style style){
	HX_STACK_FRAME("org.gameplay3d.Joystick","create",0x39f48961,"org.gameplay3d.Joystick.create","org/gameplay3d/Joystick.hx",26,0x1d535d55)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(style,"style")
	HX_STACK_LINE(26)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Joystick >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(26)
	Dynamic nativeObject = ::org::gameplay3d::Joystick_obj::hx_Joystick_static_create(id,(  (((style == null()))) ? Dynamic(null()) : Dynamic(style->nativeObject) ));		HX_STACK_VAR(nativeObject,"nativeObject");
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
			::org::gameplay3d::Joystick result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(26)
			if (((result == null()))){
				HX_STACK_LINE(26)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(26)
				::org::gameplay3d::Joystick _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Joystick_obj,create,return )

Dynamic Joystick_obj::hx_Joystick_addListener;

Dynamic Joystick_obj::hx_Joystick_static_create;

Dynamic Joystick_obj::hx_Joystick_getIndex;

Dynamic Joystick_obj::hx_Joystick_getInnerRegionSize;

Dynamic Joystick_obj::hx_Joystick_getOuterRegionSize;

Dynamic Joystick_obj::hx_Joystick_getType;

Dynamic Joystick_obj::hx_Joystick_getValue;

Dynamic Joystick_obj::hx_Joystick_isRelative;

Dynamic Joystick_obj::hx_Joystick_setInnerRegionSize;

Dynamic Joystick_obj::hx_Joystick_setOuterRegionSize;

Dynamic Joystick_obj::hx_Joystick_setRelative;


Joystick_obj::Joystick_obj()
{
}

Dynamic Joystick_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getIndex") ) { return getIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"getValue") ) { return getValue_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isRelative") ) { return isRelative_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addListener") ) { return addListener_dyn(); }
		if (HX_FIELD_EQ(inName,"setRelative") ) { return setRelative_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getInnerRegionSize") ) { return getInnerRegionSize_dyn(); }
		if (HX_FIELD_EQ(inName,"getOuterRegionSize") ) { return getOuterRegionSize_dyn(); }
		if (HX_FIELD_EQ(inName,"setInnerRegionSize") ) { return setInnerRegionSize_dyn(); }
		if (HX_FIELD_EQ(inName,"setOuterRegionSize") ) { return setOuterRegionSize_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hx_Joystick_getType") ) { return hx_Joystick_getType; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Joystick_getIndex") ) { return hx_Joystick_getIndex; }
		if (HX_FIELD_EQ(inName,"hx_Joystick_getValue") ) { return hx_Joystick_getValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Joystick_isRelative") ) { return hx_Joystick_isRelative; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_Joystick_addListener") ) { return hx_Joystick_addListener; }
		if (HX_FIELD_EQ(inName,"hx_Joystick_setRelative") ) { return hx_Joystick_setRelative; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_Joystick_static_create") ) { return hx_Joystick_static_create; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"hx_Joystick_getInnerRegionSize") ) { return hx_Joystick_getInnerRegionSize; }
		if (HX_FIELD_EQ(inName,"hx_Joystick_getOuterRegionSize") ) { return hx_Joystick_getOuterRegionSize; }
		if (HX_FIELD_EQ(inName,"hx_Joystick_setInnerRegionSize") ) { return hx_Joystick_setInnerRegionSize; }
		if (HX_FIELD_EQ(inName,"hx_Joystick_setOuterRegionSize") ) { return hx_Joystick_setOuterRegionSize; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Joystick_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"hx_Joystick_getType") ) { hx_Joystick_getType=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Joystick_getIndex") ) { hx_Joystick_getIndex=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Joystick_getValue") ) { hx_Joystick_getValue=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Joystick_isRelative") ) { hx_Joystick_isRelative=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_Joystick_addListener") ) { hx_Joystick_addListener=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Joystick_setRelative") ) { hx_Joystick_setRelative=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_Joystick_static_create") ) { hx_Joystick_static_create=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"hx_Joystick_getInnerRegionSize") ) { hx_Joystick_getInnerRegionSize=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Joystick_getOuterRegionSize") ) { hx_Joystick_getOuterRegionSize=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Joystick_setInnerRegionSize") ) { hx_Joystick_setInnerRegionSize=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Joystick_setOuterRegionSize") ) { hx_Joystick_setOuterRegionSize=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Joystick_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create"),
	HX_CSTRING("hx_Joystick_addListener"),
	HX_CSTRING("hx_Joystick_static_create"),
	HX_CSTRING("hx_Joystick_getIndex"),
	HX_CSTRING("hx_Joystick_getInnerRegionSize"),
	HX_CSTRING("hx_Joystick_getOuterRegionSize"),
	HX_CSTRING("hx_Joystick_getType"),
	HX_CSTRING("hx_Joystick_getValue"),
	HX_CSTRING("hx_Joystick_isRelative"),
	HX_CSTRING("hx_Joystick_setInnerRegionSize"),
	HX_CSTRING("hx_Joystick_setOuterRegionSize"),
	HX_CSTRING("hx_Joystick_setRelative"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("addListener"),
	HX_CSTRING("getIndex"),
	HX_CSTRING("getInnerRegionSize"),
	HX_CSTRING("getOuterRegionSize"),
	HX_CSTRING("getType"),
	HX_CSTRING("getValue"),
	HX_CSTRING("isRelative"),
	HX_CSTRING("setInnerRegionSize"),
	HX_CSTRING("setOuterRegionSize"),
	HX_CSTRING("setRelative"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Joystick_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Joystick_obj::hx_Joystick_addListener,"hx_Joystick_addListener");
	HX_MARK_MEMBER_NAME(Joystick_obj::hx_Joystick_static_create,"hx_Joystick_static_create");
	HX_MARK_MEMBER_NAME(Joystick_obj::hx_Joystick_getIndex,"hx_Joystick_getIndex");
	HX_MARK_MEMBER_NAME(Joystick_obj::hx_Joystick_getInnerRegionSize,"hx_Joystick_getInnerRegionSize");
	HX_MARK_MEMBER_NAME(Joystick_obj::hx_Joystick_getOuterRegionSize,"hx_Joystick_getOuterRegionSize");
	HX_MARK_MEMBER_NAME(Joystick_obj::hx_Joystick_getType,"hx_Joystick_getType");
	HX_MARK_MEMBER_NAME(Joystick_obj::hx_Joystick_getValue,"hx_Joystick_getValue");
	HX_MARK_MEMBER_NAME(Joystick_obj::hx_Joystick_isRelative,"hx_Joystick_isRelative");
	HX_MARK_MEMBER_NAME(Joystick_obj::hx_Joystick_setInnerRegionSize,"hx_Joystick_setInnerRegionSize");
	HX_MARK_MEMBER_NAME(Joystick_obj::hx_Joystick_setOuterRegionSize,"hx_Joystick_setOuterRegionSize");
	HX_MARK_MEMBER_NAME(Joystick_obj::hx_Joystick_setRelative,"hx_Joystick_setRelative");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Joystick_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Joystick_obj::hx_Joystick_addListener,"hx_Joystick_addListener");
	HX_VISIT_MEMBER_NAME(Joystick_obj::hx_Joystick_static_create,"hx_Joystick_static_create");
	HX_VISIT_MEMBER_NAME(Joystick_obj::hx_Joystick_getIndex,"hx_Joystick_getIndex");
	HX_VISIT_MEMBER_NAME(Joystick_obj::hx_Joystick_getInnerRegionSize,"hx_Joystick_getInnerRegionSize");
	HX_VISIT_MEMBER_NAME(Joystick_obj::hx_Joystick_getOuterRegionSize,"hx_Joystick_getOuterRegionSize");
	HX_VISIT_MEMBER_NAME(Joystick_obj::hx_Joystick_getType,"hx_Joystick_getType");
	HX_VISIT_MEMBER_NAME(Joystick_obj::hx_Joystick_getValue,"hx_Joystick_getValue");
	HX_VISIT_MEMBER_NAME(Joystick_obj::hx_Joystick_isRelative,"hx_Joystick_isRelative");
	HX_VISIT_MEMBER_NAME(Joystick_obj::hx_Joystick_setInnerRegionSize,"hx_Joystick_setInnerRegionSize");
	HX_VISIT_MEMBER_NAME(Joystick_obj::hx_Joystick_setOuterRegionSize,"hx_Joystick_setOuterRegionSize");
	HX_VISIT_MEMBER_NAME(Joystick_obj::hx_Joystick_setRelative,"hx_Joystick_setRelative");
};

#endif

Class Joystick_obj::__mClass;

void Joystick_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.Joystick"), hx::TCanCast< Joystick_obj> ,sStaticFields,sMemberFields,
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

void Joystick_obj::__boot()
{
	hx_Joystick_addListener= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Joystick >(),HX_CSTRING("addListener"),(int)3);
	hx_Joystick_static_create= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Joystick >(),HX_CSTRING("static_create"),(int)2);
	hx_Joystick_getIndex= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Joystick >(),HX_CSTRING("getIndex"),(int)1);
	hx_Joystick_getInnerRegionSize= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Joystick >(),HX_CSTRING("getInnerRegionSize"),(int)1);
	hx_Joystick_getOuterRegionSize= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Joystick >(),HX_CSTRING("getOuterRegionSize"),(int)1);
	hx_Joystick_getType= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Joystick >(),HX_CSTRING("getType"),(int)1);
	hx_Joystick_getValue= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Joystick >(),HX_CSTRING("getValue"),(int)1);
	hx_Joystick_isRelative= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Joystick >(),HX_CSTRING("isRelative"),(int)1);
	hx_Joystick_setInnerRegionSize= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Joystick >(),HX_CSTRING("setInnerRegionSize"),(int)2);
	hx_Joystick_setOuterRegionSize= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Joystick >(),HX_CSTRING("setOuterRegionSize"),(int)2);
	hx_Joystick_setRelative= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Joystick >(),HX_CSTRING("setRelative"),(int)2);
}

} // end namespace org
} // end namespace gameplay3d
