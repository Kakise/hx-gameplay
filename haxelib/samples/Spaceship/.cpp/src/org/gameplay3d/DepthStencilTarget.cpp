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
#ifndef INCLUDED_org_gameplay3d_DepthStencilTarget
#include <org/gameplay3d/DepthStencilTarget.h>
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
#ifndef INCLUDED_org_gameplay3d_util_NativeInterface
#include <org/gameplay3d/util/NativeInterface.h>
#endif
namespace org{
namespace gameplay3d{

Void DepthStencilTarget_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.DepthStencilTarget","new",0x3b5218c9,"org.gameplay3d.DepthStencilTarget.new","org/gameplay3d/DepthStencilTarget.hx",9,0x4ca4c127)
HX_STACK_THIS(this)
HX_STACK_ARG(nativeObjectInitializer,"nativeObjectInitializer")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(9)
	super::__construct(nativeObjectInitializer,nativeObjectInitializerParams);
}
;
	return null();
}

//DepthStencilTarget_obj::~DepthStencilTarget_obj() { }

Dynamic DepthStencilTarget_obj::__CreateEmpty() { return  new DepthStencilTarget_obj; }
hx::ObjectPtr< DepthStencilTarget_obj > DepthStencilTarget_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< DepthStencilTarget_obj > result = new DepthStencilTarget_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic DepthStencilTarget_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DepthStencilTarget_obj > result = new DepthStencilTarget_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *DepthStencilTarget_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::intern::INativeBinding_obj)) return operator ::org::gameplay3d::intern::INativeBinding_obj *();
	if (inType==typeid( ::org::gameplay3d::Ref_obj)) return operator ::org::gameplay3d::Ref_obj *();
	return super::__ToInterface(inType);
}

int DepthStencilTarget_obj::getFormat( ){
	HX_STACK_FRAME("org.gameplay3d.DepthStencilTarget","getFormat",0x1f171596,"org.gameplay3d.DepthStencilTarget.getFormat","org/gameplay3d/DepthStencilTarget.hx",30,0x4ca4c127)
	HX_STACK_THIS(this)
	HX_STACK_LINE(30)
	return ::org::gameplay3d::DepthStencilTarget_obj::hx_DepthStencilTarget_getFormat(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(DepthStencilTarget_obj,getFormat,return )

int DepthStencilTarget_obj::getHeight( ){
	HX_STACK_FRAME("org.gameplay3d.DepthStencilTarget","getHeight",0x23d48e46,"org.gameplay3d.DepthStencilTarget.getHeight","org/gameplay3d/DepthStencilTarget.hx",36,0x4ca4c127)
	HX_STACK_THIS(this)
	HX_STACK_LINE(36)
	return ::org::gameplay3d::DepthStencilTarget_obj::hx_DepthStencilTarget_getHeight(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(DepthStencilTarget_obj,getHeight,return )

::String DepthStencilTarget_obj::getId( ){
	HX_STACK_FRAME("org.gameplay3d.DepthStencilTarget","getId",0x3ed086ba,"org.gameplay3d.DepthStencilTarget.getId","org/gameplay3d/DepthStencilTarget.hx",42,0x4ca4c127)
	HX_STACK_THIS(this)
	HX_STACK_LINE(42)
	return ::org::gameplay3d::DepthStencilTarget_obj::hx_DepthStencilTarget_getId(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(DepthStencilTarget_obj,getId,return )

int DepthStencilTarget_obj::getWidth( ){
	HX_STACK_FRAME("org.gameplay3d.DepthStencilTarget","getWidth",0x03ef6087,"org.gameplay3d.DepthStencilTarget.getWidth","org/gameplay3d/DepthStencilTarget.hx",48,0x4ca4c127)
	HX_STACK_THIS(this)
	HX_STACK_LINE(48)
	return ::org::gameplay3d::DepthStencilTarget_obj::hx_DepthStencilTarget_getWidth(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(DepthStencilTarget_obj,getWidth,return )

::org::gameplay3d::DepthStencilTarget DepthStencilTarget_obj::create( ::String id,int format,int width,int height){
	HX_STACK_FRAME("org.gameplay3d.DepthStencilTarget","create",0x90958633,"org.gameplay3d.DepthStencilTarget.create","org/gameplay3d/DepthStencilTarget.hx",18,0x4ca4c127)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_LINE(18)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::DepthStencilTarget >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(18)
	Dynamic nativeObject = ::org::gameplay3d::DepthStencilTarget_obj::hx_DepthStencilTarget_static_create(id,format,width,height);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(18)
	if (((nativeObject == null()))){
		HX_STACK_LINE(18)
		return null();
	}
	else{
		HX_STACK_LINE(18)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(18)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(18)
			::org::gameplay3d::DepthStencilTarget result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(18)
			if (((result == null()))){
				HX_STACK_LINE(18)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(18)
				::org::gameplay3d::DepthStencilTarget _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(18)
				result = _g;
				HX_STACK_LINE(18)
				ref->set(result);
			}
			HX_STACK_LINE(18)
			return result;
		}
		else{
			HX_STACK_LINE(18)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(18)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(18)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(DepthStencilTarget_obj,create,return )

::org::gameplay3d::DepthStencilTarget DepthStencilTarget_obj::getDepthStencilTarget( ::String id){
	HX_STACK_FRAME("org.gameplay3d.DepthStencilTarget","getDepthStencilTarget",0xb7e59c49,"org.gameplay3d.DepthStencilTarget.getDepthStencilTarget","org/gameplay3d/DepthStencilTarget.hx",24,0x4ca4c127)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(24)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::DepthStencilTarget >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(24)
	Dynamic nativeObject = ::org::gameplay3d::DepthStencilTarget_obj::hx_DepthStencilTarget_static_getDepthStencilTarget(id);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(24)
	if (((nativeObject == null()))){
		HX_STACK_LINE(24)
		return null();
	}
	else{
		HX_STACK_LINE(24)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(24)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(24)
			::org::gameplay3d::DepthStencilTarget result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(24)
			if (((result == null()))){
				HX_STACK_LINE(24)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(24)
				::org::gameplay3d::DepthStencilTarget _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(24)
				result = _g;
				HX_STACK_LINE(24)
				ref->set(result);
			}
			HX_STACK_LINE(24)
			return result;
		}
		else{
			HX_STACK_LINE(24)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(24)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(24)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DepthStencilTarget_obj,getDepthStencilTarget,return )

Dynamic DepthStencilTarget_obj::hx_DepthStencilTarget_static_create;

Dynamic DepthStencilTarget_obj::hx_DepthStencilTarget_static_getDepthStencilTarget;

Dynamic DepthStencilTarget_obj::hx_DepthStencilTarget_getFormat;

Dynamic DepthStencilTarget_obj::hx_DepthStencilTarget_getHeight;

Dynamic DepthStencilTarget_obj::hx_DepthStencilTarget_getId;

Dynamic DepthStencilTarget_obj::hx_DepthStencilTarget_getWidth;


DepthStencilTarget_obj::DepthStencilTarget_obj()
{
}

Dynamic DepthStencilTarget_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"getId") ) { return getId_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getWidth") ) { return getWidth_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getFormat") ) { return getFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"getHeight") ) { return getHeight_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"getDepthStencilTarget") ) { return getDepthStencilTarget_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"hx_DepthStencilTarget_getId") ) { return hx_DepthStencilTarget_getId; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"hx_DepthStencilTarget_getWidth") ) { return hx_DepthStencilTarget_getWidth; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"hx_DepthStencilTarget_getFormat") ) { return hx_DepthStencilTarget_getFormat; }
		if (HX_FIELD_EQ(inName,"hx_DepthStencilTarget_getHeight") ) { return hx_DepthStencilTarget_getHeight; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"hx_DepthStencilTarget_static_create") ) { return hx_DepthStencilTarget_static_create; }
		break;
	case 50:
		if (HX_FIELD_EQ(inName,"hx_DepthStencilTarget_static_getDepthStencilTarget") ) { return hx_DepthStencilTarget_static_getDepthStencilTarget; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DepthStencilTarget_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 27:
		if (HX_FIELD_EQ(inName,"hx_DepthStencilTarget_getId") ) { hx_DepthStencilTarget_getId=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"hx_DepthStencilTarget_getWidth") ) { hx_DepthStencilTarget_getWidth=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"hx_DepthStencilTarget_getFormat") ) { hx_DepthStencilTarget_getFormat=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_DepthStencilTarget_getHeight") ) { hx_DepthStencilTarget_getHeight=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"hx_DepthStencilTarget_static_create") ) { hx_DepthStencilTarget_static_create=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 50:
		if (HX_FIELD_EQ(inName,"hx_DepthStencilTarget_static_getDepthStencilTarget") ) { hx_DepthStencilTarget_static_getDepthStencilTarget=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DepthStencilTarget_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create"),
	HX_CSTRING("getDepthStencilTarget"),
	HX_CSTRING("hx_DepthStencilTarget_static_create"),
	HX_CSTRING("hx_DepthStencilTarget_static_getDepthStencilTarget"),
	HX_CSTRING("hx_DepthStencilTarget_getFormat"),
	HX_CSTRING("hx_DepthStencilTarget_getHeight"),
	HX_CSTRING("hx_DepthStencilTarget_getId"),
	HX_CSTRING("hx_DepthStencilTarget_getWidth"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("getFormat"),
	HX_CSTRING("getHeight"),
	HX_CSTRING("getId"),
	HX_CSTRING("getWidth"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DepthStencilTarget_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(DepthStencilTarget_obj::hx_DepthStencilTarget_static_create,"hx_DepthStencilTarget_static_create");
	HX_MARK_MEMBER_NAME(DepthStencilTarget_obj::hx_DepthStencilTarget_static_getDepthStencilTarget,"hx_DepthStencilTarget_static_getDepthStencilTarget");
	HX_MARK_MEMBER_NAME(DepthStencilTarget_obj::hx_DepthStencilTarget_getFormat,"hx_DepthStencilTarget_getFormat");
	HX_MARK_MEMBER_NAME(DepthStencilTarget_obj::hx_DepthStencilTarget_getHeight,"hx_DepthStencilTarget_getHeight");
	HX_MARK_MEMBER_NAME(DepthStencilTarget_obj::hx_DepthStencilTarget_getId,"hx_DepthStencilTarget_getId");
	HX_MARK_MEMBER_NAME(DepthStencilTarget_obj::hx_DepthStencilTarget_getWidth,"hx_DepthStencilTarget_getWidth");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DepthStencilTarget_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DepthStencilTarget_obj::hx_DepthStencilTarget_static_create,"hx_DepthStencilTarget_static_create");
	HX_VISIT_MEMBER_NAME(DepthStencilTarget_obj::hx_DepthStencilTarget_static_getDepthStencilTarget,"hx_DepthStencilTarget_static_getDepthStencilTarget");
	HX_VISIT_MEMBER_NAME(DepthStencilTarget_obj::hx_DepthStencilTarget_getFormat,"hx_DepthStencilTarget_getFormat");
	HX_VISIT_MEMBER_NAME(DepthStencilTarget_obj::hx_DepthStencilTarget_getHeight,"hx_DepthStencilTarget_getHeight");
	HX_VISIT_MEMBER_NAME(DepthStencilTarget_obj::hx_DepthStencilTarget_getId,"hx_DepthStencilTarget_getId");
	HX_VISIT_MEMBER_NAME(DepthStencilTarget_obj::hx_DepthStencilTarget_getWidth,"hx_DepthStencilTarget_getWidth");
};

#endif

Class DepthStencilTarget_obj::__mClass;

void DepthStencilTarget_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.DepthStencilTarget"), hx::TCanCast< DepthStencilTarget_obj> ,sStaticFields,sMemberFields,
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

void DepthStencilTarget_obj::__boot()
{
	hx_DepthStencilTarget_static_create= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::DepthStencilTarget >(),HX_CSTRING("static_create"),(int)4);
	hx_DepthStencilTarget_static_getDepthStencilTarget= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::DepthStencilTarget >(),HX_CSTRING("static_getDepthStencilTarget"),(int)1);
	hx_DepthStencilTarget_getFormat= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::DepthStencilTarget >(),HX_CSTRING("getFormat"),(int)1);
	hx_DepthStencilTarget_getHeight= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::DepthStencilTarget >(),HX_CSTRING("getHeight"),(int)1);
	hx_DepthStencilTarget_getId= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::DepthStencilTarget >(),HX_CSTRING("getId"),(int)1);
	hx_DepthStencilTarget_getWidth= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::DepthStencilTarget >(),HX_CSTRING("getWidth"),(int)1);
}

} // end namespace org
} // end namespace gameplay3d
