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
#ifndef INCLUDED_org_gameplay3d_Frustum
#include <org/gameplay3d/Frustum.h>
#endif
#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Matrix
#include <org/gameplay3d/Matrix.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Plane
#include <org/gameplay3d/Plane.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Ray
#include <org/gameplay3d/Ray.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IBoundingBox
#include <org/gameplay3d/immutable/IBoundingBox.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IBoundingSphere
#include <org/gameplay3d/immutable/IBoundingSphere.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IFrustum
#include <org/gameplay3d/immutable/IFrustum.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IMatrix
#include <org/gameplay3d/immutable/IMatrix.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IPlane
#include <org/gameplay3d/immutable/IPlane.h>
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
#ifndef INCLUDED_org_gameplay3d_util_IMutableNativeArray
#include <org/gameplay3d/util/IMutableNativeArray.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_INativeArray
#include <org/gameplay3d/util/INativeArray.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_NativeInterface
#include <org/gameplay3d/util/NativeInterface.h>
#endif
namespace org{
namespace gameplay3d{

Void Frustum_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.Frustum","new",0xb329e8c7,"org.gameplay3d.Frustum.new","org/gameplay3d/Frustum.hx",18,0x50e24229)
HX_STACK_THIS(this)
HX_STACK_ARG(nativeObjectInitializer,"nativeObjectInitializer")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(18)
	super::__construct(nativeObjectInitializer,nativeObjectInitializerParams);
}
;
	return null();
}

//Frustum_obj::~Frustum_obj() { }

Dynamic Frustum_obj::__CreateEmpty() { return  new Frustum_obj; }
hx::ObjectPtr< Frustum_obj > Frustum_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< Frustum_obj > result = new Frustum_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic Frustum_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Frustum_obj > result = new Frustum_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *Frustum_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::intern::INativeBinding_obj)) return operator ::org::gameplay3d::intern::INativeBinding_obj *();
	if (inType==typeid( ::org::gameplay3d::immutable::IFrustum_obj)) return operator ::org::gameplay3d::immutable::IFrustum_obj *();
	return super::__ToInterface(inType);
}

::org::gameplay3d::immutable::IPlane Frustum_obj::getBottom( ){
	HX_STACK_FRAME("org.gameplay3d.Frustum","getBottom",0x176a4fc8,"org.gameplay3d.Frustum.getBottom","org/gameplay3d/Frustum.hx",52,0x50e24229)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_bottom == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Plane _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Plane >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(52)
			Dynamic nativeObject = ::org::gameplay3d::Frustum_obj::hx_Frustum_getBottom(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::Plane result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Plane _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return this->_bottom = _g1;
	}
	else{
		HX_STACK_LINE(52)
		Dynamic _g2 = ::org::gameplay3d::Frustum_obj::hx_Frustum_getBottom(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Plane _g3 = this->_bottom->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_bottom = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Frustum_obj,getBottom,return )

Void Frustum_obj::getCorners( ::org::gameplay3d::util::IMutableNativeArray corners){
{
		HX_STACK_FRAME("org.gameplay3d.Frustum","getCorners",0x6464f381,"org.gameplay3d.Frustum.getCorners","org/gameplay3d/Frustum.hx",58,0x50e24229)
		HX_STACK_THIS(this)
		HX_STACK_ARG(corners,"corners")
		HX_STACK_LINE(58)
		::org::gameplay3d::Frustum_obj::hx_Frustum_getCorners(this->nativeObject,(  (((corners == null()))) ? Dynamic(null()) : Dynamic(corners->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Frustum_obj,getCorners,(void))

::org::gameplay3d::immutable::IPlane Frustum_obj::getFar( ){
	HX_STACK_FRAME("org.gameplay3d.Frustum","getFar",0xfb3ad5da,"org.gameplay3d.Frustum.getFar","org/gameplay3d/Frustum.hx",64,0x50e24229)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_far == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Plane _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Plane >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(64)
			Dynamic nativeObject = ::org::gameplay3d::Frustum_obj::hx_Frustum_getFar(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::Plane result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Plane _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return this->_far = _g1;
	}
	else{
		HX_STACK_LINE(64)
		Dynamic _g2 = ::org::gameplay3d::Frustum_obj::hx_Frustum_getFar(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Plane _g3 = this->_far->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_far = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Frustum_obj,getFar,return )

::org::gameplay3d::immutable::IPlane Frustum_obj::getLeft( ){
	HX_STACK_FRAME("org.gameplay3d.Frustum","getLeft",0xdc3a8fa4,"org.gameplay3d.Frustum.getLeft","org/gameplay3d/Frustum.hx",70,0x50e24229)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_left == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Plane _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Plane >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(70)
			Dynamic nativeObject = ::org::gameplay3d::Frustum_obj::hx_Frustum_getLeft(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::Plane result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Plane _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return this->_left = _g1;
	}
	else{
		HX_STACK_LINE(70)
		Dynamic _g2 = ::org::gameplay3d::Frustum_obj::hx_Frustum_getLeft(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Plane _g3 = this->_left->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_left = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Frustum_obj,getLeft,return )

Void Frustum_obj::getMatrix( ::org::gameplay3d::Matrix dst){
{
		HX_STACK_FRAME("org.gameplay3d.Frustum","getMatrix",0x6db99f1e,"org.gameplay3d.Frustum.getMatrix","org/gameplay3d/Frustum.hx",76,0x50e24229)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(76)
		::org::gameplay3d::Frustum_obj::hx_Frustum_getMatrix(this->nativeObject,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Frustum_obj,getMatrix,(void))

::org::gameplay3d::immutable::IPlane Frustum_obj::getNear( ){
	HX_STACK_FRAME("org.gameplay3d.Frustum","getNear",0xdd8cf885,"org.gameplay3d.Frustum.getNear","org/gameplay3d/Frustum.hx",82,0x50e24229)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_near == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Plane _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Plane >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(82)
			Dynamic nativeObject = ::org::gameplay3d::Frustum_obj::hx_Frustum_getNear(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::Plane result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Plane _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return this->_near = _g1;
	}
	else{
		HX_STACK_LINE(82)
		Dynamic _g2 = ::org::gameplay3d::Frustum_obj::hx_Frustum_getNear(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Plane _g3 = this->_near->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_near = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Frustum_obj,getNear,return )

::org::gameplay3d::immutable::IPlane Frustum_obj::getRight( ){
	HX_STACK_FRAME("org.gameplay3d.Frustum","getRight",0x4e102d9f,"org.gameplay3d.Frustum.getRight","org/gameplay3d/Frustum.hx",88,0x50e24229)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_right == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Plane _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Plane >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(88)
			Dynamic nativeObject = ::org::gameplay3d::Frustum_obj::hx_Frustum_getRight(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::Plane result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Plane _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return this->_right = _g1;
	}
	else{
		HX_STACK_LINE(88)
		Dynamic _g2 = ::org::gameplay3d::Frustum_obj::hx_Frustum_getRight(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Plane _g3 = this->_right->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_right = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Frustum_obj,getRight,return )

::org::gameplay3d::immutable::IPlane Frustum_obj::getTop( ){
	HX_STACK_FRAME("org.gameplay3d.Frustum","getTop",0xfb458198,"org.gameplay3d.Frustum.getTop","org/gameplay3d/Frustum.hx",94,0x50e24229)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_top == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Plane _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Plane >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(94)
			Dynamic nativeObject = ::org::gameplay3d::Frustum_obj::hx_Frustum_getTop(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::Plane result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Plane _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return this->_top = _g1;
	}
	else{
		HX_STACK_LINE(94)
		Dynamic _g2 = ::org::gameplay3d::Frustum_obj::hx_Frustum_getTop(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Plane _g3 = this->_top->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_top = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Frustum_obj,getTop,return )

bool Frustum_obj::intersects_BBox( ::org::gameplay3d::immutable::IBoundingBox box){
	HX_STACK_FRAME("org.gameplay3d.Frustum","intersects_BBox",0xd3622e7b,"org.gameplay3d.Frustum.intersects_BBox","org/gameplay3d/Frustum.hx",100,0x50e24229)
	HX_STACK_THIS(this)
	HX_STACK_ARG(box,"box")
	HX_STACK_LINE(100)
	return ::org::gameplay3d::Frustum_obj::hx_Frustum_intersects_BBox(this->nativeObject,(  (((box == null()))) ? Dynamic(null()) : Dynamic(box->__Field(HX_CSTRING("nativeObject"),true)) ));
}


HX_DEFINE_DYNAMIC_FUNC1(Frustum_obj,intersects_BBox,return )

bool Frustum_obj::intersects_BSphr( ::org::gameplay3d::immutable::IBoundingSphere sphere){
	HX_STACK_FRAME("org.gameplay3d.Frustum","intersects_BSphr",0x2dc3d277,"org.gameplay3d.Frustum.intersects_BSphr","org/gameplay3d/Frustum.hx",106,0x50e24229)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sphere,"sphere")
	HX_STACK_LINE(106)
	return ::org::gameplay3d::Frustum_obj::hx_Frustum_intersects_BSphr(this->nativeObject,(  (((sphere == null()))) ? Dynamic(null()) : Dynamic(sphere->__Field(HX_CSTRING("nativeObject"),true)) ));
}


HX_DEFINE_DYNAMIC_FUNC1(Frustum_obj,intersects_BSphr,return )

bool Frustum_obj::intersects_V3( ::org::gameplay3d::immutable::IVector3 point){
	HX_STACK_FRAME("org.gameplay3d.Frustum","intersects_V3",0x617d862f,"org.gameplay3d.Frustum.intersects_V3","org/gameplay3d/Frustum.hx",112,0x50e24229)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(112)
	return ::org::gameplay3d::Frustum_obj::hx_Frustum_intersects_V3(this->nativeObject,(  (((point == null()))) ? Dynamic(null()) : Dynamic(point->__Field(HX_CSTRING("nativeObject"),true)) ));
}


HX_DEFINE_DYNAMIC_FUNC1(Frustum_obj,intersects_V3,return )

bool Frustum_obj::intersects_FltX3( Float x,Float y,Float z){
	HX_STACK_FRAME("org.gameplay3d.Frustum","intersects_FltX3",0x8be774d7,"org.gameplay3d.Frustum.intersects_FltX3","org/gameplay3d/Frustum.hx",118,0x50e24229)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(z,"z")
	HX_STACK_LINE(118)
	return ::org::gameplay3d::Frustum_obj::hx_Frustum_intersects_FltX3(this->nativeObject,x,y,z);
}


HX_DEFINE_DYNAMIC_FUNC3(Frustum_obj,intersects_FltX3,return )

Float Frustum_obj::intersects_Plane( ::org::gameplay3d::immutable::IPlane plane){
	HX_STACK_FRAME("org.gameplay3d.Frustum","intersects_Plane",0x4ddaea6a,"org.gameplay3d.Frustum.intersects_Plane","org/gameplay3d/Frustum.hx",124,0x50e24229)
	HX_STACK_THIS(this)
	HX_STACK_ARG(plane,"plane")
	HX_STACK_LINE(124)
	return ::org::gameplay3d::Frustum_obj::hx_Frustum_intersects_Plane(this->nativeObject,(  (((plane == null()))) ? Dynamic(null()) : Dynamic(plane->__Field(HX_CSTRING("nativeObject"),true)) ));
}


HX_DEFINE_DYNAMIC_FUNC1(Frustum_obj,intersects_Plane,return )

Float Frustum_obj::intersects_Ray( ::org::gameplay3d::Ray ray){
	HX_STACK_FRAME("org.gameplay3d.Frustum","intersects_Ray",0xec550278,"org.gameplay3d.Frustum.intersects_Ray","org/gameplay3d/Frustum.hx",130,0x50e24229)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ray,"ray")
	HX_STACK_LINE(130)
	return ::org::gameplay3d::Frustum_obj::hx_Frustum_intersects_Ray(this->nativeObject,(  (((ray == null()))) ? Dynamic(null()) : Dynamic(ray->nativeObject) ));
}


HX_DEFINE_DYNAMIC_FUNC1(Frustum_obj,intersects_Ray,return )

Void Frustum_obj::set_Frstm( ::org::gameplay3d::immutable::IFrustum frustum){
{
		HX_STACK_FRAME("org.gameplay3d.Frustum","set_Frstm",0xf653beca,"org.gameplay3d.Frustum.set_Frstm","org/gameplay3d/Frustum.hx",136,0x50e24229)
		HX_STACK_THIS(this)
		HX_STACK_ARG(frustum,"frustum")
		HX_STACK_LINE(136)
		::org::gameplay3d::Frustum_obj::hx_Frustum_set_Frstm(this->nativeObject,(  (((frustum == null()))) ? Dynamic(null()) : Dynamic(frustum->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Frustum_obj,set_Frstm,(void))

Void Frustum_obj::set_Mat( ::org::gameplay3d::immutable::IMatrix matrix){
{
		HX_STACK_FRAME("org.gameplay3d.Frustum","set_Mat",0xdbb8f40a,"org.gameplay3d.Frustum.set_Mat","org/gameplay3d/Frustum.hx",142,0x50e24229)
		HX_STACK_THIS(this)
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(142)
		::org::gameplay3d::Frustum_obj::hx_Frustum_set_Mat(this->nativeObject,(  (((matrix == null()))) ? Dynamic(null()) : Dynamic(matrix->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Frustum_obj,set_Mat,(void))

::org::gameplay3d::Frustum Frustum_obj::make( ){
	HX_STACK_FRAME("org.gameplay3d.Frustum","make",0x10d57ba7,"org.gameplay3d.Frustum.make","org/gameplay3d/Frustum.hx",33,0x50e24229)
	HX_STACK_LINE(34)
	Dynamic _g = ::org::gameplay3d::Frustum_obj::constructNativeObject();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(34)
	return ::org::gameplay3d::Frustum_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Frustum_obj,make,return )

::org::gameplay3d::Frustum Frustum_obj::make_Frstm( ::org::gameplay3d::immutable::IFrustum frustum){
	HX_STACK_FRAME("org.gameplay3d.Frustum","make_Frstm",0x64ca10e8,"org.gameplay3d.Frustum.make_Frstm","org/gameplay3d/Frustum.hx",39,0x50e24229)
	HX_STACK_ARG(frustum,"frustum")
	HX_STACK_LINE(40)
	Dynamic _g = ::org::gameplay3d::Frustum_obj::constructNativeObject_Frstm(frustum);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(40)
	return ::org::gameplay3d::Frustum_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Frustum_obj,make_Frstm,return )

::org::gameplay3d::Frustum Frustum_obj::make_Mat( ::org::gameplay3d::immutable::IMatrix matrix){
	HX_STACK_FRAME("org.gameplay3d.Frustum","make_Mat",0x4f9fe2a8,"org.gameplay3d.Frustum.make_Mat","org/gameplay3d/Frustum.hx",45,0x50e24229)
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_LINE(46)
	Dynamic _g = ::org::gameplay3d::Frustum_obj::constructNativeObject_Mat(matrix);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(46)
	return ::org::gameplay3d::Frustum_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Frustum_obj,make_Mat,return )

Dynamic Frustum_obj::constructNativeObject( ){
	HX_STACK_FRAME("org.gameplay3d.Frustum","constructNativeObject",0x0384b094,"org.gameplay3d.Frustum.constructNativeObject","org/gameplay3d/Frustum.hx",152,0x50e24229)
	HX_STACK_LINE(152)
	return ::org::gameplay3d::Frustum_obj::hx_Frustum_Construct();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Frustum_obj,constructNativeObject,return )

Dynamic Frustum_obj::constructNativeObject_Frstm( ::org::gameplay3d::immutable::IFrustum frustum){
	HX_STACK_FRAME("org.gameplay3d.Frustum","constructNativeObject_Frstm",0xe0373595,"org.gameplay3d.Frustum.constructNativeObject_Frstm","org/gameplay3d/Frustum.hx",158,0x50e24229)
	HX_STACK_ARG(frustum,"frustum")
	HX_STACK_LINE(158)
	return ::org::gameplay3d::Frustum_obj::hx_Frustum_Construct_Frstm((  (((frustum == null()))) ? Dynamic(null()) : Dynamic(frustum->__Field(HX_CSTRING("nativeObject"),true)) ));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Frustum_obj,constructNativeObject_Frstm,return )

Dynamic Frustum_obj::constructNativeObject_Mat( ::org::gameplay3d::immutable::IMatrix matrix){
	HX_STACK_FRAME("org.gameplay3d.Frustum","constructNativeObject_Mat",0x11f09215,"org.gameplay3d.Frustum.constructNativeObject_Mat","org/gameplay3d/Frustum.hx",164,0x50e24229)
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_LINE(164)
	return ::org::gameplay3d::Frustum_obj::hx_Frustum_Construct_Mat((  (((matrix == null()))) ? Dynamic(null()) : Dynamic(matrix->__Field(HX_CSTRING("nativeObject"),true)) ));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Frustum_obj,constructNativeObject_Mat,return )

Dynamic Frustum_obj::hx_Frustum_Construct;

Dynamic Frustum_obj::hx_Frustum_Construct_Frstm;

Dynamic Frustum_obj::hx_Frustum_Construct_Mat;

Dynamic Frustum_obj::hx_Frustum_getBottom;

Dynamic Frustum_obj::hx_Frustum_getCorners;

Dynamic Frustum_obj::hx_Frustum_getFar;

Dynamic Frustum_obj::hx_Frustum_getLeft;

Dynamic Frustum_obj::hx_Frustum_getMatrix;

Dynamic Frustum_obj::hx_Frustum_getNear;

Dynamic Frustum_obj::hx_Frustum_getRight;

Dynamic Frustum_obj::hx_Frustum_getTop;

Dynamic Frustum_obj::hx_Frustum_intersects_BBox;

Dynamic Frustum_obj::hx_Frustum_intersects_BSphr;

Dynamic Frustum_obj::hx_Frustum_intersects_V3;

Dynamic Frustum_obj::hx_Frustum_intersects_FltX3;

Dynamic Frustum_obj::hx_Frustum_intersects_Plane;

Dynamic Frustum_obj::hx_Frustum_intersects_Ray;

Dynamic Frustum_obj::hx_Frustum_set_Frstm;

Dynamic Frustum_obj::hx_Frustum_set_Mat;


Frustum_obj::Frustum_obj()
{
}

void Frustum_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Frustum);
	HX_MARK_MEMBER_NAME(_top,"_top");
	HX_MARK_MEMBER_NAME(_bottom,"_bottom");
	HX_MARK_MEMBER_NAME(_left,"_left");
	HX_MARK_MEMBER_NAME(_right,"_right");
	HX_MARK_MEMBER_NAME(_far,"_far");
	HX_MARK_MEMBER_NAME(_near,"_near");
	::org::gameplay3d::intern::NativeBinding_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Frustum_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_top,"_top");
	HX_VISIT_MEMBER_NAME(_bottom,"_bottom");
	HX_VISIT_MEMBER_NAME(_left,"_left");
	HX_VISIT_MEMBER_NAME(_right,"_right");
	HX_VISIT_MEMBER_NAME(_far,"_far");
	HX_VISIT_MEMBER_NAME(_near,"_near");
	::org::gameplay3d::intern::NativeBinding_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Frustum_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { return make_dyn(); }
		if (HX_FIELD_EQ(inName,"_top") ) { return _top; }
		if (HX_FIELD_EQ(inName,"_far") ) { return _far; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_left") ) { return _left; }
		if (HX_FIELD_EQ(inName,"_near") ) { return _near; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_right") ) { return _right; }
		if (HX_FIELD_EQ(inName,"getFar") ) { return getFar_dyn(); }
		if (HX_FIELD_EQ(inName,"getTop") ) { return getTop_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_bottom") ) { return _bottom; }
		if (HX_FIELD_EQ(inName,"getLeft") ) { return getLeft_dyn(); }
		if (HX_FIELD_EQ(inName,"getNear") ) { return getNear_dyn(); }
		if (HX_FIELD_EQ(inName,"set_Mat") ) { return set_Mat_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"make_Mat") ) { return make_Mat_dyn(); }
		if (HX_FIELD_EQ(inName,"getRight") ) { return getRight_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getBottom") ) { return getBottom_dyn(); }
		if (HX_FIELD_EQ(inName,"getMatrix") ) { return getMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"set_Frstm") ) { return set_Frstm_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"make_Frstm") ) { return make_Frstm_dyn(); }
		if (HX_FIELD_EQ(inName,"getCorners") ) { return getCorners_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"intersects_V3") ) { return intersects_V3_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"intersects_Ray") ) { return intersects_Ray_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"intersects_BBox") ) { return intersects_BBox_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"intersects_BSphr") ) { return intersects_BSphr_dyn(); }
		if (HX_FIELD_EQ(inName,"intersects_FltX3") ) { return intersects_FltX3_dyn(); }
		if (HX_FIELD_EQ(inName,"intersects_Plane") ) { return intersects_Plane_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"hx_Frustum_getFar") ) { return hx_Frustum_getFar; }
		if (HX_FIELD_EQ(inName,"hx_Frustum_getTop") ) { return hx_Frustum_getTop; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hx_Frustum_getLeft") ) { return hx_Frustum_getLeft; }
		if (HX_FIELD_EQ(inName,"hx_Frustum_getNear") ) { return hx_Frustum_getNear; }
		if (HX_FIELD_EQ(inName,"hx_Frustum_set_Mat") ) { return hx_Frustum_set_Mat; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hx_Frustum_getRight") ) { return hx_Frustum_getRight; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Frustum_Construct") ) { return hx_Frustum_Construct; }
		if (HX_FIELD_EQ(inName,"hx_Frustum_getBottom") ) { return hx_Frustum_getBottom; }
		if (HX_FIELD_EQ(inName,"hx_Frustum_getMatrix") ) { return hx_Frustum_getMatrix; }
		if (HX_FIELD_EQ(inName,"hx_Frustum_set_Frstm") ) { return hx_Frustum_set_Frstm; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"constructNativeObject") ) { return constructNativeObject_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Frustum_getCorners") ) { return hx_Frustum_getCorners; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_Frustum_Construct_Mat") ) { return hx_Frustum_Construct_Mat; }
		if (HX_FIELD_EQ(inName,"hx_Frustum_intersects_V3") ) { return hx_Frustum_intersects_V3; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"constructNativeObject_Mat") ) { return constructNativeObject_Mat_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Frustum_intersects_Ray") ) { return hx_Frustum_intersects_Ray; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_Frustum_Construct_Frstm") ) { return hx_Frustum_Construct_Frstm; }
		if (HX_FIELD_EQ(inName,"hx_Frustum_intersects_BBox") ) { return hx_Frustum_intersects_BBox; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"constructNativeObject_Frstm") ) { return constructNativeObject_Frstm_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Frustum_intersects_BSphr") ) { return hx_Frustum_intersects_BSphr; }
		if (HX_FIELD_EQ(inName,"hx_Frustum_intersects_FltX3") ) { return hx_Frustum_intersects_FltX3; }
		if (HX_FIELD_EQ(inName,"hx_Frustum_intersects_Plane") ) { return hx_Frustum_intersects_Plane; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Frustum_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_top") ) { _top=inValue.Cast< ::org::gameplay3d::Plane >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_far") ) { _far=inValue.Cast< ::org::gameplay3d::Plane >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_left") ) { _left=inValue.Cast< ::org::gameplay3d::Plane >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_near") ) { _near=inValue.Cast< ::org::gameplay3d::Plane >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_right") ) { _right=inValue.Cast< ::org::gameplay3d::Plane >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_bottom") ) { _bottom=inValue.Cast< ::org::gameplay3d::Plane >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"hx_Frustum_getFar") ) { hx_Frustum_getFar=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Frustum_getTop") ) { hx_Frustum_getTop=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hx_Frustum_getLeft") ) { hx_Frustum_getLeft=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Frustum_getNear") ) { hx_Frustum_getNear=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Frustum_set_Mat") ) { hx_Frustum_set_Mat=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hx_Frustum_getRight") ) { hx_Frustum_getRight=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Frustum_Construct") ) { hx_Frustum_Construct=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Frustum_getBottom") ) { hx_Frustum_getBottom=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Frustum_getMatrix") ) { hx_Frustum_getMatrix=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Frustum_set_Frstm") ) { hx_Frustum_set_Frstm=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hx_Frustum_getCorners") ) { hx_Frustum_getCorners=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_Frustum_Construct_Mat") ) { hx_Frustum_Construct_Mat=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Frustum_intersects_V3") ) { hx_Frustum_intersects_V3=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_Frustum_intersects_Ray") ) { hx_Frustum_intersects_Ray=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_Frustum_Construct_Frstm") ) { hx_Frustum_Construct_Frstm=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Frustum_intersects_BBox") ) { hx_Frustum_intersects_BBox=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"hx_Frustum_intersects_BSphr") ) { hx_Frustum_intersects_BSphr=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Frustum_intersects_FltX3") ) { hx_Frustum_intersects_FltX3=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Frustum_intersects_Plane") ) { hx_Frustum_intersects_Plane=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Frustum_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_top"));
	outFields->push(HX_CSTRING("_bottom"));
	outFields->push(HX_CSTRING("_left"));
	outFields->push(HX_CSTRING("_right"));
	outFields->push(HX_CSTRING("_far"));
	outFields->push(HX_CSTRING("_near"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("make"),
	HX_CSTRING("make_Frstm"),
	HX_CSTRING("make_Mat"),
	HX_CSTRING("constructNativeObject"),
	HX_CSTRING("constructNativeObject_Frstm"),
	HX_CSTRING("constructNativeObject_Mat"),
	HX_CSTRING("hx_Frustum_Construct"),
	HX_CSTRING("hx_Frustum_Construct_Frstm"),
	HX_CSTRING("hx_Frustum_Construct_Mat"),
	HX_CSTRING("hx_Frustum_getBottom"),
	HX_CSTRING("hx_Frustum_getCorners"),
	HX_CSTRING("hx_Frustum_getFar"),
	HX_CSTRING("hx_Frustum_getLeft"),
	HX_CSTRING("hx_Frustum_getMatrix"),
	HX_CSTRING("hx_Frustum_getNear"),
	HX_CSTRING("hx_Frustum_getRight"),
	HX_CSTRING("hx_Frustum_getTop"),
	HX_CSTRING("hx_Frustum_intersects_BBox"),
	HX_CSTRING("hx_Frustum_intersects_BSphr"),
	HX_CSTRING("hx_Frustum_intersects_V3"),
	HX_CSTRING("hx_Frustum_intersects_FltX3"),
	HX_CSTRING("hx_Frustum_intersects_Plane"),
	HX_CSTRING("hx_Frustum_intersects_Ray"),
	HX_CSTRING("hx_Frustum_set_Frstm"),
	HX_CSTRING("hx_Frustum_set_Mat"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::org::gameplay3d::Plane*/ ,(int)offsetof(Frustum_obj,_top),HX_CSTRING("_top")},
	{hx::fsObject /*::org::gameplay3d::Plane*/ ,(int)offsetof(Frustum_obj,_bottom),HX_CSTRING("_bottom")},
	{hx::fsObject /*::org::gameplay3d::Plane*/ ,(int)offsetof(Frustum_obj,_left),HX_CSTRING("_left")},
	{hx::fsObject /*::org::gameplay3d::Plane*/ ,(int)offsetof(Frustum_obj,_right),HX_CSTRING("_right")},
	{hx::fsObject /*::org::gameplay3d::Plane*/ ,(int)offsetof(Frustum_obj,_far),HX_CSTRING("_far")},
	{hx::fsObject /*::org::gameplay3d::Plane*/ ,(int)offsetof(Frustum_obj,_near),HX_CSTRING("_near")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_top"),
	HX_CSTRING("_bottom"),
	HX_CSTRING("_left"),
	HX_CSTRING("_right"),
	HX_CSTRING("_far"),
	HX_CSTRING("_near"),
	HX_CSTRING("getBottom"),
	HX_CSTRING("getCorners"),
	HX_CSTRING("getFar"),
	HX_CSTRING("getLeft"),
	HX_CSTRING("getMatrix"),
	HX_CSTRING("getNear"),
	HX_CSTRING("getRight"),
	HX_CSTRING("getTop"),
	HX_CSTRING("intersects_BBox"),
	HX_CSTRING("intersects_BSphr"),
	HX_CSTRING("intersects_V3"),
	HX_CSTRING("intersects_FltX3"),
	HX_CSTRING("intersects_Plane"),
	HX_CSTRING("intersects_Ray"),
	HX_CSTRING("set_Frstm"),
	HX_CSTRING("set_Mat"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Frustum_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Frustum_obj::hx_Frustum_Construct,"hx_Frustum_Construct");
	HX_MARK_MEMBER_NAME(Frustum_obj::hx_Frustum_Construct_Frstm,"hx_Frustum_Construct_Frstm");
	HX_MARK_MEMBER_NAME(Frustum_obj::hx_Frustum_Construct_Mat,"hx_Frustum_Construct_Mat");
	HX_MARK_MEMBER_NAME(Frustum_obj::hx_Frustum_getBottom,"hx_Frustum_getBottom");
	HX_MARK_MEMBER_NAME(Frustum_obj::hx_Frustum_getCorners,"hx_Frustum_getCorners");
	HX_MARK_MEMBER_NAME(Frustum_obj::hx_Frustum_getFar,"hx_Frustum_getFar");
	HX_MARK_MEMBER_NAME(Frustum_obj::hx_Frustum_getLeft,"hx_Frustum_getLeft");
	HX_MARK_MEMBER_NAME(Frustum_obj::hx_Frustum_getMatrix,"hx_Frustum_getMatrix");
	HX_MARK_MEMBER_NAME(Frustum_obj::hx_Frustum_getNear,"hx_Frustum_getNear");
	HX_MARK_MEMBER_NAME(Frustum_obj::hx_Frustum_getRight,"hx_Frustum_getRight");
	HX_MARK_MEMBER_NAME(Frustum_obj::hx_Frustum_getTop,"hx_Frustum_getTop");
	HX_MARK_MEMBER_NAME(Frustum_obj::hx_Frustum_intersects_BBox,"hx_Frustum_intersects_BBox");
	HX_MARK_MEMBER_NAME(Frustum_obj::hx_Frustum_intersects_BSphr,"hx_Frustum_intersects_BSphr");
	HX_MARK_MEMBER_NAME(Frustum_obj::hx_Frustum_intersects_V3,"hx_Frustum_intersects_V3");
	HX_MARK_MEMBER_NAME(Frustum_obj::hx_Frustum_intersects_FltX3,"hx_Frustum_intersects_FltX3");
	HX_MARK_MEMBER_NAME(Frustum_obj::hx_Frustum_intersects_Plane,"hx_Frustum_intersects_Plane");
	HX_MARK_MEMBER_NAME(Frustum_obj::hx_Frustum_intersects_Ray,"hx_Frustum_intersects_Ray");
	HX_MARK_MEMBER_NAME(Frustum_obj::hx_Frustum_set_Frstm,"hx_Frustum_set_Frstm");
	HX_MARK_MEMBER_NAME(Frustum_obj::hx_Frustum_set_Mat,"hx_Frustum_set_Mat");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Frustum_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Frustum_obj::hx_Frustum_Construct,"hx_Frustum_Construct");
	HX_VISIT_MEMBER_NAME(Frustum_obj::hx_Frustum_Construct_Frstm,"hx_Frustum_Construct_Frstm");
	HX_VISIT_MEMBER_NAME(Frustum_obj::hx_Frustum_Construct_Mat,"hx_Frustum_Construct_Mat");
	HX_VISIT_MEMBER_NAME(Frustum_obj::hx_Frustum_getBottom,"hx_Frustum_getBottom");
	HX_VISIT_MEMBER_NAME(Frustum_obj::hx_Frustum_getCorners,"hx_Frustum_getCorners");
	HX_VISIT_MEMBER_NAME(Frustum_obj::hx_Frustum_getFar,"hx_Frustum_getFar");
	HX_VISIT_MEMBER_NAME(Frustum_obj::hx_Frustum_getLeft,"hx_Frustum_getLeft");
	HX_VISIT_MEMBER_NAME(Frustum_obj::hx_Frustum_getMatrix,"hx_Frustum_getMatrix");
	HX_VISIT_MEMBER_NAME(Frustum_obj::hx_Frustum_getNear,"hx_Frustum_getNear");
	HX_VISIT_MEMBER_NAME(Frustum_obj::hx_Frustum_getRight,"hx_Frustum_getRight");
	HX_VISIT_MEMBER_NAME(Frustum_obj::hx_Frustum_getTop,"hx_Frustum_getTop");
	HX_VISIT_MEMBER_NAME(Frustum_obj::hx_Frustum_intersects_BBox,"hx_Frustum_intersects_BBox");
	HX_VISIT_MEMBER_NAME(Frustum_obj::hx_Frustum_intersects_BSphr,"hx_Frustum_intersects_BSphr");
	HX_VISIT_MEMBER_NAME(Frustum_obj::hx_Frustum_intersects_V3,"hx_Frustum_intersects_V3");
	HX_VISIT_MEMBER_NAME(Frustum_obj::hx_Frustum_intersects_FltX3,"hx_Frustum_intersects_FltX3");
	HX_VISIT_MEMBER_NAME(Frustum_obj::hx_Frustum_intersects_Plane,"hx_Frustum_intersects_Plane");
	HX_VISIT_MEMBER_NAME(Frustum_obj::hx_Frustum_intersects_Ray,"hx_Frustum_intersects_Ray");
	HX_VISIT_MEMBER_NAME(Frustum_obj::hx_Frustum_set_Frstm,"hx_Frustum_set_Frstm");
	HX_VISIT_MEMBER_NAME(Frustum_obj::hx_Frustum_set_Mat,"hx_Frustum_set_Mat");
};

#endif

Class Frustum_obj::__mClass;

void Frustum_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.Frustum"), hx::TCanCast< Frustum_obj> ,sStaticFields,sMemberFields,
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

void Frustum_obj::__boot()
{
	hx_Frustum_Construct= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Frustum >(),HX_CSTRING("Construct"),(int)0);
	hx_Frustum_Construct_Frstm= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Frustum >(),HX_CSTRING("Construct_Frstm"),(int)1);
	hx_Frustum_Construct_Mat= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Frustum >(),HX_CSTRING("Construct_Mat"),(int)1);
	hx_Frustum_getBottom= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Frustum >(),HX_CSTRING("getBottom"),(int)1);
	hx_Frustum_getCorners= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Frustum >(),HX_CSTRING("getCorners"),(int)2);
	hx_Frustum_getFar= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Frustum >(),HX_CSTRING("getFar"),(int)1);
	hx_Frustum_getLeft= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Frustum >(),HX_CSTRING("getLeft"),(int)1);
	hx_Frustum_getMatrix= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Frustum >(),HX_CSTRING("getMatrix"),(int)2);
	hx_Frustum_getNear= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Frustum >(),HX_CSTRING("getNear"),(int)1);
	hx_Frustum_getRight= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Frustum >(),HX_CSTRING("getRight"),(int)1);
	hx_Frustum_getTop= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Frustum >(),HX_CSTRING("getTop"),(int)1);
	hx_Frustum_intersects_BBox= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Frustum >(),HX_CSTRING("intersects_BBox"),(int)2);
	hx_Frustum_intersects_BSphr= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Frustum >(),HX_CSTRING("intersects_BSphr"),(int)2);
	hx_Frustum_intersects_V3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Frustum >(),HX_CSTRING("intersects_V3"),(int)2);
	hx_Frustum_intersects_FltX3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Frustum >(),HX_CSTRING("intersects_FltX3"),(int)4);
	hx_Frustum_intersects_Plane= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Frustum >(),HX_CSTRING("intersects_Plane"),(int)2);
	hx_Frustum_intersects_Ray= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Frustum >(),HX_CSTRING("intersects_Ray"),(int)2);
	hx_Frustum_set_Frstm= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Frustum >(),HX_CSTRING("set_Frstm"),(int)2);
	hx_Frustum_set_Mat= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Frustum >(),HX_CSTRING("set_Mat"),(int)2);
}

} // end namespace org
} // end namespace gameplay3d
