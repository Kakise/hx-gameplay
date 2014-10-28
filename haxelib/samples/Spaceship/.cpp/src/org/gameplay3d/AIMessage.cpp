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
#ifndef INCLUDED_org_gameplay3d_AIMessage
#include <org/gameplay3d/AIMessage.h>
#endif
#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
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

Void AIMessage_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.AIMessage","new",0xf3cfd884,"org.gameplay3d.AIMessage.new","org/gameplay3d/AIMessage.hx",8,0xf561010c)
HX_STACK_THIS(this)
HX_STACK_ARG(nativeObjectInitializer,"nativeObjectInitializer")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(8)
	super::__construct(nativeObjectInitializer,nativeObjectInitializerParams);
}
;
	return null();
}

//AIMessage_obj::~AIMessage_obj() { }

Dynamic AIMessage_obj::__CreateEmpty() { return  new AIMessage_obj; }
hx::ObjectPtr< AIMessage_obj > AIMessage_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< AIMessage_obj > result = new AIMessage_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic AIMessage_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AIMessage_obj > result = new AIMessage_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

bool AIMessage_obj::getBoolean( int index){
	HX_STACK_FRAME("org.gameplay3d.AIMessage","getBoolean",0x200d750e,"org.gameplay3d.AIMessage.getBoolean","org/gameplay3d/AIMessage.hx",29,0xf561010c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(29)
	return ::org::gameplay3d::AIMessage_obj::hx_AIMessage_getBoolean(this->nativeObject,index);
}


HX_DEFINE_DYNAMIC_FUNC1(AIMessage_obj,getBoolean,return )

Float AIMessage_obj::getDouble( int index){
	HX_STACK_FRAME("org.gameplay3d.AIMessage","getDouble",0xec586f6b,"org.gameplay3d.AIMessage.getDouble","org/gameplay3d/AIMessage.hx",35,0xf561010c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(35)
	return ::org::gameplay3d::AIMessage_obj::hx_AIMessage_getDouble(this->nativeObject,index);
}


HX_DEFINE_DYNAMIC_FUNC1(AIMessage_obj,getDouble,return )

Float AIMessage_obj::getFloat( int index){
	HX_STACK_FRAME("org.gameplay3d.AIMessage","getFloat",0x8d2dca82,"org.gameplay3d.AIMessage.getFloat","org/gameplay3d/AIMessage.hx",41,0xf561010c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(41)
	return ::org::gameplay3d::AIMessage_obj::hx_AIMessage_getFloat(this->nativeObject,index);
}


HX_DEFINE_DYNAMIC_FUNC1(AIMessage_obj,getFloat,return )

int AIMessage_obj::getId( ){
	HX_STACK_FRAME("org.gameplay3d.AIMessage","getId",0x6209eb35,"org.gameplay3d.AIMessage.getId","org/gameplay3d/AIMessage.hx",47,0xf561010c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(47)
	return ::org::gameplay3d::AIMessage_obj::hx_AIMessage_getId(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(AIMessage_obj,getId,return )

int AIMessage_obj::getInt( int index){
	HX_STACK_FRAME("org.gameplay3d.AIMessage","getInt",0x66a3ec55,"org.gameplay3d.AIMessage.getInt","org/gameplay3d/AIMessage.hx",53,0xf561010c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(53)
	return ::org::gameplay3d::AIMessage_obj::hx_AIMessage_getInt(this->nativeObject,index);
}


HX_DEFINE_DYNAMIC_FUNC1(AIMessage_obj,getInt,return )

int AIMessage_obj::getLong( int index){
	HX_STACK_FRAME("org.gameplay3d.AIMessage","getLong",0x6ac73f56,"org.gameplay3d.AIMessage.getLong","org/gameplay3d/AIMessage.hx",59,0xf561010c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(59)
	return ::org::gameplay3d::AIMessage_obj::hx_AIMessage_getLong(this->nativeObject,index);
}


HX_DEFINE_DYNAMIC_FUNC1(AIMessage_obj,getLong,return )

int AIMessage_obj::getParameterCount( ){
	HX_STACK_FRAME("org.gameplay3d.AIMessage","getParameterCount",0x6aa088c0,"org.gameplay3d.AIMessage.getParameterCount","org/gameplay3d/AIMessage.hx",65,0xf561010c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(65)
	return ::org::gameplay3d::AIMessage_obj::hx_AIMessage_getParameterCount(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(AIMessage_obj,getParameterCount,return )

int AIMessage_obj::getParameterType( int index){
	HX_STACK_FRAME("org.gameplay3d.AIMessage","getParameterType",0xe82837e9,"org.gameplay3d.AIMessage.getParameterType","org/gameplay3d/AIMessage.hx",71,0xf561010c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(71)
	return ::org::gameplay3d::AIMessage_obj::hx_AIMessage_getParameterType(this->nativeObject,index);
}


HX_DEFINE_DYNAMIC_FUNC1(AIMessage_obj,getParameterType,return )

::String AIMessage_obj::getReceiver( ){
	HX_STACK_FRAME("org.gameplay3d.AIMessage","getReceiver",0x0da7d409,"org.gameplay3d.AIMessage.getReceiver","org/gameplay3d/AIMessage.hx",77,0xf561010c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(77)
	return ::org::gameplay3d::AIMessage_obj::hx_AIMessage_getReceiver(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(AIMessage_obj,getReceiver,return )

::String AIMessage_obj::getSender( ){
	HX_STACK_FRAME("org.gameplay3d.AIMessage","getSender",0x25120c0f,"org.gameplay3d.AIMessage.getSender","org/gameplay3d/AIMessage.hx",83,0xf561010c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(83)
	return ::org::gameplay3d::AIMessage_obj::hx_AIMessage_getSender(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(AIMessage_obj,getSender,return )

::String AIMessage_obj::getString( int index){
	HX_STACK_FRAME("org.gameplay3d.AIMessage","getString",0xcabd6d2b,"org.gameplay3d.AIMessage.getString","org/gameplay3d/AIMessage.hx",89,0xf561010c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(89)
	return ::org::gameplay3d::AIMessage_obj::hx_AIMessage_getString(this->nativeObject,index);
}


HX_DEFINE_DYNAMIC_FUNC1(AIMessage_obj,getString,return )

Void AIMessage_obj::setBoolean( int index,bool value){
{
		HX_STACK_FRAME("org.gameplay3d.AIMessage","setBoolean",0x238b1382,"org.gameplay3d.AIMessage.setBoolean","org/gameplay3d/AIMessage.hx",95,0xf561010c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(95)
		::org::gameplay3d::AIMessage_obj::hx_AIMessage_setBoolean(this->nativeObject,index,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AIMessage_obj,setBoolean,(void))

Void AIMessage_obj::setDouble( int index,Float value){
{
		HX_STACK_FRAME("org.gameplay3d.AIMessage","setDouble",0xcfa95b77,"org.gameplay3d.AIMessage.setDouble","org/gameplay3d/AIMessage.hx",101,0xf561010c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(101)
		::org::gameplay3d::AIMessage_obj::hx_AIMessage_setDouble(this->nativeObject,index,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AIMessage_obj,setDouble,(void))

Void AIMessage_obj::setFloat( int index,Float value){
{
		HX_STACK_FRAME("org.gameplay3d.AIMessage","setFloat",0x3b8b23f6,"org.gameplay3d.AIMessage.setFloat","org/gameplay3d/AIMessage.hx",107,0xf561010c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(107)
		::org::gameplay3d::AIMessage_obj::hx_AIMessage_setFloat(this->nativeObject,index,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AIMessage_obj,setFloat,(void))

Void AIMessage_obj::setInt( int index,int value){
{
		HX_STACK_FRAME("org.gameplay3d.AIMessage","setInt",0x32ec40c9,"org.gameplay3d.AIMessage.setInt","org/gameplay3d/AIMessage.hx",113,0xf561010c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(113)
		::org::gameplay3d::AIMessage_obj::hx_AIMessage_setInt(this->nativeObject,index,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AIMessage_obj,setInt,(void))

Void AIMessage_obj::setLong( int index,int value){
{
		HX_STACK_FRAME("org.gameplay3d.AIMessage","setLong",0x5dc8d062,"org.gameplay3d.AIMessage.setLong","org/gameplay3d/AIMessage.hx",119,0xf561010c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(119)
		::org::gameplay3d::AIMessage_obj::hx_AIMessage_setLong(this->nativeObject,index,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AIMessage_obj,setLong,(void))

Void AIMessage_obj::setString( int index,::String value){
{
		HX_STACK_FRAME("org.gameplay3d.AIMessage","setString",0xae0e5937,"org.gameplay3d.AIMessage.setString","org/gameplay3d/AIMessage.hx",125,0xf561010c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(125)
		::org::gameplay3d::AIMessage_obj::hx_AIMessage_setString(this->nativeObject,index,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AIMessage_obj,setString,(void))

::org::gameplay3d::AIMessage AIMessage_obj::create( int id,::String sender,::String receiver,int parameterCount){
	HX_STACK_FRAME("org.gameplay3d.AIMessage","create",0x3f940d58,"org.gameplay3d.AIMessage.create","org/gameplay3d/AIMessage.hx",17,0xf561010c)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(sender,"sender")
	HX_STACK_ARG(receiver,"receiver")
	HX_STACK_ARG(parameterCount,"parameterCount")
	HX_STACK_LINE(17)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::AIMessage >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(17)
	Dynamic nativeObject = ::org::gameplay3d::AIMessage_obj::hx_AIMessage_static_create(id,sender,receiver,parameterCount);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(17)
	if (((nativeObject == null()))){
		HX_STACK_LINE(17)
		return null();
	}
	else{
		HX_STACK_LINE(17)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(17)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(17)
			::org::gameplay3d::AIMessage result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(17)
			if (((result == null()))){
				HX_STACK_LINE(17)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(17)
				::org::gameplay3d::AIMessage _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(17)
				result = _g;
				HX_STACK_LINE(17)
				ref->set(result);
			}
			HX_STACK_LINE(17)
			return result;
		}
		else{
			HX_STACK_LINE(17)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(17)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(17)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(AIMessage_obj,create,return )

Void AIMessage_obj::destroy( ::org::gameplay3d::AIMessage message){
{
		HX_STACK_FRAME("org.gameplay3d.AIMessage","destroy",0x7513171e,"org.gameplay3d.AIMessage.destroy","org/gameplay3d/AIMessage.hx",23,0xf561010c)
		HX_STACK_ARG(message,"message")
		HX_STACK_LINE(23)
		::org::gameplay3d::AIMessage_obj::hx_AIMessage_static_destroy((  (((message == null()))) ? Dynamic(null()) : Dynamic(message->nativeObject) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AIMessage_obj,destroy,(void))

Dynamic AIMessage_obj::hx_AIMessage_static_create;

Dynamic AIMessage_obj::hx_AIMessage_static_destroy;

Dynamic AIMessage_obj::hx_AIMessage_getBoolean;

Dynamic AIMessage_obj::hx_AIMessage_getDouble;

Dynamic AIMessage_obj::hx_AIMessage_getFloat;

Dynamic AIMessage_obj::hx_AIMessage_getId;

Dynamic AIMessage_obj::hx_AIMessage_getInt;

Dynamic AIMessage_obj::hx_AIMessage_getLong;

Dynamic AIMessage_obj::hx_AIMessage_getParameterCount;

Dynamic AIMessage_obj::hx_AIMessage_getParameterType;

Dynamic AIMessage_obj::hx_AIMessage_getReceiver;

Dynamic AIMessage_obj::hx_AIMessage_getSender;

Dynamic AIMessage_obj::hx_AIMessage_getString;

Dynamic AIMessage_obj::hx_AIMessage_setBoolean;

Dynamic AIMessage_obj::hx_AIMessage_setDouble;

Dynamic AIMessage_obj::hx_AIMessage_setFloat;

Dynamic AIMessage_obj::hx_AIMessage_setInt;

Dynamic AIMessage_obj::hx_AIMessage_setLong;

Dynamic AIMessage_obj::hx_AIMessage_setString;


AIMessage_obj::AIMessage_obj()
{
}

Dynamic AIMessage_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"getId") ) { return getId_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"getInt") ) { return getInt_dyn(); }
		if (HX_FIELD_EQ(inName,"setInt") ) { return setInt_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"getLong") ) { return getLong_dyn(); }
		if (HX_FIELD_EQ(inName,"setLong") ) { return setLong_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getFloat") ) { return getFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"setFloat") ) { return setFloat_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getDouble") ) { return getDouble_dyn(); }
		if (HX_FIELD_EQ(inName,"getSender") ) { return getSender_dyn(); }
		if (HX_FIELD_EQ(inName,"getString") ) { return getString_dyn(); }
		if (HX_FIELD_EQ(inName,"setDouble") ) { return setDouble_dyn(); }
		if (HX_FIELD_EQ(inName,"setString") ) { return setString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getBoolean") ) { return getBoolean_dyn(); }
		if (HX_FIELD_EQ(inName,"setBoolean") ) { return setBoolean_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getReceiver") ) { return getReceiver_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getParameterType") ) { return getParameterType_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getParameterCount") ) { return getParameterCount_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hx_AIMessage_getId") ) { return hx_AIMessage_getId; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hx_AIMessage_getInt") ) { return hx_AIMessage_getInt; }
		if (HX_FIELD_EQ(inName,"hx_AIMessage_setInt") ) { return hx_AIMessage_setInt; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_AIMessage_getLong") ) { return hx_AIMessage_getLong; }
		if (HX_FIELD_EQ(inName,"hx_AIMessage_setLong") ) { return hx_AIMessage_setLong; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hx_AIMessage_getFloat") ) { return hx_AIMessage_getFloat; }
		if (HX_FIELD_EQ(inName,"hx_AIMessage_setFloat") ) { return hx_AIMessage_setFloat; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_AIMessage_getDouble") ) { return hx_AIMessage_getDouble; }
		if (HX_FIELD_EQ(inName,"hx_AIMessage_getSender") ) { return hx_AIMessage_getSender; }
		if (HX_FIELD_EQ(inName,"hx_AIMessage_getString") ) { return hx_AIMessage_getString; }
		if (HX_FIELD_EQ(inName,"hx_AIMessage_setDouble") ) { return hx_AIMessage_setDouble; }
		if (HX_FIELD_EQ(inName,"hx_AIMessage_setString") ) { return hx_AIMessage_setString; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_AIMessage_getBoolean") ) { return hx_AIMessage_getBoolean; }
		if (HX_FIELD_EQ(inName,"hx_AIMessage_setBoolean") ) { return hx_AIMessage_setBoolean; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_AIMessage_getReceiver") ) { return hx_AIMessage_getReceiver; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_AIMessage_static_create") ) { return hx_AIMessage_static_create; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"hx_AIMessage_static_destroy") ) { return hx_AIMessage_static_destroy; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_AIMessage_getParameterType") ) { return hx_AIMessage_getParameterType; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"hx_AIMessage_getParameterCount") ) { return hx_AIMessage_getParameterCount; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AIMessage_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"hx_AIMessage_getId") ) { hx_AIMessage_getId=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hx_AIMessage_getInt") ) { hx_AIMessage_getInt=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_AIMessage_setInt") ) { hx_AIMessage_setInt=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_AIMessage_getLong") ) { hx_AIMessage_getLong=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_AIMessage_setLong") ) { hx_AIMessage_setLong=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hx_AIMessage_getFloat") ) { hx_AIMessage_getFloat=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_AIMessage_setFloat") ) { hx_AIMessage_setFloat=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_AIMessage_getDouble") ) { hx_AIMessage_getDouble=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_AIMessage_getSender") ) { hx_AIMessage_getSender=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_AIMessage_getString") ) { hx_AIMessage_getString=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_AIMessage_setDouble") ) { hx_AIMessage_setDouble=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_AIMessage_setString") ) { hx_AIMessage_setString=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_AIMessage_getBoolean") ) { hx_AIMessage_getBoolean=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_AIMessage_setBoolean") ) { hx_AIMessage_setBoolean=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_AIMessage_getReceiver") ) { hx_AIMessage_getReceiver=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_AIMessage_static_create") ) { hx_AIMessage_static_create=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"hx_AIMessage_static_destroy") ) { hx_AIMessage_static_destroy=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_AIMessage_getParameterType") ) { hx_AIMessage_getParameterType=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"hx_AIMessage_getParameterCount") ) { hx_AIMessage_getParameterCount=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AIMessage_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create"),
	HX_CSTRING("destroy"),
	HX_CSTRING("hx_AIMessage_static_create"),
	HX_CSTRING("hx_AIMessage_static_destroy"),
	HX_CSTRING("hx_AIMessage_getBoolean"),
	HX_CSTRING("hx_AIMessage_getDouble"),
	HX_CSTRING("hx_AIMessage_getFloat"),
	HX_CSTRING("hx_AIMessage_getId"),
	HX_CSTRING("hx_AIMessage_getInt"),
	HX_CSTRING("hx_AIMessage_getLong"),
	HX_CSTRING("hx_AIMessage_getParameterCount"),
	HX_CSTRING("hx_AIMessage_getParameterType"),
	HX_CSTRING("hx_AIMessage_getReceiver"),
	HX_CSTRING("hx_AIMessage_getSender"),
	HX_CSTRING("hx_AIMessage_getString"),
	HX_CSTRING("hx_AIMessage_setBoolean"),
	HX_CSTRING("hx_AIMessage_setDouble"),
	HX_CSTRING("hx_AIMessage_setFloat"),
	HX_CSTRING("hx_AIMessage_setInt"),
	HX_CSTRING("hx_AIMessage_setLong"),
	HX_CSTRING("hx_AIMessage_setString"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("getBoolean"),
	HX_CSTRING("getDouble"),
	HX_CSTRING("getFloat"),
	HX_CSTRING("getId"),
	HX_CSTRING("getInt"),
	HX_CSTRING("getLong"),
	HX_CSTRING("getParameterCount"),
	HX_CSTRING("getParameterType"),
	HX_CSTRING("getReceiver"),
	HX_CSTRING("getSender"),
	HX_CSTRING("getString"),
	HX_CSTRING("setBoolean"),
	HX_CSTRING("setDouble"),
	HX_CSTRING("setFloat"),
	HX_CSTRING("setInt"),
	HX_CSTRING("setLong"),
	HX_CSTRING("setString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AIMessage_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AIMessage_obj::hx_AIMessage_static_create,"hx_AIMessage_static_create");
	HX_MARK_MEMBER_NAME(AIMessage_obj::hx_AIMessage_static_destroy,"hx_AIMessage_static_destroy");
	HX_MARK_MEMBER_NAME(AIMessage_obj::hx_AIMessage_getBoolean,"hx_AIMessage_getBoolean");
	HX_MARK_MEMBER_NAME(AIMessage_obj::hx_AIMessage_getDouble,"hx_AIMessage_getDouble");
	HX_MARK_MEMBER_NAME(AIMessage_obj::hx_AIMessage_getFloat,"hx_AIMessage_getFloat");
	HX_MARK_MEMBER_NAME(AIMessage_obj::hx_AIMessage_getId,"hx_AIMessage_getId");
	HX_MARK_MEMBER_NAME(AIMessage_obj::hx_AIMessage_getInt,"hx_AIMessage_getInt");
	HX_MARK_MEMBER_NAME(AIMessage_obj::hx_AIMessage_getLong,"hx_AIMessage_getLong");
	HX_MARK_MEMBER_NAME(AIMessage_obj::hx_AIMessage_getParameterCount,"hx_AIMessage_getParameterCount");
	HX_MARK_MEMBER_NAME(AIMessage_obj::hx_AIMessage_getParameterType,"hx_AIMessage_getParameterType");
	HX_MARK_MEMBER_NAME(AIMessage_obj::hx_AIMessage_getReceiver,"hx_AIMessage_getReceiver");
	HX_MARK_MEMBER_NAME(AIMessage_obj::hx_AIMessage_getSender,"hx_AIMessage_getSender");
	HX_MARK_MEMBER_NAME(AIMessage_obj::hx_AIMessage_getString,"hx_AIMessage_getString");
	HX_MARK_MEMBER_NAME(AIMessage_obj::hx_AIMessage_setBoolean,"hx_AIMessage_setBoolean");
	HX_MARK_MEMBER_NAME(AIMessage_obj::hx_AIMessage_setDouble,"hx_AIMessage_setDouble");
	HX_MARK_MEMBER_NAME(AIMessage_obj::hx_AIMessage_setFloat,"hx_AIMessage_setFloat");
	HX_MARK_MEMBER_NAME(AIMessage_obj::hx_AIMessage_setInt,"hx_AIMessage_setInt");
	HX_MARK_MEMBER_NAME(AIMessage_obj::hx_AIMessage_setLong,"hx_AIMessage_setLong");
	HX_MARK_MEMBER_NAME(AIMessage_obj::hx_AIMessage_setString,"hx_AIMessage_setString");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AIMessage_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AIMessage_obj::hx_AIMessage_static_create,"hx_AIMessage_static_create");
	HX_VISIT_MEMBER_NAME(AIMessage_obj::hx_AIMessage_static_destroy,"hx_AIMessage_static_destroy");
	HX_VISIT_MEMBER_NAME(AIMessage_obj::hx_AIMessage_getBoolean,"hx_AIMessage_getBoolean");
	HX_VISIT_MEMBER_NAME(AIMessage_obj::hx_AIMessage_getDouble,"hx_AIMessage_getDouble");
	HX_VISIT_MEMBER_NAME(AIMessage_obj::hx_AIMessage_getFloat,"hx_AIMessage_getFloat");
	HX_VISIT_MEMBER_NAME(AIMessage_obj::hx_AIMessage_getId,"hx_AIMessage_getId");
	HX_VISIT_MEMBER_NAME(AIMessage_obj::hx_AIMessage_getInt,"hx_AIMessage_getInt");
	HX_VISIT_MEMBER_NAME(AIMessage_obj::hx_AIMessage_getLong,"hx_AIMessage_getLong");
	HX_VISIT_MEMBER_NAME(AIMessage_obj::hx_AIMessage_getParameterCount,"hx_AIMessage_getParameterCount");
	HX_VISIT_MEMBER_NAME(AIMessage_obj::hx_AIMessage_getParameterType,"hx_AIMessage_getParameterType");
	HX_VISIT_MEMBER_NAME(AIMessage_obj::hx_AIMessage_getReceiver,"hx_AIMessage_getReceiver");
	HX_VISIT_MEMBER_NAME(AIMessage_obj::hx_AIMessage_getSender,"hx_AIMessage_getSender");
	HX_VISIT_MEMBER_NAME(AIMessage_obj::hx_AIMessage_getString,"hx_AIMessage_getString");
	HX_VISIT_MEMBER_NAME(AIMessage_obj::hx_AIMessage_setBoolean,"hx_AIMessage_setBoolean");
	HX_VISIT_MEMBER_NAME(AIMessage_obj::hx_AIMessage_setDouble,"hx_AIMessage_setDouble");
	HX_VISIT_MEMBER_NAME(AIMessage_obj::hx_AIMessage_setFloat,"hx_AIMessage_setFloat");
	HX_VISIT_MEMBER_NAME(AIMessage_obj::hx_AIMessage_setInt,"hx_AIMessage_setInt");
	HX_VISIT_MEMBER_NAME(AIMessage_obj::hx_AIMessage_setLong,"hx_AIMessage_setLong");
	HX_VISIT_MEMBER_NAME(AIMessage_obj::hx_AIMessage_setString,"hx_AIMessage_setString");
};

#endif

Class AIMessage_obj::__mClass;

void AIMessage_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.AIMessage"), hx::TCanCast< AIMessage_obj> ,sStaticFields,sMemberFields,
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

void AIMessage_obj::__boot()
{
	hx_AIMessage_static_create= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AIMessage >(),HX_CSTRING("static_create"),(int)4);
	hx_AIMessage_static_destroy= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AIMessage >(),HX_CSTRING("static_destroy"),(int)1);
	hx_AIMessage_getBoolean= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AIMessage >(),HX_CSTRING("getBoolean"),(int)2);
	hx_AIMessage_getDouble= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AIMessage >(),HX_CSTRING("getDouble"),(int)2);
	hx_AIMessage_getFloat= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AIMessage >(),HX_CSTRING("getFloat"),(int)2);
	hx_AIMessage_getId= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AIMessage >(),HX_CSTRING("getId"),(int)1);
	hx_AIMessage_getInt= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AIMessage >(),HX_CSTRING("getInt"),(int)2);
	hx_AIMessage_getLong= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AIMessage >(),HX_CSTRING("getLong"),(int)2);
	hx_AIMessage_getParameterCount= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AIMessage >(),HX_CSTRING("getParameterCount"),(int)1);
	hx_AIMessage_getParameterType= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AIMessage >(),HX_CSTRING("getParameterType"),(int)2);
	hx_AIMessage_getReceiver= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AIMessage >(),HX_CSTRING("getReceiver"),(int)1);
	hx_AIMessage_getSender= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AIMessage >(),HX_CSTRING("getSender"),(int)1);
	hx_AIMessage_getString= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AIMessage >(),HX_CSTRING("getString"),(int)2);
	hx_AIMessage_setBoolean= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AIMessage >(),HX_CSTRING("setBoolean"),(int)3);
	hx_AIMessage_setDouble= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AIMessage >(),HX_CSTRING("setDouble"),(int)3);
	hx_AIMessage_setFloat= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AIMessage >(),HX_CSTRING("setFloat"),(int)3);
	hx_AIMessage_setInt= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AIMessage >(),HX_CSTRING("setInt"),(int)3);
	hx_AIMessage_setLong= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AIMessage >(),HX_CSTRING("setLong"),(int)3);
	hx_AIMessage_setString= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::AIMessage >(),HX_CSTRING("setString"),(int)3);
}

} // end namespace org
} // end namespace gameplay3d
