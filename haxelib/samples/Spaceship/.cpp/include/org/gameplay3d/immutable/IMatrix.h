#ifndef INCLUDED_org_gameplay3d_immutable_IMatrix
#define INCLUDED_org_gameplay3d_immutable_IMatrix

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/intern/INativeBinding.h>
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Matrix)
HX_DECLARE_CLASS2(org,gameplay3d,Quaternion)
HX_DECLARE_CLASS2(org,gameplay3d,Vector3)
HX_DECLARE_CLASS2(org,gameplay3d,Vector4)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IMatrix)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IQuaternion)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector3)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector4)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,util,INativeArray)
namespace org{
namespace gameplay3d{
namespace immutable{


class HXCPP_CLASS_ATTRIBUTES  IMatrix_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IMatrix_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual bool decompose( ::org::gameplay3d::Vector3 scale,::org::gameplay3d::Quaternion rotation,::org::gameplay3d::Vector3 translation)=0;
		Dynamic decompose_dyn();
virtual Float determinant( )=0;
		Dynamic determinant_dyn();
virtual Void getBackVector( ::org::gameplay3d::Vector3 dst)=0;
		Dynamic getBackVector_dyn();
virtual Void getDownVector( ::org::gameplay3d::Vector3 dst)=0;
		Dynamic getDownVector_dyn();
virtual Void getForwardVector( ::org::gameplay3d::Vector3 dst)=0;
		Dynamic getForwardVector_dyn();
virtual Void getLeftVector( ::org::gameplay3d::Vector3 dst)=0;
		Dynamic getLeftVector_dyn();
virtual Void getRightVector( ::org::gameplay3d::Vector3 dst)=0;
		Dynamic getRightVector_dyn();
virtual bool getRotation( ::org::gameplay3d::Quaternion rotation)=0;
		Dynamic getRotation_dyn();
virtual Void getScale( ::org::gameplay3d::Vector3 scale)=0;
		Dynamic getScale_dyn();
virtual Void getTranslation( ::org::gameplay3d::Vector3 translation)=0;
		Dynamic getTranslation_dyn();
virtual Void getUpVector( ::org::gameplay3d::Vector3 dst)=0;
		Dynamic getUpVector_dyn();
virtual bool invert_Mat( ::org::gameplay3d::Matrix dst)=0;
		Dynamic invert_Mat_dyn();
virtual bool isIdentity( )=0;
		Dynamic isIdentity_dyn();
virtual Void multiply_Flt_Mat( Float scalar,::org::gameplay3d::Matrix dst)=0;
		Dynamic multiply_Flt_Mat_dyn();
virtual Void negate_Mat( ::org::gameplay3d::Matrix dst)=0;
		Dynamic negate_Mat_dyn();
virtual Void rotate_Qtrn_Mat( ::org::gameplay3d::immutable::IQuaternion q,::org::gameplay3d::Matrix dst)=0;
		Dynamic rotate_Qtrn_Mat_dyn();
virtual Void rotate_V3_Flt_Mat( ::org::gameplay3d::immutable::IVector3 axis,Float angle,::org::gameplay3d::Matrix dst)=0;
		Dynamic rotate_V3_Flt_Mat_dyn();
virtual Void rotateX_Flt_Mat( Float angle,::org::gameplay3d::Matrix dst)=0;
		Dynamic rotateX_Flt_Mat_dyn();
virtual Void rotateY_Flt_Mat( Float angle,::org::gameplay3d::Matrix dst)=0;
		Dynamic rotateY_Flt_Mat_dyn();
virtual Void rotateZ_Flt_Mat( Float angle,::org::gameplay3d::Matrix dst)=0;
		Dynamic rotateZ_Flt_Mat_dyn();
virtual Void scale_V3_Mat( ::org::gameplay3d::immutable::IVector3 s,::org::gameplay3d::Matrix dst)=0;
		Dynamic scale_V3_Mat_dyn();
virtual Void scale_Flt_Mat( Float value,::org::gameplay3d::Matrix dst)=0;
		Dynamic scale_Flt_Mat_dyn();
virtual Void scale_FltX3_Mat( Float xScale,Float yScale,Float zScale,::org::gameplay3d::Matrix dst)=0;
		Dynamic scale_FltX3_Mat_dyn();
virtual Void transformPoint_V3( ::org::gameplay3d::Vector3 point)=0;
		Dynamic transformPoint_V3_dyn();
virtual Void transformPoint_V3X2( ::org::gameplay3d::immutable::IVector3 point,::org::gameplay3d::Vector3 dst)=0;
		Dynamic transformPoint_V3X2_dyn();
virtual Void transformVector_V3( ::org::gameplay3d::Vector3 vector)=0;
		Dynamic transformVector_V3_dyn();
virtual Void transformVector_V4( ::org::gameplay3d::Vector4 vector)=0;
		Dynamic transformVector_V4_dyn();
virtual Void transformVector_V3X2( ::org::gameplay3d::immutable::IVector3 vector,::org::gameplay3d::Vector3 dst)=0;
		Dynamic transformVector_V3X2_dyn();
virtual Void transformVector_V4X2( ::org::gameplay3d::immutable::IVector4 vector,::org::gameplay3d::Vector4 dst)=0;
		Dynamic transformVector_V4X2_dyn();
virtual Void transformVector_FltX4_V3( Float x,Float y,Float z,Float w,::org::gameplay3d::Vector3 dst)=0;
		Dynamic transformVector_FltX4_V3_dyn();
virtual Void translate_V3_Mat( ::org::gameplay3d::immutable::IVector3 t,::org::gameplay3d::Matrix dst)=0;
		Dynamic translate_V3_Mat_dyn();
virtual Void translate_FltX3_Mat( Float x,Float y,Float z,::org::gameplay3d::Matrix dst)=0;
		Dynamic translate_FltX3_Mat_dyn();
virtual Void transpose_Mat( ::org::gameplay3d::Matrix dst)=0;
		Dynamic transpose_Mat_dyn();
};

#define DELEGATE_org_gameplay3d_immutable_IMatrix \
virtual bool decompose( ::org::gameplay3d::Vector3 scale,::org::gameplay3d::Quaternion rotation,::org::gameplay3d::Vector3 translation) { return mDelegate->decompose(scale,rotation,translation);}  \
virtual Dynamic decompose_dyn() { return mDelegate->decompose_dyn();}  \
virtual Float determinant( ) { return mDelegate->determinant();}  \
virtual Dynamic determinant_dyn() { return mDelegate->determinant_dyn();}  \
virtual Void getBackVector( ::org::gameplay3d::Vector3 dst) { return mDelegate->getBackVector(dst);}  \
virtual Dynamic getBackVector_dyn() { return mDelegate->getBackVector_dyn();}  \
virtual Void getDownVector( ::org::gameplay3d::Vector3 dst) { return mDelegate->getDownVector(dst);}  \
virtual Dynamic getDownVector_dyn() { return mDelegate->getDownVector_dyn();}  \
virtual Void getForwardVector( ::org::gameplay3d::Vector3 dst) { return mDelegate->getForwardVector(dst);}  \
virtual Dynamic getForwardVector_dyn() { return mDelegate->getForwardVector_dyn();}  \
virtual Void getLeftVector( ::org::gameplay3d::Vector3 dst) { return mDelegate->getLeftVector(dst);}  \
virtual Dynamic getLeftVector_dyn() { return mDelegate->getLeftVector_dyn();}  \
virtual Void getRightVector( ::org::gameplay3d::Vector3 dst) { return mDelegate->getRightVector(dst);}  \
virtual Dynamic getRightVector_dyn() { return mDelegate->getRightVector_dyn();}  \
virtual bool getRotation( ::org::gameplay3d::Quaternion rotation) { return mDelegate->getRotation(rotation);}  \
virtual Dynamic getRotation_dyn() { return mDelegate->getRotation_dyn();}  \
virtual Void getScale( ::org::gameplay3d::Vector3 scale) { return mDelegate->getScale(scale);}  \
virtual Dynamic getScale_dyn() { return mDelegate->getScale_dyn();}  \
virtual Void getTranslation( ::org::gameplay3d::Vector3 translation) { return mDelegate->getTranslation(translation);}  \
virtual Dynamic getTranslation_dyn() { return mDelegate->getTranslation_dyn();}  \
virtual Void getUpVector( ::org::gameplay3d::Vector3 dst) { return mDelegate->getUpVector(dst);}  \
virtual Dynamic getUpVector_dyn() { return mDelegate->getUpVector_dyn();}  \
virtual bool invert_Mat( ::org::gameplay3d::Matrix dst) { return mDelegate->invert_Mat(dst);}  \
virtual Dynamic invert_Mat_dyn() { return mDelegate->invert_Mat_dyn();}  \
virtual bool isIdentity( ) { return mDelegate->isIdentity();}  \
virtual Dynamic isIdentity_dyn() { return mDelegate->isIdentity_dyn();}  \
virtual Void multiply_Flt_Mat( Float scalar,::org::gameplay3d::Matrix dst) { return mDelegate->multiply_Flt_Mat(scalar,dst);}  \
virtual Dynamic multiply_Flt_Mat_dyn() { return mDelegate->multiply_Flt_Mat_dyn();}  \
virtual Void negate_Mat( ::org::gameplay3d::Matrix dst) { return mDelegate->negate_Mat(dst);}  \
virtual Dynamic negate_Mat_dyn() { return mDelegate->negate_Mat_dyn();}  \
virtual Void rotate_Qtrn_Mat( ::org::gameplay3d::immutable::IQuaternion q,::org::gameplay3d::Matrix dst) { return mDelegate->rotate_Qtrn_Mat(q,dst);}  \
virtual Dynamic rotate_Qtrn_Mat_dyn() { return mDelegate->rotate_Qtrn_Mat_dyn();}  \
virtual Void rotate_V3_Flt_Mat( ::org::gameplay3d::immutable::IVector3 axis,Float angle,::org::gameplay3d::Matrix dst) { return mDelegate->rotate_V3_Flt_Mat(axis,angle,dst);}  \
virtual Dynamic rotate_V3_Flt_Mat_dyn() { return mDelegate->rotate_V3_Flt_Mat_dyn();}  \
virtual Void rotateX_Flt_Mat( Float angle,::org::gameplay3d::Matrix dst) { return mDelegate->rotateX_Flt_Mat(angle,dst);}  \
virtual Dynamic rotateX_Flt_Mat_dyn() { return mDelegate->rotateX_Flt_Mat_dyn();}  \
virtual Void rotateY_Flt_Mat( Float angle,::org::gameplay3d::Matrix dst) { return mDelegate->rotateY_Flt_Mat(angle,dst);}  \
virtual Dynamic rotateY_Flt_Mat_dyn() { return mDelegate->rotateY_Flt_Mat_dyn();}  \
virtual Void rotateZ_Flt_Mat( Float angle,::org::gameplay3d::Matrix dst) { return mDelegate->rotateZ_Flt_Mat(angle,dst);}  \
virtual Dynamic rotateZ_Flt_Mat_dyn() { return mDelegate->rotateZ_Flt_Mat_dyn();}  \
virtual Void scale_V3_Mat( ::org::gameplay3d::immutable::IVector3 s,::org::gameplay3d::Matrix dst) { return mDelegate->scale_V3_Mat(s,dst);}  \
virtual Dynamic scale_V3_Mat_dyn() { return mDelegate->scale_V3_Mat_dyn();}  \
virtual Void scale_Flt_Mat( Float value,::org::gameplay3d::Matrix dst) { return mDelegate->scale_Flt_Mat(value,dst);}  \
virtual Dynamic scale_Flt_Mat_dyn() { return mDelegate->scale_Flt_Mat_dyn();}  \
virtual Void scale_FltX3_Mat( Float xScale,Float yScale,Float zScale,::org::gameplay3d::Matrix dst) { return mDelegate->scale_FltX3_Mat(xScale,yScale,zScale,dst);}  \
virtual Dynamic scale_FltX3_Mat_dyn() { return mDelegate->scale_FltX3_Mat_dyn();}  \
virtual Void transformPoint_V3( ::org::gameplay3d::Vector3 point) { return mDelegate->transformPoint_V3(point);}  \
virtual Dynamic transformPoint_V3_dyn() { return mDelegate->transformPoint_V3_dyn();}  \
virtual Void transformPoint_V3X2( ::org::gameplay3d::immutable::IVector3 point,::org::gameplay3d::Vector3 dst) { return mDelegate->transformPoint_V3X2(point,dst);}  \
virtual Dynamic transformPoint_V3X2_dyn() { return mDelegate->transformPoint_V3X2_dyn();}  \
virtual Void transformVector_V3( ::org::gameplay3d::Vector3 vector) { return mDelegate->transformVector_V3(vector);}  \
virtual Dynamic transformVector_V3_dyn() { return mDelegate->transformVector_V3_dyn();}  \
virtual Void transformVector_V4( ::org::gameplay3d::Vector4 vector) { return mDelegate->transformVector_V4(vector);}  \
virtual Dynamic transformVector_V4_dyn() { return mDelegate->transformVector_V4_dyn();}  \
virtual Void transformVector_V3X2( ::org::gameplay3d::immutable::IVector3 vector,::org::gameplay3d::Vector3 dst) { return mDelegate->transformVector_V3X2(vector,dst);}  \
virtual Dynamic transformVector_V3X2_dyn() { return mDelegate->transformVector_V3X2_dyn();}  \
virtual Void transformVector_V4X2( ::org::gameplay3d::immutable::IVector4 vector,::org::gameplay3d::Vector4 dst) { return mDelegate->transformVector_V4X2(vector,dst);}  \
virtual Dynamic transformVector_V4X2_dyn() { return mDelegate->transformVector_V4X2_dyn();}  \
virtual Void transformVector_FltX4_V3( Float x,Float y,Float z,Float w,::org::gameplay3d::Vector3 dst) { return mDelegate->transformVector_FltX4_V3(x,y,z,w,dst);}  \
virtual Dynamic transformVector_FltX4_V3_dyn() { return mDelegate->transformVector_FltX4_V3_dyn();}  \
virtual Void translate_V3_Mat( ::org::gameplay3d::immutable::IVector3 t,::org::gameplay3d::Matrix dst) { return mDelegate->translate_V3_Mat(t,dst);}  \
virtual Dynamic translate_V3_Mat_dyn() { return mDelegate->translate_V3_Mat_dyn();}  \
virtual Void translate_FltX3_Mat( Float x,Float y,Float z,::org::gameplay3d::Matrix dst) { return mDelegate->translate_FltX3_Mat(x,y,z,dst);}  \
virtual Dynamic translate_FltX3_Mat_dyn() { return mDelegate->translate_FltX3_Mat_dyn();}  \
virtual Void transpose_Mat( ::org::gameplay3d::Matrix dst) { return mDelegate->transpose_Mat(dst);}  \
virtual Dynamic transpose_Mat_dyn() { return mDelegate->transpose_Mat_dyn();}  \


template<typename IMPL>
class IMatrix_delegate_ : public IMatrix_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IMatrix_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_org_gameplay3d_immutable_IMatrix
};

} // end namespace org
} // end namespace gameplay3d
} // end namespace immutable

#endif /* INCLUDED_org_gameplay3d_immutable_IMatrix */ 
