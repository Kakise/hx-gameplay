#include <hxcpp.h>

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
namespace util{

Void PrimitiveArray_obj::__construct(Dynamic nativeObject,Dynamic getter,Dynamic setter,int length)
{
HX_STACK_FRAME("org.gameplay3d.util.PrimitiveArray","new",0x540f3283,"org.gameplay3d.util.PrimitiveArray.new","org/gameplay3d/util/PrimitiveArray.hx",41,0x3f2462cc)
HX_STACK_THIS(this)
HX_STACK_ARG(nativeObject,"nativeObject")
HX_STACK_ARG(getter,"getter")
HX_STACK_ARG(setter,"setter")
HX_STACK_ARG(length,"length")
{
	HX_STACK_LINE(42)
	this->impersonate(nativeObject);
	HX_STACK_LINE(43)
	this->getter = getter;
	HX_STACK_LINE(44)
	this->setter = setter;
	HX_STACK_LINE(45)
	this->length = length;
}
;
	return null();
}

//PrimitiveArray_obj::~PrimitiveArray_obj() { }

Dynamic PrimitiveArray_obj::__CreateEmpty() { return  new PrimitiveArray_obj; }
hx::ObjectPtr< PrimitiveArray_obj > PrimitiveArray_obj::__new(Dynamic nativeObject,Dynamic getter,Dynamic setter,int length)
{  hx::ObjectPtr< PrimitiveArray_obj > result = new PrimitiveArray_obj();
	result->__construct(nativeObject,getter,setter,length);
	return result;}

Dynamic PrimitiveArray_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PrimitiveArray_obj > result = new PrimitiveArray_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

hx::Object *PrimitiveArray_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::intern::INativeBinding_obj)) return operator ::org::gameplay3d::intern::INativeBinding_obj *();
	if (inType==typeid( ::org::gameplay3d::util::INativeArray_obj)) return operator ::org::gameplay3d::util::INativeArray_obj *();
	if (inType==typeid( ::org::gameplay3d::util::IMutableNativeArray_obj)) return operator ::org::gameplay3d::util::IMutableNativeArray_obj *();
	return super::__ToInterface(inType);
}

Dynamic PrimitiveArray_obj::getAt( int index){
	HX_STACK_FRAME("org.gameplay3d.util.PrimitiveArray","getAt",0xd452fc0c,"org.gameplay3d.util.PrimitiveArray.getAt","org/gameplay3d/util/PrimitiveArray.hx",50,0x3f2462cc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(50)
	return this->getter(this->nativeObject,index);
}


HX_DEFINE_DYNAMIC_FUNC1(PrimitiveArray_obj,getAt,return )

Void PrimitiveArray_obj::setAt( int index,Dynamic value){
{
		HX_STACK_FRAME("org.gameplay3d.util.PrimitiveArray","setAt",0xbd21f218,"org.gameplay3d.util.PrimitiveArray.setAt","org/gameplay3d/util/PrimitiveArray.hx",55,0x3f2462cc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(55)
		this->setter(this->nativeObject,index,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PrimitiveArray_obj,setAt,(void))

::org::gameplay3d::util::IMutableNativeArray PrimitiveArray_obj::constructIntArray( hx::Null< int >  __o_length,hx::Null< bool >  __o_reclaim){
int length = __o_length.Default(1);
bool reclaim = __o_reclaim.Default(true);
	HX_STACK_FRAME("org.gameplay3d.util.PrimitiveArray","constructIntArray",0x72bdcac4,"org.gameplay3d.util.PrimitiveArray.constructIntArray","org/gameplay3d/util/PrimitiveArray.hx",63,0x3f2462cc)
	HX_STACK_ARG(length,"length")
	HX_STACK_ARG(reclaim,"reclaim")
{
		HX_STACK_LINE(66)
		Dynamic _g = ::org::gameplay3d::util::PrimitiveArray_obj::allocNativeArrayInt(length,reclaim);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(65)
		return ::org::gameplay3d::util::PrimitiveArray_obj::__new(_g,::org::gameplay3d::util::PrimitiveArray_obj::getNativeArrayElementInt_dyn(),::org::gameplay3d::util::PrimitiveArray_obj::setNativeArrayElementInt_dyn(),length);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PrimitiveArray_obj,constructIntArray,return )

::org::gameplay3d::util::IMutableNativeArray PrimitiveArray_obj::constructUintArray( hx::Null< int >  __o_length,hx::Null< bool >  __o_reclaim){
int length = __o_length.Default(1);
bool reclaim = __o_reclaim.Default(true);
	HX_STACK_FRAME("org.gameplay3d.util.PrimitiveArray","constructUintArray",0xecc555c5,"org.gameplay3d.util.PrimitiveArray.constructUintArray","org/gameplay3d/util/PrimitiveArray.hx",75,0x3f2462cc)
	HX_STACK_ARG(length,"length")
	HX_STACK_ARG(reclaim,"reclaim")
{
		HX_STACK_LINE(78)
		Dynamic _g = ::org::gameplay3d::util::PrimitiveArray_obj::allocNativeArrayUint(length,reclaim);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(77)
		return ::org::gameplay3d::util::PrimitiveArray_obj::__new(_g,::org::gameplay3d::util::PrimitiveArray_obj::getNativeArrayElementUint_dyn(),::org::gameplay3d::util::PrimitiveArray_obj::setNativeArrayElementUint_dyn(),length);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PrimitiveArray_obj,constructUintArray,return )

::org::gameplay3d::util::IMutableNativeArray PrimitiveArray_obj::constructShortArray( hx::Null< int >  __o_length,hx::Null< bool >  __o_reclaim){
int length = __o_length.Default(1);
bool reclaim = __o_reclaim.Default(true);
	HX_STACK_FRAME("org.gameplay3d.util.PrimitiveArray","constructShortArray",0x0004ae97,"org.gameplay3d.util.PrimitiveArray.constructShortArray","org/gameplay3d/util/PrimitiveArray.hx",87,0x3f2462cc)
	HX_STACK_ARG(length,"length")
	HX_STACK_ARG(reclaim,"reclaim")
{
		HX_STACK_LINE(90)
		Dynamic _g = ::org::gameplay3d::util::PrimitiveArray_obj::allocNativeArrayShort(length,reclaim);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(89)
		return ::org::gameplay3d::util::PrimitiveArray_obj::__new(_g,::org::gameplay3d::util::PrimitiveArray_obj::getNativeArrayElementShort_dyn(),::org::gameplay3d::util::PrimitiveArray_obj::setNativeArrayElementShort_dyn(),length);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PrimitiveArray_obj,constructShortArray,return )

::org::gameplay3d::util::IMutableNativeArray PrimitiveArray_obj::constructUshortArray( hx::Null< int >  __o_length,hx::Null< bool >  __o_reclaim){
int length = __o_length.Default(1);
bool reclaim = __o_reclaim.Default(true);
	HX_STACK_FRAME("org.gameplay3d.util.PrimitiveArray","constructUshortArray",0xb345bbd8,"org.gameplay3d.util.PrimitiveArray.constructUshortArray","org/gameplay3d/util/PrimitiveArray.hx",99,0x3f2462cc)
	HX_STACK_ARG(length,"length")
	HX_STACK_ARG(reclaim,"reclaim")
{
		HX_STACK_LINE(102)
		Dynamic _g = ::org::gameplay3d::util::PrimitiveArray_obj::allocNativeArrayUshort(length,reclaim);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(101)
		return ::org::gameplay3d::util::PrimitiveArray_obj::__new(_g,::org::gameplay3d::util::PrimitiveArray_obj::getNativeArrayElementUshort_dyn(),::org::gameplay3d::util::PrimitiveArray_obj::setNativeArrayElementUshort_dyn(),length);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PrimitiveArray_obj,constructUshortArray,return )

::org::gameplay3d::util::IMutableNativeArray PrimitiveArray_obj::constructCharArray( hx::Null< int >  __o_length,hx::Null< bool >  __o_reclaim){
int length = __o_length.Default(1);
bool reclaim = __o_reclaim.Default(true);
	HX_STACK_FRAME("org.gameplay3d.util.PrimitiveArray","constructCharArray",0xf54bc109,"org.gameplay3d.util.PrimitiveArray.constructCharArray","org/gameplay3d/util/PrimitiveArray.hx",111,0x3f2462cc)
	HX_STACK_ARG(length,"length")
	HX_STACK_ARG(reclaim,"reclaim")
{
		HX_STACK_LINE(114)
		Dynamic _g = ::org::gameplay3d::util::PrimitiveArray_obj::allocNativeArrayChar(length,reclaim);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(113)
		return ::org::gameplay3d::util::PrimitiveArray_obj::__new(_g,::org::gameplay3d::util::PrimitiveArray_obj::getNativeArrayElementChar_dyn(),::org::gameplay3d::util::PrimitiveArray_obj::setNativeArrayElementChar_dyn(),length);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PrimitiveArray_obj,constructCharArray,return )

::org::gameplay3d::util::IMutableNativeArray PrimitiveArray_obj::constructByteArray( hx::Null< int >  __o_length,hx::Null< bool >  __o_reclaim){
int length = __o_length.Default(1);
bool reclaim = __o_reclaim.Default(true);
	HX_STACK_FRAME("org.gameplay3d.util.PrimitiveArray","constructByteArray",0xd2280b97,"org.gameplay3d.util.PrimitiveArray.constructByteArray","org/gameplay3d/util/PrimitiveArray.hx",123,0x3f2462cc)
	HX_STACK_ARG(length,"length")
	HX_STACK_ARG(reclaim,"reclaim")
{
		HX_STACK_LINE(126)
		Dynamic _g = ::org::gameplay3d::util::PrimitiveArray_obj::allocNativeArrayByte(length,reclaim);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(125)
		return ::org::gameplay3d::util::PrimitiveArray_obj::__new(_g,::org::gameplay3d::util::PrimitiveArray_obj::getNativeArrayElementByte_dyn(),::org::gameplay3d::util::PrimitiveArray_obj::setNativeArrayElementByte_dyn(),length);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PrimitiveArray_obj,constructByteArray,return )

::org::gameplay3d::util::IMutableNativeArray PrimitiveArray_obj::constructFloatArray( hx::Null< int >  __o_length,hx::Null< bool >  __o_reclaim){
int length = __o_length.Default(1);
bool reclaim = __o_reclaim.Default(true);
	HX_STACK_FRAME("org.gameplay3d.util.PrimitiveArray","constructFloatArray",0xc5155977,"org.gameplay3d.util.PrimitiveArray.constructFloatArray","org/gameplay3d/util/PrimitiveArray.hx",135,0x3f2462cc)
	HX_STACK_ARG(length,"length")
	HX_STACK_ARG(reclaim,"reclaim")
{
		HX_STACK_LINE(138)
		Dynamic _g = ::org::gameplay3d::util::PrimitiveArray_obj::allocNativeArrayFloat(length,reclaim);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(137)
		return ::org::gameplay3d::util::PrimitiveArray_obj::__new(_g,::org::gameplay3d::util::PrimitiveArray_obj::getNativeArrayElementFloat_dyn(),::org::gameplay3d::util::PrimitiveArray_obj::setNativeArrayElementFloat_dyn(),length);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PrimitiveArray_obj,constructFloatArray,return )

::org::gameplay3d::util::IMutableNativeArray PrimitiveArray_obj::constructDoubleArray( hx::Null< int >  __o_length,hx::Null< bool >  __o_reclaim){
int length = __o_length.Default(1);
bool reclaim = __o_reclaim.Default(true);
	HX_STACK_FRAME("org.gameplay3d.util.PrimitiveArray","constructDoubleArray",0xf92e146e,"org.gameplay3d.util.PrimitiveArray.constructDoubleArray","org/gameplay3d/util/PrimitiveArray.hx",147,0x3f2462cc)
	HX_STACK_ARG(length,"length")
	HX_STACK_ARG(reclaim,"reclaim")
{
		HX_STACK_LINE(150)
		Dynamic _g = ::org::gameplay3d::util::PrimitiveArray_obj::allocNativeArrayDouble(length,reclaim);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(149)
		return ::org::gameplay3d::util::PrimitiveArray_obj::__new(_g,::org::gameplay3d::util::PrimitiveArray_obj::getNativeArrayElementDouble_dyn(),::org::gameplay3d::util::PrimitiveArray_obj::setNativeArrayElementDouble_dyn(),length);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PrimitiveArray_obj,constructDoubleArray,return )

Dynamic PrimitiveArray_obj::allocNativeArrayInt;

Dynamic PrimitiveArray_obj::allocNativeArrayUint;

Dynamic PrimitiveArray_obj::allocNativeArrayShort;

Dynamic PrimitiveArray_obj::allocNativeArrayUshort;

Dynamic PrimitiveArray_obj::allocNativeArrayChar;

Dynamic PrimitiveArray_obj::allocNativeArrayByte;

Dynamic PrimitiveArray_obj::allocNativeArrayFloat;

Dynamic PrimitiveArray_obj::allocNativeArrayDouble;

Dynamic PrimitiveArray_obj::getNativeArrayElementInt;

Dynamic PrimitiveArray_obj::getNativeArrayElementUint;

Dynamic PrimitiveArray_obj::getNativeArrayElementShort;

Dynamic PrimitiveArray_obj::getNativeArrayElementUshort;

Dynamic PrimitiveArray_obj::getNativeArrayElementChar;

Dynamic PrimitiveArray_obj::getNativeArrayElementByte;

Dynamic PrimitiveArray_obj::getNativeArrayElementFloat;

Dynamic PrimitiveArray_obj::getNativeArrayElementDouble;

Dynamic PrimitiveArray_obj::setNativeArrayElementInt;

Dynamic PrimitiveArray_obj::setNativeArrayElementUint;

Dynamic PrimitiveArray_obj::setNativeArrayElementShort;

Dynamic PrimitiveArray_obj::setNativeArrayElementUshort;

Dynamic PrimitiveArray_obj::setNativeArrayElementChar;

Dynamic PrimitiveArray_obj::setNativeArrayElementByte;

Dynamic PrimitiveArray_obj::setNativeArrayElementFloat;

Dynamic PrimitiveArray_obj::setNativeArrayElementDouble;


PrimitiveArray_obj::PrimitiveArray_obj()
{
}

void PrimitiveArray_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PrimitiveArray);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(getter,"getter");
	HX_MARK_MEMBER_NAME(setter,"setter");
	::org::gameplay3d::intern::NativeBinding_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PrimitiveArray_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(getter,"getter");
	HX_VISIT_MEMBER_NAME(setter,"setter");
	::org::gameplay3d::intern::NativeBinding_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PrimitiveArray_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"getAt") ) { return getAt_dyn(); }
		if (HX_FIELD_EQ(inName,"setAt") ) { return setAt_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		if (HX_FIELD_EQ(inName,"getter") ) { return getter; }
		if (HX_FIELD_EQ(inName,"setter") ) { return setter; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"constructIntArray") ) { return constructIntArray_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"constructUintArray") ) { return constructUintArray_dyn(); }
		if (HX_FIELD_EQ(inName,"constructCharArray") ) { return constructCharArray_dyn(); }
		if (HX_FIELD_EQ(inName,"constructByteArray") ) { return constructByteArray_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"constructShortArray") ) { return constructShortArray_dyn(); }
		if (HX_FIELD_EQ(inName,"constructFloatArray") ) { return constructFloatArray_dyn(); }
		if (HX_FIELD_EQ(inName,"allocNativeArrayInt") ) { return allocNativeArrayInt; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"constructUshortArray") ) { return constructUshortArray_dyn(); }
		if (HX_FIELD_EQ(inName,"constructDoubleArray") ) { return constructDoubleArray_dyn(); }
		if (HX_FIELD_EQ(inName,"allocNativeArrayUint") ) { return allocNativeArrayUint; }
		if (HX_FIELD_EQ(inName,"allocNativeArrayChar") ) { return allocNativeArrayChar; }
		if (HX_FIELD_EQ(inName,"allocNativeArrayByte") ) { return allocNativeArrayByte; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"allocNativeArrayShort") ) { return allocNativeArrayShort; }
		if (HX_FIELD_EQ(inName,"allocNativeArrayFloat") ) { return allocNativeArrayFloat; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"allocNativeArrayUshort") ) { return allocNativeArrayUshort; }
		if (HX_FIELD_EQ(inName,"allocNativeArrayDouble") ) { return allocNativeArrayDouble; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"getNativeArrayElementInt") ) { return getNativeArrayElementInt; }
		if (HX_FIELD_EQ(inName,"setNativeArrayElementInt") ) { return setNativeArrayElementInt; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"getNativeArrayElementUint") ) { return getNativeArrayElementUint; }
		if (HX_FIELD_EQ(inName,"getNativeArrayElementChar") ) { return getNativeArrayElementChar; }
		if (HX_FIELD_EQ(inName,"getNativeArrayElementByte") ) { return getNativeArrayElementByte; }
		if (HX_FIELD_EQ(inName,"setNativeArrayElementUint") ) { return setNativeArrayElementUint; }
		if (HX_FIELD_EQ(inName,"setNativeArrayElementChar") ) { return setNativeArrayElementChar; }
		if (HX_FIELD_EQ(inName,"setNativeArrayElementByte") ) { return setNativeArrayElementByte; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"getNativeArrayElementShort") ) { return getNativeArrayElementShort; }
		if (HX_FIELD_EQ(inName,"getNativeArrayElementFloat") ) { return getNativeArrayElementFloat; }
		if (HX_FIELD_EQ(inName,"setNativeArrayElementShort") ) { return setNativeArrayElementShort; }
		if (HX_FIELD_EQ(inName,"setNativeArrayElementFloat") ) { return setNativeArrayElementFloat; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"getNativeArrayElementUshort") ) { return getNativeArrayElementUshort; }
		if (HX_FIELD_EQ(inName,"getNativeArrayElementDouble") ) { return getNativeArrayElementDouble; }
		if (HX_FIELD_EQ(inName,"setNativeArrayElementUshort") ) { return setNativeArrayElementUshort; }
		if (HX_FIELD_EQ(inName,"setNativeArrayElementDouble") ) { return setNativeArrayElementDouble; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PrimitiveArray_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"getter") ) { getter=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"setter") ) { setter=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"allocNativeArrayInt") ) { allocNativeArrayInt=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"allocNativeArrayUint") ) { allocNativeArrayUint=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allocNativeArrayChar") ) { allocNativeArrayChar=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allocNativeArrayByte") ) { allocNativeArrayByte=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"allocNativeArrayShort") ) { allocNativeArrayShort=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allocNativeArrayFloat") ) { allocNativeArrayFloat=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"allocNativeArrayUshort") ) { allocNativeArrayUshort=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allocNativeArrayDouble") ) { allocNativeArrayDouble=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"getNativeArrayElementInt") ) { getNativeArrayElementInt=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"setNativeArrayElementInt") ) { setNativeArrayElementInt=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"getNativeArrayElementUint") ) { getNativeArrayElementUint=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"getNativeArrayElementChar") ) { getNativeArrayElementChar=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"getNativeArrayElementByte") ) { getNativeArrayElementByte=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"setNativeArrayElementUint") ) { setNativeArrayElementUint=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"setNativeArrayElementChar") ) { setNativeArrayElementChar=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"setNativeArrayElementByte") ) { setNativeArrayElementByte=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"getNativeArrayElementShort") ) { getNativeArrayElementShort=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"getNativeArrayElementFloat") ) { getNativeArrayElementFloat=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"setNativeArrayElementShort") ) { setNativeArrayElementShort=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"setNativeArrayElementFloat") ) { setNativeArrayElementFloat=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"getNativeArrayElementUshort") ) { getNativeArrayElementUshort=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"getNativeArrayElementDouble") ) { getNativeArrayElementDouble=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"setNativeArrayElementUshort") ) { setNativeArrayElementUshort=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"setNativeArrayElementDouble") ) { setNativeArrayElementDouble=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PrimitiveArray_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("length"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("constructIntArray"),
	HX_CSTRING("constructUintArray"),
	HX_CSTRING("constructShortArray"),
	HX_CSTRING("constructUshortArray"),
	HX_CSTRING("constructCharArray"),
	HX_CSTRING("constructByteArray"),
	HX_CSTRING("constructFloatArray"),
	HX_CSTRING("constructDoubleArray"),
	HX_CSTRING("allocNativeArrayInt"),
	HX_CSTRING("allocNativeArrayUint"),
	HX_CSTRING("allocNativeArrayShort"),
	HX_CSTRING("allocNativeArrayUshort"),
	HX_CSTRING("allocNativeArrayChar"),
	HX_CSTRING("allocNativeArrayByte"),
	HX_CSTRING("allocNativeArrayFloat"),
	HX_CSTRING("allocNativeArrayDouble"),
	HX_CSTRING("getNativeArrayElementInt"),
	HX_CSTRING("getNativeArrayElementUint"),
	HX_CSTRING("getNativeArrayElementShort"),
	HX_CSTRING("getNativeArrayElementUshort"),
	HX_CSTRING("getNativeArrayElementChar"),
	HX_CSTRING("getNativeArrayElementByte"),
	HX_CSTRING("getNativeArrayElementFloat"),
	HX_CSTRING("getNativeArrayElementDouble"),
	HX_CSTRING("setNativeArrayElementInt"),
	HX_CSTRING("setNativeArrayElementUint"),
	HX_CSTRING("setNativeArrayElementShort"),
	HX_CSTRING("setNativeArrayElementUshort"),
	HX_CSTRING("setNativeArrayElementChar"),
	HX_CSTRING("setNativeArrayElementByte"),
	HX_CSTRING("setNativeArrayElementFloat"),
	HX_CSTRING("setNativeArrayElementDouble"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(PrimitiveArray_obj,length),HX_CSTRING("length")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(PrimitiveArray_obj,getter),HX_CSTRING("getter")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(PrimitiveArray_obj,setter),HX_CSTRING("setter")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("length"),
	HX_CSTRING("getter"),
	HX_CSTRING("setter"),
	HX_CSTRING("getAt"),
	HX_CSTRING("setAt"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PrimitiveArray_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PrimitiveArray_obj::allocNativeArrayInt,"allocNativeArrayInt");
	HX_MARK_MEMBER_NAME(PrimitiveArray_obj::allocNativeArrayUint,"allocNativeArrayUint");
	HX_MARK_MEMBER_NAME(PrimitiveArray_obj::allocNativeArrayShort,"allocNativeArrayShort");
	HX_MARK_MEMBER_NAME(PrimitiveArray_obj::allocNativeArrayUshort,"allocNativeArrayUshort");
	HX_MARK_MEMBER_NAME(PrimitiveArray_obj::allocNativeArrayChar,"allocNativeArrayChar");
	HX_MARK_MEMBER_NAME(PrimitiveArray_obj::allocNativeArrayByte,"allocNativeArrayByte");
	HX_MARK_MEMBER_NAME(PrimitiveArray_obj::allocNativeArrayFloat,"allocNativeArrayFloat");
	HX_MARK_MEMBER_NAME(PrimitiveArray_obj::allocNativeArrayDouble,"allocNativeArrayDouble");
	HX_MARK_MEMBER_NAME(PrimitiveArray_obj::getNativeArrayElementInt,"getNativeArrayElementInt");
	HX_MARK_MEMBER_NAME(PrimitiveArray_obj::getNativeArrayElementUint,"getNativeArrayElementUint");
	HX_MARK_MEMBER_NAME(PrimitiveArray_obj::getNativeArrayElementShort,"getNativeArrayElementShort");
	HX_MARK_MEMBER_NAME(PrimitiveArray_obj::getNativeArrayElementUshort,"getNativeArrayElementUshort");
	HX_MARK_MEMBER_NAME(PrimitiveArray_obj::getNativeArrayElementChar,"getNativeArrayElementChar");
	HX_MARK_MEMBER_NAME(PrimitiveArray_obj::getNativeArrayElementByte,"getNativeArrayElementByte");
	HX_MARK_MEMBER_NAME(PrimitiveArray_obj::getNativeArrayElementFloat,"getNativeArrayElementFloat");
	HX_MARK_MEMBER_NAME(PrimitiveArray_obj::getNativeArrayElementDouble,"getNativeArrayElementDouble");
	HX_MARK_MEMBER_NAME(PrimitiveArray_obj::setNativeArrayElementInt,"setNativeArrayElementInt");
	HX_MARK_MEMBER_NAME(PrimitiveArray_obj::setNativeArrayElementUint,"setNativeArrayElementUint");
	HX_MARK_MEMBER_NAME(PrimitiveArray_obj::setNativeArrayElementShort,"setNativeArrayElementShort");
	HX_MARK_MEMBER_NAME(PrimitiveArray_obj::setNativeArrayElementUshort,"setNativeArrayElementUshort");
	HX_MARK_MEMBER_NAME(PrimitiveArray_obj::setNativeArrayElementChar,"setNativeArrayElementChar");
	HX_MARK_MEMBER_NAME(PrimitiveArray_obj::setNativeArrayElementByte,"setNativeArrayElementByte");
	HX_MARK_MEMBER_NAME(PrimitiveArray_obj::setNativeArrayElementFloat,"setNativeArrayElementFloat");
	HX_MARK_MEMBER_NAME(PrimitiveArray_obj::setNativeArrayElementDouble,"setNativeArrayElementDouble");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PrimitiveArray_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PrimitiveArray_obj::allocNativeArrayInt,"allocNativeArrayInt");
	HX_VISIT_MEMBER_NAME(PrimitiveArray_obj::allocNativeArrayUint,"allocNativeArrayUint");
	HX_VISIT_MEMBER_NAME(PrimitiveArray_obj::allocNativeArrayShort,"allocNativeArrayShort");
	HX_VISIT_MEMBER_NAME(PrimitiveArray_obj::allocNativeArrayUshort,"allocNativeArrayUshort");
	HX_VISIT_MEMBER_NAME(PrimitiveArray_obj::allocNativeArrayChar,"allocNativeArrayChar");
	HX_VISIT_MEMBER_NAME(PrimitiveArray_obj::allocNativeArrayByte,"allocNativeArrayByte");
	HX_VISIT_MEMBER_NAME(PrimitiveArray_obj::allocNativeArrayFloat,"allocNativeArrayFloat");
	HX_VISIT_MEMBER_NAME(PrimitiveArray_obj::allocNativeArrayDouble,"allocNativeArrayDouble");
	HX_VISIT_MEMBER_NAME(PrimitiveArray_obj::getNativeArrayElementInt,"getNativeArrayElementInt");
	HX_VISIT_MEMBER_NAME(PrimitiveArray_obj::getNativeArrayElementUint,"getNativeArrayElementUint");
	HX_VISIT_MEMBER_NAME(PrimitiveArray_obj::getNativeArrayElementShort,"getNativeArrayElementShort");
	HX_VISIT_MEMBER_NAME(PrimitiveArray_obj::getNativeArrayElementUshort,"getNativeArrayElementUshort");
	HX_VISIT_MEMBER_NAME(PrimitiveArray_obj::getNativeArrayElementChar,"getNativeArrayElementChar");
	HX_VISIT_MEMBER_NAME(PrimitiveArray_obj::getNativeArrayElementByte,"getNativeArrayElementByte");
	HX_VISIT_MEMBER_NAME(PrimitiveArray_obj::getNativeArrayElementFloat,"getNativeArrayElementFloat");
	HX_VISIT_MEMBER_NAME(PrimitiveArray_obj::getNativeArrayElementDouble,"getNativeArrayElementDouble");
	HX_VISIT_MEMBER_NAME(PrimitiveArray_obj::setNativeArrayElementInt,"setNativeArrayElementInt");
	HX_VISIT_MEMBER_NAME(PrimitiveArray_obj::setNativeArrayElementUint,"setNativeArrayElementUint");
	HX_VISIT_MEMBER_NAME(PrimitiveArray_obj::setNativeArrayElementShort,"setNativeArrayElementShort");
	HX_VISIT_MEMBER_NAME(PrimitiveArray_obj::setNativeArrayElementUshort,"setNativeArrayElementUshort");
	HX_VISIT_MEMBER_NAME(PrimitiveArray_obj::setNativeArrayElementChar,"setNativeArrayElementChar");
	HX_VISIT_MEMBER_NAME(PrimitiveArray_obj::setNativeArrayElementByte,"setNativeArrayElementByte");
	HX_VISIT_MEMBER_NAME(PrimitiveArray_obj::setNativeArrayElementFloat,"setNativeArrayElementFloat");
	HX_VISIT_MEMBER_NAME(PrimitiveArray_obj::setNativeArrayElementDouble,"setNativeArrayElementDouble");
};

#endif

Class PrimitiveArray_obj::__mClass;

void PrimitiveArray_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.util.PrimitiveArray"), hx::TCanCast< PrimitiveArray_obj> ,sStaticFields,sMemberFields,
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

void PrimitiveArray_obj::__boot()
{
	allocNativeArrayInt= ::org::gameplay3d::util::NativeInterface_obj::load(HX_CSTRING("allocNativeArrayInt"),(int)2);
	allocNativeArrayUint= ::org::gameplay3d::util::NativeInterface_obj::load(HX_CSTRING("allocNativeArrayUint"),(int)2);
	allocNativeArrayShort= ::org::gameplay3d::util::NativeInterface_obj::load(HX_CSTRING("allocNativeArrayShort"),(int)2);
	allocNativeArrayUshort= ::org::gameplay3d::util::NativeInterface_obj::load(HX_CSTRING("allocNativeArrayUshort"),(int)2);
	allocNativeArrayChar= ::org::gameplay3d::util::NativeInterface_obj::load(HX_CSTRING("allocNativeArrayChar"),(int)2);
	allocNativeArrayByte= ::org::gameplay3d::util::NativeInterface_obj::load(HX_CSTRING("allocNativeArrayByte"),(int)2);
	allocNativeArrayFloat= ::org::gameplay3d::util::NativeInterface_obj::load(HX_CSTRING("allocNativeArrayFloat"),(int)2);
	allocNativeArrayDouble= ::org::gameplay3d::util::NativeInterface_obj::load(HX_CSTRING("allocNativeArrayDouble"),(int)2);
	getNativeArrayElementInt= ::org::gameplay3d::util::NativeInterface_obj::load(HX_CSTRING("getNativeArrayElementInt"),(int)2);
	getNativeArrayElementUint= ::org::gameplay3d::util::NativeInterface_obj::load(HX_CSTRING("getNativeArrayElementUint"),(int)2);
	getNativeArrayElementShort= ::org::gameplay3d::util::NativeInterface_obj::load(HX_CSTRING("getNativeArrayElementShort"),(int)2);
	getNativeArrayElementUshort= ::org::gameplay3d::util::NativeInterface_obj::load(HX_CSTRING("getNativeArrayElementUshort"),(int)2);
	getNativeArrayElementChar= ::org::gameplay3d::util::NativeInterface_obj::load(HX_CSTRING("getNativeArrayElementChar"),(int)2);
	getNativeArrayElementByte= ::org::gameplay3d::util::NativeInterface_obj::load(HX_CSTRING("getNativeArrayElementByte"),(int)2);
	getNativeArrayElementFloat= ::org::gameplay3d::util::NativeInterface_obj::load(HX_CSTRING("getNativeArrayElementFloat"),(int)2);
	getNativeArrayElementDouble= ::org::gameplay3d::util::NativeInterface_obj::load(HX_CSTRING("getNativeArrayElementDouble"),(int)2);
	setNativeArrayElementInt= ::org::gameplay3d::util::NativeInterface_obj::load(HX_CSTRING("setNativeArrayElementInt"),(int)3);
	setNativeArrayElementUint= ::org::gameplay3d::util::NativeInterface_obj::load(HX_CSTRING("setNativeArrayElementUint"),(int)3);
	setNativeArrayElementShort= ::org::gameplay3d::util::NativeInterface_obj::load(HX_CSTRING("setNativeArrayElementShort"),(int)3);
	setNativeArrayElementUshort= ::org::gameplay3d::util::NativeInterface_obj::load(HX_CSTRING("setNativeArrayElementUshort"),(int)3);
	setNativeArrayElementChar= ::org::gameplay3d::util::NativeInterface_obj::load(HX_CSTRING("setNativeArrayElementChar"),(int)3);
	setNativeArrayElementByte= ::org::gameplay3d::util::NativeInterface_obj::load(HX_CSTRING("setNativeArrayElementByte"),(int)3);
	setNativeArrayElementFloat= ::org::gameplay3d::util::NativeInterface_obj::load(HX_CSTRING("setNativeArrayElementFloat"),(int)3);
	setNativeArrayElementDouble= ::org::gameplay3d::util::NativeInterface_obj::load(HX_CSTRING("setNativeArrayElementDouble"),(int)3);
}

} // end namespace org
} // end namespace gameplay3d
} // end namespace util
