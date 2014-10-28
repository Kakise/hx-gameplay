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
#ifndef INCLUDED_org_gameplay3d_Curve
#include <org/gameplay3d/Curve.h>
#endif
#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Ref
#include <org/gameplay3d/Ref.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_INativeBinding
#include <org/gameplay3d/intern/INativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_NativeBinding
#include <org/gameplay3d/intern/NativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_IMutableNativeArray
#include <org/gameplay3d/util/IMutableNativeArray.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_INativeArray
#include <org/gameplay3d/util/INativeArray.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_NativeInterface
#include <org/gameplay3d/util/NativeInterface.h>
#endif
namespace org{
namespace gameplay3d{

Void Curve_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.Curve","new",0xd2e445d4,"org.gameplay3d.Curve.new","org/gameplay3d/Curve.hx",12,0x37fc5dbc)
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

//Curve_obj::~Curve_obj() { }

Dynamic Curve_obj::__CreateEmpty() { return  new Curve_obj; }
hx::ObjectPtr< Curve_obj > Curve_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< Curve_obj > result = new Curve_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic Curve_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Curve_obj > result = new Curve_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *Curve_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::intern::INativeBinding_obj)) return operator ::org::gameplay3d::intern::INativeBinding_obj *();
	if (inType==typeid( ::org::gameplay3d::Ref_obj)) return operator ::org::gameplay3d::Ref_obj *();
	return super::__ToInterface(inType);
}

Void Curve_obj::evaluate( Float time,::org::gameplay3d::util::IMutableNativeArray dst){
{
		HX_STACK_FRAME("org.gameplay3d.Curve","evaluate",0x075da665,"org.gameplay3d.Curve.evaluate","org/gameplay3d/Curve.hx",27,0x37fc5dbc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(time,"time")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(27)
		::org::gameplay3d::Curve_obj::hx_Curve_evaluate(this->nativeObject,time,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Curve_obj,evaluate,(void))

int Curve_obj::getComponentCount( ){
	HX_STACK_FRAME("org.gameplay3d.Curve","getComponentCount",0xbc753e7c,"org.gameplay3d.Curve.getComponentCount","org/gameplay3d/Curve.hx",33,0x37fc5dbc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(33)
	return ::org::gameplay3d::Curve_obj::hx_Curve_getComponentCount(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Curve_obj,getComponentCount,return )

Float Curve_obj::getEndTime( ){
	HX_STACK_FRAME("org.gameplay3d.Curve","getEndTime",0x16f6ec9e,"org.gameplay3d.Curve.getEndTime","org/gameplay3d/Curve.hx",39,0x37fc5dbc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(39)
	return ::org::gameplay3d::Curve_obj::hx_Curve_getEndTime(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Curve_obj,getEndTime,return )

int Curve_obj::getPointCount( ){
	HX_STACK_FRAME("org.gameplay3d.Curve","getPointCount",0x38f10909,"org.gameplay3d.Curve.getPointCount","org/gameplay3d/Curve.hx",45,0x37fc5dbc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(45)
	return ::org::gameplay3d::Curve_obj::hx_Curve_getPointCount(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Curve_obj,getPointCount,return )

Float Curve_obj::getStartTime( ){
	HX_STACK_FRAME("org.gameplay3d.Curve","getStartTime",0x9b3e1e25,"org.gameplay3d.Curve.getStartTime","org/gameplay3d/Curve.hx",51,0x37fc5dbc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(51)
	return ::org::gameplay3d::Curve_obj::hx_Curve_getStartTime(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Curve_obj,getStartTime,return )

Void Curve_obj::setPoint_Int_Flt_ArrFlt_Int( int index,Float time,::org::gameplay3d::util::IMutableNativeArray value,int type){
{
		HX_STACK_FRAME("org.gameplay3d.Curve","setPoint_Int_Flt_ArrFlt_Int",0xbcd42643,"org.gameplay3d.Curve.setPoint_Int_Flt_ArrFlt_Int","org/gameplay3d/Curve.hx",63,0x37fc5dbc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(time,"time")
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(type,"type")
		HX_STACK_LINE(63)
		::org::gameplay3d::Curve_obj::hx_Curve_setPoint_Int_Flt_ArrFlt_Int(this->nativeObject,index,time,(  (((value == null()))) ? Dynamic(null()) : Dynamic(value->__Field(HX_CSTRING("nativeObject"),true)) ),type);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Curve_obj,setPoint_Int_Flt_ArrFlt_Int,(void))

Void Curve_obj::setPoint_Int_Flt_ArrFlt_Int_ArrFltX2( int index,Float time,::org::gameplay3d::util::IMutableNativeArray value,int type,::org::gameplay3d::util::IMutableNativeArray inValue,::org::gameplay3d::util::IMutableNativeArray outValue){
{
		HX_STACK_FRAME("org.gameplay3d.Curve","setPoint_Int_Flt_ArrFlt_Int_ArrFltX2",0xe65f6783,"org.gameplay3d.Curve.setPoint_Int_Flt_ArrFlt_Int_ArrFltX2","org/gameplay3d/Curve.hx",69,0x37fc5dbc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(time,"time")
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(inValue,"inValue")
		HX_STACK_ARG(outValue,"outValue")
		HX_STACK_LINE(69)
		::org::gameplay3d::Curve_obj::hx_Curve_setPoint_Int_Flt_ArrFlt_Int_ArrFltX2(this->nativeObject,index,time,(  (((value == null()))) ? Dynamic(null()) : Dynamic(value->__Field(HX_CSTRING("nativeObject"),true)) ),type,(  (((inValue == null()))) ? Dynamic(null()) : Dynamic(inValue->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((outValue == null()))) ? Dynamic(null()) : Dynamic(outValue->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Curve_obj,setPoint_Int_Flt_ArrFlt_Int_ArrFltX2,(void))

Void Curve_obj::setTangent( int index,int type,::org::gameplay3d::util::IMutableNativeArray inValue,::org::gameplay3d::util::IMutableNativeArray outValue){
{
		HX_STACK_FRAME("org.gameplay3d.Curve","setTangent",0x2620a24f,"org.gameplay3d.Curve.setTangent","org/gameplay3d/Curve.hx",75,0x37fc5dbc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(inValue,"inValue")
		HX_STACK_ARG(outValue,"outValue")
		HX_STACK_LINE(75)
		::org::gameplay3d::Curve_obj::hx_Curve_setTangent(this->nativeObject,index,type,(  (((inValue == null()))) ? Dynamic(null()) : Dynamic(inValue->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((outValue == null()))) ? Dynamic(null()) : Dynamic(outValue->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Curve_obj,setTangent,(void))

::org::gameplay3d::Curve Curve_obj::create( int pointCount,int componentCount){
	HX_STACK_FRAME("org.gameplay3d.Curve","create",0x4622d208,"org.gameplay3d.Curve.create","org/gameplay3d/Curve.hx",21,0x37fc5dbc)
	HX_STACK_ARG(pointCount,"pointCount")
	HX_STACK_ARG(componentCount,"componentCount")
	HX_STACK_LINE(21)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Curve >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(21)
	Dynamic nativeObject = ::org::gameplay3d::Curve_obj::hx_Curve_static_create(pointCount,componentCount);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(21)
	if (((nativeObject == null()))){
		HX_STACK_LINE(21)
		return null();
	}
	else{
		HX_STACK_LINE(21)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(21)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(21)
			::org::gameplay3d::Curve result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(21)
			if (((result == null()))){
				HX_STACK_LINE(21)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(21)
				::org::gameplay3d::Curve _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(21)
				result = _g;
				HX_STACK_LINE(21)
				ref->set(result);
			}
			HX_STACK_LINE(21)
			return result;
		}
		else{
			HX_STACK_LINE(21)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(21)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(21)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Curve_obj,create,return )

Float Curve_obj::lerp( Float t,Float from,Float to){
	HX_STACK_FRAME("org.gameplay3d.Curve","lerp",0xb3866283,"org.gameplay3d.Curve.lerp","org/gameplay3d/Curve.hx",57,0x37fc5dbc)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(from,"from")
	HX_STACK_ARG(to,"to")
	HX_STACK_LINE(57)
	return ::org::gameplay3d::Curve_obj::hx_Curve_static_lerp(t,from,to);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Curve_obj,lerp,return )

Dynamic Curve_obj::hx_Curve_static_create;

Dynamic Curve_obj::hx_Curve_evaluate;

Dynamic Curve_obj::hx_Curve_getComponentCount;

Dynamic Curve_obj::hx_Curve_getEndTime;

Dynamic Curve_obj::hx_Curve_getPointCount;

Dynamic Curve_obj::hx_Curve_getStartTime;

Dynamic Curve_obj::hx_Curve_static_lerp;

Dynamic Curve_obj::hx_Curve_setPoint_Int_Flt_ArrFlt_Int;

Dynamic Curve_obj::hx_Curve_setPoint_Int_Flt_ArrFlt_Int_ArrFltX2;

Dynamic Curve_obj::hx_Curve_setTangent;


Curve_obj::Curve_obj()
{
}

Dynamic Curve_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lerp") ) { return lerp_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"evaluate") ) { return evaluate_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getEndTime") ) { return getEndTime_dyn(); }
		if (HX_FIELD_EQ(inName,"setTangent") ) { return setTangent_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getStartTime") ) { return getStartTime_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getPointCount") ) { return getPointCount_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"hx_Curve_evaluate") ) { return hx_Curve_evaluate; }
		if (HX_FIELD_EQ(inName,"getComponentCount") ) { return getComponentCount_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hx_Curve_getEndTime") ) { return hx_Curve_getEndTime; }
		if (HX_FIELD_EQ(inName,"hx_Curve_setTangent") ) { return hx_Curve_setTangent; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Curve_static_lerp") ) { return hx_Curve_static_lerp; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hx_Curve_getStartTime") ) { return hx_Curve_getStartTime; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Curve_static_create") ) { return hx_Curve_static_create; }
		if (HX_FIELD_EQ(inName,"hx_Curve_getPointCount") ) { return hx_Curve_getPointCount; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_Curve_getComponentCount") ) { return hx_Curve_getComponentCount; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"setPoint_Int_Flt_ArrFlt_Int") ) { return setPoint_Int_Flt_ArrFlt_Int_dyn(); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"hx_Curve_setPoint_Int_Flt_ArrFlt_Int") ) { return hx_Curve_setPoint_Int_Flt_ArrFlt_Int; }
		if (HX_FIELD_EQ(inName,"setPoint_Int_Flt_ArrFlt_Int_ArrFltX2") ) { return setPoint_Int_Flt_ArrFlt_Int_ArrFltX2_dyn(); }
		break;
	case 45:
		if (HX_FIELD_EQ(inName,"hx_Curve_setPoint_Int_Flt_ArrFlt_Int_ArrFltX2") ) { return hx_Curve_setPoint_Int_Flt_ArrFlt_Int_ArrFltX2; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Curve_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"hx_Curve_evaluate") ) { hx_Curve_evaluate=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hx_Curve_getEndTime") ) { hx_Curve_getEndTime=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Curve_setTangent") ) { hx_Curve_setTangent=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Curve_static_lerp") ) { hx_Curve_static_lerp=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hx_Curve_getStartTime") ) { hx_Curve_getStartTime=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Curve_static_create") ) { hx_Curve_static_create=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Curve_getPointCount") ) { hx_Curve_getPointCount=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_Curve_getComponentCount") ) { hx_Curve_getComponentCount=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"hx_Curve_setPoint_Int_Flt_ArrFlt_Int") ) { hx_Curve_setPoint_Int_Flt_ArrFlt_Int=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 45:
		if (HX_FIELD_EQ(inName,"hx_Curve_setPoint_Int_Flt_ArrFlt_Int_ArrFltX2") ) { hx_Curve_setPoint_Int_Flt_ArrFlt_Int_ArrFltX2=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Curve_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create"),
	HX_CSTRING("lerp"),
	HX_CSTRING("hx_Curve_static_create"),
	HX_CSTRING("hx_Curve_evaluate"),
	HX_CSTRING("hx_Curve_getComponentCount"),
	HX_CSTRING("hx_Curve_getEndTime"),
	HX_CSTRING("hx_Curve_getPointCount"),
	HX_CSTRING("hx_Curve_getStartTime"),
	HX_CSTRING("hx_Curve_static_lerp"),
	HX_CSTRING("hx_Curve_setPoint_Int_Flt_ArrFlt_Int"),
	HX_CSTRING("hx_Curve_setPoint_Int_Flt_ArrFlt_Int_ArrFltX2"),
	HX_CSTRING("hx_Curve_setTangent"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("evaluate"),
	HX_CSTRING("getComponentCount"),
	HX_CSTRING("getEndTime"),
	HX_CSTRING("getPointCount"),
	HX_CSTRING("getStartTime"),
	HX_CSTRING("setPoint_Int_Flt_ArrFlt_Int"),
	HX_CSTRING("setPoint_Int_Flt_ArrFlt_Int_ArrFltX2"),
	HX_CSTRING("setTangent"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Curve_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Curve_obj::hx_Curve_static_create,"hx_Curve_static_create");
	HX_MARK_MEMBER_NAME(Curve_obj::hx_Curve_evaluate,"hx_Curve_evaluate");
	HX_MARK_MEMBER_NAME(Curve_obj::hx_Curve_getComponentCount,"hx_Curve_getComponentCount");
	HX_MARK_MEMBER_NAME(Curve_obj::hx_Curve_getEndTime,"hx_Curve_getEndTime");
	HX_MARK_MEMBER_NAME(Curve_obj::hx_Curve_getPointCount,"hx_Curve_getPointCount");
	HX_MARK_MEMBER_NAME(Curve_obj::hx_Curve_getStartTime,"hx_Curve_getStartTime");
	HX_MARK_MEMBER_NAME(Curve_obj::hx_Curve_static_lerp,"hx_Curve_static_lerp");
	HX_MARK_MEMBER_NAME(Curve_obj::hx_Curve_setPoint_Int_Flt_ArrFlt_Int,"hx_Curve_setPoint_Int_Flt_ArrFlt_Int");
	HX_MARK_MEMBER_NAME(Curve_obj::hx_Curve_setPoint_Int_Flt_ArrFlt_Int_ArrFltX2,"hx_Curve_setPoint_Int_Flt_ArrFlt_Int_ArrFltX2");
	HX_MARK_MEMBER_NAME(Curve_obj::hx_Curve_setTangent,"hx_Curve_setTangent");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Curve_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Curve_obj::hx_Curve_static_create,"hx_Curve_static_create");
	HX_VISIT_MEMBER_NAME(Curve_obj::hx_Curve_evaluate,"hx_Curve_evaluate");
	HX_VISIT_MEMBER_NAME(Curve_obj::hx_Curve_getComponentCount,"hx_Curve_getComponentCount");
	HX_VISIT_MEMBER_NAME(Curve_obj::hx_Curve_getEndTime,"hx_Curve_getEndTime");
	HX_VISIT_MEMBER_NAME(Curve_obj::hx_Curve_getPointCount,"hx_Curve_getPointCount");
	HX_VISIT_MEMBER_NAME(Curve_obj::hx_Curve_getStartTime,"hx_Curve_getStartTime");
	HX_VISIT_MEMBER_NAME(Curve_obj::hx_Curve_static_lerp,"hx_Curve_static_lerp");
	HX_VISIT_MEMBER_NAME(Curve_obj::hx_Curve_setPoint_Int_Flt_ArrFlt_Int,"hx_Curve_setPoint_Int_Flt_ArrFlt_Int");
	HX_VISIT_MEMBER_NAME(Curve_obj::hx_Curve_setPoint_Int_Flt_ArrFlt_Int_ArrFltX2,"hx_Curve_setPoint_Int_Flt_ArrFlt_Int_ArrFltX2");
	HX_VISIT_MEMBER_NAME(Curve_obj::hx_Curve_setTangent,"hx_Curve_setTangent");
};

#endif

Class Curve_obj::__mClass;

void Curve_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.Curve"), hx::TCanCast< Curve_obj> ,sStaticFields,sMemberFields,
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

void Curve_obj::__boot()
{
	hx_Curve_static_create= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Curve >(),HX_CSTRING("static_create"),(int)2);
	hx_Curve_evaluate= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Curve >(),HX_CSTRING("evaluate"),(int)3);
	hx_Curve_getComponentCount= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Curve >(),HX_CSTRING("getComponentCount"),(int)1);
	hx_Curve_getEndTime= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Curve >(),HX_CSTRING("getEndTime"),(int)1);
	hx_Curve_getPointCount= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Curve >(),HX_CSTRING("getPointCount"),(int)1);
	hx_Curve_getStartTime= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Curve >(),HX_CSTRING("getStartTime"),(int)1);
	hx_Curve_static_lerp= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Curve >(),HX_CSTRING("static_lerp"),(int)3);
	hx_Curve_setPoint_Int_Flt_ArrFlt_Int= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Curve >(),HX_CSTRING("setPoint_Int_Flt_ArrFlt_Int"),(int)5);
	hx_Curve_setPoint_Int_Flt_ArrFlt_Int_ArrFltX2= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Curve >(),HX_CSTRING("setPoint_Int_Flt_ArrFlt_Int_ArrFltX2"),(int)-1);
	hx_Curve_setTangent= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Curve >(),HX_CSTRING("setTangent"),(int)5);
}

} // end namespace org
} // end namespace gameplay3d
