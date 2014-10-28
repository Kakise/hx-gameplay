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
#ifndef INCLUDED_org_gameplay3d_intern_INativeBinding
#include <org/gameplay3d/intern/INativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_NativeBinding
#include <org/gameplay3d/intern/NativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_INativeArray
#include <org/gameplay3d/util/INativeArray.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_NativeInterface
#include <org/gameplay3d/util/NativeInterface.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_ObjectArray
#include <org/gameplay3d/util/ObjectArray.h>
#endif
namespace org{
namespace gameplay3d{
namespace util{

Void ObjectArray_obj::__construct(::Class classObj,Dynamic nativeObject,int length)
{
HX_STACK_FRAME("org.gameplay3d.util.ObjectArray","new",0x6f6cadcd,"org.gameplay3d.util.ObjectArray.new","org/gameplay3d/util/ObjectArray.hx",27,0x6fe40064)
HX_STACK_THIS(this)
HX_STACK_ARG(classObj,"classObj")
HX_STACK_ARG(nativeObject,"nativeObject")
HX_STACK_ARG(length,"length")
{
	HX_STACK_LINE(28)
	this->nativeObject = nativeObject;
	HX_STACK_LINE(29)
	this->length = length;
	HX_STACK_LINE(34)
	::String name = ::Type_obj::getClassName(classObj);		HX_STACK_VAR(name,"name");
	HX_STACK_LINE(35)
	int packageEnd = name.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(packageEnd,"packageEnd");
	HX_STACK_LINE(36)
	if (((packageEnd != (int)-1))){
		HX_STACK_LINE(37)
		::String _g = name.substr((packageEnd + (int)1),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(37)
		name = _g;
	}
	HX_STACK_LINE(39)
	Dynamic getter = ::org::gameplay3d::util::NativeInterface_obj::load((HX_CSTRING("getNativeArrayElement") + name),(int)2);		HX_STACK_VAR(getter,"getter");
	HX_STACK_LINE(41)
	this->objects = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(42)
	{
		HX_STACK_LINE(42)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(42)
		while((true)){
			HX_STACK_LINE(42)
			if ((!(((_g < length))))){
				HX_STACK_LINE(42)
				break;
			}
			HX_STACK_LINE(42)
			int index = (_g)++;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(43)
			Dynamic _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(43)
			{
				HX_STACK_LINE(43)
				Dynamic nativeObject1 = getter(index);		HX_STACK_VAR(nativeObject1,"nativeObject1");
				HX_STACK_LINE(43)
				if (((nativeObject1 == null()))){
					HX_STACK_LINE(43)
					_g2 = null();
				}
				else{
					HX_STACK_LINE(43)
					if ((::Std_obj::is(nativeObject1,hx::ClassOf< ::cpp::vm::WeakRef >()))){
						HX_STACK_LINE(43)
						::cpp::vm::WeakRef ref = nativeObject1;		HX_STACK_VAR(ref,"ref");
						HX_STACK_LINE(43)
						Dynamic result = ref->get();		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(43)
						if (((result == null()))){
							HX_STACK_LINE(43)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
							HX_STACK_LINE(43)
							Dynamic _g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(43)
							result = _g1;
							HX_STACK_LINE(43)
							ref->set(result);
						}
						HX_STACK_LINE(43)
						_g2 = result;
					}
					else{
						HX_STACK_LINE(43)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject1;
						HX_STACK_LINE(43)
						_g2 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
					}
				}
			}
			HX_STACK_LINE(43)
			this->objects->__Field(HX_CSTRING("push"),true)(_g2);
		}
	}
}
;
	return null();
}

//ObjectArray_obj::~ObjectArray_obj() { }

Dynamic ObjectArray_obj::__CreateEmpty() { return  new ObjectArray_obj; }
hx::ObjectPtr< ObjectArray_obj > ObjectArray_obj::__new(::Class classObj,Dynamic nativeObject,int length)
{  hx::ObjectPtr< ObjectArray_obj > result = new ObjectArray_obj();
	result->__construct(classObj,nativeObject,length);
	return result;}

Dynamic ObjectArray_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ObjectArray_obj > result = new ObjectArray_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

hx::Object *ObjectArray_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::intern::INativeBinding_obj)) return operator ::org::gameplay3d::intern::INativeBinding_obj *();
	if (inType==typeid( ::org::gameplay3d::util::INativeArray_obj)) return operator ::org::gameplay3d::util::INativeArray_obj *();
	return super::__ToInterface(inType);
}

Dynamic ObjectArray_obj::getAt( int index){
	HX_STACK_FRAME("org.gameplay3d.util.ObjectArray","getAt",0x9e7d5dd6,"org.gameplay3d.util.ObjectArray.getAt","org/gameplay3d/util/ObjectArray.hx",48,0x6fe40064)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(48)
	return this->objects->__GetItem(index);
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectArray_obj,getAt,return )


ObjectArray_obj::ObjectArray_obj()
{
}

void ObjectArray_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ObjectArray);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(objects,"objects");
	::org::gameplay3d::intern::NativeBinding_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ObjectArray_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(objects,"objects");
	::org::gameplay3d::intern::NativeBinding_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ObjectArray_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"getAt") ) { return getAt_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"objects") ) { return objects; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ObjectArray_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"objects") ) { objects=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ObjectArray_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("objects"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ObjectArray_obj,length),HX_CSTRING("length")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ObjectArray_obj,objects),HX_CSTRING("objects")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("length"),
	HX_CSTRING("objects"),
	HX_CSTRING("getAt"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ObjectArray_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ObjectArray_obj::__mClass,"__mClass");
};

#endif

Class ObjectArray_obj::__mClass;

void ObjectArray_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.util.ObjectArray"), hx::TCanCast< ObjectArray_obj> ,sStaticFields,sMemberFields,
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

void ObjectArray_obj::__boot()
{
}

} // end namespace org
} // end namespace gameplay3d
} // end namespace util
