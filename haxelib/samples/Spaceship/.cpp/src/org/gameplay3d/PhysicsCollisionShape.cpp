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
#ifndef INCLUDED_org_gameplay3d_Mesh
#include <org/gameplay3d/Mesh.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsCollisionShape
#include <org/gameplay3d/PhysicsCollisionShape.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsCollisionShape_Definition
#include <org/gameplay3d/PhysicsCollisionShape_Definition.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Ref
#include <org/gameplay3d/Ref.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IVector3
#include <org/gameplay3d/immutable/IVector3.h>
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

Void PhysicsCollisionShape_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.PhysicsCollisionShape","new",0xf296871b,"org.gameplay3d.PhysicsCollisionShape.new","org/gameplay3d/PhysicsCollisionShape.hx",10,0xdce36255)
HX_STACK_THIS(this)
HX_STACK_ARG(nativeObjectInitializer,"nativeObjectInitializer")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(10)
	super::__construct(nativeObjectInitializer,nativeObjectInitializerParams);
}
;
	return null();
}

//PhysicsCollisionShape_obj::~PhysicsCollisionShape_obj() { }

Dynamic PhysicsCollisionShape_obj::__CreateEmpty() { return  new PhysicsCollisionShape_obj; }
hx::ObjectPtr< PhysicsCollisionShape_obj > PhysicsCollisionShape_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< PhysicsCollisionShape_obj > result = new PhysicsCollisionShape_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic PhysicsCollisionShape_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PhysicsCollisionShape_obj > result = new PhysicsCollisionShape_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *PhysicsCollisionShape_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::intern::INativeBinding_obj)) return operator ::org::gameplay3d::intern::INativeBinding_obj *();
	if (inType==typeid( ::org::gameplay3d::Ref_obj)) return operator ::org::gameplay3d::Ref_obj *();
	return super::__ToInterface(inType);
}

int PhysicsCollisionShape_obj::getType( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsCollisionShape","getType",0xf44fd2ab,"org.gameplay3d.PhysicsCollisionShape.getType","org/gameplay3d/PhysicsCollisionShape.hx",43,0xdce36255)
	HX_STACK_THIS(this)
	HX_STACK_LINE(43)
	return ::org::gameplay3d::PhysicsCollisionShape_obj::hx_PhysicsCollisionShape_getType(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsCollisionShape_obj,getType,return )

::org::gameplay3d::PhysicsCollisionShape_Definition PhysicsCollisionShape_obj::box( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsCollisionShape","box",0xf28d74c6,"org.gameplay3d.PhysicsCollisionShape.box","org/gameplay3d/PhysicsCollisionShape.hx",19,0xdce36255)
	HX_STACK_LINE(19)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::PhysicsCollisionShape_Definition >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(19)
	Dynamic nativeObject = ::org::gameplay3d::PhysicsCollisionShape_obj::hx_PhysicsCollisionShape_static_box();		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(19)
	if (((nativeObject == null()))){
		HX_STACK_LINE(19)
		return null();
	}
	else{
		HX_STACK_LINE(19)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(19)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(19)
			::org::gameplay3d::PhysicsCollisionShape_Definition result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(19)
			if (((result == null()))){
				HX_STACK_LINE(19)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(19)
				::org::gameplay3d::PhysicsCollisionShape_Definition _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(19)
				result = _g;
				HX_STACK_LINE(19)
				ref->set(result);
			}
			HX_STACK_LINE(19)
			return result;
		}
		else{
			HX_STACK_LINE(19)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(19)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(19)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PhysicsCollisionShape_obj,box,return )

::org::gameplay3d::PhysicsCollisionShape_Definition PhysicsCollisionShape_obj::box_V3X2_Bool( ::org::gameplay3d::immutable::IVector3 extents,::org::gameplay3d::immutable::IVector3 center,hx::Null< bool >  __o_absolute){
bool absolute = __o_absolute.Default(false);
	HX_STACK_FRAME("org.gameplay3d.PhysicsCollisionShape","box_V3X2_Bool",0xbf748f99,"org.gameplay3d.PhysicsCollisionShape.box_V3X2_Bool","org/gameplay3d/PhysicsCollisionShape.hx",25,0xdce36255)
	HX_STACK_ARG(extents,"extents")
	HX_STACK_ARG(center,"center")
	HX_STACK_ARG(absolute,"absolute")
{
		HX_STACK_LINE(25)
		::Class classObj = hx::ClassOf< ::org::gameplay3d::PhysicsCollisionShape_Definition >();		HX_STACK_VAR(classObj,"classObj");
		HX_STACK_LINE(25)
		Dynamic nativeObject = ::org::gameplay3d::PhysicsCollisionShape_obj::hx_PhysicsCollisionShape_static_box_V3X2_Bool((  (((extents == null()))) ? Dynamic(null()) : Dynamic(extents->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((center == null()))) ? Dynamic(null()) : Dynamic(center->__Field(HX_CSTRING("nativeObject"),true)) ),absolute);		HX_STACK_VAR(nativeObject,"nativeObject");
		HX_STACK_LINE(25)
		if (((nativeObject == null()))){
			HX_STACK_LINE(25)
			return null();
		}
		else{
			HX_STACK_LINE(25)
			if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
				HX_STACK_LINE(25)
				::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
				HX_STACK_LINE(25)
				::org::gameplay3d::PhysicsCollisionShape_Definition result = ref->get();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(25)
				if (((result == null()))){
					HX_STACK_LINE(25)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
					HX_STACK_LINE(25)
					::org::gameplay3d::PhysicsCollisionShape_Definition _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(25)
					result = _g;
					HX_STACK_LINE(25)
					ref->set(result);
				}
				HX_STACK_LINE(25)
				return result;
			}
			else{
				HX_STACK_LINE(25)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
				HX_STACK_LINE(25)
				return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
			}
		}
		HX_STACK_LINE(25)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(PhysicsCollisionShape_obj,box_V3X2_Bool,return )

::org::gameplay3d::PhysicsCollisionShape_Definition PhysicsCollisionShape_obj::capsule( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsCollisionShape","capsule",0x7b6cc4e8,"org.gameplay3d.PhysicsCollisionShape.capsule","org/gameplay3d/PhysicsCollisionShape.hx",31,0xdce36255)
	HX_STACK_LINE(31)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::PhysicsCollisionShape_Definition >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(31)
	Dynamic nativeObject = ::org::gameplay3d::PhysicsCollisionShape_obj::hx_PhysicsCollisionShape_static_capsule();		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(31)
	if (((nativeObject == null()))){
		HX_STACK_LINE(31)
		return null();
	}
	else{
		HX_STACK_LINE(31)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(31)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(31)
			::org::gameplay3d::PhysicsCollisionShape_Definition result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(31)
			if (((result == null()))){
				HX_STACK_LINE(31)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(31)
				::org::gameplay3d::PhysicsCollisionShape_Definition _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(31)
				result = _g;
				HX_STACK_LINE(31)
				ref->set(result);
			}
			HX_STACK_LINE(31)
			return result;
		}
		else{
			HX_STACK_LINE(31)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(31)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(31)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PhysicsCollisionShape_obj,capsule,return )

::org::gameplay3d::PhysicsCollisionShape_Definition PhysicsCollisionShape_obj::capsule_FltX2_V3_Bool( Float radius,Float height,::org::gameplay3d::immutable::IVector3 center,hx::Null< bool >  __o_absolute){
bool absolute = __o_absolute.Default(false);
	HX_STACK_FRAME("org.gameplay3d.PhysicsCollisionShape","capsule_FltX2_V3_Bool",0xff2acd3e,"org.gameplay3d.PhysicsCollisionShape.capsule_FltX2_V3_Bool","org/gameplay3d/PhysicsCollisionShape.hx",37,0xdce36255)
	HX_STACK_ARG(radius,"radius")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(center,"center")
	HX_STACK_ARG(absolute,"absolute")
{
		HX_STACK_LINE(37)
		::Class classObj = hx::ClassOf< ::org::gameplay3d::PhysicsCollisionShape_Definition >();		HX_STACK_VAR(classObj,"classObj");
		HX_STACK_LINE(37)
		Dynamic nativeObject = ::org::gameplay3d::PhysicsCollisionShape_obj::hx_PhysicsCollisionShape_static_capsule_FltX2_V3_Bool(radius,height,(  (((center == null()))) ? Dynamic(null()) : Dynamic(center->__Field(HX_CSTRING("nativeObject"),true)) ),absolute);		HX_STACK_VAR(nativeObject,"nativeObject");
		HX_STACK_LINE(37)
		if (((nativeObject == null()))){
			HX_STACK_LINE(37)
			return null();
		}
		else{
			HX_STACK_LINE(37)
			if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
				HX_STACK_LINE(37)
				::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
				HX_STACK_LINE(37)
				::org::gameplay3d::PhysicsCollisionShape_Definition result = ref->get();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(37)
				if (((result == null()))){
					HX_STACK_LINE(37)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
					HX_STACK_LINE(37)
					::org::gameplay3d::PhysicsCollisionShape_Definition _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(37)
					result = _g;
					HX_STACK_LINE(37)
					ref->set(result);
				}
				HX_STACK_LINE(37)
				return result;
			}
			else{
				HX_STACK_LINE(37)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
				HX_STACK_LINE(37)
				return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
			}
		}
		HX_STACK_LINE(37)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(PhysicsCollisionShape_obj,capsule_FltX2_V3_Bool,return )

::org::gameplay3d::PhysicsCollisionShape_Definition PhysicsCollisionShape_obj::heightfield( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsCollisionShape","heightfield",0xc1fef12e,"org.gameplay3d.PhysicsCollisionShape.heightfield","org/gameplay3d/PhysicsCollisionShape.hx",49,0xdce36255)
	HX_STACK_LINE(49)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::PhysicsCollisionShape_Definition >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(49)
	Dynamic nativeObject = ::org::gameplay3d::PhysicsCollisionShape_obj::hx_PhysicsCollisionShape_static_heightfield();		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(49)
	if (((nativeObject == null()))){
		HX_STACK_LINE(49)
		return null();
	}
	else{
		HX_STACK_LINE(49)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(49)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(49)
			::org::gameplay3d::PhysicsCollisionShape_Definition result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(49)
			if (((result == null()))){
				HX_STACK_LINE(49)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(49)
				::org::gameplay3d::PhysicsCollisionShape_Definition _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(49)
				result = _g;
				HX_STACK_LINE(49)
				ref->set(result);
			}
			HX_STACK_LINE(49)
			return result;
		}
		else{
			HX_STACK_LINE(49)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(49)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(49)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PhysicsCollisionShape_obj,heightfield,return )

::org::gameplay3d::PhysicsCollisionShape_Definition PhysicsCollisionShape_obj::heightfield_HghtFld( ::org::gameplay3d::HeightField heightfield){
	HX_STACK_FRAME("org.gameplay3d.PhysicsCollisionShape","heightfield_HghtFld",0x644b49e2,"org.gameplay3d.PhysicsCollisionShape.heightfield_HghtFld","org/gameplay3d/PhysicsCollisionShape.hx",55,0xdce36255)
	HX_STACK_ARG(heightfield,"heightfield")
	HX_STACK_LINE(55)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::PhysicsCollisionShape_Definition >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(55)
	Dynamic nativeObject = ::org::gameplay3d::PhysicsCollisionShape_obj::hx_PhysicsCollisionShape_static_heightfield_HghtFld((  (((heightfield == null()))) ? Dynamic(null()) : Dynamic(heightfield->nativeObject) ));		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(55)
	if (((nativeObject == null()))){
		HX_STACK_LINE(55)
		return null();
	}
	else{
		HX_STACK_LINE(55)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(55)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(55)
			::org::gameplay3d::PhysicsCollisionShape_Definition result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(55)
			if (((result == null()))){
				HX_STACK_LINE(55)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(55)
				::org::gameplay3d::PhysicsCollisionShape_Definition _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(55)
				result = _g;
				HX_STACK_LINE(55)
				ref->set(result);
			}
			HX_STACK_LINE(55)
			return result;
		}
		else{
			HX_STACK_LINE(55)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(55)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(55)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PhysicsCollisionShape_obj,heightfield_HghtFld,return )

::org::gameplay3d::PhysicsCollisionShape_Definition PhysicsCollisionShape_obj::mesh( ::org::gameplay3d::Mesh mesh){
	HX_STACK_FRAME("org.gameplay3d.PhysicsCollisionShape","mesh",0x507676d2,"org.gameplay3d.PhysicsCollisionShape.mesh","org/gameplay3d/PhysicsCollisionShape.hx",61,0xdce36255)
	HX_STACK_ARG(mesh,"mesh")
	HX_STACK_LINE(61)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::PhysicsCollisionShape_Definition >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(61)
	Dynamic nativeObject = ::org::gameplay3d::PhysicsCollisionShape_obj::hx_PhysicsCollisionShape_static_mesh((  (((mesh == null()))) ? Dynamic(null()) : Dynamic(mesh->nativeObject) ));		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(61)
	if (((nativeObject == null()))){
		HX_STACK_LINE(61)
		return null();
	}
	else{
		HX_STACK_LINE(61)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(61)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(61)
			::org::gameplay3d::PhysicsCollisionShape_Definition result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(61)
			if (((result == null()))){
				HX_STACK_LINE(61)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(61)
				::org::gameplay3d::PhysicsCollisionShape_Definition _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(61)
				result = _g;
				HX_STACK_LINE(61)
				ref->set(result);
			}
			HX_STACK_LINE(61)
			return result;
		}
		else{
			HX_STACK_LINE(61)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(61)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(61)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PhysicsCollisionShape_obj,mesh,return )

::org::gameplay3d::PhysicsCollisionShape_Definition PhysicsCollisionShape_obj::sphere( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsCollisionShape","sphere",0xe8649f32,"org.gameplay3d.PhysicsCollisionShape.sphere","org/gameplay3d/PhysicsCollisionShape.hx",67,0xdce36255)
	HX_STACK_LINE(67)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::PhysicsCollisionShape_Definition >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(67)
	Dynamic nativeObject = ::org::gameplay3d::PhysicsCollisionShape_obj::hx_PhysicsCollisionShape_static_sphere();		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(67)
	if (((nativeObject == null()))){
		HX_STACK_LINE(67)
		return null();
	}
	else{
		HX_STACK_LINE(67)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(67)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(67)
			::org::gameplay3d::PhysicsCollisionShape_Definition result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(67)
			if (((result == null()))){
				HX_STACK_LINE(67)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(67)
				::org::gameplay3d::PhysicsCollisionShape_Definition _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(67)
				result = _g;
				HX_STACK_LINE(67)
				ref->set(result);
			}
			HX_STACK_LINE(67)
			return result;
		}
		else{
			HX_STACK_LINE(67)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(67)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(67)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PhysicsCollisionShape_obj,sphere,return )

::org::gameplay3d::PhysicsCollisionShape_Definition PhysicsCollisionShape_obj::sphere_Flt_V3_Bool( Float radius,::org::gameplay3d::immutable::IVector3 center,hx::Null< bool >  __o_absolute){
bool absolute = __o_absolute.Default(false);
	HX_STACK_FRAME("org.gameplay3d.PhysicsCollisionShape","sphere_Flt_V3_Bool",0xe8c03bee,"org.gameplay3d.PhysicsCollisionShape.sphere_Flt_V3_Bool","org/gameplay3d/PhysicsCollisionShape.hx",73,0xdce36255)
	HX_STACK_ARG(radius,"radius")
	HX_STACK_ARG(center,"center")
	HX_STACK_ARG(absolute,"absolute")
{
		HX_STACK_LINE(73)
		::Class classObj = hx::ClassOf< ::org::gameplay3d::PhysicsCollisionShape_Definition >();		HX_STACK_VAR(classObj,"classObj");
		HX_STACK_LINE(73)
		Dynamic nativeObject = ::org::gameplay3d::PhysicsCollisionShape_obj::hx_PhysicsCollisionShape_static_sphere_Flt_V3_Bool(radius,(  (((center == null()))) ? Dynamic(null()) : Dynamic(center->__Field(HX_CSTRING("nativeObject"),true)) ),absolute);		HX_STACK_VAR(nativeObject,"nativeObject");
		HX_STACK_LINE(73)
		if (((nativeObject == null()))){
			HX_STACK_LINE(73)
			return null();
		}
		else{
			HX_STACK_LINE(73)
			if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
				HX_STACK_LINE(73)
				::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
				HX_STACK_LINE(73)
				::org::gameplay3d::PhysicsCollisionShape_Definition result = ref->get();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(73)
				if (((result == null()))){
					HX_STACK_LINE(73)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
					HX_STACK_LINE(73)
					::org::gameplay3d::PhysicsCollisionShape_Definition _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(73)
					result = _g;
					HX_STACK_LINE(73)
					ref->set(result);
				}
				HX_STACK_LINE(73)
				return result;
			}
			else{
				HX_STACK_LINE(73)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
				HX_STACK_LINE(73)
				return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
			}
		}
		HX_STACK_LINE(73)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(PhysicsCollisionShape_obj,sphere_Flt_V3_Bool,return )

Dynamic PhysicsCollisionShape_obj::hx_PhysicsCollisionShape_static_box;

Dynamic PhysicsCollisionShape_obj::hx_PhysicsCollisionShape_static_box_V3X2_Bool;

Dynamic PhysicsCollisionShape_obj::hx_PhysicsCollisionShape_static_capsule;

Dynamic PhysicsCollisionShape_obj::hx_PhysicsCollisionShape_static_capsule_FltX2_V3_Bool;

Dynamic PhysicsCollisionShape_obj::hx_PhysicsCollisionShape_getType;

Dynamic PhysicsCollisionShape_obj::hx_PhysicsCollisionShape_static_heightfield;

Dynamic PhysicsCollisionShape_obj::hx_PhysicsCollisionShape_static_heightfield_HghtFld;

Dynamic PhysicsCollisionShape_obj::hx_PhysicsCollisionShape_static_mesh;

Dynamic PhysicsCollisionShape_obj::hx_PhysicsCollisionShape_static_sphere;

Dynamic PhysicsCollisionShape_obj::hx_PhysicsCollisionShape_static_sphere_Flt_V3_Bool;


PhysicsCollisionShape_obj::PhysicsCollisionShape_obj()
{
}

Dynamic PhysicsCollisionShape_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"box") ) { return box_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mesh") ) { return mesh_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sphere") ) { return sphere_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"capsule") ) { return capsule_dyn(); }
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"heightfield") ) { return heightfield_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"box_V3X2_Bool") ) { return box_V3X2_Bool_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"sphere_Flt_V3_Bool") ) { return sphere_Flt_V3_Bool_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"heightfield_HghtFld") ) { return heightfield_HghtFld_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"capsule_FltX2_V3_Bool") ) { return capsule_FltX2_V3_Bool_dyn(); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionShape_getType") ) { return hx_PhysicsCollisionShape_getType; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionShape_static_box") ) { return hx_PhysicsCollisionShape_static_box; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionShape_static_mesh") ) { return hx_PhysicsCollisionShape_static_mesh; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionShape_static_sphere") ) { return hx_PhysicsCollisionShape_static_sphere; }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionShape_static_capsule") ) { return hx_PhysicsCollisionShape_static_capsule; }
		break;
	case 43:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionShape_static_heightfield") ) { return hx_PhysicsCollisionShape_static_heightfield; }
		break;
	case 45:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionShape_static_box_V3X2_Bool") ) { return hx_PhysicsCollisionShape_static_box_V3X2_Bool; }
		break;
	case 50:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionShape_static_sphere_Flt_V3_Bool") ) { return hx_PhysicsCollisionShape_static_sphere_Flt_V3_Bool; }
		break;
	case 51:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionShape_static_heightfield_HghtFld") ) { return hx_PhysicsCollisionShape_static_heightfield_HghtFld; }
		break;
	case 53:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionShape_static_capsule_FltX2_V3_Bool") ) { return hx_PhysicsCollisionShape_static_capsule_FltX2_V3_Bool; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PhysicsCollisionShape_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 32:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionShape_getType") ) { hx_PhysicsCollisionShape_getType=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionShape_static_box") ) { hx_PhysicsCollisionShape_static_box=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionShape_static_mesh") ) { hx_PhysicsCollisionShape_static_mesh=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionShape_static_sphere") ) { hx_PhysicsCollisionShape_static_sphere=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionShape_static_capsule") ) { hx_PhysicsCollisionShape_static_capsule=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 43:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionShape_static_heightfield") ) { hx_PhysicsCollisionShape_static_heightfield=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 45:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionShape_static_box_V3X2_Bool") ) { hx_PhysicsCollisionShape_static_box_V3X2_Bool=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 50:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionShape_static_sphere_Flt_V3_Bool") ) { hx_PhysicsCollisionShape_static_sphere_Flt_V3_Bool=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 51:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionShape_static_heightfield_HghtFld") ) { hx_PhysicsCollisionShape_static_heightfield_HghtFld=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 53:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCollisionShape_static_capsule_FltX2_V3_Bool") ) { hx_PhysicsCollisionShape_static_capsule_FltX2_V3_Bool=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PhysicsCollisionShape_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("box"),
	HX_CSTRING("box_V3X2_Bool"),
	HX_CSTRING("capsule"),
	HX_CSTRING("capsule_FltX2_V3_Bool"),
	HX_CSTRING("heightfield"),
	HX_CSTRING("heightfield_HghtFld"),
	HX_CSTRING("mesh"),
	HX_CSTRING("sphere"),
	HX_CSTRING("sphere_Flt_V3_Bool"),
	HX_CSTRING("hx_PhysicsCollisionShape_static_box"),
	HX_CSTRING("hx_PhysicsCollisionShape_static_box_V3X2_Bool"),
	HX_CSTRING("hx_PhysicsCollisionShape_static_capsule"),
	HX_CSTRING("hx_PhysicsCollisionShape_static_capsule_FltX2_V3_Bool"),
	HX_CSTRING("hx_PhysicsCollisionShape_getType"),
	HX_CSTRING("hx_PhysicsCollisionShape_static_heightfield"),
	HX_CSTRING("hx_PhysicsCollisionShape_static_heightfield_HghtFld"),
	HX_CSTRING("hx_PhysicsCollisionShape_static_mesh"),
	HX_CSTRING("hx_PhysicsCollisionShape_static_sphere"),
	HX_CSTRING("hx_PhysicsCollisionShape_static_sphere_Flt_V3_Bool"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("getType"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PhysicsCollisionShape_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PhysicsCollisionShape_obj::hx_PhysicsCollisionShape_static_box,"hx_PhysicsCollisionShape_static_box");
	HX_MARK_MEMBER_NAME(PhysicsCollisionShape_obj::hx_PhysicsCollisionShape_static_box_V3X2_Bool,"hx_PhysicsCollisionShape_static_box_V3X2_Bool");
	HX_MARK_MEMBER_NAME(PhysicsCollisionShape_obj::hx_PhysicsCollisionShape_static_capsule,"hx_PhysicsCollisionShape_static_capsule");
	HX_MARK_MEMBER_NAME(PhysicsCollisionShape_obj::hx_PhysicsCollisionShape_static_capsule_FltX2_V3_Bool,"hx_PhysicsCollisionShape_static_capsule_FltX2_V3_Bool");
	HX_MARK_MEMBER_NAME(PhysicsCollisionShape_obj::hx_PhysicsCollisionShape_getType,"hx_PhysicsCollisionShape_getType");
	HX_MARK_MEMBER_NAME(PhysicsCollisionShape_obj::hx_PhysicsCollisionShape_static_heightfield,"hx_PhysicsCollisionShape_static_heightfield");
	HX_MARK_MEMBER_NAME(PhysicsCollisionShape_obj::hx_PhysicsCollisionShape_static_heightfield_HghtFld,"hx_PhysicsCollisionShape_static_heightfield_HghtFld");
	HX_MARK_MEMBER_NAME(PhysicsCollisionShape_obj::hx_PhysicsCollisionShape_static_mesh,"hx_PhysicsCollisionShape_static_mesh");
	HX_MARK_MEMBER_NAME(PhysicsCollisionShape_obj::hx_PhysicsCollisionShape_static_sphere,"hx_PhysicsCollisionShape_static_sphere");
	HX_MARK_MEMBER_NAME(PhysicsCollisionShape_obj::hx_PhysicsCollisionShape_static_sphere_Flt_V3_Bool,"hx_PhysicsCollisionShape_static_sphere_Flt_V3_Bool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PhysicsCollisionShape_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PhysicsCollisionShape_obj::hx_PhysicsCollisionShape_static_box,"hx_PhysicsCollisionShape_static_box");
	HX_VISIT_MEMBER_NAME(PhysicsCollisionShape_obj::hx_PhysicsCollisionShape_static_box_V3X2_Bool,"hx_PhysicsCollisionShape_static_box_V3X2_Bool");
	HX_VISIT_MEMBER_NAME(PhysicsCollisionShape_obj::hx_PhysicsCollisionShape_static_capsule,"hx_PhysicsCollisionShape_static_capsule");
	HX_VISIT_MEMBER_NAME(PhysicsCollisionShape_obj::hx_PhysicsCollisionShape_static_capsule_FltX2_V3_Bool,"hx_PhysicsCollisionShape_static_capsule_FltX2_V3_Bool");
	HX_VISIT_MEMBER_NAME(PhysicsCollisionShape_obj::hx_PhysicsCollisionShape_getType,"hx_PhysicsCollisionShape_getType");
	HX_VISIT_MEMBER_NAME(PhysicsCollisionShape_obj::hx_PhysicsCollisionShape_static_heightfield,"hx_PhysicsCollisionShape_static_heightfield");
	HX_VISIT_MEMBER_NAME(PhysicsCollisionShape_obj::hx_PhysicsCollisionShape_static_heightfield_HghtFld,"hx_PhysicsCollisionShape_static_heightfield_HghtFld");
	HX_VISIT_MEMBER_NAME(PhysicsCollisionShape_obj::hx_PhysicsCollisionShape_static_mesh,"hx_PhysicsCollisionShape_static_mesh");
	HX_VISIT_MEMBER_NAME(PhysicsCollisionShape_obj::hx_PhysicsCollisionShape_static_sphere,"hx_PhysicsCollisionShape_static_sphere");
	HX_VISIT_MEMBER_NAME(PhysicsCollisionShape_obj::hx_PhysicsCollisionShape_static_sphere_Flt_V3_Bool,"hx_PhysicsCollisionShape_static_sphere_Flt_V3_Bool");
};

#endif

Class PhysicsCollisionShape_obj::__mClass;

void PhysicsCollisionShape_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.PhysicsCollisionShape"), hx::TCanCast< PhysicsCollisionShape_obj> ,sStaticFields,sMemberFields,
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

void PhysicsCollisionShape_obj::__boot()
{
	hx_PhysicsCollisionShape_static_box= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsCollisionShape >(),HX_CSTRING("static_box"),(int)0);
	hx_PhysicsCollisionShape_static_box_V3X2_Bool= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsCollisionShape >(),HX_CSTRING("static_box_V3X2_Bool"),(int)3);
	hx_PhysicsCollisionShape_static_capsule= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsCollisionShape >(),HX_CSTRING("static_capsule"),(int)0);
	hx_PhysicsCollisionShape_static_capsule_FltX2_V3_Bool= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsCollisionShape >(),HX_CSTRING("static_capsule_FltX2_V3_Bool"),(int)4);
	hx_PhysicsCollisionShape_getType= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsCollisionShape >(),HX_CSTRING("getType"),(int)1);
	hx_PhysicsCollisionShape_static_heightfield= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsCollisionShape >(),HX_CSTRING("static_heightfield"),(int)0);
	hx_PhysicsCollisionShape_static_heightfield_HghtFld= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsCollisionShape >(),HX_CSTRING("static_heightfield_HghtFld"),(int)1);
	hx_PhysicsCollisionShape_static_mesh= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsCollisionShape >(),HX_CSTRING("static_mesh"),(int)1);
	hx_PhysicsCollisionShape_static_sphere= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsCollisionShape >(),HX_CSTRING("static_sphere"),(int)0);
	hx_PhysicsCollisionShape_static_sphere_Flt_V3_Bool= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsCollisionShape >(),HX_CSTRING("static_sphere_Flt_V3_Bool"),(int)3);
}

} // end namespace org
} // end namespace gameplay3d
