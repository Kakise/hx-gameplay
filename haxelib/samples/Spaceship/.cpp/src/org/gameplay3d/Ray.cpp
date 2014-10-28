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

Void Ray_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.Ray","new",0xbf18e5cf,"org.gameplay3d.Ray.new","org/gameplay3d/Ray.hx",17,0xdd8c6e21)
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

//Ray_obj::~Ray_obj() { }

Dynamic Ray_obj::__CreateEmpty() { return  new Ray_obj; }
hx::ObjectPtr< Ray_obj > Ray_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< Ray_obj > result = new Ray_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic Ray_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Ray_obj > result = new Ray_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::org::gameplay3d::immutable::IVector3 Ray_obj::getDirection( ){
	HX_STACK_FRAME("org.gameplay3d.Ray","getDirection",0x5c51437a,"org.gameplay3d.Ray.getDirection","org/gameplay3d/Ray.hx",59,0xdd8c6e21)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_direction == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(59)
			Dynamic nativeObject = ::org::gameplay3d::Ray_obj::hx_Ray_getDirection(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
		return this->_direction = _g1;
	}
	else{
		HX_STACK_LINE(59)
		Dynamic _g2 = ::org::gameplay3d::Ray_obj::hx_Ray_getDirection(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g3 = this->_direction->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_direction = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Ray_obj,getDirection,return )

::org::gameplay3d::immutable::IVector3 Ray_obj::getOrigin( ){
	HX_STACK_FRAME("org.gameplay3d.Ray","getOrigin",0xb268f5cb,"org.gameplay3d.Ray.getOrigin","org/gameplay3d/Ray.hx",65,0xdd8c6e21)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_origin == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(65)
			Dynamic nativeObject = ::org::gameplay3d::Ray_obj::hx_Ray_getOrigin(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
		return this->_origin = _g1;
	}
	else{
		HX_STACK_LINE(65)
		Dynamic _g2 = ::org::gameplay3d::Ray_obj::hx_Ray_getOrigin(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g3 = this->_origin->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_origin = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Ray_obj,getOrigin,return )

Float Ray_obj::intersects_BBox( ::org::gameplay3d::immutable::IBoundingBox box){
	HX_STACK_FRAME("org.gameplay3d.Ray","intersects_BBox",0x765c9783,"org.gameplay3d.Ray.intersects_BBox","org/gameplay3d/Ray.hx",71,0xdd8c6e21)
	HX_STACK_THIS(this)
	HX_STACK_ARG(box,"box")
	HX_STACK_LINE(71)
	return ::org::gameplay3d::Ray_obj::hx_Ray_intersects_BBox(this->nativeObject,(  (((box == null()))) ? Dynamic(null()) : Dynamic(box->__Field(HX_CSTRING("nativeObject"),true)) ));
}


HX_DEFINE_DYNAMIC_FUNC1(Ray_obj,intersects_BBox,return )

Float Ray_obj::intersects_BSphr( ::org::gameplay3d::immutable::IBoundingSphere sphere){
	HX_STACK_FRAME("org.gameplay3d.Ray","intersects_BSphr",0x25e5506f,"org.gameplay3d.Ray.intersects_BSphr","org/gameplay3d/Ray.hx",77,0xdd8c6e21)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sphere,"sphere")
	HX_STACK_LINE(77)
	return ::org::gameplay3d::Ray_obj::hx_Ray_intersects_BSphr(this->nativeObject,(  (((sphere == null()))) ? Dynamic(null()) : Dynamic(sphere->__Field(HX_CSTRING("nativeObject"),true)) ));
}


HX_DEFINE_DYNAMIC_FUNC1(Ray_obj,intersects_BSphr,return )

Float Ray_obj::intersects_Frstm( ::org::gameplay3d::immutable::IFrustum frustum){
	HX_STACK_FRAME("org.gameplay3d.Ray","intersects_Frstm",0x87ff90e6,"org.gameplay3d.Ray.intersects_Frstm","org/gameplay3d/Ray.hx",83,0xdd8c6e21)
	HX_STACK_THIS(this)
	HX_STACK_ARG(frustum,"frustum")
	HX_STACK_LINE(83)
	return ::org::gameplay3d::Ray_obj::hx_Ray_intersects_Frstm(this->nativeObject,(  (((frustum == null()))) ? Dynamic(null()) : Dynamic(frustum->__Field(HX_CSTRING("nativeObject"),true)) ));
}


HX_DEFINE_DYNAMIC_FUNC1(Ray_obj,intersects_Frstm,return )

Float Ray_obj::intersects_Plane( ::org::gameplay3d::immutable::IPlane plane){
	HX_STACK_FRAME("org.gameplay3d.Ray","intersects_Plane",0x45fc6862,"org.gameplay3d.Ray.intersects_Plane","org/gameplay3d/Ray.hx",89,0xdd8c6e21)
	HX_STACK_THIS(this)
	HX_STACK_ARG(plane,"plane")
	HX_STACK_LINE(89)
	return ::org::gameplay3d::Ray_obj::hx_Ray_intersects_Plane(this->nativeObject,(  (((plane == null()))) ? Dynamic(null()) : Dynamic(plane->__Field(HX_CSTRING("nativeObject"),true)) ));
}


HX_DEFINE_DYNAMIC_FUNC1(Ray_obj,intersects_Plane,return )

Void Ray_obj::set_Ray( ::org::gameplay3d::Ray ray){
{
		HX_STACK_FRAME("org.gameplay3d.Ray","set_Ray",0x72a2e05c,"org.gameplay3d.Ray.set_Ray","org/gameplay3d/Ray.hx",95,0xdd8c6e21)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ray,"ray")
		HX_STACK_LINE(95)
		::org::gameplay3d::Ray_obj::hx_Ray_set_Ray(this->nativeObject,(  (((ray == null()))) ? Dynamic(null()) : Dynamic(ray->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Ray_obj,set_Ray,(void))

Void Ray_obj::set_V3X2( ::org::gameplay3d::immutable::IVector3 origin,::org::gameplay3d::immutable::IVector3 direction){
{
		HX_STACK_FRAME("org.gameplay3d.Ray","set_V3X2",0xde634665,"org.gameplay3d.Ray.set_V3X2","org/gameplay3d/Ray.hx",101,0xdd8c6e21)
		HX_STACK_THIS(this)
		HX_STACK_ARG(origin,"origin")
		HX_STACK_ARG(direction,"direction")
		HX_STACK_LINE(101)
		::org::gameplay3d::Ray_obj::hx_Ray_set_V3X2(this->nativeObject,(  (((origin == null()))) ? Dynamic(null()) : Dynamic(origin->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((direction == null()))) ? Dynamic(null()) : Dynamic(direction->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Ray_obj,set_V3X2,(void))

Void Ray_obj::setDirection_V3( ::org::gameplay3d::immutable::IVector3 direction){
{
		HX_STACK_FRAME("org.gameplay3d.Ray","setDirection_V3",0x0252830e,"org.gameplay3d.Ray.setDirection_V3","org/gameplay3d/Ray.hx",107,0xdd8c6e21)
		HX_STACK_THIS(this)
		HX_STACK_ARG(direction,"direction")
		HX_STACK_LINE(107)
		::org::gameplay3d::Ray_obj::hx_Ray_setDirection_V3(this->nativeObject,(  (((direction == null()))) ? Dynamic(null()) : Dynamic(direction->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Ray_obj,setDirection_V3,(void))

Void Ray_obj::setDirection_FltX3( Float x,Float y,Float z){
{
		HX_STACK_FRAME("org.gameplay3d.Ray","setDirection_FltX3",0x4cbe8d58,"org.gameplay3d.Ray.setDirection_FltX3","org/gameplay3d/Ray.hx",113,0xdd8c6e21)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(113)
		::org::gameplay3d::Ray_obj::hx_Ray_setDirection_FltX3(this->nativeObject,x,y,z);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Ray_obj,setDirection_FltX3,(void))

Void Ray_obj::setOrigin_V3( ::org::gameplay3d::immutable::IVector3 origin){
{
		HX_STACK_FRAME("org.gameplay3d.Ray","setOrigin_V3",0x4b4dffc5,"org.gameplay3d.Ray.setOrigin_V3","org/gameplay3d/Ray.hx",119,0xdd8c6e21)
		HX_STACK_THIS(this)
		HX_STACK_ARG(origin,"origin")
		HX_STACK_LINE(119)
		::org::gameplay3d::Ray_obj::hx_Ray_setOrigin_V3(this->nativeObject,(  (((origin == null()))) ? Dynamic(null()) : Dynamic(origin->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Ray_obj,setOrigin_V3,(void))

Void Ray_obj::setOrigin_FltX3( Float x,Float y,Float z){
{
		HX_STACK_FRAME("org.gameplay3d.Ray","setOrigin_FltX3",0x020e9d01,"org.gameplay3d.Ray.setOrigin_FltX3","org/gameplay3d/Ray.hx",125,0xdd8c6e21)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(125)
		::org::gameplay3d::Ray_obj::hx_Ray_setOrigin_FltX3(this->nativeObject,x,y,z);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Ray_obj,setOrigin_FltX3,(void))

Void Ray_obj::transform( ::org::gameplay3d::immutable::IMatrix matrix){
{
		HX_STACK_FRAME("org.gameplay3d.Ray","transform",0x30a4801b,"org.gameplay3d.Ray.transform","org/gameplay3d/Ray.hx",131,0xdd8c6e21)
		HX_STACK_THIS(this)
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(131)
		::org::gameplay3d::Ray_obj::hx_Ray_transform(this->nativeObject,(  (((matrix == null()))) ? Dynamic(null()) : Dynamic(matrix->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Ray_obj,transform,(void))

int Ray_obj::INTERSECTS_NONE;

::org::gameplay3d::Ray Ray_obj::make( ){
	HX_STACK_FRAME("org.gameplay3d.Ray","make",0x7603e59f,"org.gameplay3d.Ray.make","org/gameplay3d/Ray.hx",34,0xdd8c6e21)
	HX_STACK_LINE(35)
	Dynamic _g = ::org::gameplay3d::Ray_obj::constructNativeObject();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(35)
	return ::org::gameplay3d::Ray_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Ray_obj,make,return )

::org::gameplay3d::Ray Ray_obj::make_Ray( ::org::gameplay3d::Ray copy){
	HX_STACK_FRAME("org.gameplay3d.Ray","make_Ray",0xc21a73ea,"org.gameplay3d.Ray.make_Ray","org/gameplay3d/Ray.hx",40,0xdd8c6e21)
	HX_STACK_ARG(copy,"copy")
	HX_STACK_LINE(41)
	Dynamic _g = ::org::gameplay3d::Ray_obj::constructNativeObject_Ray(copy);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(41)
	return ::org::gameplay3d::Ray_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ray_obj,make_Ray,return )

::org::gameplay3d::Ray Ray_obj::make_V3X2( ::org::gameplay3d::immutable::IVector3 origin,::org::gameplay3d::immutable::IVector3 direction){
	HX_STACK_FRAME("org.gameplay3d.Ray","make_V3X2",0x178ccf17,"org.gameplay3d.Ray.make_V3X2","org/gameplay3d/Ray.hx",46,0xdd8c6e21)
	HX_STACK_ARG(origin,"origin")
	HX_STACK_ARG(direction,"direction")
	HX_STACK_LINE(47)
	Dynamic _g = ::org::gameplay3d::Ray_obj::constructNativeObject_V3X2(origin,direction);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(47)
	return ::org::gameplay3d::Ray_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Ray_obj,make_V3X2,return )

::org::gameplay3d::Ray Ray_obj::make_FltX6( Float originX,Float originY,Float originZ,Float dirX,Float dirY,Float dirZ){
	HX_STACK_FRAME("org.gameplay3d.Ray","make_FltX6",0x7301a6cc,"org.gameplay3d.Ray.make_FltX6","org/gameplay3d/Ray.hx",52,0xdd8c6e21)
	HX_STACK_ARG(originX,"originX")
	HX_STACK_ARG(originY,"originY")
	HX_STACK_ARG(originZ,"originZ")
	HX_STACK_ARG(dirX,"dirX")
	HX_STACK_ARG(dirY,"dirY")
	HX_STACK_ARG(dirZ,"dirZ")
	HX_STACK_LINE(53)
	Dynamic _g = ::org::gameplay3d::Ray_obj::constructNativeObject_FltX6(originX,originY,originZ,dirX,dirY,dirZ);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(53)
	return ::org::gameplay3d::Ray_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Ray_obj,make_FltX6,return )

Dynamic Ray_obj::constructNativeObject( ){
	HX_STACK_FRAME("org.gameplay3d.Ray","constructNativeObject",0xb85f8f9c,"org.gameplay3d.Ray.constructNativeObject","org/gameplay3d/Ray.hx",141,0xdd8c6e21)
	HX_STACK_LINE(141)
	return ::org::gameplay3d::Ray_obj::hx_Ray_Construct();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Ray_obj,constructNativeObject,return )

Dynamic Ray_obj::constructNativeObject_Ray( ::org::gameplay3d::Ray copy){
	HX_STACK_FRAME("org.gameplay3d.Ray","constructNativeObject_Ray",0x325f6067,"org.gameplay3d.Ray.constructNativeObject_Ray","org/gameplay3d/Ray.hx",147,0xdd8c6e21)
	HX_STACK_ARG(copy,"copy")
	HX_STACK_LINE(147)
	return ::org::gameplay3d::Ray_obj::hx_Ray_Construct_Ray((  (((copy == null()))) ? Dynamic(null()) : Dynamic(copy->nativeObject) ));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ray_obj,constructNativeObject_Ray,return )

Dynamic Ray_obj::constructNativeObject_V3X2( ::org::gameplay3d::immutable::IVector3 origin,::org::gameplay3d::immutable::IVector3 direction){
	HX_STACK_FRAME("org.gameplay3d.Ray","constructNativeObject_V3X2",0xe396cffa,"org.gameplay3d.Ray.constructNativeObject_V3X2","org/gameplay3d/Ray.hx",153,0xdd8c6e21)
	HX_STACK_ARG(origin,"origin")
	HX_STACK_ARG(direction,"direction")
	HX_STACK_LINE(153)
	return ::org::gameplay3d::Ray_obj::hx_Ray_Construct_V3X2((  (((origin == null()))) ? Dynamic(null()) : Dynamic(origin->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((direction == null()))) ? Dynamic(null()) : Dynamic(direction->__Field(HX_CSTRING("nativeObject"),true)) ));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Ray_obj,constructNativeObject_V3X2,return )

Dynamic Ray_obj::constructNativeObject_FltX6( Float originX,Float originY,Float originZ,Float dirX,Float dirY,Float dirZ){
	HX_STACK_FRAME("org.gameplay3d.Ray","constructNativeObject_FltX6",0x2fb86c89,"org.gameplay3d.Ray.constructNativeObject_FltX6","org/gameplay3d/Ray.hx",159,0xdd8c6e21)
	HX_STACK_ARG(originX,"originX")
	HX_STACK_ARG(originY,"originY")
	HX_STACK_ARG(originZ,"originZ")
	HX_STACK_ARG(dirX,"dirX")
	HX_STACK_ARG(dirY,"dirY")
	HX_STACK_ARG(dirZ,"dirZ")
	HX_STACK_LINE(159)
	return ::org::gameplay3d::Ray_obj::hx_Ray_Construct_FltX6(originX,originY,originZ,dirX,dirY,dirZ);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Ray_obj,constructNativeObject_FltX6,return )

Dynamic Ray_obj::hx_Ray_Construct;

Dynamic Ray_obj::hx_Ray_Construct_Ray;

Dynamic Ray_obj::hx_Ray_Construct_V3X2;

Dynamic Ray_obj::hx_Ray_Construct_FltX6;

Dynamic Ray_obj::hx_Ray_getDirection;

Dynamic Ray_obj::hx_Ray_getOrigin;

Dynamic Ray_obj::hx_Ray_intersects_BBox;

Dynamic Ray_obj::hx_Ray_intersects_BSphr;

Dynamic Ray_obj::hx_Ray_intersects_Frstm;

Dynamic Ray_obj::hx_Ray_intersects_Plane;

Dynamic Ray_obj::hx_Ray_set_Ray;

Dynamic Ray_obj::hx_Ray_set_V3X2;

Dynamic Ray_obj::hx_Ray_setDirection_V3;

Dynamic Ray_obj::hx_Ray_setDirection_FltX3;

Dynamic Ray_obj::hx_Ray_setOrigin_V3;

Dynamic Ray_obj::hx_Ray_setOrigin_FltX3;

Dynamic Ray_obj::hx_Ray_transform;


Ray_obj::Ray_obj()
{
}

void Ray_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Ray);
	HX_MARK_MEMBER_NAME(_direction,"_direction");
	HX_MARK_MEMBER_NAME(_origin,"_origin");
	::org::gameplay3d::intern::NativeBinding_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Ray_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_direction,"_direction");
	HX_VISIT_MEMBER_NAME(_origin,"_origin");
	::org::gameplay3d::intern::NativeBinding_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Ray_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { return make_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_origin") ) { return _origin; }
		if (HX_FIELD_EQ(inName,"set_Ray") ) { return set_Ray_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"make_Ray") ) { return make_Ray_dyn(); }
		if (HX_FIELD_EQ(inName,"set_V3X2") ) { return set_V3X2_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"make_V3X2") ) { return make_V3X2_dyn(); }
		if (HX_FIELD_EQ(inName,"getOrigin") ) { return getOrigin_dyn(); }
		if (HX_FIELD_EQ(inName,"transform") ) { return transform_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"make_FltX6") ) { return make_FltX6_dyn(); }
		if (HX_FIELD_EQ(inName,"_direction") ) { return _direction; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getDirection") ) { return getDirection_dyn(); }
		if (HX_FIELD_EQ(inName,"setOrigin_V3") ) { return setOrigin_V3_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"hx_Ray_set_Ray") ) { return hx_Ray_set_Ray; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hx_Ray_set_V3X2") ) { return hx_Ray_set_V3X2; }
		if (HX_FIELD_EQ(inName,"intersects_BBox") ) { return intersects_BBox_dyn(); }
		if (HX_FIELD_EQ(inName,"setDirection_V3") ) { return setDirection_V3_dyn(); }
		if (HX_FIELD_EQ(inName,"setOrigin_FltX3") ) { return setOrigin_FltX3_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hx_Ray_Construct") ) { return hx_Ray_Construct; }
		if (HX_FIELD_EQ(inName,"hx_Ray_getOrigin") ) { return hx_Ray_getOrigin; }
		if (HX_FIELD_EQ(inName,"hx_Ray_transform") ) { return hx_Ray_transform; }
		if (HX_FIELD_EQ(inName,"intersects_BSphr") ) { return intersects_BSphr_dyn(); }
		if (HX_FIELD_EQ(inName,"intersects_Frstm") ) { return intersects_Frstm_dyn(); }
		if (HX_FIELD_EQ(inName,"intersects_Plane") ) { return intersects_Plane_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"setDirection_FltX3") ) { return setDirection_FltX3_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hx_Ray_getDirection") ) { return hx_Ray_getDirection; }
		if (HX_FIELD_EQ(inName,"hx_Ray_setOrigin_V3") ) { return hx_Ray_setOrigin_V3; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Ray_Construct_Ray") ) { return hx_Ray_Construct_Ray; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"constructNativeObject") ) { return constructNativeObject_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Ray_Construct_V3X2") ) { return hx_Ray_Construct_V3X2; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Ray_Construct_FltX6") ) { return hx_Ray_Construct_FltX6; }
		if (HX_FIELD_EQ(inName,"hx_Ray_intersects_BBox") ) { return hx_Ray_intersects_BBox; }
		if (HX_FIELD_EQ(inName,"hx_Ray_setDirection_V3") ) { return hx_Ray_setDirection_V3; }
		if (HX_FIELD_EQ(inName,"hx_Ray_setOrigin_FltX3") ) { return hx_Ray_setOrigin_FltX3; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_Ray_intersects_BSphr") ) { return hx_Ray_intersects_BSphr; }
		if (HX_FIELD_EQ(inName,"hx_Ray_intersects_Frstm") ) { return hx_Ray_intersects_Frstm; }
		if (HX_FIELD_EQ(inName,"hx_Ray_intersects_Plane") ) { return hx_Ray_intersects_Plane; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"constructNativeObject_Ray") ) { return constructNativeObject_Ray_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Ray_setDirection_FltX3") ) { return hx_Ray_setDirection_FltX3; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"constructNativeObject_V3X2") ) { return constructNativeObject_V3X2_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"constructNativeObject_FltX6") ) { return constructNativeObject_FltX6_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Ray_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_origin") ) { _origin=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_direction") ) { _direction=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"hx_Ray_set_Ray") ) { hx_Ray_set_Ray=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hx_Ray_set_V3X2") ) { hx_Ray_set_V3X2=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hx_Ray_Construct") ) { hx_Ray_Construct=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Ray_getOrigin") ) { hx_Ray_getOrigin=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Ray_transform") ) { hx_Ray_transform=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hx_Ray_getDirection") ) { hx_Ray_getDirection=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Ray_setOrigin_V3") ) { hx_Ray_setOrigin_V3=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Ray_Construct_Ray") ) { hx_Ray_Construct_Ray=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hx_Ray_Construct_V3X2") ) { hx_Ray_Construct_V3X2=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Ray_Construct_FltX6") ) { hx_Ray_Construct_FltX6=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Ray_intersects_BBox") ) { hx_Ray_intersects_BBox=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Ray_setDirection_V3") ) { hx_Ray_setDirection_V3=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Ray_setOrigin_FltX3") ) { hx_Ray_setOrigin_FltX3=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_Ray_intersects_BSphr") ) { hx_Ray_intersects_BSphr=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Ray_intersects_Frstm") ) { hx_Ray_intersects_Frstm=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Ray_intersects_Plane") ) { hx_Ray_intersects_Plane=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_Ray_setDirection_FltX3") ) { hx_Ray_setDirection_FltX3=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Ray_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_direction"));
	outFields->push(HX_CSTRING("_origin"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("INTERSECTS_NONE"),
	HX_CSTRING("make"),
	HX_CSTRING("make_Ray"),
	HX_CSTRING("make_V3X2"),
	HX_CSTRING("make_FltX6"),
	HX_CSTRING("constructNativeObject"),
	HX_CSTRING("constructNativeObject_Ray"),
	HX_CSTRING("constructNativeObject_V3X2"),
	HX_CSTRING("constructNativeObject_FltX6"),
	HX_CSTRING("hx_Ray_Construct"),
	HX_CSTRING("hx_Ray_Construct_Ray"),
	HX_CSTRING("hx_Ray_Construct_V3X2"),
	HX_CSTRING("hx_Ray_Construct_FltX6"),
	HX_CSTRING("hx_Ray_getDirection"),
	HX_CSTRING("hx_Ray_getOrigin"),
	HX_CSTRING("hx_Ray_intersects_BBox"),
	HX_CSTRING("hx_Ray_intersects_BSphr"),
	HX_CSTRING("hx_Ray_intersects_Frstm"),
	HX_CSTRING("hx_Ray_intersects_Plane"),
	HX_CSTRING("hx_Ray_set_Ray"),
	HX_CSTRING("hx_Ray_set_V3X2"),
	HX_CSTRING("hx_Ray_setDirection_V3"),
	HX_CSTRING("hx_Ray_setDirection_FltX3"),
	HX_CSTRING("hx_Ray_setOrigin_V3"),
	HX_CSTRING("hx_Ray_setOrigin_FltX3"),
	HX_CSTRING("hx_Ray_transform"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(Ray_obj,_direction),HX_CSTRING("_direction")},
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(Ray_obj,_origin),HX_CSTRING("_origin")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_direction"),
	HX_CSTRING("_origin"),
	HX_CSTRING("getDirection"),
	HX_CSTRING("getOrigin"),
	HX_CSTRING("intersects_BBox"),
	HX_CSTRING("intersects_BSphr"),
	HX_CSTRING("intersects_Frstm"),
	HX_CSTRING("intersects_Plane"),
	HX_CSTRING("set_Ray"),
	HX_CSTRING("set_V3X2"),
	HX_CSTRING("setDirection_V3"),
	HX_CSTRING("setDirection_FltX3"),
	HX_CSTRING("setOrigin_V3"),
	HX_CSTRING("setOrigin_FltX3"),
	HX_CSTRING("transform"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Ray_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Ray_obj::INTERSECTS_NONE,"INTERSECTS_NONE");
	HX_MARK_MEMBER_NAME(Ray_obj::hx_Ray_Construct,"hx_Ray_Construct");
	HX_MARK_MEMBER_NAME(Ray_obj::hx_Ray_Construct_Ray,"hx_Ray_Construct_Ray");
	HX_MARK_MEMBER_NAME(Ray_obj::hx_Ray_Construct_V3X2,"hx_Ray_Construct_V3X2");
	HX_MARK_MEMBER_NAME(Ray_obj::hx_Ray_Construct_FltX6,"hx_Ray_Construct_FltX6");
	HX_MARK_MEMBER_NAME(Ray_obj::hx_Ray_getDirection,"hx_Ray_getDirection");
	HX_MARK_MEMBER_NAME(Ray_obj::hx_Ray_getOrigin,"hx_Ray_getOrigin");
	HX_MARK_MEMBER_NAME(Ray_obj::hx_Ray_intersects_BBox,"hx_Ray_intersects_BBox");
	HX_MARK_MEMBER_NAME(Ray_obj::hx_Ray_intersects_BSphr,"hx_Ray_intersects_BSphr");
	HX_MARK_MEMBER_NAME(Ray_obj::hx_Ray_intersects_Frstm,"hx_Ray_intersects_Frstm");
	HX_MARK_MEMBER_NAME(Ray_obj::hx_Ray_intersects_Plane,"hx_Ray_intersects_Plane");
	HX_MARK_MEMBER_NAME(Ray_obj::hx_Ray_set_Ray,"hx_Ray_set_Ray");
	HX_MARK_MEMBER_NAME(Ray_obj::hx_Ray_set_V3X2,"hx_Ray_set_V3X2");
	HX_MARK_MEMBER_NAME(Ray_obj::hx_Ray_setDirection_V3,"hx_Ray_setDirection_V3");
	HX_MARK_MEMBER_NAME(Ray_obj::hx_Ray_setDirection_FltX3,"hx_Ray_setDirection_FltX3");
	HX_MARK_MEMBER_NAME(Ray_obj::hx_Ray_setOrigin_V3,"hx_Ray_setOrigin_V3");
	HX_MARK_MEMBER_NAME(Ray_obj::hx_Ray_setOrigin_FltX3,"hx_Ray_setOrigin_FltX3");
	HX_MARK_MEMBER_NAME(Ray_obj::hx_Ray_transform,"hx_Ray_transform");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Ray_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Ray_obj::INTERSECTS_NONE,"INTERSECTS_NONE");
	HX_VISIT_MEMBER_NAME(Ray_obj::hx_Ray_Construct,"hx_Ray_Construct");
	HX_VISIT_MEMBER_NAME(Ray_obj::hx_Ray_Construct_Ray,"hx_Ray_Construct_Ray");
	HX_VISIT_MEMBER_NAME(Ray_obj::hx_Ray_Construct_V3X2,"hx_Ray_Construct_V3X2");
	HX_VISIT_MEMBER_NAME(Ray_obj::hx_Ray_Construct_FltX6,"hx_Ray_Construct_FltX6");
	HX_VISIT_MEMBER_NAME(Ray_obj::hx_Ray_getDirection,"hx_Ray_getDirection");
	HX_VISIT_MEMBER_NAME(Ray_obj::hx_Ray_getOrigin,"hx_Ray_getOrigin");
	HX_VISIT_MEMBER_NAME(Ray_obj::hx_Ray_intersects_BBox,"hx_Ray_intersects_BBox");
	HX_VISIT_MEMBER_NAME(Ray_obj::hx_Ray_intersects_BSphr,"hx_Ray_intersects_BSphr");
	HX_VISIT_MEMBER_NAME(Ray_obj::hx_Ray_intersects_Frstm,"hx_Ray_intersects_Frstm");
	HX_VISIT_MEMBER_NAME(Ray_obj::hx_Ray_intersects_Plane,"hx_Ray_intersects_Plane");
	HX_VISIT_MEMBER_NAME(Ray_obj::hx_Ray_set_Ray,"hx_Ray_set_Ray");
	HX_VISIT_MEMBER_NAME(Ray_obj::hx_Ray_set_V3X2,"hx_Ray_set_V3X2");
	HX_VISIT_MEMBER_NAME(Ray_obj::hx_Ray_setDirection_V3,"hx_Ray_setDirection_V3");
	HX_VISIT_MEMBER_NAME(Ray_obj::hx_Ray_setDirection_FltX3,"hx_Ray_setDirection_FltX3");
	HX_VISIT_MEMBER_NAME(Ray_obj::hx_Ray_setOrigin_V3,"hx_Ray_setOrigin_V3");
	HX_VISIT_MEMBER_NAME(Ray_obj::hx_Ray_setOrigin_FltX3,"hx_Ray_setOrigin_FltX3");
	HX_VISIT_MEMBER_NAME(Ray_obj::hx_Ray_transform,"hx_Ray_transform");
};

#endif

Class Ray_obj::__mClass;

void Ray_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.Ray"), hx::TCanCast< Ray_obj> ,sStaticFields,sMemberFields,
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

void Ray_obj::__boot()
{
	INTERSECTS_NONE= (int)-1;
	hx_Ray_Construct= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Ray >(),HX_CSTRING("Construct"),(int)0);
	hx_Ray_Construct_Ray= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Ray >(),HX_CSTRING("Construct_Ray"),(int)1);
	hx_Ray_Construct_V3X2= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Ray >(),HX_CSTRING("Construct_V3X2"),(int)2);
	hx_Ray_Construct_FltX6= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Ray >(),HX_CSTRING("Construct_FltX6"),(int)-1);
	hx_Ray_getDirection= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Ray >(),HX_CSTRING("getDirection"),(int)1);
	hx_Ray_getOrigin= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Ray >(),HX_CSTRING("getOrigin"),(int)1);
	hx_Ray_intersects_BBox= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Ray >(),HX_CSTRING("intersects_BBox"),(int)2);
	hx_Ray_intersects_BSphr= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Ray >(),HX_CSTRING("intersects_BSphr"),(int)2);
	hx_Ray_intersects_Frstm= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Ray >(),HX_CSTRING("intersects_Frstm"),(int)2);
	hx_Ray_intersects_Plane= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Ray >(),HX_CSTRING("intersects_Plane"),(int)2);
	hx_Ray_set_Ray= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Ray >(),HX_CSTRING("set_Ray"),(int)2);
	hx_Ray_set_V3X2= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Ray >(),HX_CSTRING("set_V3X2"),(int)3);
	hx_Ray_setDirection_V3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Ray >(),HX_CSTRING("setDirection_V3"),(int)2);
	hx_Ray_setDirection_FltX3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Ray >(),HX_CSTRING("setDirection_FltX3"),(int)4);
	hx_Ray_setOrigin_V3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Ray >(),HX_CSTRING("setOrigin_V3"),(int)2);
	hx_Ray_setOrigin_FltX3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Ray >(),HX_CSTRING("setOrigin_FltX3"),(int)4);
	hx_Ray_transform= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Ray >(),HX_CSTRING("transform"),(int)2);
}

} // end namespace org
} // end namespace gameplay3d
