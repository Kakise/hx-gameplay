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
#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Node
#include <org/gameplay3d/Node.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Ref
#include <org/gameplay3d/Ref.h>
#endif
#ifndef INCLUDED_org_gameplay3d_ScriptTarget
#include <org/gameplay3d/ScriptTarget.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Theme
#include <org/gameplay3d/Theme.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Theme_Style
#include <org/gameplay3d/Theme_Style.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Transform
#include <org/gameplay3d/Transform.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IRectangle
#include <org/gameplay3d/immutable/IRectangle.h>
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

Void Form_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.Form","new",0x5df776e3,"org.gameplay3d.Form.new","org/gameplay3d/Form.hx",10,0xc4fbbc4d)
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

//Form_obj::~Form_obj() { }

Dynamic Form_obj::__CreateEmpty() { return  new Form_obj; }
hx::ObjectPtr< Form_obj > Form_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< Form_obj > result = new Form_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic Form_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Form_obj > result = new Form_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Form_obj::draw( ){
{
		HX_STACK_FRAME("org.gameplay3d.Form","draw",0xd3fe3821,"org.gameplay3d.Form.draw","org/gameplay3d/Form.hx",31,0xc4fbbc4d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(31)
		::org::gameplay3d::Form_obj::hx_Form_draw(this->nativeObject);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Form_obj,draw,(void))

::org::gameplay3d::Theme Form_obj::getTheme( ){
	HX_STACK_FRAME("org.gameplay3d.Form","getTheme",0x61806c30,"org.gameplay3d.Form.getTheme","org/gameplay3d/Form.hx",43,0xc4fbbc4d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(43)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Theme >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(43)
	Dynamic nativeObject = ::org::gameplay3d::Form_obj::hx_Form_getTheme(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(43)
	if (((nativeObject == null()))){
		HX_STACK_LINE(43)
		return null();
	}
	else{
		HX_STACK_LINE(43)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(43)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(43)
			::org::gameplay3d::Theme result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(43)
			if (((result == null()))){
				HX_STACK_LINE(43)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(43)
				::org::gameplay3d::Theme _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(43)
				result = _g;
				HX_STACK_LINE(43)
				ref->set(result);
			}
			HX_STACK_LINE(43)
			return result;
		}
		else{
			HX_STACK_LINE(43)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(43)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(43)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Form_obj,getTheme,return )

::String Form_obj::getType( ){
	HX_STACK_FRAME("org.gameplay3d.Form","getType",0x7c784673,"org.gameplay3d.Form.getType","org/gameplay3d/Form.hx",49,0xc4fbbc4d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(49)
	return ::org::gameplay3d::Form_obj::hx_Form_getType(this->nativeObject);
}


Void Form_obj::setAutoHeight( bool autoHeight){
{
		HX_STACK_FRAME("org.gameplay3d.Form","setAutoHeight",0x224f5f3b,"org.gameplay3d.Form.setAutoHeight","org/gameplay3d/Form.hx",55,0xc4fbbc4d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(autoHeight,"autoHeight")
		HX_STACK_LINE(55)
		::org::gameplay3d::Form_obj::hx_Form_setAutoHeight(this->nativeObject,autoHeight);
	}
return null();
}


Void Form_obj::setAutoWidth( bool autoWidth){
{
		HX_STACK_FRAME("org.gameplay3d.Form","setAutoWidth",0xd290a532,"org.gameplay3d.Form.setAutoWidth","org/gameplay3d/Form.hx",61,0xc4fbbc4d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(autoWidth,"autoWidth")
		HX_STACK_LINE(61)
		::org::gameplay3d::Form_obj::hx_Form_setAutoWidth(this->nativeObject,autoWidth);
	}
return null();
}


Void Form_obj::setBounds( ::org::gameplay3d::immutable::IRectangle bounds){
{
		HX_STACK_FRAME("org.gameplay3d.Form","setBounds",0xb224e67a,"org.gameplay3d.Form.setBounds","org/gameplay3d/Form.hx",67,0xc4fbbc4d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bounds,"bounds")
		HX_STACK_LINE(67)
		::org::gameplay3d::Form_obj::hx_Form_setBounds(this->nativeObject,(  (((bounds == null()))) ? Dynamic(null()) : Dynamic(bounds->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


Void Form_obj::setHeight( Float height){
{
		HX_STACK_FRAME("org.gameplay3d.Form","setHeight",0x4e5367ec,"org.gameplay3d.Form.setHeight","org/gameplay3d/Form.hx",73,0xc4fbbc4d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(73)
		::org::gameplay3d::Form_obj::hx_Form_setHeight(this->nativeObject,height);
	}
return null();
}


Void Form_obj::setNode( ::org::gameplay3d::Node node){
{
		HX_STACK_FRAME("org.gameplay3d.Form","setNode",0x6b7aeec7,"org.gameplay3d.Form.setNode","org/gameplay3d/Form.hx",79,0xc4fbbc4d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(node,"node")
		HX_STACK_LINE(79)
		::org::gameplay3d::Form_obj::hx_Form_setNode(this->nativeObject,(  (((node == null()))) ? Dynamic(null()) : Dynamic(node->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Form_obj,setNode,(void))

Void Form_obj::setSize( Float width,Float height){
{
		HX_STACK_FRAME("org.gameplay3d.Form","setSize",0x6ec48586,"org.gameplay3d.Form.setSize","org/gameplay3d/Form.hx",85,0xc4fbbc4d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(85)
		::org::gameplay3d::Form_obj::hx_Form_setSize(this->nativeObject,width,height);
	}
return null();
}


Void Form_obj::setWidth( Float width){
{
		HX_STACK_FRAME("org.gameplay3d.Form","setWidth",0xcab9fda1,"org.gameplay3d.Form.setWidth","org/gameplay3d/Form.hx",91,0xc4fbbc4d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_LINE(91)
		::org::gameplay3d::Form_obj::hx_Form_setWidth(this->nativeObject,width);
	}
return null();
}


Void Form_obj::update( Float elapsedTime){
{
		HX_STACK_FRAME("org.gameplay3d.Form","update",0x21449366,"org.gameplay3d.Form.update","org/gameplay3d/Form.hx",97,0xc4fbbc4d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsedTime,"elapsedTime")
		HX_STACK_LINE(97)
		::org::gameplay3d::Form_obj::hx_Form_update(this->nativeObject,elapsedTime);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Form_obj,update,(void))

::org::gameplay3d::Form Form_obj::create_Str_ThmStl_Int( ::String id,::org::gameplay3d::Theme_Style style,int layoutType){
	HX_STACK_FRAME("org.gameplay3d.Form","create_Str_ThmStl_Int",0xd087c536,"org.gameplay3d.Form.create_Str_ThmStl_Int","org/gameplay3d/Form.hx",19,0xc4fbbc4d)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(style,"style")
	HX_STACK_ARG(layoutType,"layoutType")
	HX_STACK_LINE(19)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Form >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(19)
	Dynamic nativeObject = ::org::gameplay3d::Form_obj::hx_Form_static_create_Str_ThmStl_Int(id,(  (((style == null()))) ? Dynamic(null()) : Dynamic(style->nativeObject) ),layoutType);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(19)
	if (((nativeObject == null()))){
		HX_STACK_LINE(19)
		return null();
	}
	else{
		HX_STACK_LINE(19)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(19)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(19)
			::org::gameplay3d::Form result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(19)
			if (((result == null()))){
				HX_STACK_LINE(19)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(19)
				::org::gameplay3d::Form _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(19)
				result = _g;
				HX_STACK_LINE(19)
				ref->set(result);
			}
			HX_STACK_LINE(19)
			return result;
		}
		else{
			HX_STACK_LINE(19)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(19)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(19)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Form_obj,create_Str_ThmStl_Int,return )

::org::gameplay3d::Form Form_obj::create_Str( ::String url){
	HX_STACK_FRAME("org.gameplay3d.Form","create_Str",0x4e4cba6b,"org.gameplay3d.Form.create_Str","org/gameplay3d/Form.hx",25,0xc4fbbc4d)
	HX_STACK_ARG(url,"url")
	HX_STACK_LINE(25)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Form >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(25)
	Dynamic nativeObject = ::org::gameplay3d::Form_obj::hx_Form_static_create_Str(url);		HX_STACK_VAR(nativeObject,"nativeObject");
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
			::org::gameplay3d::Form result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(25)
			if (((result == null()))){
				HX_STACK_LINE(25)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(25)
				::org::gameplay3d::Form _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Form_obj,create_Str,return )

::org::gameplay3d::Form Form_obj::getForm( ::String id){
	HX_STACK_FRAME("org.gameplay3d.Form","getForm",0x732fb4fd,"org.gameplay3d.Form.getForm","org/gameplay3d/Form.hx",37,0xc4fbbc4d)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(37)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Form >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(37)
	Dynamic nativeObject = ::org::gameplay3d::Form_obj::hx_Form_static_getForm(id);		HX_STACK_VAR(nativeObject,"nativeObject");
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
			::org::gameplay3d::Form result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(37)
			if (((result == null()))){
				HX_STACK_LINE(37)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(37)
				::org::gameplay3d::Form _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Form_obj,getForm,return )

Dynamic Form_obj::hx_Form_static_create_Str_ThmStl_Int;

Dynamic Form_obj::hx_Form_static_create_Str;

Dynamic Form_obj::hx_Form_draw;

Dynamic Form_obj::hx_Form_static_getForm;

Dynamic Form_obj::hx_Form_getTheme;

Dynamic Form_obj::hx_Form_getType;

Dynamic Form_obj::hx_Form_setAutoHeight;

Dynamic Form_obj::hx_Form_setAutoWidth;

Dynamic Form_obj::hx_Form_setBounds;

Dynamic Form_obj::hx_Form_setHeight;

Dynamic Form_obj::hx_Form_setNode;

Dynamic Form_obj::hx_Form_setSize;

Dynamic Form_obj::hx_Form_setWidth;

Dynamic Form_obj::hx_Form_update;


Form_obj::Form_obj()
{
}

Dynamic Form_obj::__Field(const ::String &inName,bool inCallProp)
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
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
		if (HX_FIELD_EQ(inName,"setNode") ) { return setNode_dyn(); }
		if (HX_FIELD_EQ(inName,"setSize") ) { return setSize_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getTheme") ) { return getTheme_dyn(); }
		if (HX_FIELD_EQ(inName,"setWidth") ) { return setWidth_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setBounds") ) { return setBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"setHeight") ) { return setHeight_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"create_Str") ) { return create_Str_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hx_Form_draw") ) { return hx_Form_draw; }
		if (HX_FIELD_EQ(inName,"setAutoWidth") ) { return setAutoWidth_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setAutoHeight") ) { return setAutoHeight_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"hx_Form_update") ) { return hx_Form_update; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hx_Form_getType") ) { return hx_Form_getType; }
		if (HX_FIELD_EQ(inName,"hx_Form_setNode") ) { return hx_Form_setNode; }
		if (HX_FIELD_EQ(inName,"hx_Form_setSize") ) { return hx_Form_setSize; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hx_Form_getTheme") ) { return hx_Form_getTheme; }
		if (HX_FIELD_EQ(inName,"hx_Form_setWidth") ) { return hx_Form_setWidth; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"hx_Form_setBounds") ) { return hx_Form_setBounds; }
		if (HX_FIELD_EQ(inName,"hx_Form_setHeight") ) { return hx_Form_setHeight; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Form_setAutoWidth") ) { return hx_Form_setAutoWidth; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"create_Str_ThmStl_Int") ) { return create_Str_ThmStl_Int_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Form_setAutoHeight") ) { return hx_Form_setAutoHeight; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Form_static_getForm") ) { return hx_Form_static_getForm; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_Form_static_create_Str") ) { return hx_Form_static_create_Str; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"hx_Form_static_create_Str_ThmStl_Int") ) { return hx_Form_static_create_Str_ThmStl_Int; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Form_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"hx_Form_draw") ) { hx_Form_draw=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"hx_Form_update") ) { hx_Form_update=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hx_Form_getType") ) { hx_Form_getType=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Form_setNode") ) { hx_Form_setNode=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Form_setSize") ) { hx_Form_setSize=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hx_Form_getTheme") ) { hx_Form_getTheme=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Form_setWidth") ) { hx_Form_setWidth=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"hx_Form_setBounds") ) { hx_Form_setBounds=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Form_setHeight") ) { hx_Form_setHeight=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Form_setAutoWidth") ) { hx_Form_setAutoWidth=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hx_Form_setAutoHeight") ) { hx_Form_setAutoHeight=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Form_static_getForm") ) { hx_Form_static_getForm=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_Form_static_create_Str") ) { hx_Form_static_create_Str=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"hx_Form_static_create_Str_ThmStl_Int") ) { hx_Form_static_create_Str_ThmStl_Int=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Form_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create_Str_ThmStl_Int"),
	HX_CSTRING("create_Str"),
	HX_CSTRING("getForm"),
	HX_CSTRING("hx_Form_static_create_Str_ThmStl_Int"),
	HX_CSTRING("hx_Form_static_create_Str"),
	HX_CSTRING("hx_Form_draw"),
	HX_CSTRING("hx_Form_static_getForm"),
	HX_CSTRING("hx_Form_getTheme"),
	HX_CSTRING("hx_Form_getType"),
	HX_CSTRING("hx_Form_setAutoHeight"),
	HX_CSTRING("hx_Form_setAutoWidth"),
	HX_CSTRING("hx_Form_setBounds"),
	HX_CSTRING("hx_Form_setHeight"),
	HX_CSTRING("hx_Form_setNode"),
	HX_CSTRING("hx_Form_setSize"),
	HX_CSTRING("hx_Form_setWidth"),
	HX_CSTRING("hx_Form_update"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("draw"),
	HX_CSTRING("getTheme"),
	HX_CSTRING("getType"),
	HX_CSTRING("setAutoHeight"),
	HX_CSTRING("setAutoWidth"),
	HX_CSTRING("setBounds"),
	HX_CSTRING("setHeight"),
	HX_CSTRING("setNode"),
	HX_CSTRING("setSize"),
	HX_CSTRING("setWidth"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Form_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Form_obj::hx_Form_static_create_Str_ThmStl_Int,"hx_Form_static_create_Str_ThmStl_Int");
	HX_MARK_MEMBER_NAME(Form_obj::hx_Form_static_create_Str,"hx_Form_static_create_Str");
	HX_MARK_MEMBER_NAME(Form_obj::hx_Form_draw,"hx_Form_draw");
	HX_MARK_MEMBER_NAME(Form_obj::hx_Form_static_getForm,"hx_Form_static_getForm");
	HX_MARK_MEMBER_NAME(Form_obj::hx_Form_getTheme,"hx_Form_getTheme");
	HX_MARK_MEMBER_NAME(Form_obj::hx_Form_getType,"hx_Form_getType");
	HX_MARK_MEMBER_NAME(Form_obj::hx_Form_setAutoHeight,"hx_Form_setAutoHeight");
	HX_MARK_MEMBER_NAME(Form_obj::hx_Form_setAutoWidth,"hx_Form_setAutoWidth");
	HX_MARK_MEMBER_NAME(Form_obj::hx_Form_setBounds,"hx_Form_setBounds");
	HX_MARK_MEMBER_NAME(Form_obj::hx_Form_setHeight,"hx_Form_setHeight");
	HX_MARK_MEMBER_NAME(Form_obj::hx_Form_setNode,"hx_Form_setNode");
	HX_MARK_MEMBER_NAME(Form_obj::hx_Form_setSize,"hx_Form_setSize");
	HX_MARK_MEMBER_NAME(Form_obj::hx_Form_setWidth,"hx_Form_setWidth");
	HX_MARK_MEMBER_NAME(Form_obj::hx_Form_update,"hx_Form_update");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Form_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Form_obj::hx_Form_static_create_Str_ThmStl_Int,"hx_Form_static_create_Str_ThmStl_Int");
	HX_VISIT_MEMBER_NAME(Form_obj::hx_Form_static_create_Str,"hx_Form_static_create_Str");
	HX_VISIT_MEMBER_NAME(Form_obj::hx_Form_draw,"hx_Form_draw");
	HX_VISIT_MEMBER_NAME(Form_obj::hx_Form_static_getForm,"hx_Form_static_getForm");
	HX_VISIT_MEMBER_NAME(Form_obj::hx_Form_getTheme,"hx_Form_getTheme");
	HX_VISIT_MEMBER_NAME(Form_obj::hx_Form_getType,"hx_Form_getType");
	HX_VISIT_MEMBER_NAME(Form_obj::hx_Form_setAutoHeight,"hx_Form_setAutoHeight");
	HX_VISIT_MEMBER_NAME(Form_obj::hx_Form_setAutoWidth,"hx_Form_setAutoWidth");
	HX_VISIT_MEMBER_NAME(Form_obj::hx_Form_setBounds,"hx_Form_setBounds");
	HX_VISIT_MEMBER_NAME(Form_obj::hx_Form_setHeight,"hx_Form_setHeight");
	HX_VISIT_MEMBER_NAME(Form_obj::hx_Form_setNode,"hx_Form_setNode");
	HX_VISIT_MEMBER_NAME(Form_obj::hx_Form_setSize,"hx_Form_setSize");
	HX_VISIT_MEMBER_NAME(Form_obj::hx_Form_setWidth,"hx_Form_setWidth");
	HX_VISIT_MEMBER_NAME(Form_obj::hx_Form_update,"hx_Form_update");
};

#endif

Class Form_obj::__mClass;

void Form_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.Form"), hx::TCanCast< Form_obj> ,sStaticFields,sMemberFields,
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

void Form_obj::__boot()
{
	hx_Form_static_create_Str_ThmStl_Int= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Form >(),HX_CSTRING("static_create_Str_ThmStl_Int"),(int)3);
	hx_Form_static_create_Str= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Form >(),HX_CSTRING("static_create_Str"),(int)1);
	hx_Form_draw= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Form >(),HX_CSTRING("draw"),(int)1);
	hx_Form_static_getForm= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Form >(),HX_CSTRING("static_getForm"),(int)1);
	hx_Form_getTheme= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Form >(),HX_CSTRING("getTheme"),(int)1);
	hx_Form_getType= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Form >(),HX_CSTRING("getType"),(int)1);
	hx_Form_setAutoHeight= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Form >(),HX_CSTRING("setAutoHeight"),(int)2);
	hx_Form_setAutoWidth= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Form >(),HX_CSTRING("setAutoWidth"),(int)2);
	hx_Form_setBounds= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Form >(),HX_CSTRING("setBounds"),(int)2);
	hx_Form_setHeight= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Form >(),HX_CSTRING("setHeight"),(int)2);
	hx_Form_setNode= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Form >(),HX_CSTRING("setNode"),(int)2);
	hx_Form_setSize= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Form >(),HX_CSTRING("setSize"),(int)3);
	hx_Form_setWidth= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Form >(),HX_CSTRING("setWidth"),(int)2);
	hx_Form_update= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Form >(),HX_CSTRING("update"),(int)2);
}

} // end namespace org
} // end namespace gameplay3d
