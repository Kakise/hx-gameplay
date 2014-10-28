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
#ifndef INCLUDED_org_gameplay3d_FrameBuffer
#include <org/gameplay3d/FrameBuffer.h>
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

Void FrameBuffer_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.FrameBuffer","new",0xb93a1172,"org.gameplay3d.FrameBuffer.new","org/gameplay3d/FrameBuffer.hx",9,0x756867de)
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

//FrameBuffer_obj::~FrameBuffer_obj() { }

Dynamic FrameBuffer_obj::__CreateEmpty() { return  new FrameBuffer_obj; }
hx::ObjectPtr< FrameBuffer_obj > FrameBuffer_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< FrameBuffer_obj > result = new FrameBuffer_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic FrameBuffer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FrameBuffer_obj > result = new FrameBuffer_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *FrameBuffer_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::intern::INativeBinding_obj)) return operator ::org::gameplay3d::intern::INativeBinding_obj *();
	if (inType==typeid( ::org::gameplay3d::Ref_obj)) return operator ::org::gameplay3d::Ref_obj *();
	return super::__ToInterface(inType);
}

Void FrameBuffer_obj::bind( ){
{
		HX_STACK_FRAME("org.gameplay3d.FrameBuffer","bind",0x51a9a46b,"org.gameplay3d.FrameBuffer.bind","org/gameplay3d/FrameBuffer.hx",18,0x756867de)
		HX_STACK_THIS(this)
		HX_STACK_LINE(18)
		::org::gameplay3d::FrameBuffer_obj::hx_FrameBuffer_bind(this->nativeObject);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FrameBuffer_obj,bind,(void))

::org::gameplay3d::DepthStencilTarget FrameBuffer_obj::getDepthStencilTarget( ){
	HX_STACK_FRAME("org.gameplay3d.FrameBuffer","getDepthStencilTarget",0xbccdf332,"org.gameplay3d.FrameBuffer.getDepthStencilTarget","org/gameplay3d/FrameBuffer.hx",42,0x756867de)
	HX_STACK_THIS(this)
	HX_STACK_LINE(42)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::DepthStencilTarget >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(42)
	Dynamic nativeObject = ::org::gameplay3d::FrameBuffer_obj::hx_FrameBuffer_getDepthStencilTarget(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(42)
	if (((nativeObject == null()))){
		HX_STACK_LINE(42)
		return null();
	}
	else{
		HX_STACK_LINE(42)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(42)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(42)
			::org::gameplay3d::DepthStencilTarget result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(42)
			if (((result == null()))){
				HX_STACK_LINE(42)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(42)
				::org::gameplay3d::DepthStencilTarget _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(42)
				result = _g;
				HX_STACK_LINE(42)
				ref->set(result);
			}
			HX_STACK_LINE(42)
			return result;
		}
		else{
			HX_STACK_LINE(42)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(42)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(42)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FrameBuffer_obj,getDepthStencilTarget,return )

int FrameBuffer_obj::getHeight( ){
	HX_STACK_FRAME("org.gameplay3d.FrameBuffer","getHeight",0xc7b1ebaf,"org.gameplay3d.FrameBuffer.getHeight","org/gameplay3d/FrameBuffer.hx",54,0x756867de)
	HX_STACK_THIS(this)
	HX_STACK_LINE(54)
	return ::org::gameplay3d::FrameBuffer_obj::hx_FrameBuffer_getHeight(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(FrameBuffer_obj,getHeight,return )

::String FrameBuffer_obj::getId( ){
	HX_STACK_FRAME("org.gameplay3d.FrameBuffer","getId",0x0126bba3,"org.gameplay3d.FrameBuffer.getId","org/gameplay3d/FrameBuffer.hx",60,0x756867de)
	HX_STACK_THIS(this)
	HX_STACK_LINE(60)
	return ::org::gameplay3d::FrameBuffer_obj::hx_FrameBuffer_getId(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(FrameBuffer_obj,getId,return )

::org::gameplay3d::RenderTarget FrameBuffer_obj::getRenderTarget( hx::Null< int >  __o_index){
int index = __o_index.Default(0);
	HX_STACK_FRAME("org.gameplay3d.FrameBuffer","getRenderTarget",0x5a79e10f,"org.gameplay3d.FrameBuffer.getRenderTarget","org/gameplay3d/FrameBuffer.hx",72,0x756867de)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
{
		HX_STACK_LINE(72)
		::Class classObj = hx::ClassOf< ::org::gameplay3d::RenderTarget >();		HX_STACK_VAR(classObj,"classObj");
		HX_STACK_LINE(72)
		Dynamic nativeObject = ::org::gameplay3d::FrameBuffer_obj::hx_FrameBuffer_getRenderTarget(this->nativeObject,index);		HX_STACK_VAR(nativeObject,"nativeObject");
		HX_STACK_LINE(72)
		if (((nativeObject == null()))){
			HX_STACK_LINE(72)
			return null();
		}
		else{
			HX_STACK_LINE(72)
			if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
				HX_STACK_LINE(72)
				::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
				HX_STACK_LINE(72)
				::org::gameplay3d::RenderTarget result = ref->get();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(72)
				if (((result == null()))){
					HX_STACK_LINE(72)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
					HX_STACK_LINE(72)
					::org::gameplay3d::RenderTarget _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(72)
					result = _g;
					HX_STACK_LINE(72)
					ref->set(result);
				}
				HX_STACK_LINE(72)
				return result;
			}
			else{
				HX_STACK_LINE(72)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
				HX_STACK_LINE(72)
				return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
			}
		}
		HX_STACK_LINE(72)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC1(FrameBuffer_obj,getRenderTarget,return )

int FrameBuffer_obj::getWidth( ){
	HX_STACK_FRAME("org.gameplay3d.FrameBuffer","getWidth",0xd474633e,"org.gameplay3d.FrameBuffer.getWidth","org/gameplay3d/FrameBuffer.hx",78,0x756867de)
	HX_STACK_THIS(this)
	HX_STACK_LINE(78)
	return ::org::gameplay3d::FrameBuffer_obj::hx_FrameBuffer_getWidth(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(FrameBuffer_obj,getWidth,return )

Void FrameBuffer_obj::setDepthStencilTarget( ::org::gameplay3d::DepthStencilTarget target){
{
		HX_STACK_FRAME("org.gameplay3d.FrameBuffer","setDepthStencilTarget",0x10d6c13e,"org.gameplay3d.FrameBuffer.setDepthStencilTarget","org/gameplay3d/FrameBuffer.hx",84,0x756867de)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_LINE(84)
		::org::gameplay3d::FrameBuffer_obj::hx_FrameBuffer_setDepthStencilTarget(this->nativeObject,(  (((target == null()))) ? Dynamic(null()) : Dynamic(target->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FrameBuffer_obj,setDepthStencilTarget,(void))

Void FrameBuffer_obj::setRenderTarget( ::org::gameplay3d::RenderTarget target,hx::Null< int >  __o_index){
int index = __o_index.Default(0);
	HX_STACK_FRAME("org.gameplay3d.FrameBuffer","setRenderTarget",0x56455e1b,"org.gameplay3d.FrameBuffer.setRenderTarget","org/gameplay3d/FrameBuffer.hx",90,0x756867de)
	HX_STACK_THIS(this)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(index,"index")
{
		HX_STACK_LINE(90)
		::org::gameplay3d::FrameBuffer_obj::hx_FrameBuffer_setRenderTarget(this->nativeObject,(  (((target == null()))) ? Dynamic(null()) : Dynamic(target->nativeObject) ),index);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FrameBuffer_obj,setRenderTarget,(void))

Void FrameBuffer_obj::bindDefault( ){
{
		HX_STACK_FRAME("org.gameplay3d.FrameBuffer","bindDefault",0xc7bd8f96,"org.gameplay3d.FrameBuffer.bindDefault","org/gameplay3d/FrameBuffer.hx",24,0x756867de)
		HX_STACK_LINE(24)
		::org::gameplay3d::FrameBuffer_obj::hx_FrameBuffer_static_bindDefault();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FrameBuffer_obj,bindDefault,(void))

::org::gameplay3d::FrameBuffer FrameBuffer_obj::create_Str( ::String id){
	HX_STACK_FRAME("org.gameplay3d.FrameBuffer","create_Str",0x0b1f1fbc,"org.gameplay3d.FrameBuffer.create_Str","org/gameplay3d/FrameBuffer.hx",30,0x756867de)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(30)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::FrameBuffer >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(30)
	Dynamic nativeObject = ::org::gameplay3d::FrameBuffer_obj::hx_FrameBuffer_static_create_Str(id);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(30)
	if (((nativeObject == null()))){
		HX_STACK_LINE(30)
		return null();
	}
	else{
		HX_STACK_LINE(30)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(30)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(30)
			::org::gameplay3d::FrameBuffer result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(30)
			if (((result == null()))){
				HX_STACK_LINE(30)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(30)
				::org::gameplay3d::FrameBuffer _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(30)
				result = _g;
				HX_STACK_LINE(30)
				ref->set(result);
			}
			HX_STACK_LINE(30)
			return result;
		}
		else{
			HX_STACK_LINE(30)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(30)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(30)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FrameBuffer_obj,create_Str,return )

::org::gameplay3d::FrameBuffer FrameBuffer_obj::create_Str_IntX2( ::String id,int width,int height){
	HX_STACK_FRAME("org.gameplay3d.FrameBuffer","create_Str_IntX2",0x9cb8ff66,"org.gameplay3d.FrameBuffer.create_Str_IntX2","org/gameplay3d/FrameBuffer.hx",36,0x756867de)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_LINE(36)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::FrameBuffer >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(36)
	Dynamic nativeObject = ::org::gameplay3d::FrameBuffer_obj::hx_FrameBuffer_static_create_Str_IntX2(id,width,height);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(36)
	if (((nativeObject == null()))){
		HX_STACK_LINE(36)
		return null();
	}
	else{
		HX_STACK_LINE(36)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(36)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(36)
			::org::gameplay3d::FrameBuffer result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(36)
			if (((result == null()))){
				HX_STACK_LINE(36)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(36)
				::org::gameplay3d::FrameBuffer _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(36)
				result = _g;
				HX_STACK_LINE(36)
				ref->set(result);
			}
			HX_STACK_LINE(36)
			return result;
		}
		else{
			HX_STACK_LINE(36)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(36)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(36)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FrameBuffer_obj,create_Str_IntX2,return )

::org::gameplay3d::FrameBuffer FrameBuffer_obj::getFrameBuffer( ::String id){
	HX_STACK_FRAME("org.gameplay3d.FrameBuffer","getFrameBuffer",0x359ff045,"org.gameplay3d.FrameBuffer.getFrameBuffer","org/gameplay3d/FrameBuffer.hx",48,0x756867de)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(48)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::FrameBuffer >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(48)
	Dynamic nativeObject = ::org::gameplay3d::FrameBuffer_obj::hx_FrameBuffer_static_getFrameBuffer(id);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(48)
	if (((nativeObject == null()))){
		HX_STACK_LINE(48)
		return null();
	}
	else{
		HX_STACK_LINE(48)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(48)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(48)
			::org::gameplay3d::FrameBuffer result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(48)
			if (((result == null()))){
				HX_STACK_LINE(48)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(48)
				::org::gameplay3d::FrameBuffer _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(48)
				result = _g;
				HX_STACK_LINE(48)
				ref->set(result);
			}
			HX_STACK_LINE(48)
			return result;
		}
		else{
			HX_STACK_LINE(48)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(48)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(48)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FrameBuffer_obj,getFrameBuffer,return )

int FrameBuffer_obj::getMaxRenderTargets( ){
	HX_STACK_FRAME("org.gameplay3d.FrameBuffer","getMaxRenderTargets",0x8ce143d0,"org.gameplay3d.FrameBuffer.getMaxRenderTargets","org/gameplay3d/FrameBuffer.hx",66,0x756867de)
	HX_STACK_LINE(66)
	return ::org::gameplay3d::FrameBuffer_obj::hx_FrameBuffer_static_getMaxRenderTargets();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FrameBuffer_obj,getMaxRenderTargets,return )

Dynamic FrameBuffer_obj::hx_FrameBuffer_bind;

Dynamic FrameBuffer_obj::hx_FrameBuffer_static_bindDefault;

Dynamic FrameBuffer_obj::hx_FrameBuffer_static_create_Str;

Dynamic FrameBuffer_obj::hx_FrameBuffer_static_create_Str_IntX2;

Dynamic FrameBuffer_obj::hx_FrameBuffer_getDepthStencilTarget;

Dynamic FrameBuffer_obj::hx_FrameBuffer_static_getFrameBuffer;

Dynamic FrameBuffer_obj::hx_FrameBuffer_getHeight;

Dynamic FrameBuffer_obj::hx_FrameBuffer_getId;

Dynamic FrameBuffer_obj::hx_FrameBuffer_static_getMaxRenderTargets;

Dynamic FrameBuffer_obj::hx_FrameBuffer_getRenderTarget;

Dynamic FrameBuffer_obj::hx_FrameBuffer_getWidth;

Dynamic FrameBuffer_obj::hx_FrameBuffer_setDepthStencilTarget;

Dynamic FrameBuffer_obj::hx_FrameBuffer_setRenderTarget;


FrameBuffer_obj::FrameBuffer_obj()
{
}

Dynamic FrameBuffer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bind") ) { return bind_dyn(); }
		break;
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
		if (HX_FIELD_EQ(inName,"create_Str") ) { return create_Str_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bindDefault") ) { return bindDefault_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getFrameBuffer") ) { return getFrameBuffer_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getRenderTarget") ) { return getRenderTarget_dyn(); }
		if (HX_FIELD_EQ(inName,"setRenderTarget") ) { return setRenderTarget_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"create_Str_IntX2") ) { return create_Str_IntX2_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getMaxRenderTargets") ) { return getMaxRenderTargets_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_FrameBuffer_bind") ) { return hx_FrameBuffer_bind; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_FrameBuffer_getId") ) { return hx_FrameBuffer_getId; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"getDepthStencilTarget") ) { return getDepthStencilTarget_dyn(); }
		if (HX_FIELD_EQ(inName,"setDepthStencilTarget") ) { return setDepthStencilTarget_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_FrameBuffer_getWidth") ) { return hx_FrameBuffer_getWidth; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_FrameBuffer_getHeight") ) { return hx_FrameBuffer_getHeight; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"hx_FrameBuffer_getRenderTarget") ) { return hx_FrameBuffer_getRenderTarget; }
		if (HX_FIELD_EQ(inName,"hx_FrameBuffer_setRenderTarget") ) { return hx_FrameBuffer_setRenderTarget; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"hx_FrameBuffer_static_create_Str") ) { return hx_FrameBuffer_static_create_Str; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"hx_FrameBuffer_static_bindDefault") ) { return hx_FrameBuffer_static_bindDefault; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"hx_FrameBuffer_getDepthStencilTarget") ) { return hx_FrameBuffer_getDepthStencilTarget; }
		if (HX_FIELD_EQ(inName,"hx_FrameBuffer_static_getFrameBuffer") ) { return hx_FrameBuffer_static_getFrameBuffer; }
		if (HX_FIELD_EQ(inName,"hx_FrameBuffer_setDepthStencilTarget") ) { return hx_FrameBuffer_setDepthStencilTarget; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"hx_FrameBuffer_static_create_Str_IntX2") ) { return hx_FrameBuffer_static_create_Str_IntX2; }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"hx_FrameBuffer_static_getMaxRenderTargets") ) { return hx_FrameBuffer_static_getMaxRenderTargets; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FrameBuffer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"hx_FrameBuffer_bind") ) { hx_FrameBuffer_bind=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_FrameBuffer_getId") ) { hx_FrameBuffer_getId=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_FrameBuffer_getWidth") ) { hx_FrameBuffer_getWidth=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_FrameBuffer_getHeight") ) { hx_FrameBuffer_getHeight=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"hx_FrameBuffer_getRenderTarget") ) { hx_FrameBuffer_getRenderTarget=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_FrameBuffer_setRenderTarget") ) { hx_FrameBuffer_setRenderTarget=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"hx_FrameBuffer_static_create_Str") ) { hx_FrameBuffer_static_create_Str=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"hx_FrameBuffer_static_bindDefault") ) { hx_FrameBuffer_static_bindDefault=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"hx_FrameBuffer_getDepthStencilTarget") ) { hx_FrameBuffer_getDepthStencilTarget=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_FrameBuffer_static_getFrameBuffer") ) { hx_FrameBuffer_static_getFrameBuffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_FrameBuffer_setDepthStencilTarget") ) { hx_FrameBuffer_setDepthStencilTarget=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"hx_FrameBuffer_static_create_Str_IntX2") ) { hx_FrameBuffer_static_create_Str_IntX2=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"hx_FrameBuffer_static_getMaxRenderTargets") ) { hx_FrameBuffer_static_getMaxRenderTargets=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FrameBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("bindDefault"),
	HX_CSTRING("create_Str"),
	HX_CSTRING("create_Str_IntX2"),
	HX_CSTRING("getFrameBuffer"),
	HX_CSTRING("getMaxRenderTargets"),
	HX_CSTRING("hx_FrameBuffer_bind"),
	HX_CSTRING("hx_FrameBuffer_static_bindDefault"),
	HX_CSTRING("hx_FrameBuffer_static_create_Str"),
	HX_CSTRING("hx_FrameBuffer_static_create_Str_IntX2"),
	HX_CSTRING("hx_FrameBuffer_getDepthStencilTarget"),
	HX_CSTRING("hx_FrameBuffer_static_getFrameBuffer"),
	HX_CSTRING("hx_FrameBuffer_getHeight"),
	HX_CSTRING("hx_FrameBuffer_getId"),
	HX_CSTRING("hx_FrameBuffer_static_getMaxRenderTargets"),
	HX_CSTRING("hx_FrameBuffer_getRenderTarget"),
	HX_CSTRING("hx_FrameBuffer_getWidth"),
	HX_CSTRING("hx_FrameBuffer_setDepthStencilTarget"),
	HX_CSTRING("hx_FrameBuffer_setRenderTarget"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("bind"),
	HX_CSTRING("getDepthStencilTarget"),
	HX_CSTRING("getHeight"),
	HX_CSTRING("getId"),
	HX_CSTRING("getRenderTarget"),
	HX_CSTRING("getWidth"),
	HX_CSTRING("setDepthStencilTarget"),
	HX_CSTRING("setRenderTarget"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FrameBuffer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FrameBuffer_obj::hx_FrameBuffer_bind,"hx_FrameBuffer_bind");
	HX_MARK_MEMBER_NAME(FrameBuffer_obj::hx_FrameBuffer_static_bindDefault,"hx_FrameBuffer_static_bindDefault");
	HX_MARK_MEMBER_NAME(FrameBuffer_obj::hx_FrameBuffer_static_create_Str,"hx_FrameBuffer_static_create_Str");
	HX_MARK_MEMBER_NAME(FrameBuffer_obj::hx_FrameBuffer_static_create_Str_IntX2,"hx_FrameBuffer_static_create_Str_IntX2");
	HX_MARK_MEMBER_NAME(FrameBuffer_obj::hx_FrameBuffer_getDepthStencilTarget,"hx_FrameBuffer_getDepthStencilTarget");
	HX_MARK_MEMBER_NAME(FrameBuffer_obj::hx_FrameBuffer_static_getFrameBuffer,"hx_FrameBuffer_static_getFrameBuffer");
	HX_MARK_MEMBER_NAME(FrameBuffer_obj::hx_FrameBuffer_getHeight,"hx_FrameBuffer_getHeight");
	HX_MARK_MEMBER_NAME(FrameBuffer_obj::hx_FrameBuffer_getId,"hx_FrameBuffer_getId");
	HX_MARK_MEMBER_NAME(FrameBuffer_obj::hx_FrameBuffer_static_getMaxRenderTargets,"hx_FrameBuffer_static_getMaxRenderTargets");
	HX_MARK_MEMBER_NAME(FrameBuffer_obj::hx_FrameBuffer_getRenderTarget,"hx_FrameBuffer_getRenderTarget");
	HX_MARK_MEMBER_NAME(FrameBuffer_obj::hx_FrameBuffer_getWidth,"hx_FrameBuffer_getWidth");
	HX_MARK_MEMBER_NAME(FrameBuffer_obj::hx_FrameBuffer_setDepthStencilTarget,"hx_FrameBuffer_setDepthStencilTarget");
	HX_MARK_MEMBER_NAME(FrameBuffer_obj::hx_FrameBuffer_setRenderTarget,"hx_FrameBuffer_setRenderTarget");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FrameBuffer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FrameBuffer_obj::hx_FrameBuffer_bind,"hx_FrameBuffer_bind");
	HX_VISIT_MEMBER_NAME(FrameBuffer_obj::hx_FrameBuffer_static_bindDefault,"hx_FrameBuffer_static_bindDefault");
	HX_VISIT_MEMBER_NAME(FrameBuffer_obj::hx_FrameBuffer_static_create_Str,"hx_FrameBuffer_static_create_Str");
	HX_VISIT_MEMBER_NAME(FrameBuffer_obj::hx_FrameBuffer_static_create_Str_IntX2,"hx_FrameBuffer_static_create_Str_IntX2");
	HX_VISIT_MEMBER_NAME(FrameBuffer_obj::hx_FrameBuffer_getDepthStencilTarget,"hx_FrameBuffer_getDepthStencilTarget");
	HX_VISIT_MEMBER_NAME(FrameBuffer_obj::hx_FrameBuffer_static_getFrameBuffer,"hx_FrameBuffer_static_getFrameBuffer");
	HX_VISIT_MEMBER_NAME(FrameBuffer_obj::hx_FrameBuffer_getHeight,"hx_FrameBuffer_getHeight");
	HX_VISIT_MEMBER_NAME(FrameBuffer_obj::hx_FrameBuffer_getId,"hx_FrameBuffer_getId");
	HX_VISIT_MEMBER_NAME(FrameBuffer_obj::hx_FrameBuffer_static_getMaxRenderTargets,"hx_FrameBuffer_static_getMaxRenderTargets");
	HX_VISIT_MEMBER_NAME(FrameBuffer_obj::hx_FrameBuffer_getRenderTarget,"hx_FrameBuffer_getRenderTarget");
	HX_VISIT_MEMBER_NAME(FrameBuffer_obj::hx_FrameBuffer_getWidth,"hx_FrameBuffer_getWidth");
	HX_VISIT_MEMBER_NAME(FrameBuffer_obj::hx_FrameBuffer_setDepthStencilTarget,"hx_FrameBuffer_setDepthStencilTarget");
	HX_VISIT_MEMBER_NAME(FrameBuffer_obj::hx_FrameBuffer_setRenderTarget,"hx_FrameBuffer_setRenderTarget");
};

#endif

Class FrameBuffer_obj::__mClass;

void FrameBuffer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.FrameBuffer"), hx::TCanCast< FrameBuffer_obj> ,sStaticFields,sMemberFields,
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

void FrameBuffer_obj::__boot()
{
	hx_FrameBuffer_bind= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::FrameBuffer >(),HX_CSTRING("bind"),(int)1);
	hx_FrameBuffer_static_bindDefault= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::FrameBuffer >(),HX_CSTRING("static_bindDefault"),(int)0);
	hx_FrameBuffer_static_create_Str= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::FrameBuffer >(),HX_CSTRING("static_create_Str"),(int)1);
	hx_FrameBuffer_static_create_Str_IntX2= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::FrameBuffer >(),HX_CSTRING("static_create_Str_IntX2"),(int)3);
	hx_FrameBuffer_getDepthStencilTarget= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::FrameBuffer >(),HX_CSTRING("getDepthStencilTarget"),(int)1);
	hx_FrameBuffer_static_getFrameBuffer= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::FrameBuffer >(),HX_CSTRING("static_getFrameBuffer"),(int)1);
	hx_FrameBuffer_getHeight= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::FrameBuffer >(),HX_CSTRING("getHeight"),(int)1);
	hx_FrameBuffer_getId= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::FrameBuffer >(),HX_CSTRING("getId"),(int)1);
	hx_FrameBuffer_static_getMaxRenderTargets= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::FrameBuffer >(),HX_CSTRING("static_getMaxRenderTargets"),(int)0);
	hx_FrameBuffer_getRenderTarget= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::FrameBuffer >(),HX_CSTRING("getRenderTarget"),(int)2);
	hx_FrameBuffer_getWidth= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::FrameBuffer >(),HX_CSTRING("getWidth"),(int)1);
	hx_FrameBuffer_setDepthStencilTarget= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::FrameBuffer >(),HX_CSTRING("setDepthStencilTarget"),(int)2);
	hx_FrameBuffer_setRenderTarget= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::FrameBuffer >(),HX_CSTRING("setRenderTarget"),(int)3);
}

} // end namespace org
} // end namespace gameplay3d
