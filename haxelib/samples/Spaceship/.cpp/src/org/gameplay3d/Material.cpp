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
#ifndef INCLUDED_org_gameplay3d_Effect
#include <org/gameplay3d/Effect.h>
#endif
#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Material
#include <org/gameplay3d/Material.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Properties
#include <org/gameplay3d/Properties.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Ref
#include <org/gameplay3d/Ref.h>
#endif
#ifndef INCLUDED_org_gameplay3d_RenderState
#include <org/gameplay3d/RenderState.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Technique
#include <org/gameplay3d/Technique.h>
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

Void Material_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.Material","new",0x5c5cba46,"org.gameplay3d.Material.new","org/gameplay3d/Material.hx",9,0x6313e64a)
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

//Material_obj::~Material_obj() { }

Dynamic Material_obj::__CreateEmpty() { return  new Material_obj; }
hx::ObjectPtr< Material_obj > Material_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< Material_obj > result = new Material_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic Material_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Material_obj > result = new Material_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::org::gameplay3d::Technique Material_obj::getTechnique( ){
	HX_STACK_FRAME("org.gameplay3d.Material","getTechnique",0xe856af74,"org.gameplay3d.Material.getTechnique","org/gameplay3d/Material.hx",42,0x6313e64a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(42)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Technique >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(42)
	Dynamic nativeObject = ::org::gameplay3d::Material_obj::hx_Material_getTechnique(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
			::org::gameplay3d::Technique result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(42)
			if (((result == null()))){
				HX_STACK_LINE(42)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(42)
				::org::gameplay3d::Technique _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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


HX_DEFINE_DYNAMIC_FUNC0(Material_obj,getTechnique,return )

::org::gameplay3d::Technique Material_obj::getTechnique_Str( ::String id){
	HX_STACK_FRAME("org.gameplay3d.Material","getTechnique_Str",0xf4601f06,"org.gameplay3d.Material.getTechnique_Str","org/gameplay3d/Material.hx",48,0x6313e64a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(48)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Technique >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(48)
	Dynamic nativeObject = ::org::gameplay3d::Material_obj::hx_Material_getTechnique_Str(this->nativeObject,id);		HX_STACK_VAR(nativeObject,"nativeObject");
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
			::org::gameplay3d::Technique result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(48)
			if (((result == null()))){
				HX_STACK_LINE(48)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(48)
				::org::gameplay3d::Technique _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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


HX_DEFINE_DYNAMIC_FUNC1(Material_obj,getTechnique_Str,return )

::org::gameplay3d::Technique Material_obj::getTechniqueByIndex( int index){
	HX_STACK_FRAME("org.gameplay3d.Material","getTechniqueByIndex",0x404238a7,"org.gameplay3d.Material.getTechniqueByIndex","org/gameplay3d/Material.hx",54,0x6313e64a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(54)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Technique >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(54)
	Dynamic nativeObject = ::org::gameplay3d::Material_obj::hx_Material_getTechniqueByIndex(this->nativeObject,index);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(54)
	if (((nativeObject == null()))){
		HX_STACK_LINE(54)
		return null();
	}
	else{
		HX_STACK_LINE(54)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(54)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(54)
			::org::gameplay3d::Technique result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(54)
			if (((result == null()))){
				HX_STACK_LINE(54)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(54)
				::org::gameplay3d::Technique _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(54)
				result = _g;
				HX_STACK_LINE(54)
				ref->set(result);
			}
			HX_STACK_LINE(54)
			return result;
		}
		else{
			HX_STACK_LINE(54)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(54)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(54)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Material_obj,getTechniqueByIndex,return )

int Material_obj::getTechniqueCount( ){
	HX_STACK_FRAME("org.gameplay3d.Material","getTechniqueCount",0xd30580bb,"org.gameplay3d.Material.getTechniqueCount","org/gameplay3d/Material.hx",60,0x6313e64a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(60)
	return ::org::gameplay3d::Material_obj::hx_Material_getTechniqueCount(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Material_obj,getTechniqueCount,return )

Void Material_obj::setTechnique( ::String id){
{
		HX_STACK_FRAME("org.gameplay3d.Material","setTechnique",0xfd4fd2e8,"org.gameplay3d.Material.setTechnique","org/gameplay3d/Material.hx",66,0x6313e64a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(66)
		::org::gameplay3d::Material_obj::hx_Material_setTechnique(this->nativeObject,id);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Material_obj,setTechnique,(void))

::org::gameplay3d::Material Material_obj::create_Eff( ::org::gameplay3d::Effect effect){
	HX_STACK_FRAME("org.gameplay3d.Material","create_Eff",0x68dd4d9c,"org.gameplay3d.Material.create_Eff","org/gameplay3d/Material.hx",18,0x6313e64a)
	HX_STACK_ARG(effect,"effect")
	HX_STACK_LINE(18)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Material >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(18)
	Dynamic nativeObject = ::org::gameplay3d::Material_obj::hx_Material_static_create_Eff((  (((effect == null()))) ? Dynamic(null()) : Dynamic(effect->nativeObject) ));		HX_STACK_VAR(nativeObject,"nativeObject");
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
			::org::gameplay3d::Material result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(18)
			if (((result == null()))){
				HX_STACK_LINE(18)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(18)
				::org::gameplay3d::Material _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Material_obj,create_Eff,return )

::org::gameplay3d::Material Material_obj::create_Prop( ::org::gameplay3d::Properties materialProperties){
	HX_STACK_FRAME("org.gameplay3d.Material","create_Prop",0x6015170c,"org.gameplay3d.Material.create_Prop","org/gameplay3d/Material.hx",24,0x6313e64a)
	HX_STACK_ARG(materialProperties,"materialProperties")
	HX_STACK_LINE(24)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Material >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(24)
	Dynamic nativeObject = ::org::gameplay3d::Material_obj::hx_Material_static_create_Prop((  (((materialProperties == null()))) ? Dynamic(null()) : Dynamic(materialProperties->nativeObject) ));		HX_STACK_VAR(nativeObject,"nativeObject");
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
			::org::gameplay3d::Material result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(24)
			if (((result == null()))){
				HX_STACK_LINE(24)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(24)
				::org::gameplay3d::Material _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Material_obj,create_Prop,return )

::org::gameplay3d::Material Material_obj::create_Str( ::String url){
	HX_STACK_FRAME("org.gameplay3d.Material","create_Str",0x68e7f968,"org.gameplay3d.Material.create_Str","org/gameplay3d/Material.hx",30,0x6313e64a)
	HX_STACK_ARG(url,"url")
	HX_STACK_LINE(30)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Material >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(30)
	Dynamic nativeObject = ::org::gameplay3d::Material_obj::hx_Material_static_create_Str(url);		HX_STACK_VAR(nativeObject,"nativeObject");
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
			::org::gameplay3d::Material result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(30)
			if (((result == null()))){
				HX_STACK_LINE(30)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(30)
				::org::gameplay3d::Material _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Material_obj,create_Str,return )

::org::gameplay3d::Material Material_obj::create_StrX3( ::String vshPath,::String fshPath,::String defines){
	HX_STACK_FRAME("org.gameplay3d.Material","create_StrX3",0x6de77043,"org.gameplay3d.Material.create_StrX3","org/gameplay3d/Material.hx",36,0x6313e64a)
	HX_STACK_ARG(vshPath,"vshPath")
	HX_STACK_ARG(fshPath,"fshPath")
	HX_STACK_ARG(defines,"defines")
	HX_STACK_LINE(36)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Material >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(36)
	Dynamic nativeObject = ::org::gameplay3d::Material_obj::hx_Material_static_create_StrX3(vshPath,fshPath,defines);		HX_STACK_VAR(nativeObject,"nativeObject");
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
			::org::gameplay3d::Material result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(36)
			if (((result == null()))){
				HX_STACK_LINE(36)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(36)
				::org::gameplay3d::Material _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Material_obj,create_StrX3,return )

Dynamic Material_obj::hx_Material_static_create_Eff;

Dynamic Material_obj::hx_Material_static_create_Prop;

Dynamic Material_obj::hx_Material_static_create_Str;

Dynamic Material_obj::hx_Material_static_create_StrX3;

Dynamic Material_obj::hx_Material_getTechnique;

Dynamic Material_obj::hx_Material_getTechnique_Str;

Dynamic Material_obj::hx_Material_getTechniqueByIndex;

Dynamic Material_obj::hx_Material_getTechniqueCount;

Dynamic Material_obj::hx_Material_setTechnique;


Material_obj::Material_obj()
{
}

Dynamic Material_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"create_Eff") ) { return create_Eff_dyn(); }
		if (HX_FIELD_EQ(inName,"create_Str") ) { return create_Str_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"create_Prop") ) { return create_Prop_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"create_StrX3") ) { return create_StrX3_dyn(); }
		if (HX_FIELD_EQ(inName,"getTechnique") ) { return getTechnique_dyn(); }
		if (HX_FIELD_EQ(inName,"setTechnique") ) { return setTechnique_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getTechnique_Str") ) { return getTechnique_Str_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getTechniqueCount") ) { return getTechniqueCount_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getTechniqueByIndex") ) { return getTechniqueByIndex_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_Material_getTechnique") ) { return hx_Material_getTechnique; }
		if (HX_FIELD_EQ(inName,"hx_Material_setTechnique") ) { return hx_Material_setTechnique; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_Material_getTechnique_Str") ) { return hx_Material_getTechnique_Str; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_Material_static_create_Eff") ) { return hx_Material_static_create_Eff; }
		if (HX_FIELD_EQ(inName,"hx_Material_static_create_Str") ) { return hx_Material_static_create_Str; }
		if (HX_FIELD_EQ(inName,"hx_Material_getTechniqueCount") ) { return hx_Material_getTechniqueCount; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"hx_Material_static_create_Prop") ) { return hx_Material_static_create_Prop; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"hx_Material_static_create_StrX3") ) { return hx_Material_static_create_StrX3; }
		if (HX_FIELD_EQ(inName,"hx_Material_getTechniqueByIndex") ) { return hx_Material_getTechniqueByIndex; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Material_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 24:
		if (HX_FIELD_EQ(inName,"hx_Material_getTechnique") ) { hx_Material_getTechnique=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Material_setTechnique") ) { hx_Material_setTechnique=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_Material_getTechnique_Str") ) { hx_Material_getTechnique_Str=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_Material_static_create_Eff") ) { hx_Material_static_create_Eff=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Material_static_create_Str") ) { hx_Material_static_create_Str=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Material_getTechniqueCount") ) { hx_Material_getTechniqueCount=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"hx_Material_static_create_Prop") ) { hx_Material_static_create_Prop=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"hx_Material_static_create_StrX3") ) { hx_Material_static_create_StrX3=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Material_getTechniqueByIndex") ) { hx_Material_getTechniqueByIndex=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Material_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create_Eff"),
	HX_CSTRING("create_Prop"),
	HX_CSTRING("create_Str"),
	HX_CSTRING("create_StrX3"),
	HX_CSTRING("hx_Material_static_create_Eff"),
	HX_CSTRING("hx_Material_static_create_Prop"),
	HX_CSTRING("hx_Material_static_create_Str"),
	HX_CSTRING("hx_Material_static_create_StrX3"),
	HX_CSTRING("hx_Material_getTechnique"),
	HX_CSTRING("hx_Material_getTechnique_Str"),
	HX_CSTRING("hx_Material_getTechniqueByIndex"),
	HX_CSTRING("hx_Material_getTechniqueCount"),
	HX_CSTRING("hx_Material_setTechnique"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("getTechnique"),
	HX_CSTRING("getTechnique_Str"),
	HX_CSTRING("getTechniqueByIndex"),
	HX_CSTRING("getTechniqueCount"),
	HX_CSTRING("setTechnique"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Material_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Material_obj::hx_Material_static_create_Eff,"hx_Material_static_create_Eff");
	HX_MARK_MEMBER_NAME(Material_obj::hx_Material_static_create_Prop,"hx_Material_static_create_Prop");
	HX_MARK_MEMBER_NAME(Material_obj::hx_Material_static_create_Str,"hx_Material_static_create_Str");
	HX_MARK_MEMBER_NAME(Material_obj::hx_Material_static_create_StrX3,"hx_Material_static_create_StrX3");
	HX_MARK_MEMBER_NAME(Material_obj::hx_Material_getTechnique,"hx_Material_getTechnique");
	HX_MARK_MEMBER_NAME(Material_obj::hx_Material_getTechnique_Str,"hx_Material_getTechnique_Str");
	HX_MARK_MEMBER_NAME(Material_obj::hx_Material_getTechniqueByIndex,"hx_Material_getTechniqueByIndex");
	HX_MARK_MEMBER_NAME(Material_obj::hx_Material_getTechniqueCount,"hx_Material_getTechniqueCount");
	HX_MARK_MEMBER_NAME(Material_obj::hx_Material_setTechnique,"hx_Material_setTechnique");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Material_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Material_obj::hx_Material_static_create_Eff,"hx_Material_static_create_Eff");
	HX_VISIT_MEMBER_NAME(Material_obj::hx_Material_static_create_Prop,"hx_Material_static_create_Prop");
	HX_VISIT_MEMBER_NAME(Material_obj::hx_Material_static_create_Str,"hx_Material_static_create_Str");
	HX_VISIT_MEMBER_NAME(Material_obj::hx_Material_static_create_StrX3,"hx_Material_static_create_StrX3");
	HX_VISIT_MEMBER_NAME(Material_obj::hx_Material_getTechnique,"hx_Material_getTechnique");
	HX_VISIT_MEMBER_NAME(Material_obj::hx_Material_getTechnique_Str,"hx_Material_getTechnique_Str");
	HX_VISIT_MEMBER_NAME(Material_obj::hx_Material_getTechniqueByIndex,"hx_Material_getTechniqueByIndex");
	HX_VISIT_MEMBER_NAME(Material_obj::hx_Material_getTechniqueCount,"hx_Material_getTechniqueCount");
	HX_VISIT_MEMBER_NAME(Material_obj::hx_Material_setTechnique,"hx_Material_setTechnique");
};

#endif

Class Material_obj::__mClass;

void Material_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.Material"), hx::TCanCast< Material_obj> ,sStaticFields,sMemberFields,
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

void Material_obj::__boot()
{
	hx_Material_static_create_Eff= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Material >(),HX_CSTRING("static_create_Eff"),(int)1);
	hx_Material_static_create_Prop= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Material >(),HX_CSTRING("static_create_Prop"),(int)1);
	hx_Material_static_create_Str= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Material >(),HX_CSTRING("static_create_Str"),(int)1);
	hx_Material_static_create_StrX3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Material >(),HX_CSTRING("static_create_StrX3"),(int)3);
	hx_Material_getTechnique= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Material >(),HX_CSTRING("getTechnique"),(int)1);
	hx_Material_getTechnique_Str= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Material >(),HX_CSTRING("getTechnique_Str"),(int)2);
	hx_Material_getTechniqueByIndex= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Material >(),HX_CSTRING("getTechniqueByIndex"),(int)2);
	hx_Material_getTechniqueCount= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Material >(),HX_CSTRING("getTechniqueCount"),(int)1);
	hx_Material_setTechnique= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Material >(),HX_CSTRING("setTechnique"),(int)2);
}

} // end namespace org
} // end namespace gameplay3d
