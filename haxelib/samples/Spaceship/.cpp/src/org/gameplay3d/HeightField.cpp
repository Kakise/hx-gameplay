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
#ifndef INCLUDED_org_gameplay3d_HeightField
#include <org/gameplay3d/HeightField.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Ref
#include <org/gameplay3d/Ref.h>
#endif
#ifndef INCLUDED_org_gameplay3d__HeightField_HeightFieldArray
#include <org/gameplay3d/_HeightField/HeightFieldArray.h>
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
#ifndef INCLUDED_org_gameplay3d_util_PrimitiveArray
#include <org/gameplay3d/util/PrimitiveArray.h>
#endif
namespace org{
namespace gameplay3d{

Void HeightField_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.HeightField","new",0x39a51ab8,"org.gameplay3d.HeightField.new","org/gameplay3d/HeightField.hx",12,0x8176a958)
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

//HeightField_obj::~HeightField_obj() { }

Dynamic HeightField_obj::__CreateEmpty() { return  new HeightField_obj; }
hx::ObjectPtr< HeightField_obj > HeightField_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< HeightField_obj > result = new HeightField_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic HeightField_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HeightField_obj > result = new HeightField_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *HeightField_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::intern::INativeBinding_obj)) return operator ::org::gameplay3d::intern::INativeBinding_obj *();
	if (inType==typeid( ::org::gameplay3d::Ref_obj)) return operator ::org::gameplay3d::Ref_obj *();
	return super::__ToInterface(inType);
}

Dynamic HeightField_obj::impersonate( Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.HeightField","impersonate",0x052e9d91,"org.gameplay3d.HeightField.impersonate","org/gameplay3d/HeightField.hx",21,0x8176a958)
	HX_STACK_THIS(this)
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(22)
	bool initialized = (this->nativeObject != null());		HX_STACK_VAR(initialized,"initialized");
	HX_STACK_LINE(23)
	this->super::impersonate(nativeObject);
	HX_STACK_LINE(24)
	if ((!(initialized))){
		HX_STACK_LINE(26)
		Dynamic _g = ::org::gameplay3d::HeightField_obj::hx_HeightField_getArray();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(26)
		int _g1 = this->getRowCount();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(26)
		int _g2 = this->getColumnCount();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(26)
		::org::gameplay3d::_HeightField::HeightFieldArray _g3 = ::org::gameplay3d::_HeightField::HeightFieldArray_obj::__new(_g,_g1,_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(26)
		this->_array = _g3;
	}
	else{
		HX_STACK_LINE(30)
		Dynamic _g4 = ::org::gameplay3d::HeightField_obj::hx_HeightField_getArray();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(30)
		this->_array->impersonate(_g4);
	}
	HX_STACK_LINE(32)
	return hx::ObjectPtr<OBJ_>(this);
}


::org::gameplay3d::util::IMutableNativeArray HeightField_obj::getArray( ){
	HX_STACK_FRAME("org.gameplay3d.HeightField","getArray",0x7e90b3cb,"org.gameplay3d.HeightField.getArray","org/gameplay3d/HeightField.hx",56,0x8176a958)
	HX_STACK_THIS(this)
	HX_STACK_LINE(56)
	return this->_array;
}


HX_DEFINE_DYNAMIC_FUNC0(HeightField_obj,getArray,return )

int HeightField_obj::getColumnCount( ){
	HX_STACK_FRAME("org.gameplay3d.HeightField","getColumnCount",0x7314d5cb,"org.gameplay3d.HeightField.getColumnCount","org/gameplay3d/HeightField.hx",62,0x8176a958)
	HX_STACK_THIS(this)
	HX_STACK_LINE(62)
	return ::org::gameplay3d::HeightField_obj::hx_HeightField_getColumnCount(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(HeightField_obj,getColumnCount,return )

Float HeightField_obj::getHeight( Float column,Float row){
	HX_STACK_FRAME("org.gameplay3d.HeightField","getHeight",0x8a682d75,"org.gameplay3d.HeightField.getHeight","org/gameplay3d/HeightField.hx",68,0x8176a958)
	HX_STACK_THIS(this)
	HX_STACK_ARG(column,"column")
	HX_STACK_ARG(row,"row")
	HX_STACK_LINE(68)
	return ::org::gameplay3d::HeightField_obj::hx_HeightField_getHeight(this->nativeObject,column,row);
}


HX_DEFINE_DYNAMIC_FUNC2(HeightField_obj,getHeight,return )

int HeightField_obj::getRowCount( ){
	HX_STACK_FRAME("org.gameplay3d.HeightField","getRowCount",0xd5e91963,"org.gameplay3d.HeightField.getRowCount","org/gameplay3d/HeightField.hx",74,0x8176a958)
	HX_STACK_THIS(this)
	HX_STACK_LINE(74)
	return ::org::gameplay3d::HeightField_obj::hx_HeightField_getRowCount(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(HeightField_obj,getRowCount,return )

::org::gameplay3d::HeightField HeightField_obj::create( int rows,int columns){
	HX_STACK_FRAME("org.gameplay3d.HeightField","create",0x4f5323a4,"org.gameplay3d.HeightField.create","org/gameplay3d/HeightField.hx",38,0x8176a958)
	HX_STACK_ARG(rows,"rows")
	HX_STACK_ARG(columns,"columns")
	HX_STACK_LINE(38)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::HeightField >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(38)
	Dynamic nativeObject = ::org::gameplay3d::HeightField_obj::hx_HeightField_static_create(rows,columns);		HX_STACK_VAR(nativeObject,"nativeObject");
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
			::org::gameplay3d::HeightField result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(38)
			if (((result == null()))){
				HX_STACK_LINE(38)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(38)
				::org::gameplay3d::HeightField _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HeightField_obj,create,return )

::org::gameplay3d::HeightField HeightField_obj::createFromImage( ::String path,hx::Null< Float >  __o_heightMin,hx::Null< Float >  __o_heightMax){
Float heightMin = __o_heightMin.Default(0.0);
Float heightMax = __o_heightMax.Default(1.0);
	HX_STACK_FRAME("org.gameplay3d.HeightField","createFromImage",0x202a314d,"org.gameplay3d.HeightField.createFromImage","org/gameplay3d/HeightField.hx",44,0x8176a958)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(heightMin,"heightMin")
	HX_STACK_ARG(heightMax,"heightMax")
{
		HX_STACK_LINE(44)
		::Class classObj = hx::ClassOf< ::org::gameplay3d::HeightField >();		HX_STACK_VAR(classObj,"classObj");
		HX_STACK_LINE(44)
		Dynamic nativeObject = ::org::gameplay3d::HeightField_obj::hx_HeightField_static_createFromImage(path,heightMin,heightMax);		HX_STACK_VAR(nativeObject,"nativeObject");
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
				::org::gameplay3d::HeightField result = ref->get();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(44)
				if (((result == null()))){
					HX_STACK_LINE(44)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
					HX_STACK_LINE(44)
					::org::gameplay3d::HeightField _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HeightField_obj,createFromImage,return )

::org::gameplay3d::HeightField HeightField_obj::createFromRAW( ::String path,int width,int height,hx::Null< Float >  __o_heightMin,hx::Null< Float >  __o_heightMax){
Float heightMin = __o_heightMin.Default(0.0);
Float heightMax = __o_heightMax.Default(1.0);
	HX_STACK_FRAME("org.gameplay3d.HeightField","createFromRAW",0x404b0b5a,"org.gameplay3d.HeightField.createFromRAW","org/gameplay3d/HeightField.hx",50,0x8176a958)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(heightMin,"heightMin")
	HX_STACK_ARG(heightMax,"heightMax")
{
		HX_STACK_LINE(50)
		::Class classObj = hx::ClassOf< ::org::gameplay3d::HeightField >();		HX_STACK_VAR(classObj,"classObj");
		HX_STACK_LINE(50)
		Dynamic nativeObject = ::org::gameplay3d::HeightField_obj::hx_HeightField_static_createFromRAW(path,width,height,heightMin,heightMax);		HX_STACK_VAR(nativeObject,"nativeObject");
		HX_STACK_LINE(50)
		if (((nativeObject == null()))){
			HX_STACK_LINE(50)
			return null();
		}
		else{
			HX_STACK_LINE(50)
			if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
				HX_STACK_LINE(50)
				::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
				HX_STACK_LINE(50)
				::org::gameplay3d::HeightField result = ref->get();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(50)
				if (((result == null()))){
					HX_STACK_LINE(50)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
					HX_STACK_LINE(50)
					::org::gameplay3d::HeightField _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(50)
					result = _g;
					HX_STACK_LINE(50)
					ref->set(result);
				}
				HX_STACK_LINE(50)
				return result;
			}
			else{
				HX_STACK_LINE(50)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
				HX_STACK_LINE(50)
				return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
			}
		}
		HX_STACK_LINE(50)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(HeightField_obj,createFromRAW,return )

Dynamic HeightField_obj::hx_HeightField_static_create;

Dynamic HeightField_obj::hx_HeightField_static_createFromImage;

Dynamic HeightField_obj::hx_HeightField_static_createFromRAW;

Dynamic HeightField_obj::hx_HeightField_getArray;

Dynamic HeightField_obj::hx_HeightField_getColumnCount;

Dynamic HeightField_obj::hx_HeightField_getHeight;

Dynamic HeightField_obj::hx_HeightField_getRowCount;


HeightField_obj::HeightField_obj()
{
}

void HeightField_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HeightField);
	HX_MARK_MEMBER_NAME(_array,"_array");
	::org::gameplay3d::intern::NativeBinding_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HeightField_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_array,"_array");
	::org::gameplay3d::intern::NativeBinding_obj::__Visit(HX_VISIT_ARG);
}

Dynamic HeightField_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"_array") ) { return _array; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getArray") ) { return getArray_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getHeight") ) { return getHeight_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"impersonate") ) { return impersonate_dyn(); }
		if (HX_FIELD_EQ(inName,"getRowCount") ) { return getRowCount_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createFromRAW") ) { return createFromRAW_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getColumnCount") ) { return getColumnCount_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createFromImage") ) { return createFromImage_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_HeightField_getArray") ) { return hx_HeightField_getArray; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_HeightField_getHeight") ) { return hx_HeightField_getHeight; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_HeightField_getRowCount") ) { return hx_HeightField_getRowCount; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_HeightField_static_create") ) { return hx_HeightField_static_create; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_HeightField_getColumnCount") ) { return hx_HeightField_getColumnCount; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"hx_HeightField_static_createFromRAW") ) { return hx_HeightField_static_createFromRAW; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"hx_HeightField_static_createFromImage") ) { return hx_HeightField_static_createFromImage; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic HeightField_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_array") ) { _array=inValue.Cast< ::org::gameplay3d::_HeightField::HeightFieldArray >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_HeightField_getArray") ) { hx_HeightField_getArray=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_HeightField_getHeight") ) { hx_HeightField_getHeight=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_HeightField_getRowCount") ) { hx_HeightField_getRowCount=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_HeightField_static_create") ) { hx_HeightField_static_create=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_HeightField_getColumnCount") ) { hx_HeightField_getColumnCount=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"hx_HeightField_static_createFromRAW") ) { hx_HeightField_static_createFromRAW=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"hx_HeightField_static_createFromImage") ) { hx_HeightField_static_createFromImage=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HeightField_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_array"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create"),
	HX_CSTRING("createFromImage"),
	HX_CSTRING("createFromRAW"),
	HX_CSTRING("hx_HeightField_static_create"),
	HX_CSTRING("hx_HeightField_static_createFromImage"),
	HX_CSTRING("hx_HeightField_static_createFromRAW"),
	HX_CSTRING("hx_HeightField_getArray"),
	HX_CSTRING("hx_HeightField_getColumnCount"),
	HX_CSTRING("hx_HeightField_getHeight"),
	HX_CSTRING("hx_HeightField_getRowCount"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::org::gameplay3d::_HeightField::HeightFieldArray*/ ,(int)offsetof(HeightField_obj,_array),HX_CSTRING("_array")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_array"),
	HX_CSTRING("impersonate"),
	HX_CSTRING("getArray"),
	HX_CSTRING("getColumnCount"),
	HX_CSTRING("getHeight"),
	HX_CSTRING("getRowCount"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HeightField_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(HeightField_obj::hx_HeightField_static_create,"hx_HeightField_static_create");
	HX_MARK_MEMBER_NAME(HeightField_obj::hx_HeightField_static_createFromImage,"hx_HeightField_static_createFromImage");
	HX_MARK_MEMBER_NAME(HeightField_obj::hx_HeightField_static_createFromRAW,"hx_HeightField_static_createFromRAW");
	HX_MARK_MEMBER_NAME(HeightField_obj::hx_HeightField_getArray,"hx_HeightField_getArray");
	HX_MARK_MEMBER_NAME(HeightField_obj::hx_HeightField_getColumnCount,"hx_HeightField_getColumnCount");
	HX_MARK_MEMBER_NAME(HeightField_obj::hx_HeightField_getHeight,"hx_HeightField_getHeight");
	HX_MARK_MEMBER_NAME(HeightField_obj::hx_HeightField_getRowCount,"hx_HeightField_getRowCount");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HeightField_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(HeightField_obj::hx_HeightField_static_create,"hx_HeightField_static_create");
	HX_VISIT_MEMBER_NAME(HeightField_obj::hx_HeightField_static_createFromImage,"hx_HeightField_static_createFromImage");
	HX_VISIT_MEMBER_NAME(HeightField_obj::hx_HeightField_static_createFromRAW,"hx_HeightField_static_createFromRAW");
	HX_VISIT_MEMBER_NAME(HeightField_obj::hx_HeightField_getArray,"hx_HeightField_getArray");
	HX_VISIT_MEMBER_NAME(HeightField_obj::hx_HeightField_getColumnCount,"hx_HeightField_getColumnCount");
	HX_VISIT_MEMBER_NAME(HeightField_obj::hx_HeightField_getHeight,"hx_HeightField_getHeight");
	HX_VISIT_MEMBER_NAME(HeightField_obj::hx_HeightField_getRowCount,"hx_HeightField_getRowCount");
};

#endif

Class HeightField_obj::__mClass;

void HeightField_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.HeightField"), hx::TCanCast< HeightField_obj> ,sStaticFields,sMemberFields,
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

void HeightField_obj::__boot()
{
	hx_HeightField_static_create= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::HeightField >(),HX_CSTRING("static_create"),(int)2);
	hx_HeightField_static_createFromImage= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::HeightField >(),HX_CSTRING("static_createFromImage"),(int)3);
	hx_HeightField_static_createFromRAW= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::HeightField >(),HX_CSTRING("static_createFromRAW"),(int)5);
	hx_HeightField_getArray= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::HeightField >(),HX_CSTRING("getArray"),(int)1);
	hx_HeightField_getColumnCount= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::HeightField >(),HX_CSTRING("getColumnCount"),(int)1);
	hx_HeightField_getHeight= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::HeightField >(),HX_CSTRING("getHeight"),(int)3);
	hx_HeightField_getRowCount= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::HeightField >(),HX_CSTRING("getRowCount"),(int)1);
}

} // end namespace org
} // end namespace gameplay3d
