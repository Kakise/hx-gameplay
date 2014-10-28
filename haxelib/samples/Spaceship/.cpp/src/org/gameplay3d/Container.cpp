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
#ifndef INCLUDED_org_gameplay3d_Animation
#include <org/gameplay3d/Animation.h>
#endif
#ifndef INCLUDED_org_gameplay3d_AnimationTarget
#include <org/gameplay3d/AnimationTarget.h>
#endif
#ifndef INCLUDED_org_gameplay3d_AnimationValue
#include <org/gameplay3d/AnimationValue.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Container
#include <org/gameplay3d/Container.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Control
#include <org/gameplay3d/Control.h>
#endif
#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Layout
#include <org/gameplay3d/Layout.h>
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
#ifndef INCLUDED_org_gameplay3d_intern_ConversionTools
#include <org/gameplay3d/intern/ConversionTools.h>
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

Void Container_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.Container","new",0xdde7f4e6,"org.gameplay3d.Container.new","org/gameplay3d/Container.hx",10,0x2eae06ea)
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

//Container_obj::~Container_obj() { }

Dynamic Container_obj::__CreateEmpty() { return  new Container_obj; }
hx::ObjectPtr< Container_obj > Container_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< Container_obj > result = new Container_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic Container_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Container_obj > result = new Container_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

int Container_obj::addControl( ::org::gameplay3d::Control control){
	HX_STACK_FRAME("org.gameplay3d.Container","addControl",0x466baf76,"org.gameplay3d.Container.addControl","org/gameplay3d/Container.hx",25,0x2eae06ea)
	HX_STACK_THIS(this)
	HX_STACK_ARG(control,"control")
	HX_STACK_LINE(25)
	return ::org::gameplay3d::Container_obj::hx_Container_addControl(this->nativeObject,(  (((control == null()))) ? Dynamic(null()) : Dynamic(control->nativeObject) ));
}


HX_DEFINE_DYNAMIC_FUNC1(Container_obj,addControl,return )

::org::gameplay3d::Animation Container_obj::getAnimation( ::String id){
	HX_STACK_FRAME("org.gameplay3d.Container","getAnimation",0x4a4da648,"org.gameplay3d.Container.getAnimation","org/gameplay3d/Container.hx",37,0x2eae06ea)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(37)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Animation >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(37)
	Dynamic nativeObject = ::org::gameplay3d::Container_obj::hx_Container_getAnimation(this->nativeObject,id);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(37)
	if (((nativeObject == null()))){
		HX_STACK_LINE(37)
		return null();
	}
	else{
		HX_STACK_LINE(37)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(37)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(37)
			::org::gameplay3d::Animation result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(37)
			if (((result == null()))){
				HX_STACK_LINE(37)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(37)
				::org::gameplay3d::Animation _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(37)
				result = _g;
				HX_STACK_LINE(37)
				ref->set(result);
			}
			HX_STACK_LINE(37)
			return result;
		}
		else{
			HX_STACK_LINE(37)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(37)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(37)
	return null();
}


int Container_obj::getAnimationPropertyComponentCount( int propertyId){
	HX_STACK_FRAME("org.gameplay3d.Container","getAnimationPropertyComponentCount",0xbd2b2e6f,"org.gameplay3d.Container.getAnimationPropertyComponentCount","org/gameplay3d/Container.hx",43,0x2eae06ea)
	HX_STACK_THIS(this)
	HX_STACK_ARG(propertyId,"propertyId")
	HX_STACK_LINE(43)
	return ::org::gameplay3d::Container_obj::hx_Container_getAnimationPropertyComponentCount(this->nativeObject,propertyId);
}


Void Container_obj::getAnimationPropertyValue( int propertyId,::org::gameplay3d::AnimationValue value){
{
		HX_STACK_FRAME("org.gameplay3d.Container","getAnimationPropertyValue",0x7250af74,"org.gameplay3d.Container.getAnimationPropertyValue","org/gameplay3d/Container.hx",49,0x2eae06ea)
		HX_STACK_THIS(this)
		HX_STACK_ARG(propertyId,"propertyId")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(49)
		::org::gameplay3d::Container_obj::hx_Container_getAnimationPropertyValue(this->nativeObject,propertyId,(  (((value == null()))) ? Dynamic(null()) : Dynamic(value->nativeObject) ));
	}
return null();
}


::org::gameplay3d::Control Container_obj::getControl_Str( ::String id){
	HX_STACK_FRAME("org.gameplay3d.Container","getControl_Str",0x998993b3,"org.gameplay3d.Container.getControl_Str","org/gameplay3d/Container.hx",55,0x2eae06ea)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(55)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Control >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(55)
	Dynamic nativeObject = ::org::gameplay3d::Container_obj::hx_Container_getControl_Str(this->nativeObject,id);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(55)
	if (((nativeObject == null()))){
		HX_STACK_LINE(55)
		return null();
	}
	else{
		HX_STACK_LINE(55)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(55)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(55)
			::org::gameplay3d::Control result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(55)
			if (((result == null()))){
				HX_STACK_LINE(55)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(55)
				::org::gameplay3d::Control _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(55)
				result = _g;
				HX_STACK_LINE(55)
				ref->set(result);
			}
			HX_STACK_LINE(55)
			return result;
		}
		else{
			HX_STACK_LINE(55)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(55)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(55)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Container_obj,getControl_Str,return )

::org::gameplay3d::Control Container_obj::getControl_Int( int index){
	HX_STACK_FRAME("org.gameplay3d.Container","getControl_Int",0x9981f7f1,"org.gameplay3d.Container.getControl_Int","org/gameplay3d/Container.hx",61,0x2eae06ea)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(61)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Control >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(61)
	Dynamic nativeObject = ::org::gameplay3d::Container_obj::hx_Container_getControl_Int(this->nativeObject,index);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(61)
	if (((nativeObject == null()))){
		HX_STACK_LINE(61)
		return null();
	}
	else{
		HX_STACK_LINE(61)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(61)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(61)
			::org::gameplay3d::Control result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(61)
			if (((result == null()))){
				HX_STACK_LINE(61)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(61)
				::org::gameplay3d::Control _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(61)
				result = _g;
				HX_STACK_LINE(61)
				ref->set(result);
			}
			HX_STACK_LINE(61)
			return result;
		}
		else{
			HX_STACK_LINE(61)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(61)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(61)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Container_obj,getControl_Int,return )

Array< ::Dynamic > Container_obj::getControls( ){
	HX_STACK_FRAME("org.gameplay3d.Container","getControls",0x4c6563b2,"org.gameplay3d.Container.getControls","org/gameplay3d/Container.hx",66,0x2eae06ea)
	HX_STACK_THIS(this)
	HX_STACK_LINE(67)
	Dynamic _g = ::org::gameplay3d::Container_obj::hx_Container_getControls(this->nativeObject);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(67)
	return ::org::gameplay3d::intern::ConversionTools_obj::extractControlArray(_g);
}


HX_DEFINE_DYNAMIC_FUNC0(Container_obj,getControls,return )

::org::gameplay3d::Layout Container_obj::getLayout( ){
	HX_STACK_FRAME("org.gameplay3d.Container","getLayout",0xe29284e6,"org.gameplay3d.Container.getLayout","org/gameplay3d/Container.hx",73,0x2eae06ea)
	HX_STACK_THIS(this)
	HX_STACK_LINE(73)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Layout >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(73)
	Dynamic nativeObject = ::org::gameplay3d::Container_obj::hx_Container_getLayout(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(73)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(73)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(73)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(73)
			::org::gameplay3d::Layout result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(73)
			if (((result == null()))){
				HX_STACK_LINE(73)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(73)
				::org::gameplay3d::Layout _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(73)
				result = _g;
				HX_STACK_LINE(73)
				ref->set(result);
			}
			HX_STACK_LINE(73)
			return result;
		}
		else{
			HX_STACK_LINE(73)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(73)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(73)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Container_obj,getLayout,return )

int Container_obj::getScroll( ){
	HX_STACK_FRAME("org.gameplay3d.Container","getScroll",0xd13eae49,"org.gameplay3d.Container.getScroll","org/gameplay3d/Container.hx",79,0x2eae06ea)
	HX_STACK_THIS(this)
	HX_STACK_LINE(79)
	return ::org::gameplay3d::Container_obj::hx_Container_getScroll(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Container_obj,getScroll,return )

::String Container_obj::getType( ){
	HX_STACK_FRAME("org.gameplay3d.Container","getType",0xebb381f6,"org.gameplay3d.Container.getType","org/gameplay3d/Container.hx",85,0x2eae06ea)
	HX_STACK_THIS(this)
	HX_STACK_LINE(85)
	return ::org::gameplay3d::Container_obj::hx_Container_getType(this->nativeObject);
}


Void Container_obj::insertControl( ::org::gameplay3d::Control control,int index){
{
		HX_STACK_FRAME("org.gameplay3d.Container","insertControl",0x38c4612a,"org.gameplay3d.Container.insertControl","org/gameplay3d/Container.hx",91,0x2eae06ea)
		HX_STACK_THIS(this)
		HX_STACK_ARG(control,"control")
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(91)
		::org::gameplay3d::Container_obj::hx_Container_insertControl(this->nativeObject,(  (((control == null()))) ? Dynamic(null()) : Dynamic(control->nativeObject) ),index);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Container_obj,insertControl,(void))

bool Container_obj::isContainer( ){
	HX_STACK_FRAME("org.gameplay3d.Container","isContainer",0x8ca9467d,"org.gameplay3d.Container.isContainer","org/gameplay3d/Container.hx",97,0x2eae06ea)
	HX_STACK_THIS(this)
	HX_STACK_LINE(97)
	return ::org::gameplay3d::Container_obj::hx_Container_isContainer(this->nativeObject);
}


bool Container_obj::isScrollBarsAutoHide( ){
	HX_STACK_FRAME("org.gameplay3d.Container","isScrollBarsAutoHide",0x30adb222,"org.gameplay3d.Container.isScrollBarsAutoHide","org/gameplay3d/Container.hx",103,0x2eae06ea)
	HX_STACK_THIS(this)
	HX_STACK_LINE(103)
	return ::org::gameplay3d::Container_obj::hx_Container_isScrollBarsAutoHide(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Container_obj,isScrollBarsAutoHide,return )

bool Container_obj::isScrolling( ){
	HX_STACK_FRAME("org.gameplay3d.Container","isScrolling",0x0b4fcc31,"org.gameplay3d.Container.isScrolling","org/gameplay3d/Container.hx",109,0x2eae06ea)
	HX_STACK_THIS(this)
	HX_STACK_LINE(109)
	return ::org::gameplay3d::Container_obj::hx_Container_isScrolling(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Container_obj,isScrolling,return )

Void Container_obj::removeControl_Ctrl( ::org::gameplay3d::Control control){
{
		HX_STACK_FRAME("org.gameplay3d.Container","removeControl_Ctrl",0xef7e34cb,"org.gameplay3d.Container.removeControl_Ctrl","org/gameplay3d/Container.hx",115,0x2eae06ea)
		HX_STACK_THIS(this)
		HX_STACK_ARG(control,"control")
		HX_STACK_LINE(115)
		::org::gameplay3d::Container_obj::hx_Container_removeControl_Ctrl(this->nativeObject,(  (((control == null()))) ? Dynamic(null()) : Dynamic(control->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Container_obj,removeControl_Ctrl,(void))

Void Container_obj::removeControl_Str( ::String id){
{
		HX_STACK_FRAME("org.gameplay3d.Container","removeControl_Str",0x2a72e091,"org.gameplay3d.Container.removeControl_Str","org/gameplay3d/Container.hx",121,0x2eae06ea)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(121)
		::org::gameplay3d::Container_obj::hx_Container_removeControl_Str(this->nativeObject,id);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Container_obj,removeControl_Str,(void))

Void Container_obj::removeControl_Int( int index){
{
		HX_STACK_FRAME("org.gameplay3d.Container","removeControl_Int",0x2a6b44cf,"org.gameplay3d.Container.removeControl_Int","org/gameplay3d/Container.hx",127,0x2eae06ea)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(127)
		::org::gameplay3d::Container_obj::hx_Container_removeControl_Int(this->nativeObject,index);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Container_obj,removeControl_Int,(void))

Void Container_obj::setAnimationPropertyValue( int propertyId,::org::gameplay3d::AnimationValue value,hx::Null< Float >  __o_blendWeight){
Float blendWeight = __o_blendWeight.Default(1.0);
	HX_STACK_FRAME("org.gameplay3d.Container","setAnimationPropertyValue",0xdea77380,"org.gameplay3d.Container.setAnimationPropertyValue","org/gameplay3d/Container.hx",133,0x2eae06ea)
	HX_STACK_THIS(this)
	HX_STACK_ARG(propertyId,"propertyId")
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(blendWeight,"blendWeight")
{
		HX_STACK_LINE(133)
		::org::gameplay3d::Container_obj::hx_Container_setAnimationPropertyValue(this->nativeObject,propertyId,(  (((value == null()))) ? Dynamic(null()) : Dynamic(value->nativeObject) ),blendWeight);
	}
return null();
}


Void Container_obj::setScroll( int scroll){
{
		HX_STACK_FRAME("org.gameplay3d.Container","setScroll",0xb48f9a55,"org.gameplay3d.Container.setScroll","org/gameplay3d/Container.hx",139,0x2eae06ea)
		HX_STACK_THIS(this)
		HX_STACK_ARG(scroll,"scroll")
		HX_STACK_LINE(139)
		::org::gameplay3d::Container_obj::hx_Container_setScroll(this->nativeObject,scroll);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Container_obj,setScroll,(void))

Void Container_obj::setScrollBarsAutoHide( bool autoHide){
{
		HX_STACK_FRAME("org.gameplay3d.Container","setScrollBarsAutoHide",0xf09a9926,"org.gameplay3d.Container.setScrollBarsAutoHide","org/gameplay3d/Container.hx",145,0x2eae06ea)
		HX_STACK_THIS(this)
		HX_STACK_ARG(autoHide,"autoHide")
		HX_STACK_LINE(145)
		::org::gameplay3d::Container_obj::hx_Container_setScrollBarsAutoHide(this->nativeObject,autoHide);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Container_obj,setScrollBarsAutoHide,(void))

int Container_obj::ANIMATE_SCROLLBAR_OPACITY;

::org::gameplay3d::Container Container_obj::create( ::String id,::org::gameplay3d::Theme_Style style,hx::Null< int >  __o_layoutType){
int layoutType = __o_layoutType.Default(2);
	HX_STACK_FRAME("org.gameplay3d.Container","create",0x773c5a36,"org.gameplay3d.Container.create","org/gameplay3d/Container.hx",31,0x2eae06ea)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(style,"style")
	HX_STACK_ARG(layoutType,"layoutType")
{
		HX_STACK_LINE(31)
		::Class classObj = hx::ClassOf< ::org::gameplay3d::Container >();		HX_STACK_VAR(classObj,"classObj");
		HX_STACK_LINE(31)
		Dynamic nativeObject = ::org::gameplay3d::Container_obj::hx_Container_static_create(id,(  (((style == null()))) ? Dynamic(null()) : Dynamic(style->nativeObject) ),layoutType);		HX_STACK_VAR(nativeObject,"nativeObject");
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
				::org::gameplay3d::Container result = ref->get();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(31)
				if (((result == null()))){
					HX_STACK_LINE(31)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
					HX_STACK_LINE(31)
					::org::gameplay3d::Container _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Container_obj,create,return )

Dynamic Container_obj::hx_Container_addControl;

Dynamic Container_obj::hx_Container_static_create;

Dynamic Container_obj::hx_Container_getAnimation;

Dynamic Container_obj::hx_Container_getAnimationPropertyComponentCount;

Dynamic Container_obj::hx_Container_getAnimationPropertyValue;

Dynamic Container_obj::hx_Container_getControl_Str;

Dynamic Container_obj::hx_Container_getControl_Int;

Dynamic Container_obj::hx_Container_getControls;

Dynamic Container_obj::hx_Container_getLayout;

Dynamic Container_obj::hx_Container_getScroll;

Dynamic Container_obj::hx_Container_getType;

Dynamic Container_obj::hx_Container_insertControl;

Dynamic Container_obj::hx_Container_isContainer;

Dynamic Container_obj::hx_Container_isScrollBarsAutoHide;

Dynamic Container_obj::hx_Container_isScrolling;

Dynamic Container_obj::hx_Container_removeControl_Ctrl;

Dynamic Container_obj::hx_Container_removeControl_Str;

Dynamic Container_obj::hx_Container_removeControl_Int;

Dynamic Container_obj::hx_Container_setAnimationPropertyValue;

Dynamic Container_obj::hx_Container_setScroll;

Dynamic Container_obj::hx_Container_setScrollBarsAutoHide;


Container_obj::Container_obj()
{
}

Dynamic Container_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getLayout") ) { return getLayout_dyn(); }
		if (HX_FIELD_EQ(inName,"getScroll") ) { return getScroll_dyn(); }
		if (HX_FIELD_EQ(inName,"setScroll") ) { return setScroll_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addControl") ) { return addControl_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getControls") ) { return getControls_dyn(); }
		if (HX_FIELD_EQ(inName,"isContainer") ) { return isContainer_dyn(); }
		if (HX_FIELD_EQ(inName,"isScrolling") ) { return isScrolling_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getAnimation") ) { return getAnimation_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"insertControl") ) { return insertControl_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getControl_Str") ) { return getControl_Str_dyn(); }
		if (HX_FIELD_EQ(inName,"getControl_Int") ) { return getControl_Int_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"removeControl_Str") ) { return removeControl_Str_dyn(); }
		if (HX_FIELD_EQ(inName,"removeControl_Int") ) { return removeControl_Int_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"removeControl_Ctrl") ) { return removeControl_Ctrl_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Container_getType") ) { return hx_Container_getType; }
		if (HX_FIELD_EQ(inName,"isScrollBarsAutoHide") ) { return isScrollBarsAutoHide_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"setScrollBarsAutoHide") ) { return setScrollBarsAutoHide_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Container_getLayout") ) { return hx_Container_getLayout; }
		if (HX_FIELD_EQ(inName,"hx_Container_getScroll") ) { return hx_Container_getScroll; }
		if (HX_FIELD_EQ(inName,"hx_Container_setScroll") ) { return hx_Container_setScroll; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_Container_addControl") ) { return hx_Container_addControl; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_Container_getControls") ) { return hx_Container_getControls; }
		if (HX_FIELD_EQ(inName,"hx_Container_isContainer") ) { return hx_Container_isContainer; }
		if (HX_FIELD_EQ(inName,"hx_Container_isScrolling") ) { return hx_Container_isScrolling; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_Container_getAnimation") ) { return hx_Container_getAnimation; }
		if (HX_FIELD_EQ(inName,"getAnimationPropertyValue") ) { return getAnimationPropertyValue_dyn(); }
		if (HX_FIELD_EQ(inName,"setAnimationPropertyValue") ) { return setAnimationPropertyValue_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_Container_static_create") ) { return hx_Container_static_create; }
		if (HX_FIELD_EQ(inName,"hx_Container_insertControl") ) { return hx_Container_insertControl; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"hx_Container_getControl_Str") ) { return hx_Container_getControl_Str; }
		if (HX_FIELD_EQ(inName,"hx_Container_getControl_Int") ) { return hx_Container_getControl_Int; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"hx_Container_removeControl_Str") ) { return hx_Container_removeControl_Str; }
		if (HX_FIELD_EQ(inName,"hx_Container_removeControl_Int") ) { return hx_Container_removeControl_Int; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"hx_Container_removeControl_Ctrl") ) { return hx_Container_removeControl_Ctrl; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"hx_Container_isScrollBarsAutoHide") ) { return hx_Container_isScrollBarsAutoHide; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"hx_Container_setScrollBarsAutoHide") ) { return hx_Container_setScrollBarsAutoHide; }
		if (HX_FIELD_EQ(inName,"getAnimationPropertyComponentCount") ) { return getAnimationPropertyComponentCount_dyn(); }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"hx_Container_getAnimationPropertyValue") ) { return hx_Container_getAnimationPropertyValue; }
		if (HX_FIELD_EQ(inName,"hx_Container_setAnimationPropertyValue") ) { return hx_Container_setAnimationPropertyValue; }
		break;
	case 47:
		if (HX_FIELD_EQ(inName,"hx_Container_getAnimationPropertyComponentCount") ) { return hx_Container_getAnimationPropertyComponentCount; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Container_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Container_getType") ) { hx_Container_getType=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Container_getLayout") ) { hx_Container_getLayout=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Container_getScroll") ) { hx_Container_getScroll=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Container_setScroll") ) { hx_Container_setScroll=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_Container_addControl") ) { hx_Container_addControl=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_Container_getControls") ) { hx_Container_getControls=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Container_isContainer") ) { hx_Container_isContainer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Container_isScrolling") ) { hx_Container_isScrolling=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_Container_getAnimation") ) { hx_Container_getAnimation=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_Container_static_create") ) { hx_Container_static_create=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Container_insertControl") ) { hx_Container_insertControl=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"hx_Container_getControl_Str") ) { hx_Container_getControl_Str=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Container_getControl_Int") ) { hx_Container_getControl_Int=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"hx_Container_removeControl_Str") ) { hx_Container_removeControl_Str=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Container_removeControl_Int") ) { hx_Container_removeControl_Int=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"hx_Container_removeControl_Ctrl") ) { hx_Container_removeControl_Ctrl=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"hx_Container_isScrollBarsAutoHide") ) { hx_Container_isScrollBarsAutoHide=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"hx_Container_setScrollBarsAutoHide") ) { hx_Container_setScrollBarsAutoHide=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"hx_Container_getAnimationPropertyValue") ) { hx_Container_getAnimationPropertyValue=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Container_setAnimationPropertyValue") ) { hx_Container_setAnimationPropertyValue=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 47:
		if (HX_FIELD_EQ(inName,"hx_Container_getAnimationPropertyComponentCount") ) { hx_Container_getAnimationPropertyComponentCount=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Container_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("ANIMATE_SCROLLBAR_OPACITY"),
	HX_CSTRING("create"),
	HX_CSTRING("hx_Container_addControl"),
	HX_CSTRING("hx_Container_static_create"),
	HX_CSTRING("hx_Container_getAnimation"),
	HX_CSTRING("hx_Container_getAnimationPropertyComponentCount"),
	HX_CSTRING("hx_Container_getAnimationPropertyValue"),
	HX_CSTRING("hx_Container_getControl_Str"),
	HX_CSTRING("hx_Container_getControl_Int"),
	HX_CSTRING("hx_Container_getControls"),
	HX_CSTRING("hx_Container_getLayout"),
	HX_CSTRING("hx_Container_getScroll"),
	HX_CSTRING("hx_Container_getType"),
	HX_CSTRING("hx_Container_insertControl"),
	HX_CSTRING("hx_Container_isContainer"),
	HX_CSTRING("hx_Container_isScrollBarsAutoHide"),
	HX_CSTRING("hx_Container_isScrolling"),
	HX_CSTRING("hx_Container_removeControl_Ctrl"),
	HX_CSTRING("hx_Container_removeControl_Str"),
	HX_CSTRING("hx_Container_removeControl_Int"),
	HX_CSTRING("hx_Container_setAnimationPropertyValue"),
	HX_CSTRING("hx_Container_setScroll"),
	HX_CSTRING("hx_Container_setScrollBarsAutoHide"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("addControl"),
	HX_CSTRING("getAnimation"),
	HX_CSTRING("getAnimationPropertyComponentCount"),
	HX_CSTRING("getAnimationPropertyValue"),
	HX_CSTRING("getControl_Str"),
	HX_CSTRING("getControl_Int"),
	HX_CSTRING("getControls"),
	HX_CSTRING("getLayout"),
	HX_CSTRING("getScroll"),
	HX_CSTRING("getType"),
	HX_CSTRING("insertControl"),
	HX_CSTRING("isContainer"),
	HX_CSTRING("isScrollBarsAutoHide"),
	HX_CSTRING("isScrolling"),
	HX_CSTRING("removeControl_Ctrl"),
	HX_CSTRING("removeControl_Str"),
	HX_CSTRING("removeControl_Int"),
	HX_CSTRING("setAnimationPropertyValue"),
	HX_CSTRING("setScroll"),
	HX_CSTRING("setScrollBarsAutoHide"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Container_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Container_obj::ANIMATE_SCROLLBAR_OPACITY,"ANIMATE_SCROLLBAR_OPACITY");
	HX_MARK_MEMBER_NAME(Container_obj::hx_Container_addControl,"hx_Container_addControl");
	HX_MARK_MEMBER_NAME(Container_obj::hx_Container_static_create,"hx_Container_static_create");
	HX_MARK_MEMBER_NAME(Container_obj::hx_Container_getAnimation,"hx_Container_getAnimation");
	HX_MARK_MEMBER_NAME(Container_obj::hx_Container_getAnimationPropertyComponentCount,"hx_Container_getAnimationPropertyComponentCount");
	HX_MARK_MEMBER_NAME(Container_obj::hx_Container_getAnimationPropertyValue,"hx_Container_getAnimationPropertyValue");
	HX_MARK_MEMBER_NAME(Container_obj::hx_Container_getControl_Str,"hx_Container_getControl_Str");
	HX_MARK_MEMBER_NAME(Container_obj::hx_Container_getControl_Int,"hx_Container_getControl_Int");
	HX_MARK_MEMBER_NAME(Container_obj::hx_Container_getControls,"hx_Container_getControls");
	HX_MARK_MEMBER_NAME(Container_obj::hx_Container_getLayout,"hx_Container_getLayout");
	HX_MARK_MEMBER_NAME(Container_obj::hx_Container_getScroll,"hx_Container_getScroll");
	HX_MARK_MEMBER_NAME(Container_obj::hx_Container_getType,"hx_Container_getType");
	HX_MARK_MEMBER_NAME(Container_obj::hx_Container_insertControl,"hx_Container_insertControl");
	HX_MARK_MEMBER_NAME(Container_obj::hx_Container_isContainer,"hx_Container_isContainer");
	HX_MARK_MEMBER_NAME(Container_obj::hx_Container_isScrollBarsAutoHide,"hx_Container_isScrollBarsAutoHide");
	HX_MARK_MEMBER_NAME(Container_obj::hx_Container_isScrolling,"hx_Container_isScrolling");
	HX_MARK_MEMBER_NAME(Container_obj::hx_Container_removeControl_Ctrl,"hx_Container_removeControl_Ctrl");
	HX_MARK_MEMBER_NAME(Container_obj::hx_Container_removeControl_Str,"hx_Container_removeControl_Str");
	HX_MARK_MEMBER_NAME(Container_obj::hx_Container_removeControl_Int,"hx_Container_removeControl_Int");
	HX_MARK_MEMBER_NAME(Container_obj::hx_Container_setAnimationPropertyValue,"hx_Container_setAnimationPropertyValue");
	HX_MARK_MEMBER_NAME(Container_obj::hx_Container_setScroll,"hx_Container_setScroll");
	HX_MARK_MEMBER_NAME(Container_obj::hx_Container_setScrollBarsAutoHide,"hx_Container_setScrollBarsAutoHide");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Container_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Container_obj::ANIMATE_SCROLLBAR_OPACITY,"ANIMATE_SCROLLBAR_OPACITY");
	HX_VISIT_MEMBER_NAME(Container_obj::hx_Container_addControl,"hx_Container_addControl");
	HX_VISIT_MEMBER_NAME(Container_obj::hx_Container_static_create,"hx_Container_static_create");
	HX_VISIT_MEMBER_NAME(Container_obj::hx_Container_getAnimation,"hx_Container_getAnimation");
	HX_VISIT_MEMBER_NAME(Container_obj::hx_Container_getAnimationPropertyComponentCount,"hx_Container_getAnimationPropertyComponentCount");
	HX_VISIT_MEMBER_NAME(Container_obj::hx_Container_getAnimationPropertyValue,"hx_Container_getAnimationPropertyValue");
	HX_VISIT_MEMBER_NAME(Container_obj::hx_Container_getControl_Str,"hx_Container_getControl_Str");
	HX_VISIT_MEMBER_NAME(Container_obj::hx_Container_getControl_Int,"hx_Container_getControl_Int");
	HX_VISIT_MEMBER_NAME(Container_obj::hx_Container_getControls,"hx_Container_getControls");
	HX_VISIT_MEMBER_NAME(Container_obj::hx_Container_getLayout,"hx_Container_getLayout");
	HX_VISIT_MEMBER_NAME(Container_obj::hx_Container_getScroll,"hx_Container_getScroll");
	HX_VISIT_MEMBER_NAME(Container_obj::hx_Container_getType,"hx_Container_getType");
	HX_VISIT_MEMBER_NAME(Container_obj::hx_Container_insertControl,"hx_Container_insertControl");
	HX_VISIT_MEMBER_NAME(Container_obj::hx_Container_isContainer,"hx_Container_isContainer");
	HX_VISIT_MEMBER_NAME(Container_obj::hx_Container_isScrollBarsAutoHide,"hx_Container_isScrollBarsAutoHide");
	HX_VISIT_MEMBER_NAME(Container_obj::hx_Container_isScrolling,"hx_Container_isScrolling");
	HX_VISIT_MEMBER_NAME(Container_obj::hx_Container_removeControl_Ctrl,"hx_Container_removeControl_Ctrl");
	HX_VISIT_MEMBER_NAME(Container_obj::hx_Container_removeControl_Str,"hx_Container_removeControl_Str");
	HX_VISIT_MEMBER_NAME(Container_obj::hx_Container_removeControl_Int,"hx_Container_removeControl_Int");
	HX_VISIT_MEMBER_NAME(Container_obj::hx_Container_setAnimationPropertyValue,"hx_Container_setAnimationPropertyValue");
	HX_VISIT_MEMBER_NAME(Container_obj::hx_Container_setScroll,"hx_Container_setScroll");
	HX_VISIT_MEMBER_NAME(Container_obj::hx_Container_setScrollBarsAutoHide,"hx_Container_setScrollBarsAutoHide");
};

#endif

Class Container_obj::__mClass;

void Container_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.Container"), hx::TCanCast< Container_obj> ,sStaticFields,sMemberFields,
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

void Container_obj::__boot()
{
	ANIMATE_SCROLLBAR_OPACITY= (int)8;
	hx_Container_addControl= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Container >(),HX_CSTRING("addControl"),(int)2);
	hx_Container_static_create= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Container >(),HX_CSTRING("static_create"),(int)3);
	hx_Container_getAnimation= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Container >(),HX_CSTRING("getAnimation"),(int)2);
	hx_Container_getAnimationPropertyComponentCount= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Container >(),HX_CSTRING("getAnimationPropertyComponentCount"),(int)2);
	hx_Container_getAnimationPropertyValue= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Container >(),HX_CSTRING("getAnimationPropertyValue"),(int)3);
	hx_Container_getControl_Str= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Container >(),HX_CSTRING("getControl_Str"),(int)2);
	hx_Container_getControl_Int= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Container >(),HX_CSTRING("getControl_Int"),(int)2);
	hx_Container_getControls= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Container >(),HX_CSTRING("getControls"),(int)1);
	hx_Container_getLayout= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Container >(),HX_CSTRING("getLayout"),(int)1);
	hx_Container_getScroll= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Container >(),HX_CSTRING("getScroll"),(int)1);
	hx_Container_getType= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Container >(),HX_CSTRING("getType"),(int)1);
	hx_Container_insertControl= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Container >(),HX_CSTRING("insertControl"),(int)3);
	hx_Container_isContainer= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Container >(),HX_CSTRING("isContainer"),(int)1);
	hx_Container_isScrollBarsAutoHide= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Container >(),HX_CSTRING("isScrollBarsAutoHide"),(int)1);
	hx_Container_isScrolling= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Container >(),HX_CSTRING("isScrolling"),(int)1);
	hx_Container_removeControl_Ctrl= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Container >(),HX_CSTRING("removeControl_Ctrl"),(int)2);
	hx_Container_removeControl_Str= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Container >(),HX_CSTRING("removeControl_Str"),(int)2);
	hx_Container_removeControl_Int= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Container >(),HX_CSTRING("removeControl_Int"),(int)2);
	hx_Container_setAnimationPropertyValue= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Container >(),HX_CSTRING("setAnimationPropertyValue"),(int)4);
	hx_Container_setScroll= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Container >(),HX_CSTRING("setScroll"),(int)2);
	hx_Container_setScrollBarsAutoHide= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Container >(),HX_CSTRING("setScrollBarsAutoHide"),(int)2);
}

} // end namespace org
} // end namespace gameplay3d
