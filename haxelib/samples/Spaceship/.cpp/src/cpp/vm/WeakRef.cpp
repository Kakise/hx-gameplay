#include <hxcpp.h>

#ifndef INCLUDED_cpp_vm_WeakRef
#include <cpp/vm/WeakRef.h>
#endif
namespace cpp{
namespace vm{

Void WeakRef_obj::__construct(Dynamic inObject,hx::Null< bool >  __o_inHard)
{
HX_STACK_FRAME("cpp.vm.WeakRef","new",0x9ce60541,"cpp.vm.WeakRef.new","C:\\HaxeToolkit\\haxe\\std/cpp/vm/WeakRef.hx",32,0x92259bf6)
HX_STACK_THIS(this)
HX_STACK_ARG(inObject,"inObject")
HX_STACK_ARG(__o_inHard,"inHard")
bool inHard = __o_inHard.Default(false);
{
	HX_STACK_LINE(33)
	this->hardRef = inHard;
	HX_STACK_LINE(34)
	if ((this->hardRef)){
		HX_STACK_LINE(35)
		this->ref = inObject;
	}
	else{
		HX_STACK_LINE(37)
		Dynamic _g = ::__hxcpp_weak_ref_create(inObject);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(37)
		this->ref = _g;
	}
}
;
	return null();
}

//WeakRef_obj::~WeakRef_obj() { }

Dynamic WeakRef_obj::__CreateEmpty() { return  new WeakRef_obj; }
hx::ObjectPtr< WeakRef_obj > WeakRef_obj::__new(Dynamic inObject,hx::Null< bool >  __o_inHard)
{  hx::ObjectPtr< WeakRef_obj > result = new WeakRef_obj();
	result->__construct(inObject,__o_inHard);
	return result;}

Dynamic WeakRef_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WeakRef_obj > result = new WeakRef_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Dynamic WeakRef_obj::get( ){
	HX_STACK_FRAME("cpp.vm.WeakRef","get",0x9ce0b577,"cpp.vm.WeakRef.get","C:\\HaxeToolkit\\haxe\\std/cpp/vm/WeakRef.hx",42,0x92259bf6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(43)
	if ((this->hardRef)){
		HX_STACK_LINE(44)
		return this->ref;
	}
	HX_STACK_LINE(46)
	return ::__hxcpp_weak_ref_get(this->ref);
}


HX_DEFINE_DYNAMIC_FUNC0(WeakRef_obj,get,return )

Dynamic WeakRef_obj::set( Dynamic inObject){
	HX_STACK_FRAME("cpp.vm.WeakRef","set",0x9ce9d083,"cpp.vm.WeakRef.set","C:\\HaxeToolkit\\haxe\\std/cpp/vm/WeakRef.hx",50,0x92259bf6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inObject,"inObject")
	HX_STACK_LINE(51)
	if ((this->hardRef)){
		HX_STACK_LINE(52)
		this->ref = inObject;
	}
	else{
		HX_STACK_LINE(54)
		Dynamic _g = ::__hxcpp_weak_ref_create(inObject);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(54)
		this->ref = _g;
	}
	HX_STACK_LINE(55)
	return inObject;
}


HX_DEFINE_DYNAMIC_FUNC1(WeakRef_obj,set,return )


WeakRef_obj::WeakRef_obj()
{
}

void WeakRef_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WeakRef);
	HX_MARK_MEMBER_NAME(ref,"ref");
	HX_MARK_MEMBER_NAME(hardRef,"hardRef");
	HX_MARK_END_CLASS();
}

void WeakRef_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ref,"ref");
	HX_VISIT_MEMBER_NAME(hardRef,"hardRef");
}

Dynamic WeakRef_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ref") ) { return ref; }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hardRef") ) { return hardRef; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic WeakRef_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ref") ) { ref=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hardRef") ) { hardRef=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WeakRef_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("ref"));
	outFields->push(HX_CSTRING("hardRef"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(WeakRef_obj,ref),HX_CSTRING("ref")},
	{hx::fsBool,(int)offsetof(WeakRef_obj,hardRef),HX_CSTRING("hardRef")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("ref"),
	HX_CSTRING("hardRef"),
	HX_CSTRING("get"),
	HX_CSTRING("set"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WeakRef_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WeakRef_obj::__mClass,"__mClass");
};

#endif

Class WeakRef_obj::__mClass;

void WeakRef_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("cpp.vm.WeakRef"), hx::TCanCast< WeakRef_obj> ,sStaticFields,sMemberFields,
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

void WeakRef_obj::__boot()
{
}

} // end namespace cpp
} // end namespace vm
