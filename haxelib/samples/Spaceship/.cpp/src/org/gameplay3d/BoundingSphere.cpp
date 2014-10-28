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
#ifndef INCLUDED_org_gameplay3d_BoundingSphere
#include <org/gameplay3d/BoundingSphere.h>
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
#ifndef INCLUDED_org_gameplay3d_util_NativeInterface
#include <org/gameplay3d/util/NativeInterface.h>
#endif
namespace org{
namespace gameplay3d{

Void BoundingSphere_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.BoundingSphere","new",0x9b1a17f0,"org.gameplay3d.BoundingSphere.new","org/gameplay3d/BoundingSphere.hx",17,0x618473e0)
HX_STACK_THIS(this)
HX_STACK_ARG(nativeObjectInitializer,"nativeObjectInitializer")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(17)
	super::__construct(nativeObjectInitializer,nativeObjectInitializerParams);
}
;
	return null();
}

//BoundingSphere_obj::~BoundingSphere_obj() { }

Dynamic BoundingSphere_obj::__CreateEmpty() { return  new BoundingSphere_obj; }
hx::ObjectPtr< BoundingSphere_obj > BoundingSphere_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< BoundingSphere_obj > result = new BoundingSphere_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic BoundingSphere_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BoundingSphere_obj > result = new BoundingSphere_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *BoundingSphere_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::intern::INativeBinding_obj)) return operator ::org::gameplay3d::intern::INativeBinding_obj *();
	if (inType==typeid( ::org::gameplay3d::immutable::IBoundingSphere_obj)) return operator ::org::gameplay3d::immutable::IBoundingSphere_obj *();
	return super::__ToInterface(inType);
}

Dynamic BoundingSphere_obj::impersonate( Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.BoundingSphere","impersonate",0xb43792c9,"org.gameplay3d.BoundingSphere.impersonate","org/gameplay3d/BoundingSphere.hx",33,0x618473e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(34)
	bool initialized = (this->nativeObject != null());		HX_STACK_VAR(initialized,"initialized");
	HX_STACK_LINE(35)
	this->super::impersonate(nativeObject);
	HX_STACK_LINE(28)
	if (((this->center == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(36)
			Dynamic nativeObject1 = ::org::gameplay3d::BoundingSphere_obj::hx_BoundingSphere_property_center_get(nativeObject);		HX_STACK_VAR(nativeObject1,"nativeObject1");
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
		this->center = _g1;
	}
	else{
		HX_STACK_LINE(36)
		Dynamic _g2 = ::org::gameplay3d::BoundingSphere_obj::hx_BoundingSphere_property_center_get(nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g3 = this->center->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		this->center = _g3;
	}
	HX_STACK_LINE(37)
	return hx::ObjectPtr<OBJ_>(this);
}


bool BoundingSphere_obj::intersects_BBox( ::org::gameplay3d::immutable::IBoundingBox box){
	HX_STACK_FRAME("org.gameplay3d.BoundingSphere","intersects_BBox",0x6630f724,"org.gameplay3d.BoundingSphere.intersects_BBox","org/gameplay3d/BoundingSphere.hx",67,0x618473e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(box,"box")
	HX_STACK_LINE(67)
	return ::org::gameplay3d::BoundingSphere_obj::hx_BoundingSphere_intersects_BBox(this->nativeObject,(  (((box == null()))) ? Dynamic(null()) : Dynamic(box->__Field(HX_CSTRING("nativeObject"),true)) ));
}


HX_DEFINE_DYNAMIC_FUNC1(BoundingSphere_obj,intersects_BBox,return )

bool BoundingSphere_obj::intersects_BSphr( ::org::gameplay3d::immutable::IBoundingSphere sphere){
	HX_STACK_FRAME("org.gameplay3d.BoundingSphere","intersects_BSphr",0x0fe49dae,"org.gameplay3d.BoundingSphere.intersects_BSphr","org/gameplay3d/BoundingSphere.hx",73,0x618473e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sphere,"sphere")
	HX_STACK_LINE(73)
	return ::org::gameplay3d::BoundingSphere_obj::hx_BoundingSphere_intersects_BSphr(this->nativeObject,(  (((sphere == null()))) ? Dynamic(null()) : Dynamic(sphere->__Field(HX_CSTRING("nativeObject"),true)) ));
}


HX_DEFINE_DYNAMIC_FUNC1(BoundingSphere_obj,intersects_BSphr,return )

bool BoundingSphere_obj::intersects_Frstm( ::org::gameplay3d::immutable::IFrustum frustum){
	HX_STACK_FRAME("org.gameplay3d.BoundingSphere","intersects_Frstm",0x71fede25,"org.gameplay3d.BoundingSphere.intersects_Frstm","org/gameplay3d/BoundingSphere.hx",79,0x618473e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(frustum,"frustum")
	HX_STACK_LINE(79)
	return ::org::gameplay3d::BoundingSphere_obj::hx_BoundingSphere_intersects_Frstm(this->nativeObject,(  (((frustum == null()))) ? Dynamic(null()) : Dynamic(frustum->__Field(HX_CSTRING("nativeObject"),true)) ));
}


HX_DEFINE_DYNAMIC_FUNC1(BoundingSphere_obj,intersects_Frstm,return )

Float BoundingSphere_obj::intersects_Plane( ::org::gameplay3d::immutable::IPlane plane){
	HX_STACK_FRAME("org.gameplay3d.BoundingSphere","intersects_Plane",0x2ffbb5a1,"org.gameplay3d.BoundingSphere.intersects_Plane","org/gameplay3d/BoundingSphere.hx",85,0x618473e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(plane,"plane")
	HX_STACK_LINE(85)
	return ::org::gameplay3d::BoundingSphere_obj::hx_BoundingSphere_intersects_Plane(this->nativeObject,(  (((plane == null()))) ? Dynamic(null()) : Dynamic(plane->__Field(HX_CSTRING("nativeObject"),true)) ));
}


HX_DEFINE_DYNAMIC_FUNC1(BoundingSphere_obj,intersects_Plane,return )

Float BoundingSphere_obj::intersects_Ray( ::org::gameplay3d::Ray ray){
	HX_STACK_FRAME("org.gameplay3d.BoundingSphere","intersects_Ray",0xd72dc1ef,"org.gameplay3d.BoundingSphere.intersects_Ray","org/gameplay3d/BoundingSphere.hx",91,0x618473e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ray,"ray")
	HX_STACK_LINE(91)
	return ::org::gameplay3d::BoundingSphere_obj::hx_BoundingSphere_intersects_Ray(this->nativeObject,(  (((ray == null()))) ? Dynamic(null()) : Dynamic(ray->nativeObject) ));
}


HX_DEFINE_DYNAMIC_FUNC1(BoundingSphere_obj,intersects_Ray,return )

bool BoundingSphere_obj::isEmpty( ){
	HX_STACK_FRAME("org.gameplay3d.BoundingSphere","isEmpty",0xdf092dd3,"org.gameplay3d.BoundingSphere.isEmpty","org/gameplay3d/BoundingSphere.hx",97,0x618473e0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(97)
	return ::org::gameplay3d::BoundingSphere_obj::hx_BoundingSphere_isEmpty(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(BoundingSphere_obj,isEmpty,return )

Void BoundingSphere_obj::merge_BBox( ::org::gameplay3d::immutable::IBoundingBox box){
{
		HX_STACK_FRAME("org.gameplay3d.BoundingSphere","merge_BBox",0xa17cf380,"org.gameplay3d.BoundingSphere.merge_BBox","org/gameplay3d/BoundingSphere.hx",103,0x618473e0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(box,"box")
		HX_STACK_LINE(103)
		::org::gameplay3d::BoundingSphere_obj::hx_BoundingSphere_merge_BBox(this->nativeObject,(  (((box == null()))) ? Dynamic(null()) : Dynamic(box->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BoundingSphere_obj,merge_BBox,(void))

Void BoundingSphere_obj::merge_BSphr( ::org::gameplay3d::immutable::IBoundingSphere sphere){
{
		HX_STACK_FRAME("org.gameplay3d.BoundingSphere","merge_BSphr",0xb71571d2,"org.gameplay3d.BoundingSphere.merge_BSphr","org/gameplay3d/BoundingSphere.hx",109,0x618473e0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sphere,"sphere")
		HX_STACK_LINE(109)
		::org::gameplay3d::BoundingSphere_obj::hx_BoundingSphere_merge_BSphr(this->nativeObject,(  (((sphere == null()))) ? Dynamic(null()) : Dynamic(sphere->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BoundingSphere_obj,merge_BSphr,(void))

Void BoundingSphere_obj::set_BBox( ::org::gameplay3d::immutable::IBoundingBox box){
{
		HX_STACK_FRAME("org.gameplay3d.BoundingSphere","set_BBox",0xdb66ee56,"org.gameplay3d.BoundingSphere.set_BBox","org/gameplay3d/BoundingSphere.hx",115,0x618473e0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(box,"box")
		HX_STACK_LINE(115)
		::org::gameplay3d::BoundingSphere_obj::hx_BoundingSphere_set_BBox(this->nativeObject,(  (((box == null()))) ? Dynamic(null()) : Dynamic(box->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BoundingSphere_obj,set_BBox,(void))

Void BoundingSphere_obj::set_BSphr( ::org::gameplay3d::immutable::IBoundingSphere sphere){
{
		HX_STACK_FRAME("org.gameplay3d.BoundingSphere","set_BSphr",0x29e6f23c,"org.gameplay3d.BoundingSphere.set_BSphr","org/gameplay3d/BoundingSphere.hx",121,0x618473e0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sphere,"sphere")
		HX_STACK_LINE(121)
		::org::gameplay3d::BoundingSphere_obj::hx_BoundingSphere_set_BSphr(this->nativeObject,(  (((sphere == null()))) ? Dynamic(null()) : Dynamic(sphere->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BoundingSphere_obj,set_BSphr,(void))

Void BoundingSphere_obj::set_V3_Flt( ::org::gameplay3d::immutable::IVector3 center,Float radius){
{
		HX_STACK_FRAME("org.gameplay3d.BoundingSphere","set_V3_Flt",0x07273799,"org.gameplay3d.BoundingSphere.set_V3_Flt","org/gameplay3d/BoundingSphere.hx",127,0x618473e0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(center,"center")
		HX_STACK_ARG(radius,"radius")
		HX_STACK_LINE(127)
		::org::gameplay3d::BoundingSphere_obj::hx_BoundingSphere_set_V3_Flt(this->nativeObject,(  (((center == null()))) ? Dynamic(null()) : Dynamic(center->__Field(HX_CSTRING("nativeObject"),true)) ),radius);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BoundingSphere_obj,set_V3_Flt,(void))

Void BoundingSphere_obj::transform( ::org::gameplay3d::immutable::IMatrix matrix){
{
		HX_STACK_FRAME("org.gameplay3d.BoundingSphere","transform",0x10db80fc,"org.gameplay3d.BoundingSphere.transform","org/gameplay3d/BoundingSphere.hx",133,0x618473e0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(133)
		::org::gameplay3d::BoundingSphere_obj::hx_BoundingSphere_transform(this->nativeObject,(  (((matrix == null()))) ? Dynamic(null()) : Dynamic(matrix->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BoundingSphere_obj,transform,(void))

Float BoundingSphere_obj::get_radius( ){
	HX_STACK_FRAME("org.gameplay3d.BoundingSphere","get_radius",0xb57f0a8b,"org.gameplay3d.BoundingSphere.get_radius","org/gameplay3d/BoundingSphere.hx",164,0x618473e0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(164)
	return ::org::gameplay3d::BoundingSphere_obj::hx_BoundingSphere_property_radius_get(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(BoundingSphere_obj,get_radius,return )

Float BoundingSphere_obj::set_radius( Float value){
	HX_STACK_FRAME("org.gameplay3d.BoundingSphere","set_radius",0xb8fca8ff,"org.gameplay3d.BoundingSphere.set_radius","org/gameplay3d/BoundingSphere.hx",169,0x618473e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(169)
	return ::org::gameplay3d::BoundingSphere_obj::hx_BoundingSphere_property_radius_set(this->nativeObject,value);
}


HX_DEFINE_DYNAMIC_FUNC1(BoundingSphere_obj,set_radius,return )

::org::gameplay3d::BoundingSphere BoundingSphere_obj::_empty;

::org::gameplay3d::BoundingSphere BoundingSphere_obj::make( ){
	HX_STACK_FRAME("org.gameplay3d.BoundingSphere","make",0x1b0e905e,"org.gameplay3d.BoundingSphere.make","org/gameplay3d/BoundingSphere.hx",42,0x618473e0)
	HX_STACK_LINE(43)
	Dynamic _g = ::org::gameplay3d::BoundingSphere_obj::constructNativeObject();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(43)
	return ::org::gameplay3d::BoundingSphere_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(BoundingSphere_obj,make,return )

::org::gameplay3d::BoundingSphere BoundingSphere_obj::make_BSphr( ::org::gameplay3d::immutable::IBoundingSphere copy){
	HX_STACK_FRAME("org.gameplay3d.BoundingSphere","make_BSphr",0x64c7c868,"org.gameplay3d.BoundingSphere.make_BSphr","org/gameplay3d/BoundingSphere.hx",48,0x618473e0)
	HX_STACK_ARG(copy,"copy")
	HX_STACK_LINE(49)
	Dynamic _g = ::org::gameplay3d::BoundingSphere_obj::constructNativeObject_BSphr(copy);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(49)
	return ::org::gameplay3d::BoundingSphere_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BoundingSphere_obj,make_BSphr,return )

::org::gameplay3d::BoundingSphere BoundingSphere_obj::make_V3_Flt( ::org::gameplay3d::immutable::IVector3 center,Float radius){
	HX_STACK_FRAME("org.gameplay3d.BoundingSphere","make_V3_Flt",0x5101c7ed,"org.gameplay3d.BoundingSphere.make_V3_Flt","org/gameplay3d/BoundingSphere.hx",54,0x618473e0)
	HX_STACK_ARG(center,"center")
	HX_STACK_ARG(radius,"radius")
	HX_STACK_LINE(55)
	Dynamic _g = ::org::gameplay3d::BoundingSphere_obj::constructNativeObject_V3_Flt(center,radius);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(55)
	return ::org::gameplay3d::BoundingSphere_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BoundingSphere_obj,make_V3_Flt,return )

::org::gameplay3d::immutable::IBoundingSphere BoundingSphere_obj::empty( ){
	HX_STACK_FRAME("org.gameplay3d.BoundingSphere","empty",0xfe6d861d,"org.gameplay3d.BoundingSphere.empty","org/gameplay3d/BoundingSphere.hx",61,0x618473e0)
	HX_STACK_LINE(28)
	if (((::org::gameplay3d::BoundingSphere_obj::_empty == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::BoundingSphere _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::BoundingSphere >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(61)
			Dynamic nativeObject = ::org::gameplay3d::BoundingSphere_obj::hx_BoundingSphere_static_empty();		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::BoundingSphere result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::BoundingSphere _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return ::org::gameplay3d::BoundingSphere_obj::_empty = _g1;
	}
	else{
		HX_STACK_LINE(61)
		Dynamic _g2 = ::org::gameplay3d::BoundingSphere_obj::hx_BoundingSphere_static_empty();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::BoundingSphere _g3 = ::org::gameplay3d::BoundingSphere_obj::_empty->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return ::org::gameplay3d::BoundingSphere_obj::_empty = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(BoundingSphere_obj,empty,return )

Dynamic BoundingSphere_obj::constructNativeObject( ){
	HX_STACK_FRAME("org.gameplay3d.BoundingSphere","constructNativeObject",0xdd44ddfd,"org.gameplay3d.BoundingSphere.constructNativeObject","org/gameplay3d/BoundingSphere.hx",143,0x618473e0)
	HX_STACK_LINE(143)
	return ::org::gameplay3d::BoundingSphere_obj::hx_BoundingSphere_Construct();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(BoundingSphere_obj,constructNativeObject,return )

Dynamic BoundingSphere_obj::constructNativeObject_BSphr( ::org::gameplay3d::immutable::IBoundingSphere copy){
	HX_STACK_FRAME("org.gameplay3d.BoundingSphere","constructNativeObject_BSphr",0x7c0a9747,"org.gameplay3d.BoundingSphere.constructNativeObject_BSphr","org/gameplay3d/BoundingSphere.hx",149,0x618473e0)
	HX_STACK_ARG(copy,"copy")
	HX_STACK_LINE(149)
	return ::org::gameplay3d::BoundingSphere_obj::hx_BoundingSphere_Construct_BSphr((  (((copy == null()))) ? Dynamic(null()) : Dynamic(copy->__Field(HX_CSTRING("nativeObject"),true)) ));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BoundingSphere_obj,constructNativeObject_BSphr,return )

Dynamic BoundingSphere_obj::constructNativeObject_V3_Flt( ::org::gameplay3d::immutable::IVector3 center,Float radius){
	HX_STACK_FRAME("org.gameplay3d.BoundingSphere","constructNativeObject_V3_Flt",0x9433fc2e,"org.gameplay3d.BoundingSphere.constructNativeObject_V3_Flt","org/gameplay3d/BoundingSphere.hx",155,0x618473e0)
	HX_STACK_ARG(center,"center")
	HX_STACK_ARG(radius,"radius")
	HX_STACK_LINE(155)
	return ::org::gameplay3d::BoundingSphere_obj::hx_BoundingSphere_Construct_V3_Flt((  (((center == null()))) ? Dynamic(null()) : Dynamic(center->__Field(HX_CSTRING("nativeObject"),true)) ),radius);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BoundingSphere_obj,constructNativeObject_V3_Flt,return )

Dynamic BoundingSphere_obj::hx_BoundingSphere_Construct;

Dynamic BoundingSphere_obj::hx_BoundingSphere_Construct_BSphr;

Dynamic BoundingSphere_obj::hx_BoundingSphere_Construct_V3_Flt;

Dynamic BoundingSphere_obj::hx_BoundingSphere_static_empty;

Dynamic BoundingSphere_obj::hx_BoundingSphere_intersects_BBox;

Dynamic BoundingSphere_obj::hx_BoundingSphere_intersects_BSphr;

Dynamic BoundingSphere_obj::hx_BoundingSphere_intersects_Frstm;

Dynamic BoundingSphere_obj::hx_BoundingSphere_intersects_Plane;

Dynamic BoundingSphere_obj::hx_BoundingSphere_intersects_Ray;

Dynamic BoundingSphere_obj::hx_BoundingSphere_isEmpty;

Dynamic BoundingSphere_obj::hx_BoundingSphere_merge_BBox;

Dynamic BoundingSphere_obj::hx_BoundingSphere_merge_BSphr;

Dynamic BoundingSphere_obj::hx_BoundingSphere_set_BBox;

Dynamic BoundingSphere_obj::hx_BoundingSphere_set_BSphr;

Dynamic BoundingSphere_obj::hx_BoundingSphere_set_V3_Flt;

Dynamic BoundingSphere_obj::hx_BoundingSphere_transform;

Dynamic BoundingSphere_obj::hx_BoundingSphere_property_center_get;

Dynamic BoundingSphere_obj::hx_BoundingSphere_property_radius_get;

Dynamic BoundingSphere_obj::hx_BoundingSphere_property_radius_set;


BoundingSphere_obj::BoundingSphere_obj()
{
}

void BoundingSphere_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BoundingSphere);
	HX_MARK_MEMBER_NAME(center,"center");
	::org::gameplay3d::intern::NativeBinding_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BoundingSphere_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(center,"center");
	::org::gameplay3d::intern::NativeBinding_obj::__Visit(HX_VISIT_ARG);
}

Dynamic BoundingSphere_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { return make_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_empty") ) { return _empty; }
		if (HX_FIELD_EQ(inName,"center") ) { return center; }
		if (HX_FIELD_EQ(inName,"radius") ) { return get_radius(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isEmpty") ) { return isEmpty_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_BBox") ) { return set_BBox_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_BSphr") ) { return set_BSphr_dyn(); }
		if (HX_FIELD_EQ(inName,"transform") ) { return transform_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"make_BSphr") ) { return make_BSphr_dyn(); }
		if (HX_FIELD_EQ(inName,"merge_BBox") ) { return merge_BBox_dyn(); }
		if (HX_FIELD_EQ(inName,"set_V3_Flt") ) { return set_V3_Flt_dyn(); }
		if (HX_FIELD_EQ(inName,"get_radius") ) { return get_radius_dyn(); }
		if (HX_FIELD_EQ(inName,"set_radius") ) { return set_radius_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"make_V3_Flt") ) { return make_V3_Flt_dyn(); }
		if (HX_FIELD_EQ(inName,"impersonate") ) { return impersonate_dyn(); }
		if (HX_FIELD_EQ(inName,"merge_BSphr") ) { return merge_BSphr_dyn(); }
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
	case 25:
		if (HX_FIELD_EQ(inName,"hx_BoundingSphere_isEmpty") ) { return hx_BoundingSphere_isEmpty; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_BoundingSphere_set_BBox") ) { return hx_BoundingSphere_set_BBox; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"constructNativeObject_BSphr") ) { return constructNativeObject_BSphr_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_BoundingSphere_Construct") ) { return hx_BoundingSphere_Construct; }
		if (HX_FIELD_EQ(inName,"hx_BoundingSphere_set_BSphr") ) { return hx_BoundingSphere_set_BSphr; }
		if (HX_FIELD_EQ(inName,"hx_BoundingSphere_transform") ) { return hx_BoundingSphere_transform; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"constructNativeObject_V3_Flt") ) { return constructNativeObject_V3_Flt_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_BoundingSphere_merge_BBox") ) { return hx_BoundingSphere_merge_BBox; }
		if (HX_FIELD_EQ(inName,"hx_BoundingSphere_set_V3_Flt") ) { return hx_BoundingSphere_set_V3_Flt; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_BoundingSphere_merge_BSphr") ) { return hx_BoundingSphere_merge_BSphr; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"hx_BoundingSphere_static_empty") ) { return hx_BoundingSphere_static_empty; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"hx_BoundingSphere_intersects_Ray") ) { return hx_BoundingSphere_intersects_Ray; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"hx_BoundingSphere_Construct_BSphr") ) { return hx_BoundingSphere_Construct_BSphr; }
		if (HX_FIELD_EQ(inName,"hx_BoundingSphere_intersects_BBox") ) { return hx_BoundingSphere_intersects_BBox; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"hx_BoundingSphere_Construct_V3_Flt") ) { return hx_BoundingSphere_Construct_V3_Flt; }
		if (HX_FIELD_EQ(inName,"hx_BoundingSphere_intersects_BSphr") ) { return hx_BoundingSphere_intersects_BSphr; }
		if (HX_FIELD_EQ(inName,"hx_BoundingSphere_intersects_Frstm") ) { return hx_BoundingSphere_intersects_Frstm; }
		if (HX_FIELD_EQ(inName,"hx_BoundingSphere_intersects_Plane") ) { return hx_BoundingSphere_intersects_Plane; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"hx_BoundingSphere_property_center_get") ) { return hx_BoundingSphere_property_center_get; }
		if (HX_FIELD_EQ(inName,"hx_BoundingSphere_property_radius_get") ) { return hx_BoundingSphere_property_radius_get; }
		if (HX_FIELD_EQ(inName,"hx_BoundingSphere_property_radius_set") ) { return hx_BoundingSphere_property_radius_set; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BoundingSphere_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_empty") ) { _empty=inValue.Cast< ::org::gameplay3d::BoundingSphere >(); return inValue; }
		if (HX_FIELD_EQ(inName,"center") ) { center=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"radius") ) { return set_radius(inValue); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_BoundingSphere_isEmpty") ) { hx_BoundingSphere_isEmpty=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_BoundingSphere_set_BBox") ) { hx_BoundingSphere_set_BBox=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"hx_BoundingSphere_Construct") ) { hx_BoundingSphere_Construct=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_BoundingSphere_set_BSphr") ) { hx_BoundingSphere_set_BSphr=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_BoundingSphere_transform") ) { hx_BoundingSphere_transform=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_BoundingSphere_merge_BBox") ) { hx_BoundingSphere_merge_BBox=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_BoundingSphere_set_V3_Flt") ) { hx_BoundingSphere_set_V3_Flt=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_BoundingSphere_merge_BSphr") ) { hx_BoundingSphere_merge_BSphr=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"hx_BoundingSphere_static_empty") ) { hx_BoundingSphere_static_empty=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"hx_BoundingSphere_intersects_Ray") ) { hx_BoundingSphere_intersects_Ray=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"hx_BoundingSphere_Construct_BSphr") ) { hx_BoundingSphere_Construct_BSphr=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_BoundingSphere_intersects_BBox") ) { hx_BoundingSphere_intersects_BBox=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"hx_BoundingSphere_Construct_V3_Flt") ) { hx_BoundingSphere_Construct_V3_Flt=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_BoundingSphere_intersects_BSphr") ) { hx_BoundingSphere_intersects_BSphr=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_BoundingSphere_intersects_Frstm") ) { hx_BoundingSphere_intersects_Frstm=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_BoundingSphere_intersects_Plane") ) { hx_BoundingSphere_intersects_Plane=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"hx_BoundingSphere_property_center_get") ) { hx_BoundingSphere_property_center_get=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_BoundingSphere_property_radius_get") ) { hx_BoundingSphere_property_radius_get=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_BoundingSphere_property_radius_set") ) { hx_BoundingSphere_property_radius_set=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BoundingSphere_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("center"));
	outFields->push(HX_CSTRING("radius"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_empty"),
	HX_CSTRING("make"),
	HX_CSTRING("make_BSphr"),
	HX_CSTRING("make_V3_Flt"),
	HX_CSTRING("empty"),
	HX_CSTRING("constructNativeObject"),
	HX_CSTRING("constructNativeObject_BSphr"),
	HX_CSTRING("constructNativeObject_V3_Flt"),
	HX_CSTRING("hx_BoundingSphere_Construct"),
	HX_CSTRING("hx_BoundingSphere_Construct_BSphr"),
	HX_CSTRING("hx_BoundingSphere_Construct_V3_Flt"),
	HX_CSTRING("hx_BoundingSphere_static_empty"),
	HX_CSTRING("hx_BoundingSphere_intersects_BBox"),
	HX_CSTRING("hx_BoundingSphere_intersects_BSphr"),
	HX_CSTRING("hx_BoundingSphere_intersects_Frstm"),
	HX_CSTRING("hx_BoundingSphere_intersects_Plane"),
	HX_CSTRING("hx_BoundingSphere_intersects_Ray"),
	HX_CSTRING("hx_BoundingSphere_isEmpty"),
	HX_CSTRING("hx_BoundingSphere_merge_BBox"),
	HX_CSTRING("hx_BoundingSphere_merge_BSphr"),
	HX_CSTRING("hx_BoundingSphere_set_BBox"),
	HX_CSTRING("hx_BoundingSphere_set_BSphr"),
	HX_CSTRING("hx_BoundingSphere_set_V3_Flt"),
	HX_CSTRING("hx_BoundingSphere_transform"),
	HX_CSTRING("hx_BoundingSphere_property_center_get"),
	HX_CSTRING("hx_BoundingSphere_property_radius_get"),
	HX_CSTRING("hx_BoundingSphere_property_radius_set"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(BoundingSphere_obj,center),HX_CSTRING("center")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("center"),
	HX_CSTRING("impersonate"),
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
	HX_CSTRING("set_V3_Flt"),
	HX_CSTRING("transform"),
	HX_CSTRING("get_radius"),
	HX_CSTRING("set_radius"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BoundingSphere_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BoundingSphere_obj::_empty,"_empty");
	HX_MARK_MEMBER_NAME(BoundingSphere_obj::hx_BoundingSphere_Construct,"hx_BoundingSphere_Construct");
	HX_MARK_MEMBER_NAME(BoundingSphere_obj::hx_BoundingSphere_Construct_BSphr,"hx_BoundingSphere_Construct_BSphr");
	HX_MARK_MEMBER_NAME(BoundingSphere_obj::hx_BoundingSphere_Construct_V3_Flt,"hx_BoundingSphere_Construct_V3_Flt");
	HX_MARK_MEMBER_NAME(BoundingSphere_obj::hx_BoundingSphere_static_empty,"hx_BoundingSphere_static_empty");
	HX_MARK_MEMBER_NAME(BoundingSphere_obj::hx_BoundingSphere_intersects_BBox,"hx_BoundingSphere_intersects_BBox");
	HX_MARK_MEMBER_NAME(BoundingSphere_obj::hx_BoundingSphere_intersects_BSphr,"hx_BoundingSphere_intersects_BSphr");
	HX_MARK_MEMBER_NAME(BoundingSphere_obj::hx_BoundingSphere_intersects_Frstm,"hx_BoundingSphere_intersects_Frstm");
	HX_MARK_MEMBER_NAME(BoundingSphere_obj::hx_BoundingSphere_intersects_Plane,"hx_BoundingSphere_intersects_Plane");
	HX_MARK_MEMBER_NAME(BoundingSphere_obj::hx_BoundingSphere_intersects_Ray,"hx_BoundingSphere_intersects_Ray");
	HX_MARK_MEMBER_NAME(BoundingSphere_obj::hx_BoundingSphere_isEmpty,"hx_BoundingSphere_isEmpty");
	HX_MARK_MEMBER_NAME(BoundingSphere_obj::hx_BoundingSphere_merge_BBox,"hx_BoundingSphere_merge_BBox");
	HX_MARK_MEMBER_NAME(BoundingSphere_obj::hx_BoundingSphere_merge_BSphr,"hx_BoundingSphere_merge_BSphr");
	HX_MARK_MEMBER_NAME(BoundingSphere_obj::hx_BoundingSphere_set_BBox,"hx_BoundingSphere_set_BBox");
	HX_MARK_MEMBER_NAME(BoundingSphere_obj::hx_BoundingSphere_set_BSphr,"hx_BoundingSphere_set_BSphr");
	HX_MARK_MEMBER_NAME(BoundingSphere_obj::hx_BoundingSphere_set_V3_Flt,"hx_BoundingSphere_set_V3_Flt");
	HX_MARK_MEMBER_NAME(BoundingSphere_obj::hx_BoundingSphere_transform,"hx_BoundingSphere_transform");
	HX_MARK_MEMBER_NAME(BoundingSphere_obj::hx_BoundingSphere_property_center_get,"hx_BoundingSphere_property_center_get");
	HX_MARK_MEMBER_NAME(BoundingSphere_obj::hx_BoundingSphere_property_radius_get,"hx_BoundingSphere_property_radius_get");
	HX_MARK_MEMBER_NAME(BoundingSphere_obj::hx_BoundingSphere_property_radius_set,"hx_BoundingSphere_property_radius_set");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BoundingSphere_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BoundingSphere_obj::_empty,"_empty");
	HX_VISIT_MEMBER_NAME(BoundingSphere_obj::hx_BoundingSphere_Construct,"hx_BoundingSphere_Construct");
	HX_VISIT_MEMBER_NAME(BoundingSphere_obj::hx_BoundingSphere_Construct_BSphr,"hx_BoundingSphere_Construct_BSphr");
	HX_VISIT_MEMBER_NAME(BoundingSphere_obj::hx_BoundingSphere_Construct_V3_Flt,"hx_BoundingSphere_Construct_V3_Flt");
	HX_VISIT_MEMBER_NAME(BoundingSphere_obj::hx_BoundingSphere_static_empty,"hx_BoundingSphere_static_empty");
	HX_VISIT_MEMBER_NAME(BoundingSphere_obj::hx_BoundingSphere_intersects_BBox,"hx_BoundingSphere_intersects_BBox");
	HX_VISIT_MEMBER_NAME(BoundingSphere_obj::hx_BoundingSphere_intersects_BSphr,"hx_BoundingSphere_intersects_BSphr");
	HX_VISIT_MEMBER_NAME(BoundingSphere_obj::hx_BoundingSphere_intersects_Frstm,"hx_BoundingSphere_intersects_Frstm");
	HX_VISIT_MEMBER_NAME(BoundingSphere_obj::hx_BoundingSphere_intersects_Plane,"hx_BoundingSphere_intersects_Plane");
	HX_VISIT_MEMBER_NAME(BoundingSphere_obj::hx_BoundingSphere_intersects_Ray,"hx_BoundingSphere_intersects_Ray");
	HX_VISIT_MEMBER_NAME(BoundingSphere_obj::hx_BoundingSphere_isEmpty,"hx_BoundingSphere_isEmpty");
	HX_VISIT_MEMBER_NAME(BoundingSphere_obj::hx_BoundingSphere_merge_BBox,"hx_BoundingSphere_merge_BBox");
	HX_VISIT_MEMBER_NAME(BoundingSphere_obj::hx_BoundingSphere_merge_BSphr,"hx_BoundingSphere_merge_BSphr");
	HX_VISIT_MEMBER_NAME(BoundingSphere_obj::hx_BoundingSphere_set_BBox,"hx_BoundingSphere_set_BBox");
	HX_VISIT_MEMBER_NAME(BoundingSphere_obj::hx_BoundingSphere_set_BSphr,"hx_BoundingSphere_set_BSphr");
	HX_VISIT_MEMBER_NAME(BoundingSphere_obj::hx_BoundingSphere_set_V3_Flt,"hx_BoundingSphere_set_V3_Flt");
	HX_VISIT_MEMBER_NAME(BoundingSphere_obj::hx_BoundingSphere_transform,"hx_BoundingSphere_transform");
	HX_VISIT_MEMBER_NAME(BoundingSphere_obj::hx_BoundingSphere_property_center_get,"hx_BoundingSphere_property_center_get");
	HX_VISIT_MEMBER_NAME(BoundingSphere_obj::hx_BoundingSphere_property_radius_get,"hx_BoundingSphere_property_radius_get");
	HX_VISIT_MEMBER_NAME(BoundingSphere_obj::hx_BoundingSphere_property_radius_set,"hx_BoundingSphere_property_radius_set");
};

#endif

Class BoundingSphere_obj::__mClass;

void BoundingSphere_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.BoundingSphere"), hx::TCanCast< BoundingSphere_obj> ,sStaticFields,sMemberFields,
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

void BoundingSphere_obj::__boot()
{
	hx_BoundingSphere_Construct= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::BoundingSphere >(),HX_CSTRING("Construct"),(int)0);
	hx_BoundingSphere_Construct_BSphr= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::BoundingSphere >(),HX_CSTRING("Construct_BSphr"),(int)1);
	hx_BoundingSphere_Construct_V3_Flt= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::BoundingSphere >(),HX_CSTRING("Construct_V3_Flt"),(int)2);
	hx_BoundingSphere_static_empty= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::BoundingSphere >(),HX_CSTRING("static_empty"),(int)0);
	hx_BoundingSphere_intersects_BBox= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::BoundingSphere >(),HX_CSTRING("intersects_BBox"),(int)2);
	hx_BoundingSphere_intersects_BSphr= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::BoundingSphere >(),HX_CSTRING("intersects_BSphr"),(int)2);
	hx_BoundingSphere_intersects_Frstm= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::BoundingSphere >(),HX_CSTRING("intersects_Frstm"),(int)2);
	hx_BoundingSphere_intersects_Plane= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::BoundingSphere >(),HX_CSTRING("intersects_Plane"),(int)2);
	hx_BoundingSphere_intersects_Ray= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::BoundingSphere >(),HX_CSTRING("intersects_Ray"),(int)2);
	hx_BoundingSphere_isEmpty= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::BoundingSphere >(),HX_CSTRING("isEmpty"),(int)1);
	hx_BoundingSphere_merge_BBox= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::BoundingSphere >(),HX_CSTRING("merge_BBox"),(int)2);
	hx_BoundingSphere_merge_BSphr= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::BoundingSphere >(),HX_CSTRING("merge_BSphr"),(int)2);
	hx_BoundingSphere_set_BBox= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::BoundingSphere >(),HX_CSTRING("set_BBox"),(int)2);
	hx_BoundingSphere_set_BSphr= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::BoundingSphere >(),HX_CSTRING("set_BSphr"),(int)2);
	hx_BoundingSphere_set_V3_Flt= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::BoundingSphere >(),HX_CSTRING("set_V3_Flt"),(int)3);
	hx_BoundingSphere_transform= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::BoundingSphere >(),HX_CSTRING("transform"),(int)2);
	hx_BoundingSphere_property_center_get= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::BoundingSphere >(),HX_CSTRING("property_center_get"),(int)1);
	hx_BoundingSphere_property_radius_get= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::BoundingSphere >(),HX_CSTRING("property_radius_get"),(int)1);
	hx_BoundingSphere_property_radius_set= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::BoundingSphere >(),HX_CSTRING("property_radius_set"),(int)2);
}

} // end namespace org
} // end namespace gameplay3d
