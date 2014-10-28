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
#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Matrix
#include <org/gameplay3d/Matrix.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Properties
#include <org/gameplay3d/Properties.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Quaternion
#include <org/gameplay3d/Quaternion.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Vector2
#include <org/gameplay3d/Vector2.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Vector3
#include <org/gameplay3d/Vector3.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Vector4
#include <org/gameplay3d/Vector4.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IMatrix
#include <org/gameplay3d/immutable/IMatrix.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IQuaternion
#include <org/gameplay3d/immutable/IQuaternion.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IVector2
#include <org/gameplay3d/immutable/IVector2.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IVector3
#include <org/gameplay3d/immutable/IVector3.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IVector4
#include <org/gameplay3d/immutable/IVector4.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_INativeBinding
#include <org/gameplay3d/intern/INativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_NativeBinding
#include <org/gameplay3d/intern/NativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_NativeInterface
#include <org/gameplay3d/util/NativeInterface.h>
#endif
namespace org{
namespace gameplay3d{

Void Properties_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.Properties","new",0x064954d2,"org.gameplay3d.Properties.new","org/gameplay3d/Properties.hx",10,0x0c05393e)
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

//Properties_obj::~Properties_obj() { }

Dynamic Properties_obj::__CreateEmpty() { return  new Properties_obj; }
hx::ObjectPtr< Properties_obj > Properties_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< Properties_obj > result = new Properties_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic Properties_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Properties_obj > result = new Properties_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

bool Properties_obj::exists( ::String name){
	HX_STACK_FRAME("org.gameplay3d.Properties","exists",0xac8f6caa,"org.gameplay3d.Properties.exists","org/gameplay3d/Properties.hx",25,0x0c05393e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(25)
	return ::org::gameplay3d::Properties_obj::hx_Properties_exists(this->nativeObject,name);
}


HX_DEFINE_DYNAMIC_FUNC1(Properties_obj,exists,return )

bool Properties_obj::getBool( ::String name,hx::Null< bool >  __o_defaultValue){
bool defaultValue = __o_defaultValue.Default(false);
	HX_STACK_FRAME("org.gameplay3d.Properties","getBool",0x4053d952,"org.gameplay3d.Properties.getBool","org/gameplay3d/Properties.hx",31,0x0c05393e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(defaultValue,"defaultValue")
{
		HX_STACK_LINE(31)
		return ::org::gameplay3d::Properties_obj::hx_Properties_getBool(this->nativeObject,name,defaultValue);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Properties_obj,getBool,return )

bool Properties_obj::getColor_Str_V3( ::String name,::org::gameplay3d::Vector3 out){
	HX_STACK_FRAME("org.gameplay3d.Properties","getColor_Str_V3",0x2507910f,"org.gameplay3d.Properties.getColor_Str_V3","org/gameplay3d/Properties.hx",37,0x0c05393e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(out,"out")
	HX_STACK_LINE(37)
	return ::org::gameplay3d::Properties_obj::hx_Properties_getColor_Str_V3(this->nativeObject,name,(  (((out == null()))) ? Dynamic(null()) : Dynamic(out->nativeObject) ));
}


HX_DEFINE_DYNAMIC_FUNC2(Properties_obj,getColor_Str_V3,return )

bool Properties_obj::getColor_Str_V4( ::String name,::org::gameplay3d::Vector4 out){
	HX_STACK_FRAME("org.gameplay3d.Properties","getColor_Str_V4",0x25079110,"org.gameplay3d.Properties.getColor_Str_V4","org/gameplay3d/Properties.hx",43,0x0c05393e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(out,"out")
	HX_STACK_LINE(43)
	return ::org::gameplay3d::Properties_obj::hx_Properties_getColor_Str_V4(this->nativeObject,name,(  (((out == null()))) ? Dynamic(null()) : Dynamic(out->nativeObject) ));
}


HX_DEFINE_DYNAMIC_FUNC2(Properties_obj,getColor_Str_V4,return )

Float Properties_obj::getFloat( ::String name){
	HX_STACK_FRAME("org.gameplay3d.Properties","getFloat",0x54a8f374,"org.gameplay3d.Properties.getFloat","org/gameplay3d/Properties.hx",49,0x0c05393e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(49)
	return ::org::gameplay3d::Properties_obj::hx_Properties_getFloat(this->nativeObject,name);
}


HX_DEFINE_DYNAMIC_FUNC1(Properties_obj,getFloat,return )

::String Properties_obj::getId( ){
	HX_STACK_FRAME("org.gameplay3d.Properties","getId",0x23159703,"org.gameplay3d.Properties.getId","org/gameplay3d/Properties.hx",55,0x0c05393e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(55)
	return ::org::gameplay3d::Properties_obj::hx_Properties_getId(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Properties_obj,getId,return )

int Properties_obj::getInt( ::String name){
	HX_STACK_FRAME("org.gameplay3d.Properties","getInt",0x8fce94c7,"org.gameplay3d.Properties.getInt","org/gameplay3d/Properties.hx",61,0x0c05393e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(61)
	return ::org::gameplay3d::Properties_obj::hx_Properties_getInt(this->nativeObject,name);
}


HX_DEFINE_DYNAMIC_FUNC1(Properties_obj,getInt,return )

int Properties_obj::getLong( ::String name){
	HX_STACK_FRAME("org.gameplay3d.Properties","getLong",0x46effaa4,"org.gameplay3d.Properties.getLong","org/gameplay3d/Properties.hx",67,0x0c05393e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(67)
	return ::org::gameplay3d::Properties_obj::hx_Properties_getLong(this->nativeObject,name);
}


HX_DEFINE_DYNAMIC_FUNC1(Properties_obj,getLong,return )

bool Properties_obj::getMatrix( ::String name,::org::gameplay3d::Matrix out){
	HX_STACK_FRAME("org.gameplay3d.Properties","getMatrix",0x399e2569,"org.gameplay3d.Properties.getMatrix","org/gameplay3d/Properties.hx",73,0x0c05393e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(out,"out")
	HX_STACK_LINE(73)
	return ::org::gameplay3d::Properties_obj::hx_Properties_getMatrix(this->nativeObject,name,(  (((out == null()))) ? Dynamic(null()) : Dynamic(out->nativeObject) ));
}


HX_DEFINE_DYNAMIC_FUNC2(Properties_obj,getMatrix,return )

::org::gameplay3d::Properties Properties_obj::getNamespace_Str_Bool( ::String id,hx::Null< bool >  __o_searchNames){
bool searchNames = __o_searchNames.Default(false);
	HX_STACK_FRAME("org.gameplay3d.Properties","getNamespace_Str_Bool",0xd40f2a84,"org.gameplay3d.Properties.getNamespace_Str_Bool","org/gameplay3d/Properties.hx",79,0x0c05393e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(searchNames,"searchNames")
{
		HX_STACK_LINE(79)
		::Class classObj = hx::ClassOf< ::org::gameplay3d::Properties >();		HX_STACK_VAR(classObj,"classObj");
		HX_STACK_LINE(79)
		Dynamic nativeObject = ::org::gameplay3d::Properties_obj::hx_Properties_getNamespace_Str_Bool(this->nativeObject,id,searchNames);		HX_STACK_VAR(nativeObject,"nativeObject");
		HX_STACK_LINE(79)
		if (((nativeObject == null()))){
			HX_STACK_LINE(79)
			return null();
		}
		else{
			HX_STACK_LINE(79)
			if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
				HX_STACK_LINE(79)
				::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
				HX_STACK_LINE(79)
				::org::gameplay3d::Properties result = ref->get();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(79)
				if (((result == null()))){
					HX_STACK_LINE(79)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
					HX_STACK_LINE(79)
					::org::gameplay3d::Properties _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(79)
					result = _g;
					HX_STACK_LINE(79)
					ref->set(result);
				}
				HX_STACK_LINE(79)
				return result;
			}
			else{
				HX_STACK_LINE(79)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
				HX_STACK_LINE(79)
				return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
			}
		}
		HX_STACK_LINE(79)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Properties_obj,getNamespace_Str_Bool,return )

::String Properties_obj::getNamespace( ){
	HX_STACK_FRAME("org.gameplay3d.Properties","getNamespace",0x11a7e473,"org.gameplay3d.Properties.getNamespace","org/gameplay3d/Properties.hx",85,0x0c05393e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(85)
	return ::org::gameplay3d::Properties_obj::hx_Properties_getNamespace(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Properties_obj,getNamespace,return )

::org::gameplay3d::Properties Properties_obj::getNextNamespace( ){
	HX_STACK_FRAME("org.gameplay3d.Properties","getNextNamespace",0x1c355500,"org.gameplay3d.Properties.getNextNamespace","org/gameplay3d/Properties.hx",91,0x0c05393e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(91)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Properties >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(91)
	Dynamic nativeObject = ::org::gameplay3d::Properties_obj::hx_Properties_getNextNamespace(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(91)
	if (((nativeObject == null()))){
		HX_STACK_LINE(91)
		return null();
	}
	else{
		HX_STACK_LINE(91)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(91)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(91)
			::org::gameplay3d::Properties result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(91)
			if (((result == null()))){
				HX_STACK_LINE(91)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(91)
				::org::gameplay3d::Properties _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(91)
				result = _g;
				HX_STACK_LINE(91)
				ref->set(result);
			}
			HX_STACK_LINE(91)
			return result;
		}
		else{
			HX_STACK_LINE(91)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(91)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Properties_obj,getNextNamespace,return )

::String Properties_obj::getNextProperty( Dynamic value){
	HX_STACK_FRAME("org.gameplay3d.Properties","getNextProperty",0x6b04f190,"org.gameplay3d.Properties.getNextProperty","org/gameplay3d/Properties.hx",97,0x0c05393e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(97)
	return ::org::gameplay3d::Properties_obj::hx_Properties_getNextProperty(this->nativeObject,value);
}


HX_DEFINE_DYNAMIC_FUNC1(Properties_obj,getNextProperty,return )

bool Properties_obj::getQuaternionFromAxisAngle( ::String name,::org::gameplay3d::Quaternion out){
	HX_STACK_FRAME("org.gameplay3d.Properties","getQuaternionFromAxisAngle",0x720bd882,"org.gameplay3d.Properties.getQuaternionFromAxisAngle","org/gameplay3d/Properties.hx",103,0x0c05393e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(out,"out")
	HX_STACK_LINE(103)
	return ::org::gameplay3d::Properties_obj::hx_Properties_getQuaternionFromAxisAngle(this->nativeObject,name,(  (((out == null()))) ? Dynamic(null()) : Dynamic(out->nativeObject) ));
}


HX_DEFINE_DYNAMIC_FUNC2(Properties_obj,getQuaternionFromAxisAngle,return )

::String Properties_obj::getString( ::String name){
	HX_STACK_FRAME("org.gameplay3d.Properties","getString",0x8f0617f9,"org.gameplay3d.Properties.getString","org/gameplay3d/Properties.hx",109,0x0c05393e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(109)
	return ::org::gameplay3d::Properties_obj::hx_Properties_getString(this->nativeObject,name);
}


HX_DEFINE_DYNAMIC_FUNC1(Properties_obj,getString,return )

int Properties_obj::getType( ::String name){
	HX_STACK_FRAME("org.gameplay3d.Properties","getType",0x4c4147e2,"org.gameplay3d.Properties.getType","org/gameplay3d/Properties.hx",115,0x0c05393e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(115)
	return ::org::gameplay3d::Properties_obj::hx_Properties_getType(this->nativeObject,name);
}


HX_DEFINE_DYNAMIC_FUNC1(Properties_obj,getType,return )

bool Properties_obj::getVector2( ::String name,::org::gameplay3d::Vector2 out){
	HX_STACK_FRAME("org.gameplay3d.Properties","getVector2",0x77f84de7,"org.gameplay3d.Properties.getVector2","org/gameplay3d/Properties.hx",121,0x0c05393e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(out,"out")
	HX_STACK_LINE(121)
	return ::org::gameplay3d::Properties_obj::hx_Properties_getVector2(this->nativeObject,name,(  (((out == null()))) ? Dynamic(null()) : Dynamic(out->nativeObject) ));
}


HX_DEFINE_DYNAMIC_FUNC2(Properties_obj,getVector2,return )

bool Properties_obj::getVector3( ::String name,::org::gameplay3d::Vector3 out){
	HX_STACK_FRAME("org.gameplay3d.Properties","getVector3",0x77f84de8,"org.gameplay3d.Properties.getVector3","org/gameplay3d/Properties.hx",127,0x0c05393e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(out,"out")
	HX_STACK_LINE(127)
	return ::org::gameplay3d::Properties_obj::hx_Properties_getVector3(this->nativeObject,name,(  (((out == null()))) ? Dynamic(null()) : Dynamic(out->nativeObject) ));
}


HX_DEFINE_DYNAMIC_FUNC2(Properties_obj,getVector3,return )

bool Properties_obj::getVector4( ::String name,::org::gameplay3d::Vector4 out){
	HX_STACK_FRAME("org.gameplay3d.Properties","getVector4",0x77f84de9,"org.gameplay3d.Properties.getVector4","org/gameplay3d/Properties.hx",133,0x0c05393e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(out,"out")
	HX_STACK_LINE(133)
	return ::org::gameplay3d::Properties_obj::hx_Properties_getVector4(this->nativeObject,name,(  (((out == null()))) ? Dynamic(null()) : Dynamic(out->nativeObject) ));
}


HX_DEFINE_DYNAMIC_FUNC2(Properties_obj,getVector4,return )

Void Properties_obj::rewind( ){
{
		HX_STACK_FRAME("org.gameplay3d.Properties","rewind",0xf7cf78c9,"org.gameplay3d.Properties.rewind","org/gameplay3d/Properties.hx",139,0x0c05393e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(139)
		::org::gameplay3d::Properties_obj::hx_Properties_rewind(this->nativeObject);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Properties_obj,rewind,(void))

::org::gameplay3d::Properties Properties_obj::create( ::String url){
	HX_STACK_FRAME("org.gameplay3d.Properties","create",0x68beb5ca,"org.gameplay3d.Properties.create","org/gameplay3d/Properties.hx",19,0x0c05393e)
	HX_STACK_ARG(url,"url")
	HX_STACK_LINE(19)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Properties >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(19)
	Dynamic nativeObject = ::org::gameplay3d::Properties_obj::hx_Properties_static_create(url);		HX_STACK_VAR(nativeObject,"nativeObject");
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
			::org::gameplay3d::Properties result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(19)
			if (((result == null()))){
				HX_STACK_LINE(19)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(19)
				::org::gameplay3d::Properties _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Properties_obj,create,return )

Dynamic Properties_obj::hx_Properties_static_create;

Dynamic Properties_obj::hx_Properties_exists;

Dynamic Properties_obj::hx_Properties_getBool;

Dynamic Properties_obj::hx_Properties_getColor_Str_V3;

Dynamic Properties_obj::hx_Properties_getColor_Str_V4;

Dynamic Properties_obj::hx_Properties_getFloat;

Dynamic Properties_obj::hx_Properties_getId;

Dynamic Properties_obj::hx_Properties_getInt;

Dynamic Properties_obj::hx_Properties_getLong;

Dynamic Properties_obj::hx_Properties_getMatrix;

Dynamic Properties_obj::hx_Properties_getNamespace_Str_Bool;

Dynamic Properties_obj::hx_Properties_getNamespace;

Dynamic Properties_obj::hx_Properties_getNextNamespace;

Dynamic Properties_obj::hx_Properties_getNextProperty;

Dynamic Properties_obj::hx_Properties_getQuaternionFromAxisAngle;

Dynamic Properties_obj::hx_Properties_getString;

Dynamic Properties_obj::hx_Properties_getType;

Dynamic Properties_obj::hx_Properties_getVector2;

Dynamic Properties_obj::hx_Properties_getVector3;

Dynamic Properties_obj::hx_Properties_getVector4;

Dynamic Properties_obj::hx_Properties_rewind;


Properties_obj::Properties_obj()
{
}

Dynamic Properties_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"getId") ) { return getId_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"exists") ) { return exists_dyn(); }
		if (HX_FIELD_EQ(inName,"getInt") ) { return getInt_dyn(); }
		if (HX_FIELD_EQ(inName,"rewind") ) { return rewind_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getBool") ) { return getBool_dyn(); }
		if (HX_FIELD_EQ(inName,"getLong") ) { return getLong_dyn(); }
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getFloat") ) { return getFloat_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getMatrix") ) { return getMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"getString") ) { return getString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getVector2") ) { return getVector2_dyn(); }
		if (HX_FIELD_EQ(inName,"getVector3") ) { return getVector3_dyn(); }
		if (HX_FIELD_EQ(inName,"getVector4") ) { return getVector4_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getNamespace") ) { return getNamespace_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getColor_Str_V3") ) { return getColor_Str_V3_dyn(); }
		if (HX_FIELD_EQ(inName,"getColor_Str_V4") ) { return getColor_Str_V4_dyn(); }
		if (HX_FIELD_EQ(inName,"getNextProperty") ) { return getNextProperty_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getNextNamespace") ) { return getNextNamespace_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hx_Properties_getId") ) { return hx_Properties_getId; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Properties_exists") ) { return hx_Properties_exists; }
		if (HX_FIELD_EQ(inName,"hx_Properties_getInt") ) { return hx_Properties_getInt; }
		if (HX_FIELD_EQ(inName,"hx_Properties_rewind") ) { return hx_Properties_rewind; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hx_Properties_getBool") ) { return hx_Properties_getBool; }
		if (HX_FIELD_EQ(inName,"hx_Properties_getLong") ) { return hx_Properties_getLong; }
		if (HX_FIELD_EQ(inName,"hx_Properties_getType") ) { return hx_Properties_getType; }
		if (HX_FIELD_EQ(inName,"getNamespace_Str_Bool") ) { return getNamespace_Str_Bool_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Properties_getFloat") ) { return hx_Properties_getFloat; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_Properties_getMatrix") ) { return hx_Properties_getMatrix; }
		if (HX_FIELD_EQ(inName,"hx_Properties_getString") ) { return hx_Properties_getString; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_Properties_getVector2") ) { return hx_Properties_getVector2; }
		if (HX_FIELD_EQ(inName,"hx_Properties_getVector3") ) { return hx_Properties_getVector3; }
		if (HX_FIELD_EQ(inName,"hx_Properties_getVector4") ) { return hx_Properties_getVector4; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_Properties_getNamespace") ) { return hx_Properties_getNamespace; }
		if (HX_FIELD_EQ(inName,"getQuaternionFromAxisAngle") ) { return getQuaternionFromAxisAngle_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"hx_Properties_static_create") ) { return hx_Properties_static_create; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_Properties_getColor_Str_V3") ) { return hx_Properties_getColor_Str_V3; }
		if (HX_FIELD_EQ(inName,"hx_Properties_getColor_Str_V4") ) { return hx_Properties_getColor_Str_V4; }
		if (HX_FIELD_EQ(inName,"hx_Properties_getNextProperty") ) { return hx_Properties_getNextProperty; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"hx_Properties_getNextNamespace") ) { return hx_Properties_getNextNamespace; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"hx_Properties_getNamespace_Str_Bool") ) { return hx_Properties_getNamespace_Str_Bool; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"hx_Properties_getQuaternionFromAxisAngle") ) { return hx_Properties_getQuaternionFromAxisAngle; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Properties_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"hx_Properties_getId") ) { hx_Properties_getId=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Properties_exists") ) { hx_Properties_exists=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Properties_getInt") ) { hx_Properties_getInt=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Properties_rewind") ) { hx_Properties_rewind=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hx_Properties_getBool") ) { hx_Properties_getBool=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Properties_getLong") ) { hx_Properties_getLong=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Properties_getType") ) { hx_Properties_getType=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Properties_getFloat") ) { hx_Properties_getFloat=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_Properties_getMatrix") ) { hx_Properties_getMatrix=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Properties_getString") ) { hx_Properties_getString=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_Properties_getVector2") ) { hx_Properties_getVector2=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Properties_getVector3") ) { hx_Properties_getVector3=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Properties_getVector4") ) { hx_Properties_getVector4=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_Properties_getNamespace") ) { hx_Properties_getNamespace=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"hx_Properties_static_create") ) { hx_Properties_static_create=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_Properties_getColor_Str_V3") ) { hx_Properties_getColor_Str_V3=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Properties_getColor_Str_V4") ) { hx_Properties_getColor_Str_V4=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Properties_getNextProperty") ) { hx_Properties_getNextProperty=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"hx_Properties_getNextNamespace") ) { hx_Properties_getNextNamespace=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"hx_Properties_getNamespace_Str_Bool") ) { hx_Properties_getNamespace_Str_Bool=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"hx_Properties_getQuaternionFromAxisAngle") ) { hx_Properties_getQuaternionFromAxisAngle=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Properties_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create"),
	HX_CSTRING("hx_Properties_static_create"),
	HX_CSTRING("hx_Properties_exists"),
	HX_CSTRING("hx_Properties_getBool"),
	HX_CSTRING("hx_Properties_getColor_Str_V3"),
	HX_CSTRING("hx_Properties_getColor_Str_V4"),
	HX_CSTRING("hx_Properties_getFloat"),
	HX_CSTRING("hx_Properties_getId"),
	HX_CSTRING("hx_Properties_getInt"),
	HX_CSTRING("hx_Properties_getLong"),
	HX_CSTRING("hx_Properties_getMatrix"),
	HX_CSTRING("hx_Properties_getNamespace_Str_Bool"),
	HX_CSTRING("hx_Properties_getNamespace"),
	HX_CSTRING("hx_Properties_getNextNamespace"),
	HX_CSTRING("hx_Properties_getNextProperty"),
	HX_CSTRING("hx_Properties_getQuaternionFromAxisAngle"),
	HX_CSTRING("hx_Properties_getString"),
	HX_CSTRING("hx_Properties_getType"),
	HX_CSTRING("hx_Properties_getVector2"),
	HX_CSTRING("hx_Properties_getVector3"),
	HX_CSTRING("hx_Properties_getVector4"),
	HX_CSTRING("hx_Properties_rewind"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("exists"),
	HX_CSTRING("getBool"),
	HX_CSTRING("getColor_Str_V3"),
	HX_CSTRING("getColor_Str_V4"),
	HX_CSTRING("getFloat"),
	HX_CSTRING("getId"),
	HX_CSTRING("getInt"),
	HX_CSTRING("getLong"),
	HX_CSTRING("getMatrix"),
	HX_CSTRING("getNamespace_Str_Bool"),
	HX_CSTRING("getNamespace"),
	HX_CSTRING("getNextNamespace"),
	HX_CSTRING("getNextProperty"),
	HX_CSTRING("getQuaternionFromAxisAngle"),
	HX_CSTRING("getString"),
	HX_CSTRING("getType"),
	HX_CSTRING("getVector2"),
	HX_CSTRING("getVector3"),
	HX_CSTRING("getVector4"),
	HX_CSTRING("rewind"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Properties_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Properties_obj::hx_Properties_static_create,"hx_Properties_static_create");
	HX_MARK_MEMBER_NAME(Properties_obj::hx_Properties_exists,"hx_Properties_exists");
	HX_MARK_MEMBER_NAME(Properties_obj::hx_Properties_getBool,"hx_Properties_getBool");
	HX_MARK_MEMBER_NAME(Properties_obj::hx_Properties_getColor_Str_V3,"hx_Properties_getColor_Str_V3");
	HX_MARK_MEMBER_NAME(Properties_obj::hx_Properties_getColor_Str_V4,"hx_Properties_getColor_Str_V4");
	HX_MARK_MEMBER_NAME(Properties_obj::hx_Properties_getFloat,"hx_Properties_getFloat");
	HX_MARK_MEMBER_NAME(Properties_obj::hx_Properties_getId,"hx_Properties_getId");
	HX_MARK_MEMBER_NAME(Properties_obj::hx_Properties_getInt,"hx_Properties_getInt");
	HX_MARK_MEMBER_NAME(Properties_obj::hx_Properties_getLong,"hx_Properties_getLong");
	HX_MARK_MEMBER_NAME(Properties_obj::hx_Properties_getMatrix,"hx_Properties_getMatrix");
	HX_MARK_MEMBER_NAME(Properties_obj::hx_Properties_getNamespace_Str_Bool,"hx_Properties_getNamespace_Str_Bool");
	HX_MARK_MEMBER_NAME(Properties_obj::hx_Properties_getNamespace,"hx_Properties_getNamespace");
	HX_MARK_MEMBER_NAME(Properties_obj::hx_Properties_getNextNamespace,"hx_Properties_getNextNamespace");
	HX_MARK_MEMBER_NAME(Properties_obj::hx_Properties_getNextProperty,"hx_Properties_getNextProperty");
	HX_MARK_MEMBER_NAME(Properties_obj::hx_Properties_getQuaternionFromAxisAngle,"hx_Properties_getQuaternionFromAxisAngle");
	HX_MARK_MEMBER_NAME(Properties_obj::hx_Properties_getString,"hx_Properties_getString");
	HX_MARK_MEMBER_NAME(Properties_obj::hx_Properties_getType,"hx_Properties_getType");
	HX_MARK_MEMBER_NAME(Properties_obj::hx_Properties_getVector2,"hx_Properties_getVector2");
	HX_MARK_MEMBER_NAME(Properties_obj::hx_Properties_getVector3,"hx_Properties_getVector3");
	HX_MARK_MEMBER_NAME(Properties_obj::hx_Properties_getVector4,"hx_Properties_getVector4");
	HX_MARK_MEMBER_NAME(Properties_obj::hx_Properties_rewind,"hx_Properties_rewind");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Properties_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Properties_obj::hx_Properties_static_create,"hx_Properties_static_create");
	HX_VISIT_MEMBER_NAME(Properties_obj::hx_Properties_exists,"hx_Properties_exists");
	HX_VISIT_MEMBER_NAME(Properties_obj::hx_Properties_getBool,"hx_Properties_getBool");
	HX_VISIT_MEMBER_NAME(Properties_obj::hx_Properties_getColor_Str_V3,"hx_Properties_getColor_Str_V3");
	HX_VISIT_MEMBER_NAME(Properties_obj::hx_Properties_getColor_Str_V4,"hx_Properties_getColor_Str_V4");
	HX_VISIT_MEMBER_NAME(Properties_obj::hx_Properties_getFloat,"hx_Properties_getFloat");
	HX_VISIT_MEMBER_NAME(Properties_obj::hx_Properties_getId,"hx_Properties_getId");
	HX_VISIT_MEMBER_NAME(Properties_obj::hx_Properties_getInt,"hx_Properties_getInt");
	HX_VISIT_MEMBER_NAME(Properties_obj::hx_Properties_getLong,"hx_Properties_getLong");
	HX_VISIT_MEMBER_NAME(Properties_obj::hx_Properties_getMatrix,"hx_Properties_getMatrix");
	HX_VISIT_MEMBER_NAME(Properties_obj::hx_Properties_getNamespace_Str_Bool,"hx_Properties_getNamespace_Str_Bool");
	HX_VISIT_MEMBER_NAME(Properties_obj::hx_Properties_getNamespace,"hx_Properties_getNamespace");
	HX_VISIT_MEMBER_NAME(Properties_obj::hx_Properties_getNextNamespace,"hx_Properties_getNextNamespace");
	HX_VISIT_MEMBER_NAME(Properties_obj::hx_Properties_getNextProperty,"hx_Properties_getNextProperty");
	HX_VISIT_MEMBER_NAME(Properties_obj::hx_Properties_getQuaternionFromAxisAngle,"hx_Properties_getQuaternionFromAxisAngle");
	HX_VISIT_MEMBER_NAME(Properties_obj::hx_Properties_getString,"hx_Properties_getString");
	HX_VISIT_MEMBER_NAME(Properties_obj::hx_Properties_getType,"hx_Properties_getType");
	HX_VISIT_MEMBER_NAME(Properties_obj::hx_Properties_getVector2,"hx_Properties_getVector2");
	HX_VISIT_MEMBER_NAME(Properties_obj::hx_Properties_getVector3,"hx_Properties_getVector3");
	HX_VISIT_MEMBER_NAME(Properties_obj::hx_Properties_getVector4,"hx_Properties_getVector4");
	HX_VISIT_MEMBER_NAME(Properties_obj::hx_Properties_rewind,"hx_Properties_rewind");
};

#endif

Class Properties_obj::__mClass;

void Properties_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.Properties"), hx::TCanCast< Properties_obj> ,sStaticFields,sMemberFields,
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

void Properties_obj::__boot()
{
	hx_Properties_static_create= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Properties >(),HX_CSTRING("static_create"),(int)1);
	hx_Properties_exists= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Properties >(),HX_CSTRING("exists"),(int)2);
	hx_Properties_getBool= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Properties >(),HX_CSTRING("getBool"),(int)3);
	hx_Properties_getColor_Str_V3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Properties >(),HX_CSTRING("getColor_Str_V3"),(int)3);
	hx_Properties_getColor_Str_V4= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Properties >(),HX_CSTRING("getColor_Str_V4"),(int)3);
	hx_Properties_getFloat= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Properties >(),HX_CSTRING("getFloat"),(int)2);
	hx_Properties_getId= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Properties >(),HX_CSTRING("getId"),(int)1);
	hx_Properties_getInt= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Properties >(),HX_CSTRING("getInt"),(int)2);
	hx_Properties_getLong= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Properties >(),HX_CSTRING("getLong"),(int)2);
	hx_Properties_getMatrix= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Properties >(),HX_CSTRING("getMatrix"),(int)3);
	hx_Properties_getNamespace_Str_Bool= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Properties >(),HX_CSTRING("getNamespace_Str_Bool"),(int)3);
	hx_Properties_getNamespace= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Properties >(),HX_CSTRING("getNamespace"),(int)1);
	hx_Properties_getNextNamespace= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Properties >(),HX_CSTRING("getNextNamespace"),(int)1);
	hx_Properties_getNextProperty= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Properties >(),HX_CSTRING("getNextProperty"),(int)2);
	hx_Properties_getQuaternionFromAxisAngle= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Properties >(),HX_CSTRING("getQuaternionFromAxisAngle"),(int)3);
	hx_Properties_getString= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Properties >(),HX_CSTRING("getString"),(int)2);
	hx_Properties_getType= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Properties >(),HX_CSTRING("getType"),(int)2);
	hx_Properties_getVector2= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Properties >(),HX_CSTRING("getVector2"),(int)3);
	hx_Properties_getVector3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Properties >(),HX_CSTRING("getVector3"),(int)3);
	hx_Properties_getVector4= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Properties >(),HX_CSTRING("getVector4"),(int)3);
	hx_Properties_rewind= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Properties >(),HX_CSTRING("rewind"),(int)1);
}

} // end namespace org
} // end namespace gameplay3d
