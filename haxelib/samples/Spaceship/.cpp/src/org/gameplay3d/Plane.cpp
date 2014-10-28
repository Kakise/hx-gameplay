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
#ifndef INCLUDED_org_gameplay3d_Plane
#include <org/gameplay3d/Plane.h>
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

Void Plane_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.Plane","new",0x9098d201,"org.gameplay3d.Plane.new","org/gameplay3d/Plane.hx",17,0x4205362f)
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

//Plane_obj::~Plane_obj() { }

Dynamic Plane_obj::__CreateEmpty() { return  new Plane_obj; }
hx::ObjectPtr< Plane_obj > Plane_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< Plane_obj > result = new Plane_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic Plane_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Plane_obj > result = new Plane_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *Plane_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::immutable::IPlane_obj)) return operator ::org::gameplay3d::immutable::IPlane_obj *();
	if (inType==typeid( ::org::gameplay3d::intern::INativeBinding_obj)) return operator ::org::gameplay3d::intern::INativeBinding_obj *();
	return super::__ToInterface(inType);
}

Float Plane_obj::distance( ::org::gameplay3d::immutable::IVector3 point){
	HX_STACK_FRAME("org.gameplay3d.Plane","distance",0x7c6609f4,"org.gameplay3d.Plane.distance","org/gameplay3d/Plane.hx",60,0x4205362f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(60)
	return ::org::gameplay3d::Plane_obj::hx_Plane_distance(this->nativeObject,(  (((point == null()))) ? Dynamic(null()) : Dynamic(point->__Field(HX_CSTRING("nativeObject"),true)) ));
}


HX_DEFINE_DYNAMIC_FUNC1(Plane_obj,distance,return )

Float Plane_obj::getDistance( ){
	HX_STACK_FRAME("org.gameplay3d.Plane","getDistance",0x0a6e608c,"org.gameplay3d.Plane.getDistance","org/gameplay3d/Plane.hx",66,0x4205362f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(66)
	return ::org::gameplay3d::Plane_obj::hx_Plane_getDistance(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Plane_obj,getDistance,return )

::org::gameplay3d::immutable::IVector3 Plane_obj::getNormal( ){
	HX_STACK_FRAME("org.gameplay3d.Plane","getNormal",0xfb3b6bbe,"org.gameplay3d.Plane.getNormal","org/gameplay3d/Plane.hx",72,0x4205362f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_normal == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(72)
			Dynamic nativeObject = ::org::gameplay3d::Plane_obj::hx_Plane_getNormal(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
		return this->_normal = _g1;
	}
	else{
		HX_STACK_LINE(72)
		Dynamic _g2 = ::org::gameplay3d::Plane_obj::hx_Plane_getNormal(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g3 = this->_normal->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_normal = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Plane_obj,getNormal,return )

Float Plane_obj::intersects_BBox( ::org::gameplay3d::immutable::IBoundingBox box){
	HX_STACK_FRAME("org.gameplay3d.Plane","intersects_BBox",0x1da706b5,"org.gameplay3d.Plane.intersects_BBox","org/gameplay3d/Plane.hx",84,0x4205362f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(box,"box")
	HX_STACK_LINE(84)
	return ::org::gameplay3d::Plane_obj::hx_Plane_intersects_BBox(this->nativeObject,(  (((box == null()))) ? Dynamic(null()) : Dynamic(box->__Field(HX_CSTRING("nativeObject"),true)) ));
}


HX_DEFINE_DYNAMIC_FUNC1(Plane_obj,intersects_BBox,return )

Float Plane_obj::intersects_BSphr( ::org::gameplay3d::immutable::IBoundingSphere sphere){
	HX_STACK_FRAME("org.gameplay3d.Plane","intersects_BSphr",0xdfbc2cfd,"org.gameplay3d.Plane.intersects_BSphr","org/gameplay3d/Plane.hx",90,0x4205362f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sphere,"sphere")
	HX_STACK_LINE(90)
	return ::org::gameplay3d::Plane_obj::hx_Plane_intersects_BSphr(this->nativeObject,(  (((sphere == null()))) ? Dynamic(null()) : Dynamic(sphere->__Field(HX_CSTRING("nativeObject"),true)) ));
}


HX_DEFINE_DYNAMIC_FUNC1(Plane_obj,intersects_BSphr,return )

Float Plane_obj::intersects_Frstm( ::org::gameplay3d::immutable::IFrustum frustum){
	HX_STACK_FRAME("org.gameplay3d.Plane","intersects_Frstm",0x41d66d74,"org.gameplay3d.Plane.intersects_Frstm","org/gameplay3d/Plane.hx",96,0x4205362f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(frustum,"frustum")
	HX_STACK_LINE(96)
	return ::org::gameplay3d::Plane_obj::hx_Plane_intersects_Frstm(this->nativeObject,(  (((frustum == null()))) ? Dynamic(null()) : Dynamic(frustum->__Field(HX_CSTRING("nativeObject"),true)) ));
}


HX_DEFINE_DYNAMIC_FUNC1(Plane_obj,intersects_Frstm,return )

Float Plane_obj::intersects_Plane( ::org::gameplay3d::immutable::IPlane plane){
	HX_STACK_FRAME("org.gameplay3d.Plane","intersects_Plane",0xffd344f0,"org.gameplay3d.Plane.intersects_Plane","org/gameplay3d/Plane.hx",102,0x4205362f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(plane,"plane")
	HX_STACK_LINE(102)
	return ::org::gameplay3d::Plane_obj::hx_Plane_intersects_Plane(this->nativeObject,(  (((plane == null()))) ? Dynamic(null()) : Dynamic(plane->__Field(HX_CSTRING("nativeObject"),true)) ));
}


HX_DEFINE_DYNAMIC_FUNC1(Plane_obj,intersects_Plane,return )

Float Plane_obj::intersects_Ray( ::org::gameplay3d::Ray ray){
	HX_STACK_FRAME("org.gameplay3d.Plane","intersects_Ray",0x69cb8f7e,"org.gameplay3d.Plane.intersects_Ray","org/gameplay3d/Plane.hx",108,0x4205362f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ray,"ray")
	HX_STACK_LINE(108)
	return ::org::gameplay3d::Plane_obj::hx_Plane_intersects_Ray(this->nativeObject,(  (((ray == null()))) ? Dynamic(null()) : Dynamic(ray->nativeObject) ));
}


HX_DEFINE_DYNAMIC_FUNC1(Plane_obj,intersects_Ray,return )

bool Plane_obj::isParallel( ::org::gameplay3d::immutable::IPlane plane){
	HX_STACK_FRAME("org.gameplay3d.Plane","isParallel",0x562ca150,"org.gameplay3d.Plane.isParallel","org/gameplay3d/Plane.hx",114,0x4205362f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(plane,"plane")
	HX_STACK_LINE(114)
	return ::org::gameplay3d::Plane_obj::hx_Plane_isParallel(this->nativeObject,(  (((plane == null()))) ? Dynamic(null()) : Dynamic(plane->__Field(HX_CSTRING("nativeObject"),true)) ));
}


HX_DEFINE_DYNAMIC_FUNC1(Plane_obj,isParallel,return )

Void Plane_obj::set_Plane( ::org::gameplay3d::immutable::IPlane plane){
{
		HX_STACK_FRAME("org.gameplay3d.Plane","set_Plane",0xcd312700,"org.gameplay3d.Plane.set_Plane","org/gameplay3d/Plane.hx",120,0x4205362f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(plane,"plane")
		HX_STACK_LINE(120)
		::org::gameplay3d::Plane_obj::hx_Plane_set_Plane(this->nativeObject,(  (((plane == null()))) ? Dynamic(null()) : Dynamic(plane->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Plane_obj,set_Plane,(void))

Void Plane_obj::set_V3_Flt( ::org::gameplay3d::immutable::IVector3 normal,Float distance){
{
		HX_STACK_FRAME("org.gameplay3d.Plane","set_V3_Flt",0x50ad51a8,"org.gameplay3d.Plane.set_V3_Flt","org/gameplay3d/Plane.hx",126,0x4205362f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(normal,"normal")
		HX_STACK_ARG(distance,"distance")
		HX_STACK_LINE(126)
		::org::gameplay3d::Plane_obj::hx_Plane_set_V3_Flt(this->nativeObject,(  (((normal == null()))) ? Dynamic(null()) : Dynamic(normal->__Field(HX_CSTRING("nativeObject"),true)) ),distance);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Plane_obj,set_V3_Flt,(void))

Void Plane_obj::setDistance( Float distance){
{
		HX_STACK_FRAME("org.gameplay3d.Plane","setDistance",0x14db6798,"org.gameplay3d.Plane.setDistance","org/gameplay3d/Plane.hx",132,0x4205362f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(distance,"distance")
		HX_STACK_LINE(132)
		::org::gameplay3d::Plane_obj::hx_Plane_setDistance(this->nativeObject,distance);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Plane_obj,setDistance,(void))

Void Plane_obj::setNormal_V3( ::org::gameplay3d::immutable::IVector3 normal){
{
		HX_STACK_FRAME("org.gameplay3d.Plane","setNormal_V3",0xc85183b2,"org.gameplay3d.Plane.setNormal_V3","org/gameplay3d/Plane.hx",138,0x4205362f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(normal,"normal")
		HX_STACK_LINE(138)
		::org::gameplay3d::Plane_obj::hx_Plane_setNormal_V3(this->nativeObject,(  (((normal == null()))) ? Dynamic(null()) : Dynamic(normal->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Plane_obj,setNormal_V3,(void))

Void Plane_obj::setNormal_FltX3( Float x,Float y,Float z){
{
		HX_STACK_FRAME("org.gameplay3d.Plane","setNormal_FltX3",0x7c868b34,"org.gameplay3d.Plane.setNormal_FltX3","org/gameplay3d/Plane.hx",144,0x4205362f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(144)
		::org::gameplay3d::Plane_obj::hx_Plane_setNormal_FltX3(this->nativeObject,x,y,z);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Plane_obj,setNormal_FltX3,(void))

Void Plane_obj::transform( ::org::gameplay3d::immutable::IMatrix matrix){
{
		HX_STACK_FRAME("org.gameplay3d.Plane","transform",0x940e9dcd,"org.gameplay3d.Plane.transform","org/gameplay3d/Plane.hx",150,0x4205362f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(150)
		::org::gameplay3d::Plane_obj::hx_Plane_transform(this->nativeObject,(  (((matrix == null()))) ? Dynamic(null()) : Dynamic(matrix->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Plane_obj,transform,(void))

int Plane_obj::INTERSECTS_INTERSECTING;

int Plane_obj::INTERSECTS_FRONT;

int Plane_obj::INTERSECTS_BACK;

::org::gameplay3d::Plane Plane_obj::make( ){
	HX_STACK_FRAME("org.gameplay3d.Plane","make",0xf472a52d,"org.gameplay3d.Plane.make","org/gameplay3d/Plane.hx",35,0x4205362f)
	HX_STACK_LINE(36)
	Dynamic _g = ::org::gameplay3d::Plane_obj::constructNativeObject();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(36)
	return ::org::gameplay3d::Plane_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Plane_obj,make,return )

::org::gameplay3d::Plane Plane_obj::make_Plane( ::org::gameplay3d::immutable::IPlane copy){
	HX_STACK_FRAME("org.gameplay3d.Plane","make_Plane",0xce64fa6a,"org.gameplay3d.Plane.make_Plane","org/gameplay3d/Plane.hx",41,0x4205362f)
	HX_STACK_ARG(copy,"copy")
	HX_STACK_LINE(42)
	Dynamic _g = ::org::gameplay3d::Plane_obj::constructNativeObject_Plane(copy);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(42)
	return ::org::gameplay3d::Plane_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Plane_obj,make_Plane,return )

::org::gameplay3d::Plane Plane_obj::make_V3_Flt( ::org::gameplay3d::immutable::IVector3 normal,Float distance){
	HX_STACK_FRAME("org.gameplay3d.Plane","make_V3_Flt",0x5cd27afe,"org.gameplay3d.Plane.make_V3_Flt","org/gameplay3d/Plane.hx",47,0x4205362f)
	HX_STACK_ARG(normal,"normal")
	HX_STACK_ARG(distance,"distance")
	HX_STACK_LINE(48)
	Dynamic _g = ::org::gameplay3d::Plane_obj::constructNativeObject_V3_Flt(normal,distance);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(48)
	return ::org::gameplay3d::Plane_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Plane_obj,make_V3_Flt,return )

::org::gameplay3d::Plane Plane_obj::make_FltX4( Float normalX,Float normalY,Float normalZ,Float distance){
	HX_STACK_FRAME("org.gameplay3d.Plane","make_FltX4",0x0c7184d8,"org.gameplay3d.Plane.make_FltX4","org/gameplay3d/Plane.hx",53,0x4205362f)
	HX_STACK_ARG(normalX,"normalX")
	HX_STACK_ARG(normalY,"normalY")
	HX_STACK_ARG(normalZ,"normalZ")
	HX_STACK_ARG(distance,"distance")
	HX_STACK_LINE(54)
	Dynamic _g = ::org::gameplay3d::Plane_obj::constructNativeObject_FltX4(normalX,normalY,normalZ,distance);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(54)
	return ::org::gameplay3d::Plane_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Plane_obj,make_FltX4,return )

Void Plane_obj::intersection( ::org::gameplay3d::immutable::IPlane p1,::org::gameplay3d::immutable::IPlane p2,::org::gameplay3d::immutable::IPlane p3,::org::gameplay3d::Vector3 point){
{
		HX_STACK_FRAME("org.gameplay3d.Plane","intersection",0x80c9e488,"org.gameplay3d.Plane.intersection","org/gameplay3d/Plane.hx",78,0x4205362f)
		HX_STACK_ARG(p1,"p1")
		HX_STACK_ARG(p2,"p2")
		HX_STACK_ARG(p3,"p3")
		HX_STACK_ARG(point,"point")
		HX_STACK_LINE(78)
		::org::gameplay3d::Plane_obj::hx_Plane_static_intersection((  (((p1 == null()))) ? Dynamic(null()) : Dynamic(p1->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((p2 == null()))) ? Dynamic(null()) : Dynamic(p2->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((p3 == null()))) ? Dynamic(null()) : Dynamic(p3->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((point == null()))) ? Dynamic(null()) : Dynamic(point->nativeObject) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Plane_obj,intersection,(void))

Dynamic Plane_obj::constructNativeObject( ){
	HX_STACK_FRAME("org.gameplay3d.Plane","constructNativeObject",0xe0d8704e,"org.gameplay3d.Plane.constructNativeObject","org/gameplay3d/Plane.hx",160,0x4205362f)
	HX_STACK_LINE(160)
	return ::org::gameplay3d::Plane_obj::hx_Plane_Construct();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Plane_obj,constructNativeObject,return )

Dynamic Plane_obj::constructNativeObject_Plane( ::org::gameplay3d::immutable::IPlane copy){
	HX_STACK_FRAME("org.gameplay3d.Plane","constructNativeObject_Plane",0x75f9544b,"org.gameplay3d.Plane.constructNativeObject_Plane","org/gameplay3d/Plane.hx",166,0x4205362f)
	HX_STACK_ARG(copy,"copy")
	HX_STACK_LINE(166)
	return ::org::gameplay3d::Plane_obj::hx_Plane_Construct_Plane((  (((copy == null()))) ? Dynamic(null()) : Dynamic(copy->__Field(HX_CSTRING("nativeObject"),true)) ));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Plane_obj,constructNativeObject_Plane,return )

Dynamic Plane_obj::constructNativeObject_V3_Flt( ::org::gameplay3d::immutable::IVector3 normal,Float distance){
	HX_STACK_FRAME("org.gameplay3d.Plane","constructNativeObject_V3_Flt",0x570cc5fd,"org.gameplay3d.Plane.constructNativeObject_V3_Flt","org/gameplay3d/Plane.hx",172,0x4205362f)
	HX_STACK_ARG(normal,"normal")
	HX_STACK_ARG(distance,"distance")
	HX_STACK_LINE(172)
	return ::org::gameplay3d::Plane_obj::hx_Plane_Construct_V3_Flt((  (((normal == null()))) ? Dynamic(null()) : Dynamic(normal->__Field(HX_CSTRING("nativeObject"),true)) ),distance);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Plane_obj,constructNativeObject_V3_Flt,return )

Dynamic Plane_obj::constructNativeObject_FltX4( Float normalX,Float normalY,Float normalZ,Float distance){
	HX_STACK_FRAME("org.gameplay3d.Plane","constructNativeObject_FltX4",0xb405deb9,"org.gameplay3d.Plane.constructNativeObject_FltX4","org/gameplay3d/Plane.hx",178,0x4205362f)
	HX_STACK_ARG(normalX,"normalX")
	HX_STACK_ARG(normalY,"normalY")
	HX_STACK_ARG(normalZ,"normalZ")
	HX_STACK_ARG(distance,"distance")
	HX_STACK_LINE(178)
	return ::org::gameplay3d::Plane_obj::hx_Plane_Construct_FltX4(normalX,normalY,normalZ,distance);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Plane_obj,constructNativeObject_FltX4,return )

Dynamic Plane_obj::hx_Plane_Construct;

Dynamic Plane_obj::hx_Plane_Construct_Plane;

Dynamic Plane_obj::hx_Plane_Construct_V3_Flt;

Dynamic Plane_obj::hx_Plane_Construct_FltX4;

Dynamic Plane_obj::hx_Plane_distance;

Dynamic Plane_obj::hx_Plane_getDistance;

Dynamic Plane_obj::hx_Plane_getNormal;

Dynamic Plane_obj::hx_Plane_static_intersection;

Dynamic Plane_obj::hx_Plane_intersects_BBox;

Dynamic Plane_obj::hx_Plane_intersects_BSphr;

Dynamic Plane_obj::hx_Plane_intersects_Frstm;

Dynamic Plane_obj::hx_Plane_intersects_Plane;

Dynamic Plane_obj::hx_Plane_intersects_Ray;

Dynamic Plane_obj::hx_Plane_isParallel;

Dynamic Plane_obj::hx_Plane_set_Plane;

Dynamic Plane_obj::hx_Plane_set_V3_Flt;

Dynamic Plane_obj::hx_Plane_setDistance;

Dynamic Plane_obj::hx_Plane_setNormal_V3;

Dynamic Plane_obj::hx_Plane_setNormal_FltX3;

Dynamic Plane_obj::hx_Plane_transform;


Plane_obj::Plane_obj()
{
}

void Plane_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Plane);
	HX_MARK_MEMBER_NAME(_normal,"_normal");
	::org::gameplay3d::intern::NativeBinding_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Plane_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_normal,"_normal");
	::org::gameplay3d::intern::NativeBinding_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Plane_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { return make_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_normal") ) { return _normal; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { return distance_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getNormal") ) { return getNormal_dyn(); }
		if (HX_FIELD_EQ(inName,"set_Plane") ) { return set_Plane_dyn(); }
		if (HX_FIELD_EQ(inName,"transform") ) { return transform_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"make_Plane") ) { return make_Plane_dyn(); }
		if (HX_FIELD_EQ(inName,"make_FltX4") ) { return make_FltX4_dyn(); }
		if (HX_FIELD_EQ(inName,"isParallel") ) { return isParallel_dyn(); }
		if (HX_FIELD_EQ(inName,"set_V3_Flt") ) { return set_V3_Flt_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"make_V3_Flt") ) { return make_V3_Flt_dyn(); }
		if (HX_FIELD_EQ(inName,"getDistance") ) { return getDistance_dyn(); }
		if (HX_FIELD_EQ(inName,"setDistance") ) { return setDistance_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"intersection") ) { return intersection_dyn(); }
		if (HX_FIELD_EQ(inName,"setNormal_V3") ) { return setNormal_V3_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"intersects_Ray") ) { return intersects_Ray_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"intersects_BBox") ) { return intersects_BBox_dyn(); }
		if (HX_FIELD_EQ(inName,"setNormal_FltX3") ) { return setNormal_FltX3_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"intersects_BSphr") ) { return intersects_BSphr_dyn(); }
		if (HX_FIELD_EQ(inName,"intersects_Frstm") ) { return intersects_Frstm_dyn(); }
		if (HX_FIELD_EQ(inName,"intersects_Plane") ) { return intersects_Plane_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"hx_Plane_distance") ) { return hx_Plane_distance; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hx_Plane_Construct") ) { return hx_Plane_Construct; }
		if (HX_FIELD_EQ(inName,"hx_Plane_getNormal") ) { return hx_Plane_getNormal; }
		if (HX_FIELD_EQ(inName,"hx_Plane_set_Plane") ) { return hx_Plane_set_Plane; }
		if (HX_FIELD_EQ(inName,"hx_Plane_transform") ) { return hx_Plane_transform; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hx_Plane_isParallel") ) { return hx_Plane_isParallel; }
		if (HX_FIELD_EQ(inName,"hx_Plane_set_V3_Flt") ) { return hx_Plane_set_V3_Flt; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Plane_getDistance") ) { return hx_Plane_getDistance; }
		if (HX_FIELD_EQ(inName,"hx_Plane_setDistance") ) { return hx_Plane_setDistance; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"constructNativeObject") ) { return constructNativeObject_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Plane_setNormal_V3") ) { return hx_Plane_setNormal_V3; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_Plane_intersects_Ray") ) { return hx_Plane_intersects_Ray; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_Plane_Construct_Plane") ) { return hx_Plane_Construct_Plane; }
		if (HX_FIELD_EQ(inName,"hx_Plane_Construct_FltX4") ) { return hx_Plane_Construct_FltX4; }
		if (HX_FIELD_EQ(inName,"hx_Plane_intersects_BBox") ) { return hx_Plane_intersects_BBox; }
		if (HX_FIELD_EQ(inName,"hx_Plane_setNormal_FltX3") ) { return hx_Plane_setNormal_FltX3; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_Plane_Construct_V3_Flt") ) { return hx_Plane_Construct_V3_Flt; }
		if (HX_FIELD_EQ(inName,"hx_Plane_intersects_BSphr") ) { return hx_Plane_intersects_BSphr; }
		if (HX_FIELD_EQ(inName,"hx_Plane_intersects_Frstm") ) { return hx_Plane_intersects_Frstm; }
		if (HX_FIELD_EQ(inName,"hx_Plane_intersects_Plane") ) { return hx_Plane_intersects_Plane; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"constructNativeObject_Plane") ) { return constructNativeObject_Plane_dyn(); }
		if (HX_FIELD_EQ(inName,"constructNativeObject_FltX4") ) { return constructNativeObject_FltX4_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"constructNativeObject_V3_Flt") ) { return constructNativeObject_V3_Flt_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Plane_static_intersection") ) { return hx_Plane_static_intersection; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Plane_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_normal") ) { _normal=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"hx_Plane_distance") ) { hx_Plane_distance=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hx_Plane_Construct") ) { hx_Plane_Construct=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Plane_getNormal") ) { hx_Plane_getNormal=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Plane_set_Plane") ) { hx_Plane_set_Plane=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Plane_transform") ) { hx_Plane_transform=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hx_Plane_isParallel") ) { hx_Plane_isParallel=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Plane_set_V3_Flt") ) { hx_Plane_set_V3_Flt=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Plane_getDistance") ) { hx_Plane_getDistance=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Plane_setDistance") ) { hx_Plane_setDistance=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hx_Plane_setNormal_V3") ) { hx_Plane_setNormal_V3=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_Plane_intersects_Ray") ) { hx_Plane_intersects_Ray=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_Plane_Construct_Plane") ) { hx_Plane_Construct_Plane=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Plane_Construct_FltX4") ) { hx_Plane_Construct_FltX4=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Plane_intersects_BBox") ) { hx_Plane_intersects_BBox=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Plane_setNormal_FltX3") ) { hx_Plane_setNormal_FltX3=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_Plane_Construct_V3_Flt") ) { hx_Plane_Construct_V3_Flt=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Plane_intersects_BSphr") ) { hx_Plane_intersects_BSphr=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Plane_intersects_Frstm") ) { hx_Plane_intersects_Frstm=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Plane_intersects_Plane") ) { hx_Plane_intersects_Plane=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_Plane_static_intersection") ) { hx_Plane_static_intersection=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Plane_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_normal"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("INTERSECTS_INTERSECTING"),
	HX_CSTRING("INTERSECTS_FRONT"),
	HX_CSTRING("INTERSECTS_BACK"),
	HX_CSTRING("make"),
	HX_CSTRING("make_Plane"),
	HX_CSTRING("make_V3_Flt"),
	HX_CSTRING("make_FltX4"),
	HX_CSTRING("intersection"),
	HX_CSTRING("constructNativeObject"),
	HX_CSTRING("constructNativeObject_Plane"),
	HX_CSTRING("constructNativeObject_V3_Flt"),
	HX_CSTRING("constructNativeObject_FltX4"),
	HX_CSTRING("hx_Plane_Construct"),
	HX_CSTRING("hx_Plane_Construct_Plane"),
	HX_CSTRING("hx_Plane_Construct_V3_Flt"),
	HX_CSTRING("hx_Plane_Construct_FltX4"),
	HX_CSTRING("hx_Plane_distance"),
	HX_CSTRING("hx_Plane_getDistance"),
	HX_CSTRING("hx_Plane_getNormal"),
	HX_CSTRING("hx_Plane_static_intersection"),
	HX_CSTRING("hx_Plane_intersects_BBox"),
	HX_CSTRING("hx_Plane_intersects_BSphr"),
	HX_CSTRING("hx_Plane_intersects_Frstm"),
	HX_CSTRING("hx_Plane_intersects_Plane"),
	HX_CSTRING("hx_Plane_intersects_Ray"),
	HX_CSTRING("hx_Plane_isParallel"),
	HX_CSTRING("hx_Plane_set_Plane"),
	HX_CSTRING("hx_Plane_set_V3_Flt"),
	HX_CSTRING("hx_Plane_setDistance"),
	HX_CSTRING("hx_Plane_setNormal_V3"),
	HX_CSTRING("hx_Plane_setNormal_FltX3"),
	HX_CSTRING("hx_Plane_transform"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(Plane_obj,_normal),HX_CSTRING("_normal")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_normal"),
	HX_CSTRING("distance"),
	HX_CSTRING("getDistance"),
	HX_CSTRING("getNormal"),
	HX_CSTRING("intersects_BBox"),
	HX_CSTRING("intersects_BSphr"),
	HX_CSTRING("intersects_Frstm"),
	HX_CSTRING("intersects_Plane"),
	HX_CSTRING("intersects_Ray"),
	HX_CSTRING("isParallel"),
	HX_CSTRING("set_Plane"),
	HX_CSTRING("set_V3_Flt"),
	HX_CSTRING("setDistance"),
	HX_CSTRING("setNormal_V3"),
	HX_CSTRING("setNormal_FltX3"),
	HX_CSTRING("transform"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Plane_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Plane_obj::INTERSECTS_INTERSECTING,"INTERSECTS_INTERSECTING");
	HX_MARK_MEMBER_NAME(Plane_obj::INTERSECTS_FRONT,"INTERSECTS_FRONT");
	HX_MARK_MEMBER_NAME(Plane_obj::INTERSECTS_BACK,"INTERSECTS_BACK");
	HX_MARK_MEMBER_NAME(Plane_obj::hx_Plane_Construct,"hx_Plane_Construct");
	HX_MARK_MEMBER_NAME(Plane_obj::hx_Plane_Construct_Plane,"hx_Plane_Construct_Plane");
	HX_MARK_MEMBER_NAME(Plane_obj::hx_Plane_Construct_V3_Flt,"hx_Plane_Construct_V3_Flt");
	HX_MARK_MEMBER_NAME(Plane_obj::hx_Plane_Construct_FltX4,"hx_Plane_Construct_FltX4");
	HX_MARK_MEMBER_NAME(Plane_obj::hx_Plane_distance,"hx_Plane_distance");
	HX_MARK_MEMBER_NAME(Plane_obj::hx_Plane_getDistance,"hx_Plane_getDistance");
	HX_MARK_MEMBER_NAME(Plane_obj::hx_Plane_getNormal,"hx_Plane_getNormal");
	HX_MARK_MEMBER_NAME(Plane_obj::hx_Plane_static_intersection,"hx_Plane_static_intersection");
	HX_MARK_MEMBER_NAME(Plane_obj::hx_Plane_intersects_BBox,"hx_Plane_intersects_BBox");
	HX_MARK_MEMBER_NAME(Plane_obj::hx_Plane_intersects_BSphr,"hx_Plane_intersects_BSphr");
	HX_MARK_MEMBER_NAME(Plane_obj::hx_Plane_intersects_Frstm,"hx_Plane_intersects_Frstm");
	HX_MARK_MEMBER_NAME(Plane_obj::hx_Plane_intersects_Plane,"hx_Plane_intersects_Plane");
	HX_MARK_MEMBER_NAME(Plane_obj::hx_Plane_intersects_Ray,"hx_Plane_intersects_Ray");
	HX_MARK_MEMBER_NAME(Plane_obj::hx_Plane_isParallel,"hx_Plane_isParallel");
	HX_MARK_MEMBER_NAME(Plane_obj::hx_Plane_set_Plane,"hx_Plane_set_Plane");
	HX_MARK_MEMBER_NAME(Plane_obj::hx_Plane_set_V3_Flt,"hx_Plane_set_V3_Flt");
	HX_MARK_MEMBER_NAME(Plane_obj::hx_Plane_setDistance,"hx_Plane_setDistance");
	HX_MARK_MEMBER_NAME(Plane_obj::hx_Plane_setNormal_V3,"hx_Plane_setNormal_V3");
	HX_MARK_MEMBER_NAME(Plane_obj::hx_Plane_setNormal_FltX3,"hx_Plane_setNormal_FltX3");
	HX_MARK_MEMBER_NAME(Plane_obj::hx_Plane_transform,"hx_Plane_transform");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Plane_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Plane_obj::INTERSECTS_INTERSECTING,"INTERSECTS_INTERSECTING");
	HX_VISIT_MEMBER_NAME(Plane_obj::INTERSECTS_FRONT,"INTERSECTS_FRONT");
	HX_VISIT_MEMBER_NAME(Plane_obj::INTERSECTS_BACK,"INTERSECTS_BACK");
	HX_VISIT_MEMBER_NAME(Plane_obj::hx_Plane_Construct,"hx_Plane_Construct");
	HX_VISIT_MEMBER_NAME(Plane_obj::hx_Plane_Construct_Plane,"hx_Plane_Construct_Plane");
	HX_VISIT_MEMBER_NAME(Plane_obj::hx_Plane_Construct_V3_Flt,"hx_Plane_Construct_V3_Flt");
	HX_VISIT_MEMBER_NAME(Plane_obj::hx_Plane_Construct_FltX4,"hx_Plane_Construct_FltX4");
	HX_VISIT_MEMBER_NAME(Plane_obj::hx_Plane_distance,"hx_Plane_distance");
	HX_VISIT_MEMBER_NAME(Plane_obj::hx_Plane_getDistance,"hx_Plane_getDistance");
	HX_VISIT_MEMBER_NAME(Plane_obj::hx_Plane_getNormal,"hx_Plane_getNormal");
	HX_VISIT_MEMBER_NAME(Plane_obj::hx_Plane_static_intersection,"hx_Plane_static_intersection");
	HX_VISIT_MEMBER_NAME(Plane_obj::hx_Plane_intersects_BBox,"hx_Plane_intersects_BBox");
	HX_VISIT_MEMBER_NAME(Plane_obj::hx_Plane_intersects_BSphr,"hx_Plane_intersects_BSphr");
	HX_VISIT_MEMBER_NAME(Plane_obj::hx_Plane_intersects_Frstm,"hx_Plane_intersects_Frstm");
	HX_VISIT_MEMBER_NAME(Plane_obj::hx_Plane_intersects_Plane,"hx_Plane_intersects_Plane");
	HX_VISIT_MEMBER_NAME(Plane_obj::hx_Plane_intersects_Ray,"hx_Plane_intersects_Ray");
	HX_VISIT_MEMBER_NAME(Plane_obj::hx_Plane_isParallel,"hx_Plane_isParallel");
	HX_VISIT_MEMBER_NAME(Plane_obj::hx_Plane_set_Plane,"hx_Plane_set_Plane");
	HX_VISIT_MEMBER_NAME(Plane_obj::hx_Plane_set_V3_Flt,"hx_Plane_set_V3_Flt");
	HX_VISIT_MEMBER_NAME(Plane_obj::hx_Plane_setDistance,"hx_Plane_setDistance");
	HX_VISIT_MEMBER_NAME(Plane_obj::hx_Plane_setNormal_V3,"hx_Plane_setNormal_V3");
	HX_VISIT_MEMBER_NAME(Plane_obj::hx_Plane_setNormal_FltX3,"hx_Plane_setNormal_FltX3");
	HX_VISIT_MEMBER_NAME(Plane_obj::hx_Plane_transform,"hx_Plane_transform");
};

#endif

Class Plane_obj::__mClass;

void Plane_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.Plane"), hx::TCanCast< Plane_obj> ,sStaticFields,sMemberFields,
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

void Plane_obj::__boot()
{
	INTERSECTS_INTERSECTING= (int)0;
	INTERSECTS_FRONT= (int)1;
	INTERSECTS_BACK= (int)-1;
	hx_Plane_Construct= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Plane >(),HX_CSTRING("Construct"),(int)0);
	hx_Plane_Construct_Plane= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Plane >(),HX_CSTRING("Construct_Plane"),(int)1);
	hx_Plane_Construct_V3_Flt= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Plane >(),HX_CSTRING("Construct_V3_Flt"),(int)2);
	hx_Plane_Construct_FltX4= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Plane >(),HX_CSTRING("Construct_FltX4"),(int)4);
	hx_Plane_distance= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Plane >(),HX_CSTRING("distance"),(int)2);
	hx_Plane_getDistance= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Plane >(),HX_CSTRING("getDistance"),(int)1);
	hx_Plane_getNormal= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Plane >(),HX_CSTRING("getNormal"),(int)1);
	hx_Plane_static_intersection= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Plane >(),HX_CSTRING("static_intersection"),(int)4);
	hx_Plane_intersects_BBox= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Plane >(),HX_CSTRING("intersects_BBox"),(int)2);
	hx_Plane_intersects_BSphr= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Plane >(),HX_CSTRING("intersects_BSphr"),(int)2);
	hx_Plane_intersects_Frstm= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Plane >(),HX_CSTRING("intersects_Frstm"),(int)2);
	hx_Plane_intersects_Plane= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Plane >(),HX_CSTRING("intersects_Plane"),(int)2);
	hx_Plane_intersects_Ray= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Plane >(),HX_CSTRING("intersects_Ray"),(int)2);
	hx_Plane_isParallel= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Plane >(),HX_CSTRING("isParallel"),(int)2);
	hx_Plane_set_Plane= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Plane >(),HX_CSTRING("set_Plane"),(int)2);
	hx_Plane_set_V3_Flt= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Plane >(),HX_CSTRING("set_V3_Flt"),(int)3);
	hx_Plane_setDistance= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Plane >(),HX_CSTRING("setDistance"),(int)2);
	hx_Plane_setNormal_V3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Plane >(),HX_CSTRING("setNormal_V3"),(int)2);
	hx_Plane_setNormal_FltX3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Plane >(),HX_CSTRING("setNormal_FltX3"),(int)4);
	hx_Plane_transform= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Plane >(),HX_CSTRING("transform"),(int)2);
}

} // end namespace org
} // end namespace gameplay3d
