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
#ifndef INCLUDED_org_gameplay3d_Ref
#include <org/gameplay3d/Ref.h>
#endif
#ifndef INCLUDED_org_gameplay3d_RenderTarget
#include <org/gameplay3d/RenderTarget.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Texture
#include <org/gameplay3d/Texture.h>
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

Void RenderTarget_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.RenderTarget","new",0xc226bf66,"org.gameplay3d.RenderTarget.new","org/gameplay3d/RenderTarget.hx",8,0xca73952a)
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

//RenderTarget_obj::~RenderTarget_obj() { }

Dynamic RenderTarget_obj::__CreateEmpty() { return  new RenderTarget_obj; }
hx::ObjectPtr< RenderTarget_obj > RenderTarget_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< RenderTarget_obj > result = new RenderTarget_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic RenderTarget_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RenderTarget_obj > result = new RenderTarget_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *RenderTarget_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::intern::INativeBinding_obj)) return operator ::org::gameplay3d::intern::INativeBinding_obj *();
	if (inType==typeid( ::org::gameplay3d::Ref_obj)) return operator ::org::gameplay3d::Ref_obj *();
	return super::__ToInterface(inType);
}

int RenderTarget_obj::getHeight( ){
	HX_STACK_FRAME("org.gameplay3d.RenderTarget","getHeight",0xed5388a3,"org.gameplay3d.RenderTarget.getHeight","org/gameplay3d/RenderTarget.hx",29,0xca73952a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(29)
	return ::org::gameplay3d::RenderTarget_obj::hx_RenderTarget_getHeight(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(RenderTarget_obj,getHeight,return )

::String RenderTarget_obj::getId( ){
	HX_STACK_FRAME("org.gameplay3d.RenderTarget","getId",0xa111ce97,"org.gameplay3d.RenderTarget.getId","org/gameplay3d/RenderTarget.hx",35,0xca73952a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(35)
	return ::org::gameplay3d::RenderTarget_obj::hx_RenderTarget_getId(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(RenderTarget_obj,getId,return )

::org::gameplay3d::Texture RenderTarget_obj::getTexture( ){
	HX_STACK_FRAME("org.gameplay3d.RenderTarget","getTexture",0x5a69ec9f,"org.gameplay3d.RenderTarget.getTexture","org/gameplay3d/RenderTarget.hx",47,0xca73952a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(47)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Texture >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(47)
	Dynamic nativeObject = ::org::gameplay3d::RenderTarget_obj::hx_RenderTarget_getTexture(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
			::org::gameplay3d::Texture result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(47)
			if (((result == null()))){
				HX_STACK_LINE(47)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(47)
				::org::gameplay3d::Texture _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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


HX_DEFINE_DYNAMIC_FUNC0(RenderTarget_obj,getTexture,return )

int RenderTarget_obj::getWidth( ){
	HX_STACK_FRAME("org.gameplay3d.RenderTarget","getWidth",0x4088a0ca,"org.gameplay3d.RenderTarget.getWidth","org/gameplay3d/RenderTarget.hx",53,0xca73952a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(53)
	return ::org::gameplay3d::RenderTarget_obj::hx_RenderTarget_getWidth(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(RenderTarget_obj,getWidth,return )

::org::gameplay3d::RenderTarget RenderTarget_obj::create_Str_Tex( ::String id,::org::gameplay3d::Texture texture){
	HX_STACK_FRAME("org.gameplay3d.RenderTarget","create_Str_Tex",0x7f17f710,"org.gameplay3d.RenderTarget.create_Str_Tex","org/gameplay3d/RenderTarget.hx",17,0xca73952a)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(texture,"texture")
	HX_STACK_LINE(17)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::RenderTarget >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(17)
	Dynamic nativeObject = ::org::gameplay3d::RenderTarget_obj::hx_RenderTarget_static_create_Str_Tex(id,(  (((texture == null()))) ? Dynamic(null()) : Dynamic(texture->nativeObject) ));		HX_STACK_VAR(nativeObject,"nativeObject");
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
			::org::gameplay3d::RenderTarget result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(17)
			if (((result == null()))){
				HX_STACK_LINE(17)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(17)
				::org::gameplay3d::RenderTarget _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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


STATIC_HX_DEFINE_DYNAMIC_FUNC2(RenderTarget_obj,create_Str_Tex,return )

::org::gameplay3d::RenderTarget RenderTarget_obj::create_Str_IntX2( ::String id,int width,int height){
	HX_STACK_FRAME("org.gameplay3d.RenderTarget","create_Str_IntX2",0x1ed7a8f2,"org.gameplay3d.RenderTarget.create_Str_IntX2","org/gameplay3d/RenderTarget.hx",23,0xca73952a)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_LINE(23)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::RenderTarget >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(23)
	Dynamic nativeObject = ::org::gameplay3d::RenderTarget_obj::hx_RenderTarget_static_create_Str_IntX2(id,width,height);		HX_STACK_VAR(nativeObject,"nativeObject");
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
			::org::gameplay3d::RenderTarget result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(23)
			if (((result == null()))){
				HX_STACK_LINE(23)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(23)
				::org::gameplay3d::RenderTarget _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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


STATIC_HX_DEFINE_DYNAMIC_FUNC3(RenderTarget_obj,create_Str_IntX2,return )

::org::gameplay3d::RenderTarget RenderTarget_obj::getRenderTarget( ::String id){
	HX_STACK_FRAME("org.gameplay3d.RenderTarget","getRenderTarget",0xa5adad03,"org.gameplay3d.RenderTarget.getRenderTarget","org/gameplay3d/RenderTarget.hx",41,0xca73952a)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(41)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::RenderTarget >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(41)
	Dynamic nativeObject = ::org::gameplay3d::RenderTarget_obj::hx_RenderTarget_static_getRenderTarget(id);		HX_STACK_VAR(nativeObject,"nativeObject");
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
			::org::gameplay3d::RenderTarget result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(41)
			if (((result == null()))){
				HX_STACK_LINE(41)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(41)
				::org::gameplay3d::RenderTarget _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RenderTarget_obj,getRenderTarget,return )

Dynamic RenderTarget_obj::hx_RenderTarget_static_create_Str_Tex;

Dynamic RenderTarget_obj::hx_RenderTarget_static_create_Str_IntX2;

Dynamic RenderTarget_obj::hx_RenderTarget_getHeight;

Dynamic RenderTarget_obj::hx_RenderTarget_getId;

Dynamic RenderTarget_obj::hx_RenderTarget_static_getRenderTarget;

Dynamic RenderTarget_obj::hx_RenderTarget_getTexture;

Dynamic RenderTarget_obj::hx_RenderTarget_getWidth;


RenderTarget_obj::RenderTarget_obj()
{
}

Dynamic RenderTarget_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"getId") ) { return getId_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getWidth") ) { return getWidth_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getHeight") ) { return getHeight_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getTexture") ) { return getTexture_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"create_Str_Tex") ) { return create_Str_Tex_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getRenderTarget") ) { return getRenderTarget_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"create_Str_IntX2") ) { return create_Str_IntX2_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hx_RenderTarget_getId") ) { return hx_RenderTarget_getId; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_RenderTarget_getWidth") ) { return hx_RenderTarget_getWidth; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_RenderTarget_getHeight") ) { return hx_RenderTarget_getHeight; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_RenderTarget_getTexture") ) { return hx_RenderTarget_getTexture; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"hx_RenderTarget_static_create_Str_Tex") ) { return hx_RenderTarget_static_create_Str_Tex; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"hx_RenderTarget_static_getRenderTarget") ) { return hx_RenderTarget_static_getRenderTarget; }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"hx_RenderTarget_static_create_Str_IntX2") ) { return hx_RenderTarget_static_create_Str_IntX2; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RenderTarget_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 21:
		if (HX_FIELD_EQ(inName,"hx_RenderTarget_getId") ) { hx_RenderTarget_getId=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_RenderTarget_getWidth") ) { hx_RenderTarget_getWidth=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_RenderTarget_getHeight") ) { hx_RenderTarget_getHeight=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_RenderTarget_getTexture") ) { hx_RenderTarget_getTexture=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"hx_RenderTarget_static_create_Str_Tex") ) { hx_RenderTarget_static_create_Str_Tex=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"hx_RenderTarget_static_getRenderTarget") ) { hx_RenderTarget_static_getRenderTarget=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"hx_RenderTarget_static_create_Str_IntX2") ) { hx_RenderTarget_static_create_Str_IntX2=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RenderTarget_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create_Str_Tex"),
	HX_CSTRING("create_Str_IntX2"),
	HX_CSTRING("getRenderTarget"),
	HX_CSTRING("hx_RenderTarget_static_create_Str_Tex"),
	HX_CSTRING("hx_RenderTarget_static_create_Str_IntX2"),
	HX_CSTRING("hx_RenderTarget_getHeight"),
	HX_CSTRING("hx_RenderTarget_getId"),
	HX_CSTRING("hx_RenderTarget_static_getRenderTarget"),
	HX_CSTRING("hx_RenderTarget_getTexture"),
	HX_CSTRING("hx_RenderTarget_getWidth"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("getHeight"),
	HX_CSTRING("getId"),
	HX_CSTRING("getTexture"),
	HX_CSTRING("getWidth"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RenderTarget_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(RenderTarget_obj::hx_RenderTarget_static_create_Str_Tex,"hx_RenderTarget_static_create_Str_Tex");
	HX_MARK_MEMBER_NAME(RenderTarget_obj::hx_RenderTarget_static_create_Str_IntX2,"hx_RenderTarget_static_create_Str_IntX2");
	HX_MARK_MEMBER_NAME(RenderTarget_obj::hx_RenderTarget_getHeight,"hx_RenderTarget_getHeight");
	HX_MARK_MEMBER_NAME(RenderTarget_obj::hx_RenderTarget_getId,"hx_RenderTarget_getId");
	HX_MARK_MEMBER_NAME(RenderTarget_obj::hx_RenderTarget_static_getRenderTarget,"hx_RenderTarget_static_getRenderTarget");
	HX_MARK_MEMBER_NAME(RenderTarget_obj::hx_RenderTarget_getTexture,"hx_RenderTarget_getTexture");
	HX_MARK_MEMBER_NAME(RenderTarget_obj::hx_RenderTarget_getWidth,"hx_RenderTarget_getWidth");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RenderTarget_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(RenderTarget_obj::hx_RenderTarget_static_create_Str_Tex,"hx_RenderTarget_static_create_Str_Tex");
	HX_VISIT_MEMBER_NAME(RenderTarget_obj::hx_RenderTarget_static_create_Str_IntX2,"hx_RenderTarget_static_create_Str_IntX2");
	HX_VISIT_MEMBER_NAME(RenderTarget_obj::hx_RenderTarget_getHeight,"hx_RenderTarget_getHeight");
	HX_VISIT_MEMBER_NAME(RenderTarget_obj::hx_RenderTarget_getId,"hx_RenderTarget_getId");
	HX_VISIT_MEMBER_NAME(RenderTarget_obj::hx_RenderTarget_static_getRenderTarget,"hx_RenderTarget_static_getRenderTarget");
	HX_VISIT_MEMBER_NAME(RenderTarget_obj::hx_RenderTarget_getTexture,"hx_RenderTarget_getTexture");
	HX_VISIT_MEMBER_NAME(RenderTarget_obj::hx_RenderTarget_getWidth,"hx_RenderTarget_getWidth");
};

#endif

Class RenderTarget_obj::__mClass;

void RenderTarget_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.RenderTarget"), hx::TCanCast< RenderTarget_obj> ,sStaticFields,sMemberFields,
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

void RenderTarget_obj::__boot()
{
	hx_RenderTarget_static_create_Str_Tex= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::RenderTarget >(),HX_CSTRING("static_create_Str_Tex"),(int)2);
	hx_RenderTarget_static_create_Str_IntX2= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::RenderTarget >(),HX_CSTRING("static_create_Str_IntX2"),(int)3);
	hx_RenderTarget_getHeight= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::RenderTarget >(),HX_CSTRING("getHeight"),(int)1);
	hx_RenderTarget_getId= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::RenderTarget >(),HX_CSTRING("getId"),(int)1);
	hx_RenderTarget_static_getRenderTarget= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::RenderTarget >(),HX_CSTRING("static_getRenderTarget"),(int)1);
	hx_RenderTarget_getTexture= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::RenderTarget >(),HX_CSTRING("getTexture"),(int)1);
	hx_RenderTarget_getWidth= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::RenderTarget >(),HX_CSTRING("getWidth"),(int)1);
}

} // end namespace org
} // end namespace gameplay3d
