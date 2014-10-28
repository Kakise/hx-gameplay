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
#ifndef INCLUDED_org_gameplay3d_BoundingBox
#include <org/gameplay3d/BoundingBox.h>
#endif
#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Ray
#include <org/gameplay3d/Ray.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Vector3
#include <org/gameplay3d/Vector3.h>
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
#ifndef INCLUDED_org_gameplay3d_util_INativeArray
#include <org/gameplay3d/util/INativeArray.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_NativeInterface
#include <org/gameplay3d/util/NativeInterface.h>
#endif
namespace org{
namespace gameplay3d{

Void BoundingBox_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.BoundingBox","new",0xac13a26c,"org.gameplay3d.BoundingBox.new","org/gameplay3d/BoundingBox.hx",19,0x9a159424)
HX_STACK_THIS(this)
HX_STACK_ARG(nativeObjectInitializer,"nativeObjectInitializer")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(19)
	super::__construct(nativeObjectInitializer,nativeObjectInitializerParams);
}
;
	return null();
}

//BoundingBox_obj::~BoundingBox_obj() { }

Dynamic BoundingBox_obj::__CreateEmpty() { return  new BoundingBox_obj; }
hx::ObjectPtr< BoundingBox_obj > BoundingBox_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< BoundingBox_obj > result = new BoundingBox_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic BoundingBox_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BoundingBox_obj > result = new BoundingBox_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *BoundingBox_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::intern::INativeBinding_obj)) return operator ::org::gameplay3d::intern::INativeBinding_obj *();
	if (inType==typeid( ::org::gameplay3d::immutable::IBoundingBox_obj)) return operator ::org::gameplay3d::immutable::IBoundingBox_obj *();
	return super::__ToInterface(inType);
}

Dynamic BoundingBox_obj::impersonate( Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.BoundingBox","impersonate",0x35b9f945,"org.gameplay3d.BoundingBox.impersonate","org/gameplay3d/BoundingBox.hx",36,0x9a159424)
	HX_STACK_THIS(this)
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(37)
	this->super::impersonate(nativeObject);
	HX_STACK_LINE(28)
	if (((this->min == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(38)
			Dynamic nativeObject1 = ::org::gameplay3d::BoundingBox_obj::hx_BoundingBox_property_min_get(nativeObject);		HX_STACK_VAR(nativeObject1,"nativeObject1");
			HX_STACK_LINE(29)
			if (((nativeObject1 == null()))){
				HX_STACK_LINE(29)
				_g1 = null();
			}
			else{
				HX_STACK_LINE(29)
				if ((::Std_obj::is(nativeObject1,hx::ClassOf< ::cpp::vm::WeakRef >()))){
					HX_STACK_LINE(29)
					::cpp::vm::WeakRef ref = nativeObject1;		HX_STACK_VAR(ref,"ref");
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
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject1;
					HX_STACK_LINE(29)
					_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
				}
			}
		}
		HX_STACK_LINE(29)
		this->min = _g1;
	}
	else{
		HX_STACK_LINE(38)
		Dynamic _g2 = ::org::gameplay3d::BoundingBox_obj::hx_BoundingBox_property_min_get(nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g3 = this->min->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		this->min = _g3;
	}
	HX_STACK_LINE(28)
	if (((this->max == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(39)
			Dynamic nativeObject1 = ::org::gameplay3d::BoundingBox_obj::hx_BoundingBox_property_max_get(nativeObject);		HX_STACK_VAR(nativeObject1,"nativeObject1");
			HX_STACK_LINE(29)
			if (((nativeObject1 == null()))){
				HX_STACK_LINE(29)
				_g5 = null();
			}
			else{
				HX_STACK_LINE(29)
				if ((::Std_obj::is(nativeObject1,hx::ClassOf< ::cpp::vm::WeakRef >()))){
					HX_STACK_LINE(29)
					::cpp::vm::WeakRef ref = nativeObject1;		HX_STACK_VAR(ref,"ref");
					HX_STACK_LINE(29)
					::org::gameplay3d::Vector3 result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Vector3 _g4 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(29)
						result = _g4;
						HX_STACK_LINE(29)
						ref->set(result);
					}
					HX_STACK_LINE(29)
					_g5 = result;
				}
				else{
					HX_STACK_LINE(29)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject1;
					HX_STACK_LINE(29)
					_g5 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
				}
			}
		}
		HX_STACK_LINE(29)
		this->max = _g5;
	}
	else{
		HX_STACK_LINE(39)
		Dynamic _g6 = ::org::gameplay3d::BoundingBox_obj::hx_BoundingBox_property_max_get(nativeObject);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g7 = this->max->impersonate(_g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(31)
		this->max = _g7;
	}
	HX_STACK_LINE(40)
	return hx::ObjectPtr<OBJ_>(this);
}


::org::gameplay3d::Vector3 BoundingBox_obj::getCenter( ){
	HX_STACK_FRAME("org.gameplay3d.BoundingBox","getCenter",0x959c9217,"org.gameplay3d.BoundingBox.getCenter","org/gameplay3d/BoundingBox.hx",76,0x9a159424)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_center == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(76)
			Dynamic nativeObject = ::org::gameplay3d::BoundingBox_obj::hx_BoundingBox_getCenter(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
		return this->_center = _g1;
	}
	else{
		HX_STACK_LINE(76)
		Dynamic _g2 = ::org::gameplay3d::BoundingBox_obj::hx_BoundingBox_getCenter(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g3 = this->_center->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_center = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BoundingBox_obj,getCenter,return )

Void BoundingBox_obj::getCenter_V3( ::org::gameplay3d::Vector3 dst){
{
		HX_STACK_FRAME("org.gameplay3d.BoundingBox","getCenter_V3",0x6486f785,"org.gameplay3d.BoundingBox.getCenter_V3","org/gameplay3d/BoundingBox.hx",82,0x9a159424)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(82)
		::org::gameplay3d::BoundingBox_obj::hx_BoundingBox_getCenter_V3(this->nativeObject,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BoundingBox_obj,getCenter_V3,(void))

Void BoundingBox_obj::getCorners( ::org::gameplay3d::util::INativeArray dst){
{
		HX_STACK_FRAME("org.gameplay3d.BoundingBox","getCorners",0x9c97e87c,"org.gameplay3d.BoundingBox.getCorners","org/gameplay3d/BoundingBox.hx",88,0x9a159424)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(88)
		::org::gameplay3d::BoundingBox_obj::hx_BoundingBox_getCorners(this->nativeObject,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BoundingBox_obj,getCorners,(void))

bool BoundingBox_obj::intersects_BBox( ::org::gameplay3d::immutable::IBoundingBox box){
	HX_STACK_FRAME("org.gameplay3d.BoundingBox","intersects_BBox",0x158e4ba0,"org.gameplay3d.BoundingBox.intersects_BBox","org/gameplay3d/BoundingBox.hx",94,0x9a159424)
	HX_STACK_THIS(this)
	HX_STACK_ARG(box,"box")
	HX_STACK_LINE(94)
	return ::org::gameplay3d::BoundingBox_obj::hx_BoundingBox_intersects_BBox(this->nativeObject,(  (((box == null()))) ? Dynamic(null()) : Dynamic(box->__Field(HX_CSTRING("nativeObject"),true)) ));
}


HX_DEFINE_DYNAMIC_FUNC1(BoundingBox_obj,intersects_BBox,return )

bool BoundingBox_obj::intersects_BSphr( ::org::gameplay3d::immutable::IBoundingSphere sphere){
	HX_STACK_FRAME("org.gameplay3d.BoundingBox","intersects_BSphr",0xd23135b2,"org.gameplay3d.BoundingBox.intersects_BSphr","org/gameplay3d/BoundingBox.hx",100,0x9a159424)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sphere,"sphere")
	HX_STACK_LINE(100)
	return ::org::gameplay3d::BoundingBox_obj::hx_BoundingBox_intersects_BSphr(this->nativeObject,(  (((sphere == null()))) ? Dynamic(null()) : Dynamic(sphere->__Field(HX_CSTRING("nativeObject"),true)) ));
}


HX_DEFINE_DYNAMIC_FUNC1(BoundingBox_obj,intersects_BSphr,return )

bool BoundingBox_obj::intersects_Frstm( ::org::gameplay3d::immutable::IFrustum frustum){
	HX_STACK_FRAME("org.gameplay3d.BoundingBox","intersects_Frstm",0x344b7629,"org.gameplay3d.BoundingBox.intersects_Frstm","org/gameplay3d/BoundingBox.hx",106,0x9a159424)
	HX_STACK_THIS(this)
	HX_STACK_ARG(frustum,"frustum")
	HX_STACK_LINE(106)
	return ::org::gameplay3d::BoundingBox_obj::hx_BoundingBox_intersects_Frstm(this->nativeObject,(  (((frustum == null()))) ? Dynamic(null()) : Dynamic(frustum->__Field(HX_CSTRING("nativeObject"),true)) ));
}


HX_DEFINE_DYNAMIC_FUNC1(BoundingBox_obj,intersects_Frstm,return )

Float BoundingBox_obj::intersects_Plane( ::org::gameplay3d::immutable::IPlane plane){
	HX_STACK_FRAME("org.gameplay3d.BoundingBox","intersects_Plane",0xf2484da5,"org.gameplay3d.BoundingBox.intersects_Plane","org/gameplay3d/BoundingBox.hx",112,0x9a159424)
	HX_STACK_THIS(this)
	HX_STACK_ARG(plane,"plane")
	HX_STACK_LINE(112)
	return ::org::gameplay3d::BoundingBox_obj::hx_BoundingBox_intersects_Plane(this->nativeObject,(  (((plane == null()))) ? Dynamic(null()) : Dynamic(plane->__Field(HX_CSTRING("nativeObject"),true)) ));
}


HX_DEFINE_DYNAMIC_FUNC1(BoundingBox_obj,intersects_Plane,return )

Float BoundingBox_obj::intersects_Ray( ::org::gameplay3d::Ray ray){
	HX_STACK_FRAME("org.gameplay3d.BoundingBox","intersects_Ray",0x70a590f3,"org.gameplay3d.BoundingBox.intersects_Ray","org/gameplay3d/BoundingBox.hx",118,0x9a159424)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ray,"ray")
	HX_STACK_LINE(118)
	return ::org::gameplay3d::BoundingBox_obj::hx_BoundingBox_intersects_Ray(this->nativeObject,(  (((ray == null()))) ? Dynamic(null()) : Dynamic(ray->nativeObject) ));
}


HX_DEFINE_DYNAMIC_FUNC1(BoundingBox_obj,intersects_Ray,return )

bool BoundingBox_obj::isEmpty( ){
	HX_STACK_FRAME("org.gameplay3d.BoundingBox","isEmpty",0x123fa64f,"org.gameplay3d.BoundingBox.isEmpty","org/gameplay3d/BoundingBox.hx",124,0x9a159424)
	HX_STACK_THIS(this)
	HX_STACK_LINE(124)
	return ::org::gameplay3d::BoundingBox_obj::hx_BoundingBox_isEmpty(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(BoundingBox_obj,isEmpty,return )

Void BoundingBox_obj::merge_BBox( ::org::gameplay3d::immutable::IBoundingBox box){
{
		HX_STACK_FRAME("org.gameplay3d.BoundingBox","merge_BBox",0x7797f084,"org.gameplay3d.BoundingBox.merge_BBox","org/gameplay3d/BoundingBox.hx",130,0x9a159424)
		HX_STACK_THIS(this)
		HX_STACK_ARG(box,"box")
		HX_STACK_LINE(130)
		::org::gameplay3d::BoundingBox_obj::hx_BoundingBox_merge_BBox(this->nativeObject,(  (((box == null()))) ? Dynamic(null()) : Dynamic(box->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BoundingBox_obj,merge_BBox,(void))

Void BoundingBox_obj::merge_BSphr( ::org::gameplay3d::immutable::IBoundingSphere sphere){
{
		HX_STACK_FRAME("org.gameplay3d.BoundingBox","merge_BSphr",0x3897d84e,"org.gameplay3d.BoundingBox.merge_BSphr","org/gameplay3d/BoundingBox.hx",136,0x9a159424)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sphere,"sphere")
		HX_STACK_LINE(136)
		::org::gameplay3d::BoundingBox_obj::hx_BoundingBox_merge_BSphr(this->nativeObject,(  (((sphere == null()))) ? Dynamic(null()) : Dynamic(sphere->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BoundingBox_obj,merge_BSphr,(void))

Void BoundingBox_obj::set_BBox( ::org::gameplay3d::immutable::IBoundingBox box){
{
		HX_STACK_FRAME("org.gameplay3d.BoundingBox","set_BBox",0x77d9e25a,"org.gameplay3d.BoundingBox.set_BBox","org/gameplay3d/BoundingBox.hx",142,0x9a159424)
		HX_STACK_THIS(this)
		HX_STACK_ARG(box,"box")
		HX_STACK_LINE(142)
		::org::gameplay3d::BoundingBox_obj::hx_BoundingBox_set_BBox(this->nativeObject,(  (((box == null()))) ? Dynamic(null()) : Dynamic(box->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BoundingBox_obj,set_BBox,(void))

Void BoundingBox_obj::set_BSphr( ::org::gameplay3d::immutable::IBoundingSphere sphere){
{
		HX_STACK_FRAME("org.gameplay3d.BoundingBox","set_BSphr",0x720981b8,"org.gameplay3d.BoundingBox.set_BSphr","org/gameplay3d/BoundingBox.hx",148,0x9a159424)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sphere,"sphere")
		HX_STACK_LINE(148)
		::org::gameplay3d::BoundingBox_obj::hx_BoundingBox_set_BSphr(this->nativeObject,(  (((sphere == null()))) ? Dynamic(null()) : Dynamic(sphere->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BoundingBox_obj,set_BSphr,(void))

Void BoundingBox_obj::set_V3X2( ::org::gameplay3d::immutable::IVector3 min,::org::gameplay3d::immutable::IVector3 max){
{
		HX_STACK_FRAME("org.gameplay3d.BoundingBox","set_V3X2",0x8506b0a8,"org.gameplay3d.BoundingBox.set_V3X2","org/gameplay3d/BoundingBox.hx",154,0x9a159424)
		HX_STACK_THIS(this)
		HX_STACK_ARG(min,"min")
		HX_STACK_ARG(max,"max")
		HX_STACK_LINE(154)
		::org::gameplay3d::BoundingBox_obj::hx_BoundingBox_set_V3X2(this->nativeObject,(  (((min == null()))) ? Dynamic(null()) : Dynamic(min->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((max == null()))) ? Dynamic(null()) : Dynamic(max->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BoundingBox_obj,set_V3X2,(void))

Void BoundingBox_obj::set_FltX6( Float minX,Float minY,Float minZ,Float maxX,Float maxY,Float maxZ){
{
		HX_STACK_FRAME("org.gameplay3d.BoundingBox","set_FltX6",0xd02d241b,"org.gameplay3d.BoundingBox.set_FltX6","org/gameplay3d/BoundingBox.hx",160,0x9a159424)
		HX_STACK_THIS(this)
		HX_STACK_ARG(minX,"minX")
		HX_STACK_ARG(minY,"minY")
		HX_STACK_ARG(minZ,"minZ")
		HX_STACK_ARG(maxX,"maxX")
		HX_STACK_ARG(maxY,"maxY")
		HX_STACK_ARG(maxZ,"maxZ")
		HX_STACK_LINE(160)
		::org::gameplay3d::BoundingBox_obj::hx_BoundingBox_set_FltX6(this->nativeObject,minX,minY,minZ,maxX,maxY,maxZ);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(BoundingBox_obj,set_FltX6,(void))

Void BoundingBox_obj::transform( ::org::gameplay3d::immutable::IMatrix matrix){
{
		HX_STACK_FRAME("org.gameplay3d.BoundingBox","transform",0x58fe1078,"org.gameplay3d.BoundingBox.transform","org/gameplay3d/BoundingBox.hx",166,0x9a159424)
		HX_STACK_THIS(this)
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(166)
		::org::gameplay3d::BoundingBox_obj::hx_BoundingBox_transform(this->nativeObject,(  (((matrix == null()))) ? Dynamic(null()) : Dynamic(matrix->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BoundingBox_obj,transform,(void))

::org::gameplay3d::BoundingBox BoundingBox_obj::_empty;

::org::gameplay3d::BoundingBox BoundingBox_obj::make( ){
	HX_STACK_FRAME("org.gameplay3d.BoundingBox","make",0xe46e3262,"org.gameplay3d.BoundingBox.make","org/gameplay3d/BoundingBox.hx",45,0x9a159424)
	HX_STACK_LINE(46)
	Dynamic _g = ::org::gameplay3d::BoundingBox_obj::constructNativeObject();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(46)
	return ::org::gameplay3d::BoundingBox_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(BoundingBox_obj,make,return )

::org::gameplay3d::BoundingBox BoundingBox_obj::make_BBox( ::org::gameplay3d::immutable::IBoundingBox copy){
	HX_STACK_FRAME("org.gameplay3d.BoundingBox","make_BBox",0x32b99126,"org.gameplay3d.BoundingBox.make_BBox","org/gameplay3d/BoundingBox.hx",51,0x9a159424)
	HX_STACK_ARG(copy,"copy")
	HX_STACK_LINE(52)
	Dynamic _g = ::org::gameplay3d::BoundingBox_obj::constructNativeObject_BBox(copy);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(52)
	return ::org::gameplay3d::BoundingBox_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BoundingBox_obj,make_BBox,return )

::org::gameplay3d::BoundingBox BoundingBox_obj::make_V3X2( ::org::gameplay3d::immutable::IVector3 min,::org::gameplay3d::immutable::IVector3 max){
	HX_STACK_FRAME("org.gameplay3d.BoundingBox","make_V3X2",0x3fe65f74,"org.gameplay3d.BoundingBox.make_V3X2","org/gameplay3d/BoundingBox.hx",57,0x9a159424)
	HX_STACK_ARG(min,"min")
	HX_STACK_ARG(max,"max")
	HX_STACK_LINE(58)
	Dynamic _g = ::org::gameplay3d::BoundingBox_obj::constructNativeObject_V3X2(min,max);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(58)
	return ::org::gameplay3d::BoundingBox_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BoundingBox_obj,make_V3X2,return )

::org::gameplay3d::BoundingBox BoundingBox_obj::make_FltX6( Float minX,Float minY,Float minZ,Float maxX,Float maxY,Float maxZ){
	HX_STACK_FRAME("org.gameplay3d.BoundingBox","make_FltX6",0x990667cf,"org.gameplay3d.BoundingBox.make_FltX6","org/gameplay3d/BoundingBox.hx",63,0x9a159424)
	HX_STACK_ARG(minX,"minX")
	HX_STACK_ARG(minY,"minY")
	HX_STACK_ARG(minZ,"minZ")
	HX_STACK_ARG(maxX,"maxX")
	HX_STACK_ARG(maxY,"maxY")
	HX_STACK_ARG(maxZ,"maxZ")
	HX_STACK_LINE(64)
	Dynamic _g = ::org::gameplay3d::BoundingBox_obj::constructNativeObject_FltX6(minX,minY,minZ,maxX,maxY,maxZ);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(64)
	return ::org::gameplay3d::BoundingBox_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(BoundingBox_obj,make_FltX6,return )

::org::gameplay3d::immutable::IBoundingBox BoundingBox_obj::empty( ){
	HX_STACK_FRAME("org.gameplay3d.BoundingBox","empty",0x68bba799,"org.gameplay3d.BoundingBox.empty","org/gameplay3d/BoundingBox.hx",70,0x9a159424)
	HX_STACK_LINE(28)
	if (((::org::gameplay3d::BoundingBox_obj::_empty == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::BoundingBox _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::BoundingBox >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(70)
			Dynamic nativeObject = ::org::gameplay3d::BoundingBox_obj::hx_BoundingBox_static_empty();		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::BoundingBox result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::BoundingBox _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return ::org::gameplay3d::BoundingBox_obj::_empty = _g1;
	}
	else{
		HX_STACK_LINE(70)
		Dynamic _g2 = ::org::gameplay3d::BoundingBox_obj::hx_BoundingBox_static_empty();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::BoundingBox _g3 = ::org::gameplay3d::BoundingBox_obj::_empty->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return ::org::gameplay3d::BoundingBox_obj::_empty = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(BoundingBox_obj,empty,return )

Dynamic BoundingBox_obj::constructNativeObject( ){
	HX_STACK_FRAME("org.gameplay3d.BoundingBox","constructNativeObject",0x1fbeb779,"org.gameplay3d.BoundingBox.constructNativeObject","org/gameplay3d/BoundingBox.hx",176,0x9a159424)
	HX_STACK_LINE(176)
	return ::org::gameplay3d::BoundingBox_obj::hx_BoundingBox_Construct();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(BoundingBox_obj,constructNativeObject,return )

Dynamic BoundingBox_obj::constructNativeObject_BBox( ::org::gameplay3d::immutable::IBoundingBox copy){
	HX_STACK_FRAME("org.gameplay3d.BoundingBox","constructNativeObject_BBox",0x9e9c38af,"org.gameplay3d.BoundingBox.constructNativeObject_BBox","org/gameplay3d/BoundingBox.hx",182,0x9a159424)
	HX_STACK_ARG(copy,"copy")
	HX_STACK_LINE(182)
	return ::org::gameplay3d::BoundingBox_obj::hx_BoundingBox_Construct_BBox((  (((copy == null()))) ? Dynamic(null()) : Dynamic(copy->__Field(HX_CSTRING("nativeObject"),true)) ));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BoundingBox_obj,constructNativeObject_BBox,return )

Dynamic BoundingBox_obj::constructNativeObject_V3X2( ::org::gameplay3d::immutable::IVector3 min,::org::gameplay3d::immutable::IVector3 max){
	HX_STACK_FRAME("org.gameplay3d.BoundingBox","constructNativeObject_V3X2",0xabc906fd,"org.gameplay3d.BoundingBox.constructNativeObject_V3X2","org/gameplay3d/BoundingBox.hx",188,0x9a159424)
	HX_STACK_ARG(min,"min")
	HX_STACK_ARG(max,"max")
	HX_STACK_LINE(188)
	return ::org::gameplay3d::BoundingBox_obj::hx_BoundingBox_Construct_V3X2((  (((min == null()))) ? Dynamic(null()) : Dynamic(min->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((max == null()))) ? Dynamic(null()) : Dynamic(max->__Field(HX_CSTRING("nativeObject"),true)) ));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BoundingBox_obj,constructNativeObject_V3X2,return )

Dynamic BoundingBox_obj::constructNativeObject_FltX6( Float minX,Float minY,Float minZ,Float maxX,Float maxY,Float maxZ){
	HX_STACK_FRAME("org.gameplay3d.BoundingBox","constructNativeObject_FltX6",0x93765826,"org.gameplay3d.BoundingBox.constructNativeObject_FltX6","org/gameplay3d/BoundingBox.hx",194,0x9a159424)
	HX_STACK_ARG(minX,"minX")
	HX_STACK_ARG(minY,"minY")
	HX_STACK_ARG(minZ,"minZ")
	HX_STACK_ARG(maxX,"maxX")
	HX_STACK_ARG(maxY,"maxY")
	HX_STACK_ARG(maxZ,"maxZ")
	HX_STACK_LINE(194)
	return ::org::gameplay3d::BoundingBox_obj::hx_BoundingBox_Construct_FltX6(minX,minY,minZ,maxX,maxY,maxZ);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(BoundingBox_obj,constructNativeObject_FltX6,return )

Dynamic BoundingBox_obj::hx_BoundingBox_Construct;

Dynamic BoundingBox_obj::hx_BoundingBox_Construct_BBox;

Dynamic BoundingBox_obj::hx_BoundingBox_Construct_V3X2;

Dynamic BoundingBox_obj::hx_BoundingBox_Construct_FltX6;

Dynamic BoundingBox_obj::hx_BoundingBox_static_empty;

Dynamic BoundingBox_obj::hx_BoundingBox_getCenter;

Dynamic BoundingBox_obj::hx_BoundingBox_getCenter_V3;

Dynamic BoundingBox_obj::hx_BoundingBox_getCorners;

Dynamic BoundingBox_obj::hx_BoundingBox_intersects_BBox;

Dynamic BoundingBox_obj::hx_BoundingBox_intersects_BSphr;

Dynamic BoundingBox_obj::hx_BoundingBox_intersects_Frstm;

Dynamic BoundingBox_obj::hx_BoundingBox_intersects_Plane;

Dynamic BoundingBox_obj::hx_BoundingBox_intersects_Ray;

Dynamic BoundingBox_obj::hx_BoundingBox_isEmpty;

Dynamic BoundingBox_obj::hx_BoundingBox_merge_BBox;

Dynamic BoundingBox_obj::hx_BoundingBox_merge_BSphr;

Dynamic BoundingBox_obj::hx_BoundingBox_set_BBox;

Dynamic BoundingBox_obj::hx_BoundingBox_set_BSphr;

Dynamic BoundingBox_obj::hx_BoundingBox_set_V3X2;

Dynamic BoundingBox_obj::hx_BoundingBox_set_FltX6;

Dynamic BoundingBox_obj::hx_BoundingBox_transform;

Dynamic BoundingBox_obj::hx_BoundingBox_property_min_get;

Dynamic BoundingBox_obj::hx_BoundingBox_property_max_get;


BoundingBox_obj::BoundingBox_obj()
{
}

void BoundingBox_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BoundingBox);
	HX_MARK_MEMBER_NAME(min,"min");
	HX_MARK_MEMBER_NAME(max,"max");
	HX_MARK_MEMBER_NAME(_center,"_center");
	::org::gameplay3d::intern::NativeBinding_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BoundingBox_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(min,"min");
	HX_VISIT_MEMBER_NAME(max,"max");
	HX_VISIT_MEMBER_NAME(_center,"_center");
	::org::gameplay3d::intern::NativeBinding_obj::__Visit(HX_VISIT_ARG);
}

Dynamic BoundingBox_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { return min; }
		if (HX_FIELD_EQ(inName,"max") ) { return max; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { return make_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_empty") ) { return _empty; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_center") ) { return _center; }
		if (HX_FIELD_EQ(inName,"isEmpty") ) { return isEmpty_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_BBox") ) { return set_BBox_dyn(); }
		if (HX_FIELD_EQ(inName,"set_V3X2") ) { return set_V3X2_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"make_BBox") ) { return make_BBox_dyn(); }
		if (HX_FIELD_EQ(inName,"make_V3X2") ) { return make_V3X2_dyn(); }
		if (HX_FIELD_EQ(inName,"getCenter") ) { return getCenter_dyn(); }
		if (HX_FIELD_EQ(inName,"set_BSphr") ) { return set_BSphr_dyn(); }
		if (HX_FIELD_EQ(inName,"set_FltX6") ) { return set_FltX6_dyn(); }
		if (HX_FIELD_EQ(inName,"transform") ) { return transform_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"make_FltX6") ) { return make_FltX6_dyn(); }
		if (HX_FIELD_EQ(inName,"getCorners") ) { return getCorners_dyn(); }
		if (HX_FIELD_EQ(inName,"merge_BBox") ) { return merge_BBox_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"impersonate") ) { return impersonate_dyn(); }
		if (HX_FIELD_EQ(inName,"merge_BSphr") ) { return merge_BSphr_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getCenter_V3") ) { return getCenter_V3_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"intersects_Ray") ) { return intersects_Ray_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"intersects_BBox") ) { return intersects_BBox_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"intersects_BSphr") ) { return intersects_BSphr_dyn(); }
		if (HX_FIELD_EQ(inName,"intersects_Frstm") ) { return intersects_Frstm_dyn(); }
		if (HX_FIELD_EQ(inName,"intersects_Plane") ) { return intersects_Plane_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"constructNativeObject") ) { return constructNativeObject_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_BoundingBox_isEmpty") ) { return hx_BoundingBox_isEmpty; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_BoundingBox_set_BBox") ) { return hx_BoundingBox_set_BBox; }
		if (HX_FIELD_EQ(inName,"hx_BoundingBox_set_V3X2") ) { return hx_BoundingBox_set_V3X2; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_BoundingBox_Construct") ) { return hx_BoundingBox_Construct; }
		if (HX_FIELD_EQ(inName,"hx_BoundingBox_getCenter") ) { return hx_BoundingBox_getCenter; }
		if (HX_FIELD_EQ(inName,"hx_BoundingBox_set_BSphr") ) { return hx_BoundingBox_set_BSphr; }
		if (HX_FIELD_EQ(inName,"hx_BoundingBox_set_FltX6") ) { return hx_BoundingBox_set_FltX6; }
		if (HX_FIELD_EQ(inName,"hx_BoundingBox_transform") ) { return hx_BoundingBox_transform; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_BoundingBox_getCorners") ) { return hx_BoundingBox_getCorners; }
		if (HX_FIELD_EQ(inName,"hx_BoundingBox_merge_BBox") ) { return hx_BoundingBox_merge_BBox; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"constructNativeObject_BBox") ) { return constructNativeObject_BBox_dyn(); }
		if (HX_FIELD_EQ(inName,"constructNativeObject_V3X2") ) { return constructNativeObject_V3X2_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_BoundingBox_merge_BSphr") ) { return hx_BoundingBox_merge_BSphr; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"constructNativeObject_FltX6") ) { return constructNativeObject_FltX6_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_BoundingBox_static_empty") ) { return hx_BoundingBox_static_empty; }
		if (HX_FIELD_EQ(inName,"hx_BoundingBox_getCenter_V3") ) { return hx_BoundingBox_getCenter_V3; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_BoundingBox_Construct_BBox") ) { return hx_BoundingBox_Construct_BBox; }
		if (HX_FIELD_EQ(inName,"hx_BoundingBox_Construct_V3X2") ) { return hx_BoundingBox_Construct_V3X2; }
		if (HX_FIELD_EQ(inName,"hx_BoundingBox_intersects_Ray") ) { return hx_BoundingBox_intersects_Ray; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"hx_BoundingBox_Construct_FltX6") ) { return hx_BoundingBox_Construct_FltX6; }
		if (HX_FIELD_EQ(inName,"hx_BoundingBox_intersects_BBox") ) { return hx_BoundingBox_intersects_BBox; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"hx_BoundingBox_intersects_BSphr") ) { return hx_BoundingBox_intersects_BSphr; }
		if (HX_FIELD_EQ(inName,"hx_BoundingBox_intersects_Frstm") ) { return hx_BoundingBox_intersects_Frstm; }
		if (HX_FIELD_EQ(inName,"hx_BoundingBox_intersects_Plane") ) { return hx_BoundingBox_intersects_Plane; }
		if (HX_FIELD_EQ(inName,"hx_BoundingBox_property_min_get") ) { return hx_BoundingBox_property_min_get; }
		if (HX_FIELD_EQ(inName,"hx_BoundingBox_property_max_get") ) { return hx_BoundingBox_property_max_get; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BoundingBox_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { min=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"max") ) { max=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_empty") ) { _empty=inValue.Cast< ::org::gameplay3d::BoundingBox >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_center") ) { _center=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_BoundingBox_isEmpty") ) { hx_BoundingBox_isEmpty=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_BoundingBox_set_BBox") ) { hx_BoundingBox_set_BBox=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_BoundingBox_set_V3X2") ) { hx_BoundingBox_set_V3X2=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_BoundingBox_Construct") ) { hx_BoundingBox_Construct=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_BoundingBox_getCenter") ) { hx_BoundingBox_getCenter=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_BoundingBox_set_BSphr") ) { hx_BoundingBox_set_BSphr=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_BoundingBox_set_FltX6") ) { hx_BoundingBox_set_FltX6=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_BoundingBox_transform") ) { hx_BoundingBox_transform=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_BoundingBox_getCorners") ) { hx_BoundingBox_getCorners=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_BoundingBox_merge_BBox") ) { hx_BoundingBox_merge_BBox=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_BoundingBox_merge_BSphr") ) { hx_BoundingBox_merge_BSphr=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"hx_BoundingBox_static_empty") ) { hx_BoundingBox_static_empty=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_BoundingBox_getCenter_V3") ) { hx_BoundingBox_getCenter_V3=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_BoundingBox_Construct_BBox") ) { hx_BoundingBox_Construct_BBox=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_BoundingBox_Construct_V3X2") ) { hx_BoundingBox_Construct_V3X2=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_BoundingBox_intersects_Ray") ) { hx_BoundingBox_intersects_Ray=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"hx_BoundingBox_Construct_FltX6") ) { hx_BoundingBox_Construct_FltX6=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_BoundingBox_intersects_BBox") ) { hx_BoundingBox_intersects_BBox=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"hx_BoundingBox_intersects_BSphr") ) { hx_BoundingBox_intersects_BSphr=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_BoundingBox_intersects_Frstm") ) { hx_BoundingBox_intersects_Frstm=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_BoundingBox_intersects_Plane") ) { hx_BoundingBox_intersects_Plane=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_BoundingBox_property_min_get") ) { hx_BoundingBox_property_min_get=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_BoundingBox_property_max_get") ) { hx_BoundingBox_property_max_get=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BoundingBox_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("min"));
	outFields->push(HX_CSTRING("max"));
	outFields->push(HX_CSTRING("_center"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_empty"),
	HX_CSTRING("make"),
	HX_CSTRING("make_BBox"),
	HX_CSTRING("make_V3X2"),
	HX_CSTRING("make_FltX6"),
	HX_CSTRING("empty"),
	HX_CSTRING("constructNativeObject"),
	HX_CSTRING("constructNativeObject_BBox"),
	HX_CSTRING("constructNativeObject_V3X2"),
	HX_CSTRING("constructNativeObject_FltX6"),
	HX_CSTRING("hx_BoundingBox_Construct"),
	HX_CSTRING("hx_BoundingBox_Construct_BBox"),
	HX_CSTRING("hx_BoundingBox_Construct_V3X2"),
	HX_CSTRING("hx_BoundingBox_Construct_FltX6"),
	HX_CSTRING("hx_BoundingBox_static_empty"),
	HX_CSTRING("hx_BoundingBox_getCenter"),
	HX_CSTRING("hx_BoundingBox_getCenter_V3"),
	HX_CSTRING("hx_BoundingBox_getCorners"),
	HX_CSTRING("hx_BoundingBox_intersects_BBox"),
	HX_CSTRING("hx_BoundingBox_intersects_BSphr"),
	HX_CSTRING("hx_BoundingBox_intersects_Frstm"),
	HX_CSTRING("hx_BoundingBox_intersects_Plane"),
	HX_CSTRING("hx_BoundingBox_intersects_Ray"),
	HX_CSTRING("hx_BoundingBox_isEmpty"),
	HX_CSTRING("hx_BoundingBox_merge_BBox"),
	HX_CSTRING("hx_BoundingBox_merge_BSphr"),
	HX_CSTRING("hx_BoundingBox_set_BBox"),
	HX_CSTRING("hx_BoundingBox_set_BSphr"),
	HX_CSTRING("hx_BoundingBox_set_V3X2"),
	HX_CSTRING("hx_BoundingBox_set_FltX6"),
	HX_CSTRING("hx_BoundingBox_transform"),
	HX_CSTRING("hx_BoundingBox_property_min_get"),
	HX_CSTRING("hx_BoundingBox_property_max_get"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(BoundingBox_obj,min),HX_CSTRING("min")},
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(BoundingBox_obj,max),HX_CSTRING("max")},
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(BoundingBox_obj,_center),HX_CSTRING("_center")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("min"),
	HX_CSTRING("max"),
	HX_CSTRING("_center"),
	HX_CSTRING("impersonate"),
	HX_CSTRING("getCenter"),
	HX_CSTRING("getCenter_V3"),
	HX_CSTRING("getCorners"),
	HX_CSTRING("intersects_BBox"),
	HX_CSTRING("intersects_BSphr"),
	HX_CSTRING("intersects_Frstm"),
	HX_CSTRING("intersects_Plane"),
	HX_CSTRING("intersects_Ray"),
	HX_CSTRING("isEmpty"),
	HX_CSTRING("merge_BBox"),
	HX_CSTRING("merge_BSphr"),
	HX_CSTRING("set_BBox"),
	HX_CSTRING("set_BSphr"),
	HX_CSTRING("set_V3X2"),
	HX_CSTRING("set_FltX6"),
	HX_CSTRING("transform"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BoundingBox_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BoundingBox_obj::_empty,"_empty");
	HX_MARK_MEMBER_NAME(BoundingBox_obj::hx_BoundingBox_Construct,"hx_BoundingBox_Construct");
	HX_MARK_MEMBER_NAME(BoundingBox_obj::hx_BoundingBox_Construct_BBox,"hx_BoundingBox_Construct_BBox");
	HX_MARK_MEMBER_NAME(BoundingBox_obj::hx_BoundingBox_Construct_V3X2,"hx_BoundingBox_Construct_V3X2");
	HX_MARK_MEMBER_NAME(BoundingBox_obj::hx_BoundingBox_Construct_FltX6,"hx_BoundingBox_Construct_FltX6");
	HX_MARK_MEMBER_NAME(BoundingBox_obj::hx_BoundingBox_static_empty,"hx_BoundingBox_static_empty");
	HX_MARK_MEMBER_NAME(BoundingBox_obj::hx_BoundingBox_getCenter,"hx_BoundingBox_getCenter");
	HX_MARK_MEMBER_NAME(BoundingBox_obj::hx_BoundingBox_getCenter_V3,"hx_BoundingBox_getCenter_V3");
	HX_MARK_MEMBER_NAME(BoundingBox_obj::hx_BoundingBox_getCorners,"hx_BoundingBox_getCorners");
	HX_MARK_MEMBER_NAME(BoundingBox_obj::hx_BoundingBox_intersects_BBox,"hx_BoundingBox_intersects_BBox");
	HX_MARK_MEMBER_NAME(BoundingBox_obj::hx_BoundingBox_intersects_BSphr,"hx_BoundingBox_intersects_BSphr");
	HX_MARK_MEMBER_NAME(BoundingBox_obj::hx_BoundingBox_intersects_Frstm,"hx_BoundingBox_intersects_Frstm");
	HX_MARK_MEMBER_NAME(BoundingBox_obj::hx_BoundingBox_intersects_Plane,"hx_BoundingBox_intersects_Plane");
	HX_MARK_MEMBER_NAME(BoundingBox_obj::hx_BoundingBox_intersects_Ray,"hx_BoundingBox_intersects_Ray");
	HX_MARK_MEMBER_NAME(BoundingBox_obj::hx_BoundingBox_isEmpty,"hx_BoundingBox_isEmpty");
	HX_MARK_MEMBER_NAME(BoundingBox_obj::hx_BoundingBox_merge_BBox,"hx_BoundingBox_merge_BBox");
	HX_MARK_MEMBER_NAME(BoundingBox_obj::hx_BoundingBox_merge_BSphr,"hx_BoundingBox_merge_BSphr");
	HX_MARK_MEMBER_NAME(BoundingBox_obj::hx_BoundingBox_set_BBox,"hx_BoundingBox_set_BBox");
	HX_MARK_MEMBER_NAME(BoundingBox_obj::hx_BoundingBox_set_BSphr,"hx_BoundingBox_set_BSphr");
	HX_MARK_MEMBER_NAME(BoundingBox_obj::hx_BoundingBox_set_V3X2,"hx_BoundingBox_set_V3X2");
	HX_MARK_MEMBER_NAME(BoundingBox_obj::hx_BoundingBox_set_FltX6,"hx_BoundingBox_set_FltX6");
	HX_MARK_MEMBER_NAME(BoundingBox_obj::hx_BoundingBox_transform,"hx_BoundingBox_transform");
	HX_MARK_MEMBER_NAME(BoundingBox_obj::hx_BoundingBox_property_min_get,"hx_BoundingBox_property_min_get");
	HX_MARK_MEMBER_NAME(BoundingBox_obj::hx_BoundingBox_property_max_get,"hx_BoundingBox_property_max_get");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BoundingBox_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BoundingBox_obj::_empty,"_empty");
	HX_VISIT_MEMBER_NAME(BoundingBox_obj::hx_BoundingBox_Construct,"hx_BoundingBox_Construct");
	HX_VISIT_MEMBER_NAME(BoundingBox_obj::hx_BoundingBox_Construct_BBox,"hx_BoundingBox_Construct_BBox");
	HX_VISIT_MEMBER_NAME(BoundingBox_obj::hx_BoundingBox_Construct_V3X2,"hx_BoundingBox_Construct_V3X2");
	HX_VISIT_MEMBER_NAME(BoundingBox_obj::hx_BoundingBox_Construct_FltX6,"hx_BoundingBox_Construct_FltX6");
	HX_VISIT_MEMBER_NAME(BoundingBox_obj::hx_BoundingBox_static_empty,"hx_BoundingBox_static_empty");
	HX_VISIT_MEMBER_NAME(BoundingBox_obj::hx_BoundingBox_getCenter,"hx_BoundingBox_getCenter");
	HX_VISIT_MEMBER_NAME(BoundingBox_obj::hx_BoundingBox_getCenter_V3,"hx_BoundingBox_getCenter_V3");
	HX_VISIT_MEMBER_NAME(BoundingBox_obj::hx_BoundingBox_getCorners,"hx_BoundingBox_getCorners");
	HX_VISIT_MEMBER_NAME(BoundingBox_obj::hx_BoundingBox_intersects_BBox,"hx_BoundingBox_intersects_BBox");
	HX_VISIT_MEMBER_NAME(BoundingBox_obj::hx_BoundingBox_intersects_BSphr,"hx_BoundingBox_intersects_BSphr");
	HX_VISIT_MEMBER_NAME(BoundingBox_obj::hx_BoundingBox_intersects_Frstm,"hx_BoundingBox_intersects_Frstm");
	HX_VISIT_MEMBER_NAME(BoundingBox_obj::hx_BoundingBox_intersects_Plane,"hx_BoundingBox_intersects_Plane");
	HX_VISIT_MEMBER_NAME(BoundingBox_obj::hx_BoundingBox_intersects_Ray,"hx_BoundingBox_intersects_Ray");
	HX_VISIT_MEMBER_NAME(BoundingBox_obj::hx_BoundingBox_isEmpty,"hx_BoundingBox_isEmpty");
	HX_VISIT_MEMBER_NAME(BoundingBox_obj::hx_BoundingBox_merge_BBox,"hx_BoundingBox_merge_BBox");
	HX_VISIT_MEMBER_NAME(BoundingBox_obj::hx_BoundingBox_merge_BSphr,"hx_BoundingBox_merge_BSphr");
	HX_VISIT_MEMBER_NAME(BoundingBox_obj::hx_BoundingBox_set_BBox,"hx_BoundingBox_set_BBox");
	HX_VISIT_MEMBER_NAME(BoundingBox_obj::hx_BoundingBox_set_BSphr,"hx_BoundingBox_set_BSphr");
	HX_VISIT_MEMBER_NAME(BoundingBox_obj::hx_BoundingBox_set_V3X2,"hx_BoundingBox_set_V3X2");
	HX_VISIT_MEMBER_NAME(BoundingBox_obj::hx_BoundingBox_set_FltX6,"hx_BoundingBox_set_FltX6");
	HX_VISIT_MEMBER_NAME(BoundingBox_obj::hx_BoundingBox_transform,"hx_BoundingBox_transform");
	HX_VISIT_MEMBER_NAME(BoundingBox_obj::hx_BoundingBox_property_min_get,"hx_BoundingBox_property_min_get");
	HX_VISIT_MEMBER_NAME(BoundingBox_obj::hx_BoundingBox_property_max_get,"hx_BoundingBox_property_max_get");
};

#endif

Class BoundingBox_obj::__mClass;

void BoundingBox_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.BoundingBox"), hx::TCanCast< BoundingBox_obj> ,sStaticFields,sMemberFields,
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

void BoundingBox_obj::__boot()
{
	hx_BoundingBox_Construct= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::BoundingBox >(),HX_CSTRING("Construct"),(int)0);
	hx_BoundingBox_Construct_BBox= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::BoundingBox >(),HX_CSTRING("Construct_BBox"),(int)1);
	hx_BoundingBox_Construct_V3X2= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::BoundingBox >(),HX_CSTRING("Construct_V3X2"),(int)2);
	hx_BoundingBox_Construct_FltX6= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::BoundingBox >(),HX_CSTRING("Construct_FltX6"),(int)-1);
	hx_BoundingBox_static_empty= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::BoundingBox >(),HX_CSTRING("static_empty"),(int)0);
	hx_BoundingBox_getCenter= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::BoundingBox >(),HX_CSTRING("getCenter"),(int)1);
	hx_BoundingBox_getCenter_V3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::BoundingBox >(),HX_CSTRING("getCenter_V3"),(int)2);
	hx_BoundingBox_getCorners= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::BoundingBox >(),HX_CSTRING("getCorners"),(int)2);
	hx_BoundingBox_intersects_BBox= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::BoundingBox >(),HX_CSTRING("intersects_BBox"),(int)2);
	hx_BoundingBox_intersects_BSphr= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::BoundingBox >(),HX_CSTRING("intersects_BSphr"),(int)2);
	hx_BoundingBox_intersects_Frstm= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::BoundingBox >(),HX_CSTRING("intersects_Frstm"),(int)2);
	hx_BoundingBox_intersects_Plane= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::BoundingBox >(),HX_CSTRING("intersects_Plane"),(int)2);
	hx_BoundingBox_intersects_Ray= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::BoundingBox >(),HX_CSTRING("intersects_Ray"),(int)2);
	hx_BoundingBox_isEmpty= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::BoundingBox >(),HX_CSTRING("isEmpty"),(int)1);
	hx_BoundingBox_merge_BBox= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::BoundingBox >(),HX_CSTRING("merge_BBox"),(int)2);
	hx_BoundingBox_merge_BSphr= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::BoundingBox >(),HX_CSTRING("merge_BSphr"),(int)2);
	hx_BoundingBox_set_BBox= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::BoundingBox >(),HX_CSTRING("set_BBox"),(int)2);
	hx_BoundingBox_set_BSphr= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::BoundingBox >(),HX_CSTRING("set_BSphr"),(int)2);
	hx_BoundingBox_set_V3X2= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::BoundingBox >(),HX_CSTRING("set_V3X2"),(int)3);
	hx_BoundingBox_set_FltX6= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::BoundingBox >(),HX_CSTRING("set_FltX6"),(int)-1);
	hx_BoundingBox_transform= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::BoundingBox >(),HX_CSTRING("transform"),(int)2);
	hx_BoundingBox_property_min_get= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::BoundingBox >(),HX_CSTRING("property_min_get"),(int)1);
	hx_BoundingBox_property_max_get= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::BoundingBox >(),HX_CSTRING("property_max_get"),(int)1);
}

} // end namespace org
} // end namespace gameplay3d
