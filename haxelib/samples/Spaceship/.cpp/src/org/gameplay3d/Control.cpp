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
#ifndef INCLUDED_org_gameplay3d_AnimationValue
#include <org/gameplay3d/AnimationValue.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Control
#include <org/gameplay3d/Control.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Control_Listener
#include <org/gameplay3d/Control_Listener.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Font
#include <org/gameplay3d/Font.h>
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
#ifndef INCLUDED_org_gameplay3d_ScriptTarget
#include <org/gameplay3d/ScriptTarget.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Theme_SideRegions
#include <org/gameplay3d/Theme_SideRegions.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Theme_Style
#include <org/gameplay3d/Theme_Style.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Theme_UVs
#include <org/gameplay3d/Theme_UVs.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Vector4
#include <org/gameplay3d/Vector4.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IRectangle
#include <org/gameplay3d/immutable/IRectangle.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_ITheme_SideRegions
#include <org/gameplay3d/immutable/ITheme_SideRegions.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_ITheme_UVs
#include <org/gameplay3d/immutable/ITheme_UVs.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IVector4
#include <org/gameplay3d/immutable/IVector4.h>
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

Void Control_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.Control","new",0x17922642,"org.gameplay3d.Control.new","org/gameplay3d/Control.hx",18,0xee9b8d0e)
HX_STACK_THIS(this)
HX_STACK_ARG(nativeObjectInitializer,"nativeObjectInitializer")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(18)
	super::__construct(nativeObjectInitializer,nativeObjectInitializerParams);
}
;
	return null();
}

//Control_obj::~Control_obj() { }

Dynamic Control_obj::__CreateEmpty() { return  new Control_obj; }
hx::ObjectPtr< Control_obj > Control_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< Control_obj > result = new Control_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic Control_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Control_obj > result = new Control_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *Control_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::intern::INativeBinding_obj)) return operator ::org::gameplay3d::intern::INativeBinding_obj *();
	if (inType==typeid( ::org::gameplay3d::Ref_obj)) return operator ::org::gameplay3d::Ref_obj *();
	return super::__ToInterface(inType);
}

Void Control_obj::addListener( ::org::gameplay3d::wrapper::Control_ListenerWrapper listener,int eventFlags){
{
		HX_STACK_FRAME("org.gameplay3d.Control","addListener",0x4fc83f97,"org.gameplay3d.Control.addListener","org/gameplay3d/Control.hx",56,0xee9b8d0e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(listener,"listener")
		HX_STACK_ARG(eventFlags,"eventFlags")
		HX_STACK_LINE(56)
		::org::gameplay3d::Control_obj::hx_Control_addListener(this->nativeObject,(  (((listener == null()))) ? Dynamic(null()) : Dynamic(listener->nativeObject) ),eventFlags);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Control_obj,addListener,(void))

Void Control_obj::setEnabled( bool enabled){
{
		HX_STACK_FRAME("org.gameplay3d.Control","setEnabled",0x7bff335d,"org.gameplay3d.Control.setEnabled","org/gameplay3d/Control.hx",62,0xee9b8d0e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(enabled,"enabled")
		HX_STACK_LINE(62)
		::org::gameplay3d::Control_obj::hx_Control_setEnabled(this->nativeObject,enabled);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,setEnabled,(void))

int Control_obj::getAlignment( ){
	HX_STACK_FRAME("org.gameplay3d.Control","getAlignment",0x86215d4b,"org.gameplay3d.Control.getAlignment","org/gameplay3d/Control.hx",68,0xee9b8d0e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(68)
	return ::org::gameplay3d::Control_obj::hx_Control_getAlignment(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Control_obj,getAlignment,return )

int Control_obj::getAnimationPropertyComponentCount( int propertyId){
	HX_STACK_FRAME("org.gameplay3d.Control","getAnimationPropertyComponentCount",0x77846c93,"org.gameplay3d.Control.getAnimationPropertyComponentCount","org/gameplay3d/Control.hx",74,0xee9b8d0e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(propertyId,"propertyId")
	HX_STACK_LINE(74)
	return ::org::gameplay3d::Control_obj::hx_Control_getAnimationPropertyComponentCount(this->nativeObject,propertyId);
}


Void Control_obj::getAnimationPropertyValue( int propertyId,::org::gameplay3d::AnimationValue value){
{
		HX_STACK_FRAME("org.gameplay3d.Control","getAnimationPropertyValue",0x8627c5d0,"org.gameplay3d.Control.getAnimationPropertyValue","org/gameplay3d/Control.hx",80,0xee9b8d0e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(propertyId,"propertyId")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(80)
		::org::gameplay3d::Control_obj::hx_Control_getAnimationPropertyValue(this->nativeObject,propertyId,(  (((value == null()))) ? Dynamic(null()) : Dynamic(value->nativeObject) ));
	}
return null();
}


bool Control_obj::getAutoHeight( ){
	HX_STACK_FRAME("org.gameplay3d.Control","getAutoHeight",0x393eb94e,"org.gameplay3d.Control.getAutoHeight","org/gameplay3d/Control.hx",86,0xee9b8d0e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(86)
	return ::org::gameplay3d::Control_obj::hx_Control_getAutoHeight(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Control_obj,getAutoHeight,return )

bool Control_obj::getAutoWidth( ){
	HX_STACK_FRAME("org.gameplay3d.Control","getAutoWidth",0x44516e7f,"org.gameplay3d.Control.getAutoWidth","org/gameplay3d/Control.hx",92,0xee9b8d0e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(92)
	return ::org::gameplay3d::Control_obj::hx_Control_getAutoWidth(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Control_obj,getAutoWidth,return )

::org::gameplay3d::immutable::ITheme_SideRegions Control_obj::getBorder( hx::Null< int >  __o_state){
int state = __o_state.Default(1);
	HX_STACK_FRAME("org.gameplay3d.Control","getBorder",0x508fc184,"org.gameplay3d.Control.getBorder","org/gameplay3d/Control.hx",98,0xee9b8d0e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(state,"state")
{
		HX_STACK_LINE(28)
		if (((this->_border == null()))){
			HX_STACK_LINE(29)
			::org::gameplay3d::Theme_SideRegions _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(29)
			{
				HX_STACK_LINE(29)
				::Class classObj = hx::ClassOf< ::org::gameplay3d::Theme_SideRegions >();		HX_STACK_VAR(classObj,"classObj");
				HX_STACK_LINE(98)
				Dynamic nativeObject = ::org::gameplay3d::Control_obj::hx_Control_getBorder(this->nativeObject,state);		HX_STACK_VAR(nativeObject,"nativeObject");
				HX_STACK_LINE(29)
				if (((nativeObject == null()))){
					HX_STACK_LINE(29)
					_g1 = null();
				}
				else{
					HX_STACK_LINE(29)
					if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
						HX_STACK_LINE(29)
						::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
						HX_STACK_LINE(29)
						::org::gameplay3d::Theme_SideRegions result = ref->get();		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(29)
						if (((result == null()))){
							HX_STACK_LINE(29)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
							HX_STACK_LINE(29)
							::org::gameplay3d::Theme_SideRegions _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(29)
							result = _g;
							HX_STACK_LINE(29)
							ref->set(result);
						}
						HX_STACK_LINE(29)
						_g1 = result;
					}
					else{
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
						HX_STACK_LINE(29)
						_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
					}
				}
			}
			HX_STACK_LINE(29)
			return this->_border = _g1;
		}
		else{
			HX_STACK_LINE(98)
			Dynamic _g2 = ::org::gameplay3d::Control_obj::hx_Control_getBorder(this->nativeObject,state);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(31)
			::org::gameplay3d::Theme_SideRegions _g3 = this->_border->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(31)
			return this->_border = _g3;
		}
		HX_STACK_LINE(28)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,getBorder,return )

::org::gameplay3d::immutable::IRectangle Control_obj::getBounds( ){
	HX_STACK_FRAME("org.gameplay3d.Control","getBounds",0x5292fb0d,"org.gameplay3d.Control.getBounds","org/gameplay3d/Control.hx",104,0xee9b8d0e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_bounds == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Rectangle _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Rectangle >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(104)
			Dynamic nativeObject = ::org::gameplay3d::Control_obj::hx_Control_getBounds(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
			HX_STACK_LINE(29)
			if (((nativeObject == null()))){
				HX_STACK_LINE(29)
				_g1 = null();
			}
			else{
				HX_STACK_LINE(29)
				if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
					HX_STACK_LINE(29)
					::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
					HX_STACK_LINE(29)
					::org::gameplay3d::Rectangle result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Rectangle _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(29)
						result = _g;
						HX_STACK_LINE(29)
						ref->set(result);
					}
					HX_STACK_LINE(29)
					_g1 = result;
				}
				else{
					HX_STACK_LINE(29)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
					HX_STACK_LINE(29)
					_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
				}
			}
		}
		HX_STACK_LINE(29)
		return this->_bounds = _g1;
	}
	else{
		HX_STACK_LINE(104)
		Dynamic _g2 = ::org::gameplay3d::Control_obj::hx_Control_getBounds(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Rectangle _g3 = this->_bounds->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_bounds = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Control_obj,getBounds,return )

::org::gameplay3d::immutable::IRectangle Control_obj::getClip( ){
	HX_STACK_FRAME("org.gameplay3d.Control","getClip",0xd2610d68,"org.gameplay3d.Control.getClip","org/gameplay3d/Control.hx",110,0xee9b8d0e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_clip == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Rectangle _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Rectangle >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(110)
			Dynamic nativeObject = ::org::gameplay3d::Control_obj::hx_Control_getClip(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
			HX_STACK_LINE(29)
			if (((nativeObject == null()))){
				HX_STACK_LINE(29)
				_g1 = null();
			}
			else{
				HX_STACK_LINE(29)
				if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
					HX_STACK_LINE(29)
					::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
					HX_STACK_LINE(29)
					::org::gameplay3d::Rectangle result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Rectangle _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(29)
						result = _g;
						HX_STACK_LINE(29)
						ref->set(result);
					}
					HX_STACK_LINE(29)
					_g1 = result;
				}
				else{
					HX_STACK_LINE(29)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
					HX_STACK_LINE(29)
					_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
				}
			}
		}
		HX_STACK_LINE(29)
		return this->_clip = _g1;
	}
	else{
		HX_STACK_LINE(110)
		Dynamic _g2 = ::org::gameplay3d::Control_obj::hx_Control_getClip(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Rectangle _g3 = this->_clip->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_clip = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Control_obj,getClip,return )

::org::gameplay3d::immutable::IRectangle Control_obj::getClipBounds( ){
	HX_STACK_FRAME("org.gameplay3d.Control","getClipBounds",0x679305fd,"org.gameplay3d.Control.getClipBounds","org/gameplay3d/Control.hx",116,0xee9b8d0e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_clipBounds == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Rectangle _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Rectangle >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(116)
			Dynamic nativeObject = ::org::gameplay3d::Control_obj::hx_Control_getClipBounds(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
			HX_STACK_LINE(29)
			if (((nativeObject == null()))){
				HX_STACK_LINE(29)
				_g1 = null();
			}
			else{
				HX_STACK_LINE(29)
				if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
					HX_STACK_LINE(29)
					::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
					HX_STACK_LINE(29)
					::org::gameplay3d::Rectangle result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Rectangle _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(29)
						result = _g;
						HX_STACK_LINE(29)
						ref->set(result);
					}
					HX_STACK_LINE(29)
					_g1 = result;
				}
				else{
					HX_STACK_LINE(29)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
					HX_STACK_LINE(29)
					_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
				}
			}
		}
		HX_STACK_LINE(29)
		return this->_clipBounds = _g1;
	}
	else{
		HX_STACK_LINE(116)
		Dynamic _g2 = ::org::gameplay3d::Control_obj::hx_Control_getClipBounds(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Rectangle _g3 = this->_clipBounds->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_clipBounds = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Control_obj,getClipBounds,return )

bool Control_obj::getConsumeInputEvents( ){
	HX_STACK_FRAME("org.gameplay3d.Control","getConsumeInputEvents",0x5fb962ff,"org.gameplay3d.Control.getConsumeInputEvents","org/gameplay3d/Control.hx",122,0xee9b8d0e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(122)
	return ::org::gameplay3d::Control_obj::hx_Control_getConsumeInputEvents(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Control_obj,getConsumeInputEvents,return )

::org::gameplay3d::immutable::IVector4 Control_obj::getCursorColor( int state){
	HX_STACK_FRAME("org.gameplay3d.Control","getCursorColor",0xcac2af15,"org.gameplay3d.Control.getCursorColor","org/gameplay3d/Control.hx",128,0xee9b8d0e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(state,"state")
	HX_STACK_LINE(28)
	if (((this->_cursorColor == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector4 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector4 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(128)
			Dynamic nativeObject = ::org::gameplay3d::Control_obj::hx_Control_getCursorColor(this->nativeObject,state);		HX_STACK_VAR(nativeObject,"nativeObject");
			HX_STACK_LINE(29)
			if (((nativeObject == null()))){
				HX_STACK_LINE(29)
				_g1 = null();
			}
			else{
				HX_STACK_LINE(29)
				if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
					HX_STACK_LINE(29)
					::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
					HX_STACK_LINE(29)
					::org::gameplay3d::Vector4 result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Vector4 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(29)
						result = _g;
						HX_STACK_LINE(29)
						ref->set(result);
					}
					HX_STACK_LINE(29)
					_g1 = result;
				}
				else{
					HX_STACK_LINE(29)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
					HX_STACK_LINE(29)
					_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
				}
			}
		}
		HX_STACK_LINE(29)
		return this->_cursorColor = _g1;
	}
	else{
		HX_STACK_LINE(128)
		Dynamic _g2 = ::org::gameplay3d::Control_obj::hx_Control_getCursorColor(this->nativeObject,state);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector4 _g3 = this->_cursorColor->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_cursorColor = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,getCursorColor,return )

::org::gameplay3d::immutable::IRectangle Control_obj::getCursorRegion( int state){
	HX_STACK_FRAME("org.gameplay3d.Control","getCursorRegion",0xd99c7f02,"org.gameplay3d.Control.getCursorRegion","org/gameplay3d/Control.hx",134,0xee9b8d0e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(state,"state")
	HX_STACK_LINE(28)
	if (((this->_cursorRegion == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Rectangle _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Rectangle >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(134)
			Dynamic nativeObject = ::org::gameplay3d::Control_obj::hx_Control_getCursorRegion(this->nativeObject,state);		HX_STACK_VAR(nativeObject,"nativeObject");
			HX_STACK_LINE(29)
			if (((nativeObject == null()))){
				HX_STACK_LINE(29)
				_g1 = null();
			}
			else{
				HX_STACK_LINE(29)
				if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
					HX_STACK_LINE(29)
					::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
					HX_STACK_LINE(29)
					::org::gameplay3d::Rectangle result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Rectangle _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(29)
						result = _g;
						HX_STACK_LINE(29)
						ref->set(result);
					}
					HX_STACK_LINE(29)
					_g1 = result;
				}
				else{
					HX_STACK_LINE(29)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
					HX_STACK_LINE(29)
					_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
				}
			}
		}
		HX_STACK_LINE(29)
		return this->_cursorRegion = _g1;
	}
	else{
		HX_STACK_LINE(134)
		Dynamic _g2 = ::org::gameplay3d::Control_obj::hx_Control_getCursorRegion(this->nativeObject,state);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Rectangle _g3 = this->_cursorRegion->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_cursorRegion = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,getCursorRegion,return )

::org::gameplay3d::immutable::ITheme_UVs Control_obj::getCursorUVs( int state){
	HX_STACK_FRAME("org.gameplay3d.Control","getCursorUVs",0x07fc2044,"org.gameplay3d.Control.getCursorUVs","org/gameplay3d/Control.hx",140,0xee9b8d0e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(state,"state")
	HX_STACK_LINE(28)
	if (((this->_cursorUVs == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Theme_UVs _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Theme_UVs >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(140)
			Dynamic nativeObject = ::org::gameplay3d::Control_obj::hx_Control_getCursorUVs(this->nativeObject,state);		HX_STACK_VAR(nativeObject,"nativeObject");
			HX_STACK_LINE(29)
			if (((nativeObject == null()))){
				HX_STACK_LINE(29)
				_g1 = null();
			}
			else{
				HX_STACK_LINE(29)
				if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
					HX_STACK_LINE(29)
					::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
					HX_STACK_LINE(29)
					::org::gameplay3d::Theme_UVs result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Theme_UVs _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(29)
						result = _g;
						HX_STACK_LINE(29)
						ref->set(result);
					}
					HX_STACK_LINE(29)
					_g1 = result;
				}
				else{
					HX_STACK_LINE(29)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
					HX_STACK_LINE(29)
					_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
				}
			}
		}
		HX_STACK_LINE(29)
		return this->_cursorUVs = _g1;
	}
	else{
		HX_STACK_LINE(140)
		Dynamic _g2 = ::org::gameplay3d::Control_obj::hx_Control_getCursorUVs(this->nativeObject,state);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Theme_UVs _g3 = this->_cursorUVs->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_cursorUVs = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,getCursorUVs,return )

int Control_obj::getFocusIndex( ){
	HX_STACK_FRAME("org.gameplay3d.Control","getFocusIndex",0x4b9ddcb2,"org.gameplay3d.Control.getFocusIndex","org/gameplay3d/Control.hx",146,0xee9b8d0e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(146)
	return ::org::gameplay3d::Control_obj::hx_Control_getFocusIndex(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Control_obj,getFocusIndex,return )

::org::gameplay3d::Font Control_obj::getFont( hx::Null< int >  __o_state){
int state = __o_state.Default(1);
	HX_STACK_FRAME("org.gameplay3d.Control","getFont",0xd45efc67,"org.gameplay3d.Control.getFont","org/gameplay3d/Control.hx",152,0xee9b8d0e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(state,"state")
{
		HX_STACK_LINE(152)
		::Class classObj = hx::ClassOf< ::org::gameplay3d::Font >();		HX_STACK_VAR(classObj,"classObj");
		HX_STACK_LINE(152)
		Dynamic nativeObject = ::org::gameplay3d::Control_obj::hx_Control_getFont(this->nativeObject,state);		HX_STACK_VAR(nativeObject,"nativeObject");
		HX_STACK_LINE(152)
		if (((nativeObject == null()))){
			HX_STACK_LINE(152)
			return null();
		}
		else{
			HX_STACK_LINE(152)
			if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
				HX_STACK_LINE(152)
				::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
				HX_STACK_LINE(152)
				::org::gameplay3d::Font result = ref->get();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(152)
				if (((result == null()))){
					HX_STACK_LINE(152)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
					HX_STACK_LINE(152)
					::org::gameplay3d::Font _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(152)
					result = _g;
					HX_STACK_LINE(152)
					ref->set(result);
				}
				HX_STACK_LINE(152)
				return result;
			}
			else{
				HX_STACK_LINE(152)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
				HX_STACK_LINE(152)
				return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
			}
		}
		HX_STACK_LINE(152)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,getFont,return )

int Control_obj::getFontSize( hx::Null< int >  __o_state){
int state = __o_state.Default(1);
	HX_STACK_FRAME("org.gameplay3d.Control","getFontSize",0xdaff88c8,"org.gameplay3d.Control.getFontSize","org/gameplay3d/Control.hx",158,0xee9b8d0e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(state,"state")
{
		HX_STACK_LINE(158)
		return ::org::gameplay3d::Control_obj::hx_Control_getFontSize(this->nativeObject,state);
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,getFontSize,return )

Float Control_obj::getHeight( ){
	HX_STACK_FRAME("org.gameplay3d.Control","getHeight",0xeec17c7f,"org.gameplay3d.Control.getHeight","org/gameplay3d/Control.hx",164,0xee9b8d0e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(164)
	return ::org::gameplay3d::Control_obj::hx_Control_getHeight(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Control_obj,getHeight,return )

::String Control_obj::getId( ){
	HX_STACK_FRAME("org.gameplay3d.Control","getId",0xb549a473,"org.gameplay3d.Control.getId","org/gameplay3d/Control.hx",170,0xee9b8d0e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(170)
	return ::org::gameplay3d::Control_obj::hx_Control_getId(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Control_obj,getId,return )

::org::gameplay3d::immutable::IVector4 Control_obj::getImageColor( ::String id,int state){
	HX_STACK_FRAME("org.gameplay3d.Control","getImageColor",0x2151d8a0,"org.gameplay3d.Control.getImageColor","org/gameplay3d/Control.hx",176,0xee9b8d0e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(state,"state")
	HX_STACK_LINE(28)
	if (((this->_imageColor == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector4 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector4 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(176)
			Dynamic nativeObject = ::org::gameplay3d::Control_obj::hx_Control_getImageColor(this->nativeObject,id,state);		HX_STACK_VAR(nativeObject,"nativeObject");
			HX_STACK_LINE(29)
			if (((nativeObject == null()))){
				HX_STACK_LINE(29)
				_g1 = null();
			}
			else{
				HX_STACK_LINE(29)
				if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
					HX_STACK_LINE(29)
					::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
					HX_STACK_LINE(29)
					::org::gameplay3d::Vector4 result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Vector4 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(29)
						result = _g;
						HX_STACK_LINE(29)
						ref->set(result);
					}
					HX_STACK_LINE(29)
					_g1 = result;
				}
				else{
					HX_STACK_LINE(29)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
					HX_STACK_LINE(29)
					_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
				}
			}
		}
		HX_STACK_LINE(29)
		return this->_imageColor = _g1;
	}
	else{
		HX_STACK_LINE(176)
		Dynamic _g2 = ::org::gameplay3d::Control_obj::hx_Control_getImageColor(this->nativeObject,id,state);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector4 _g3 = this->_imageColor->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_imageColor = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Control_obj,getImageColor,return )

::org::gameplay3d::immutable::IRectangle Control_obj::getImageRegion( ::String id,int state){
	HX_STACK_FRAME("org.gameplay3d.Control","getImageRegion",0x4051af17,"org.gameplay3d.Control.getImageRegion","org/gameplay3d/Control.hx",182,0xee9b8d0e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(state,"state")
	HX_STACK_LINE(28)
	if (((this->_imageRegion == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Rectangle _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Rectangle >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(182)
			Dynamic nativeObject = ::org::gameplay3d::Control_obj::hx_Control_getImageRegion(this->nativeObject,id,state);		HX_STACK_VAR(nativeObject,"nativeObject");
			HX_STACK_LINE(29)
			if (((nativeObject == null()))){
				HX_STACK_LINE(29)
				_g1 = null();
			}
			else{
				HX_STACK_LINE(29)
				if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
					HX_STACK_LINE(29)
					::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
					HX_STACK_LINE(29)
					::org::gameplay3d::Rectangle result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Rectangle _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(29)
						result = _g;
						HX_STACK_LINE(29)
						ref->set(result);
					}
					HX_STACK_LINE(29)
					_g1 = result;
				}
				else{
					HX_STACK_LINE(29)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
					HX_STACK_LINE(29)
					_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
				}
			}
		}
		HX_STACK_LINE(29)
		return this->_imageRegion = _g1;
	}
	else{
		HX_STACK_LINE(182)
		Dynamic _g2 = ::org::gameplay3d::Control_obj::hx_Control_getImageRegion(this->nativeObject,id,state);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Rectangle _g3 = this->_imageRegion->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_imageRegion = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Control_obj,getImageRegion,return )

::org::gameplay3d::immutable::ITheme_UVs Control_obj::getImageUVs( ::String id,int state){
	HX_STACK_FRAME("org.gameplay3d.Control","getImageUVs",0x9069410f,"org.gameplay3d.Control.getImageUVs","org/gameplay3d/Control.hx",188,0xee9b8d0e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(state,"state")
	HX_STACK_LINE(28)
	if (((this->_imageUVs == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Theme_UVs _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Theme_UVs >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(188)
			Dynamic nativeObject = ::org::gameplay3d::Control_obj::hx_Control_getImageUVs(this->nativeObject,id,state);		HX_STACK_VAR(nativeObject,"nativeObject");
			HX_STACK_LINE(29)
			if (((nativeObject == null()))){
				HX_STACK_LINE(29)
				_g1 = null();
			}
			else{
				HX_STACK_LINE(29)
				if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
					HX_STACK_LINE(29)
					::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
					HX_STACK_LINE(29)
					::org::gameplay3d::Theme_UVs result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Theme_UVs _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(29)
						result = _g;
						HX_STACK_LINE(29)
						ref->set(result);
					}
					HX_STACK_LINE(29)
					_g1 = result;
				}
				else{
					HX_STACK_LINE(29)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
					HX_STACK_LINE(29)
					_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
				}
			}
		}
		HX_STACK_LINE(29)
		return this->_imageUVs = _g1;
	}
	else{
		HX_STACK_LINE(188)
		Dynamic _g2 = ::org::gameplay3d::Control_obj::hx_Control_getImageUVs(this->nativeObject,id,state);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Theme_UVs _g3 = this->_imageUVs->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_imageUVs = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Control_obj,getImageUVs,return )

::org::gameplay3d::immutable::ITheme_SideRegions Control_obj::getMargin( ){
	HX_STACK_FRAME("org.gameplay3d.Control","getMargin",0xa6e2e4c6,"org.gameplay3d.Control.getMargin","org/gameplay3d/Control.hx",194,0xee9b8d0e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_margin == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Theme_SideRegions _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Theme_SideRegions >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(194)
			Dynamic nativeObject = ::org::gameplay3d::Control_obj::hx_Control_getMargin(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
			HX_STACK_LINE(29)
			if (((nativeObject == null()))){
				HX_STACK_LINE(29)
				_g1 = null();
			}
			else{
				HX_STACK_LINE(29)
				if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
					HX_STACK_LINE(29)
					::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
					HX_STACK_LINE(29)
					::org::gameplay3d::Theme_SideRegions result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Theme_SideRegions _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(29)
						result = _g;
						HX_STACK_LINE(29)
						ref->set(result);
					}
					HX_STACK_LINE(29)
					_g1 = result;
				}
				else{
					HX_STACK_LINE(29)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
					HX_STACK_LINE(29)
					_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
				}
			}
		}
		HX_STACK_LINE(29)
		return this->_margin = _g1;
	}
	else{
		HX_STACK_LINE(194)
		Dynamic _g2 = ::org::gameplay3d::Control_obj::hx_Control_getMargin(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Theme_SideRegions _g3 = this->_margin->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_margin = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Control_obj,getMargin,return )

Float Control_obj::getOpacity( hx::Null< int >  __o_state){
int state = __o_state.Default(1);
	HX_STACK_FRAME("org.gameplay3d.Control","getOpacity",0xe5b5ee33,"org.gameplay3d.Control.getOpacity","org/gameplay3d/Control.hx",200,0xee9b8d0e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(state,"state")
{
		HX_STACK_LINE(200)
		return ::org::gameplay3d::Control_obj::hx_Control_getOpacity(this->nativeObject,state);
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,getOpacity,return )

::org::gameplay3d::Theme_SideRegions Control_obj::getPadding( ){
	HX_STACK_FRAME("org.gameplay3d.Control","getPadding",0xcacdea39,"org.gameplay3d.Control.getPadding","org/gameplay3d/Control.hx",206,0xee9b8d0e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_padding == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Theme_SideRegions _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Theme_SideRegions >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(206)
			Dynamic nativeObject = ::org::gameplay3d::Control_obj::hx_Control_getPadding(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
			HX_STACK_LINE(29)
			if (((nativeObject == null()))){
				HX_STACK_LINE(29)
				_g1 = null();
			}
			else{
				HX_STACK_LINE(29)
				if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
					HX_STACK_LINE(29)
					::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
					HX_STACK_LINE(29)
					::org::gameplay3d::Theme_SideRegions result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Theme_SideRegions _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(29)
						result = _g;
						HX_STACK_LINE(29)
						ref->set(result);
					}
					HX_STACK_LINE(29)
					_g1 = result;
				}
				else{
					HX_STACK_LINE(29)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
					HX_STACK_LINE(29)
					_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
				}
			}
		}
		HX_STACK_LINE(29)
		return this->_padding = _g1;
	}
	else{
		HX_STACK_LINE(206)
		Dynamic _g2 = ::org::gameplay3d::Control_obj::hx_Control_getPadding(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Theme_SideRegions _g3 = this->_padding->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_padding = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Control_obj,getPadding,return )

::org::gameplay3d::immutable::IVector4 Control_obj::getSkinColor( hx::Null< int >  __o_state){
int state = __o_state.Default(1);
	HX_STACK_FRAME("org.gameplay3d.Control","getSkinColor",0x2d84a00e,"org.gameplay3d.Control.getSkinColor","org/gameplay3d/Control.hx",212,0xee9b8d0e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(state,"state")
{
		HX_STACK_LINE(28)
		if (((this->_skinColor == null()))){
			HX_STACK_LINE(29)
			::org::gameplay3d::Vector4 _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(29)
			{
				HX_STACK_LINE(29)
				::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector4 >();		HX_STACK_VAR(classObj,"classObj");
				HX_STACK_LINE(212)
				Dynamic nativeObject = ::org::gameplay3d::Control_obj::hx_Control_getSkinColor(this->nativeObject,state);		HX_STACK_VAR(nativeObject,"nativeObject");
				HX_STACK_LINE(29)
				if (((nativeObject == null()))){
					HX_STACK_LINE(29)
					_g1 = null();
				}
				else{
					HX_STACK_LINE(29)
					if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
						HX_STACK_LINE(29)
						::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
						HX_STACK_LINE(29)
						::org::gameplay3d::Vector4 result = ref->get();		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(29)
						if (((result == null()))){
							HX_STACK_LINE(29)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
							HX_STACK_LINE(29)
							::org::gameplay3d::Vector4 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(29)
							result = _g;
							HX_STACK_LINE(29)
							ref->set(result);
						}
						HX_STACK_LINE(29)
						_g1 = result;
					}
					else{
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
						HX_STACK_LINE(29)
						_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
					}
				}
			}
			HX_STACK_LINE(29)
			return this->_skinColor = _g1;
		}
		else{
			HX_STACK_LINE(212)
			Dynamic _g2 = ::org::gameplay3d::Control_obj::hx_Control_getSkinColor(this->nativeObject,state);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(31)
			::org::gameplay3d::Vector4 _g3 = this->_skinColor->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(31)
			return this->_skinColor = _g3;
		}
		HX_STACK_LINE(28)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,getSkinColor,return )

::org::gameplay3d::immutable::IRectangle Control_obj::getSkinRegion( hx::Null< int >  __o_state){
int state = __o_state.Default(1);
	HX_STACK_FRAME("org.gameplay3d.Control","getSkinRegion",0xe08d67e9,"org.gameplay3d.Control.getSkinRegion","org/gameplay3d/Control.hx",218,0xee9b8d0e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(state,"state")
{
		HX_STACK_LINE(28)
		if (((this->_skinRegion == null()))){
			HX_STACK_LINE(29)
			::org::gameplay3d::Rectangle _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(29)
			{
				HX_STACK_LINE(29)
				::Class classObj = hx::ClassOf< ::org::gameplay3d::Rectangle >();		HX_STACK_VAR(classObj,"classObj");
				HX_STACK_LINE(218)
				Dynamic nativeObject = ::org::gameplay3d::Control_obj::hx_Control_getSkinRegion(this->nativeObject,state);		HX_STACK_VAR(nativeObject,"nativeObject");
				HX_STACK_LINE(29)
				if (((nativeObject == null()))){
					HX_STACK_LINE(29)
					_g1 = null();
				}
				else{
					HX_STACK_LINE(29)
					if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
						HX_STACK_LINE(29)
						::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
						HX_STACK_LINE(29)
						::org::gameplay3d::Rectangle result = ref->get();		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(29)
						if (((result == null()))){
							HX_STACK_LINE(29)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
							HX_STACK_LINE(29)
							::org::gameplay3d::Rectangle _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(29)
							result = _g;
							HX_STACK_LINE(29)
							ref->set(result);
						}
						HX_STACK_LINE(29)
						_g1 = result;
					}
					else{
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
						HX_STACK_LINE(29)
						_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
					}
				}
			}
			HX_STACK_LINE(29)
			return this->_skinRegion = _g1;
		}
		else{
			HX_STACK_LINE(218)
			Dynamic _g2 = ::org::gameplay3d::Control_obj::hx_Control_getSkinRegion(this->nativeObject,state);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(31)
			::org::gameplay3d::Rectangle _g3 = this->_skinRegion->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(31)
			return this->_skinRegion = _g3;
		}
		HX_STACK_LINE(28)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,getSkinRegion,return )

int Control_obj::getState( ){
	HX_STACK_FRAME("org.gameplay3d.Control","getState",0x7e379c79,"org.gameplay3d.Control.getState","org/gameplay3d/Control.hx",224,0xee9b8d0e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(224)
	return ::org::gameplay3d::Control_obj::hx_Control_getState(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Control_obj,getState,return )

::org::gameplay3d::Theme_Style Control_obj::getStyle( ){
	HX_STACK_FRAME("org.gameplay3d.Control","getStyle",0x7e49cb99,"org.gameplay3d.Control.getStyle","org/gameplay3d/Control.hx",230,0xee9b8d0e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(230)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Theme_Style >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(230)
	Dynamic nativeObject = ::org::gameplay3d::Control_obj::hx_Control_getStyle(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(230)
	if (((nativeObject == null()))){
		HX_STACK_LINE(230)
		return null();
	}
	else{
		HX_STACK_LINE(230)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(230)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(230)
			::org::gameplay3d::Theme_Style result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(230)
			if (((result == null()))){
				HX_STACK_LINE(230)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(230)
				::org::gameplay3d::Theme_Style _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(230)
				result = _g;
				HX_STACK_LINE(230)
				ref->set(result);
			}
			HX_STACK_LINE(230)
			return result;
		}
		else{
			HX_STACK_LINE(230)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(230)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(230)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Control_obj,getStyle,return )

int Control_obj::getTextAlignment( hx::Null< int >  __o_state){
int state = __o_state.Default(1);
	HX_STACK_FRAME("org.gameplay3d.Control","getTextAlignment",0x2fa546de,"org.gameplay3d.Control.getTextAlignment","org/gameplay3d/Control.hx",236,0xee9b8d0e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(state,"state")
{
		HX_STACK_LINE(236)
		return ::org::gameplay3d::Control_obj::hx_Control_getTextAlignment(this->nativeObject,state);
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,getTextAlignment,return )

::org::gameplay3d::immutable::IVector4 Control_obj::getTextColor( hx::Null< int >  __o_state){
int state = __o_state.Default(1);
	HX_STACK_FRAME("org.gameplay3d.Control","getTextColor",0x7f2d7bde,"org.gameplay3d.Control.getTextColor","org/gameplay3d/Control.hx",242,0xee9b8d0e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(state,"state")
{
		HX_STACK_LINE(28)
		if (((this->_textColor == null()))){
			HX_STACK_LINE(29)
			::org::gameplay3d::Vector4 _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(29)
			{
				HX_STACK_LINE(29)
				::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector4 >();		HX_STACK_VAR(classObj,"classObj");
				HX_STACK_LINE(242)
				Dynamic nativeObject = ::org::gameplay3d::Control_obj::hx_Control_getTextColor(this->nativeObject,state);		HX_STACK_VAR(nativeObject,"nativeObject");
				HX_STACK_LINE(29)
				if (((nativeObject == null()))){
					HX_STACK_LINE(29)
					_g1 = null();
				}
				else{
					HX_STACK_LINE(29)
					if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
						HX_STACK_LINE(29)
						::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
						HX_STACK_LINE(29)
						::org::gameplay3d::Vector4 result = ref->get();		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(29)
						if (((result == null()))){
							HX_STACK_LINE(29)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
							HX_STACK_LINE(29)
							::org::gameplay3d::Vector4 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(29)
							result = _g;
							HX_STACK_LINE(29)
							ref->set(result);
						}
						HX_STACK_LINE(29)
						_g1 = result;
					}
					else{
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
						HX_STACK_LINE(29)
						_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
					}
				}
			}
			HX_STACK_LINE(29)
			return this->_textColor = _g1;
		}
		else{
			HX_STACK_LINE(242)
			Dynamic _g2 = ::org::gameplay3d::Control_obj::hx_Control_getTextColor(this->nativeObject,state);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(31)
			::org::gameplay3d::Vector4 _g3 = this->_textColor->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(31)
			return this->_textColor = _g3;
		}
		HX_STACK_LINE(28)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,getTextColor,return )

bool Control_obj::getTextRightToLeft( hx::Null< int >  __o_state){
int state = __o_state.Default(1);
	HX_STACK_FRAME("org.gameplay3d.Control","getTextRightToLeft",0xdff2d8d9,"org.gameplay3d.Control.getTextRightToLeft","org/gameplay3d/Control.hx",248,0xee9b8d0e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(state,"state")
{
		HX_STACK_LINE(248)
		return ::org::gameplay3d::Control_obj::hx_Control_getTextRightToLeft(this->nativeObject,state);
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,getTextRightToLeft,return )

::String Control_obj::getType( ){
	HX_STACK_FRAME("org.gameplay3d.Control","getType",0xdda79152,"org.gameplay3d.Control.getType","org/gameplay3d/Control.hx",254,0xee9b8d0e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(254)
	return ::org::gameplay3d::Control_obj::hx_Control_getType(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Control_obj,getType,return )

Float Control_obj::getWidth( ){
	HX_STACK_FRAME("org.gameplay3d.Control","getWidth",0xc48edc6e,"org.gameplay3d.Control.getWidth","org/gameplay3d/Control.hx",260,0xee9b8d0e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(260)
	return ::org::gameplay3d::Control_obj::hx_Control_getWidth(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Control_obj,getWidth,return )

Float Control_obj::getX( ){
	HX_STACK_FRAME("org.gameplay3d.Control","getX",0x83aed2e0,"org.gameplay3d.Control.getX","org/gameplay3d/Control.hx",266,0xee9b8d0e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(266)
	return ::org::gameplay3d::Control_obj::hx_Control_getX(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Control_obj,getX,return )

Float Control_obj::getY( ){
	HX_STACK_FRAME("org.gameplay3d.Control","getY",0x83aed2e1,"org.gameplay3d.Control.getY","org/gameplay3d/Control.hx",272,0xee9b8d0e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(272)
	return ::org::gameplay3d::Control_obj::hx_Control_getY(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Control_obj,getY,return )

int Control_obj::getZIndex( ){
	HX_STACK_FRAME("org.gameplay3d.Control","getZIndex",0x054184d0,"org.gameplay3d.Control.getZIndex","org/gameplay3d/Control.hx",278,0xee9b8d0e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(278)
	return ::org::gameplay3d::Control_obj::hx_Control_getZIndex(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Control_obj,getZIndex,return )

bool Control_obj::isContainer( ){
	HX_STACK_FRAME("org.gameplay3d.Control","isContainer",0x842e33d9,"org.gameplay3d.Control.isContainer","org/gameplay3d/Control.hx",284,0xee9b8d0e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(284)
	return ::org::gameplay3d::Control_obj::hx_Control_isContainer(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Control_obj,isContainer,return )

bool Control_obj::isEnabled( ){
	HX_STACK_FRAME("org.gameplay3d.Control","isEnabled",0xf24e6d19,"org.gameplay3d.Control.isEnabled","org/gameplay3d/Control.hx",290,0xee9b8d0e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(290)
	return ::org::gameplay3d::Control_obj::hx_Control_isEnabled(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Control_obj,isEnabled,return )

Void Control_obj::setAlignment( int alignment){
{
		HX_STACK_FRAME("org.gameplay3d.Control","setAlignment",0x9b1a80bf,"org.gameplay3d.Control.setAlignment","org/gameplay3d/Control.hx",296,0xee9b8d0e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(alignment,"alignment")
		HX_STACK_LINE(296)
		::org::gameplay3d::Control_obj::hx_Control_setAlignment(this->nativeObject,alignment);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,setAlignment,(void))

Void Control_obj::setAnimationPropertyValue( int propertyId,::org::gameplay3d::AnimationValue value,hx::Null< Float >  __o_blendWeight){
Float blendWeight = __o_blendWeight.Default(1.0);
	HX_STACK_FRAME("org.gameplay3d.Control","setAnimationPropertyValue",0xf27e89dc,"org.gameplay3d.Control.setAnimationPropertyValue","org/gameplay3d/Control.hx",302,0xee9b8d0e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(propertyId,"propertyId")
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(blendWeight,"blendWeight")
{
		HX_STACK_LINE(302)
		::org::gameplay3d::Control_obj::hx_Control_setAnimationPropertyValue(this->nativeObject,propertyId,(  (((value == null()))) ? Dynamic(null()) : Dynamic(value->nativeObject) ),blendWeight);
	}
return null();
}


Void Control_obj::setAutoHeight( bool autoHeight){
{
		HX_STACK_FRAME("org.gameplay3d.Control","setAutoHeight",0x7e449b5a,"org.gameplay3d.Control.setAutoHeight","org/gameplay3d/Control.hx",308,0xee9b8d0e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(autoHeight,"autoHeight")
		HX_STACK_LINE(308)
		::org::gameplay3d::Control_obj::hx_Control_setAutoHeight(this->nativeObject,autoHeight);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,setAutoHeight,(void))

Void Control_obj::setAutoWidth( bool autoWidth){
{
		HX_STACK_FRAME("org.gameplay3d.Control","setAutoWidth",0x594a91f3,"org.gameplay3d.Control.setAutoWidth","org/gameplay3d/Control.hx",314,0xee9b8d0e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(autoWidth,"autoWidth")
		HX_STACK_LINE(314)
		::org::gameplay3d::Control_obj::hx_Control_setAutoWidth(this->nativeObject,autoWidth);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,setAutoWidth,(void))

Void Control_obj::setBorder( Float top,Float bottom,Float left,Float right,hx::Null< int >  __o_states){
int states = __o_states.Default(15);
	HX_STACK_FRAME("org.gameplay3d.Control","setBorder",0x33e0ad90,"org.gameplay3d.Control.setBorder","org/gameplay3d/Control.hx",320,0xee9b8d0e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(top,"top")
	HX_STACK_ARG(bottom,"bottom")
	HX_STACK_ARG(left,"left")
	HX_STACK_ARG(right,"right")
	HX_STACK_ARG(states,"states")
{
		HX_STACK_LINE(320)
		::org::gameplay3d::Control_obj::hx_Control_setBorder(this->nativeObject,top,bottom,left,right,states);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Control_obj,setBorder,(void))

Void Control_obj::setBounds( ::org::gameplay3d::immutable::IRectangle bounds){
{
		HX_STACK_FRAME("org.gameplay3d.Control","setBounds",0x35e3e719,"org.gameplay3d.Control.setBounds","org/gameplay3d/Control.hx",326,0xee9b8d0e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bounds,"bounds")
		HX_STACK_LINE(326)
		::org::gameplay3d::Control_obj::hx_Control_setBounds(this->nativeObject,(  (((bounds == null()))) ? Dynamic(null()) : Dynamic(bounds->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,setBounds,(void))

Void Control_obj::setConsumeInputEvents( bool consume){
{
		HX_STACK_FRAME("org.gameplay3d.Control","setConsumeInputEvents",0xb3c2310b,"org.gameplay3d.Control.setConsumeInputEvents","org/gameplay3d/Control.hx",332,0xee9b8d0e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(consume,"consume")
		HX_STACK_LINE(332)
		::org::gameplay3d::Control_obj::hx_Control_setConsumeInputEvents(this->nativeObject,consume);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,setConsumeInputEvents,(void))

Void Control_obj::setCursorColor( ::org::gameplay3d::immutable::IVector4 color,int states){
{
		HX_STACK_FRAME("org.gameplay3d.Control","setCursorColor",0xeae29789,"org.gameplay3d.Control.setCursorColor","org/gameplay3d/Control.hx",338,0xee9b8d0e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(states,"states")
		HX_STACK_LINE(338)
		::org::gameplay3d::Control_obj::hx_Control_setCursorColor(this->nativeObject,(  (((color == null()))) ? Dynamic(null()) : Dynamic(color->__Field(HX_CSTRING("nativeObject"),true)) ),states);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Control_obj,setCursorColor,(void))

Void Control_obj::setCursorRegion( ::org::gameplay3d::immutable::IRectangle region,int states){
{
		HX_STACK_FRAME("org.gameplay3d.Control","setCursorRegion",0xd567fc0e,"org.gameplay3d.Control.setCursorRegion","org/gameplay3d/Control.hx",344,0xee9b8d0e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(region,"region")
		HX_STACK_ARG(states,"states")
		HX_STACK_LINE(344)
		::org::gameplay3d::Control_obj::hx_Control_setCursorRegion(this->nativeObject,(  (((region == null()))) ? Dynamic(null()) : Dynamic(region->__Field(HX_CSTRING("nativeObject"),true)) ),states);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Control_obj,setCursorRegion,(void))

Void Control_obj::setFocusIndex( int focusIndex){
{
		HX_STACK_FRAME("org.gameplay3d.Control","setFocusIndex",0x90a3bebe,"org.gameplay3d.Control.setFocusIndex","org/gameplay3d/Control.hx",350,0xee9b8d0e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(focusIndex,"focusIndex")
		HX_STACK_LINE(350)
		::org::gameplay3d::Control_obj::hx_Control_setFocusIndex(this->nativeObject,focusIndex);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,setFocusIndex,(void))

Void Control_obj::setFont( ::org::gameplay3d::Font font,hx::Null< int >  __o_states){
int states = __o_states.Default(15);
	HX_STACK_FRAME("org.gameplay3d.Control","setFont",0xc7608d73,"org.gameplay3d.Control.setFont","org/gameplay3d/Control.hx",356,0xee9b8d0e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(font,"font")
	HX_STACK_ARG(states,"states")
{
		HX_STACK_LINE(356)
		::org::gameplay3d::Control_obj::hx_Control_setFont(this->nativeObject,(  (((font == null()))) ? Dynamic(null()) : Dynamic(font->nativeObject) ),states);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Control_obj,setFont,(void))

Void Control_obj::setFontSize( int size,hx::Null< int >  __o_states){
int states = __o_states.Default(15);
	HX_STACK_FRAME("org.gameplay3d.Control","setFontSize",0xe56c8fd4,"org.gameplay3d.Control.setFontSize","org/gameplay3d/Control.hx",362,0xee9b8d0e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(states,"states")
{
		HX_STACK_LINE(362)
		::org::gameplay3d::Control_obj::hx_Control_setFontSize(this->nativeObject,size,states);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Control_obj,setFontSize,(void))

Void Control_obj::setHeight( Float height){
{
		HX_STACK_FRAME("org.gameplay3d.Control","setHeight",0xd212688b,"org.gameplay3d.Control.setHeight","org/gameplay3d/Control.hx",368,0xee9b8d0e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(368)
		::org::gameplay3d::Control_obj::hx_Control_setHeight(this->nativeObject,height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,setHeight,(void))

Void Control_obj::setImageColor( ::String id,::org::gameplay3d::immutable::IVector4 color,hx::Null< int >  __o_states){
int states = __o_states.Default(15);
	HX_STACK_FRAME("org.gameplay3d.Control","setImageColor",0x6657baac,"org.gameplay3d.Control.setImageColor","org/gameplay3d/Control.hx",374,0xee9b8d0e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(states,"states")
{
		HX_STACK_LINE(374)
		::org::gameplay3d::Control_obj::hx_Control_setImageColor(this->nativeObject,id,(  (((color == null()))) ? Dynamic(null()) : Dynamic(color->__Field(HX_CSTRING("nativeObject"),true)) ),states);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Control_obj,setImageColor,(void))

Void Control_obj::setImageRegion( ::String id,::org::gameplay3d::immutable::IRectangle region,hx::Null< int >  __o_states){
int states = __o_states.Default(15);
	HX_STACK_FRAME("org.gameplay3d.Control","setImageRegion",0x6071978b,"org.gameplay3d.Control.setImageRegion","org/gameplay3d/Control.hx",380,0xee9b8d0e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(region,"region")
	HX_STACK_ARG(states,"states")
{
		HX_STACK_LINE(380)
		::org::gameplay3d::Control_obj::hx_Control_setImageRegion(this->nativeObject,id,(  (((region == null()))) ? Dynamic(null()) : Dynamic(region->__Field(HX_CSTRING("nativeObject"),true)) ),states);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Control_obj,setImageRegion,(void))

Void Control_obj::setMargin( Float top,Float bottom,Float left,Float right){
{
		HX_STACK_FRAME("org.gameplay3d.Control","setMargin",0x8a33d0d2,"org.gameplay3d.Control.setMargin","org/gameplay3d/Control.hx",386,0xee9b8d0e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(top,"top")
		HX_STACK_ARG(bottom,"bottom")
		HX_STACK_ARG(left,"left")
		HX_STACK_ARG(right,"right")
		HX_STACK_LINE(386)
		::org::gameplay3d::Control_obj::hx_Control_setMargin(this->nativeObject,top,bottom,left,right);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Control_obj,setMargin,(void))

Void Control_obj::setVisible( bool visible){
{
		HX_STACK_FRAME("org.gameplay3d.Control","setVisible",0xa0f2a74e,"org.gameplay3d.Control.setVisible","org/gameplay3d/Control.hx",392,0xee9b8d0e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(visible,"visible")
		HX_STACK_LINE(392)
		::org::gameplay3d::Control_obj::hx_Control_setVisible(visible);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,setVisible,(void))

bool Control_obj::isVisible( ){
	HX_STACK_FRAME("org.gameplay3d.Control","isVisible",0x1741e10a,"org.gameplay3d.Control.isVisible","org/gameplay3d/Control.hx",398,0xee9b8d0e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(398)
	return ::org::gameplay3d::Control_obj::hx_Control_isVisible(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Control_obj,isVisible,return )

Void Control_obj::setOpacity( Float opacity,hx::Null< int >  __o_states){
int states = __o_states.Default(15);
	HX_STACK_FRAME("org.gameplay3d.Control","setOpacity",0xe9338ca7,"org.gameplay3d.Control.setOpacity","org/gameplay3d/Control.hx",404,0xee9b8d0e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(opacity,"opacity")
	HX_STACK_ARG(states,"states")
{
		HX_STACK_LINE(404)
		::org::gameplay3d::Control_obj::hx_Control_setOpacity(this->nativeObject,opacity,states);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Control_obj,setOpacity,(void))

Void Control_obj::setPadding( Float top,Float bottom,Float left,Float right){
{
		HX_STACK_FRAME("org.gameplay3d.Control","setPadding",0xce4b88ad,"org.gameplay3d.Control.setPadding","org/gameplay3d/Control.hx",410,0xee9b8d0e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(top,"top")
		HX_STACK_ARG(bottom,"bottom")
		HX_STACK_ARG(left,"left")
		HX_STACK_ARG(right,"right")
		HX_STACK_LINE(410)
		::org::gameplay3d::Control_obj::hx_Control_setPadding(this->nativeObject,top,bottom,left,right);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Control_obj,setPadding,(void))

Void Control_obj::setPosition( Float x,Float y){
{
		HX_STACK_FRAME("org.gameplay3d.Control","setPosition",0xe195724d,"org.gameplay3d.Control.setPosition","org/gameplay3d/Control.hx",416,0xee9b8d0e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(416)
		::org::gameplay3d::Control_obj::hx_Control_setPosition(this->nativeObject,x,y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Control_obj,setPosition,(void))

Void Control_obj::setSize( Float width,Float height){
{
		HX_STACK_FRAME("org.gameplay3d.Control","setSize",0xcff3d065,"org.gameplay3d.Control.setSize","org/gameplay3d/Control.hx",422,0xee9b8d0e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(422)
		::org::gameplay3d::Control_obj::hx_Control_setSize(this->nativeObject,width,height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Control_obj,setSize,(void))

Void Control_obj::setSkinColor( ::org::gameplay3d::immutable::IVector4 color,hx::Null< int >  __o_states){
int states = __o_states.Default(15);
	HX_STACK_FRAME("org.gameplay3d.Control","setSkinColor",0x427dc382,"org.gameplay3d.Control.setSkinColor","org/gameplay3d/Control.hx",428,0xee9b8d0e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(states,"states")
{
		HX_STACK_LINE(428)
		::org::gameplay3d::Control_obj::hx_Control_setSkinColor(this->nativeObject,(  (((color == null()))) ? Dynamic(null()) : Dynamic(color->__Field(HX_CSTRING("nativeObject"),true)) ),states);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Control_obj,setSkinColor,(void))

Void Control_obj::setSkinRegion( ::org::gameplay3d::immutable::IRectangle region,hx::Null< int >  __o_states){
int states = __o_states.Default(15);
	HX_STACK_FRAME("org.gameplay3d.Control","setSkinRegion",0x259349f5,"org.gameplay3d.Control.setSkinRegion","org/gameplay3d/Control.hx",434,0xee9b8d0e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(region,"region")
	HX_STACK_ARG(states,"states")
{
		HX_STACK_LINE(434)
		::org::gameplay3d::Control_obj::hx_Control_setSkinRegion(this->nativeObject,(  (((region == null()))) ? Dynamic(null()) : Dynamic(region->__Field(HX_CSTRING("nativeObject"),true)) ),states);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Control_obj,setSkinRegion,(void))

Void Control_obj::setState( int state){
{
		HX_STACK_FRAME("org.gameplay3d.Control","setState",0x2c94f5ed,"org.gameplay3d.Control.setState","org/gameplay3d/Control.hx",440,0xee9b8d0e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(state,"state")
		HX_STACK_LINE(440)
		::org::gameplay3d::Control_obj::hx_Control_setState(this->nativeObject,state);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,setState,(void))

Void Control_obj::setStyle( ::org::gameplay3d::Theme_Style style){
{
		HX_STACK_FRAME("org.gameplay3d.Control","setStyle",0x2ca7250d,"org.gameplay3d.Control.setStyle","org/gameplay3d/Control.hx",446,0xee9b8d0e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(style,"style")
		HX_STACK_LINE(446)
		::org::gameplay3d::Control_obj::hx_Control_setStyle(this->nativeObject,(  (((style == null()))) ? Dynamic(null()) : Dynamic(style->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,setStyle,(void))

Void Control_obj::setTextAlignment( int alignment,hx::Null< int >  __o_states){
int states = __o_states.Default(15);
	HX_STACK_FRAME("org.gameplay3d.Control","setTextAlignment",0x85e73452,"org.gameplay3d.Control.setTextAlignment","org/gameplay3d/Control.hx",452,0xee9b8d0e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(alignment,"alignment")
	HX_STACK_ARG(states,"states")
{
		HX_STACK_LINE(452)
		::org::gameplay3d::Control_obj::hx_Control_setTextAlignment(this->nativeObject,alignment,states);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Control_obj,setTextAlignment,(void))

Void Control_obj::setTextColor( ::org::gameplay3d::immutable::IVector4 color,hx::Null< int >  __o_states){
int states = __o_states.Default(15);
	HX_STACK_FRAME("org.gameplay3d.Control","setTextColor",0x94269f52,"org.gameplay3d.Control.setTextColor","org/gameplay3d/Control.hx",458,0xee9b8d0e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(states,"states")
{
		HX_STACK_LINE(458)
		::org::gameplay3d::Control_obj::hx_Control_setTextColor(this->nativeObject,(  (((color == null()))) ? Dynamic(null()) : Dynamic(color->__Field(HX_CSTRING("nativeObject"),true)) ),states);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Control_obj,setTextColor,(void))

Void Control_obj::setTextRightToLeft( bool rightToLeft,hx::Null< int >  __o_states){
int states = __o_states.Default(15);
	HX_STACK_FRAME("org.gameplay3d.Control","setTextRightToLeft",0xbca20b4d,"org.gameplay3d.Control.setTextRightToLeft","org/gameplay3d/Control.hx",464,0xee9b8d0e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rightToLeft,"rightToLeft")
	HX_STACK_ARG(states,"states")
{
		HX_STACK_LINE(464)
		::org::gameplay3d::Control_obj::hx_Control_setTextRightToLeft(this->nativeObject,rightToLeft,states);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Control_obj,setTextRightToLeft,(void))

Void Control_obj::setWidth( Float width){
{
		HX_STACK_FRAME("org.gameplay3d.Control","setWidth",0x72ec35e2,"org.gameplay3d.Control.setWidth","org/gameplay3d/Control.hx",470,0xee9b8d0e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_LINE(470)
		::org::gameplay3d::Control_obj::hx_Control_setWidth(this->nativeObject,width);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,setWidth,(void))

Void Control_obj::setZIndex( int zIndex){
{
		HX_STACK_FRAME("org.gameplay3d.Control","setZIndex",0xe89270dc,"org.gameplay3d.Control.setZIndex","org/gameplay3d/Control.hx",476,0xee9b8d0e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(zIndex,"zIndex")
		HX_STACK_LINE(476)
		::org::gameplay3d::Control_obj::hx_Control_setZIndex(this->nativeObject,zIndex);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,setZIndex,(void))

int Control_obj::STATE_ALL;

int Control_obj::ANIMATE_POSITION;

int Control_obj::ANIMATE_POSITION_X;

int Control_obj::ANIMATE_POSITION_Y;

int Control_obj::ANIMATE_SIZE;

int Control_obj::ANIMATE_SIZE_WIDTH;

int Control_obj::ANIMATE_SIZE_HEIGHT;

int Control_obj::ANIMATE_OPACITY;

Dynamic Control_obj::hx_Control_addListener;

Dynamic Control_obj::hx_Control_setEnabled;

Dynamic Control_obj::hx_Control_getAlignment;

Dynamic Control_obj::hx_Control_getAnimationPropertyComponentCount;

Dynamic Control_obj::hx_Control_getAnimationPropertyValue;

Dynamic Control_obj::hx_Control_getAutoHeight;

Dynamic Control_obj::hx_Control_getAutoWidth;

Dynamic Control_obj::hx_Control_getBorder;

Dynamic Control_obj::hx_Control_getBounds;

Dynamic Control_obj::hx_Control_getClip;

Dynamic Control_obj::hx_Control_getClipBounds;

Dynamic Control_obj::hx_Control_getConsumeInputEvents;

Dynamic Control_obj::hx_Control_getCursorColor;

Dynamic Control_obj::hx_Control_getCursorRegion;

Dynamic Control_obj::hx_Control_getCursorUVs;

Dynamic Control_obj::hx_Control_getFocusIndex;

Dynamic Control_obj::hx_Control_getFont;

Dynamic Control_obj::hx_Control_getFontSize;

Dynamic Control_obj::hx_Control_getHeight;

Dynamic Control_obj::hx_Control_getId;

Dynamic Control_obj::hx_Control_getImageColor;

Dynamic Control_obj::hx_Control_getImageRegion;

Dynamic Control_obj::hx_Control_getImageUVs;

Dynamic Control_obj::hx_Control_getMargin;

Dynamic Control_obj::hx_Control_getOpacity;

Dynamic Control_obj::hx_Control_getPadding;

Dynamic Control_obj::hx_Control_getSkinColor;

Dynamic Control_obj::hx_Control_getSkinRegion;

Dynamic Control_obj::hx_Control_getState;

Dynamic Control_obj::hx_Control_getStyle;

Dynamic Control_obj::hx_Control_getTextAlignment;

Dynamic Control_obj::hx_Control_getTextColor;

Dynamic Control_obj::hx_Control_getTextRightToLeft;

Dynamic Control_obj::hx_Control_getType;

Dynamic Control_obj::hx_Control_getWidth;

Dynamic Control_obj::hx_Control_getX;

Dynamic Control_obj::hx_Control_getY;

Dynamic Control_obj::hx_Control_getZIndex;

Dynamic Control_obj::hx_Control_isContainer;

Dynamic Control_obj::hx_Control_isEnabled;

Dynamic Control_obj::hx_Control_setAlignment;

Dynamic Control_obj::hx_Control_setAnimationPropertyValue;

Dynamic Control_obj::hx_Control_setAutoHeight;

Dynamic Control_obj::hx_Control_setAutoWidth;

Dynamic Control_obj::hx_Control_setBorder;

Dynamic Control_obj::hx_Control_setBounds;

Dynamic Control_obj::hx_Control_setConsumeInputEvents;

Dynamic Control_obj::hx_Control_setCursorColor;

Dynamic Control_obj::hx_Control_setCursorRegion;

Dynamic Control_obj::hx_Control_setFocusIndex;

Dynamic Control_obj::hx_Control_setFont;

Dynamic Control_obj::hx_Control_setFontSize;

Dynamic Control_obj::hx_Control_setHeight;

Dynamic Control_obj::hx_Control_setImageColor;

Dynamic Control_obj::hx_Control_setImageRegion;

Dynamic Control_obj::hx_Control_setMargin;

Dynamic Control_obj::hx_Control_setVisible;

Dynamic Control_obj::hx_Control_isVisible;

Dynamic Control_obj::hx_Control_setOpacity;

Dynamic Control_obj::hx_Control_setPadding;

Dynamic Control_obj::hx_Control_setPosition;

Dynamic Control_obj::hx_Control_setSize;

Dynamic Control_obj::hx_Control_setSkinColor;

Dynamic Control_obj::hx_Control_setSkinRegion;

Dynamic Control_obj::hx_Control_setState;

Dynamic Control_obj::hx_Control_setStyle;

Dynamic Control_obj::hx_Control_setTextAlignment;

Dynamic Control_obj::hx_Control_setTextColor;

Dynamic Control_obj::hx_Control_setTextRightToLeft;

Dynamic Control_obj::hx_Control_setWidth;

Dynamic Control_obj::hx_Control_setZIndex;


Control_obj::Control_obj()
{
}

void Control_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Control);
	HX_MARK_MEMBER_NAME(_cursorColor,"_cursorColor");
	HX_MARK_MEMBER_NAME(_imageColor,"_imageColor");
	HX_MARK_MEMBER_NAME(_skinColor,"_skinColor");
	HX_MARK_MEMBER_NAME(_textColor,"_textColor");
	HX_MARK_MEMBER_NAME(_bounds,"_bounds");
	HX_MARK_MEMBER_NAME(_clip,"_clip");
	HX_MARK_MEMBER_NAME(_clipBounds,"_clipBounds");
	HX_MARK_MEMBER_NAME(_cursorRegion,"_cursorRegion");
	HX_MARK_MEMBER_NAME(_imageRegion,"_imageRegion");
	HX_MARK_MEMBER_NAME(_skinRegion,"_skinRegion");
	HX_MARK_MEMBER_NAME(_cursorUVs,"_cursorUVs");
	HX_MARK_MEMBER_NAME(_imageUVs,"_imageUVs");
	HX_MARK_MEMBER_NAME(_border,"_border");
	HX_MARK_MEMBER_NAME(_margin,"_margin");
	HX_MARK_MEMBER_NAME(_padding,"_padding");
	::org::gameplay3d::intern::NativeBinding_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Control_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_cursorColor,"_cursorColor");
	HX_VISIT_MEMBER_NAME(_imageColor,"_imageColor");
	HX_VISIT_MEMBER_NAME(_skinColor,"_skinColor");
	HX_VISIT_MEMBER_NAME(_textColor,"_textColor");
	HX_VISIT_MEMBER_NAME(_bounds,"_bounds");
	HX_VISIT_MEMBER_NAME(_clip,"_clip");
	HX_VISIT_MEMBER_NAME(_clipBounds,"_clipBounds");
	HX_VISIT_MEMBER_NAME(_cursorRegion,"_cursorRegion");
	HX_VISIT_MEMBER_NAME(_imageRegion,"_imageRegion");
	HX_VISIT_MEMBER_NAME(_skinRegion,"_skinRegion");
	HX_VISIT_MEMBER_NAME(_cursorUVs,"_cursorUVs");
	HX_VISIT_MEMBER_NAME(_imageUVs,"_imageUVs");
	HX_VISIT_MEMBER_NAME(_border,"_border");
	HX_VISIT_MEMBER_NAME(_margin,"_margin");
	HX_VISIT_MEMBER_NAME(_padding,"_padding");
	::org::gameplay3d::intern::NativeBinding_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Control_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"getX") ) { return getX_dyn(); }
		if (HX_FIELD_EQ(inName,"getY") ) { return getY_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_clip") ) { return _clip; }
		if (HX_FIELD_EQ(inName,"getId") ) { return getId_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_bounds") ) { return _bounds; }
		if (HX_FIELD_EQ(inName,"_border") ) { return _border; }
		if (HX_FIELD_EQ(inName,"_margin") ) { return _margin; }
		if (HX_FIELD_EQ(inName,"getClip") ) { return getClip_dyn(); }
		if (HX_FIELD_EQ(inName,"getFont") ) { return getFont_dyn(); }
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
		if (HX_FIELD_EQ(inName,"setFont") ) { return setFont_dyn(); }
		if (HX_FIELD_EQ(inName,"setSize") ) { return setSize_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_padding") ) { return _padding; }
		if (HX_FIELD_EQ(inName,"getState") ) { return getState_dyn(); }
		if (HX_FIELD_EQ(inName,"getStyle") ) { return getStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"getWidth") ) { return getWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"setState") ) { return setState_dyn(); }
		if (HX_FIELD_EQ(inName,"setStyle") ) { return setStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"setWidth") ) { return setWidth_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_imageUVs") ) { return _imageUVs; }
		if (HX_FIELD_EQ(inName,"getBorder") ) { return getBorder_dyn(); }
		if (HX_FIELD_EQ(inName,"getBounds") ) { return getBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"getHeight") ) { return getHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"getMargin") ) { return getMargin_dyn(); }
		if (HX_FIELD_EQ(inName,"getZIndex") ) { return getZIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"isEnabled") ) { return isEnabled_dyn(); }
		if (HX_FIELD_EQ(inName,"setBorder") ) { return setBorder_dyn(); }
		if (HX_FIELD_EQ(inName,"setBounds") ) { return setBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"setHeight") ) { return setHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"setMargin") ) { return setMargin_dyn(); }
		if (HX_FIELD_EQ(inName,"isVisible") ) { return isVisible_dyn(); }
		if (HX_FIELD_EQ(inName,"setZIndex") ) { return setZIndex_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_skinColor") ) { return _skinColor; }
		if (HX_FIELD_EQ(inName,"_textColor") ) { return _textColor; }
		if (HX_FIELD_EQ(inName,"_cursorUVs") ) { return _cursorUVs; }
		if (HX_FIELD_EQ(inName,"setEnabled") ) { return setEnabled_dyn(); }
		if (HX_FIELD_EQ(inName,"getOpacity") ) { return getOpacity_dyn(); }
		if (HX_FIELD_EQ(inName,"getPadding") ) { return getPadding_dyn(); }
		if (HX_FIELD_EQ(inName,"setVisible") ) { return setVisible_dyn(); }
		if (HX_FIELD_EQ(inName,"setOpacity") ) { return setOpacity_dyn(); }
		if (HX_FIELD_EQ(inName,"setPadding") ) { return setPadding_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_imageColor") ) { return _imageColor; }
		if (HX_FIELD_EQ(inName,"_clipBounds") ) { return _clipBounds; }
		if (HX_FIELD_EQ(inName,"_skinRegion") ) { return _skinRegion; }
		if (HX_FIELD_EQ(inName,"addListener") ) { return addListener_dyn(); }
		if (HX_FIELD_EQ(inName,"getFontSize") ) { return getFontSize_dyn(); }
		if (HX_FIELD_EQ(inName,"getImageUVs") ) { return getImageUVs_dyn(); }
		if (HX_FIELD_EQ(inName,"isContainer") ) { return isContainer_dyn(); }
		if (HX_FIELD_EQ(inName,"setFontSize") ) { return setFontSize_dyn(); }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return setPosition_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_cursorColor") ) { return _cursorColor; }
		if (HX_FIELD_EQ(inName,"_imageRegion") ) { return _imageRegion; }
		if (HX_FIELD_EQ(inName,"getAlignment") ) { return getAlignment_dyn(); }
		if (HX_FIELD_EQ(inName,"getAutoWidth") ) { return getAutoWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"getCursorUVs") ) { return getCursorUVs_dyn(); }
		if (HX_FIELD_EQ(inName,"getSkinColor") ) { return getSkinColor_dyn(); }
		if (HX_FIELD_EQ(inName,"getTextColor") ) { return getTextColor_dyn(); }
		if (HX_FIELD_EQ(inName,"setAlignment") ) { return setAlignment_dyn(); }
		if (HX_FIELD_EQ(inName,"setAutoWidth") ) { return setAutoWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"setSkinColor") ) { return setSkinColor_dyn(); }
		if (HX_FIELD_EQ(inName,"setTextColor") ) { return setTextColor_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_cursorRegion") ) { return _cursorRegion; }
		if (HX_FIELD_EQ(inName,"getAutoHeight") ) { return getAutoHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"getClipBounds") ) { return getClipBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"getFocusIndex") ) { return getFocusIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"getImageColor") ) { return getImageColor_dyn(); }
		if (HX_FIELD_EQ(inName,"getSkinRegion") ) { return getSkinRegion_dyn(); }
		if (HX_FIELD_EQ(inName,"setAutoHeight") ) { return setAutoHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"setFocusIndex") ) { return setFocusIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"setImageColor") ) { return setImageColor_dyn(); }
		if (HX_FIELD_EQ(inName,"setSkinRegion") ) { return setSkinRegion_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getCursorColor") ) { return getCursorColor_dyn(); }
		if (HX_FIELD_EQ(inName,"getImageRegion") ) { return getImageRegion_dyn(); }
		if (HX_FIELD_EQ(inName,"setCursorColor") ) { return setCursorColor_dyn(); }
		if (HX_FIELD_EQ(inName,"setImageRegion") ) { return setImageRegion_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hx_Control_getX") ) { return hx_Control_getX; }
		if (HX_FIELD_EQ(inName,"hx_Control_getY") ) { return hx_Control_getY; }
		if (HX_FIELD_EQ(inName,"getCursorRegion") ) { return getCursorRegion_dyn(); }
		if (HX_FIELD_EQ(inName,"setCursorRegion") ) { return setCursorRegion_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hx_Control_getId") ) { return hx_Control_getId; }
		if (HX_FIELD_EQ(inName,"getTextAlignment") ) { return getTextAlignment_dyn(); }
		if (HX_FIELD_EQ(inName,"setTextAlignment") ) { return setTextAlignment_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hx_Control_getClip") ) { return hx_Control_getClip; }
		if (HX_FIELD_EQ(inName,"hx_Control_getFont") ) { return hx_Control_getFont; }
		if (HX_FIELD_EQ(inName,"hx_Control_getType") ) { return hx_Control_getType; }
		if (HX_FIELD_EQ(inName,"hx_Control_setFont") ) { return hx_Control_setFont; }
		if (HX_FIELD_EQ(inName,"hx_Control_setSize") ) { return hx_Control_setSize; }
		if (HX_FIELD_EQ(inName,"getTextRightToLeft") ) { return getTextRightToLeft_dyn(); }
		if (HX_FIELD_EQ(inName,"setTextRightToLeft") ) { return setTextRightToLeft_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hx_Control_getState") ) { return hx_Control_getState; }
		if (HX_FIELD_EQ(inName,"hx_Control_getStyle") ) { return hx_Control_getStyle; }
		if (HX_FIELD_EQ(inName,"hx_Control_getWidth") ) { return hx_Control_getWidth; }
		if (HX_FIELD_EQ(inName,"hx_Control_setState") ) { return hx_Control_setState; }
		if (HX_FIELD_EQ(inName,"hx_Control_setStyle") ) { return hx_Control_setStyle; }
		if (HX_FIELD_EQ(inName,"hx_Control_setWidth") ) { return hx_Control_setWidth; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Control_getBorder") ) { return hx_Control_getBorder; }
		if (HX_FIELD_EQ(inName,"hx_Control_getBounds") ) { return hx_Control_getBounds; }
		if (HX_FIELD_EQ(inName,"hx_Control_getHeight") ) { return hx_Control_getHeight; }
		if (HX_FIELD_EQ(inName,"hx_Control_getMargin") ) { return hx_Control_getMargin; }
		if (HX_FIELD_EQ(inName,"hx_Control_getZIndex") ) { return hx_Control_getZIndex; }
		if (HX_FIELD_EQ(inName,"hx_Control_isEnabled") ) { return hx_Control_isEnabled; }
		if (HX_FIELD_EQ(inName,"hx_Control_setBorder") ) { return hx_Control_setBorder; }
		if (HX_FIELD_EQ(inName,"hx_Control_setBounds") ) { return hx_Control_setBounds; }
		if (HX_FIELD_EQ(inName,"hx_Control_setHeight") ) { return hx_Control_setHeight; }
		if (HX_FIELD_EQ(inName,"hx_Control_setMargin") ) { return hx_Control_setMargin; }
		if (HX_FIELD_EQ(inName,"hx_Control_isVisible") ) { return hx_Control_isVisible; }
		if (HX_FIELD_EQ(inName,"hx_Control_setZIndex") ) { return hx_Control_setZIndex; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hx_Control_setEnabled") ) { return hx_Control_setEnabled; }
		if (HX_FIELD_EQ(inName,"hx_Control_getOpacity") ) { return hx_Control_getOpacity; }
		if (HX_FIELD_EQ(inName,"hx_Control_getPadding") ) { return hx_Control_getPadding; }
		if (HX_FIELD_EQ(inName,"hx_Control_setVisible") ) { return hx_Control_setVisible; }
		if (HX_FIELD_EQ(inName,"hx_Control_setOpacity") ) { return hx_Control_setOpacity; }
		if (HX_FIELD_EQ(inName,"hx_Control_setPadding") ) { return hx_Control_setPadding; }
		if (HX_FIELD_EQ(inName,"getConsumeInputEvents") ) { return getConsumeInputEvents_dyn(); }
		if (HX_FIELD_EQ(inName,"setConsumeInputEvents") ) { return setConsumeInputEvents_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Control_addListener") ) { return hx_Control_addListener; }
		if (HX_FIELD_EQ(inName,"hx_Control_getFontSize") ) { return hx_Control_getFontSize; }
		if (HX_FIELD_EQ(inName,"hx_Control_getImageUVs") ) { return hx_Control_getImageUVs; }
		if (HX_FIELD_EQ(inName,"hx_Control_isContainer") ) { return hx_Control_isContainer; }
		if (HX_FIELD_EQ(inName,"hx_Control_setFontSize") ) { return hx_Control_setFontSize; }
		if (HX_FIELD_EQ(inName,"hx_Control_setPosition") ) { return hx_Control_setPosition; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_Control_getAlignment") ) { return hx_Control_getAlignment; }
		if (HX_FIELD_EQ(inName,"hx_Control_getAutoWidth") ) { return hx_Control_getAutoWidth; }
		if (HX_FIELD_EQ(inName,"hx_Control_getCursorUVs") ) { return hx_Control_getCursorUVs; }
		if (HX_FIELD_EQ(inName,"hx_Control_getSkinColor") ) { return hx_Control_getSkinColor; }
		if (HX_FIELD_EQ(inName,"hx_Control_getTextColor") ) { return hx_Control_getTextColor; }
		if (HX_FIELD_EQ(inName,"hx_Control_setAlignment") ) { return hx_Control_setAlignment; }
		if (HX_FIELD_EQ(inName,"hx_Control_setAutoWidth") ) { return hx_Control_setAutoWidth; }
		if (HX_FIELD_EQ(inName,"hx_Control_setSkinColor") ) { return hx_Control_setSkinColor; }
		if (HX_FIELD_EQ(inName,"hx_Control_setTextColor") ) { return hx_Control_setTextColor; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_Control_getAutoHeight") ) { return hx_Control_getAutoHeight; }
		if (HX_FIELD_EQ(inName,"hx_Control_getClipBounds") ) { return hx_Control_getClipBounds; }
		if (HX_FIELD_EQ(inName,"hx_Control_getFocusIndex") ) { return hx_Control_getFocusIndex; }
		if (HX_FIELD_EQ(inName,"hx_Control_getImageColor") ) { return hx_Control_getImageColor; }
		if (HX_FIELD_EQ(inName,"hx_Control_getSkinRegion") ) { return hx_Control_getSkinRegion; }
		if (HX_FIELD_EQ(inName,"hx_Control_setAutoHeight") ) { return hx_Control_setAutoHeight; }
		if (HX_FIELD_EQ(inName,"hx_Control_setFocusIndex") ) { return hx_Control_setFocusIndex; }
		if (HX_FIELD_EQ(inName,"hx_Control_setImageColor") ) { return hx_Control_setImageColor; }
		if (HX_FIELD_EQ(inName,"hx_Control_setSkinRegion") ) { return hx_Control_setSkinRegion; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_Control_getCursorColor") ) { return hx_Control_getCursorColor; }
		if (HX_FIELD_EQ(inName,"hx_Control_getImageRegion") ) { return hx_Control_getImageRegion; }
		if (HX_FIELD_EQ(inName,"hx_Control_setCursorColor") ) { return hx_Control_setCursorColor; }
		if (HX_FIELD_EQ(inName,"hx_Control_setImageRegion") ) { return hx_Control_setImageRegion; }
		if (HX_FIELD_EQ(inName,"getAnimationPropertyValue") ) { return getAnimationPropertyValue_dyn(); }
		if (HX_FIELD_EQ(inName,"setAnimationPropertyValue") ) { return setAnimationPropertyValue_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_Control_getCursorRegion") ) { return hx_Control_getCursorRegion; }
		if (HX_FIELD_EQ(inName,"hx_Control_setCursorRegion") ) { return hx_Control_setCursorRegion; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"hx_Control_getTextAlignment") ) { return hx_Control_getTextAlignment; }
		if (HX_FIELD_EQ(inName,"hx_Control_setTextAlignment") ) { return hx_Control_setTextAlignment; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_Control_getTextRightToLeft") ) { return hx_Control_getTextRightToLeft; }
		if (HX_FIELD_EQ(inName,"hx_Control_setTextRightToLeft") ) { return hx_Control_setTextRightToLeft; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"hx_Control_getConsumeInputEvents") ) { return hx_Control_getConsumeInputEvents; }
		if (HX_FIELD_EQ(inName,"hx_Control_setConsumeInputEvents") ) { return hx_Control_setConsumeInputEvents; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"getAnimationPropertyComponentCount") ) { return getAnimationPropertyComponentCount_dyn(); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"hx_Control_getAnimationPropertyValue") ) { return hx_Control_getAnimationPropertyValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_setAnimationPropertyValue") ) { return hx_Control_setAnimationPropertyValue; }
		break;
	case 45:
		if (HX_FIELD_EQ(inName,"hx_Control_getAnimationPropertyComponentCount") ) { return hx_Control_getAnimationPropertyComponentCount; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Control_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_clip") ) { _clip=inValue.Cast< ::org::gameplay3d::Rectangle >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_bounds") ) { _bounds=inValue.Cast< ::org::gameplay3d::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_border") ) { _border=inValue.Cast< ::org::gameplay3d::Theme_SideRegions >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_margin") ) { _margin=inValue.Cast< ::org::gameplay3d::Theme_SideRegions >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_padding") ) { _padding=inValue.Cast< ::org::gameplay3d::Theme_SideRegions >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_imageUVs") ) { _imageUVs=inValue.Cast< ::org::gameplay3d::Theme_UVs >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_skinColor") ) { _skinColor=inValue.Cast< ::org::gameplay3d::Vector4 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_textColor") ) { _textColor=inValue.Cast< ::org::gameplay3d::Vector4 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cursorUVs") ) { _cursorUVs=inValue.Cast< ::org::gameplay3d::Theme_UVs >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_imageColor") ) { _imageColor=inValue.Cast< ::org::gameplay3d::Vector4 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_clipBounds") ) { _clipBounds=inValue.Cast< ::org::gameplay3d::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_skinRegion") ) { _skinRegion=inValue.Cast< ::org::gameplay3d::Rectangle >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_cursorColor") ) { _cursorColor=inValue.Cast< ::org::gameplay3d::Vector4 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_imageRegion") ) { _imageRegion=inValue.Cast< ::org::gameplay3d::Rectangle >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_cursorRegion") ) { _cursorRegion=inValue.Cast< ::org::gameplay3d::Rectangle >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hx_Control_getX") ) { hx_Control_getX=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_getY") ) { hx_Control_getY=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hx_Control_getId") ) { hx_Control_getId=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hx_Control_getClip") ) { hx_Control_getClip=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_getFont") ) { hx_Control_getFont=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_getType") ) { hx_Control_getType=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_setFont") ) { hx_Control_setFont=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_setSize") ) { hx_Control_setSize=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hx_Control_getState") ) { hx_Control_getState=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_getStyle") ) { hx_Control_getStyle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_getWidth") ) { hx_Control_getWidth=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_setState") ) { hx_Control_setState=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_setStyle") ) { hx_Control_setStyle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_setWidth") ) { hx_Control_setWidth=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Control_getBorder") ) { hx_Control_getBorder=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_getBounds") ) { hx_Control_getBounds=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_getHeight") ) { hx_Control_getHeight=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_getMargin") ) { hx_Control_getMargin=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_getZIndex") ) { hx_Control_getZIndex=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_isEnabled") ) { hx_Control_isEnabled=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_setBorder") ) { hx_Control_setBorder=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_setBounds") ) { hx_Control_setBounds=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_setHeight") ) { hx_Control_setHeight=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_setMargin") ) { hx_Control_setMargin=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_isVisible") ) { hx_Control_isVisible=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_setZIndex") ) { hx_Control_setZIndex=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hx_Control_setEnabled") ) { hx_Control_setEnabled=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_getOpacity") ) { hx_Control_getOpacity=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_getPadding") ) { hx_Control_getPadding=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_setVisible") ) { hx_Control_setVisible=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_setOpacity") ) { hx_Control_setOpacity=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_setPadding") ) { hx_Control_setPadding=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Control_addListener") ) { hx_Control_addListener=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_getFontSize") ) { hx_Control_getFontSize=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_getImageUVs") ) { hx_Control_getImageUVs=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_isContainer") ) { hx_Control_isContainer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_setFontSize") ) { hx_Control_setFontSize=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_setPosition") ) { hx_Control_setPosition=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_Control_getAlignment") ) { hx_Control_getAlignment=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_getAutoWidth") ) { hx_Control_getAutoWidth=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_getCursorUVs") ) { hx_Control_getCursorUVs=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_getSkinColor") ) { hx_Control_getSkinColor=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_getTextColor") ) { hx_Control_getTextColor=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_setAlignment") ) { hx_Control_setAlignment=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_setAutoWidth") ) { hx_Control_setAutoWidth=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_setSkinColor") ) { hx_Control_setSkinColor=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_setTextColor") ) { hx_Control_setTextColor=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_Control_getAutoHeight") ) { hx_Control_getAutoHeight=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_getClipBounds") ) { hx_Control_getClipBounds=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_getFocusIndex") ) { hx_Control_getFocusIndex=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_getImageColor") ) { hx_Control_getImageColor=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_getSkinRegion") ) { hx_Control_getSkinRegion=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_setAutoHeight") ) { hx_Control_setAutoHeight=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_setFocusIndex") ) { hx_Control_setFocusIndex=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_setImageColor") ) { hx_Control_setImageColor=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_setSkinRegion") ) { hx_Control_setSkinRegion=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_Control_getCursorColor") ) { hx_Control_getCursorColor=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_getImageRegion") ) { hx_Control_getImageRegion=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_setCursorColor") ) { hx_Control_setCursorColor=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_setImageRegion") ) { hx_Control_setImageRegion=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_Control_getCursorRegion") ) { hx_Control_getCursorRegion=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_setCursorRegion") ) { hx_Control_setCursorRegion=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"hx_Control_getTextAlignment") ) { hx_Control_getTextAlignment=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_setTextAlignment") ) { hx_Control_setTextAlignment=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_Control_getTextRightToLeft") ) { hx_Control_getTextRightToLeft=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_setTextRightToLeft") ) { hx_Control_setTextRightToLeft=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"hx_Control_getConsumeInputEvents") ) { hx_Control_getConsumeInputEvents=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_setConsumeInputEvents") ) { hx_Control_setConsumeInputEvents=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"hx_Control_getAnimationPropertyValue") ) { hx_Control_getAnimationPropertyValue=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Control_setAnimationPropertyValue") ) { hx_Control_setAnimationPropertyValue=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 45:
		if (HX_FIELD_EQ(inName,"hx_Control_getAnimationPropertyComponentCount") ) { hx_Control_getAnimationPropertyComponentCount=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Control_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_cursorColor"));
	outFields->push(HX_CSTRING("_imageColor"));
	outFields->push(HX_CSTRING("_skinColor"));
	outFields->push(HX_CSTRING("_textColor"));
	outFields->push(HX_CSTRING("_bounds"));
	outFields->push(HX_CSTRING("_clip"));
	outFields->push(HX_CSTRING("_clipBounds"));
	outFields->push(HX_CSTRING("_cursorRegion"));
	outFields->push(HX_CSTRING("_imageRegion"));
	outFields->push(HX_CSTRING("_skinRegion"));
	outFields->push(HX_CSTRING("_cursorUVs"));
	outFields->push(HX_CSTRING("_imageUVs"));
	outFields->push(HX_CSTRING("_border"));
	outFields->push(HX_CSTRING("_margin"));
	outFields->push(HX_CSTRING("_padding"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("STATE_ALL"),
	HX_CSTRING("ANIMATE_POSITION"),
	HX_CSTRING("ANIMATE_POSITION_X"),
	HX_CSTRING("ANIMATE_POSITION_Y"),
	HX_CSTRING("ANIMATE_SIZE"),
	HX_CSTRING("ANIMATE_SIZE_WIDTH"),
	HX_CSTRING("ANIMATE_SIZE_HEIGHT"),
	HX_CSTRING("ANIMATE_OPACITY"),
	HX_CSTRING("hx_Control_addListener"),
	HX_CSTRING("hx_Control_setEnabled"),
	HX_CSTRING("hx_Control_getAlignment"),
	HX_CSTRING("hx_Control_getAnimationPropertyComponentCount"),
	HX_CSTRING("hx_Control_getAnimationPropertyValue"),
	HX_CSTRING("hx_Control_getAutoHeight"),
	HX_CSTRING("hx_Control_getAutoWidth"),
	HX_CSTRING("hx_Control_getBorder"),
	HX_CSTRING("hx_Control_getBounds"),
	HX_CSTRING("hx_Control_getClip"),
	HX_CSTRING("hx_Control_getClipBounds"),
	HX_CSTRING("hx_Control_getConsumeInputEvents"),
	HX_CSTRING("hx_Control_getCursorColor"),
	HX_CSTRING("hx_Control_getCursorRegion"),
	HX_CSTRING("hx_Control_getCursorUVs"),
	HX_CSTRING("hx_Control_getFocusIndex"),
	HX_CSTRING("hx_Control_getFont"),
	HX_CSTRING("hx_Control_getFontSize"),
	HX_CSTRING("hx_Control_getHeight"),
	HX_CSTRING("hx_Control_getId"),
	HX_CSTRING("hx_Control_getImageColor"),
	HX_CSTRING("hx_Control_getImageRegion"),
	HX_CSTRING("hx_Control_getImageUVs"),
	HX_CSTRING("hx_Control_getMargin"),
	HX_CSTRING("hx_Control_getOpacity"),
	HX_CSTRING("hx_Control_getPadding"),
	HX_CSTRING("hx_Control_getSkinColor"),
	HX_CSTRING("hx_Control_getSkinRegion"),
	HX_CSTRING("hx_Control_getState"),
	HX_CSTRING("hx_Control_getStyle"),
	HX_CSTRING("hx_Control_getTextAlignment"),
	HX_CSTRING("hx_Control_getTextColor"),
	HX_CSTRING("hx_Control_getTextRightToLeft"),
	HX_CSTRING("hx_Control_getType"),
	HX_CSTRING("hx_Control_getWidth"),
	HX_CSTRING("hx_Control_getX"),
	HX_CSTRING("hx_Control_getY"),
	HX_CSTRING("hx_Control_getZIndex"),
	HX_CSTRING("hx_Control_isContainer"),
	HX_CSTRING("hx_Control_isEnabled"),
	HX_CSTRING("hx_Control_setAlignment"),
	HX_CSTRING("hx_Control_setAnimationPropertyValue"),
	HX_CSTRING("hx_Control_setAutoHeight"),
	HX_CSTRING("hx_Control_setAutoWidth"),
	HX_CSTRING("hx_Control_setBorder"),
	HX_CSTRING("hx_Control_setBounds"),
	HX_CSTRING("hx_Control_setConsumeInputEvents"),
	HX_CSTRING("hx_Control_setCursorColor"),
	HX_CSTRING("hx_Control_setCursorRegion"),
	HX_CSTRING("hx_Control_setFocusIndex"),
	HX_CSTRING("hx_Control_setFont"),
	HX_CSTRING("hx_Control_setFontSize"),
	HX_CSTRING("hx_Control_setHeight"),
	HX_CSTRING("hx_Control_setImageColor"),
	HX_CSTRING("hx_Control_setImageRegion"),
	HX_CSTRING("hx_Control_setMargin"),
	HX_CSTRING("hx_Control_setVisible"),
	HX_CSTRING("hx_Control_isVisible"),
	HX_CSTRING("hx_Control_setOpacity"),
	HX_CSTRING("hx_Control_setPadding"),
	HX_CSTRING("hx_Control_setPosition"),
	HX_CSTRING("hx_Control_setSize"),
	HX_CSTRING("hx_Control_setSkinColor"),
	HX_CSTRING("hx_Control_setSkinRegion"),
	HX_CSTRING("hx_Control_setState"),
	HX_CSTRING("hx_Control_setStyle"),
	HX_CSTRING("hx_Control_setTextAlignment"),
	HX_CSTRING("hx_Control_setTextColor"),
	HX_CSTRING("hx_Control_setTextRightToLeft"),
	HX_CSTRING("hx_Control_setWidth"),
	HX_CSTRING("hx_Control_setZIndex"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::org::gameplay3d::Vector4*/ ,(int)offsetof(Control_obj,_cursorColor),HX_CSTRING("_cursorColor")},
	{hx::fsObject /*::org::gameplay3d::Vector4*/ ,(int)offsetof(Control_obj,_imageColor),HX_CSTRING("_imageColor")},
	{hx::fsObject /*::org::gameplay3d::Vector4*/ ,(int)offsetof(Control_obj,_skinColor),HX_CSTRING("_skinColor")},
	{hx::fsObject /*::org::gameplay3d::Vector4*/ ,(int)offsetof(Control_obj,_textColor),HX_CSTRING("_textColor")},
	{hx::fsObject /*::org::gameplay3d::Rectangle*/ ,(int)offsetof(Control_obj,_bounds),HX_CSTRING("_bounds")},
	{hx::fsObject /*::org::gameplay3d::Rectangle*/ ,(int)offsetof(Control_obj,_clip),HX_CSTRING("_clip")},
	{hx::fsObject /*::org::gameplay3d::Rectangle*/ ,(int)offsetof(Control_obj,_clipBounds),HX_CSTRING("_clipBounds")},
	{hx::fsObject /*::org::gameplay3d::Rectangle*/ ,(int)offsetof(Control_obj,_cursorRegion),HX_CSTRING("_cursorRegion")},
	{hx::fsObject /*::org::gameplay3d::Rectangle*/ ,(int)offsetof(Control_obj,_imageRegion),HX_CSTRING("_imageRegion")},
	{hx::fsObject /*::org::gameplay3d::Rectangle*/ ,(int)offsetof(Control_obj,_skinRegion),HX_CSTRING("_skinRegion")},
	{hx::fsObject /*::org::gameplay3d::Theme_UVs*/ ,(int)offsetof(Control_obj,_cursorUVs),HX_CSTRING("_cursorUVs")},
	{hx::fsObject /*::org::gameplay3d::Theme_UVs*/ ,(int)offsetof(Control_obj,_imageUVs),HX_CSTRING("_imageUVs")},
	{hx::fsObject /*::org::gameplay3d::Theme_SideRegions*/ ,(int)offsetof(Control_obj,_border),HX_CSTRING("_border")},
	{hx::fsObject /*::org::gameplay3d::Theme_SideRegions*/ ,(int)offsetof(Control_obj,_margin),HX_CSTRING("_margin")},
	{hx::fsObject /*::org::gameplay3d::Theme_SideRegions*/ ,(int)offsetof(Control_obj,_padding),HX_CSTRING("_padding")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_cursorColor"),
	HX_CSTRING("_imageColor"),
	HX_CSTRING("_skinColor"),
	HX_CSTRING("_textColor"),
	HX_CSTRING("_bounds"),
	HX_CSTRING("_clip"),
	HX_CSTRING("_clipBounds"),
	HX_CSTRING("_cursorRegion"),
	HX_CSTRING("_imageRegion"),
	HX_CSTRING("_skinRegion"),
	HX_CSTRING("_cursorUVs"),
	HX_CSTRING("_imageUVs"),
	HX_CSTRING("_border"),
	HX_CSTRING("_margin"),
	HX_CSTRING("_padding"),
	HX_CSTRING("addListener"),
	HX_CSTRING("setEnabled"),
	HX_CSTRING("getAlignment"),
	HX_CSTRING("getAnimationPropertyComponentCount"),
	HX_CSTRING("getAnimationPropertyValue"),
	HX_CSTRING("getAutoHeight"),
	HX_CSTRING("getAutoWidth"),
	HX_CSTRING("getBorder"),
	HX_CSTRING("getBounds"),
	HX_CSTRING("getClip"),
	HX_CSTRING("getClipBounds"),
	HX_CSTRING("getConsumeInputEvents"),
	HX_CSTRING("getCursorColor"),
	HX_CSTRING("getCursorRegion"),
	HX_CSTRING("getCursorUVs"),
	HX_CSTRING("getFocusIndex"),
	HX_CSTRING("getFont"),
	HX_CSTRING("getFontSize"),
	HX_CSTRING("getHeight"),
	HX_CSTRING("getId"),
	HX_CSTRING("getImageColor"),
	HX_CSTRING("getImageRegion"),
	HX_CSTRING("getImageUVs"),
	HX_CSTRING("getMargin"),
	HX_CSTRING("getOpacity"),
	HX_CSTRING("getPadding"),
	HX_CSTRING("getSkinColor"),
	HX_CSTRING("getSkinRegion"),
	HX_CSTRING("getState"),
	HX_CSTRING("getStyle"),
	HX_CSTRING("getTextAlignment"),
	HX_CSTRING("getTextColor"),
	HX_CSTRING("getTextRightToLeft"),
	HX_CSTRING("getType"),
	HX_CSTRING("getWidth"),
	HX_CSTRING("getX"),
	HX_CSTRING("getY"),
	HX_CSTRING("getZIndex"),
	HX_CSTRING("isContainer"),
	HX_CSTRING("isEnabled"),
	HX_CSTRING("setAlignment"),
	HX_CSTRING("setAnimationPropertyValue"),
	HX_CSTRING("setAutoHeight"),
	HX_CSTRING("setAutoWidth"),
	HX_CSTRING("setBorder"),
	HX_CSTRING("setBounds"),
	HX_CSTRING("setConsumeInputEvents"),
	HX_CSTRING("setCursorColor"),
	HX_CSTRING("setCursorRegion"),
	HX_CSTRING("setFocusIndex"),
	HX_CSTRING("setFont"),
	HX_CSTRING("setFontSize"),
	HX_CSTRING("setHeight"),
	HX_CSTRING("setImageColor"),
	HX_CSTRING("setImageRegion"),
	HX_CSTRING("setMargin"),
	HX_CSTRING("setVisible"),
	HX_CSTRING("isVisible"),
	HX_CSTRING("setOpacity"),
	HX_CSTRING("setPadding"),
	HX_CSTRING("setPosition"),
	HX_CSTRING("setSize"),
	HX_CSTRING("setSkinColor"),
	HX_CSTRING("setSkinRegion"),
	HX_CSTRING("setState"),
	HX_CSTRING("setStyle"),
	HX_CSTRING("setTextAlignment"),
	HX_CSTRING("setTextColor"),
	HX_CSTRING("setTextRightToLeft"),
	HX_CSTRING("setWidth"),
	HX_CSTRING("setZIndex"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Control_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Control_obj::STATE_ALL,"STATE_ALL");
	HX_MARK_MEMBER_NAME(Control_obj::ANIMATE_POSITION,"ANIMATE_POSITION");
	HX_MARK_MEMBER_NAME(Control_obj::ANIMATE_POSITION_X,"ANIMATE_POSITION_X");
	HX_MARK_MEMBER_NAME(Control_obj::ANIMATE_POSITION_Y,"ANIMATE_POSITION_Y");
	HX_MARK_MEMBER_NAME(Control_obj::ANIMATE_SIZE,"ANIMATE_SIZE");
	HX_MARK_MEMBER_NAME(Control_obj::ANIMATE_SIZE_WIDTH,"ANIMATE_SIZE_WIDTH");
	HX_MARK_MEMBER_NAME(Control_obj::ANIMATE_SIZE_HEIGHT,"ANIMATE_SIZE_HEIGHT");
	HX_MARK_MEMBER_NAME(Control_obj::ANIMATE_OPACITY,"ANIMATE_OPACITY");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_addListener,"hx_Control_addListener");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_setEnabled,"hx_Control_setEnabled");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_getAlignment,"hx_Control_getAlignment");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_getAnimationPropertyComponentCount,"hx_Control_getAnimationPropertyComponentCount");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_getAnimationPropertyValue,"hx_Control_getAnimationPropertyValue");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_getAutoHeight,"hx_Control_getAutoHeight");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_getAutoWidth,"hx_Control_getAutoWidth");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_getBorder,"hx_Control_getBorder");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_getBounds,"hx_Control_getBounds");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_getClip,"hx_Control_getClip");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_getClipBounds,"hx_Control_getClipBounds");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_getConsumeInputEvents,"hx_Control_getConsumeInputEvents");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_getCursorColor,"hx_Control_getCursorColor");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_getCursorRegion,"hx_Control_getCursorRegion");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_getCursorUVs,"hx_Control_getCursorUVs");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_getFocusIndex,"hx_Control_getFocusIndex");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_getFont,"hx_Control_getFont");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_getFontSize,"hx_Control_getFontSize");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_getHeight,"hx_Control_getHeight");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_getId,"hx_Control_getId");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_getImageColor,"hx_Control_getImageColor");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_getImageRegion,"hx_Control_getImageRegion");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_getImageUVs,"hx_Control_getImageUVs");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_getMargin,"hx_Control_getMargin");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_getOpacity,"hx_Control_getOpacity");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_getPadding,"hx_Control_getPadding");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_getSkinColor,"hx_Control_getSkinColor");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_getSkinRegion,"hx_Control_getSkinRegion");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_getState,"hx_Control_getState");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_getStyle,"hx_Control_getStyle");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_getTextAlignment,"hx_Control_getTextAlignment");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_getTextColor,"hx_Control_getTextColor");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_getTextRightToLeft,"hx_Control_getTextRightToLeft");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_getType,"hx_Control_getType");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_getWidth,"hx_Control_getWidth");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_getX,"hx_Control_getX");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_getY,"hx_Control_getY");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_getZIndex,"hx_Control_getZIndex");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_isContainer,"hx_Control_isContainer");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_isEnabled,"hx_Control_isEnabled");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_setAlignment,"hx_Control_setAlignment");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_setAnimationPropertyValue,"hx_Control_setAnimationPropertyValue");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_setAutoHeight,"hx_Control_setAutoHeight");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_setAutoWidth,"hx_Control_setAutoWidth");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_setBorder,"hx_Control_setBorder");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_setBounds,"hx_Control_setBounds");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_setConsumeInputEvents,"hx_Control_setConsumeInputEvents");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_setCursorColor,"hx_Control_setCursorColor");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_setCursorRegion,"hx_Control_setCursorRegion");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_setFocusIndex,"hx_Control_setFocusIndex");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_setFont,"hx_Control_setFont");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_setFontSize,"hx_Control_setFontSize");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_setHeight,"hx_Control_setHeight");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_setImageColor,"hx_Control_setImageColor");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_setImageRegion,"hx_Control_setImageRegion");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_setMargin,"hx_Control_setMargin");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_setVisible,"hx_Control_setVisible");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_isVisible,"hx_Control_isVisible");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_setOpacity,"hx_Control_setOpacity");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_setPadding,"hx_Control_setPadding");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_setPosition,"hx_Control_setPosition");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_setSize,"hx_Control_setSize");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_setSkinColor,"hx_Control_setSkinColor");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_setSkinRegion,"hx_Control_setSkinRegion");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_setState,"hx_Control_setState");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_setStyle,"hx_Control_setStyle");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_setTextAlignment,"hx_Control_setTextAlignment");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_setTextColor,"hx_Control_setTextColor");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_setTextRightToLeft,"hx_Control_setTextRightToLeft");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_setWidth,"hx_Control_setWidth");
	HX_MARK_MEMBER_NAME(Control_obj::hx_Control_setZIndex,"hx_Control_setZIndex");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Control_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Control_obj::STATE_ALL,"STATE_ALL");
	HX_VISIT_MEMBER_NAME(Control_obj::ANIMATE_POSITION,"ANIMATE_POSITION");
	HX_VISIT_MEMBER_NAME(Control_obj::ANIMATE_POSITION_X,"ANIMATE_POSITION_X");
	HX_VISIT_MEMBER_NAME(Control_obj::ANIMATE_POSITION_Y,"ANIMATE_POSITION_Y");
	HX_VISIT_MEMBER_NAME(Control_obj::ANIMATE_SIZE,"ANIMATE_SIZE");
	HX_VISIT_MEMBER_NAME(Control_obj::ANIMATE_SIZE_WIDTH,"ANIMATE_SIZE_WIDTH");
	HX_VISIT_MEMBER_NAME(Control_obj::ANIMATE_SIZE_HEIGHT,"ANIMATE_SIZE_HEIGHT");
	HX_VISIT_MEMBER_NAME(Control_obj::ANIMATE_OPACITY,"ANIMATE_OPACITY");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_addListener,"hx_Control_addListener");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_setEnabled,"hx_Control_setEnabled");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_getAlignment,"hx_Control_getAlignment");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_getAnimationPropertyComponentCount,"hx_Control_getAnimationPropertyComponentCount");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_getAnimationPropertyValue,"hx_Control_getAnimationPropertyValue");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_getAutoHeight,"hx_Control_getAutoHeight");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_getAutoWidth,"hx_Control_getAutoWidth");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_getBorder,"hx_Control_getBorder");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_getBounds,"hx_Control_getBounds");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_getClip,"hx_Control_getClip");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_getClipBounds,"hx_Control_getClipBounds");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_getConsumeInputEvents,"hx_Control_getConsumeInputEvents");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_getCursorColor,"hx_Control_getCursorColor");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_getCursorRegion,"hx_Control_getCursorRegion");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_getCursorUVs,"hx_Control_getCursorUVs");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_getFocusIndex,"hx_Control_getFocusIndex");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_getFont,"hx_Control_getFont");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_getFontSize,"hx_Control_getFontSize");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_getHeight,"hx_Control_getHeight");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_getId,"hx_Control_getId");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_getImageColor,"hx_Control_getImageColor");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_getImageRegion,"hx_Control_getImageRegion");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_getImageUVs,"hx_Control_getImageUVs");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_getMargin,"hx_Control_getMargin");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_getOpacity,"hx_Control_getOpacity");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_getPadding,"hx_Control_getPadding");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_getSkinColor,"hx_Control_getSkinColor");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_getSkinRegion,"hx_Control_getSkinRegion");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_getState,"hx_Control_getState");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_getStyle,"hx_Control_getStyle");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_getTextAlignment,"hx_Control_getTextAlignment");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_getTextColor,"hx_Control_getTextColor");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_getTextRightToLeft,"hx_Control_getTextRightToLeft");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_getType,"hx_Control_getType");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_getWidth,"hx_Control_getWidth");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_getX,"hx_Control_getX");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_getY,"hx_Control_getY");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_getZIndex,"hx_Control_getZIndex");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_isContainer,"hx_Control_isContainer");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_isEnabled,"hx_Control_isEnabled");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_setAlignment,"hx_Control_setAlignment");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_setAnimationPropertyValue,"hx_Control_setAnimationPropertyValue");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_setAutoHeight,"hx_Control_setAutoHeight");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_setAutoWidth,"hx_Control_setAutoWidth");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_setBorder,"hx_Control_setBorder");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_setBounds,"hx_Control_setBounds");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_setConsumeInputEvents,"hx_Control_setConsumeInputEvents");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_setCursorColor,"hx_Control_setCursorColor");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_setCursorRegion,"hx_Control_setCursorRegion");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_setFocusIndex,"hx_Control_setFocusIndex");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_setFont,"hx_Control_setFont");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_setFontSize,"hx_Control_setFontSize");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_setHeight,"hx_Control_setHeight");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_setImageColor,"hx_Control_setImageColor");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_setImageRegion,"hx_Control_setImageRegion");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_setMargin,"hx_Control_setMargin");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_setVisible,"hx_Control_setVisible");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_isVisible,"hx_Control_isVisible");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_setOpacity,"hx_Control_setOpacity");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_setPadding,"hx_Control_setPadding");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_setPosition,"hx_Control_setPosition");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_setSize,"hx_Control_setSize");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_setSkinColor,"hx_Control_setSkinColor");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_setSkinRegion,"hx_Control_setSkinRegion");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_setState,"hx_Control_setState");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_setStyle,"hx_Control_setStyle");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_setTextAlignment,"hx_Control_setTextAlignment");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_setTextColor,"hx_Control_setTextColor");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_setTextRightToLeft,"hx_Control_setTextRightToLeft");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_setWidth,"hx_Control_setWidth");
	HX_VISIT_MEMBER_NAME(Control_obj::hx_Control_setZIndex,"hx_Control_setZIndex");
};

#endif

Class Control_obj::__mClass;

void Control_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.Control"), hx::TCanCast< Control_obj> ,sStaticFields,sMemberFields,
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

void Control_obj::__boot()
{
	STATE_ALL= (int)15;
	ANIMATE_POSITION= (int)1;
	ANIMATE_POSITION_X= (int)2;
	ANIMATE_POSITION_Y= (int)3;
	ANIMATE_SIZE= (int)4;
	ANIMATE_SIZE_WIDTH= (int)5;
	ANIMATE_SIZE_HEIGHT= (int)6;
	ANIMATE_OPACITY= (int)7;
	hx_Control_addListener= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("addListener"),(int)3);
	hx_Control_setEnabled= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("setEnabled"),(int)2);
	hx_Control_getAlignment= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("getAlignment"),(int)1);
	hx_Control_getAnimationPropertyComponentCount= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("getAnimationPropertyComponentCount"),(int)2);
	hx_Control_getAnimationPropertyValue= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("getAnimationPropertyValue"),(int)3);
	hx_Control_getAutoHeight= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("getAutoHeight"),(int)1);
	hx_Control_getAutoWidth= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("getAutoWidth"),(int)1);
	hx_Control_getBorder= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("getBorder"),(int)2);
	hx_Control_getBounds= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("getBounds"),(int)1);
	hx_Control_getClip= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("getClip"),(int)1);
	hx_Control_getClipBounds= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("getClipBounds"),(int)1);
	hx_Control_getConsumeInputEvents= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("getConsumeInputEvents"),(int)1);
	hx_Control_getCursorColor= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("getCursorColor"),(int)2);
	hx_Control_getCursorRegion= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("getCursorRegion"),(int)2);
	hx_Control_getCursorUVs= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("getCursorUVs"),(int)2);
	hx_Control_getFocusIndex= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("getFocusIndex"),(int)1);
	hx_Control_getFont= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("getFont"),(int)2);
	hx_Control_getFontSize= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("getFontSize"),(int)2);
	hx_Control_getHeight= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("getHeight"),(int)1);
	hx_Control_getId= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("getId"),(int)1);
	hx_Control_getImageColor= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("getImageColor"),(int)3);
	hx_Control_getImageRegion= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("getImageRegion"),(int)3);
	hx_Control_getImageUVs= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("getImageUVs"),(int)3);
	hx_Control_getMargin= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("getMargin"),(int)1);
	hx_Control_getOpacity= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("getOpacity"),(int)2);
	hx_Control_getPadding= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("getPadding"),(int)1);
	hx_Control_getSkinColor= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("getSkinColor"),(int)2);
	hx_Control_getSkinRegion= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("getSkinRegion"),(int)2);
	hx_Control_getState= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("getState"),(int)1);
	hx_Control_getStyle= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("getStyle"),(int)1);
	hx_Control_getTextAlignment= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("getTextAlignment"),(int)2);
	hx_Control_getTextColor= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("getTextColor"),(int)2);
	hx_Control_getTextRightToLeft= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("getTextRightToLeft"),(int)2);
	hx_Control_getType= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("getType"),(int)1);
	hx_Control_getWidth= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("getWidth"),(int)1);
	hx_Control_getX= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("getX"),(int)1);
	hx_Control_getY= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("getY"),(int)1);
	hx_Control_getZIndex= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("getZIndex"),(int)1);
	hx_Control_isContainer= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("isContainer"),(int)1);
	hx_Control_isEnabled= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("isEnabled"),(int)1);
	hx_Control_setAlignment= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("setAlignment"),(int)2);
	hx_Control_setAnimationPropertyValue= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("setAnimationPropertyValue"),(int)4);
	hx_Control_setAutoHeight= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("setAutoHeight"),(int)2);
	hx_Control_setAutoWidth= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("setAutoWidth"),(int)2);
	hx_Control_setBorder= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("setBorder"),(int)-1);
	hx_Control_setBounds= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("setBounds"),(int)2);
	hx_Control_setConsumeInputEvents= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("setConsumeInputEvents"),(int)2);
	hx_Control_setCursorColor= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("setCursorColor"),(int)3);
	hx_Control_setCursorRegion= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("setCursorRegion"),(int)3);
	hx_Control_setFocusIndex= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("setFocusIndex"),(int)2);
	hx_Control_setFont= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("setFont"),(int)3);
	hx_Control_setFontSize= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("setFontSize"),(int)3);
	hx_Control_setHeight= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("setHeight"),(int)2);
	hx_Control_setImageColor= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("setImageColor"),(int)4);
	hx_Control_setImageRegion= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("setImageRegion"),(int)4);
	hx_Control_setMargin= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("setMargin"),(int)5);
	hx_Control_setVisible= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("setVisible"),(int)2);
	hx_Control_isVisible= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("isVisible"),(int)1);
	hx_Control_setOpacity= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("setOpacity"),(int)3);
	hx_Control_setPadding= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("setPadding"),(int)5);
	hx_Control_setPosition= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("setPosition"),(int)3);
	hx_Control_setSize= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("setSize"),(int)3);
	hx_Control_setSkinColor= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("setSkinColor"),(int)3);
	hx_Control_setSkinRegion= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("setSkinRegion"),(int)3);
	hx_Control_setState= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("setState"),(int)2);
	hx_Control_setStyle= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("setStyle"),(int)2);
	hx_Control_setTextAlignment= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("setTextAlignment"),(int)3);
	hx_Control_setTextColor= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("setTextColor"),(int)3);
	hx_Control_setTextRightToLeft= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("setTextRightToLeft"),(int)3);
	hx_Control_setWidth= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("setWidth"),(int)2);
	hx_Control_setZIndex= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Control >(),HX_CSTRING("setZIndex"),(int)2);
}

} // end namespace org
} // end namespace gameplay3d
