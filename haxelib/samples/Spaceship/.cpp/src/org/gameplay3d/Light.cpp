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
#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Light
#include <org/gameplay3d/Light.h>
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
#ifndef INCLUDED_org_gameplay3d_Transform
#include <org/gameplay3d/Transform.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Vector3
#include <org/gameplay3d/Vector3.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IVector3
#include <org/gameplay3d/immutable/IVector3.h>
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

Void Light_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.Light","new",0xcf9b297b,"org.gameplay3d.Light.new","org/gameplay3d/Light.hx",12,0xdc21ebf5)
HX_STACK_THIS(this)
HX_STACK_ARG(nativeObjectInitializer,"nativeObjectInitializer")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(12)
	super::__construct(nativeObjectInitializer,nativeObjectInitializerParams);
}
;
	return null();
}

//Light_obj::~Light_obj() { }

Dynamic Light_obj::__CreateEmpty() { return  new Light_obj; }
hx::ObjectPtr< Light_obj > Light_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< Light_obj > result = new Light_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic Light_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Light_obj > result = new Light_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *Light_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::intern::INativeBinding_obj)) return operator ::org::gameplay3d::intern::INativeBinding_obj *();
	if (inType==typeid( ::org::gameplay3d::Ref_obj)) return operator ::org::gameplay3d::Ref_obj *();
	return super::__ToInterface(inType);
}

::org::gameplay3d::immutable::IVector3 Light_obj::getColor( ){
	HX_STACK_FRAME("org.gameplay3d.Light","getColor",0xa84c45f2,"org.gameplay3d.Light.getColor","org/gameplay3d/Light.hx",59,0xdc21ebf5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_color == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(59)
			Dynamic nativeObject = ::org::gameplay3d::Light_obj::hx_Light_getColor(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::Vector3 result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Vector3 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return this->_color = _g1;
	}
	else{
		HX_STACK_LINE(59)
		Dynamic _g2 = ::org::gameplay3d::Light_obj::hx_Light_getColor(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g3 = this->_color->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_color = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Light_obj,getColor,return )

Float Light_obj::getInnerAngle( ){
	HX_STACK_FRAME("org.gameplay3d.Light","getInnerAngle",0x5de2476e,"org.gameplay3d.Light.getInnerAngle","org/gameplay3d/Light.hx",65,0xdc21ebf5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(65)
	return ::org::gameplay3d::Light_obj::hx_Light_getInnerAngle(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Light_obj,getInnerAngle,return )

Float Light_obj::getInnerAngleCos( ){
	HX_STACK_FRAME("org.gameplay3d.Light","getInnerAngleCos",0x326cc979,"org.gameplay3d.Light.getInnerAngleCos","org/gameplay3d/Light.hx",71,0xdc21ebf5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(71)
	return ::org::gameplay3d::Light_obj::hx_Light_getInnerAngleCos(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Light_obj,getInnerAngleCos,return )

int Light_obj::getLightType( ){
	HX_STACK_FRAME("org.gameplay3d.Light","getLightType",0x90dd9abf,"org.gameplay3d.Light.getLightType","org/gameplay3d/Light.hx",77,0xdc21ebf5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(77)
	return ::org::gameplay3d::Light_obj::hx_Light_getLightType(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Light_obj,getLightType,return )

::org::gameplay3d::Node Light_obj::getNode( ){
	HX_STACK_FRAME("org.gameplay3d.Light","getNode",0xcfc63c53,"org.gameplay3d.Light.getNode","org/gameplay3d/Light.hx",83,0xdc21ebf5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(83)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Node >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(83)
	Dynamic nativeObject = ::org::gameplay3d::Light_obj::hx_Light_getNode(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(83)
	if (((nativeObject == null()))){
		HX_STACK_LINE(83)
		return null();
	}
	else{
		HX_STACK_LINE(83)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(83)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(83)
			::org::gameplay3d::Node result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(83)
			if (((result == null()))){
				HX_STACK_LINE(83)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(83)
				::org::gameplay3d::Node _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(83)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(83)
			return result;
		}
		else{
			HX_STACK_LINE(83)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(83)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(83)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Light_obj,getNode,return )

Float Light_obj::getOuterAngle( ){
	HX_STACK_FRAME("org.gameplay3d.Light","getOuterAngle",0xfb69a269,"org.gameplay3d.Light.getOuterAngle","org/gameplay3d/Light.hx",89,0xdc21ebf5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(89)
	return ::org::gameplay3d::Light_obj::hx_Light_getOuterAngle(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Light_obj,getOuterAngle,return )

Float Light_obj::getOuterAngleCos( ){
	HX_STACK_FRAME("org.gameplay3d.Light","getOuterAngleCos",0xa6623d5e,"org.gameplay3d.Light.getOuterAngleCos","org/gameplay3d/Light.hx",95,0xdc21ebf5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(95)
	return ::org::gameplay3d::Light_obj::hx_Light_getOuterAngleCos(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Light_obj,getOuterAngleCos,return )

Float Light_obj::getRange( ){
	HX_STACK_FRAME("org.gameplay3d.Light","getRange",0x420f7a4c,"org.gameplay3d.Light.getRange","org/gameplay3d/Light.hx",101,0xdc21ebf5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(101)
	return ::org::gameplay3d::Light_obj::hx_Light_getRange(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Light_obj,getRange,return )

Float Light_obj::getRangeInverse( ){
	HX_STACK_FRAME("org.gameplay3d.Light","getRangeInverse",0xbe701ac4,"org.gameplay3d.Light.getRangeInverse","org/gameplay3d/Light.hx",107,0xdc21ebf5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(107)
	return ::org::gameplay3d::Light_obj::hx_Light_getRangeInverse(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Light_obj,getRangeInverse,return )

Void Light_obj::setColor_V3( ::org::gameplay3d::immutable::IVector3 color){
{
		HX_STACK_FRAME("org.gameplay3d.Light","setColor_V3",0xd597e596,"org.gameplay3d.Light.setColor_V3","org/gameplay3d/Light.hx",113,0xdc21ebf5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(113)
		::org::gameplay3d::Light_obj::hx_Light_setColor_V3(this->nativeObject,(  (((color == null()))) ? Dynamic(null()) : Dynamic(color->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Light_obj,setColor_V3,(void))

Void Light_obj::setColor_FltX3( Float red,Float green,Float blue){
{
		HX_STACK_FRAME("org.gameplay3d.Light","setColor_FltX3",0x33676fd0,"org.gameplay3d.Light.setColor_FltX3","org/gameplay3d/Light.hx",119,0xdc21ebf5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(red,"red")
		HX_STACK_ARG(green,"green")
		HX_STACK_ARG(blue,"blue")
		HX_STACK_LINE(119)
		::org::gameplay3d::Light_obj::hx_Light_setColor_FltX3(this->nativeObject,red,green,blue);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Light_obj,setColor_FltX3,(void))

Void Light_obj::setInnerAngle( Float innerAngle){
{
		HX_STACK_FRAME("org.gameplay3d.Light","setInnerAngle",0xa2e8297a,"org.gameplay3d.Light.setInnerAngle","org/gameplay3d/Light.hx",125,0xdc21ebf5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(innerAngle,"innerAngle")
		HX_STACK_LINE(125)
		::org::gameplay3d::Light_obj::hx_Light_setInnerAngle(this->nativeObject,innerAngle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Light_obj,setInnerAngle,(void))

Void Light_obj::setOuterAngle( Float outerAngle){
{
		HX_STACK_FRAME("org.gameplay3d.Light","setOuterAngle",0x406f8475,"org.gameplay3d.Light.setOuterAngle","org/gameplay3d/Light.hx",131,0xdc21ebf5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(outerAngle,"outerAngle")
		HX_STACK_LINE(131)
		::org::gameplay3d::Light_obj::hx_Light_setOuterAngle(this->nativeObject,outerAngle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Light_obj,setOuterAngle,(void))

Void Light_obj::setRange( Float range){
{
		HX_STACK_FRAME("org.gameplay3d.Light","setRange",0xf06cd3c0,"org.gameplay3d.Light.setRange","org/gameplay3d/Light.hx",137,0xdc21ebf5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(range,"range")
		HX_STACK_LINE(137)
		::org::gameplay3d::Light_obj::hx_Light_setRange(this->nativeObject,range);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Light_obj,setRange,(void))

::org::gameplay3d::Light Light_obj::createDirectional_V3( ::org::gameplay3d::immutable::IVector3 color){
	HX_STACK_FRAME("org.gameplay3d.Light","createDirectional_V3",0xfe8d3f33,"org.gameplay3d.Light.createDirectional_V3","org/gameplay3d/Light.hx",23,0xdc21ebf5)
	HX_STACK_ARG(color,"color")
	HX_STACK_LINE(23)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Light >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(23)
	Dynamic nativeObject = ::org::gameplay3d::Light_obj::hx_Light_static_createDirectional_V3((  (((color == null()))) ? Dynamic(null()) : Dynamic(color->__Field(HX_CSTRING("nativeObject"),true)) ));		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(23)
	if (((nativeObject == null()))){
		HX_STACK_LINE(23)
		return null();
	}
	else{
		HX_STACK_LINE(23)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(23)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(23)
			::org::gameplay3d::Light result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(23)
			if (((result == null()))){
				HX_STACK_LINE(23)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(23)
				::org::gameplay3d::Light _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(23)
				result = _g;
				HX_STACK_LINE(23)
				ref->set(result);
			}
			HX_STACK_LINE(23)
			return result;
		}
		else{
			HX_STACK_LINE(23)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(23)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(23)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Light_obj,createDirectional_V3,return )

::org::gameplay3d::Light Light_obj::createDirectional_FltX3( Float red,Float green,Float blue){
	HX_STACK_FRAME("org.gameplay3d.Light","createDirectional_FltX3",0x8d563653,"org.gameplay3d.Light.createDirectional_FltX3","org/gameplay3d/Light.hx",29,0xdc21ebf5)
	HX_STACK_ARG(red,"red")
	HX_STACK_ARG(green,"green")
	HX_STACK_ARG(blue,"blue")
	HX_STACK_LINE(29)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Light >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(29)
	Dynamic nativeObject = ::org::gameplay3d::Light_obj::hx_Light_static_createDirectional_FltX3(red,green,blue);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(29)
	if (((nativeObject == null()))){
		HX_STACK_LINE(29)
		return null();
	}
	else{
		HX_STACK_LINE(29)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(29)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(29)
			::org::gameplay3d::Light result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(29)
			if (((result == null()))){
				HX_STACK_LINE(29)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(29)
				::org::gameplay3d::Light _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(29)
				result = _g;
				HX_STACK_LINE(29)
				ref->set(result);
			}
			HX_STACK_LINE(29)
			return result;
		}
		else{
			HX_STACK_LINE(29)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(29)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(29)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Light_obj,createDirectional_FltX3,return )

::org::gameplay3d::Light Light_obj::createPoint_V3_Flt( ::org::gameplay3d::immutable::IVector3 color,Float range){
	HX_STACK_FRAME("org.gameplay3d.Light","createPoint_V3_Flt",0xb202409c,"org.gameplay3d.Light.createPoint_V3_Flt","org/gameplay3d/Light.hx",35,0xdc21ebf5)
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(range,"range")
	HX_STACK_LINE(35)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Light >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(35)
	Dynamic nativeObject = ::org::gameplay3d::Light_obj::hx_Light_static_createPoint_V3_Flt((  (((color == null()))) ? Dynamic(null()) : Dynamic(color->__Field(HX_CSTRING("nativeObject"),true)) ),range);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(35)
	if (((nativeObject == null()))){
		HX_STACK_LINE(35)
		return null();
	}
	else{
		HX_STACK_LINE(35)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(35)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(35)
			::org::gameplay3d::Light result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(35)
			if (((result == null()))){
				HX_STACK_LINE(35)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(35)
				::org::gameplay3d::Light _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(35)
				result = _g;
				HX_STACK_LINE(35)
				ref->set(result);
			}
			HX_STACK_LINE(35)
			return result;
		}
		else{
			HX_STACK_LINE(35)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(35)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(35)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Light_obj,createPoint_V3_Flt,return )

::org::gameplay3d::Light Light_obj::createPoint_FltX4( Float red,Float green,Float blue,Float range){
	HX_STACK_FRAME("org.gameplay3d.Light","createPoint_FltX4",0x24eedcfa,"org.gameplay3d.Light.createPoint_FltX4","org/gameplay3d/Light.hx",41,0xdc21ebf5)
	HX_STACK_ARG(red,"red")
	HX_STACK_ARG(green,"green")
	HX_STACK_ARG(blue,"blue")
	HX_STACK_ARG(range,"range")
	HX_STACK_LINE(41)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Light >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(41)
	Dynamic nativeObject = ::org::gameplay3d::Light_obj::hx_Light_static_createPoint_FltX4(red,green,blue,range);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(41)
	if (((nativeObject == null()))){
		HX_STACK_LINE(41)
		return null();
	}
	else{
		HX_STACK_LINE(41)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(41)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(41)
			::org::gameplay3d::Light result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(41)
			if (((result == null()))){
				HX_STACK_LINE(41)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(41)
				::org::gameplay3d::Light _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(41)
				result = _g;
				HX_STACK_LINE(41)
				ref->set(result);
			}
			HX_STACK_LINE(41)
			return result;
		}
		else{
			HX_STACK_LINE(41)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(41)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(41)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Light_obj,createPoint_FltX4,return )

::org::gameplay3d::Light Light_obj::createSpot_V3_FltX3( ::org::gameplay3d::immutable::IVector3 color,Float range,Float innerAngle,Float outerAngle){
	HX_STACK_FRAME("org.gameplay3d.Light","createSpot_V3_FltX3",0xf5bd1963,"org.gameplay3d.Light.createSpot_V3_FltX3","org/gameplay3d/Light.hx",47,0xdc21ebf5)
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(range,"range")
	HX_STACK_ARG(innerAngle,"innerAngle")
	HX_STACK_ARG(outerAngle,"outerAngle")
	HX_STACK_LINE(47)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Light >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(47)
	Dynamic nativeObject = ::org::gameplay3d::Light_obj::hx_Light_static_createSpot_V3_FltX3((  (((color == null()))) ? Dynamic(null()) : Dynamic(color->__Field(HX_CSTRING("nativeObject"),true)) ),range,innerAngle,outerAngle);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(47)
	if (((nativeObject == null()))){
		HX_STACK_LINE(47)
		return null();
	}
	else{
		HX_STACK_LINE(47)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(47)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(47)
			::org::gameplay3d::Light result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(47)
			if (((result == null()))){
				HX_STACK_LINE(47)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(47)
				::org::gameplay3d::Light _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(47)
				result = _g;
				HX_STACK_LINE(47)
				ref->set(result);
			}
			HX_STACK_LINE(47)
			return result;
		}
		else{
			HX_STACK_LINE(47)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(47)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(47)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Light_obj,createSpot_V3_FltX3,return )

::org::gameplay3d::Light Light_obj::createSpot_FltX6( Float red,Float green,Float blue,Float range,Float innerAngle,Float outerAngle){
	HX_STACK_FRAME("org.gameplay3d.Light","createSpot_FltX6",0xd124a490,"org.gameplay3d.Light.createSpot_FltX6","org/gameplay3d/Light.hx",53,0xdc21ebf5)
	HX_STACK_ARG(red,"red")
	HX_STACK_ARG(green,"green")
	HX_STACK_ARG(blue,"blue")
	HX_STACK_ARG(range,"range")
	HX_STACK_ARG(innerAngle,"innerAngle")
	HX_STACK_ARG(outerAngle,"outerAngle")
	HX_STACK_LINE(53)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Light >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(53)
	Dynamic nativeObject = ::org::gameplay3d::Light_obj::hx_Light_static_createSpot_FltX6(red,green,blue,range,innerAngle,outerAngle);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(53)
	if (((nativeObject == null()))){
		HX_STACK_LINE(53)
		return null();
	}
	else{
		HX_STACK_LINE(53)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(53)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(53)
			::org::gameplay3d::Light result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(53)
			if (((result == null()))){
				HX_STACK_LINE(53)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(53)
				::org::gameplay3d::Light _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(53)
				result = _g;
				HX_STACK_LINE(53)
				ref->set(result);
			}
			HX_STACK_LINE(53)
			return result;
		}
		else{
			HX_STACK_LINE(53)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(53)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(53)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Light_obj,createSpot_FltX6,return )

Dynamic Light_obj::hx_Light_static_createDirectional_V3;

Dynamic Light_obj::hx_Light_static_createDirectional_FltX3;

Dynamic Light_obj::hx_Light_static_createPoint_V3_Flt;

Dynamic Light_obj::hx_Light_static_createPoint_FltX4;

Dynamic Light_obj::hx_Light_static_createSpot_V3_FltX3;

Dynamic Light_obj::hx_Light_static_createSpot_FltX6;

Dynamic Light_obj::hx_Light_getColor;

Dynamic Light_obj::hx_Light_getInnerAngle;

Dynamic Light_obj::hx_Light_getInnerAngleCos;

Dynamic Light_obj::hx_Light_getLightType;

Dynamic Light_obj::hx_Light_getNode;

Dynamic Light_obj::hx_Light_getOuterAngle;

Dynamic Light_obj::hx_Light_getOuterAngleCos;

Dynamic Light_obj::hx_Light_getRange;

Dynamic Light_obj::hx_Light_getRangeInverse;

Dynamic Light_obj::hx_Light_setColor_V3;

Dynamic Light_obj::hx_Light_setColor_FltX3;

Dynamic Light_obj::hx_Light_setInnerAngle;

Dynamic Light_obj::hx_Light_setOuterAngle;

Dynamic Light_obj::hx_Light_setRange;


Light_obj::Light_obj()
{
}

void Light_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Light);
	HX_MARK_MEMBER_NAME(_color,"_color");
	::org::gameplay3d::intern::NativeBinding_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Light_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_color,"_color");
	::org::gameplay3d::intern::NativeBinding_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Light_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_color") ) { return _color; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getNode") ) { return getNode_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getColor") ) { return getColor_dyn(); }
		if (HX_FIELD_EQ(inName,"getRange") ) { return getRange_dyn(); }
		if (HX_FIELD_EQ(inName,"setRange") ) { return setRange_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setColor_V3") ) { return setColor_V3_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getLightType") ) { return getLightType_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getInnerAngle") ) { return getInnerAngle_dyn(); }
		if (HX_FIELD_EQ(inName,"getOuterAngle") ) { return getOuterAngle_dyn(); }
		if (HX_FIELD_EQ(inName,"setInnerAngle") ) { return setInnerAngle_dyn(); }
		if (HX_FIELD_EQ(inName,"setOuterAngle") ) { return setOuterAngle_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setColor_FltX3") ) { return setColor_FltX3_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getRangeInverse") ) { return getRangeInverse_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createSpot_FltX6") ) { return createSpot_FltX6_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Light_getNode") ) { return hx_Light_getNode; }
		if (HX_FIELD_EQ(inName,"getInnerAngleCos") ) { return getInnerAngleCos_dyn(); }
		if (HX_FIELD_EQ(inName,"getOuterAngleCos") ) { return getOuterAngleCos_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"createPoint_FltX4") ) { return createPoint_FltX4_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Light_getColor") ) { return hx_Light_getColor; }
		if (HX_FIELD_EQ(inName,"hx_Light_getRange") ) { return hx_Light_getRange; }
		if (HX_FIELD_EQ(inName,"hx_Light_setRange") ) { return hx_Light_setRange; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createPoint_V3_Flt") ) { return createPoint_V3_Flt_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"createSpot_V3_FltX3") ) { return createSpot_V3_FltX3_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"createDirectional_V3") ) { return createDirectional_V3_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Light_setColor_V3") ) { return hx_Light_setColor_V3; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hx_Light_getLightType") ) { return hx_Light_getLightType; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Light_getInnerAngle") ) { return hx_Light_getInnerAngle; }
		if (HX_FIELD_EQ(inName,"hx_Light_getOuterAngle") ) { return hx_Light_getOuterAngle; }
		if (HX_FIELD_EQ(inName,"hx_Light_setInnerAngle") ) { return hx_Light_setInnerAngle; }
		if (HX_FIELD_EQ(inName,"hx_Light_setOuterAngle") ) { return hx_Light_setOuterAngle; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"createDirectional_FltX3") ) { return createDirectional_FltX3_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Light_setColor_FltX3") ) { return hx_Light_setColor_FltX3; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_Light_getRangeInverse") ) { return hx_Light_getRangeInverse; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_Light_getInnerAngleCos") ) { return hx_Light_getInnerAngleCos; }
		if (HX_FIELD_EQ(inName,"hx_Light_getOuterAngleCos") ) { return hx_Light_getOuterAngleCos; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"hx_Light_static_createSpot_FltX6") ) { return hx_Light_static_createSpot_FltX6; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"hx_Light_static_createPoint_FltX4") ) { return hx_Light_static_createPoint_FltX4; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"hx_Light_static_createPoint_V3_Flt") ) { return hx_Light_static_createPoint_V3_Flt; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"hx_Light_static_createSpot_V3_FltX3") ) { return hx_Light_static_createSpot_V3_FltX3; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"hx_Light_static_createDirectional_V3") ) { return hx_Light_static_createDirectional_V3; }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"hx_Light_static_createDirectional_FltX3") ) { return hx_Light_static_createDirectional_FltX3; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Light_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_color") ) { _color=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hx_Light_getNode") ) { hx_Light_getNode=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"hx_Light_getColor") ) { hx_Light_getColor=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Light_getRange") ) { hx_Light_getRange=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Light_setRange") ) { hx_Light_setRange=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Light_setColor_V3") ) { hx_Light_setColor_V3=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hx_Light_getLightType") ) { hx_Light_getLightType=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Light_getInnerAngle") ) { hx_Light_getInnerAngle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Light_getOuterAngle") ) { hx_Light_getOuterAngle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Light_setInnerAngle") ) { hx_Light_setInnerAngle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Light_setOuterAngle") ) { hx_Light_setOuterAngle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_Light_setColor_FltX3") ) { hx_Light_setColor_FltX3=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_Light_getRangeInverse") ) { hx_Light_getRangeInverse=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_Light_getInnerAngleCos") ) { hx_Light_getInnerAngleCos=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Light_getOuterAngleCos") ) { hx_Light_getOuterAngleCos=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"hx_Light_static_createSpot_FltX6") ) { hx_Light_static_createSpot_FltX6=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"hx_Light_static_createPoint_FltX4") ) { hx_Light_static_createPoint_FltX4=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"hx_Light_static_createPoint_V3_Flt") ) { hx_Light_static_createPoint_V3_Flt=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"hx_Light_static_createSpot_V3_FltX3") ) { hx_Light_static_createSpot_V3_FltX3=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"hx_Light_static_createDirectional_V3") ) { hx_Light_static_createDirectional_V3=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"hx_Light_static_createDirectional_FltX3") ) { hx_Light_static_createDirectional_FltX3=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Light_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_color"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("createDirectional_V3"),
	HX_CSTRING("createDirectional_FltX3"),
	HX_CSTRING("createPoint_V3_Flt"),
	HX_CSTRING("createPoint_FltX4"),
	HX_CSTRING("createSpot_V3_FltX3"),
	HX_CSTRING("createSpot_FltX6"),
	HX_CSTRING("hx_Light_static_createDirectional_V3"),
	HX_CSTRING("hx_Light_static_createDirectional_FltX3"),
	HX_CSTRING("hx_Light_static_createPoint_V3_Flt"),
	HX_CSTRING("hx_Light_static_createPoint_FltX4"),
	HX_CSTRING("hx_Light_static_createSpot_V3_FltX3"),
	HX_CSTRING("hx_Light_static_createSpot_FltX6"),
	HX_CSTRING("hx_Light_getColor"),
	HX_CSTRING("hx_Light_getInnerAngle"),
	HX_CSTRING("hx_Light_getInnerAngleCos"),
	HX_CSTRING("hx_Light_getLightType"),
	HX_CSTRING("hx_Light_getNode"),
	HX_CSTRING("hx_Light_getOuterAngle"),
	HX_CSTRING("hx_Light_getOuterAngleCos"),
	HX_CSTRING("hx_Light_getRange"),
	HX_CSTRING("hx_Light_getRangeInverse"),
	HX_CSTRING("hx_Light_setColor_V3"),
	HX_CSTRING("hx_Light_setColor_FltX3"),
	HX_CSTRING("hx_Light_setInnerAngle"),
	HX_CSTRING("hx_Light_setOuterAngle"),
	HX_CSTRING("hx_Light_setRange"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(Light_obj,_color),HX_CSTRING("_color")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_color"),
	HX_CSTRING("getColor"),
	HX_CSTRING("getInnerAngle"),
	HX_CSTRING("getInnerAngleCos"),
	HX_CSTRING("getLightType"),
	HX_CSTRING("getNode"),
	HX_CSTRING("getOuterAngle"),
	HX_CSTRING("getOuterAngleCos"),
	HX_CSTRING("getRange"),
	HX_CSTRING("getRangeInverse"),
	HX_CSTRING("setColor_V3"),
	HX_CSTRING("setColor_FltX3"),
	HX_CSTRING("setInnerAngle"),
	HX_CSTRING("setOuterAngle"),
	HX_CSTRING("setRange"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Light_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Light_obj::hx_Light_static_createDirectional_V3,"hx_Light_static_createDirectional_V3");
	HX_MARK_MEMBER_NAME(Light_obj::hx_Light_static_createDirectional_FltX3,"hx_Light_static_createDirectional_FltX3");
	HX_MARK_MEMBER_NAME(Light_obj::hx_Light_static_createPoint_V3_Flt,"hx_Light_static_createPoint_V3_Flt");
	HX_MARK_MEMBER_NAME(Light_obj::hx_Light_static_createPoint_FltX4,"hx_Light_static_createPoint_FltX4");
	HX_MARK_MEMBER_NAME(Light_obj::hx_Light_static_createSpot_V3_FltX3,"hx_Light_static_createSpot_V3_FltX3");
	HX_MARK_MEMBER_NAME(Light_obj::hx_Light_static_createSpot_FltX6,"hx_Light_static_createSpot_FltX6");
	HX_MARK_MEMBER_NAME(Light_obj::hx_Light_getColor,"hx_Light_getColor");
	HX_MARK_MEMBER_NAME(Light_obj::hx_Light_getInnerAngle,"hx_Light_getInnerAngle");
	HX_MARK_MEMBER_NAME(Light_obj::hx_Light_getInnerAngleCos,"hx_Light_getInnerAngleCos");
	HX_MARK_MEMBER_NAME(Light_obj::hx_Light_getLightType,"hx_Light_getLightType");
	HX_MARK_MEMBER_NAME(Light_obj::hx_Light_getNode,"hx_Light_getNode");
	HX_MARK_MEMBER_NAME(Light_obj::hx_Light_getOuterAngle,"hx_Light_getOuterAngle");
	HX_MARK_MEMBER_NAME(Light_obj::hx_Light_getOuterAngleCos,"hx_Light_getOuterAngleCos");
	HX_MARK_MEMBER_NAME(Light_obj::hx_Light_getRange,"hx_Light_getRange");
	HX_MARK_MEMBER_NAME(Light_obj::hx_Light_getRangeInverse,"hx_Light_getRangeInverse");
	HX_MARK_MEMBER_NAME(Light_obj::hx_Light_setColor_V3,"hx_Light_setColor_V3");
	HX_MARK_MEMBER_NAME(Light_obj::hx_Light_setColor_FltX3,"hx_Light_setColor_FltX3");
	HX_MARK_MEMBER_NAME(Light_obj::hx_Light_setInnerAngle,"hx_Light_setInnerAngle");
	HX_MARK_MEMBER_NAME(Light_obj::hx_Light_setOuterAngle,"hx_Light_setOuterAngle");
	HX_MARK_MEMBER_NAME(Light_obj::hx_Light_setRange,"hx_Light_setRange");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Light_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Light_obj::hx_Light_static_createDirectional_V3,"hx_Light_static_createDirectional_V3");
	HX_VISIT_MEMBER_NAME(Light_obj::hx_Light_static_createDirectional_FltX3,"hx_Light_static_createDirectional_FltX3");
	HX_VISIT_MEMBER_NAME(Light_obj::hx_Light_static_createPoint_V3_Flt,"hx_Light_static_createPoint_V3_Flt");
	HX_VISIT_MEMBER_NAME(Light_obj::hx_Light_static_createPoint_FltX4,"hx_Light_static_createPoint_FltX4");
	HX_VISIT_MEMBER_NAME(Light_obj::hx_Light_static_createSpot_V3_FltX3,"hx_Light_static_createSpot_V3_FltX3");
	HX_VISIT_MEMBER_NAME(Light_obj::hx_Light_static_createSpot_FltX6,"hx_Light_static_createSpot_FltX6");
	HX_VISIT_MEMBER_NAME(Light_obj::hx_Light_getColor,"hx_Light_getColor");
	HX_VISIT_MEMBER_NAME(Light_obj::hx_Light_getInnerAngle,"hx_Light_getInnerAngle");
	HX_VISIT_MEMBER_NAME(Light_obj::hx_Light_getInnerAngleCos,"hx_Light_getInnerAngleCos");
	HX_VISIT_MEMBER_NAME(Light_obj::hx_Light_getLightType,"hx_Light_getLightType");
	HX_VISIT_MEMBER_NAME(Light_obj::hx_Light_getNode,"hx_Light_getNode");
	HX_VISIT_MEMBER_NAME(Light_obj::hx_Light_getOuterAngle,"hx_Light_getOuterAngle");
	HX_VISIT_MEMBER_NAME(Light_obj::hx_Light_getOuterAngleCos,"hx_Light_getOuterAngleCos");
	HX_VISIT_MEMBER_NAME(Light_obj::hx_Light_getRange,"hx_Light_getRange");
	HX_VISIT_MEMBER_NAME(Light_obj::hx_Light_getRangeInverse,"hx_Light_getRangeInverse");
	HX_VISIT_MEMBER_NAME(Light_obj::hx_Light_setColor_V3,"hx_Light_setColor_V3");
	HX_VISIT_MEMBER_NAME(Light_obj::hx_Light_setColor_FltX3,"hx_Light_setColor_FltX3");
	HX_VISIT_MEMBER_NAME(Light_obj::hx_Light_setInnerAngle,"hx_Light_setInnerAngle");
	HX_VISIT_MEMBER_NAME(Light_obj::hx_Light_setOuterAngle,"hx_Light_setOuterAngle");
	HX_VISIT_MEMBER_NAME(Light_obj::hx_Light_setRange,"hx_Light_setRange");
};

#endif

Class Light_obj::__mClass;

void Light_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.Light"), hx::TCanCast< Light_obj> ,sStaticFields,sMemberFields,
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

void Light_obj::__boot()
{
	hx_Light_static_createDirectional_V3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Light >(),HX_CSTRING("static_createDirectional_V3"),(int)1);
	hx_Light_static_createDirectional_FltX3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Light >(),HX_CSTRING("static_createDirectional_FltX3"),(int)3);
	hx_Light_static_createPoint_V3_Flt= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Light >(),HX_CSTRING("static_createPoint_V3_Flt"),(int)2);
	hx_Light_static_createPoint_FltX4= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Light >(),HX_CSTRING("static_createPoint_FltX4"),(int)4);
	hx_Light_static_createSpot_V3_FltX3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Light >(),HX_CSTRING("static_createSpot_V3_FltX3"),(int)4);
	hx_Light_static_createSpot_FltX6= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Light >(),HX_CSTRING("static_createSpot_FltX6"),(int)-1);
	hx_Light_getColor= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Light >(),HX_CSTRING("getColor"),(int)1);
	hx_Light_getInnerAngle= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Light >(),HX_CSTRING("getInnerAngle"),(int)1);
	hx_Light_getInnerAngleCos= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Light >(),HX_CSTRING("getInnerAngleCos"),(int)1);
	hx_Light_getLightType= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Light >(),HX_CSTRING("getLightType"),(int)1);
	hx_Light_getNode= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Light >(),HX_CSTRING("getNode"),(int)1);
	hx_Light_getOuterAngle= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Light >(),HX_CSTRING("getOuterAngle"),(int)1);
	hx_Light_getOuterAngleCos= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Light >(),HX_CSTRING("getOuterAngleCos"),(int)1);
	hx_Light_getRange= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Light >(),HX_CSTRING("getRange"),(int)1);
	hx_Light_getRangeInverse= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Light >(),HX_CSTRING("getRangeInverse"),(int)1);
	hx_Light_setColor_V3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Light >(),HX_CSTRING("setColor_V3"),(int)2);
	hx_Light_setColor_FltX3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Light >(),HX_CSTRING("setColor_FltX3"),(int)4);
	hx_Light_setInnerAngle= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Light >(),HX_CSTRING("setInnerAngle"),(int)2);
	hx_Light_setOuterAngle= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Light >(),HX_CSTRING("setOuterAngle"),(int)2);
	hx_Light_setRange= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Light >(),HX_CSTRING("setRange"),(int)2);
}

} // end namespace org
} // end namespace gameplay3d
