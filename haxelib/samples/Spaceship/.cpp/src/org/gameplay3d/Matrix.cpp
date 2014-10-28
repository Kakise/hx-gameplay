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
#ifndef INCLUDED_org_gameplay3d_Matrix
#include <org/gameplay3d/Matrix.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Plane
#include <org/gameplay3d/Plane.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Quaternion
#include <org/gameplay3d/Quaternion.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Vector3
#include <org/gameplay3d/Vector3.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Vector4
#include <org/gameplay3d/Vector4.h>
#endif
#ifndef INCLUDED_org_gameplay3d__Matrix_MatrixEntries
#include <org/gameplay3d/_Matrix/MatrixEntries.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IMatrix
#include <org/gameplay3d/immutable/IMatrix.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IPlane
#include <org/gameplay3d/immutable/IPlane.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IQuaternion
#include <org/gameplay3d/immutable/IQuaternion.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IVector3
#include <org/gameplay3d/immutable/IVector3.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IVector4
#include <org/gameplay3d/immutable/IVector4.h>
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
#ifndef INCLUDED_org_gameplay3d_util_PrimitiveArray
#include <org/gameplay3d/util/PrimitiveArray.h>
#endif
namespace org{
namespace gameplay3d{

Void Matrix_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.Matrix","new",0x93c1d3a0,"org.gameplay3d.Matrix.new","org/gameplay3d/Matrix.hx",18,0xc2685e30)
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

//Matrix_obj::~Matrix_obj() { }

Dynamic Matrix_obj::__CreateEmpty() { return  new Matrix_obj; }
hx::ObjectPtr< Matrix_obj > Matrix_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< Matrix_obj > result = new Matrix_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic Matrix_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Matrix_obj > result = new Matrix_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *Matrix_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::intern::INativeBinding_obj)) return operator ::org::gameplay3d::intern::INativeBinding_obj *();
	if (inType==typeid( ::org::gameplay3d::immutable::IMatrix_obj)) return operator ::org::gameplay3d::immutable::IMatrix_obj *();
	return super::__ToInterface(inType);
}

Dynamic Matrix_obj::impersonate( Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.Matrix","impersonate",0x898a7e79,"org.gameplay3d.Matrix.impersonate","org/gameplay3d/Matrix.hx",35,0xc2685e30)
	HX_STACK_THIS(this)
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(36)
	bool initialized = (this->nativeObject != null());		HX_STACK_VAR(initialized,"initialized");
	HX_STACK_LINE(37)
	this->super::impersonate(nativeObject);
	HX_STACK_LINE(38)
	if ((!(initialized))){
		HX_STACK_LINE(40)
		Dynamic _g = ::org::gameplay3d::Matrix_obj::hx_Matrix_property_m_get(nativeObject);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(40)
		::org::gameplay3d::_Matrix::MatrixEntries _g1 = ::org::gameplay3d::_Matrix::MatrixEntries_obj::__new(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(40)
		this->m = _g1;
		HX_STACK_LINE(41)
		this->mat = this->m;
	}
	else{
		HX_STACK_LINE(45)
		Dynamic _g2 = ::org::gameplay3d::Matrix_obj::hx_Matrix_property_m_get(nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(45)
		(hx::TCast< org::gameplay3d::_Matrix::MatrixEntries >::cast(this->m))->impersonate(_g2);
	}
	HX_STACK_LINE(47)
	return hx::ObjectPtr<OBJ_>(this);
}


Void Matrix_obj::add_Mat( ::org::gameplay3d::immutable::IMatrix m){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","add_Mat",0x803ac162,"org.gameplay3d.Matrix.add_Mat","org/gameplay3d/Matrix.hx",83,0xc2685e30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(m,"m")
		HX_STACK_LINE(83)
		::org::gameplay3d::Matrix_obj::hx_Matrix_add_Mat(this->nativeObject,(  (((m == null()))) ? Dynamic(null()) : Dynamic(m->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,add_Mat,(void))

Void Matrix_obj::add_Flt( Float scalar){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","add_Flt",0x80357b30,"org.gameplay3d.Matrix.add_Flt","org/gameplay3d/Matrix.hx",89,0xc2685e30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(scalar,"scalar")
		HX_STACK_LINE(89)
		::org::gameplay3d::Matrix_obj::hx_Matrix_add_Flt(this->nativeObject,scalar);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,add_Flt,(void))

Void Matrix_obj::add_Flt_Mat( Float scalar,::org::gameplay3d::Matrix dst){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","add_Flt_Mat",0x6a50dab1,"org.gameplay3d.Matrix.add_Flt_Mat","org/gameplay3d/Matrix.hx",95,0xc2685e30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(scalar,"scalar")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(95)
		::org::gameplay3d::Matrix_obj::hx_Matrix_add_Flt_Mat(this->nativeObject,scalar,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,add_Flt_Mat,(void))

bool Matrix_obj::decompose( ::org::gameplay3d::Vector3 scale,::org::gameplay3d::Quaternion rotation,::org::gameplay3d::Vector3 translation){
	HX_STACK_FRAME("org.gameplay3d.Matrix","decompose",0x7a57b6f1,"org.gameplay3d.Matrix.decompose","org/gameplay3d/Matrix.hx",203,0xc2685e30)
	HX_STACK_THIS(this)
	HX_STACK_ARG(scale,"scale")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(translation,"translation")
	HX_STACK_LINE(203)
	return ::org::gameplay3d::Matrix_obj::hx_Matrix_decompose(this->nativeObject,(  (((scale == null()))) ? Dynamic(null()) : Dynamic(scale->nativeObject) ),(  (((rotation == null()))) ? Dynamic(null()) : Dynamic(rotation->nativeObject) ),(  (((translation == null()))) ? Dynamic(null()) : Dynamic(translation->nativeObject) ));
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix_obj,decompose,return )

Float Matrix_obj::determinant( ){
	HX_STACK_FRAME("org.gameplay3d.Matrix","determinant",0x7418a0d5,"org.gameplay3d.Matrix.determinant","org/gameplay3d/Matrix.hx",209,0xc2685e30)
	HX_STACK_THIS(this)
	HX_STACK_LINE(209)
	return ::org::gameplay3d::Matrix_obj::hx_Matrix_determinant(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,determinant,return )

Void Matrix_obj::getBackVector( ::org::gameplay3d::Vector3 dst){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","getBackVector",0x6e2485c0,"org.gameplay3d.Matrix.getBackVector","org/gameplay3d/Matrix.hx",215,0xc2685e30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(215)
		::org::gameplay3d::Matrix_obj::hx_Matrix_getBackVector(this->nativeObject,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,getBackVector,(void))

Void Matrix_obj::getDownVector( ::org::gameplay3d::Vector3 dst){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","getDownVector",0x6c9e823b,"org.gameplay3d.Matrix.getDownVector","org/gameplay3d/Matrix.hx",221,0xc2685e30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(221)
		::org::gameplay3d::Matrix_obj::hx_Matrix_getDownVector(this->nativeObject,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,getDownVector,(void))

Void Matrix_obj::getForwardVector( ::org::gameplay3d::Vector3 dst){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","getForwardVector",0xffe1c6b2,"org.gameplay3d.Matrix.getForwardVector","org/gameplay3d/Matrix.hx",227,0xc2685e30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(227)
		::org::gameplay3d::Matrix_obj::hx_Matrix_getForwardVector(this->nativeObject,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,getForwardVector,(void))

Void Matrix_obj::getLeftVector( ::org::gameplay3d::Vector3 dst){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","getLeftVector",0x5eab5ba0,"org.gameplay3d.Matrix.getLeftVector","org/gameplay3d/Matrix.hx",233,0xc2685e30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(233)
		::org::gameplay3d::Matrix_obj::hx_Matrix_getLeftVector(this->nativeObject,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,getLeftVector,(void))

Void Matrix_obj::getRightVector( ::org::gameplay3d::Vector3 dst){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","getRightVector",0x9df71589,"org.gameplay3d.Matrix.getRightVector","org/gameplay3d/Matrix.hx",239,0xc2685e30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(239)
		::org::gameplay3d::Matrix_obj::hx_Matrix_getRightVector(this->nativeObject,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,getRightVector,(void))

bool Matrix_obj::getRotation( ::org::gameplay3d::Quaternion rotation){
	HX_STACK_FRAME("org.gameplay3d.Matrix","getRotation",0x707d4334,"org.gameplay3d.Matrix.getRotation","org/gameplay3d/Matrix.hx",245,0xc2685e30)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_LINE(245)
	return ::org::gameplay3d::Matrix_obj::hx_Matrix_getRotation(this->nativeObject,(  (((rotation == null()))) ? Dynamic(null()) : Dynamic(rotation->nativeObject) ));
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,getRotation,return )

Void Matrix_obj::getScale( ::org::gameplay3d::Vector3 scale){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","getScale",0xbf6412d4,"org.gameplay3d.Matrix.getScale","org/gameplay3d/Matrix.hx",251,0xc2685e30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(scale,"scale")
		HX_STACK_LINE(251)
		::org::gameplay3d::Matrix_obj::hx_Matrix_getScale(this->nativeObject,(  (((scale == null()))) ? Dynamic(null()) : Dynamic(scale->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,getScale,(void))

Void Matrix_obj::getTranslation( ::org::gameplay3d::Vector3 translation){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","getTranslation",0x27b6c8bb,"org.gameplay3d.Matrix.getTranslation","org/gameplay3d/Matrix.hx",257,0xc2685e30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(translation,"translation")
		HX_STACK_LINE(257)
		::org::gameplay3d::Matrix_obj::hx_Matrix_getTranslation(this->nativeObject,(  (((translation == null()))) ? Dynamic(null()) : Dynamic(translation->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,getTranslation,(void))

Void Matrix_obj::getUpVector( ::org::gameplay3d::Vector3 dst){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","getUpVector",0x895b4774,"org.gameplay3d.Matrix.getUpVector","org/gameplay3d/Matrix.hx",263,0xc2685e30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(263)
		::org::gameplay3d::Matrix_obj::hx_Matrix_getUpVector(this->nativeObject,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,getUpVector,(void))

bool Matrix_obj::invert( ){
	HX_STACK_FRAME("org.gameplay3d.Matrix","invert",0x8b1c6bd6,"org.gameplay3d.Matrix.invert","org/gameplay3d/Matrix.hx",275,0xc2685e30)
	HX_STACK_THIS(this)
	HX_STACK_LINE(275)
	return ::org::gameplay3d::Matrix_obj::hx_Matrix_invert(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,invert,return )

bool Matrix_obj::invert_Mat( ::org::gameplay3d::Matrix dst){
	HX_STACK_FRAME("org.gameplay3d.Matrix","invert_Mat",0x9ff41657,"org.gameplay3d.Matrix.invert_Mat","org/gameplay3d/Matrix.hx",281,0xc2685e30)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dst,"dst")
	HX_STACK_LINE(281)
	return ::org::gameplay3d::Matrix_obj::hx_Matrix_invert_Mat(this->nativeObject,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,invert_Mat,return )

bool Matrix_obj::isIdentity( ){
	HX_STACK_FRAME("org.gameplay3d.Matrix","isIdentity",0xee233c08,"org.gameplay3d.Matrix.isIdentity","org/gameplay3d/Matrix.hx",287,0xc2685e30)
	HX_STACK_THIS(this)
	HX_STACK_LINE(287)
	return ::org::gameplay3d::Matrix_obj::hx_Matrix_isIdentity(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,isIdentity,return )

Void Matrix_obj::multiply_Mat( ::org::gameplay3d::immutable::IMatrix m){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","multiply_Mat",0xd9f06065,"org.gameplay3d.Matrix.multiply_Mat","org/gameplay3d/Matrix.hx",305,0xc2685e30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(m,"m")
		HX_STACK_LINE(305)
		::org::gameplay3d::Matrix_obj::hx_Matrix_multiply_Mat(this->nativeObject,(  (((m == null()))) ? Dynamic(null()) : Dynamic(m->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,multiply_Mat,(void))

Void Matrix_obj::multiply_Flt( Float scalar){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","multiply_Flt",0xd9eb1a33,"org.gameplay3d.Matrix.multiply_Flt","org/gameplay3d/Matrix.hx",311,0xc2685e30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(scalar,"scalar")
		HX_STACK_LINE(311)
		::org::gameplay3d::Matrix_obj::hx_Matrix_multiply_Flt(this->nativeObject,scalar);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,multiply_Flt,(void))

Void Matrix_obj::multiply_Flt_Mat( Float scalar,::org::gameplay3d::Matrix dst){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","multiply_Flt_Mat",0xb2f5b734,"org.gameplay3d.Matrix.multiply_Flt_Mat","org/gameplay3d/Matrix.hx",317,0xc2685e30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(scalar,"scalar")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(317)
		::org::gameplay3d::Matrix_obj::hx_Matrix_multiply_Flt_Mat(this->nativeObject,scalar,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,multiply_Flt_Mat,(void))

Void Matrix_obj::negate( ){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","negate",0x525cc682,"org.gameplay3d.Matrix.negate","org/gameplay3d/Matrix.hx",323,0xc2685e30)
		HX_STACK_THIS(this)
		HX_STACK_LINE(323)
		::org::gameplay3d::Matrix_obj::hx_Matrix_negate(this->nativeObject);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,negate,(void))

Void Matrix_obj::negate_Mat( ::org::gameplay3d::Matrix dst){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","negate_Mat",0x20553703,"org.gameplay3d.Matrix.negate_Mat","org/gameplay3d/Matrix.hx",329,0xc2685e30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(329)
		::org::gameplay3d::Matrix_obj::hx_Matrix_negate_Mat(this->nativeObject,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,negate_Mat,(void))

Void Matrix_obj::rotate_Qtrn( ::org::gameplay3d::immutable::IQuaternion q){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","rotate_Qtrn",0x6992e063,"org.gameplay3d.Matrix.rotate_Qtrn","org/gameplay3d/Matrix.hx",335,0xc2685e30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(q,"q")
		HX_STACK_LINE(335)
		::org::gameplay3d::Matrix_obj::hx_Matrix_rotate_Qtrn(this->nativeObject,(  (((q == null()))) ? Dynamic(null()) : Dynamic(q->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,rotate_Qtrn,(void))

Void Matrix_obj::rotate_Qtrn_Mat( ::org::gameplay3d::immutable::IQuaternion q,::org::gameplay3d::Matrix dst){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","rotate_Qtrn_Mat",0x9c345564,"org.gameplay3d.Matrix.rotate_Qtrn_Mat","org/gameplay3d/Matrix.hx",341,0xc2685e30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(q,"q")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(341)
		::org::gameplay3d::Matrix_obj::hx_Matrix_rotate_Qtrn_Mat(this->nativeObject,(  (((q == null()))) ? Dynamic(null()) : Dynamic(q->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,rotate_Qtrn_Mat,(void))

Void Matrix_obj::rotate_V3_Flt( ::org::gameplay3d::immutable::IVector3 axis,Float angle){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","rotate_V3_Flt",0xa2660ed0,"org.gameplay3d.Matrix.rotate_V3_Flt","org/gameplay3d/Matrix.hx",347,0xc2685e30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(angle,"angle")
		HX_STACK_LINE(347)
		::org::gameplay3d::Matrix_obj::hx_Matrix_rotate_V3_Flt(this->nativeObject,(  (((axis == null()))) ? Dynamic(null()) : Dynamic(axis->__Field(HX_CSTRING("nativeObject"),true)) ),angle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,rotate_V3_Flt,(void))

Void Matrix_obj::rotate_V3_Flt_Mat( ::org::gameplay3d::immutable::IVector3 axis,Float angle,::org::gameplay3d::Matrix dst){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","rotate_V3_Flt_Mat",0x6be3be51,"org.gameplay3d.Matrix.rotate_V3_Flt_Mat","org/gameplay3d/Matrix.hx",353,0xc2685e30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(angle,"angle")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(353)
		::org::gameplay3d::Matrix_obj::hx_Matrix_rotate_V3_Flt_Mat(this->nativeObject,(  (((axis == null()))) ? Dynamic(null()) : Dynamic(axis->__Field(HX_CSTRING("nativeObject"),true)) ),angle,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix_obj,rotate_V3_Flt_Mat,(void))

Void Matrix_obj::rotateX_Flt( Float angle){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","rotateX_Flt",0x6ae2e0ac,"org.gameplay3d.Matrix.rotateX_Flt","org/gameplay3d/Matrix.hx",359,0xc2685e30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(angle,"angle")
		HX_STACK_LINE(359)
		::org::gameplay3d::Matrix_obj::hx_Matrix_rotateX_Flt(this->nativeObject,angle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,rotateX_Flt,(void))

Void Matrix_obj::rotateX_Flt_Mat( Float angle,::org::gameplay3d::Matrix dst){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","rotateX_Flt_Mat",0x8dc4ae2d,"org.gameplay3d.Matrix.rotateX_Flt_Mat","org/gameplay3d/Matrix.hx",365,0xc2685e30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(angle,"angle")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(365)
		::org::gameplay3d::Matrix_obj::hx_Matrix_rotateX_Flt_Mat(this->nativeObject,angle,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,rotateX_Flt_Mat,(void))

Void Matrix_obj::rotateY_Flt( Float angle){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","rotateY_Flt",0xfe49752d,"org.gameplay3d.Matrix.rotateY_Flt","org/gameplay3d/Matrix.hx",371,0xc2685e30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(angle,"angle")
		HX_STACK_LINE(371)
		::org::gameplay3d::Matrix_obj::hx_Matrix_rotateY_Flt(this->nativeObject,angle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,rotateY_Flt,(void))

Void Matrix_obj::rotateY_Flt_Mat( Float angle,::org::gameplay3d::Matrix dst){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","rotateY_Flt_Mat",0x60b6172e,"org.gameplay3d.Matrix.rotateY_Flt_Mat","org/gameplay3d/Matrix.hx",377,0xc2685e30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(angle,"angle")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(377)
		::org::gameplay3d::Matrix_obj::hx_Matrix_rotateY_Flt_Mat(this->nativeObject,angle,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,rotateY_Flt_Mat,(void))

Void Matrix_obj::rotateZ_Flt( Float angle){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","rotateZ_Flt",0x91b009ae,"org.gameplay3d.Matrix.rotateZ_Flt","org/gameplay3d/Matrix.hx",383,0xc2685e30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(angle,"angle")
		HX_STACK_LINE(383)
		::org::gameplay3d::Matrix_obj::hx_Matrix_rotateZ_Flt(this->nativeObject,angle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,rotateZ_Flt,(void))

Void Matrix_obj::rotateZ_Flt_Mat( Float angle,::org::gameplay3d::Matrix dst){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","rotateZ_Flt_Mat",0x33a7802f,"org.gameplay3d.Matrix.rotateZ_Flt_Mat","org/gameplay3d/Matrix.hx",389,0xc2685e30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(angle,"angle")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(389)
		::org::gameplay3d::Matrix_obj::hx_Matrix_rotateZ_Flt_Mat(this->nativeObject,angle,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,rotateZ_Flt_Mat,(void))

Void Matrix_obj::scale_V3( ::org::gameplay3d::immutable::IVector3 s){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","scale_V3",0xe823f9b2,"org.gameplay3d.Matrix.scale_V3","org/gameplay3d/Matrix.hx",395,0xc2685e30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(395)
		::org::gameplay3d::Matrix_obj::hx_Matrix_scale_V3(this->nativeObject,(  (((s == null()))) ? Dynamic(null()) : Dynamic(s->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,scale_V3,(void))

Void Matrix_obj::scale_V3_Mat( ::org::gameplay3d::immutable::IVector3 s,::org::gameplay3d::Matrix dst){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","scale_V3_Mat",0xb86dc233,"org.gameplay3d.Matrix.scale_V3_Mat","org/gameplay3d/Matrix.hx",401,0xc2685e30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(401)
		::org::gameplay3d::Matrix_obj::hx_Matrix_scale_V3_Mat(this->nativeObject,(  (((s == null()))) ? Dynamic(null()) : Dynamic(s->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,scale_V3_Mat,(void))

Void Matrix_obj::scale_Flt( Float value){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","scale_Flt",0x374a9019,"org.gameplay3d.Matrix.scale_Flt","org/gameplay3d/Matrix.hx",407,0xc2685e30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(407)
		::org::gameplay3d::Matrix_obj::hx_Matrix_scale_Flt(this->nativeObject,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,scale_Flt,(void))

Void Matrix_obj::scale_Flt_Mat( Float value,::org::gameplay3d::Matrix dst){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","scale_Flt_Mat",0xfbdd181a,"org.gameplay3d.Matrix.scale_Flt_Mat","org/gameplay3d/Matrix.hx",413,0xc2685e30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(413)
		::org::gameplay3d::Matrix_obj::hx_Matrix_scale_Flt_Mat(this->nativeObject,value,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,scale_Flt_Mat,(void))

Void Matrix_obj::scale_FltX3( Float xScale,Float yScale,Float zScale){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","scale_FltX3",0x8b21d534,"org.gameplay3d.Matrix.scale_FltX3","org/gameplay3d/Matrix.hx",419,0xc2685e30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xScale,"xScale")
		HX_STACK_ARG(yScale,"yScale")
		HX_STACK_ARG(zScale,"zScale")
		HX_STACK_LINE(419)
		::org::gameplay3d::Matrix_obj::hx_Matrix_scale_FltX3(this->nativeObject,xScale,yScale,zScale);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix_obj,scale_FltX3,(void))

Void Matrix_obj::scale_FltX3_Mat( Float xScale,Float yScale,Float zScale,::org::gameplay3d::Matrix dst){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","scale_FltX3_Mat",0xb90c86b5,"org.gameplay3d.Matrix.scale_FltX3_Mat","org/gameplay3d/Matrix.hx",425,0xc2685e30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xScale,"xScale")
		HX_STACK_ARG(yScale,"yScale")
		HX_STACK_ARG(zScale,"zScale")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(425)
		::org::gameplay3d::Matrix_obj::hx_Matrix_scale_FltX3_Mat(this->nativeObject,xScale,yScale,zScale,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Matrix_obj,scale_FltX3_Mat,(void))

Void Matrix_obj::set_Mat( ::org::gameplay3d::immutable::IMatrix m){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","set_Mat",0x0981bf63,"org.gameplay3d.Matrix.set_Mat","org/gameplay3d/Matrix.hx",431,0xc2685e30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(m,"m")
		HX_STACK_LINE(431)
		::org::gameplay3d::Matrix_obj::hx_Matrix_set_Mat(this->nativeObject,(  (((m == null()))) ? Dynamic(null()) : Dynamic(m->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,set_Mat,(void))

Void Matrix_obj::set_ArrFlt( Array< Float > m){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","set_ArrFlt",0x9aba57aa,"org.gameplay3d.Matrix.set_ArrFlt","org/gameplay3d/Matrix.hx",437,0xc2685e30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(m,"m")
		HX_STACK_LINE(437)
		::org::gameplay3d::Matrix_obj::hx_Matrix_set_ArrFlt(this->nativeObject,m);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,set_ArrFlt,(void))

Void Matrix_obj::set_FltX16( Float m11,Float m12,Float m13,Float m14,Float m21,Float m22,Float m23,Float m24,Float m31,Float m32,Float m33,Float m34,Float m41,Float m42,Float m43,Float m44){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","set_FltX16",0x277b8cac,"org.gameplay3d.Matrix.set_FltX16","org/gameplay3d/Matrix.hx",443,0xc2685e30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(m11,"m11")
		HX_STACK_ARG(m12,"m12")
		HX_STACK_ARG(m13,"m13")
		HX_STACK_ARG(m14,"m14")
		HX_STACK_ARG(m21,"m21")
		HX_STACK_ARG(m22,"m22")
		HX_STACK_ARG(m23,"m23")
		HX_STACK_ARG(m24,"m24")
		HX_STACK_ARG(m31,"m31")
		HX_STACK_ARG(m32,"m32")
		HX_STACK_ARG(m33,"m33")
		HX_STACK_ARG(m34,"m34")
		HX_STACK_ARG(m41,"m41")
		HX_STACK_ARG(m42,"m42")
		HX_STACK_ARG(m43,"m43")
		HX_STACK_ARG(m44,"m44")
		HX_STACK_LINE(443)
		::org::gameplay3d::Matrix_obj::hx_Matrix_set_FltX16(this->nativeObject,m11,m12,m13,m14,m21,m22,m23,m24,m31,m32,m33,m34,m41,m42,m43,m44);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC16(Matrix_obj,set_FltX16,(void))

Void Matrix_obj::setIdentity( ){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","setIdentity",0x2b935240,"org.gameplay3d.Matrix.setIdentity","org/gameplay3d/Matrix.hx",449,0xc2685e30)
		HX_STACK_THIS(this)
		HX_STACK_LINE(449)
		::org::gameplay3d::Matrix_obj::hx_Matrix_setIdentity(this->nativeObject);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,setIdentity,(void))

Void Matrix_obj::setZero( ){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","setZero",0x0645f32a,"org.gameplay3d.Matrix.setZero","org/gameplay3d/Matrix.hx",455,0xc2685e30)
		HX_STACK_THIS(this)
		HX_STACK_LINE(455)
		::org::gameplay3d::Matrix_obj::hx_Matrix_setZero(this->nativeObject);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,setZero,(void))

Void Matrix_obj::subtract_Mat( ::org::gameplay3d::immutable::IMatrix m){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","subtract_Mat",0xfa512b55,"org.gameplay3d.Matrix.subtract_Mat","org/gameplay3d/Matrix.hx",467,0xc2685e30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(m,"m")
		HX_STACK_LINE(467)
		::org::gameplay3d::Matrix_obj::hx_Matrix_subtract(this->nativeObject,(  (((m == null()))) ? Dynamic(null()) : Dynamic(m->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,subtract_Mat,(void))

Void Matrix_obj::transformPoint_V3( ::org::gameplay3d::Vector3 point){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","transformPoint_V3",0x2da9a7b8,"org.gameplay3d.Matrix.transformPoint_V3","org/gameplay3d/Matrix.hx",473,0xc2685e30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(point,"point")
		HX_STACK_LINE(473)
		::org::gameplay3d::Matrix_obj::hx_Matrix_transformPoint_V3(this->nativeObject,(  (((point == null()))) ? Dynamic(null()) : Dynamic(point->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,transformPoint_V3,(void))

Void Matrix_obj::transformPoint_V3X2( ::org::gameplay3d::immutable::IVector3 point,::org::gameplay3d::Vector3 dst){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","transformPoint_V3X2",0x292d5292,"org.gameplay3d.Matrix.transformPoint_V3X2","org/gameplay3d/Matrix.hx",479,0xc2685e30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(point,"point")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(479)
		::org::gameplay3d::Matrix_obj::hx_Matrix_transformPoint_V3X2(this->nativeObject,(  (((point == null()))) ? Dynamic(null()) : Dynamic(point->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,transformPoint_V3X2,(void))

Void Matrix_obj::transformVector_V3( ::org::gameplay3d::Vector3 vector){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","transformVector_V3",0x14b1960d,"org.gameplay3d.Matrix.transformVector_V3","org/gameplay3d/Matrix.hx",485,0xc2685e30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(vector,"vector")
		HX_STACK_LINE(485)
		::org::gameplay3d::Matrix_obj::hx_Matrix_transformVector_V3(this->nativeObject,(  (((vector == null()))) ? Dynamic(null()) : Dynamic(vector->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,transformVector_V3,(void))

Void Matrix_obj::transformVector_V4( ::org::gameplay3d::Vector4 vector){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","transformVector_V4",0x14b1960e,"org.gameplay3d.Matrix.transformVector_V4","org/gameplay3d/Matrix.hx",491,0xc2685e30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(vector,"vector")
		HX_STACK_LINE(491)
		::org::gameplay3d::Matrix_obj::hx_Matrix_transformVector_V4(this->nativeObject,(  (((vector == null()))) ? Dynamic(null()) : Dynamic(vector->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,transformVector_V4,(void))

Void Matrix_obj::transformVector_V3X2( ::org::gameplay3d::immutable::IVector3 vector,::org::gameplay3d::Vector3 dst){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","transformVector_V3X2",0xd4cd4027,"org.gameplay3d.Matrix.transformVector_V3X2","org/gameplay3d/Matrix.hx",497,0xc2685e30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(vector,"vector")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(497)
		::org::gameplay3d::Matrix_obj::hx_Matrix_transformVector_V3X2(this->nativeObject,(  (((vector == null()))) ? Dynamic(null()) : Dynamic(vector->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,transformVector_V3X2,(void))

Void Matrix_obj::transformVector_V4X2( ::org::gameplay3d::immutable::IVector4 vector,::org::gameplay3d::Vector4 dst){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","transformVector_V4X2",0xd4ce0268,"org.gameplay3d.Matrix.transformVector_V4X2","org/gameplay3d/Matrix.hx",503,0xc2685e30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(vector,"vector")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(503)
		::org::gameplay3d::Matrix_obj::hx_Matrix_transformVector_V4X2(this->nativeObject,(  (((vector == null()))) ? Dynamic(null()) : Dynamic(vector->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,transformVector_V4X2,(void))

Void Matrix_obj::transformVector_FltX4_V3( Float x,Float y,Float z,Float w,::org::gameplay3d::Vector3 dst){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","transformVector_FltX4_V3",0xbe0dcdc2,"org.gameplay3d.Matrix.transformVector_FltX4_V3","org/gameplay3d/Matrix.hx",509,0xc2685e30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_ARG(w,"w")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(509)
		::org::gameplay3d::Matrix_obj::hx_Matrix_transformVector_FltX4_V3(this->nativeObject,x,y,z,w,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Matrix_obj,transformVector_FltX4_V3,(void))

Void Matrix_obj::translate_V3( ::org::gameplay3d::immutable::IVector3 t){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","translate_V3",0x416f236e,"org.gameplay3d.Matrix.translate_V3","org/gameplay3d/Matrix.hx",515,0xc2685e30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(t,"t")
		HX_STACK_LINE(515)
		::org::gameplay3d::Matrix_obj::hx_Matrix_translate_V3(this->nativeObject,(  (((t == null()))) ? Dynamic(null()) : Dynamic(t->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,translate_V3,(void))

Void Matrix_obj::translate_V3_Mat( ::org::gameplay3d::immutable::IVector3 t,::org::gameplay3d::Matrix dst){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","translate_V3_Mat",0xc05679ef,"org.gameplay3d.Matrix.translate_V3_Mat","org/gameplay3d/Matrix.hx",521,0xc2685e30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(t,"t")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(521)
		::org::gameplay3d::Matrix_obj::hx_Matrix_translate_V3_Mat(this->nativeObject,(  (((t == null()))) ? Dynamic(null()) : Dynamic(t->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,translate_V3_Mat,(void))

Void Matrix_obj::translate_FltX3( Float x,Float y,Float z){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","translate_FltX3",0x68ba68f8,"org.gameplay3d.Matrix.translate_FltX3","org/gameplay3d/Matrix.hx",527,0xc2685e30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(527)
		::org::gameplay3d::Matrix_obj::hx_Matrix_translate_FltX3(this->nativeObject,x,y,z);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix_obj,translate_FltX3,(void))

Void Matrix_obj::translate_FltX3_Mat( Float x,Float y,Float z,::org::gameplay3d::Matrix dst){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","translate_FltX3_Mat",0x04744c79,"org.gameplay3d.Matrix.translate_FltX3_Mat","org/gameplay3d/Matrix.hx",533,0xc2685e30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(533)
		::org::gameplay3d::Matrix_obj::hx_Matrix_translate_FltX3_Mat(this->nativeObject,x,y,z,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Matrix_obj,translate_FltX3_Mat,(void))

Void Matrix_obj::transpose( ){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","transpose",0x4bdf43b9,"org.gameplay3d.Matrix.transpose","org/gameplay3d/Matrix.hx",539,0xc2685e30)
		HX_STACK_THIS(this)
		HX_STACK_LINE(539)
		::org::gameplay3d::Matrix_obj::hx_Matrix_transpose(this->nativeObject);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,transpose,(void))

Void Matrix_obj::transpose_Mat( ::org::gameplay3d::Matrix dst){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","transpose_Mat",0xc4641bba,"org.gameplay3d.Matrix.transpose_Mat","org/gameplay3d/Matrix.hx",545,0xc2685e30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(545)
		::org::gameplay3d::Matrix_obj::hx_Matrix_transpose_Mat(this->nativeObject,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,transpose_Mat,(void))

::org::gameplay3d::util::INativeArray Matrix_obj::get_m_immutable( ){
	HX_STACK_FRAME("org.gameplay3d.Matrix","get_m_immutable",0x1404e987,"org.gameplay3d.Matrix.get_m_immutable","org/gameplay3d/Matrix.hx",588,0xc2685e30)
	HX_STACK_THIS(this)
	HX_STACK_LINE(588)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,get_m_immutable,return )

::org::gameplay3d::util::IMutableNativeArray Matrix_obj::get_m( ){
	HX_STACK_FRAME("org.gameplay3d.Matrix","get_m",0x5ec5f884,"org.gameplay3d.Matrix.get_m","org/gameplay3d/Matrix.hx",593,0xc2685e30)
	HX_STACK_THIS(this)
	HX_STACK_LINE(593)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,get_m,return )

::org::gameplay3d::Matrix Matrix_obj::_identity;

::org::gameplay3d::Matrix Matrix_obj::_zero;

::org::gameplay3d::Matrix Matrix_obj::make( ){
	HX_STACK_FRAME("org.gameplay3d.Matrix","make",0xb52b0eae,"org.gameplay3d.Matrix.make","org/gameplay3d/Matrix.hx",52,0xc2685e30)
	HX_STACK_LINE(53)
	Dynamic _g = ::org::gameplay3d::Matrix_obj::constructNativeObject();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(53)
	return ::org::gameplay3d::Matrix_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,make,return )

::org::gameplay3d::Matrix Matrix_obj::make_Mat( ::org::gameplay3d::immutable::IMatrix copy){
	HX_STACK_FRAME("org.gameplay3d.Matrix","make_Mat",0x3189052f,"org.gameplay3d.Matrix.make_Mat","org/gameplay3d/Matrix.hx",58,0xc2685e30)
	HX_STACK_ARG(copy,"copy")
	HX_STACK_LINE(59)
	Dynamic _g = ::org::gameplay3d::Matrix_obj::constructNativeObject_Mat(copy);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(59)
	return ::org::gameplay3d::Matrix_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,make_Mat,return )

::org::gameplay3d::Matrix Matrix_obj::make_ArrFlt( Array< Float > m){
	HX_STACK_FRAME("org.gameplay3d.Matrix","make_ArrFlt",0x13a3b95e,"org.gameplay3d.Matrix.make_ArrFlt","org/gameplay3d/Matrix.hx",64,0xc2685e30)
	HX_STACK_ARG(m,"m")
	HX_STACK_LINE(65)
	Dynamic _g = ::org::gameplay3d::Matrix_obj::constructNativeObject_ArrFlt(m);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(65)
	return ::org::gameplay3d::Matrix_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,make_ArrFlt,return )

::org::gameplay3d::Matrix Matrix_obj::make_FltX16( Float m11,Float m12,Float m13,Float m14,Float m21,Float m22,Float m23,Float m24,Float m31,Float m32,Float m33,Float m34,Float m41,Float m42,Float m43,Float m44){
	HX_STACK_FRAME("org.gameplay3d.Matrix","make_FltX16",0xa064ee60,"org.gameplay3d.Matrix.make_FltX16","org/gameplay3d/Matrix.hx",70,0xc2685e30)
	HX_STACK_ARG(m11,"m11")
	HX_STACK_ARG(m12,"m12")
	HX_STACK_ARG(m13,"m13")
	HX_STACK_ARG(m14,"m14")
	HX_STACK_ARG(m21,"m21")
	HX_STACK_ARG(m22,"m22")
	HX_STACK_ARG(m23,"m23")
	HX_STACK_ARG(m24,"m24")
	HX_STACK_ARG(m31,"m31")
	HX_STACK_ARG(m32,"m32")
	HX_STACK_ARG(m33,"m33")
	HX_STACK_ARG(m34,"m34")
	HX_STACK_ARG(m41,"m41")
	HX_STACK_ARG(m42,"m42")
	HX_STACK_ARG(m43,"m43")
	HX_STACK_ARG(m44,"m44")
	HX_STACK_LINE(71)
	Dynamic _g = ::org::gameplay3d::Matrix_obj::constructNativeObject_FltX16(m11,m12,m13,m14,m21,m22,m23,m24,m31,m32,m33,m34,m41,m42,m43,m44);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(71)
	return ::org::gameplay3d::Matrix_obj::__new(_g,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC16(Matrix_obj,make_FltX16,return )

Void Matrix_obj::add_MatX3( ::org::gameplay3d::immutable::IMatrix m1,::org::gameplay3d::immutable::IMatrix m2,::org::gameplay3d::Matrix dst){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","add_MatX3",0x1577aabd,"org.gameplay3d.Matrix.add_MatX3","org/gameplay3d/Matrix.hx",77,0xc2685e30)
		HX_STACK_ARG(m1,"m1")
		HX_STACK_ARG(m2,"m2")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(77)
		::org::gameplay3d::Matrix_obj::hx_Matrix_static_add((  (((m1 == null()))) ? Dynamic(null()) : Dynamic(m1->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((m2 == null()))) ? Dynamic(null()) : Dynamic(m2->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix_obj,add_MatX3,(void))

Void Matrix_obj::createBillboard_V3X3_Mat( ::org::gameplay3d::Vector3 objectPosition,::org::gameplay3d::Vector3 cameraPosition,::org::gameplay3d::Vector3 cameraUpVector,::org::gameplay3d::Matrix dst){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","createBillboard_V3X3_Mat",0x72e9c9d5,"org.gameplay3d.Matrix.createBillboard_V3X3_Mat","org/gameplay3d/Matrix.hx",101,0xc2685e30)
		HX_STACK_ARG(objectPosition,"objectPosition")
		HX_STACK_ARG(cameraPosition,"cameraPosition")
		HX_STACK_ARG(cameraUpVector,"cameraUpVector")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(101)
		::org::gameplay3d::Matrix_obj::hx_Matrix_static_createBillboard_V3X3_Mat((  (((objectPosition == null()))) ? Dynamic(null()) : Dynamic(objectPosition->nativeObject) ),(  (((cameraPosition == null()))) ? Dynamic(null()) : Dynamic(cameraPosition->nativeObject) ),(  (((cameraUpVector == null()))) ? Dynamic(null()) : Dynamic(cameraUpVector->nativeObject) ),(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix_obj,createBillboard_V3X3_Mat,(void))

Void Matrix_obj::createBillboard_V3X4_Mat( ::org::gameplay3d::Vector3 objectPosition,::org::gameplay3d::Vector3 cameraPosition,::org::gameplay3d::Vector3 cameraUpVector,::org::gameplay3d::Vector3 cameraForwardVector,::org::gameplay3d::Matrix dst){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","createBillboard_V3X4_Mat",0x06505e56,"org.gameplay3d.Matrix.createBillboard_V3X4_Mat","org/gameplay3d/Matrix.hx",107,0xc2685e30)
		HX_STACK_ARG(objectPosition,"objectPosition")
		HX_STACK_ARG(cameraPosition,"cameraPosition")
		HX_STACK_ARG(cameraUpVector,"cameraUpVector")
		HX_STACK_ARG(cameraForwardVector,"cameraForwardVector")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(107)
		::org::gameplay3d::Matrix_obj::hx_Matrix_static_createBillboard_V3X4_Mat((  (((objectPosition == null()))) ? Dynamic(null()) : Dynamic(objectPosition->nativeObject) ),(  (((cameraPosition == null()))) ? Dynamic(null()) : Dynamic(cameraPosition->nativeObject) ),(  (((cameraUpVector == null()))) ? Dynamic(null()) : Dynamic(cameraUpVector->nativeObject) ),(  (((cameraForwardVector == null()))) ? Dynamic(null()) : Dynamic(cameraForwardVector->nativeObject) ),(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Matrix_obj,createBillboard_V3X4_Mat,(void))

Void Matrix_obj::createLookAt_V3X3_Mat( ::org::gameplay3d::immutable::IVector3 eyePosition,::org::gameplay3d::immutable::IVector3 targetPosition,::org::gameplay3d::immutable::IVector3 up,::org::gameplay3d::Matrix dst){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","createLookAt_V3X3_Mat",0xecc3584a,"org.gameplay3d.Matrix.createLookAt_V3X3_Mat","org/gameplay3d/Matrix.hx",113,0xc2685e30)
		HX_STACK_ARG(eyePosition,"eyePosition")
		HX_STACK_ARG(targetPosition,"targetPosition")
		HX_STACK_ARG(up,"up")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(113)
		::org::gameplay3d::Matrix_obj::hx_Matrix_static_createLookAt_V3X3_Mat((  (((eyePosition == null()))) ? Dynamic(null()) : Dynamic(eyePosition->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((targetPosition == null()))) ? Dynamic(null()) : Dynamic(targetPosition->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((up == null()))) ? Dynamic(null()) : Dynamic(up->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix_obj,createLookAt_V3X3_Mat,(void))

Void Matrix_obj::createLookAt_FltX9_Mat( Float eyePositionX,Float eyePositionY,Float eyePositionZ,Float targetCenterX,Float targetCenterY,Float targetCenterZ,Float upX,Float upY,Float upZ,::org::gameplay3d::Matrix dst){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","createLookAt_FltX9_Mat",0x4d78a6ff,"org.gameplay3d.Matrix.createLookAt_FltX9_Mat","org/gameplay3d/Matrix.hx",119,0xc2685e30)
		HX_STACK_ARG(eyePositionX,"eyePositionX")
		HX_STACK_ARG(eyePositionY,"eyePositionY")
		HX_STACK_ARG(eyePositionZ,"eyePositionZ")
		HX_STACK_ARG(targetCenterX,"targetCenterX")
		HX_STACK_ARG(targetCenterY,"targetCenterY")
		HX_STACK_ARG(targetCenterZ,"targetCenterZ")
		HX_STACK_ARG(upX,"upX")
		HX_STACK_ARG(upY,"upY")
		HX_STACK_ARG(upZ,"upZ")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(119)
		::org::gameplay3d::Matrix_obj::hx_Matrix_static_createLookAt_FltX9_Mat(eyePositionX,eyePositionY,eyePositionZ,targetCenterX,targetCenterY,targetCenterZ,upX,upY,upZ,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC10(Matrix_obj,createLookAt_FltX9_Mat,(void))

Void Matrix_obj::createOrthographic( Float width,Float height,Float zNearPlane,Float zFarPlane,::org::gameplay3d::Matrix dst){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","createOrthographic",0xc8b9fc4c,"org.gameplay3d.Matrix.createOrthographic","org/gameplay3d/Matrix.hx",125,0xc2685e30)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(zNearPlane,"zNearPlane")
		HX_STACK_ARG(zFarPlane,"zFarPlane")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(125)
		::org::gameplay3d::Matrix_obj::hx_Matrix_static_createOrthographic(width,height,zNearPlane,zFarPlane,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Matrix_obj,createOrthographic,(void))

Void Matrix_obj::createOrthographicOffCenter( Float left,Float right,Float bottom,Float top,Float zNearPlane,Float zFarPlane,::org::gameplay3d::Matrix dst){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","createOrthographicOffCenter",0xead7e4b8,"org.gameplay3d.Matrix.createOrthographicOffCenter","org/gameplay3d/Matrix.hx",131,0xc2685e30)
		HX_STACK_ARG(left,"left")
		HX_STACK_ARG(right,"right")
		HX_STACK_ARG(bottom,"bottom")
		HX_STACK_ARG(top,"top")
		HX_STACK_ARG(zNearPlane,"zNearPlane")
		HX_STACK_ARG(zFarPlane,"zFarPlane")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(131)
		::org::gameplay3d::Matrix_obj::hx_Matrix_static_createOrthographicOffCenter(left,right,bottom,top,zNearPlane,zFarPlane,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(Matrix_obj,createOrthographicOffCenter,(void))

Void Matrix_obj::createPerspective( Float fieldOfView,Float aspectRatio,Float zNearPlane,Float zFarPlane,::org::gameplay3d::Matrix dst){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","createPerspective",0xbd47f320,"org.gameplay3d.Matrix.createPerspective","org/gameplay3d/Matrix.hx",137,0xc2685e30)
		HX_STACK_ARG(fieldOfView,"fieldOfView")
		HX_STACK_ARG(aspectRatio,"aspectRatio")
		HX_STACK_ARG(zNearPlane,"zNearPlane")
		HX_STACK_ARG(zFarPlane,"zFarPlane")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(137)
		::org::gameplay3d::Matrix_obj::hx_Matrix_static_createPerspective(fieldOfView,aspectRatio,zNearPlane,zFarPlane,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Matrix_obj,createPerspective,(void))

Void Matrix_obj::createReflection( ::org::gameplay3d::Plane plane,::org::gameplay3d::Matrix dst){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","createReflection",0x27918087,"org.gameplay3d.Matrix.createReflection","org/gameplay3d/Matrix.hx",143,0xc2685e30)
		HX_STACK_ARG(plane,"plane")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(143)
		::org::gameplay3d::Matrix_obj::hx_Matrix_static_createReflection((  (((plane == null()))) ? Dynamic(null()) : Dynamic(plane->nativeObject) ),(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,createReflection,(void))

Void Matrix_obj::createRotation_Qtrn_Mat( ::org::gameplay3d::immutable::IQuaternion quat,::org::gameplay3d::Matrix dst){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","createRotation_Qtrn_Mat",0x84ffe785,"org.gameplay3d.Matrix.createRotation_Qtrn_Mat","org/gameplay3d/Matrix.hx",149,0xc2685e30)
		HX_STACK_ARG(quat,"quat")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(149)
		::org::gameplay3d::Matrix_obj::hx_Matrix_static_createRotation_Qtrn_Mat((  (((quat == null()))) ? Dynamic(null()) : Dynamic(quat->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,createRotation_Qtrn_Mat,(void))

Void Matrix_obj::createRotation_V3_Flt_Mat( ::org::gameplay3d::immutable::IVector3 axis,Float angle,::org::gameplay3d::Matrix dst){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","createRotation_V3_Flt_Mat",0xcc50dab2,"org.gameplay3d.Matrix.createRotation_V3_Flt_Mat","org/gameplay3d/Matrix.hx",155,0xc2685e30)
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(angle,"angle")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(155)
		::org::gameplay3d::Matrix_obj::hx_Matrix_static_createRotation_V3_Flt_Mat((  (((axis == null()))) ? Dynamic(null()) : Dynamic(axis->__Field(HX_CSTRING("nativeObject"),true)) ),angle,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix_obj,createRotation_V3_Flt_Mat,(void))

Void Matrix_obj::createRotationX( Float angle,::org::gameplay3d::Matrix dst){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","createRotationX",0xbfe9f5fe,"org.gameplay3d.Matrix.createRotationX","org/gameplay3d/Matrix.hx",161,0xc2685e30)
		HX_STACK_ARG(angle,"angle")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(161)
		::org::gameplay3d::Matrix_obj::hx_Matrix_static_createRotationX(angle,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,createRotationX,(void))

Void Matrix_obj::createRotationY( Float angle,::org::gameplay3d::Matrix dst){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","createRotationY",0xbfe9f5ff,"org.gameplay3d.Matrix.createRotationY","org/gameplay3d/Matrix.hx",167,0xc2685e30)
		HX_STACK_ARG(angle,"angle")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(167)
		::org::gameplay3d::Matrix_obj::hx_Matrix_static_createRotationY(angle,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,createRotationY,(void))

Void Matrix_obj::createRotationZ( Float angle,::org::gameplay3d::Matrix dst){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","createRotationZ",0xbfe9f600,"org.gameplay3d.Matrix.createRotationZ","org/gameplay3d/Matrix.hx",173,0xc2685e30)
		HX_STACK_ARG(angle,"angle")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(173)
		::org::gameplay3d::Matrix_obj::hx_Matrix_static_createRotationZ(angle,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,createRotationZ,(void))

Void Matrix_obj::createScale_V3_Mat( ::org::gameplay3d::immutable::IVector3 scale,::org::gameplay3d::Matrix dst){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","createScale_V3_Mat",0x068c0f4f,"org.gameplay3d.Matrix.createScale_V3_Mat","org/gameplay3d/Matrix.hx",179,0xc2685e30)
		HX_STACK_ARG(scale,"scale")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(179)
		::org::gameplay3d::Matrix_obj::hx_Matrix_static_createScale_V3_Mat((  (((scale == null()))) ? Dynamic(null()) : Dynamic(scale->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,createScale_V3_Mat,(void))

Void Matrix_obj::createScale_FltX3_Mat( Float xScale,Float yScale,Float zScale,::org::gameplay3d::Matrix dst){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","createScale_FltX3_Mat",0x899e5319,"org.gameplay3d.Matrix.createScale_FltX3_Mat","org/gameplay3d/Matrix.hx",185,0xc2685e30)
		HX_STACK_ARG(xScale,"xScale")
		HX_STACK_ARG(yScale,"yScale")
		HX_STACK_ARG(zScale,"zScale")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(185)
		::org::gameplay3d::Matrix_obj::hx_Matrix_static_createScale_FltX3_Mat(xScale,yScale,zScale,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix_obj,createScale_FltX3_Mat,(void))

Void Matrix_obj::createTranslation_V3_Mat( ::org::gameplay3d::immutable::IVector3 translation,::org::gameplay3d::Matrix dst){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","createTranslation_V3_Mat",0xb7a5a4c8,"org.gameplay3d.Matrix.createTranslation_V3_Mat","org/gameplay3d/Matrix.hx",191,0xc2685e30)
		HX_STACK_ARG(translation,"translation")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(191)
		::org::gameplay3d::Matrix_obj::hx_Matrix_static_createTranslation_V3_Mat((  (((translation == null()))) ? Dynamic(null()) : Dynamic(translation->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,createTranslation_V3_Mat,(void))

Void Matrix_obj::createTranslation_FltX3_Mat( Float xTranslation,Float yTranslation,Float zTranslation,::org::gameplay3d::Matrix dst){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","createTranslation_FltX3_Mat",0x9aeaaf40,"org.gameplay3d.Matrix.createTranslation_FltX3_Mat","org/gameplay3d/Matrix.hx",197,0xc2685e30)
		HX_STACK_ARG(xTranslation,"xTranslation")
		HX_STACK_ARG(yTranslation,"yTranslation")
		HX_STACK_ARG(zTranslation,"zTranslation")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(197)
		::org::gameplay3d::Matrix_obj::hx_Matrix_static_createTranslation_FltX3_Mat(xTranslation,yTranslation,zTranslation,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix_obj,createTranslation_FltX3_Mat,(void))

::org::gameplay3d::immutable::IMatrix Matrix_obj::identity( ){
	HX_STACK_FRAME("org.gameplay3d.Matrix","identity",0x9fed79fe,"org.gameplay3d.Matrix.identity","org/gameplay3d/Matrix.hx",269,0xc2685e30)
	HX_STACK_LINE(28)
	if (((::org::gameplay3d::Matrix_obj::_identity == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Matrix _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Matrix >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(269)
			Dynamic nativeObject = ::org::gameplay3d::Matrix_obj::hx_Matrix_static_identity();		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::Matrix result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Matrix _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return ::org::gameplay3d::Matrix_obj::_identity = _g1;
	}
	else{
		HX_STACK_LINE(269)
		Dynamic _g2 = ::org::gameplay3d::Matrix_obj::hx_Matrix_static_identity();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Matrix _g3 = ::org::gameplay3d::Matrix_obj::_identity->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return ::org::gameplay3d::Matrix_obj::_identity = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,identity,return )

Void Matrix_obj::multiply_Mat_Flt_Mat( ::org::gameplay3d::immutable::IMatrix m,Float scalar,::org::gameplay3d::Matrix dst){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","multiply_Mat_Flt_Mat",0xdb31e9b5,"org.gameplay3d.Matrix.multiply_Mat_Flt_Mat","org/gameplay3d/Matrix.hx",293,0xc2685e30)
		HX_STACK_ARG(m,"m")
		HX_STACK_ARG(scalar,"scalar")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(293)
		::org::gameplay3d::Matrix_obj::hx_Matrix_static_multiply_Mat_Flt_Mat((  (((m == null()))) ? Dynamic(null()) : Dynamic(m->__Field(HX_CSTRING("nativeObject"),true)) ),scalar,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix_obj,multiply_Mat_Flt_Mat,(void))

Void Matrix_obj::multiply_MatX3( ::org::gameplay3d::immutable::IMatrix m1,::org::gameplay3d::immutable::IMatrix m2,::org::gameplay3d::Matrix dst){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","multiply_MatX3",0x7f155080,"org.gameplay3d.Matrix.multiply_MatX3","org/gameplay3d/Matrix.hx",299,0xc2685e30)
		HX_STACK_ARG(m1,"m1")
		HX_STACK_ARG(m2,"m2")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(299)
		::org::gameplay3d::Matrix_obj::hx_Matrix_static_multiply_MatX3((  (((m1 == null()))) ? Dynamic(null()) : Dynamic(m1->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((m2 == null()))) ? Dynamic(null()) : Dynamic(m2->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix_obj,multiply_MatX3,(void))

Void Matrix_obj::subtract_MatX3( ::org::gameplay3d::immutable::IMatrix m1,::org::gameplay3d::immutable::IMatrix m2,::org::gameplay3d::Matrix dst){
{
		HX_STACK_FRAME("org.gameplay3d.Matrix","subtract_MatX3",0x1172b770,"org.gameplay3d.Matrix.subtract_MatX3","org/gameplay3d/Matrix.hx",461,0xc2685e30)
		HX_STACK_ARG(m1,"m1")
		HX_STACK_ARG(m2,"m2")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(461)
		::org::gameplay3d::Matrix_obj::hx_Matrix_static_subtract((  (((m1 == null()))) ? Dynamic(null()) : Dynamic(m1->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((m2 == null()))) ? Dynamic(null()) : Dynamic(m2->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->nativeObject) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix_obj,subtract_MatX3,(void))

::org::gameplay3d::immutable::IMatrix Matrix_obj::zero( ){
	HX_STACK_FRAME("org.gameplay3d.Matrix","zero",0xbdc5e3e8,"org.gameplay3d.Matrix.zero","org/gameplay3d/Matrix.hx",551,0xc2685e30)
	HX_STACK_LINE(28)
	if (((::org::gameplay3d::Matrix_obj::_zero == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Matrix _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Matrix >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(551)
			Dynamic nativeObject = ::org::gameplay3d::Matrix_obj::hx_Matrix_static_zero();		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::Matrix result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Matrix _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return ::org::gameplay3d::Matrix_obj::_zero = _g1;
	}
	else{
		HX_STACK_LINE(551)
		Dynamic _g2 = ::org::gameplay3d::Matrix_obj::hx_Matrix_static_zero();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Matrix _g3 = ::org::gameplay3d::Matrix_obj::_zero->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return ::org::gameplay3d::Matrix_obj::_zero = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,zero,return )

Dynamic Matrix_obj::constructNativeObject( ){
	HX_STACK_FRAME("org.gameplay3d.Matrix","constructNativeObject",0x127545ad,"org.gameplay3d.Matrix.constructNativeObject","org/gameplay3d/Matrix.hx",561,0xc2685e30)
	HX_STACK_LINE(561)
	return ::org::gameplay3d::Matrix_obj::hx_Matrix_Construct();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,constructNativeObject,return )

Dynamic Matrix_obj::constructNativeObject_Mat( ::org::gameplay3d::immutable::IMatrix copy){
	HX_STACK_FRAME("org.gameplay3d.Matrix","constructNativeObject_Mat",0x725427ae,"org.gameplay3d.Matrix.constructNativeObject_Mat","org/gameplay3d/Matrix.hx",567,0xc2685e30)
	HX_STACK_ARG(copy,"copy")
	HX_STACK_LINE(567)
	return ::org::gameplay3d::Matrix_obj::hx_Matrix_Construct_Mat((  (((copy == null()))) ? Dynamic(null()) : Dynamic(copy->__Field(HX_CSTRING("nativeObject"),true)) ));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,constructNativeObject_Mat,return )

Dynamic Matrix_obj::constructNativeObject_ArrFlt( Array< Float > m){
	HX_STACK_FRAME("org.gameplay3d.Matrix","constructNativeObject_ArrFlt",0xf0ebf03f,"org.gameplay3d.Matrix.constructNativeObject_ArrFlt","org/gameplay3d/Matrix.hx",573,0xc2685e30)
	HX_STACK_ARG(m,"m")
	HX_STACK_LINE(573)
	return ::org::gameplay3d::Matrix_obj::hx_Matrix_Construct_ArrFlt(m);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,constructNativeObject_ArrFlt,return )

Dynamic Matrix_obj::constructNativeObject_FltX16( Float m11,Float m12,Float m13,Float m14,Float m21,Float m22,Float m23,Float m24,Float m31,Float m32,Float m33,Float m34,Float m41,Float m42,Float m43,Float m44){
	HX_STACK_FRAME("org.gameplay3d.Matrix","constructNativeObject_FltX16",0x7dad2541,"org.gameplay3d.Matrix.constructNativeObject_FltX16","org/gameplay3d/Matrix.hx",579,0xc2685e30)
	HX_STACK_ARG(m11,"m11")
	HX_STACK_ARG(m12,"m12")
	HX_STACK_ARG(m13,"m13")
	HX_STACK_ARG(m14,"m14")
	HX_STACK_ARG(m21,"m21")
	HX_STACK_ARG(m22,"m22")
	HX_STACK_ARG(m23,"m23")
	HX_STACK_ARG(m24,"m24")
	HX_STACK_ARG(m31,"m31")
	HX_STACK_ARG(m32,"m32")
	HX_STACK_ARG(m33,"m33")
	HX_STACK_ARG(m34,"m34")
	HX_STACK_ARG(m41,"m41")
	HX_STACK_ARG(m42,"m42")
	HX_STACK_ARG(m43,"m43")
	HX_STACK_ARG(m44,"m44")
	HX_STACK_LINE(579)
	return ::org::gameplay3d::Matrix_obj::hx_Matrix_Construct_FltX16(m11,m12,m13,m14,m21,m22,m23,m24,m31,m32,m33,m34,m41,m42,m43,m44);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC16(Matrix_obj,constructNativeObject_FltX16,return )

Dynamic Matrix_obj::hx_Matrix_Construct;

Dynamic Matrix_obj::hx_Matrix_Construct_Mat;

Dynamic Matrix_obj::hx_Matrix_Construct_ArrFlt;

Dynamic Matrix_obj::hx_Matrix_Construct_FltX16;

Dynamic Matrix_obj::hx_Matrix_static_add;

Dynamic Matrix_obj::hx_Matrix_add_Mat;

Dynamic Matrix_obj::hx_Matrix_add_Flt;

Dynamic Matrix_obj::hx_Matrix_add_Flt_Mat;

Dynamic Matrix_obj::hx_Matrix_static_createBillboard_V3X3_Mat;

Dynamic Matrix_obj::hx_Matrix_static_createBillboard_V3X4_Mat;

Dynamic Matrix_obj::hx_Matrix_static_createLookAt_V3X3_Mat;

Dynamic Matrix_obj::hx_Matrix_static_createLookAt_FltX9_Mat;

Dynamic Matrix_obj::hx_Matrix_static_createOrthographic;

Dynamic Matrix_obj::hx_Matrix_static_createOrthographicOffCenter;

Dynamic Matrix_obj::hx_Matrix_static_createPerspective;

Dynamic Matrix_obj::hx_Matrix_static_createReflection;

Dynamic Matrix_obj::hx_Matrix_static_createRotation_Qtrn_Mat;

Dynamic Matrix_obj::hx_Matrix_static_createRotation_V3_Flt_Mat;

Dynamic Matrix_obj::hx_Matrix_static_createRotationX;

Dynamic Matrix_obj::hx_Matrix_static_createRotationY;

Dynamic Matrix_obj::hx_Matrix_static_createRotationZ;

Dynamic Matrix_obj::hx_Matrix_static_createScale_V3_Mat;

Dynamic Matrix_obj::hx_Matrix_static_createScale_FltX3_Mat;

Dynamic Matrix_obj::hx_Matrix_static_createTranslation_V3_Mat;

Dynamic Matrix_obj::hx_Matrix_static_createTranslation_FltX3_Mat;

Dynamic Matrix_obj::hx_Matrix_decompose;

Dynamic Matrix_obj::hx_Matrix_determinant;

Dynamic Matrix_obj::hx_Matrix_getBackVector;

Dynamic Matrix_obj::hx_Matrix_getDownVector;

Dynamic Matrix_obj::hx_Matrix_getForwardVector;

Dynamic Matrix_obj::hx_Matrix_getLeftVector;

Dynamic Matrix_obj::hx_Matrix_getRightVector;

Dynamic Matrix_obj::hx_Matrix_getRotation;

Dynamic Matrix_obj::hx_Matrix_getScale;

Dynamic Matrix_obj::hx_Matrix_getTranslation;

Dynamic Matrix_obj::hx_Matrix_getUpVector;

Dynamic Matrix_obj::hx_Matrix_static_identity;

Dynamic Matrix_obj::hx_Matrix_invert;

Dynamic Matrix_obj::hx_Matrix_invert_Mat;

Dynamic Matrix_obj::hx_Matrix_isIdentity;

Dynamic Matrix_obj::hx_Matrix_static_multiply_Mat_Flt_Mat;

Dynamic Matrix_obj::hx_Matrix_static_multiply_MatX3;

Dynamic Matrix_obj::hx_Matrix_multiply_Mat;

Dynamic Matrix_obj::hx_Matrix_multiply_Flt;

Dynamic Matrix_obj::hx_Matrix_multiply_Flt_Mat;

Dynamic Matrix_obj::hx_Matrix_negate;

Dynamic Matrix_obj::hx_Matrix_negate_Mat;

Dynamic Matrix_obj::hx_Matrix_rotate_Qtrn;

Dynamic Matrix_obj::hx_Matrix_rotate_Qtrn_Mat;

Dynamic Matrix_obj::hx_Matrix_rotate_V3_Flt;

Dynamic Matrix_obj::hx_Matrix_rotate_V3_Flt_Mat;

Dynamic Matrix_obj::hx_Matrix_rotateX_Flt;

Dynamic Matrix_obj::hx_Matrix_rotateX_Flt_Mat;

Dynamic Matrix_obj::hx_Matrix_rotateY_Flt;

Dynamic Matrix_obj::hx_Matrix_rotateY_Flt_Mat;

Dynamic Matrix_obj::hx_Matrix_rotateZ_Flt;

Dynamic Matrix_obj::hx_Matrix_rotateZ_Flt_Mat;

Dynamic Matrix_obj::hx_Matrix_scale_V3;

Dynamic Matrix_obj::hx_Matrix_scale_V3_Mat;

Dynamic Matrix_obj::hx_Matrix_scale_Flt;

Dynamic Matrix_obj::hx_Matrix_scale_Flt_Mat;

Dynamic Matrix_obj::hx_Matrix_scale_FltX3;

Dynamic Matrix_obj::hx_Matrix_scale_FltX3_Mat;

Dynamic Matrix_obj::hx_Matrix_set_Mat;

Dynamic Matrix_obj::hx_Matrix_set_ArrFlt;

Dynamic Matrix_obj::hx_Matrix_set_FltX16;

Dynamic Matrix_obj::hx_Matrix_setIdentity;

Dynamic Matrix_obj::hx_Matrix_setZero;

Dynamic Matrix_obj::hx_Matrix_static_subtract;

Dynamic Matrix_obj::hx_Matrix_subtract;

Dynamic Matrix_obj::hx_Matrix_transformPoint_V3;

Dynamic Matrix_obj::hx_Matrix_transformPoint_V3X2;

Dynamic Matrix_obj::hx_Matrix_transformVector_V3;

Dynamic Matrix_obj::hx_Matrix_transformVector_V4;

Dynamic Matrix_obj::hx_Matrix_transformVector_V3X2;

Dynamic Matrix_obj::hx_Matrix_transformVector_V4X2;

Dynamic Matrix_obj::hx_Matrix_transformVector_FltX4_V3;

Dynamic Matrix_obj::hx_Matrix_translate_V3;

Dynamic Matrix_obj::hx_Matrix_translate_V3_Mat;

Dynamic Matrix_obj::hx_Matrix_translate_FltX3;

Dynamic Matrix_obj::hx_Matrix_translate_FltX3_Mat;

Dynamic Matrix_obj::hx_Matrix_transpose;

Dynamic Matrix_obj::hx_Matrix_transpose_Mat;

Dynamic Matrix_obj::hx_Matrix_static_zero;

Dynamic Matrix_obj::hx_Matrix_property_m_get;


Matrix_obj::Matrix_obj()
{
}

void Matrix_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Matrix);
	HX_MARK_MEMBER_NAME(mat,"mat");
	HX_MARK_MEMBER_NAME(m,"m");
	::org::gameplay3d::intern::NativeBinding_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Matrix_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mat,"mat");
	HX_VISIT_MEMBER_NAME(m,"m");
	::org::gameplay3d::intern::NativeBinding_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Matrix_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"m") ) { return m; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"mat") ) { return mat; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { return make_dyn(); }
		if (HX_FIELD_EQ(inName,"zero") ) { return zero_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_zero") ) { return _zero; }
		if (HX_FIELD_EQ(inName,"get_m") ) { return get_m_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"invert") ) { return invert_dyn(); }
		if (HX_FIELD_EQ(inName,"negate") ) { return negate_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"add_Mat") ) { return add_Mat_dyn(); }
		if (HX_FIELD_EQ(inName,"add_Flt") ) { return add_Flt_dyn(); }
		if (HX_FIELD_EQ(inName,"set_Mat") ) { return set_Mat_dyn(); }
		if (HX_FIELD_EQ(inName,"setZero") ) { return setZero_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"make_Mat") ) { return make_Mat_dyn(); }
		if (HX_FIELD_EQ(inName,"identity") ) { return identity_dyn(); }
		if (HX_FIELD_EQ(inName,"getScale") ) { return getScale_dyn(); }
		if (HX_FIELD_EQ(inName,"scale_V3") ) { return scale_V3_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_identity") ) { return _identity; }
		if (HX_FIELD_EQ(inName,"add_MatX3") ) { return add_MatX3_dyn(); }
		if (HX_FIELD_EQ(inName,"decompose") ) { return decompose_dyn(); }
		if (HX_FIELD_EQ(inName,"scale_Flt") ) { return scale_Flt_dyn(); }
		if (HX_FIELD_EQ(inName,"transpose") ) { return transpose_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"invert_Mat") ) { return invert_Mat_dyn(); }
		if (HX_FIELD_EQ(inName,"isIdentity") ) { return isIdentity_dyn(); }
		if (HX_FIELD_EQ(inName,"negate_Mat") ) { return negate_Mat_dyn(); }
		if (HX_FIELD_EQ(inName,"set_ArrFlt") ) { return set_ArrFlt_dyn(); }
		if (HX_FIELD_EQ(inName,"set_FltX16") ) { return set_FltX16_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"make_ArrFlt") ) { return make_ArrFlt_dyn(); }
		if (HX_FIELD_EQ(inName,"make_FltX16") ) { return make_FltX16_dyn(); }
		if (HX_FIELD_EQ(inName,"impersonate") ) { return impersonate_dyn(); }
		if (HX_FIELD_EQ(inName,"add_Flt_Mat") ) { return add_Flt_Mat_dyn(); }
		if (HX_FIELD_EQ(inName,"determinant") ) { return determinant_dyn(); }
		if (HX_FIELD_EQ(inName,"getRotation") ) { return getRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"getUpVector") ) { return getUpVector_dyn(); }
		if (HX_FIELD_EQ(inName,"rotate_Qtrn") ) { return rotate_Qtrn_dyn(); }
		if (HX_FIELD_EQ(inName,"rotateX_Flt") ) { return rotateX_Flt_dyn(); }
		if (HX_FIELD_EQ(inName,"rotateY_Flt") ) { return rotateY_Flt_dyn(); }
		if (HX_FIELD_EQ(inName,"rotateZ_Flt") ) { return rotateZ_Flt_dyn(); }
		if (HX_FIELD_EQ(inName,"scale_FltX3") ) { return scale_FltX3_dyn(); }
		if (HX_FIELD_EQ(inName,"setIdentity") ) { return setIdentity_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"multiply_Mat") ) { return multiply_Mat_dyn(); }
		if (HX_FIELD_EQ(inName,"multiply_Flt") ) { return multiply_Flt_dyn(); }
		if (HX_FIELD_EQ(inName,"scale_V3_Mat") ) { return scale_V3_Mat_dyn(); }
		if (HX_FIELD_EQ(inName,"subtract_Mat") ) { return subtract_Mat_dyn(); }
		if (HX_FIELD_EQ(inName,"translate_V3") ) { return translate_V3_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getBackVector") ) { return getBackVector_dyn(); }
		if (HX_FIELD_EQ(inName,"getDownVector") ) { return getDownVector_dyn(); }
		if (HX_FIELD_EQ(inName,"getLeftVector") ) { return getLeftVector_dyn(); }
		if (HX_FIELD_EQ(inName,"rotate_V3_Flt") ) { return rotate_V3_Flt_dyn(); }
		if (HX_FIELD_EQ(inName,"scale_Flt_Mat") ) { return scale_Flt_Mat_dyn(); }
		if (HX_FIELD_EQ(inName,"transpose_Mat") ) { return transpose_Mat_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"multiply_MatX3") ) { return multiply_MatX3_dyn(); }
		if (HX_FIELD_EQ(inName,"subtract_MatX3") ) { return subtract_MatX3_dyn(); }
		if (HX_FIELD_EQ(inName,"getRightVector") ) { return getRightVector_dyn(); }
		if (HX_FIELD_EQ(inName,"getTranslation") ) { return getTranslation_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createRotationX") ) { return createRotationX_dyn(); }
		if (HX_FIELD_EQ(inName,"createRotationY") ) { return createRotationY_dyn(); }
		if (HX_FIELD_EQ(inName,"createRotationZ") ) { return createRotationZ_dyn(); }
		if (HX_FIELD_EQ(inName,"rotate_Qtrn_Mat") ) { return rotate_Qtrn_Mat_dyn(); }
		if (HX_FIELD_EQ(inName,"rotateX_Flt_Mat") ) { return rotateX_Flt_Mat_dyn(); }
		if (HX_FIELD_EQ(inName,"rotateY_Flt_Mat") ) { return rotateY_Flt_Mat_dyn(); }
		if (HX_FIELD_EQ(inName,"rotateZ_Flt_Mat") ) { return rotateZ_Flt_Mat_dyn(); }
		if (HX_FIELD_EQ(inName,"scale_FltX3_Mat") ) { return scale_FltX3_Mat_dyn(); }
		if (HX_FIELD_EQ(inName,"translate_FltX3") ) { return translate_FltX3_dyn(); }
		if (HX_FIELD_EQ(inName,"get_m_immutable") ) { return get_m_immutable_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createReflection") ) { return createReflection_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Matrix_invert") ) { return hx_Matrix_invert; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_negate") ) { return hx_Matrix_negate; }
		if (HX_FIELD_EQ(inName,"getForwardVector") ) { return getForwardVector_dyn(); }
		if (HX_FIELD_EQ(inName,"multiply_Flt_Mat") ) { return multiply_Flt_Mat_dyn(); }
		if (HX_FIELD_EQ(inName,"translate_V3_Mat") ) { return translate_V3_Mat_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"createPerspective") ) { return createPerspective_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Matrix_add_Mat") ) { return hx_Matrix_add_Mat; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_add_Flt") ) { return hx_Matrix_add_Flt; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_set_Mat") ) { return hx_Matrix_set_Mat; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_setZero") ) { return hx_Matrix_setZero; }
		if (HX_FIELD_EQ(inName,"rotate_V3_Flt_Mat") ) { return rotate_V3_Flt_Mat_dyn(); }
		if (HX_FIELD_EQ(inName,"transformPoint_V3") ) { return transformPoint_V3_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createOrthographic") ) { return createOrthographic_dyn(); }
		if (HX_FIELD_EQ(inName,"createScale_V3_Mat") ) { return createScale_V3_Mat_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Matrix_getScale") ) { return hx_Matrix_getScale; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_scale_V3") ) { return hx_Matrix_scale_V3; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_subtract") ) { return hx_Matrix_subtract; }
		if (HX_FIELD_EQ(inName,"transformVector_V3") ) { return transformVector_V3_dyn(); }
		if (HX_FIELD_EQ(inName,"transformVector_V4") ) { return transformVector_V4_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hx_Matrix_Construct") ) { return hx_Matrix_Construct; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_decompose") ) { return hx_Matrix_decompose; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_scale_Flt") ) { return hx_Matrix_scale_Flt; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_transpose") ) { return hx_Matrix_transpose; }
		if (HX_FIELD_EQ(inName,"transformPoint_V3X2") ) { return transformPoint_V3X2_dyn(); }
		if (HX_FIELD_EQ(inName,"translate_FltX3_Mat") ) { return translate_FltX3_Mat_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"multiply_Mat_Flt_Mat") ) { return multiply_Mat_Flt_Mat_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Matrix_static_add") ) { return hx_Matrix_static_add; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_invert_Mat") ) { return hx_Matrix_invert_Mat; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_isIdentity") ) { return hx_Matrix_isIdentity; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_negate_Mat") ) { return hx_Matrix_negate_Mat; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_set_ArrFlt") ) { return hx_Matrix_set_ArrFlt; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_set_FltX16") ) { return hx_Matrix_set_FltX16; }
		if (HX_FIELD_EQ(inName,"transformVector_V3X2") ) { return transformVector_V3X2_dyn(); }
		if (HX_FIELD_EQ(inName,"transformVector_V4X2") ) { return transformVector_V4X2_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"createLookAt_V3X3_Mat") ) { return createLookAt_V3X3_Mat_dyn(); }
		if (HX_FIELD_EQ(inName,"createScale_FltX3_Mat") ) { return createScale_FltX3_Mat_dyn(); }
		if (HX_FIELD_EQ(inName,"constructNativeObject") ) { return constructNativeObject_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Matrix_add_Flt_Mat") ) { return hx_Matrix_add_Flt_Mat; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_determinant") ) { return hx_Matrix_determinant; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_getRotation") ) { return hx_Matrix_getRotation; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_getUpVector") ) { return hx_Matrix_getUpVector; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_rotate_Qtrn") ) { return hx_Matrix_rotate_Qtrn; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_rotateX_Flt") ) { return hx_Matrix_rotateX_Flt; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_rotateY_Flt") ) { return hx_Matrix_rotateY_Flt; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_rotateZ_Flt") ) { return hx_Matrix_rotateZ_Flt; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_scale_FltX3") ) { return hx_Matrix_scale_FltX3; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_setIdentity") ) { return hx_Matrix_setIdentity; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_static_zero") ) { return hx_Matrix_static_zero; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"createLookAt_FltX9_Mat") ) { return createLookAt_FltX9_Mat_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Matrix_multiply_Mat") ) { return hx_Matrix_multiply_Mat; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_multiply_Flt") ) { return hx_Matrix_multiply_Flt; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_scale_V3_Mat") ) { return hx_Matrix_scale_V3_Mat; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_translate_V3") ) { return hx_Matrix_translate_V3; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"createRotation_Qtrn_Mat") ) { return createRotation_Qtrn_Mat_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Matrix_Construct_Mat") ) { return hx_Matrix_Construct_Mat; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_getBackVector") ) { return hx_Matrix_getBackVector; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_getDownVector") ) { return hx_Matrix_getDownVector; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_getLeftVector") ) { return hx_Matrix_getLeftVector; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_rotate_V3_Flt") ) { return hx_Matrix_rotate_V3_Flt; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_scale_Flt_Mat") ) { return hx_Matrix_scale_Flt_Mat; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_transpose_Mat") ) { return hx_Matrix_transpose_Mat; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"createBillboard_V3X3_Mat") ) { return createBillboard_V3X3_Mat_dyn(); }
		if (HX_FIELD_EQ(inName,"createBillboard_V3X4_Mat") ) { return createBillboard_V3X4_Mat_dyn(); }
		if (HX_FIELD_EQ(inName,"createTranslation_V3_Mat") ) { return createTranslation_V3_Mat_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Matrix_getRightVector") ) { return hx_Matrix_getRightVector; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_getTranslation") ) { return hx_Matrix_getTranslation; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_property_m_get") ) { return hx_Matrix_property_m_get; }
		if (HX_FIELD_EQ(inName,"transformVector_FltX4_V3") ) { return transformVector_FltX4_V3_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"createRotation_V3_Flt_Mat") ) { return createRotation_V3_Flt_Mat_dyn(); }
		if (HX_FIELD_EQ(inName,"constructNativeObject_Mat") ) { return constructNativeObject_Mat_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Matrix_static_identity") ) { return hx_Matrix_static_identity; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_rotate_Qtrn_Mat") ) { return hx_Matrix_rotate_Qtrn_Mat; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_rotateX_Flt_Mat") ) { return hx_Matrix_rotateX_Flt_Mat; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_rotateY_Flt_Mat") ) { return hx_Matrix_rotateY_Flt_Mat; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_rotateZ_Flt_Mat") ) { return hx_Matrix_rotateZ_Flt_Mat; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_scale_FltX3_Mat") ) { return hx_Matrix_scale_FltX3_Mat; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_static_subtract") ) { return hx_Matrix_static_subtract; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_translate_FltX3") ) { return hx_Matrix_translate_FltX3; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_Matrix_Construct_ArrFlt") ) { return hx_Matrix_Construct_ArrFlt; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_Construct_FltX16") ) { return hx_Matrix_Construct_FltX16; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_getForwardVector") ) { return hx_Matrix_getForwardVector; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_multiply_Flt_Mat") ) { return hx_Matrix_multiply_Flt_Mat; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_translate_V3_Mat") ) { return hx_Matrix_translate_V3_Mat; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"createOrthographicOffCenter") ) { return createOrthographicOffCenter_dyn(); }
		if (HX_FIELD_EQ(inName,"createTranslation_FltX3_Mat") ) { return createTranslation_FltX3_Mat_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Matrix_rotate_V3_Flt_Mat") ) { return hx_Matrix_rotate_V3_Flt_Mat; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_transformPoint_V3") ) { return hx_Matrix_transformPoint_V3; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"constructNativeObject_ArrFlt") ) { return constructNativeObject_ArrFlt_dyn(); }
		if (HX_FIELD_EQ(inName,"constructNativeObject_FltX16") ) { return constructNativeObject_FltX16_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Matrix_transformVector_V3") ) { return hx_Matrix_transformVector_V3; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_transformVector_V4") ) { return hx_Matrix_transformVector_V4; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_Matrix_transformPoint_V3X2") ) { return hx_Matrix_transformPoint_V3X2; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_translate_FltX3_Mat") ) { return hx_Matrix_translate_FltX3_Mat; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"hx_Matrix_transformVector_V3X2") ) { return hx_Matrix_transformVector_V3X2; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_transformVector_V4X2") ) { return hx_Matrix_transformVector_V4X2; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"hx_Matrix_static_multiply_MatX3") ) { return hx_Matrix_static_multiply_MatX3; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"hx_Matrix_static_createRotationX") ) { return hx_Matrix_static_createRotationX; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_static_createRotationY") ) { return hx_Matrix_static_createRotationY; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_static_createRotationZ") ) { return hx_Matrix_static_createRotationZ; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"hx_Matrix_static_createReflection") ) { return hx_Matrix_static_createReflection; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"hx_Matrix_static_createPerspective") ) { return hx_Matrix_static_createPerspective; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_transformVector_FltX4_V3") ) { return hx_Matrix_transformVector_FltX4_V3; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"hx_Matrix_static_createOrthographic") ) { return hx_Matrix_static_createOrthographic; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_static_createScale_V3_Mat") ) { return hx_Matrix_static_createScale_V3_Mat; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"hx_Matrix_static_multiply_Mat_Flt_Mat") ) { return hx_Matrix_static_multiply_Mat_Flt_Mat; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"hx_Matrix_static_createLookAt_V3X3_Mat") ) { return hx_Matrix_static_createLookAt_V3X3_Mat; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_static_createScale_FltX3_Mat") ) { return hx_Matrix_static_createScale_FltX3_Mat; }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"hx_Matrix_static_createLookAt_FltX9_Mat") ) { return hx_Matrix_static_createLookAt_FltX9_Mat; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"hx_Matrix_static_createRotation_Qtrn_Mat") ) { return hx_Matrix_static_createRotation_Qtrn_Mat; }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"hx_Matrix_static_createBillboard_V3X3_Mat") ) { return hx_Matrix_static_createBillboard_V3X3_Mat; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_static_createBillboard_V3X4_Mat") ) { return hx_Matrix_static_createBillboard_V3X4_Mat; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_static_createTranslation_V3_Mat") ) { return hx_Matrix_static_createTranslation_V3_Mat; }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"hx_Matrix_static_createRotation_V3_Flt_Mat") ) { return hx_Matrix_static_createRotation_V3_Flt_Mat; }
		break;
	case 44:
		if (HX_FIELD_EQ(inName,"hx_Matrix_static_createOrthographicOffCenter") ) { return hx_Matrix_static_createOrthographicOffCenter; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_static_createTranslation_FltX3_Mat") ) { return hx_Matrix_static_createTranslation_FltX3_Mat; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Matrix_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"m") ) { m=inValue.Cast< ::org::gameplay3d::util::IMutableNativeArray >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"mat") ) { mat=inValue.Cast< ::org::gameplay3d::util::INativeArray >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_zero") ) { _zero=inValue.Cast< ::org::gameplay3d::Matrix >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_identity") ) { _identity=inValue.Cast< ::org::gameplay3d::Matrix >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hx_Matrix_invert") ) { hx_Matrix_invert=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_negate") ) { hx_Matrix_negate=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"hx_Matrix_add_Mat") ) { hx_Matrix_add_Mat=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_add_Flt") ) { hx_Matrix_add_Flt=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_set_Mat") ) { hx_Matrix_set_Mat=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_setZero") ) { hx_Matrix_setZero=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hx_Matrix_getScale") ) { hx_Matrix_getScale=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_scale_V3") ) { hx_Matrix_scale_V3=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_subtract") ) { hx_Matrix_subtract=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hx_Matrix_Construct") ) { hx_Matrix_Construct=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_decompose") ) { hx_Matrix_decompose=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_scale_Flt") ) { hx_Matrix_scale_Flt=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_transpose") ) { hx_Matrix_transpose=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Matrix_static_add") ) { hx_Matrix_static_add=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_invert_Mat") ) { hx_Matrix_invert_Mat=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_isIdentity") ) { hx_Matrix_isIdentity=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_negate_Mat") ) { hx_Matrix_negate_Mat=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_set_ArrFlt") ) { hx_Matrix_set_ArrFlt=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_set_FltX16") ) { hx_Matrix_set_FltX16=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hx_Matrix_add_Flt_Mat") ) { hx_Matrix_add_Flt_Mat=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_determinant") ) { hx_Matrix_determinant=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_getRotation") ) { hx_Matrix_getRotation=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_getUpVector") ) { hx_Matrix_getUpVector=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_rotate_Qtrn") ) { hx_Matrix_rotate_Qtrn=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_rotateX_Flt") ) { hx_Matrix_rotateX_Flt=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_rotateY_Flt") ) { hx_Matrix_rotateY_Flt=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_rotateZ_Flt") ) { hx_Matrix_rotateZ_Flt=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_scale_FltX3") ) { hx_Matrix_scale_FltX3=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_setIdentity") ) { hx_Matrix_setIdentity=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_static_zero") ) { hx_Matrix_static_zero=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Matrix_multiply_Mat") ) { hx_Matrix_multiply_Mat=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_multiply_Flt") ) { hx_Matrix_multiply_Flt=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_scale_V3_Mat") ) { hx_Matrix_scale_V3_Mat=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_translate_V3") ) { hx_Matrix_translate_V3=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_Matrix_Construct_Mat") ) { hx_Matrix_Construct_Mat=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_getBackVector") ) { hx_Matrix_getBackVector=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_getDownVector") ) { hx_Matrix_getDownVector=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_getLeftVector") ) { hx_Matrix_getLeftVector=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_rotate_V3_Flt") ) { hx_Matrix_rotate_V3_Flt=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_scale_Flt_Mat") ) { hx_Matrix_scale_Flt_Mat=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_transpose_Mat") ) { hx_Matrix_transpose_Mat=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_Matrix_getRightVector") ) { hx_Matrix_getRightVector=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_getTranslation") ) { hx_Matrix_getTranslation=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_property_m_get") ) { hx_Matrix_property_m_get=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_Matrix_static_identity") ) { hx_Matrix_static_identity=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_rotate_Qtrn_Mat") ) { hx_Matrix_rotate_Qtrn_Mat=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_rotateX_Flt_Mat") ) { hx_Matrix_rotateX_Flt_Mat=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_rotateY_Flt_Mat") ) { hx_Matrix_rotateY_Flt_Mat=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_rotateZ_Flt_Mat") ) { hx_Matrix_rotateZ_Flt_Mat=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_scale_FltX3_Mat") ) { hx_Matrix_scale_FltX3_Mat=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_static_subtract") ) { hx_Matrix_static_subtract=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_translate_FltX3") ) { hx_Matrix_translate_FltX3=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_Matrix_Construct_ArrFlt") ) { hx_Matrix_Construct_ArrFlt=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_Construct_FltX16") ) { hx_Matrix_Construct_FltX16=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_getForwardVector") ) { hx_Matrix_getForwardVector=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_multiply_Flt_Mat") ) { hx_Matrix_multiply_Flt_Mat=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_translate_V3_Mat") ) { hx_Matrix_translate_V3_Mat=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"hx_Matrix_rotate_V3_Flt_Mat") ) { hx_Matrix_rotate_V3_Flt_Mat=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_transformPoint_V3") ) { hx_Matrix_transformPoint_V3=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_Matrix_transformVector_V3") ) { hx_Matrix_transformVector_V3=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_transformVector_V4") ) { hx_Matrix_transformVector_V4=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_Matrix_transformPoint_V3X2") ) { hx_Matrix_transformPoint_V3X2=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_translate_FltX3_Mat") ) { hx_Matrix_translate_FltX3_Mat=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"hx_Matrix_transformVector_V3X2") ) { hx_Matrix_transformVector_V3X2=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_transformVector_V4X2") ) { hx_Matrix_transformVector_V4X2=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"hx_Matrix_static_multiply_MatX3") ) { hx_Matrix_static_multiply_MatX3=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"hx_Matrix_static_createRotationX") ) { hx_Matrix_static_createRotationX=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_static_createRotationY") ) { hx_Matrix_static_createRotationY=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_static_createRotationZ") ) { hx_Matrix_static_createRotationZ=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"hx_Matrix_static_createReflection") ) { hx_Matrix_static_createReflection=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"hx_Matrix_static_createPerspective") ) { hx_Matrix_static_createPerspective=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_transformVector_FltX4_V3") ) { hx_Matrix_transformVector_FltX4_V3=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"hx_Matrix_static_createOrthographic") ) { hx_Matrix_static_createOrthographic=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_static_createScale_V3_Mat") ) { hx_Matrix_static_createScale_V3_Mat=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"hx_Matrix_static_multiply_Mat_Flt_Mat") ) { hx_Matrix_static_multiply_Mat_Flt_Mat=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"hx_Matrix_static_createLookAt_V3X3_Mat") ) { hx_Matrix_static_createLookAt_V3X3_Mat=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_static_createScale_FltX3_Mat") ) { hx_Matrix_static_createScale_FltX3_Mat=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"hx_Matrix_static_createLookAt_FltX9_Mat") ) { hx_Matrix_static_createLookAt_FltX9_Mat=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"hx_Matrix_static_createRotation_Qtrn_Mat") ) { hx_Matrix_static_createRotation_Qtrn_Mat=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"hx_Matrix_static_createBillboard_V3X3_Mat") ) { hx_Matrix_static_createBillboard_V3X3_Mat=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_static_createBillboard_V3X4_Mat") ) { hx_Matrix_static_createBillboard_V3X4_Mat=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_static_createTranslation_V3_Mat") ) { hx_Matrix_static_createTranslation_V3_Mat=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"hx_Matrix_static_createRotation_V3_Flt_Mat") ) { hx_Matrix_static_createRotation_V3_Flt_Mat=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 44:
		if (HX_FIELD_EQ(inName,"hx_Matrix_static_createOrthographicOffCenter") ) { hx_Matrix_static_createOrthographicOffCenter=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Matrix_static_createTranslation_FltX3_Mat") ) { hx_Matrix_static_createTranslation_FltX3_Mat=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Matrix_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("mat"));
	outFields->push(HX_CSTRING("m"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_identity"),
	HX_CSTRING("_zero"),
	HX_CSTRING("make"),
	HX_CSTRING("make_Mat"),
	HX_CSTRING("make_ArrFlt"),
	HX_CSTRING("make_FltX16"),
	HX_CSTRING("add_MatX3"),
	HX_CSTRING("createBillboard_V3X3_Mat"),
	HX_CSTRING("createBillboard_V3X4_Mat"),
	HX_CSTRING("createLookAt_V3X3_Mat"),
	HX_CSTRING("createLookAt_FltX9_Mat"),
	HX_CSTRING("createOrthographic"),
	HX_CSTRING("createOrthographicOffCenter"),
	HX_CSTRING("createPerspective"),
	HX_CSTRING("createReflection"),
	HX_CSTRING("createRotation_Qtrn_Mat"),
	HX_CSTRING("createRotation_V3_Flt_Mat"),
	HX_CSTRING("createRotationX"),
	HX_CSTRING("createRotationY"),
	HX_CSTRING("createRotationZ"),
	HX_CSTRING("createScale_V3_Mat"),
	HX_CSTRING("createScale_FltX3_Mat"),
	HX_CSTRING("createTranslation_V3_Mat"),
	HX_CSTRING("createTranslation_FltX3_Mat"),
	HX_CSTRING("identity"),
	HX_CSTRING("multiply_Mat_Flt_Mat"),
	HX_CSTRING("multiply_MatX3"),
	HX_CSTRING("subtract_MatX3"),
	HX_CSTRING("zero"),
	HX_CSTRING("constructNativeObject"),
	HX_CSTRING("constructNativeObject_Mat"),
	HX_CSTRING("constructNativeObject_ArrFlt"),
	HX_CSTRING("constructNativeObject_FltX16"),
	HX_CSTRING("hx_Matrix_Construct"),
	HX_CSTRING("hx_Matrix_Construct_Mat"),
	HX_CSTRING("hx_Matrix_Construct_ArrFlt"),
	HX_CSTRING("hx_Matrix_Construct_FltX16"),
	HX_CSTRING("hx_Matrix_static_add"),
	HX_CSTRING("hx_Matrix_add_Mat"),
	HX_CSTRING("hx_Matrix_add_Flt"),
	HX_CSTRING("hx_Matrix_add_Flt_Mat"),
	HX_CSTRING("hx_Matrix_static_createBillboard_V3X3_Mat"),
	HX_CSTRING("hx_Matrix_static_createBillboard_V3X4_Mat"),
	HX_CSTRING("hx_Matrix_static_createLookAt_V3X3_Mat"),
	HX_CSTRING("hx_Matrix_static_createLookAt_FltX9_Mat"),
	HX_CSTRING("hx_Matrix_static_createOrthographic"),
	HX_CSTRING("hx_Matrix_static_createOrthographicOffCenter"),
	HX_CSTRING("hx_Matrix_static_createPerspective"),
	HX_CSTRING("hx_Matrix_static_createReflection"),
	HX_CSTRING("hx_Matrix_static_createRotation_Qtrn_Mat"),
	HX_CSTRING("hx_Matrix_static_createRotation_V3_Flt_Mat"),
	HX_CSTRING("hx_Matrix_static_createRotationX"),
	HX_CSTRING("hx_Matrix_static_createRotationY"),
	HX_CSTRING("hx_Matrix_static_createRotationZ"),
	HX_CSTRING("hx_Matrix_static_createScale_V3_Mat"),
	HX_CSTRING("hx_Matrix_static_createScale_FltX3_Mat"),
	HX_CSTRING("hx_Matrix_static_createTranslation_V3_Mat"),
	HX_CSTRING("hx_Matrix_static_createTranslation_FltX3_Mat"),
	HX_CSTRING("hx_Matrix_decompose"),
	HX_CSTRING("hx_Matrix_determinant"),
	HX_CSTRING("hx_Matrix_getBackVector"),
	HX_CSTRING("hx_Matrix_getDownVector"),
	HX_CSTRING("hx_Matrix_getForwardVector"),
	HX_CSTRING("hx_Matrix_getLeftVector"),
	HX_CSTRING("hx_Matrix_getRightVector"),
	HX_CSTRING("hx_Matrix_getRotation"),
	HX_CSTRING("hx_Matrix_getScale"),
	HX_CSTRING("hx_Matrix_getTranslation"),
	HX_CSTRING("hx_Matrix_getUpVector"),
	HX_CSTRING("hx_Matrix_static_identity"),
	HX_CSTRING("hx_Matrix_invert"),
	HX_CSTRING("hx_Matrix_invert_Mat"),
	HX_CSTRING("hx_Matrix_isIdentity"),
	HX_CSTRING("hx_Matrix_static_multiply_Mat_Flt_Mat"),
	HX_CSTRING("hx_Matrix_static_multiply_MatX3"),
	HX_CSTRING("hx_Matrix_multiply_Mat"),
	HX_CSTRING("hx_Matrix_multiply_Flt"),
	HX_CSTRING("hx_Matrix_multiply_Flt_Mat"),
	HX_CSTRING("hx_Matrix_negate"),
	HX_CSTRING("hx_Matrix_negate_Mat"),
	HX_CSTRING("hx_Matrix_rotate_Qtrn"),
	HX_CSTRING("hx_Matrix_rotate_Qtrn_Mat"),
	HX_CSTRING("hx_Matrix_rotate_V3_Flt"),
	HX_CSTRING("hx_Matrix_rotate_V3_Flt_Mat"),
	HX_CSTRING("hx_Matrix_rotateX_Flt"),
	HX_CSTRING("hx_Matrix_rotateX_Flt_Mat"),
	HX_CSTRING("hx_Matrix_rotateY_Flt"),
	HX_CSTRING("hx_Matrix_rotateY_Flt_Mat"),
	HX_CSTRING("hx_Matrix_rotateZ_Flt"),
	HX_CSTRING("hx_Matrix_rotateZ_Flt_Mat"),
	HX_CSTRING("hx_Matrix_scale_V3"),
	HX_CSTRING("hx_Matrix_scale_V3_Mat"),
	HX_CSTRING("hx_Matrix_scale_Flt"),
	HX_CSTRING("hx_Matrix_scale_Flt_Mat"),
	HX_CSTRING("hx_Matrix_scale_FltX3"),
	HX_CSTRING("hx_Matrix_scale_FltX3_Mat"),
	HX_CSTRING("hx_Matrix_set_Mat"),
	HX_CSTRING("hx_Matrix_set_ArrFlt"),
	HX_CSTRING("hx_Matrix_set_FltX16"),
	HX_CSTRING("hx_Matrix_setIdentity"),
	HX_CSTRING("hx_Matrix_setZero"),
	HX_CSTRING("hx_Matrix_static_subtract"),
	HX_CSTRING("hx_Matrix_subtract"),
	HX_CSTRING("hx_Matrix_transformPoint_V3"),
	HX_CSTRING("hx_Matrix_transformPoint_V3X2"),
	HX_CSTRING("hx_Matrix_transformVector_V3"),
	HX_CSTRING("hx_Matrix_transformVector_V4"),
	HX_CSTRING("hx_Matrix_transformVector_V3X2"),
	HX_CSTRING("hx_Matrix_transformVector_V4X2"),
	HX_CSTRING("hx_Matrix_transformVector_FltX4_V3"),
	HX_CSTRING("hx_Matrix_translate_V3"),
	HX_CSTRING("hx_Matrix_translate_V3_Mat"),
	HX_CSTRING("hx_Matrix_translate_FltX3"),
	HX_CSTRING("hx_Matrix_translate_FltX3_Mat"),
	HX_CSTRING("hx_Matrix_transpose"),
	HX_CSTRING("hx_Matrix_transpose_Mat"),
	HX_CSTRING("hx_Matrix_static_zero"),
	HX_CSTRING("hx_Matrix_property_m_get"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::org::gameplay3d::util::INativeArray*/ ,(int)offsetof(Matrix_obj,mat),HX_CSTRING("mat")},
	{hx::fsObject /*::org::gameplay3d::util::IMutableNativeArray*/ ,(int)offsetof(Matrix_obj,m),HX_CSTRING("m")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("mat"),
	HX_CSTRING("m"),
	HX_CSTRING("impersonate"),
	HX_CSTRING("add_Mat"),
	HX_CSTRING("add_Flt"),
	HX_CSTRING("add_Flt_Mat"),
	HX_CSTRING("decompose"),
	HX_CSTRING("determinant"),
	HX_CSTRING("getBackVector"),
	HX_CSTRING("getDownVector"),
	HX_CSTRING("getForwardVector"),
	HX_CSTRING("getLeftVector"),
	HX_CSTRING("getRightVector"),
	HX_CSTRING("getRotation"),
	HX_CSTRING("getScale"),
	HX_CSTRING("getTranslation"),
	HX_CSTRING("getUpVector"),
	HX_CSTRING("invert"),
	HX_CSTRING("invert_Mat"),
	HX_CSTRING("isIdentity"),
	HX_CSTRING("multiply_Mat"),
	HX_CSTRING("multiply_Flt"),
	HX_CSTRING("multiply_Flt_Mat"),
	HX_CSTRING("negate"),
	HX_CSTRING("negate_Mat"),
	HX_CSTRING("rotate_Qtrn"),
	HX_CSTRING("rotate_Qtrn_Mat"),
	HX_CSTRING("rotate_V3_Flt"),
	HX_CSTRING("rotate_V3_Flt_Mat"),
	HX_CSTRING("rotateX_Flt"),
	HX_CSTRING("rotateX_Flt_Mat"),
	HX_CSTRING("rotateY_Flt"),
	HX_CSTRING("rotateY_Flt_Mat"),
	HX_CSTRING("rotateZ_Flt"),
	HX_CSTRING("rotateZ_Flt_Mat"),
	HX_CSTRING("scale_V3"),
	HX_CSTRING("scale_V3_Mat"),
	HX_CSTRING("scale_Flt"),
	HX_CSTRING("scale_Flt_Mat"),
	HX_CSTRING("scale_FltX3"),
	HX_CSTRING("scale_FltX3_Mat"),
	HX_CSTRING("set_Mat"),
	HX_CSTRING("set_ArrFlt"),
	HX_CSTRING("set_FltX16"),
	HX_CSTRING("setIdentity"),
	HX_CSTRING("setZero"),
	HX_CSTRING("subtract_Mat"),
	HX_CSTRING("transformPoint_V3"),
	HX_CSTRING("transformPoint_V3X2"),
	HX_CSTRING("transformVector_V3"),
	HX_CSTRING("transformVector_V4"),
	HX_CSTRING("transformVector_V3X2"),
	HX_CSTRING("transformVector_V4X2"),
	HX_CSTRING("transformVector_FltX4_V3"),
	HX_CSTRING("translate_V3"),
	HX_CSTRING("translate_V3_Mat"),
	HX_CSTRING("translate_FltX3"),
	HX_CSTRING("translate_FltX3_Mat"),
	HX_CSTRING("transpose"),
	HX_CSTRING("transpose_Mat"),
	HX_CSTRING("get_m_immutable"),
	HX_CSTRING("get_m"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Matrix_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Matrix_obj::_identity,"_identity");
	HX_MARK_MEMBER_NAME(Matrix_obj::_zero,"_zero");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_Construct,"hx_Matrix_Construct");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_Construct_Mat,"hx_Matrix_Construct_Mat");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_Construct_ArrFlt,"hx_Matrix_Construct_ArrFlt");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_Construct_FltX16,"hx_Matrix_Construct_FltX16");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_static_add,"hx_Matrix_static_add");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_add_Mat,"hx_Matrix_add_Mat");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_add_Flt,"hx_Matrix_add_Flt");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_add_Flt_Mat,"hx_Matrix_add_Flt_Mat");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_static_createBillboard_V3X3_Mat,"hx_Matrix_static_createBillboard_V3X3_Mat");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_static_createBillboard_V3X4_Mat,"hx_Matrix_static_createBillboard_V3X4_Mat");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_static_createLookAt_V3X3_Mat,"hx_Matrix_static_createLookAt_V3X3_Mat");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_static_createLookAt_FltX9_Mat,"hx_Matrix_static_createLookAt_FltX9_Mat");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_static_createOrthographic,"hx_Matrix_static_createOrthographic");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_static_createOrthographicOffCenter,"hx_Matrix_static_createOrthographicOffCenter");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_static_createPerspective,"hx_Matrix_static_createPerspective");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_static_createReflection,"hx_Matrix_static_createReflection");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_static_createRotation_Qtrn_Mat,"hx_Matrix_static_createRotation_Qtrn_Mat");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_static_createRotation_V3_Flt_Mat,"hx_Matrix_static_createRotation_V3_Flt_Mat");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_static_createRotationX,"hx_Matrix_static_createRotationX");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_static_createRotationY,"hx_Matrix_static_createRotationY");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_static_createRotationZ,"hx_Matrix_static_createRotationZ");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_static_createScale_V3_Mat,"hx_Matrix_static_createScale_V3_Mat");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_static_createScale_FltX3_Mat,"hx_Matrix_static_createScale_FltX3_Mat");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_static_createTranslation_V3_Mat,"hx_Matrix_static_createTranslation_V3_Mat");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_static_createTranslation_FltX3_Mat,"hx_Matrix_static_createTranslation_FltX3_Mat");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_decompose,"hx_Matrix_decompose");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_determinant,"hx_Matrix_determinant");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_getBackVector,"hx_Matrix_getBackVector");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_getDownVector,"hx_Matrix_getDownVector");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_getForwardVector,"hx_Matrix_getForwardVector");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_getLeftVector,"hx_Matrix_getLeftVector");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_getRightVector,"hx_Matrix_getRightVector");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_getRotation,"hx_Matrix_getRotation");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_getScale,"hx_Matrix_getScale");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_getTranslation,"hx_Matrix_getTranslation");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_getUpVector,"hx_Matrix_getUpVector");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_static_identity,"hx_Matrix_static_identity");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_invert,"hx_Matrix_invert");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_invert_Mat,"hx_Matrix_invert_Mat");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_isIdentity,"hx_Matrix_isIdentity");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_static_multiply_Mat_Flt_Mat,"hx_Matrix_static_multiply_Mat_Flt_Mat");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_static_multiply_MatX3,"hx_Matrix_static_multiply_MatX3");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_multiply_Mat,"hx_Matrix_multiply_Mat");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_multiply_Flt,"hx_Matrix_multiply_Flt");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_multiply_Flt_Mat,"hx_Matrix_multiply_Flt_Mat");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_negate,"hx_Matrix_negate");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_negate_Mat,"hx_Matrix_negate_Mat");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_rotate_Qtrn,"hx_Matrix_rotate_Qtrn");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_rotate_Qtrn_Mat,"hx_Matrix_rotate_Qtrn_Mat");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_rotate_V3_Flt,"hx_Matrix_rotate_V3_Flt");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_rotate_V3_Flt_Mat,"hx_Matrix_rotate_V3_Flt_Mat");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_rotateX_Flt,"hx_Matrix_rotateX_Flt");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_rotateX_Flt_Mat,"hx_Matrix_rotateX_Flt_Mat");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_rotateY_Flt,"hx_Matrix_rotateY_Flt");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_rotateY_Flt_Mat,"hx_Matrix_rotateY_Flt_Mat");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_rotateZ_Flt,"hx_Matrix_rotateZ_Flt");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_rotateZ_Flt_Mat,"hx_Matrix_rotateZ_Flt_Mat");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_scale_V3,"hx_Matrix_scale_V3");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_scale_V3_Mat,"hx_Matrix_scale_V3_Mat");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_scale_Flt,"hx_Matrix_scale_Flt");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_scale_Flt_Mat,"hx_Matrix_scale_Flt_Mat");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_scale_FltX3,"hx_Matrix_scale_FltX3");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_scale_FltX3_Mat,"hx_Matrix_scale_FltX3_Mat");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_set_Mat,"hx_Matrix_set_Mat");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_set_ArrFlt,"hx_Matrix_set_ArrFlt");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_set_FltX16,"hx_Matrix_set_FltX16");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_setIdentity,"hx_Matrix_setIdentity");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_setZero,"hx_Matrix_setZero");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_static_subtract,"hx_Matrix_static_subtract");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_subtract,"hx_Matrix_subtract");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_transformPoint_V3,"hx_Matrix_transformPoint_V3");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_transformPoint_V3X2,"hx_Matrix_transformPoint_V3X2");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_transformVector_V3,"hx_Matrix_transformVector_V3");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_transformVector_V4,"hx_Matrix_transformVector_V4");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_transformVector_V3X2,"hx_Matrix_transformVector_V3X2");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_transformVector_V4X2,"hx_Matrix_transformVector_V4X2");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_transformVector_FltX4_V3,"hx_Matrix_transformVector_FltX4_V3");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_translate_V3,"hx_Matrix_translate_V3");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_translate_V3_Mat,"hx_Matrix_translate_V3_Mat");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_translate_FltX3,"hx_Matrix_translate_FltX3");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_translate_FltX3_Mat,"hx_Matrix_translate_FltX3_Mat");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_transpose,"hx_Matrix_transpose");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_transpose_Mat,"hx_Matrix_transpose_Mat");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_static_zero,"hx_Matrix_static_zero");
	HX_MARK_MEMBER_NAME(Matrix_obj::hx_Matrix_property_m_get,"hx_Matrix_property_m_get");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Matrix_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Matrix_obj::_identity,"_identity");
	HX_VISIT_MEMBER_NAME(Matrix_obj::_zero,"_zero");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_Construct,"hx_Matrix_Construct");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_Construct_Mat,"hx_Matrix_Construct_Mat");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_Construct_ArrFlt,"hx_Matrix_Construct_ArrFlt");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_Construct_FltX16,"hx_Matrix_Construct_FltX16");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_static_add,"hx_Matrix_static_add");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_add_Mat,"hx_Matrix_add_Mat");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_add_Flt,"hx_Matrix_add_Flt");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_add_Flt_Mat,"hx_Matrix_add_Flt_Mat");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_static_createBillboard_V3X3_Mat,"hx_Matrix_static_createBillboard_V3X3_Mat");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_static_createBillboard_V3X4_Mat,"hx_Matrix_static_createBillboard_V3X4_Mat");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_static_createLookAt_V3X3_Mat,"hx_Matrix_static_createLookAt_V3X3_Mat");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_static_createLookAt_FltX9_Mat,"hx_Matrix_static_createLookAt_FltX9_Mat");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_static_createOrthographic,"hx_Matrix_static_createOrthographic");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_static_createOrthographicOffCenter,"hx_Matrix_static_createOrthographicOffCenter");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_static_createPerspective,"hx_Matrix_static_createPerspective");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_static_createReflection,"hx_Matrix_static_createReflection");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_static_createRotation_Qtrn_Mat,"hx_Matrix_static_createRotation_Qtrn_Mat");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_static_createRotation_V3_Flt_Mat,"hx_Matrix_static_createRotation_V3_Flt_Mat");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_static_createRotationX,"hx_Matrix_static_createRotationX");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_static_createRotationY,"hx_Matrix_static_createRotationY");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_static_createRotationZ,"hx_Matrix_static_createRotationZ");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_static_createScale_V3_Mat,"hx_Matrix_static_createScale_V3_Mat");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_static_createScale_FltX3_Mat,"hx_Matrix_static_createScale_FltX3_Mat");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_static_createTranslation_V3_Mat,"hx_Matrix_static_createTranslation_V3_Mat");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_static_createTranslation_FltX3_Mat,"hx_Matrix_static_createTranslation_FltX3_Mat");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_decompose,"hx_Matrix_decompose");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_determinant,"hx_Matrix_determinant");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_getBackVector,"hx_Matrix_getBackVector");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_getDownVector,"hx_Matrix_getDownVector");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_getForwardVector,"hx_Matrix_getForwardVector");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_getLeftVector,"hx_Matrix_getLeftVector");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_getRightVector,"hx_Matrix_getRightVector");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_getRotation,"hx_Matrix_getRotation");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_getScale,"hx_Matrix_getScale");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_getTranslation,"hx_Matrix_getTranslation");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_getUpVector,"hx_Matrix_getUpVector");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_static_identity,"hx_Matrix_static_identity");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_invert,"hx_Matrix_invert");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_invert_Mat,"hx_Matrix_invert_Mat");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_isIdentity,"hx_Matrix_isIdentity");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_static_multiply_Mat_Flt_Mat,"hx_Matrix_static_multiply_Mat_Flt_Mat");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_static_multiply_MatX3,"hx_Matrix_static_multiply_MatX3");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_multiply_Mat,"hx_Matrix_multiply_Mat");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_multiply_Flt,"hx_Matrix_multiply_Flt");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_multiply_Flt_Mat,"hx_Matrix_multiply_Flt_Mat");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_negate,"hx_Matrix_negate");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_negate_Mat,"hx_Matrix_negate_Mat");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_rotate_Qtrn,"hx_Matrix_rotate_Qtrn");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_rotate_Qtrn_Mat,"hx_Matrix_rotate_Qtrn_Mat");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_rotate_V3_Flt,"hx_Matrix_rotate_V3_Flt");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_rotate_V3_Flt_Mat,"hx_Matrix_rotate_V3_Flt_Mat");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_rotateX_Flt,"hx_Matrix_rotateX_Flt");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_rotateX_Flt_Mat,"hx_Matrix_rotateX_Flt_Mat");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_rotateY_Flt,"hx_Matrix_rotateY_Flt");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_rotateY_Flt_Mat,"hx_Matrix_rotateY_Flt_Mat");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_rotateZ_Flt,"hx_Matrix_rotateZ_Flt");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_rotateZ_Flt_Mat,"hx_Matrix_rotateZ_Flt_Mat");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_scale_V3,"hx_Matrix_scale_V3");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_scale_V3_Mat,"hx_Matrix_scale_V3_Mat");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_scale_Flt,"hx_Matrix_scale_Flt");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_scale_Flt_Mat,"hx_Matrix_scale_Flt_Mat");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_scale_FltX3,"hx_Matrix_scale_FltX3");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_scale_FltX3_Mat,"hx_Matrix_scale_FltX3_Mat");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_set_Mat,"hx_Matrix_set_Mat");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_set_ArrFlt,"hx_Matrix_set_ArrFlt");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_set_FltX16,"hx_Matrix_set_FltX16");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_setIdentity,"hx_Matrix_setIdentity");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_setZero,"hx_Matrix_setZero");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_static_subtract,"hx_Matrix_static_subtract");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_subtract,"hx_Matrix_subtract");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_transformPoint_V3,"hx_Matrix_transformPoint_V3");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_transformPoint_V3X2,"hx_Matrix_transformPoint_V3X2");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_transformVector_V3,"hx_Matrix_transformVector_V3");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_transformVector_V4,"hx_Matrix_transformVector_V4");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_transformVector_V3X2,"hx_Matrix_transformVector_V3X2");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_transformVector_V4X2,"hx_Matrix_transformVector_V4X2");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_transformVector_FltX4_V3,"hx_Matrix_transformVector_FltX4_V3");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_translate_V3,"hx_Matrix_translate_V3");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_translate_V3_Mat,"hx_Matrix_translate_V3_Mat");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_translate_FltX3,"hx_Matrix_translate_FltX3");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_translate_FltX3_Mat,"hx_Matrix_translate_FltX3_Mat");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_transpose,"hx_Matrix_transpose");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_transpose_Mat,"hx_Matrix_transpose_Mat");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_static_zero,"hx_Matrix_static_zero");
	HX_VISIT_MEMBER_NAME(Matrix_obj::hx_Matrix_property_m_get,"hx_Matrix_property_m_get");
};

#endif

Class Matrix_obj::__mClass;

void Matrix_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.Matrix"), hx::TCanCast< Matrix_obj> ,sStaticFields,sMemberFields,
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

void Matrix_obj::__boot()
{
	hx_Matrix_Construct= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("Construct"),(int)0);
	hx_Matrix_Construct_Mat= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("Construct_Mat"),(int)1);
	hx_Matrix_Construct_ArrFlt= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("Construct_ArrFlt"),(int)1);
	hx_Matrix_Construct_FltX16= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("Construct_FltX16"),(int)-1);
	hx_Matrix_static_add= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("static_add"),(int)3);
	hx_Matrix_add_Mat= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("add_Mat"),(int)2);
	hx_Matrix_add_Flt= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("add_Flt"),(int)2);
	hx_Matrix_add_Flt_Mat= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("add_Flt_Mat"),(int)3);
	hx_Matrix_static_createBillboard_V3X3_Mat= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("static_createBillboard_V3X3_Mat"),(int)4);
	hx_Matrix_static_createBillboard_V3X4_Mat= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("static_createBillboard_V3X4_Mat"),(int)5);
	hx_Matrix_static_createLookAt_V3X3_Mat= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("static_createLookAt_V3X3_Mat"),(int)4);
	hx_Matrix_static_createLookAt_FltX9_Mat= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("static_createLookAt_FltX9_Mat"),(int)-1);
	hx_Matrix_static_createOrthographic= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("static_createOrthographic"),(int)5);
	hx_Matrix_static_createOrthographicOffCenter= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("static_createOrthographicOffCenter"),(int)-1);
	hx_Matrix_static_createPerspective= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("static_createPerspective"),(int)5);
	hx_Matrix_static_createReflection= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("static_createReflection"),(int)2);
	hx_Matrix_static_createRotation_Qtrn_Mat= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("static_createRotation_Qtrn_Mat"),(int)2);
	hx_Matrix_static_createRotation_V3_Flt_Mat= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("static_createRotation_V3_Flt_Mat"),(int)3);
	hx_Matrix_static_createRotationX= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("static_createRotationX"),(int)2);
	hx_Matrix_static_createRotationY= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("static_createRotationY"),(int)2);
	hx_Matrix_static_createRotationZ= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("static_createRotationZ"),(int)2);
	hx_Matrix_static_createScale_V3_Mat= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("static_createScale_V3_Mat"),(int)2);
	hx_Matrix_static_createScale_FltX3_Mat= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("static_createScale_FltX3_Mat"),(int)4);
	hx_Matrix_static_createTranslation_V3_Mat= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("static_createTranslation_V3_Mat"),(int)2);
	hx_Matrix_static_createTranslation_FltX3_Mat= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("static_createTranslation_FltX3_Mat"),(int)4);
	hx_Matrix_decompose= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("decompose"),(int)4);
	hx_Matrix_determinant= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("determinant"),(int)1);
	hx_Matrix_getBackVector= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("getBackVector"),(int)2);
	hx_Matrix_getDownVector= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("getDownVector"),(int)2);
	hx_Matrix_getForwardVector= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("getForwardVector"),(int)2);
	hx_Matrix_getLeftVector= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("getLeftVector"),(int)2);
	hx_Matrix_getRightVector= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("getRightVector"),(int)2);
	hx_Matrix_getRotation= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("getRotation"),(int)2);
	hx_Matrix_getScale= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("getScale"),(int)2);
	hx_Matrix_getTranslation= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("getTranslation"),(int)2);
	hx_Matrix_getUpVector= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("getUpVector"),(int)2);
	hx_Matrix_static_identity= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("static_identity"),(int)0);
	hx_Matrix_invert= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("invert"),(int)1);
	hx_Matrix_invert_Mat= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("invert_Mat"),(int)2);
	hx_Matrix_isIdentity= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("isIdentity"),(int)1);
	hx_Matrix_static_multiply_Mat_Flt_Mat= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("static_multiply_Mat_Flt_Mat"),(int)3);
	hx_Matrix_static_multiply_MatX3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("static_multiply_MatX3"),(int)3);
	hx_Matrix_multiply_Mat= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("multiply_Mat"),(int)2);
	hx_Matrix_multiply_Flt= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("multiply_Flt"),(int)2);
	hx_Matrix_multiply_Flt_Mat= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("multiply_Flt_Mat"),(int)3);
	hx_Matrix_negate= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("negate"),(int)1);
	hx_Matrix_negate_Mat= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("negate_Mat"),(int)2);
	hx_Matrix_rotate_Qtrn= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("rotate_Qtrn"),(int)2);
	hx_Matrix_rotate_Qtrn_Mat= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("rotate_Qtrn_Mat"),(int)3);
	hx_Matrix_rotate_V3_Flt= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("rotate_V3_Flt"),(int)3);
	hx_Matrix_rotate_V3_Flt_Mat= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("rotate_V3_Flt_Mat"),(int)4);
	hx_Matrix_rotateX_Flt= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("rotateX_Flt"),(int)2);
	hx_Matrix_rotateX_Flt_Mat= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("rotateX_Flt_Mat"),(int)3);
	hx_Matrix_rotateY_Flt= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("rotateY_Flt"),(int)2);
	hx_Matrix_rotateY_Flt_Mat= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("rotateY_Flt_Mat"),(int)3);
	hx_Matrix_rotateZ_Flt= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("rotateZ_Flt"),(int)2);
	hx_Matrix_rotateZ_Flt_Mat= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("rotateZ_Flt_Mat"),(int)3);
	hx_Matrix_scale_V3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("scale_V3"),(int)2);
	hx_Matrix_scale_V3_Mat= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("scale_V3_Mat"),(int)3);
	hx_Matrix_scale_Flt= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("scale_Flt"),(int)2);
	hx_Matrix_scale_Flt_Mat= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("scale_Flt_Mat"),(int)3);
	hx_Matrix_scale_FltX3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("scale_FltX3"),(int)4);
	hx_Matrix_scale_FltX3_Mat= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("scale_FltX3_Mat"),(int)5);
	hx_Matrix_set_Mat= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("set_Mat"),(int)2);
	hx_Matrix_set_ArrFlt= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("set_ArrFlt"),(int)2);
	hx_Matrix_set_FltX16= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("set_FltX16"),(int)-1);
	hx_Matrix_setIdentity= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("setIdentity"),(int)1);
	hx_Matrix_setZero= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("setZero"),(int)1);
	hx_Matrix_static_subtract= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("static_subtract"),(int)3);
	hx_Matrix_subtract= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("subtract"),(int)2);
	hx_Matrix_transformPoint_V3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("transformPoint_V3"),(int)2);
	hx_Matrix_transformPoint_V3X2= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("transformPoint_V3X2"),(int)3);
	hx_Matrix_transformVector_V3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("transformVector_V3"),(int)2);
	hx_Matrix_transformVector_V4= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("transformVector_V4"),(int)2);
	hx_Matrix_transformVector_V3X2= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("transformVector_V3X2"),(int)3);
	hx_Matrix_transformVector_V4X2= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("transformVector_V4X2"),(int)3);
	hx_Matrix_transformVector_FltX4_V3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("transformVector_FltX4_V3"),(int)-1);
	hx_Matrix_translate_V3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("translate_V3"),(int)2);
	hx_Matrix_translate_V3_Mat= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("translate_V3_Mat"),(int)3);
	hx_Matrix_translate_FltX3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("translate_FltX3"),(int)4);
	hx_Matrix_translate_FltX3_Mat= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("translate_FltX3_Mat"),(int)5);
	hx_Matrix_transpose= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("transpose"),(int)1);
	hx_Matrix_transpose_Mat= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("transpose_Mat"),(int)2);
	hx_Matrix_static_zero= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("static_zero"),(int)0);
	hx_Matrix_property_m_get= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Matrix >(),HX_CSTRING("property_m_get"),(int)1);
}

} // end namespace org
} // end namespace gameplay3d
