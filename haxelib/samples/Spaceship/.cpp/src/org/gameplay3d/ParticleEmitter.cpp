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
#ifndef INCLUDED_org_gameplay3d_AnimationTarget
#include <org/gameplay3d/AnimationTarget.h>
#endif
#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Node
#include <org/gameplay3d/Node.h>
#endif
#ifndef INCLUDED_org_gameplay3d_ParticleEmitter
#include <org/gameplay3d/ParticleEmitter.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Properties
#include <org/gameplay3d/Properties.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Rectangle
#include <org/gameplay3d/Rectangle.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Ref
#include <org/gameplay3d/Ref.h>
#endif
#ifndef INCLUDED_org_gameplay3d_ScriptTarget
#include <org/gameplay3d/ScriptTarget.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Transform
#include <org/gameplay3d/Transform.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Vector3
#include <org/gameplay3d/Vector3.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Vector4
#include <org/gameplay3d/Vector4.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IRectangle
#include <org/gameplay3d/immutable/IRectangle.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IVector3
#include <org/gameplay3d/immutable/IVector3.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IVector4
#include <org/gameplay3d/immutable/IVector4.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_ConversionTools
#include <org/gameplay3d/intern/ConversionTools.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_INativeBinding
#include <org/gameplay3d/intern/INativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_NativeBinding
#include <org/gameplay3d/intern/NativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_impl_AnimationTarget_ScriptTarget
#include <org/gameplay3d/intern/impl/AnimationTarget_ScriptTarget.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_NativeInterface
#include <org/gameplay3d/util/NativeInterface.h>
#endif
namespace org{
namespace gameplay3d{

Void ParticleEmitter_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","new",0xfd1b0b2d,"org.gameplay3d.ParticleEmitter.new","org/gameplay3d/ParticleEmitter.hx",14,0x3e068e83)
HX_STACK_THIS(this)
HX_STACK_ARG(nativeObjectInitializer,"nativeObjectInitializer")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(14)
	super::__construct(nativeObjectInitializer,nativeObjectInitializerParams);
}
;
	return null();
}

//ParticleEmitter_obj::~ParticleEmitter_obj() { }

Dynamic ParticleEmitter_obj::__CreateEmpty() { return  new ParticleEmitter_obj; }
hx::ObjectPtr< ParticleEmitter_obj > ParticleEmitter_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< ParticleEmitter_obj > result = new ParticleEmitter_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic ParticleEmitter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ParticleEmitter_obj > result = new ParticleEmitter_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *ParticleEmitter_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::intern::INativeBinding_obj)) return operator ::org::gameplay3d::intern::INativeBinding_obj *();
	if (inType==typeid( ::org::gameplay3d::Ref_obj)) return operator ::org::gameplay3d::Ref_obj *();
	return super::__ToInterface(inType);
}

Void ParticleEmitter_obj::draw( ){
{
		HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","draw",0x73fc6497,"org.gameplay3d.ParticleEmitter.draw","org/gameplay3d/ParticleEmitter.hx",54,0x3e068e83)
		HX_STACK_THIS(this)
		HX_STACK_LINE(54)
		::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_draw(this->nativeObject);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ParticleEmitter_obj,draw,(void))

Void ParticleEmitter_obj::emitOnce( int particleCount){
{
		HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","emitOnce",0x3bf9eb87,"org.gameplay3d.ParticleEmitter.emitOnce","org/gameplay3d/ParticleEmitter.hx",60,0x3e068e83)
		HX_STACK_THIS(this)
		HX_STACK_ARG(particleCount,"particleCount")
		HX_STACK_LINE(60)
		::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_emitOnce(this->nativeObject,particleCount);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ParticleEmitter_obj,emitOnce,(void))

::org::gameplay3d::immutable::IVector3 ParticleEmitter_obj::getAcceleration( ){
	HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","getAcceleration",0xc0261043,"org.gameplay3d.ParticleEmitter.getAcceleration","org/gameplay3d/ParticleEmitter.hx",66,0x3e068e83)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_acceleration == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(66)
			Dynamic nativeObject = ::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_getAcceleration(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
			HX_STACK_LINE(29)
			if (((nativeObject == null()))){
				HX_STACK_LINE(29)
				_g1 = null();
			}
			else{
				HX_STACK_LINE(29)
				if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
					HX_STACK_LINE(29)
					::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
					HX_STACK_LINE(29)
					::org::gameplay3d::Vector3 result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Vector3 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(29)
						result = _g;
						HX_STACK_LINE(29)
						ref->set(result);
					}
					HX_STACK_LINE(29)
					_g1 = result;
				}
				else{
					HX_STACK_LINE(29)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
					HX_STACK_LINE(29)
					_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
				}
			}
		}
		HX_STACK_LINE(29)
		return this->_acceleration = _g1;
	}
	else{
		HX_STACK_LINE(66)
		Dynamic _g2 = ::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_getAcceleration(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g3 = this->_acceleration->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_acceleration = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ParticleEmitter_obj,getAcceleration,return )

::org::gameplay3d::immutable::IVector3 ParticleEmitter_obj::getAccelerationVariance( ){
	HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","getAccelerationVariance",0xe4ac6cd4,"org.gameplay3d.ParticleEmitter.getAccelerationVariance","org/gameplay3d/ParticleEmitter.hx",72,0x3e068e83)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_accelerationVariance == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(72)
			Dynamic nativeObject = ::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_getAccelerationVariance(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
			HX_STACK_LINE(29)
			if (((nativeObject == null()))){
				HX_STACK_LINE(29)
				_g1 = null();
			}
			else{
				HX_STACK_LINE(29)
				if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
					HX_STACK_LINE(29)
					::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
					HX_STACK_LINE(29)
					::org::gameplay3d::Vector3 result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Vector3 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(29)
						result = _g;
						HX_STACK_LINE(29)
						ref->set(result);
					}
					HX_STACK_LINE(29)
					_g1 = result;
				}
				else{
					HX_STACK_LINE(29)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
					HX_STACK_LINE(29)
					_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
				}
			}
		}
		HX_STACK_LINE(29)
		return this->_accelerationVariance = _g1;
	}
	else{
		HX_STACK_LINE(72)
		Dynamic _g2 = ::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_getAccelerationVariance(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g3 = this->_accelerationVariance->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_accelerationVariance = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ParticleEmitter_obj,getAccelerationVariance,return )

::org::gameplay3d::immutable::IVector4 ParticleEmitter_obj::getColorEnd( ){
	HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","getColorEnd",0xe8bb1cbb,"org.gameplay3d.ParticleEmitter.getColorEnd","org/gameplay3d/ParticleEmitter.hx",78,0x3e068e83)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_colorEnd == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector4 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector4 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(78)
			Dynamic nativeObject = ::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_getColorEnd(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
			HX_STACK_LINE(29)
			if (((nativeObject == null()))){
				HX_STACK_LINE(29)
				_g1 = null();
			}
			else{
				HX_STACK_LINE(29)
				if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
					HX_STACK_LINE(29)
					::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
					HX_STACK_LINE(29)
					::org::gameplay3d::Vector4 result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Vector4 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(29)
						result = _g;
						HX_STACK_LINE(29)
						ref->set(result);
					}
					HX_STACK_LINE(29)
					_g1 = result;
				}
				else{
					HX_STACK_LINE(29)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
					HX_STACK_LINE(29)
					_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
				}
			}
		}
		HX_STACK_LINE(29)
		return this->_colorEnd = _g1;
	}
	else{
		HX_STACK_LINE(78)
		Dynamic _g2 = ::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_getColorEnd(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector4 _g3 = this->_colorEnd->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_colorEnd = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ParticleEmitter_obj,getColorEnd,return )

::org::gameplay3d::immutable::IVector4 ParticleEmitter_obj::getColorEndVariance( ){
	HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","getColorEndVariance",0x5c56b14c,"org.gameplay3d.ParticleEmitter.getColorEndVariance","org/gameplay3d/ParticleEmitter.hx",84,0x3e068e83)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_colorEndVariance == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector4 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector4 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(84)
			Dynamic nativeObject = ::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_getColorEndVariance(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
			HX_STACK_LINE(29)
			if (((nativeObject == null()))){
				HX_STACK_LINE(29)
				_g1 = null();
			}
			else{
				HX_STACK_LINE(29)
				if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
					HX_STACK_LINE(29)
					::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
					HX_STACK_LINE(29)
					::org::gameplay3d::Vector4 result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Vector4 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(29)
						result = _g;
						HX_STACK_LINE(29)
						ref->set(result);
					}
					HX_STACK_LINE(29)
					_g1 = result;
				}
				else{
					HX_STACK_LINE(29)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
					HX_STACK_LINE(29)
					_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
				}
			}
		}
		HX_STACK_LINE(29)
		return this->_colorEndVariance = _g1;
	}
	else{
		HX_STACK_LINE(84)
		Dynamic _g2 = ::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_getColorEndVariance(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector4 _g3 = this->_colorEndVariance->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_colorEndVariance = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ParticleEmitter_obj,getColorEndVariance,return )

::org::gameplay3d::immutable::IVector4 ParticleEmitter_obj::getColorStart( ){
	HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","getColorStart",0xf6d98542,"org.gameplay3d.ParticleEmitter.getColorStart","org/gameplay3d/ParticleEmitter.hx",90,0x3e068e83)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_colorStart == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector4 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector4 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(90)
			Dynamic nativeObject = ::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_getColorStart(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
			HX_STACK_LINE(29)
			if (((nativeObject == null()))){
				HX_STACK_LINE(29)
				_g1 = null();
			}
			else{
				HX_STACK_LINE(29)
				if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
					HX_STACK_LINE(29)
					::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
					HX_STACK_LINE(29)
					::org::gameplay3d::Vector4 result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Vector4 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(29)
						result = _g;
						HX_STACK_LINE(29)
						ref->set(result);
					}
					HX_STACK_LINE(29)
					_g1 = result;
				}
				else{
					HX_STACK_LINE(29)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
					HX_STACK_LINE(29)
					_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
				}
			}
		}
		HX_STACK_LINE(29)
		return this->_colorStart = _g1;
	}
	else{
		HX_STACK_LINE(90)
		Dynamic _g2 = ::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_getColorStart(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector4 _g3 = this->_colorStart->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_colorStart = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ParticleEmitter_obj,getColorStart,return )

::org::gameplay3d::immutable::IVector4 ParticleEmitter_obj::getColorStartVariance( ){
	HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","getColorStartVariance",0x086b78d3,"org.gameplay3d.ParticleEmitter.getColorStartVariance","org/gameplay3d/ParticleEmitter.hx",96,0x3e068e83)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_colorStartVariance == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector4 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector4 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(96)
			Dynamic nativeObject = ::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_getColorStartVariance(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
			HX_STACK_LINE(29)
			if (((nativeObject == null()))){
				HX_STACK_LINE(29)
				_g1 = null();
			}
			else{
				HX_STACK_LINE(29)
				if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
					HX_STACK_LINE(29)
					::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
					HX_STACK_LINE(29)
					::org::gameplay3d::Vector4 result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Vector4 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(29)
						result = _g;
						HX_STACK_LINE(29)
						ref->set(result);
					}
					HX_STACK_LINE(29)
					_g1 = result;
				}
				else{
					HX_STACK_LINE(29)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
					HX_STACK_LINE(29)
					_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
				}
			}
		}
		HX_STACK_LINE(29)
		return this->_colorStartVariance = _g1;
	}
	else{
		HX_STACK_LINE(96)
		Dynamic _g2 = ::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_getColorStartVariance(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector4 _g3 = this->_colorStartVariance->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_colorStartVariance = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ParticleEmitter_obj,getColorStartVariance,return )

int ParticleEmitter_obj::getEmissionRate( ){
	HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","getEmissionRate",0x4421a50a,"org.gameplay3d.ParticleEmitter.getEmissionRate","org/gameplay3d/ParticleEmitter.hx",102,0x3e068e83)
	HX_STACK_THIS(this)
	HX_STACK_LINE(102)
	return ::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_getEmissionRate(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(ParticleEmitter_obj,getEmissionRate,return )

int ParticleEmitter_obj::getEnergyMax( ){
	HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","getEnergyMax",0x0487e6d9,"org.gameplay3d.ParticleEmitter.getEnergyMax","org/gameplay3d/ParticleEmitter.hx",108,0x3e068e83)
	HX_STACK_THIS(this)
	HX_STACK_LINE(108)
	return ::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_getEnergyMax(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(ParticleEmitter_obj,getEnergyMax,return )

int ParticleEmitter_obj::getEnergyMin( ){
	HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","getEnergyMin",0x0487edc7,"org.gameplay3d.ParticleEmitter.getEnergyMin","org/gameplay3d/ParticleEmitter.hx",114,0x3e068e83)
	HX_STACK_THIS(this)
	HX_STACK_LINE(114)
	return ::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_getEnergyMin(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(ParticleEmitter_obj,getEnergyMin,return )

::org::gameplay3d::Node ParticleEmitter_obj::getNode( ){
	HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","getNode",0xce9ddf05,"org.gameplay3d.ParticleEmitter.getNode","org/gameplay3d/ParticleEmitter.hx",120,0x3e068e83)
	HX_STACK_THIS(this)
	HX_STACK_LINE(120)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Node >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(120)
	Dynamic nativeObject = ::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_getNode(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(120)
	if (((nativeObject == null()))){
		HX_STACK_LINE(120)
		return null();
	}
	else{
		HX_STACK_LINE(120)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(120)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(120)
			::org::gameplay3d::Node result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(120)
			if (((result == null()))){
				HX_STACK_LINE(120)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(120)
				::org::gameplay3d::Node _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(120)
				result = _g;
				HX_STACK_LINE(120)
				ref->set(result);
			}
			HX_STACK_LINE(120)
			return result;
		}
		else{
			HX_STACK_LINE(120)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(120)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(120)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ParticleEmitter_obj,getNode,return )

int ParticleEmitter_obj::getParticlesCount( ){
	HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","getParticlesCount",0x06b8c0e5,"org.gameplay3d.ParticleEmitter.getParticlesCount","org/gameplay3d/ParticleEmitter.hx",126,0x3e068e83)
	HX_STACK_THIS(this)
	HX_STACK_LINE(126)
	return ::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_getParticlesCount(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(ParticleEmitter_obj,getParticlesCount,return )

::org::gameplay3d::immutable::IVector3 ParticleEmitter_obj::getPosition( ){
	HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","getPosition",0x29d0b32c,"org.gameplay3d.ParticleEmitter.getPosition","org/gameplay3d/ParticleEmitter.hx",132,0x3e068e83)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_position == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(132)
			Dynamic nativeObject = ::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_getPosition(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
			HX_STACK_LINE(29)
			if (((nativeObject == null()))){
				HX_STACK_LINE(29)
				_g1 = null();
			}
			else{
				HX_STACK_LINE(29)
				if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
					HX_STACK_LINE(29)
					::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
					HX_STACK_LINE(29)
					::org::gameplay3d::Vector3 result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Vector3 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(29)
						result = _g;
						HX_STACK_LINE(29)
						ref->set(result);
					}
					HX_STACK_LINE(29)
					_g1 = result;
				}
				else{
					HX_STACK_LINE(29)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
					HX_STACK_LINE(29)
					_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
				}
			}
		}
		HX_STACK_LINE(29)
		return this->_position = _g1;
	}
	else{
		HX_STACK_LINE(132)
		Dynamic _g2 = ::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_getPosition(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g3 = this->_position->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_position = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ParticleEmitter_obj,getPosition,return )

::org::gameplay3d::immutable::IVector3 ParticleEmitter_obj::getPositionVariance( ){
	HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","getPositionVariance",0xca81a0bd,"org.gameplay3d.ParticleEmitter.getPositionVariance","org/gameplay3d/ParticleEmitter.hx",138,0x3e068e83)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_positionVariance == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(138)
			Dynamic nativeObject = ::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_getPositionVariance(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
			HX_STACK_LINE(29)
			if (((nativeObject == null()))){
				HX_STACK_LINE(29)
				_g1 = null();
			}
			else{
				HX_STACK_LINE(29)
				if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
					HX_STACK_LINE(29)
					::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
					HX_STACK_LINE(29)
					::org::gameplay3d::Vector3 result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Vector3 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(29)
						result = _g;
						HX_STACK_LINE(29)
						ref->set(result);
					}
					HX_STACK_LINE(29)
					_g1 = result;
				}
				else{
					HX_STACK_LINE(29)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
					HX_STACK_LINE(29)
					_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
				}
			}
		}
		HX_STACK_LINE(29)
		return this->_positionVariance = _g1;
	}
	else{
		HX_STACK_LINE(138)
		Dynamic _g2 = ::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_getPositionVariance(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g3 = this->_positionVariance->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_positionVariance = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ParticleEmitter_obj,getPositionVariance,return )

::org::gameplay3d::immutable::IVector3 ParticleEmitter_obj::getRotationAxis( ){
	HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","getRotationAxis",0x38d80d02,"org.gameplay3d.ParticleEmitter.getRotationAxis","org/gameplay3d/ParticleEmitter.hx",144,0x3e068e83)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_rotationAxis == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(144)
			Dynamic nativeObject = ::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_getRotationAxis(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
			HX_STACK_LINE(29)
			if (((nativeObject == null()))){
				HX_STACK_LINE(29)
				_g1 = null();
			}
			else{
				HX_STACK_LINE(29)
				if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
					HX_STACK_LINE(29)
					::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
					HX_STACK_LINE(29)
					::org::gameplay3d::Vector3 result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Vector3 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(29)
						result = _g;
						HX_STACK_LINE(29)
						ref->set(result);
					}
					HX_STACK_LINE(29)
					_g1 = result;
				}
				else{
					HX_STACK_LINE(29)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
					HX_STACK_LINE(29)
					_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
				}
			}
		}
		HX_STACK_LINE(29)
		return this->_rotationAxis = _g1;
	}
	else{
		HX_STACK_LINE(144)
		Dynamic _g2 = ::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_getRotationAxis(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g3 = this->_rotationAxis->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_rotationAxis = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ParticleEmitter_obj,getRotationAxis,return )

::org::gameplay3d::immutable::IVector3 ParticleEmitter_obj::getRotationAxisVariance( ){
	HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","getRotationAxisVariance",0xfbd7c093,"org.gameplay3d.ParticleEmitter.getRotationAxisVariance","org/gameplay3d/ParticleEmitter.hx",150,0x3e068e83)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_rotationAxisVariance == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(150)
			Dynamic nativeObject = ::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_getRotationAxisVariance(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
			HX_STACK_LINE(29)
			if (((nativeObject == null()))){
				HX_STACK_LINE(29)
				_g1 = null();
			}
			else{
				HX_STACK_LINE(29)
				if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
					HX_STACK_LINE(29)
					::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
					HX_STACK_LINE(29)
					::org::gameplay3d::Vector3 result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Vector3 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(29)
						result = _g;
						HX_STACK_LINE(29)
						ref->set(result);
					}
					HX_STACK_LINE(29)
					_g1 = result;
				}
				else{
					HX_STACK_LINE(29)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
					HX_STACK_LINE(29)
					_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
				}
			}
		}
		HX_STACK_LINE(29)
		return this->_rotationAxisVariance = _g1;
	}
	else{
		HX_STACK_LINE(150)
		Dynamic _g2 = ::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_getRotationAxisVariance(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g3 = this->_rotationAxisVariance->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_rotationAxisVariance = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ParticleEmitter_obj,getRotationAxisVariance,return )

Float ParticleEmitter_obj::getRotationPerParticleSpeedMax( ){
	HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","getRotationPerParticleSpeedMax",0x367c297f,"org.gameplay3d.ParticleEmitter.getRotationPerParticleSpeedMax","org/gameplay3d/ParticleEmitter.hx",156,0x3e068e83)
	HX_STACK_THIS(this)
	HX_STACK_LINE(156)
	return ::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_getRotationPerParticleSpeedMax(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(ParticleEmitter_obj,getRotationPerParticleSpeedMax,return )

Float ParticleEmitter_obj::getRotationPerParticleSpeedMin( ){
	HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","getRotationPerParticleSpeedMin",0x367c306d,"org.gameplay3d.ParticleEmitter.getRotationPerParticleSpeedMin","org/gameplay3d/ParticleEmitter.hx",162,0x3e068e83)
	HX_STACK_THIS(this)
	HX_STACK_LINE(162)
	return ::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_getRotationPerParticleSpeedMin(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(ParticleEmitter_obj,getRotationPerParticleSpeedMin,return )

Float ParticleEmitter_obj::getRotationSpeedMax( ){
	HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","getRotationSpeedMax",0x335a8e3e,"org.gameplay3d.ParticleEmitter.getRotationSpeedMax","org/gameplay3d/ParticleEmitter.hx",168,0x3e068e83)
	HX_STACK_THIS(this)
	HX_STACK_LINE(168)
	return ::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_getRotationSpeedMax(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(ParticleEmitter_obj,getRotationSpeedMax,return )

Float ParticleEmitter_obj::getRotationSpeedMin( ){
	HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","getRotationSpeedMin",0x335a952c,"org.gameplay3d.ParticleEmitter.getRotationSpeedMin","org/gameplay3d/ParticleEmitter.hx",174,0x3e068e83)
	HX_STACK_THIS(this)
	HX_STACK_LINE(174)
	return ::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_getRotationSpeedMin(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(ParticleEmitter_obj,getRotationSpeedMin,return )

Float ParticleEmitter_obj::getSizeEndMax( ){
	HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","getSizeEndMax",0x0de3ee6d,"org.gameplay3d.ParticleEmitter.getSizeEndMax","org/gameplay3d/ParticleEmitter.hx",180,0x3e068e83)
	HX_STACK_THIS(this)
	HX_STACK_LINE(180)
	return ::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_getSizeEndMax(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(ParticleEmitter_obj,getSizeEndMax,return )

Float ParticleEmitter_obj::getSizeEndMin( ){
	HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","getSizeEndMin",0x0de3f55b,"org.gameplay3d.ParticleEmitter.getSizeEndMin","org/gameplay3d/ParticleEmitter.hx",186,0x3e068e83)
	HX_STACK_THIS(this)
	HX_STACK_LINE(186)
	return ::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_getSizeEndMin(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(ParticleEmitter_obj,getSizeEndMin,return )

Float ParticleEmitter_obj::getSizeStartMax( ){
	HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","getSizeStartMax",0x83014d46,"org.gameplay3d.ParticleEmitter.getSizeStartMax","org/gameplay3d/ParticleEmitter.hx",192,0x3e068e83)
	HX_STACK_THIS(this)
	HX_STACK_LINE(192)
	return ::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_getSizeStartMax(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(ParticleEmitter_obj,getSizeStartMax,return )

Float ParticleEmitter_obj::getSizeStartMin( ){
	HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","getSizeStartMin",0x83015434,"org.gameplay3d.ParticleEmitter.getSizeStartMin","org/gameplay3d/ParticleEmitter.hx",198,0x3e068e83)
	HX_STACK_THIS(this)
	HX_STACK_LINE(198)
	return ::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_getSizeStartMin(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(ParticleEmitter_obj,getSizeStartMin,return )

int ParticleEmitter_obj::getSpriteFrameDuration( ){
	HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","getSpriteFrameDuration",0xf94293b9,"org.gameplay3d.ParticleEmitter.getSpriteFrameDuration","org/gameplay3d/ParticleEmitter.hx",204,0x3e068e83)
	HX_STACK_THIS(this)
	HX_STACK_LINE(204)
	return ::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_getSpriteFrameDuration(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(ParticleEmitter_obj,getSpriteFrameDuration,return )

int ParticleEmitter_obj::getSpriteFrameRandomOffset( ){
	HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","getSpriteFrameRandomOffset",0x92e82cdb,"org.gameplay3d.ParticleEmitter.getSpriteFrameRandomOffset","org/gameplay3d/ParticleEmitter.hx",210,0x3e068e83)
	HX_STACK_THIS(this)
	HX_STACK_LINE(210)
	return ::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_getSpriteFrameRandomOffset(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(ParticleEmitter_obj,getSpriteFrameRandomOffset,return )

::org::gameplay3d::immutable::IVector3 ParticleEmitter_obj::getVelocity( ){
	HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","getVelocity",0x7dd414a0,"org.gameplay3d.ParticleEmitter.getVelocity","org/gameplay3d/ParticleEmitter.hx",222,0x3e068e83)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_velocity == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(222)
			Dynamic nativeObject = ::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_getVelocity(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
			HX_STACK_LINE(29)
			if (((nativeObject == null()))){
				HX_STACK_LINE(29)
				_g1 = null();
			}
			else{
				HX_STACK_LINE(29)
				if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
					HX_STACK_LINE(29)
					::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
					HX_STACK_LINE(29)
					::org::gameplay3d::Vector3 result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Vector3 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(29)
						result = _g;
						HX_STACK_LINE(29)
						ref->set(result);
					}
					HX_STACK_LINE(29)
					_g1 = result;
				}
				else{
					HX_STACK_LINE(29)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
					HX_STACK_LINE(29)
					_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
				}
			}
		}
		HX_STACK_LINE(29)
		return this->_velocity = _g1;
	}
	else{
		HX_STACK_LINE(222)
		Dynamic _g2 = ::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_getVelocity(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g3 = this->_velocity->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_velocity = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ParticleEmitter_obj,getVelocity,return )

::org::gameplay3d::immutable::IVector3 ParticleEmitter_obj::getVelocityVariance( ){
	HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","getVelocityVariance",0x67b19631,"org.gameplay3d.ParticleEmitter.getVelocityVariance","org/gameplay3d/ParticleEmitter.hx",228,0x3e068e83)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_velocityVariance == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(228)
			Dynamic nativeObject = ::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_getVelocityVariance(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
			HX_STACK_LINE(29)
			if (((nativeObject == null()))){
				HX_STACK_LINE(29)
				_g1 = null();
			}
			else{
				HX_STACK_LINE(29)
				if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
					HX_STACK_LINE(29)
					::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
					HX_STACK_LINE(29)
					::org::gameplay3d::Vector3 result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Vector3 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(29)
						result = _g;
						HX_STACK_LINE(29)
						ref->set(result);
					}
					HX_STACK_LINE(29)
					_g1 = result;
				}
				else{
					HX_STACK_LINE(29)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
					HX_STACK_LINE(29)
					_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
				}
			}
		}
		HX_STACK_LINE(29)
		return this->_velocityVariance = _g1;
	}
	else{
		HX_STACK_LINE(228)
		Dynamic _g2 = ::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_getVelocityVariance(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g3 = this->_velocityVariance->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_velocityVariance = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ParticleEmitter_obj,getVelocityVariance,return )

bool ParticleEmitter_obj::isActive( ){
	HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","isActive",0x6a9f5b63,"org.gameplay3d.ParticleEmitter.isActive","org/gameplay3d/ParticleEmitter.hx",234,0x3e068e83)
	HX_STACK_THIS(this)
	HX_STACK_LINE(234)
	return ::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_isActive(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(ParticleEmitter_obj,isActive,return )

bool ParticleEmitter_obj::isEllipsoid( ){
	HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","isEllipsoid",0xc1a9ad46,"org.gameplay3d.ParticleEmitter.isEllipsoid","org/gameplay3d/ParticleEmitter.hx",240,0x3e068e83)
	HX_STACK_THIS(this)
	HX_STACK_LINE(240)
	return ::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_isEllipsoid(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(ParticleEmitter_obj,isEllipsoid,return )

bool ParticleEmitter_obj::isSpriteAnimated( ){
	HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","isSpriteAnimated",0x9ed49665,"org.gameplay3d.ParticleEmitter.isSpriteAnimated","org/gameplay3d/ParticleEmitter.hx",246,0x3e068e83)
	HX_STACK_THIS(this)
	HX_STACK_LINE(246)
	return ::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_isSpriteAnimated(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(ParticleEmitter_obj,isSpriteAnimated,return )

bool ParticleEmitter_obj::isSpriteLooped( ){
	HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","isSpriteLooped",0xaff7af05,"org.gameplay3d.ParticleEmitter.isSpriteLooped","org/gameplay3d/ParticleEmitter.hx",252,0x3e068e83)
	HX_STACK_THIS(this)
	HX_STACK_LINE(252)
	return ::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_isSpriteLooped(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(ParticleEmitter_obj,isSpriteLooped,return )

bool ParticleEmitter_obj::isStarted( ){
	HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","isStarted",0xaeb87904,"org.gameplay3d.ParticleEmitter.isStarted","org/gameplay3d/ParticleEmitter.hx",258,0x3e068e83)
	HX_STACK_THIS(this)
	HX_STACK_LINE(258)
	return ::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_isStarted(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(ParticleEmitter_obj,isStarted,return )

Void ParticleEmitter_obj::setAcceleration( ::org::gameplay3d::immutable::IVector3 acceleration,::org::gameplay3d::immutable::IVector3 accelerationVariance){
{
		HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","setAcceleration",0xbbf18d4f,"org.gameplay3d.ParticleEmitter.setAcceleration","org/gameplay3d/ParticleEmitter.hx",264,0x3e068e83)
		HX_STACK_THIS(this)
		HX_STACK_ARG(acceleration,"acceleration")
		HX_STACK_ARG(accelerationVariance,"accelerationVariance")
		HX_STACK_LINE(264)
		::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_setAcceleration(this->nativeObject,(  (((acceleration == null()))) ? Dynamic(null()) : Dynamic(acceleration->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((accelerationVariance == null()))) ? Dynamic(null()) : Dynamic(accelerationVariance->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ParticleEmitter_obj,setAcceleration,(void))

Void ParticleEmitter_obj::setColor( ::org::gameplay3d::immutable::IVector4 start,::org::gameplay3d::immutable::IVector4 startVariance,::org::gameplay3d::immutable::IVector4 end,::org::gameplay3d::immutable::IVector4 endVariance){
{
		HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","setColor",0x54805874,"org.gameplay3d.ParticleEmitter.setColor","org/gameplay3d/ParticleEmitter.hx",270,0x3e068e83)
		HX_STACK_THIS(this)
		HX_STACK_ARG(start,"start")
		HX_STACK_ARG(startVariance,"startVariance")
		HX_STACK_ARG(end,"end")
		HX_STACK_ARG(endVariance,"endVariance")
		HX_STACK_LINE(270)
		::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_setColor(this->nativeObject,(  (((start == null()))) ? Dynamic(null()) : Dynamic(start->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((startVariance == null()))) ? Dynamic(null()) : Dynamic(startVariance->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((end == null()))) ? Dynamic(null()) : Dynamic(end->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((endVariance == null()))) ? Dynamic(null()) : Dynamic(endVariance->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ParticleEmitter_obj,setColor,(void))

Void ParticleEmitter_obj::setEllipsoid( bool ellipsoid){
{
		HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","setEllipsoid",0x5bb9ea54,"org.gameplay3d.ParticleEmitter.setEllipsoid","org/gameplay3d/ParticleEmitter.hx",276,0x3e068e83)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ellipsoid,"ellipsoid")
		HX_STACK_LINE(276)
		::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_setEllipsoid(this->nativeObject,ellipsoid);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ParticleEmitter_obj,setEllipsoid,(void))

Void ParticleEmitter_obj::setEmissionRate( int rate){
{
		HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","setEmissionRate",0x3fed2216,"org.gameplay3d.ParticleEmitter.setEmissionRate","org/gameplay3d/ParticleEmitter.hx",282,0x3e068e83)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rate,"rate")
		HX_STACK_LINE(282)
		::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_setEmissionRate(this->nativeObject,rate);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ParticleEmitter_obj,setEmissionRate,(void))

Void ParticleEmitter_obj::setEnergy( int energyMin,int energyMax){
{
		HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","setEnergy",0xd07ef097,"org.gameplay3d.ParticleEmitter.setEnergy","org/gameplay3d/ParticleEmitter.hx",288,0x3e068e83)
		HX_STACK_THIS(this)
		HX_STACK_ARG(energyMin,"energyMin")
		HX_STACK_ARG(energyMax,"energyMax")
		HX_STACK_LINE(288)
		::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_setEnergy(this->nativeObject,energyMin,energyMax);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ParticleEmitter_obj,setEnergy,(void))

Void ParticleEmitter_obj::setOrbit( bool orbitPosition,bool orbitVelocity,bool orbitAcceleration){
{
		HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","setOrbit",0x3f43569b,"org.gameplay3d.ParticleEmitter.setOrbit","org/gameplay3d/ParticleEmitter.hx",294,0x3e068e83)
		HX_STACK_THIS(this)
		HX_STACK_ARG(orbitPosition,"orbitPosition")
		HX_STACK_ARG(orbitVelocity,"orbitVelocity")
		HX_STACK_ARG(orbitAcceleration,"orbitAcceleration")
		HX_STACK_LINE(294)
		::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_setOrbit(this->nativeObject,orbitPosition,orbitVelocity,orbitAcceleration);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ParticleEmitter_obj,setOrbit,(void))

Void ParticleEmitter_obj::setPosition( ::org::gameplay3d::immutable::IVector3 position,::org::gameplay3d::immutable::IVector3 positionVariance){
{
		HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","setPosition",0x343dba38,"org.gameplay3d.ParticleEmitter.setPosition","org/gameplay3d/ParticleEmitter.hx",300,0x3e068e83)
		HX_STACK_THIS(this)
		HX_STACK_ARG(position,"position")
		HX_STACK_ARG(positionVariance,"positionVariance")
		HX_STACK_LINE(300)
		::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_setPosition(this->nativeObject,(  (((position == null()))) ? Dynamic(null()) : Dynamic(position->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((positionVariance == null()))) ? Dynamic(null()) : Dynamic(positionVariance->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ParticleEmitter_obj,setPosition,(void))

Void ParticleEmitter_obj::setRotation( Float speedMin,Float speedMax,::org::gameplay3d::immutable::IVector3 axis,::org::gameplay3d::immutable::IVector3 axisVariance){
{
		HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","setRotation",0x71c956cd,"org.gameplay3d.ParticleEmitter.setRotation","org/gameplay3d/ParticleEmitter.hx",306,0x3e068e83)
		HX_STACK_THIS(this)
		HX_STACK_ARG(speedMin,"speedMin")
		HX_STACK_ARG(speedMax,"speedMax")
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(axisVariance,"axisVariance")
		HX_STACK_LINE(306)
		::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_setRotation(this->nativeObject,speedMin,speedMax,(  (((axis == null()))) ? Dynamic(null()) : Dynamic(axis->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((axisVariance == null()))) ? Dynamic(null()) : Dynamic(axisVariance->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ParticleEmitter_obj,setRotation,(void))

Void ParticleEmitter_obj::setRotationPerParticle( Float speedMin,Float speedMax){
{
		HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","setRotationPerParticle",0x8e9bbe76,"org.gameplay3d.ParticleEmitter.setRotationPerParticle","org/gameplay3d/ParticleEmitter.hx",312,0x3e068e83)
		HX_STACK_THIS(this)
		HX_STACK_ARG(speedMin,"speedMin")
		HX_STACK_ARG(speedMax,"speedMax")
		HX_STACK_LINE(312)
		::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_setRotationPerParticle(this->nativeObject,speedMin,speedMax);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ParticleEmitter_obj,setRotationPerParticle,(void))

Void ParticleEmitter_obj::setSize( Float startMin,Float startMax,Float endMin,Float endMax){
{
		HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","setSize",0xc4e906d0,"org.gameplay3d.ParticleEmitter.setSize","org/gameplay3d/ParticleEmitter.hx",318,0x3e068e83)
		HX_STACK_THIS(this)
		HX_STACK_ARG(startMin,"startMin")
		HX_STACK_ARG(startMax,"startMax")
		HX_STACK_ARG(endMin,"endMin")
		HX_STACK_ARG(endMax,"endMax")
		HX_STACK_LINE(318)
		::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_setSize(this->nativeObject,startMin,startMax,endMin,endMax);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ParticleEmitter_obj,setSize,(void))

Void ParticleEmitter_obj::setSpriteAnimated( bool animated){
{
		HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","setSpriteAnimated",0xe8c64697,"org.gameplay3d.ParticleEmitter.setSpriteAnimated","org/gameplay3d/ParticleEmitter.hx",324,0x3e068e83)
		HX_STACK_THIS(this)
		HX_STACK_ARG(animated,"animated")
		HX_STACK_LINE(324)
		::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_setSpriteAnimated(this->nativeObject,animated);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ParticleEmitter_obj,setSpriteAnimated,(void))

Void ParticleEmitter_obj::setSpriteFrameCoords_Int_ArrRct( int frameCount,Array< ::Dynamic > frameCoords){
{
		HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","setSpriteFrameCoords_Int_ArrRct",0x80b1aa5a,"org.gameplay3d.ParticleEmitter.setSpriteFrameCoords_Int_ArrRct","org/gameplay3d/ParticleEmitter.hx",329,0x3e068e83)
		HX_STACK_THIS(this)
		HX_STACK_ARG(frameCount,"frameCount")
		HX_STACK_ARG(frameCoords,"frameCoords")
		HX_STACK_LINE(330)
		Dynamic _g = ::org::gameplay3d::intern::ConversionTools_obj::insertArray(frameCoords);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(330)
		::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_setSpriteFrameCoords_Int_ArrRct(this->nativeObject,frameCount,_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ParticleEmitter_obj,setSpriteFrameCoords_Int_ArrRct,(void))

Void ParticleEmitter_obj::setSpriteFrameCoords_IntX3( int frameCount,int width,int height){
{
		HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","setSpriteFrameCoords_IntX3",0xaaa4daa2,"org.gameplay3d.ParticleEmitter.setSpriteFrameCoords_IntX3","org/gameplay3d/ParticleEmitter.hx",336,0x3e068e83)
		HX_STACK_THIS(this)
		HX_STACK_ARG(frameCount,"frameCount")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(336)
		::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_setSpriteFrameCoords_IntX3(this->nativeObject,frameCount,width,height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ParticleEmitter_obj,setSpriteFrameCoords_IntX3,(void))

Void ParticleEmitter_obj::setSpriteFrameDuration( int duration){
{
		HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","setSpriteFrameDuration",0x2cee102d,"org.gameplay3d.ParticleEmitter.setSpriteFrameDuration","org/gameplay3d/ParticleEmitter.hx",342,0x3e068e83)
		HX_STACK_THIS(this)
		HX_STACK_ARG(duration,"duration")
		HX_STACK_LINE(342)
		::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_setSpriteFrameDuration(this->nativeObject,duration);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ParticleEmitter_obj,setSpriteFrameDuration,(void))

Void ParticleEmitter_obj::setSpriteFrameRandomOffset( int maxOffset){
{
		HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","setSpriteFrameRandomOffset",0xf27cf34f,"org.gameplay3d.ParticleEmitter.setSpriteFrameRandomOffset","org/gameplay3d/ParticleEmitter.hx",348,0x3e068e83)
		HX_STACK_THIS(this)
		HX_STACK_ARG(maxOffset,"maxOffset")
		HX_STACK_LINE(348)
		::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_setSpriteFrameRandomOffset(this->nativeObject,maxOffset);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ParticleEmitter_obj,setSpriteFrameRandomOffset,(void))

Void ParticleEmitter_obj::setSpriteLooped( bool looped){
{
		HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","setSpriteLooped",0x1b2c8eb7,"org.gameplay3d.ParticleEmitter.setSpriteLooped","org/gameplay3d/ParticleEmitter.hx",354,0x3e068e83)
		HX_STACK_THIS(this)
		HX_STACK_ARG(looped,"looped")
		HX_STACK_LINE(354)
		::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_setSpriteLooped(this->nativeObject,looped);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ParticleEmitter_obj,setSpriteLooped,(void))

Void ParticleEmitter_obj::setSpriteTexCoords( int frameCount,Array< Float > texCoords){
{
		HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","setSpriteTexCoords",0x1af8fef1,"org.gameplay3d.ParticleEmitter.setSpriteTexCoords","org/gameplay3d/ParticleEmitter.hx",360,0x3e068e83)
		HX_STACK_THIS(this)
		HX_STACK_ARG(frameCount,"frameCount")
		HX_STACK_ARG(texCoords,"texCoords")
		HX_STACK_LINE(360)
		::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_setSpriteTexCoords(this->nativeObject,frameCount,texCoords);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ParticleEmitter_obj,setSpriteTexCoords,(void))

Void ParticleEmitter_obj::setTextureBlending( int blending){
{
		HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","setTextureBlending",0x47758b7d,"org.gameplay3d.ParticleEmitter.setTextureBlending","org/gameplay3d/ParticleEmitter.hx",366,0x3e068e83)
		HX_STACK_THIS(this)
		HX_STACK_ARG(blending,"blending")
		HX_STACK_LINE(366)
		::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_setTextureBlending(this->nativeObject,blending);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ParticleEmitter_obj,setTextureBlending,(void))

Void ParticleEmitter_obj::setVelocity( ::org::gameplay3d::immutable::IVector3 velocity,::org::gameplay3d::immutable::IVector3 velocityVariance){
{
		HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","setVelocity",0x88411bac,"org.gameplay3d.ParticleEmitter.setVelocity","org/gameplay3d/ParticleEmitter.hx",372,0x3e068e83)
		HX_STACK_THIS(this)
		HX_STACK_ARG(velocity,"velocity")
		HX_STACK_ARG(velocityVariance,"velocityVariance")
		HX_STACK_LINE(372)
		::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_setVelocity(this->nativeObject,(  (((velocity == null()))) ? Dynamic(null()) : Dynamic(velocity->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((velocityVariance == null()))) ? Dynamic(null()) : Dynamic(velocityVariance->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ParticleEmitter_obj,setVelocity,(void))

Void ParticleEmitter_obj::start( ){
{
		HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","start",0xad30bc6f,"org.gameplay3d.ParticleEmitter.start","org/gameplay3d/ParticleEmitter.hx",378,0x3e068e83)
		HX_STACK_THIS(this)
		HX_STACK_LINE(378)
		::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_start(this->nativeObject);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ParticleEmitter_obj,start,(void))

Void ParticleEmitter_obj::stop( ){
{
		HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","stop",0x7de82895,"org.gameplay3d.ParticleEmitter.stop","org/gameplay3d/ParticleEmitter.hx",384,0x3e068e83)
		HX_STACK_THIS(this)
		HX_STACK_LINE(384)
		::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_stop(this->nativeObject);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ParticleEmitter_obj,stop,(void))

Void ParticleEmitter_obj::update( Float elapsedTime){
{
		HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","update",0x5e7f495c,"org.gameplay3d.ParticleEmitter.update","org/gameplay3d/ParticleEmitter.hx",390,0x3e068e83)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsedTime,"elapsedTime")
		HX_STACK_LINE(390)
		::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_update(this->nativeObject,elapsedTime);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ParticleEmitter_obj,update,(void))

::org::gameplay3d::ParticleEmitter ParticleEmitter_obj::create_Prop( ::org::gameplay3d::Properties properties){
	HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","create_Prop",0xb77926f3,"org.gameplay3d.ParticleEmitter.create_Prop","org/gameplay3d/ParticleEmitter.hx",36,0x3e068e83)
	HX_STACK_ARG(properties,"properties")
	HX_STACK_LINE(36)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::ParticleEmitter >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(36)
	Dynamic nativeObject = ::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_static_create_Prop((  (((properties == null()))) ? Dynamic(null()) : Dynamic(properties->nativeObject) ));		HX_STACK_VAR(nativeObject,"nativeObject");
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
			::org::gameplay3d::ParticleEmitter result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(36)
			if (((result == null()))){
				HX_STACK_LINE(36)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(36)
				::org::gameplay3d::ParticleEmitter _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ParticleEmitter_obj,create_Prop,return )

::org::gameplay3d::ParticleEmitter ParticleEmitter_obj::create_Str_IntX2( ::String texturePath,int textureBlending,int particleCountMax){
	HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","create_Str_IntX2",0x378c4ccb,"org.gameplay3d.ParticleEmitter.create_Str_IntX2","org/gameplay3d/ParticleEmitter.hx",42,0x3e068e83)
	HX_STACK_ARG(texturePath,"texturePath")
	HX_STACK_ARG(textureBlending,"textureBlending")
	HX_STACK_ARG(particleCountMax,"particleCountMax")
	HX_STACK_LINE(42)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::ParticleEmitter >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(42)
	Dynamic nativeObject = ::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_static_create_Str_IntX2(texturePath,textureBlending,particleCountMax);		HX_STACK_VAR(nativeObject,"nativeObject");
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
			::org::gameplay3d::ParticleEmitter result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(42)
			if (((result == null()))){
				HX_STACK_LINE(42)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(42)
				::org::gameplay3d::ParticleEmitter _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ParticleEmitter_obj,create_Str_IntX2,return )

::org::gameplay3d::ParticleEmitter ParticleEmitter_obj::create_Str( ::String url){
	HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","create_Str",0xdc18a361,"org.gameplay3d.ParticleEmitter.create_Str","org/gameplay3d/ParticleEmitter.hx",48,0x3e068e83)
	HX_STACK_ARG(url,"url")
	HX_STACK_LINE(48)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::ParticleEmitter >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(48)
	Dynamic nativeObject = ::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_static_create_Str(url);		HX_STACK_VAR(nativeObject,"nativeObject");
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
			::org::gameplay3d::ParticleEmitter result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(48)
			if (((result == null()))){
				HX_STACK_LINE(48)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(48)
				::org::gameplay3d::ParticleEmitter _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ParticleEmitter_obj,create_Str,return )

int ParticleEmitter_obj::getTextureBlendingFromString( ::String src){
	HX_STACK_FRAME("org.gameplay3d.ParticleEmitter","getTextureBlendingFromString",0x04869044,"org.gameplay3d.ParticleEmitter.getTextureBlendingFromString","org/gameplay3d/ParticleEmitter.hx",216,0x3e068e83)
	HX_STACK_ARG(src,"src")
	HX_STACK_LINE(216)
	return ::org::gameplay3d::ParticleEmitter_obj::hx_ParticleEmitter_static_getTextureBlendingFromString(src);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ParticleEmitter_obj,getTextureBlendingFromString,return )

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_static_create_Prop;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_static_create_Str_IntX2;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_static_create_Str;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_draw;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_emitOnce;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_getAcceleration;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_getAccelerationVariance;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_getColorEnd;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_getColorEndVariance;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_getColorStart;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_getColorStartVariance;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_getEmissionRate;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_getEnergyMax;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_getEnergyMin;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_getNode;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_getParticlesCount;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_getPosition;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_getPositionVariance;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_getRotationAxis;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_getRotationAxisVariance;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_getRotationPerParticleSpeedMax;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_getRotationPerParticleSpeedMin;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_getRotationSpeedMax;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_getRotationSpeedMin;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_getSizeEndMax;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_getSizeEndMin;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_getSizeStartMax;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_getSizeStartMin;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_getSpriteFrameDuration;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_getSpriteFrameRandomOffset;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_static_getTextureBlendingFromString;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_getVelocity;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_getVelocityVariance;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_isActive;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_isEllipsoid;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_isSpriteAnimated;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_isSpriteLooped;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_isStarted;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_setAcceleration;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_setColor;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_setEllipsoid;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_setEmissionRate;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_setEnergy;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_setOrbit;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_setPosition;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_setRotation;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_setRotationPerParticle;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_setSize;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_setSpriteAnimated;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_setSpriteFrameCoords_Int_ArrRct;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_setSpriteFrameCoords_IntX3;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_setSpriteFrameDuration;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_setSpriteFrameRandomOffset;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_setSpriteLooped;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_setSpriteTexCoords;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_setTextureBlending;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_setVelocity;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_start;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_stop;

Dynamic ParticleEmitter_obj::hx_ParticleEmitter_update;


ParticleEmitter_obj::ParticleEmitter_obj()
{
}

void ParticleEmitter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ParticleEmitter);
	HX_MARK_MEMBER_NAME(_acceleration,"_acceleration");
	HX_MARK_MEMBER_NAME(_accelerationVariance,"_accelerationVariance");
	HX_MARK_MEMBER_NAME(_position,"_position");
	HX_MARK_MEMBER_NAME(_positionVariance,"_positionVariance");
	HX_MARK_MEMBER_NAME(_rotationAxis,"_rotationAxis");
	HX_MARK_MEMBER_NAME(_rotationAxisVariance,"_rotationAxisVariance");
	HX_MARK_MEMBER_NAME(_velocity,"_velocity");
	HX_MARK_MEMBER_NAME(_velocityVariance,"_velocityVariance");
	HX_MARK_MEMBER_NAME(_colorEnd,"_colorEnd");
	HX_MARK_MEMBER_NAME(_colorEndVariance,"_colorEndVariance");
	HX_MARK_MEMBER_NAME(_colorStart,"_colorStart");
	HX_MARK_MEMBER_NAME(_colorStartVariance,"_colorStartVariance");
	::org::gameplay3d::intern::NativeBinding_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ParticleEmitter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_acceleration,"_acceleration");
	HX_VISIT_MEMBER_NAME(_accelerationVariance,"_accelerationVariance");
	HX_VISIT_MEMBER_NAME(_position,"_position");
	HX_VISIT_MEMBER_NAME(_positionVariance,"_positionVariance");
	HX_VISIT_MEMBER_NAME(_rotationAxis,"_rotationAxis");
	HX_VISIT_MEMBER_NAME(_rotationAxisVariance,"_rotationAxisVariance");
	HX_VISIT_MEMBER_NAME(_velocity,"_velocity");
	HX_VISIT_MEMBER_NAME(_velocityVariance,"_velocityVariance");
	HX_VISIT_MEMBER_NAME(_colorEnd,"_colorEnd");
	HX_VISIT_MEMBER_NAME(_colorEndVariance,"_colorEndVariance");
	HX_VISIT_MEMBER_NAME(_colorStart,"_colorStart");
	HX_VISIT_MEMBER_NAME(_colorStartVariance,"_colorStartVariance");
	::org::gameplay3d::intern::NativeBinding_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ParticleEmitter_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getNode") ) { return getNode_dyn(); }
		if (HX_FIELD_EQ(inName,"setSize") ) { return setSize_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"emitOnce") ) { return emitOnce_dyn(); }
		if (HX_FIELD_EQ(inName,"isActive") ) { return isActive_dyn(); }
		if (HX_FIELD_EQ(inName,"setColor") ) { return setColor_dyn(); }
		if (HX_FIELD_EQ(inName,"setOrbit") ) { return setOrbit_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_position") ) { return _position; }
		if (HX_FIELD_EQ(inName,"_velocity") ) { return _velocity; }
		if (HX_FIELD_EQ(inName,"_colorEnd") ) { return _colorEnd; }
		if (HX_FIELD_EQ(inName,"isStarted") ) { return isStarted_dyn(); }
		if (HX_FIELD_EQ(inName,"setEnergy") ) { return setEnergy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"create_Str") ) { return create_Str_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"create_Prop") ) { return create_Prop_dyn(); }
		if (HX_FIELD_EQ(inName,"_colorStart") ) { return _colorStart; }
		if (HX_FIELD_EQ(inName,"getColorEnd") ) { return getColorEnd_dyn(); }
		if (HX_FIELD_EQ(inName,"getPosition") ) { return getPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"getVelocity") ) { return getVelocity_dyn(); }
		if (HX_FIELD_EQ(inName,"isEllipsoid") ) { return isEllipsoid_dyn(); }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return setPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"setRotation") ) { return setRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"setVelocity") ) { return setVelocity_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getEnergyMax") ) { return getEnergyMax_dyn(); }
		if (HX_FIELD_EQ(inName,"getEnergyMin") ) { return getEnergyMin_dyn(); }
		if (HX_FIELD_EQ(inName,"setEllipsoid") ) { return setEllipsoid_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_acceleration") ) { return _acceleration; }
		if (HX_FIELD_EQ(inName,"_rotationAxis") ) { return _rotationAxis; }
		if (HX_FIELD_EQ(inName,"getColorStart") ) { return getColorStart_dyn(); }
		if (HX_FIELD_EQ(inName,"getSizeEndMax") ) { return getSizeEndMax_dyn(); }
		if (HX_FIELD_EQ(inName,"getSizeEndMin") ) { return getSizeEndMin_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"isSpriteLooped") ) { return isSpriteLooped_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getAcceleration") ) { return getAcceleration_dyn(); }
		if (HX_FIELD_EQ(inName,"getEmissionRate") ) { return getEmissionRate_dyn(); }
		if (HX_FIELD_EQ(inName,"getRotationAxis") ) { return getRotationAxis_dyn(); }
		if (HX_FIELD_EQ(inName,"getSizeStartMax") ) { return getSizeStartMax_dyn(); }
		if (HX_FIELD_EQ(inName,"getSizeStartMin") ) { return getSizeStartMin_dyn(); }
		if (HX_FIELD_EQ(inName,"setAcceleration") ) { return setAcceleration_dyn(); }
		if (HX_FIELD_EQ(inName,"setEmissionRate") ) { return setEmissionRate_dyn(); }
		if (HX_FIELD_EQ(inName,"setSpriteLooped") ) { return setSpriteLooped_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"create_Str_IntX2") ) { return create_Str_IntX2_dyn(); }
		if (HX_FIELD_EQ(inName,"isSpriteAnimated") ) { return isSpriteAnimated_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_positionVariance") ) { return _positionVariance; }
		if (HX_FIELD_EQ(inName,"_velocityVariance") ) { return _velocityVariance; }
		if (HX_FIELD_EQ(inName,"_colorEndVariance") ) { return _colorEndVariance; }
		if (HX_FIELD_EQ(inName,"getParticlesCount") ) { return getParticlesCount_dyn(); }
		if (HX_FIELD_EQ(inName,"setSpriteAnimated") ) { return setSpriteAnimated_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"setSpriteTexCoords") ) { return setSpriteTexCoords_dyn(); }
		if (HX_FIELD_EQ(inName,"setTextureBlending") ) { return setTextureBlending_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_colorStartVariance") ) { return _colorStartVariance; }
		if (HX_FIELD_EQ(inName,"getColorEndVariance") ) { return getColorEndVariance_dyn(); }
		if (HX_FIELD_EQ(inName,"getPositionVariance") ) { return getPositionVariance_dyn(); }
		if (HX_FIELD_EQ(inName,"getRotationSpeedMax") ) { return getRotationSpeedMax_dyn(); }
		if (HX_FIELD_EQ(inName,"getRotationSpeedMin") ) { return getRotationSpeedMin_dyn(); }
		if (HX_FIELD_EQ(inName,"getVelocityVariance") ) { return getVelocityVariance_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_accelerationVariance") ) { return _accelerationVariance; }
		if (HX_FIELD_EQ(inName,"_rotationAxisVariance") ) { return _rotationAxisVariance; }
		if (HX_FIELD_EQ(inName,"getColorStartVariance") ) { return getColorStartVariance_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"getSpriteFrameDuration") ) { return getSpriteFrameDuration_dyn(); }
		if (HX_FIELD_EQ(inName,"setRotationPerParticle") ) { return setRotationPerParticle_dyn(); }
		if (HX_FIELD_EQ(inName,"setSpriteFrameDuration") ) { return setSpriteFrameDuration_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_draw") ) { return hx_ParticleEmitter_draw; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_stop") ) { return hx_ParticleEmitter_stop; }
		if (HX_FIELD_EQ(inName,"getAccelerationVariance") ) { return getAccelerationVariance_dyn(); }
		if (HX_FIELD_EQ(inName,"getRotationAxisVariance") ) { return getRotationAxisVariance_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_start") ) { return hx_ParticleEmitter_start; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_update") ) { return hx_ParticleEmitter_update; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getNode") ) { return hx_ParticleEmitter_getNode; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_setSize") ) { return hx_ParticleEmitter_setSize; }
		if (HX_FIELD_EQ(inName,"getSpriteFrameRandomOffset") ) { return getSpriteFrameRandomOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"setSpriteFrameCoords_IntX3") ) { return setSpriteFrameCoords_IntX3_dyn(); }
		if (HX_FIELD_EQ(inName,"setSpriteFrameRandomOffset") ) { return setSpriteFrameRandomOffset_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_emitOnce") ) { return hx_ParticleEmitter_emitOnce; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_isActive") ) { return hx_ParticleEmitter_isActive; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_setColor") ) { return hx_ParticleEmitter_setColor; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_setOrbit") ) { return hx_ParticleEmitter_setOrbit; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"getTextureBlendingFromString") ) { return getTextureBlendingFromString_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_isStarted") ) { return hx_ParticleEmitter_isStarted; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_setEnergy") ) { return hx_ParticleEmitter_setEnergy; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getColorEnd") ) { return hx_ParticleEmitter_getColorEnd; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getPosition") ) { return hx_ParticleEmitter_getPosition; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getVelocity") ) { return hx_ParticleEmitter_getVelocity; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_isEllipsoid") ) { return hx_ParticleEmitter_isEllipsoid; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_setPosition") ) { return hx_ParticleEmitter_setPosition; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_setRotation") ) { return hx_ParticleEmitter_setRotation; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_setVelocity") ) { return hx_ParticleEmitter_setVelocity; }
		if (HX_FIELD_EQ(inName,"getRotationPerParticleSpeedMax") ) { return getRotationPerParticleSpeedMax_dyn(); }
		if (HX_FIELD_EQ(inName,"getRotationPerParticleSpeedMin") ) { return getRotationPerParticleSpeedMin_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getEnergyMax") ) { return hx_ParticleEmitter_getEnergyMax; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getEnergyMin") ) { return hx_ParticleEmitter_getEnergyMin; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_setEllipsoid") ) { return hx_ParticleEmitter_setEllipsoid; }
		if (HX_FIELD_EQ(inName,"setSpriteFrameCoords_Int_ArrRct") ) { return setSpriteFrameCoords_Int_ArrRct_dyn(); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getColorStart") ) { return hx_ParticleEmitter_getColorStart; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getSizeEndMax") ) { return hx_ParticleEmitter_getSizeEndMax; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getSizeEndMin") ) { return hx_ParticleEmitter_getSizeEndMin; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_isSpriteLooped") ) { return hx_ParticleEmitter_isSpriteLooped; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getAcceleration") ) { return hx_ParticleEmitter_getAcceleration; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getEmissionRate") ) { return hx_ParticleEmitter_getEmissionRate; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getRotationAxis") ) { return hx_ParticleEmitter_getRotationAxis; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getSizeStartMax") ) { return hx_ParticleEmitter_getSizeStartMax; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getSizeStartMin") ) { return hx_ParticleEmitter_getSizeStartMin; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_setAcceleration") ) { return hx_ParticleEmitter_setAcceleration; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_setEmissionRate") ) { return hx_ParticleEmitter_setEmissionRate; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_setSpriteLooped") ) { return hx_ParticleEmitter_setSpriteLooped; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_isSpriteAnimated") ) { return hx_ParticleEmitter_isSpriteAnimated; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_static_create_Str") ) { return hx_ParticleEmitter_static_create_Str; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getParticlesCount") ) { return hx_ParticleEmitter_getParticlesCount; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_setSpriteAnimated") ) { return hx_ParticleEmitter_setSpriteAnimated; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_static_create_Prop") ) { return hx_ParticleEmitter_static_create_Prop; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_setSpriteTexCoords") ) { return hx_ParticleEmitter_setSpriteTexCoords; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_setTextureBlending") ) { return hx_ParticleEmitter_setTextureBlending; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getColorEndVariance") ) { return hx_ParticleEmitter_getColorEndVariance; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getPositionVariance") ) { return hx_ParticleEmitter_getPositionVariance; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getRotationSpeedMax") ) { return hx_ParticleEmitter_getRotationSpeedMax; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getRotationSpeedMin") ) { return hx_ParticleEmitter_getRotationSpeedMin; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getVelocityVariance") ) { return hx_ParticleEmitter_getVelocityVariance; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getColorStartVariance") ) { return hx_ParticleEmitter_getColorStartVariance; }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getSpriteFrameDuration") ) { return hx_ParticleEmitter_getSpriteFrameDuration; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_setRotationPerParticle") ) { return hx_ParticleEmitter_setRotationPerParticle; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_setSpriteFrameDuration") ) { return hx_ParticleEmitter_setSpriteFrameDuration; }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_static_create_Str_IntX2") ) { return hx_ParticleEmitter_static_create_Str_IntX2; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getAccelerationVariance") ) { return hx_ParticleEmitter_getAccelerationVariance; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getRotationAxisVariance") ) { return hx_ParticleEmitter_getRotationAxisVariance; }
		break;
	case 45:
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getSpriteFrameRandomOffset") ) { return hx_ParticleEmitter_getSpriteFrameRandomOffset; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_setSpriteFrameCoords_IntX3") ) { return hx_ParticleEmitter_setSpriteFrameCoords_IntX3; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_setSpriteFrameRandomOffset") ) { return hx_ParticleEmitter_setSpriteFrameRandomOffset; }
		break;
	case 49:
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getRotationPerParticleSpeedMax") ) { return hx_ParticleEmitter_getRotationPerParticleSpeedMax; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getRotationPerParticleSpeedMin") ) { return hx_ParticleEmitter_getRotationPerParticleSpeedMin; }
		break;
	case 50:
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_setSpriteFrameCoords_Int_ArrRct") ) { return hx_ParticleEmitter_setSpriteFrameCoords_Int_ArrRct; }
		break;
	case 54:
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_static_getTextureBlendingFromString") ) { return hx_ParticleEmitter_static_getTextureBlendingFromString; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ParticleEmitter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_position") ) { _position=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_velocity") ) { _velocity=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_colorEnd") ) { _colorEnd=inValue.Cast< ::org::gameplay3d::Vector4 >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_colorStart") ) { _colorStart=inValue.Cast< ::org::gameplay3d::Vector4 >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_acceleration") ) { _acceleration=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rotationAxis") ) { _rotationAxis=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_positionVariance") ) { _positionVariance=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_velocityVariance") ) { _velocityVariance=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_colorEndVariance") ) { _colorEndVariance=inValue.Cast< ::org::gameplay3d::Vector4 >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_colorStartVariance") ) { _colorStartVariance=inValue.Cast< ::org::gameplay3d::Vector4 >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_accelerationVariance") ) { _accelerationVariance=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rotationAxisVariance") ) { _rotationAxisVariance=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_draw") ) { hx_ParticleEmitter_draw=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_stop") ) { hx_ParticleEmitter_stop=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_start") ) { hx_ParticleEmitter_start=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_update") ) { hx_ParticleEmitter_update=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getNode") ) { hx_ParticleEmitter_getNode=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_setSize") ) { hx_ParticleEmitter_setSize=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_emitOnce") ) { hx_ParticleEmitter_emitOnce=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_isActive") ) { hx_ParticleEmitter_isActive=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_setColor") ) { hx_ParticleEmitter_setColor=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_setOrbit") ) { hx_ParticleEmitter_setOrbit=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_isStarted") ) { hx_ParticleEmitter_isStarted=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_setEnergy") ) { hx_ParticleEmitter_setEnergy=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getColorEnd") ) { hx_ParticleEmitter_getColorEnd=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getPosition") ) { hx_ParticleEmitter_getPosition=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getVelocity") ) { hx_ParticleEmitter_getVelocity=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_isEllipsoid") ) { hx_ParticleEmitter_isEllipsoid=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_setPosition") ) { hx_ParticleEmitter_setPosition=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_setRotation") ) { hx_ParticleEmitter_setRotation=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_setVelocity") ) { hx_ParticleEmitter_setVelocity=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getEnergyMax") ) { hx_ParticleEmitter_getEnergyMax=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getEnergyMin") ) { hx_ParticleEmitter_getEnergyMin=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_setEllipsoid") ) { hx_ParticleEmitter_setEllipsoid=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getColorStart") ) { hx_ParticleEmitter_getColorStart=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getSizeEndMax") ) { hx_ParticleEmitter_getSizeEndMax=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getSizeEndMin") ) { hx_ParticleEmitter_getSizeEndMin=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_isSpriteLooped") ) { hx_ParticleEmitter_isSpriteLooped=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getAcceleration") ) { hx_ParticleEmitter_getAcceleration=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getEmissionRate") ) { hx_ParticleEmitter_getEmissionRate=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getRotationAxis") ) { hx_ParticleEmitter_getRotationAxis=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getSizeStartMax") ) { hx_ParticleEmitter_getSizeStartMax=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getSizeStartMin") ) { hx_ParticleEmitter_getSizeStartMin=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_setAcceleration") ) { hx_ParticleEmitter_setAcceleration=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_setEmissionRate") ) { hx_ParticleEmitter_setEmissionRate=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_setSpriteLooped") ) { hx_ParticleEmitter_setSpriteLooped=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_isSpriteAnimated") ) { hx_ParticleEmitter_isSpriteAnimated=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_static_create_Str") ) { hx_ParticleEmitter_static_create_Str=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getParticlesCount") ) { hx_ParticleEmitter_getParticlesCount=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_setSpriteAnimated") ) { hx_ParticleEmitter_setSpriteAnimated=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_static_create_Prop") ) { hx_ParticleEmitter_static_create_Prop=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_setSpriteTexCoords") ) { hx_ParticleEmitter_setSpriteTexCoords=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_setTextureBlending") ) { hx_ParticleEmitter_setTextureBlending=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getColorEndVariance") ) { hx_ParticleEmitter_getColorEndVariance=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getPositionVariance") ) { hx_ParticleEmitter_getPositionVariance=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getRotationSpeedMax") ) { hx_ParticleEmitter_getRotationSpeedMax=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getRotationSpeedMin") ) { hx_ParticleEmitter_getRotationSpeedMin=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getVelocityVariance") ) { hx_ParticleEmitter_getVelocityVariance=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getColorStartVariance") ) { hx_ParticleEmitter_getColorStartVariance=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getSpriteFrameDuration") ) { hx_ParticleEmitter_getSpriteFrameDuration=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_setRotationPerParticle") ) { hx_ParticleEmitter_setRotationPerParticle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_setSpriteFrameDuration") ) { hx_ParticleEmitter_setSpriteFrameDuration=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_static_create_Str_IntX2") ) { hx_ParticleEmitter_static_create_Str_IntX2=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getAccelerationVariance") ) { hx_ParticleEmitter_getAccelerationVariance=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getRotationAxisVariance") ) { hx_ParticleEmitter_getRotationAxisVariance=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 45:
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getSpriteFrameRandomOffset") ) { hx_ParticleEmitter_getSpriteFrameRandomOffset=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_setSpriteFrameCoords_IntX3") ) { hx_ParticleEmitter_setSpriteFrameCoords_IntX3=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_setSpriteFrameRandomOffset") ) { hx_ParticleEmitter_setSpriteFrameRandomOffset=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 49:
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getRotationPerParticleSpeedMax") ) { hx_ParticleEmitter_getRotationPerParticleSpeedMax=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_getRotationPerParticleSpeedMin") ) { hx_ParticleEmitter_getRotationPerParticleSpeedMin=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 50:
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_setSpriteFrameCoords_Int_ArrRct") ) { hx_ParticleEmitter_setSpriteFrameCoords_Int_ArrRct=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 54:
		if (HX_FIELD_EQ(inName,"hx_ParticleEmitter_static_getTextureBlendingFromString") ) { hx_ParticleEmitter_static_getTextureBlendingFromString=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ParticleEmitter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_acceleration"));
	outFields->push(HX_CSTRING("_accelerationVariance"));
	outFields->push(HX_CSTRING("_position"));
	outFields->push(HX_CSTRING("_positionVariance"));
	outFields->push(HX_CSTRING("_rotationAxis"));
	outFields->push(HX_CSTRING("_rotationAxisVariance"));
	outFields->push(HX_CSTRING("_velocity"));
	outFields->push(HX_CSTRING("_velocityVariance"));
	outFields->push(HX_CSTRING("_colorEnd"));
	outFields->push(HX_CSTRING("_colorEndVariance"));
	outFields->push(HX_CSTRING("_colorStart"));
	outFields->push(HX_CSTRING("_colorStartVariance"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create_Prop"),
	HX_CSTRING("create_Str_IntX2"),
	HX_CSTRING("create_Str"),
	HX_CSTRING("getTextureBlendingFromString"),
	HX_CSTRING("hx_ParticleEmitter_static_create_Prop"),
	HX_CSTRING("hx_ParticleEmitter_static_create_Str_IntX2"),
	HX_CSTRING("hx_ParticleEmitter_static_create_Str"),
	HX_CSTRING("hx_ParticleEmitter_draw"),
	HX_CSTRING("hx_ParticleEmitter_emitOnce"),
	HX_CSTRING("hx_ParticleEmitter_getAcceleration"),
	HX_CSTRING("hx_ParticleEmitter_getAccelerationVariance"),
	HX_CSTRING("hx_ParticleEmitter_getColorEnd"),
	HX_CSTRING("hx_ParticleEmitter_getColorEndVariance"),
	HX_CSTRING("hx_ParticleEmitter_getColorStart"),
	HX_CSTRING("hx_ParticleEmitter_getColorStartVariance"),
	HX_CSTRING("hx_ParticleEmitter_getEmissionRate"),
	HX_CSTRING("hx_ParticleEmitter_getEnergyMax"),
	HX_CSTRING("hx_ParticleEmitter_getEnergyMin"),
	HX_CSTRING("hx_ParticleEmitter_getNode"),
	HX_CSTRING("hx_ParticleEmitter_getParticlesCount"),
	HX_CSTRING("hx_ParticleEmitter_getPosition"),
	HX_CSTRING("hx_ParticleEmitter_getPositionVariance"),
	HX_CSTRING("hx_ParticleEmitter_getRotationAxis"),
	HX_CSTRING("hx_ParticleEmitter_getRotationAxisVariance"),
	HX_CSTRING("hx_ParticleEmitter_getRotationPerParticleSpeedMax"),
	HX_CSTRING("hx_ParticleEmitter_getRotationPerParticleSpeedMin"),
	HX_CSTRING("hx_ParticleEmitter_getRotationSpeedMax"),
	HX_CSTRING("hx_ParticleEmitter_getRotationSpeedMin"),
	HX_CSTRING("hx_ParticleEmitter_getSizeEndMax"),
	HX_CSTRING("hx_ParticleEmitter_getSizeEndMin"),
	HX_CSTRING("hx_ParticleEmitter_getSizeStartMax"),
	HX_CSTRING("hx_ParticleEmitter_getSizeStartMin"),
	HX_CSTRING("hx_ParticleEmitter_getSpriteFrameDuration"),
	HX_CSTRING("hx_ParticleEmitter_getSpriteFrameRandomOffset"),
	HX_CSTRING("hx_ParticleEmitter_static_getTextureBlendingFromString"),
	HX_CSTRING("hx_ParticleEmitter_getVelocity"),
	HX_CSTRING("hx_ParticleEmitter_getVelocityVariance"),
	HX_CSTRING("hx_ParticleEmitter_isActive"),
	HX_CSTRING("hx_ParticleEmitter_isEllipsoid"),
	HX_CSTRING("hx_ParticleEmitter_isSpriteAnimated"),
	HX_CSTRING("hx_ParticleEmitter_isSpriteLooped"),
	HX_CSTRING("hx_ParticleEmitter_isStarted"),
	HX_CSTRING("hx_ParticleEmitter_setAcceleration"),
	HX_CSTRING("hx_ParticleEmitter_setColor"),
	HX_CSTRING("hx_ParticleEmitter_setEllipsoid"),
	HX_CSTRING("hx_ParticleEmitter_setEmissionRate"),
	HX_CSTRING("hx_ParticleEmitter_setEnergy"),
	HX_CSTRING("hx_ParticleEmitter_setOrbit"),
	HX_CSTRING("hx_ParticleEmitter_setPosition"),
	HX_CSTRING("hx_ParticleEmitter_setRotation"),
	HX_CSTRING("hx_ParticleEmitter_setRotationPerParticle"),
	HX_CSTRING("hx_ParticleEmitter_setSize"),
	HX_CSTRING("hx_ParticleEmitter_setSpriteAnimated"),
	HX_CSTRING("hx_ParticleEmitter_setSpriteFrameCoords_Int_ArrRct"),
	HX_CSTRING("hx_ParticleEmitter_setSpriteFrameCoords_IntX3"),
	HX_CSTRING("hx_ParticleEmitter_setSpriteFrameDuration"),
	HX_CSTRING("hx_ParticleEmitter_setSpriteFrameRandomOffset"),
	HX_CSTRING("hx_ParticleEmitter_setSpriteLooped"),
	HX_CSTRING("hx_ParticleEmitter_setSpriteTexCoords"),
	HX_CSTRING("hx_ParticleEmitter_setTextureBlending"),
	HX_CSTRING("hx_ParticleEmitter_setVelocity"),
	HX_CSTRING("hx_ParticleEmitter_start"),
	HX_CSTRING("hx_ParticleEmitter_stop"),
	HX_CSTRING("hx_ParticleEmitter_update"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(ParticleEmitter_obj,_acceleration),HX_CSTRING("_acceleration")},
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(ParticleEmitter_obj,_accelerationVariance),HX_CSTRING("_accelerationVariance")},
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(ParticleEmitter_obj,_position),HX_CSTRING("_position")},
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(ParticleEmitter_obj,_positionVariance),HX_CSTRING("_positionVariance")},
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(ParticleEmitter_obj,_rotationAxis),HX_CSTRING("_rotationAxis")},
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(ParticleEmitter_obj,_rotationAxisVariance),HX_CSTRING("_rotationAxisVariance")},
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(ParticleEmitter_obj,_velocity),HX_CSTRING("_velocity")},
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(ParticleEmitter_obj,_velocityVariance),HX_CSTRING("_velocityVariance")},
	{hx::fsObject /*::org::gameplay3d::Vector4*/ ,(int)offsetof(ParticleEmitter_obj,_colorEnd),HX_CSTRING("_colorEnd")},
	{hx::fsObject /*::org::gameplay3d::Vector4*/ ,(int)offsetof(ParticleEmitter_obj,_colorEndVariance),HX_CSTRING("_colorEndVariance")},
	{hx::fsObject /*::org::gameplay3d::Vector4*/ ,(int)offsetof(ParticleEmitter_obj,_colorStart),HX_CSTRING("_colorStart")},
	{hx::fsObject /*::org::gameplay3d::Vector4*/ ,(int)offsetof(ParticleEmitter_obj,_colorStartVariance),HX_CSTRING("_colorStartVariance")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_acceleration"),
	HX_CSTRING("_accelerationVariance"),
	HX_CSTRING("_position"),
	HX_CSTRING("_positionVariance"),
	HX_CSTRING("_rotationAxis"),
	HX_CSTRING("_rotationAxisVariance"),
	HX_CSTRING("_velocity"),
	HX_CSTRING("_velocityVariance"),
	HX_CSTRING("_colorEnd"),
	HX_CSTRING("_colorEndVariance"),
	HX_CSTRING("_colorStart"),
	HX_CSTRING("_colorStartVariance"),
	HX_CSTRING("draw"),
	HX_CSTRING("emitOnce"),
	HX_CSTRING("getAcceleration"),
	HX_CSTRING("getAccelerationVariance"),
	HX_CSTRING("getColorEnd"),
	HX_CSTRING("getColorEndVariance"),
	HX_CSTRING("getColorStart"),
	HX_CSTRING("getColorStartVariance"),
	HX_CSTRING("getEmissionRate"),
	HX_CSTRING("getEnergyMax"),
	HX_CSTRING("getEnergyMin"),
	HX_CSTRING("getNode"),
	HX_CSTRING("getParticlesCount"),
	HX_CSTRING("getPosition"),
	HX_CSTRING("getPositionVariance"),
	HX_CSTRING("getRotationAxis"),
	HX_CSTRING("getRotationAxisVariance"),
	HX_CSTRING("getRotationPerParticleSpeedMax"),
	HX_CSTRING("getRotationPerParticleSpeedMin"),
	HX_CSTRING("getRotationSpeedMax"),
	HX_CSTRING("getRotationSpeedMin"),
	HX_CSTRING("getSizeEndMax"),
	HX_CSTRING("getSizeEndMin"),
	HX_CSTRING("getSizeStartMax"),
	HX_CSTRING("getSizeStartMin"),
	HX_CSTRING("getSpriteFrameDuration"),
	HX_CSTRING("getSpriteFrameRandomOffset"),
	HX_CSTRING("getVelocity"),
	HX_CSTRING("getVelocityVariance"),
	HX_CSTRING("isActive"),
	HX_CSTRING("isEllipsoid"),
	HX_CSTRING("isSpriteAnimated"),
	HX_CSTRING("isSpriteLooped"),
	HX_CSTRING("isStarted"),
	HX_CSTRING("setAcceleration"),
	HX_CSTRING("setColor"),
	HX_CSTRING("setEllipsoid"),
	HX_CSTRING("setEmissionRate"),
	HX_CSTRING("setEnergy"),
	HX_CSTRING("setOrbit"),
	HX_CSTRING("setPosition"),
	HX_CSTRING("setRotation"),
	HX_CSTRING("setRotationPerParticle"),
	HX_CSTRING("setSize"),
	HX_CSTRING("setSpriteAnimated"),
	HX_CSTRING("setSpriteFrameCoords_Int_ArrRct"),
	HX_CSTRING("setSpriteFrameCoords_IntX3"),
	HX_CSTRING("setSpriteFrameDuration"),
	HX_CSTRING("setSpriteFrameRandomOffset"),
	HX_CSTRING("setSpriteLooped"),
	HX_CSTRING("setSpriteTexCoords"),
	HX_CSTRING("setTextureBlending"),
	HX_CSTRING("setVelocity"),
	HX_CSTRING("start"),
	HX_CSTRING("stop"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_static_create_Prop,"hx_ParticleEmitter_static_create_Prop");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_static_create_Str_IntX2,"hx_ParticleEmitter_static_create_Str_IntX2");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_static_create_Str,"hx_ParticleEmitter_static_create_Str");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_draw,"hx_ParticleEmitter_draw");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_emitOnce,"hx_ParticleEmitter_emitOnce");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getAcceleration,"hx_ParticleEmitter_getAcceleration");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getAccelerationVariance,"hx_ParticleEmitter_getAccelerationVariance");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getColorEnd,"hx_ParticleEmitter_getColorEnd");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getColorEndVariance,"hx_ParticleEmitter_getColorEndVariance");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getColorStart,"hx_ParticleEmitter_getColorStart");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getColorStartVariance,"hx_ParticleEmitter_getColorStartVariance");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getEmissionRate,"hx_ParticleEmitter_getEmissionRate");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getEnergyMax,"hx_ParticleEmitter_getEnergyMax");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getEnergyMin,"hx_ParticleEmitter_getEnergyMin");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getNode,"hx_ParticleEmitter_getNode");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getParticlesCount,"hx_ParticleEmitter_getParticlesCount");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getPosition,"hx_ParticleEmitter_getPosition");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getPositionVariance,"hx_ParticleEmitter_getPositionVariance");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getRotationAxis,"hx_ParticleEmitter_getRotationAxis");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getRotationAxisVariance,"hx_ParticleEmitter_getRotationAxisVariance");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getRotationPerParticleSpeedMax,"hx_ParticleEmitter_getRotationPerParticleSpeedMax");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getRotationPerParticleSpeedMin,"hx_ParticleEmitter_getRotationPerParticleSpeedMin");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getRotationSpeedMax,"hx_ParticleEmitter_getRotationSpeedMax");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getRotationSpeedMin,"hx_ParticleEmitter_getRotationSpeedMin");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getSizeEndMax,"hx_ParticleEmitter_getSizeEndMax");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getSizeEndMin,"hx_ParticleEmitter_getSizeEndMin");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getSizeStartMax,"hx_ParticleEmitter_getSizeStartMax");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getSizeStartMin,"hx_ParticleEmitter_getSizeStartMin");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getSpriteFrameDuration,"hx_ParticleEmitter_getSpriteFrameDuration");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getSpriteFrameRandomOffset,"hx_ParticleEmitter_getSpriteFrameRandomOffset");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_static_getTextureBlendingFromString,"hx_ParticleEmitter_static_getTextureBlendingFromString");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getVelocity,"hx_ParticleEmitter_getVelocity");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getVelocityVariance,"hx_ParticleEmitter_getVelocityVariance");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_isActive,"hx_ParticleEmitter_isActive");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_isEllipsoid,"hx_ParticleEmitter_isEllipsoid");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_isSpriteAnimated,"hx_ParticleEmitter_isSpriteAnimated");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_isSpriteLooped,"hx_ParticleEmitter_isSpriteLooped");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_isStarted,"hx_ParticleEmitter_isStarted");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_setAcceleration,"hx_ParticleEmitter_setAcceleration");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_setColor,"hx_ParticleEmitter_setColor");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_setEllipsoid,"hx_ParticleEmitter_setEllipsoid");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_setEmissionRate,"hx_ParticleEmitter_setEmissionRate");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_setEnergy,"hx_ParticleEmitter_setEnergy");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_setOrbit,"hx_ParticleEmitter_setOrbit");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_setPosition,"hx_ParticleEmitter_setPosition");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_setRotation,"hx_ParticleEmitter_setRotation");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_setRotationPerParticle,"hx_ParticleEmitter_setRotationPerParticle");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_setSize,"hx_ParticleEmitter_setSize");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_setSpriteAnimated,"hx_ParticleEmitter_setSpriteAnimated");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_setSpriteFrameCoords_Int_ArrRct,"hx_ParticleEmitter_setSpriteFrameCoords_Int_ArrRct");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_setSpriteFrameCoords_IntX3,"hx_ParticleEmitter_setSpriteFrameCoords_IntX3");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_setSpriteFrameDuration,"hx_ParticleEmitter_setSpriteFrameDuration");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_setSpriteFrameRandomOffset,"hx_ParticleEmitter_setSpriteFrameRandomOffset");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_setSpriteLooped,"hx_ParticleEmitter_setSpriteLooped");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_setSpriteTexCoords,"hx_ParticleEmitter_setSpriteTexCoords");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_setTextureBlending,"hx_ParticleEmitter_setTextureBlending");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_setVelocity,"hx_ParticleEmitter_setVelocity");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_start,"hx_ParticleEmitter_start");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_stop,"hx_ParticleEmitter_stop");
	HX_MARK_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_update,"hx_ParticleEmitter_update");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_static_create_Prop,"hx_ParticleEmitter_static_create_Prop");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_static_create_Str_IntX2,"hx_ParticleEmitter_static_create_Str_IntX2");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_static_create_Str,"hx_ParticleEmitter_static_create_Str");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_draw,"hx_ParticleEmitter_draw");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_emitOnce,"hx_ParticleEmitter_emitOnce");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getAcceleration,"hx_ParticleEmitter_getAcceleration");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getAccelerationVariance,"hx_ParticleEmitter_getAccelerationVariance");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getColorEnd,"hx_ParticleEmitter_getColorEnd");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getColorEndVariance,"hx_ParticleEmitter_getColorEndVariance");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getColorStart,"hx_ParticleEmitter_getColorStart");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getColorStartVariance,"hx_ParticleEmitter_getColorStartVariance");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getEmissionRate,"hx_ParticleEmitter_getEmissionRate");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getEnergyMax,"hx_ParticleEmitter_getEnergyMax");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getEnergyMin,"hx_ParticleEmitter_getEnergyMin");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getNode,"hx_ParticleEmitter_getNode");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getParticlesCount,"hx_ParticleEmitter_getParticlesCount");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getPosition,"hx_ParticleEmitter_getPosition");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getPositionVariance,"hx_ParticleEmitter_getPositionVariance");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getRotationAxis,"hx_ParticleEmitter_getRotationAxis");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getRotationAxisVariance,"hx_ParticleEmitter_getRotationAxisVariance");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getRotationPerParticleSpeedMax,"hx_ParticleEmitter_getRotationPerParticleSpeedMax");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getRotationPerParticleSpeedMin,"hx_ParticleEmitter_getRotationPerParticleSpeedMin");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getRotationSpeedMax,"hx_ParticleEmitter_getRotationSpeedMax");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getRotationSpeedMin,"hx_ParticleEmitter_getRotationSpeedMin");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getSizeEndMax,"hx_ParticleEmitter_getSizeEndMax");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getSizeEndMin,"hx_ParticleEmitter_getSizeEndMin");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getSizeStartMax,"hx_ParticleEmitter_getSizeStartMax");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getSizeStartMin,"hx_ParticleEmitter_getSizeStartMin");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getSpriteFrameDuration,"hx_ParticleEmitter_getSpriteFrameDuration");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getSpriteFrameRandomOffset,"hx_ParticleEmitter_getSpriteFrameRandomOffset");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_static_getTextureBlendingFromString,"hx_ParticleEmitter_static_getTextureBlendingFromString");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getVelocity,"hx_ParticleEmitter_getVelocity");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_getVelocityVariance,"hx_ParticleEmitter_getVelocityVariance");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_isActive,"hx_ParticleEmitter_isActive");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_isEllipsoid,"hx_ParticleEmitter_isEllipsoid");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_isSpriteAnimated,"hx_ParticleEmitter_isSpriteAnimated");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_isSpriteLooped,"hx_ParticleEmitter_isSpriteLooped");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_isStarted,"hx_ParticleEmitter_isStarted");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_setAcceleration,"hx_ParticleEmitter_setAcceleration");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_setColor,"hx_ParticleEmitter_setColor");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_setEllipsoid,"hx_ParticleEmitter_setEllipsoid");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_setEmissionRate,"hx_ParticleEmitter_setEmissionRate");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_setEnergy,"hx_ParticleEmitter_setEnergy");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_setOrbit,"hx_ParticleEmitter_setOrbit");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_setPosition,"hx_ParticleEmitter_setPosition");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_setRotation,"hx_ParticleEmitter_setRotation");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_setRotationPerParticle,"hx_ParticleEmitter_setRotationPerParticle");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_setSize,"hx_ParticleEmitter_setSize");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_setSpriteAnimated,"hx_ParticleEmitter_setSpriteAnimated");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_setSpriteFrameCoords_Int_ArrRct,"hx_ParticleEmitter_setSpriteFrameCoords_Int_ArrRct");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_setSpriteFrameCoords_IntX3,"hx_ParticleEmitter_setSpriteFrameCoords_IntX3");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_setSpriteFrameDuration,"hx_ParticleEmitter_setSpriteFrameDuration");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_setSpriteFrameRandomOffset,"hx_ParticleEmitter_setSpriteFrameRandomOffset");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_setSpriteLooped,"hx_ParticleEmitter_setSpriteLooped");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_setSpriteTexCoords,"hx_ParticleEmitter_setSpriteTexCoords");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_setTextureBlending,"hx_ParticleEmitter_setTextureBlending");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_setVelocity,"hx_ParticleEmitter_setVelocity");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_start,"hx_ParticleEmitter_start");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_stop,"hx_ParticleEmitter_stop");
	HX_VISIT_MEMBER_NAME(ParticleEmitter_obj::hx_ParticleEmitter_update,"hx_ParticleEmitter_update");
};

#endif

Class ParticleEmitter_obj::__mClass;

void ParticleEmitter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.ParticleEmitter"), hx::TCanCast< ParticleEmitter_obj> ,sStaticFields,sMemberFields,
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

void ParticleEmitter_obj::__boot()
{
	hx_ParticleEmitter_static_create_Prop= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("static_create_Prop"),(int)1);
	hx_ParticleEmitter_static_create_Str_IntX2= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("static_create_Str_IntX2"),(int)3);
	hx_ParticleEmitter_static_create_Str= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("static_create_Str"),(int)1);
	hx_ParticleEmitter_draw= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("draw"),(int)1);
	hx_ParticleEmitter_emitOnce= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("emitOnce"),(int)2);
	hx_ParticleEmitter_getAcceleration= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("getAcceleration"),(int)1);
	hx_ParticleEmitter_getAccelerationVariance= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("getAccelerationVariance"),(int)1);
	hx_ParticleEmitter_getColorEnd= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("getColorEnd"),(int)1);
	hx_ParticleEmitter_getColorEndVariance= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("getColorEndVariance"),(int)1);
	hx_ParticleEmitter_getColorStart= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("getColorStart"),(int)1);
	hx_ParticleEmitter_getColorStartVariance= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("getColorStartVariance"),(int)1);
	hx_ParticleEmitter_getEmissionRate= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("getEmissionRate"),(int)1);
	hx_ParticleEmitter_getEnergyMax= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("getEnergyMax"),(int)1);
	hx_ParticleEmitter_getEnergyMin= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("getEnergyMin"),(int)1);
	hx_ParticleEmitter_getNode= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("getNode"),(int)1);
	hx_ParticleEmitter_getParticlesCount= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("getParticlesCount"),(int)1);
	hx_ParticleEmitter_getPosition= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("getPosition"),(int)1);
	hx_ParticleEmitter_getPositionVariance= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("getPositionVariance"),(int)1);
	hx_ParticleEmitter_getRotationAxis= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("getRotationAxis"),(int)1);
	hx_ParticleEmitter_getRotationAxisVariance= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("getRotationAxisVariance"),(int)1);
	hx_ParticleEmitter_getRotationPerParticleSpeedMax= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("getRotationPerParticleSpeedMax"),(int)1);
	hx_ParticleEmitter_getRotationPerParticleSpeedMin= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("getRotationPerParticleSpeedMin"),(int)1);
	hx_ParticleEmitter_getRotationSpeedMax= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("getRotationSpeedMax"),(int)1);
	hx_ParticleEmitter_getRotationSpeedMin= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("getRotationSpeedMin"),(int)1);
	hx_ParticleEmitter_getSizeEndMax= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("getSizeEndMax"),(int)1);
	hx_ParticleEmitter_getSizeEndMin= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("getSizeEndMin"),(int)1);
	hx_ParticleEmitter_getSizeStartMax= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("getSizeStartMax"),(int)1);
	hx_ParticleEmitter_getSizeStartMin= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("getSizeStartMin"),(int)1);
	hx_ParticleEmitter_getSpriteFrameDuration= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("getSpriteFrameDuration"),(int)1);
	hx_ParticleEmitter_getSpriteFrameRandomOffset= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("getSpriteFrameRandomOffset"),(int)1);
	hx_ParticleEmitter_static_getTextureBlendingFromString= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("static_getTextureBlendingFromString"),(int)1);
	hx_ParticleEmitter_getVelocity= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("getVelocity"),(int)1);
	hx_ParticleEmitter_getVelocityVariance= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("getVelocityVariance"),(int)1);
	hx_ParticleEmitter_isActive= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("isActive"),(int)1);
	hx_ParticleEmitter_isEllipsoid= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("isEllipsoid"),(int)1);
	hx_ParticleEmitter_isSpriteAnimated= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("isSpriteAnimated"),(int)1);
	hx_ParticleEmitter_isSpriteLooped= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("isSpriteLooped"),(int)1);
	hx_ParticleEmitter_isStarted= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("isStarted"),(int)1);
	hx_ParticleEmitter_setAcceleration= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("setAcceleration"),(int)3);
	hx_ParticleEmitter_setColor= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("setColor"),(int)5);
	hx_ParticleEmitter_setEllipsoid= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("setEllipsoid"),(int)2);
	hx_ParticleEmitter_setEmissionRate= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("setEmissionRate"),(int)2);
	hx_ParticleEmitter_setEnergy= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("setEnergy"),(int)3);
	hx_ParticleEmitter_setOrbit= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("setOrbit"),(int)4);
	hx_ParticleEmitter_setPosition= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("setPosition"),(int)3);
	hx_ParticleEmitter_setRotation= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("setRotation"),(int)5);
	hx_ParticleEmitter_setRotationPerParticle= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("setRotationPerParticle"),(int)3);
	hx_ParticleEmitter_setSize= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("setSize"),(int)5);
	hx_ParticleEmitter_setSpriteAnimated= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("setSpriteAnimated"),(int)2);
	hx_ParticleEmitter_setSpriteFrameCoords_Int_ArrRct= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("setSpriteFrameCoords_Int_ArrRct"),(int)3);
	hx_ParticleEmitter_setSpriteFrameCoords_IntX3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("setSpriteFrameCoords_IntX3"),(int)4);
	hx_ParticleEmitter_setSpriteFrameDuration= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("setSpriteFrameDuration"),(int)2);
	hx_ParticleEmitter_setSpriteFrameRandomOffset= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("setSpriteFrameRandomOffset"),(int)2);
	hx_ParticleEmitter_setSpriteLooped= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("setSpriteLooped"),(int)2);
	hx_ParticleEmitter_setSpriteTexCoords= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("setSpriteTexCoords"),(int)3);
	hx_ParticleEmitter_setTextureBlending= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("setTextureBlending"),(int)2);
	hx_ParticleEmitter_setVelocity= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("setVelocity"),(int)3);
	hx_ParticleEmitter_start= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("start"),(int)1);
	hx_ParticleEmitter_stop= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("stop"),(int)1);
	hx_ParticleEmitter_update= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >(),HX_CSTRING("update"),(int)2);
}

} // end namespace org
} // end namespace gameplay3d
