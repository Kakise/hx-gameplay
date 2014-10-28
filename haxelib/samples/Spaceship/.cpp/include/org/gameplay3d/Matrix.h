#ifndef INCLUDED_org_gameplay3d_Matrix
#define INCLUDED_org_gameplay3d_Matrix

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
#include <org/gameplay3d/immutable/IMatrix.h>
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Matrix)
HX_DECLARE_CLASS2(org,gameplay3d,Plane)
HX_DECLARE_CLASS2(org,gameplay3d,Quaternion)
HX_DECLARE_CLASS2(org,gameplay3d,Vector3)
HX_DECLARE_CLASS2(org,gameplay3d,Vector4)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IMatrix)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IPlane)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IQuaternion)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector3)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector4)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,util,IMutableNativeArray)
HX_DECLARE_CLASS3(org,gameplay3d,util,INativeArray)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  Matrix_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef Matrix_obj OBJ_;
		Matrix_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Matrix_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Matrix_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::org::gameplay3d::intern::INativeBinding_obj *()
			{ return new ::org::gameplay3d::intern::INativeBinding_delegate_< Matrix_obj >(this); }
		inline operator ::org::gameplay3d::immutable::IMatrix_obj *()
			{ return new ::org::gameplay3d::immutable::IMatrix_delegate_< Matrix_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("Matrix"); }

		::org::gameplay3d::util::INativeArray mat;
		::org::gameplay3d::util::IMutableNativeArray m;
		virtual Dynamic impersonate( Dynamic nativeObject);

		virtual Void add_Mat( ::org::gameplay3d::immutable::IMatrix m);
		Dynamic add_Mat_dyn();

		virtual Void add_Flt( Float scalar);
		Dynamic add_Flt_dyn();

		virtual Void add_Flt_Mat( Float scalar,::org::gameplay3d::Matrix dst);
		Dynamic add_Flt_Mat_dyn();

		virtual bool decompose( ::org::gameplay3d::Vector3 scale,::org::gameplay3d::Quaternion rotation,::org::gameplay3d::Vector3 translation);
		Dynamic decompose_dyn();

		virtual Float determinant( );
		Dynamic determinant_dyn();

		virtual Void getBackVector( ::org::gameplay3d::Vector3 dst);
		Dynamic getBackVector_dyn();

		virtual Void getDownVector( ::org::gameplay3d::Vector3 dst);
		Dynamic getDownVector_dyn();

		virtual Void getForwardVector( ::org::gameplay3d::Vector3 dst);
		Dynamic getForwardVector_dyn();

		virtual Void getLeftVector( ::org::gameplay3d::Vector3 dst);
		Dynamic getLeftVector_dyn();

		virtual Void getRightVector( ::org::gameplay3d::Vector3 dst);
		Dynamic getRightVector_dyn();

		virtual bool getRotation( ::org::gameplay3d::Quaternion rotation);
		Dynamic getRotation_dyn();

		virtual Void getScale( ::org::gameplay3d::Vector3 scale);
		Dynamic getScale_dyn();

		virtual Void getTranslation( ::org::gameplay3d::Vector3 translation);
		Dynamic getTranslation_dyn();

		virtual Void getUpVector( ::org::gameplay3d::Vector3 dst);
		Dynamic getUpVector_dyn();

		virtual bool invert( );
		Dynamic invert_dyn();

		virtual bool invert_Mat( ::org::gameplay3d::Matrix dst);
		Dynamic invert_Mat_dyn();

		virtual bool isIdentity( );
		Dynamic isIdentity_dyn();

		virtual Void multiply_Mat( ::org::gameplay3d::immutable::IMatrix m);
		Dynamic multiply_Mat_dyn();

		virtual Void multiply_Flt( Float scalar);
		Dynamic multiply_Flt_dyn();

		virtual Void multiply_Flt_Mat( Float scalar,::org::gameplay3d::Matrix dst);
		Dynamic multiply_Flt_Mat_dyn();

		virtual Void negate( );
		Dynamic negate_dyn();

		virtual Void negate_Mat( ::org::gameplay3d::Matrix dst);
		Dynamic negate_Mat_dyn();

		virtual Void rotate_Qtrn( ::org::gameplay3d::immutable::IQuaternion q);
		Dynamic rotate_Qtrn_dyn();

		virtual Void rotate_Qtrn_Mat( ::org::gameplay3d::immutable::IQuaternion q,::org::gameplay3d::Matrix dst);
		Dynamic rotate_Qtrn_Mat_dyn();

		virtual Void rotate_V3_Flt( ::org::gameplay3d::immutable::IVector3 axis,Float angle);
		Dynamic rotate_V3_Flt_dyn();

		virtual Void rotate_V3_Flt_Mat( ::org::gameplay3d::immutable::IVector3 axis,Float angle,::org::gameplay3d::Matrix dst);
		Dynamic rotate_V3_Flt_Mat_dyn();

		virtual Void rotateX_Flt( Float angle);
		Dynamic rotateX_Flt_dyn();

		virtual Void rotateX_Flt_Mat( Float angle,::org::gameplay3d::Matrix dst);
		Dynamic rotateX_Flt_Mat_dyn();

		virtual Void rotateY_Flt( Float angle);
		Dynamic rotateY_Flt_dyn();

		virtual Void rotateY_Flt_Mat( Float angle,::org::gameplay3d::Matrix dst);
		Dynamic rotateY_Flt_Mat_dyn();

		virtual Void rotateZ_Flt( Float angle);
		Dynamic rotateZ_Flt_dyn();

		virtual Void rotateZ_Flt_Mat( Float angle,::org::gameplay3d::Matrix dst);
		Dynamic rotateZ_Flt_Mat_dyn();

		virtual Void scale_V3( ::org::gameplay3d::immutable::IVector3 s);
		Dynamic scale_V3_dyn();

		virtual Void scale_V3_Mat( ::org::gameplay3d::immutable::IVector3 s,::org::gameplay3d::Matrix dst);
		Dynamic scale_V3_Mat_dyn();

		virtual Void scale_Flt( Float value);
		Dynamic scale_Flt_dyn();

		virtual Void scale_Flt_Mat( Float value,::org::gameplay3d::Matrix dst);
		Dynamic scale_Flt_Mat_dyn();

		virtual Void scale_FltX3( Float xScale,Float yScale,Float zScale);
		Dynamic scale_FltX3_dyn();

		virtual Void scale_FltX3_Mat( Float xScale,Float yScale,Float zScale,::org::gameplay3d::Matrix dst);
		Dynamic scale_FltX3_Mat_dyn();

		virtual Void set_Mat( ::org::gameplay3d::immutable::IMatrix m);
		Dynamic set_Mat_dyn();

		virtual Void set_ArrFlt( Array< Float > m);
		Dynamic set_ArrFlt_dyn();

		virtual Void set_FltX16( Float m11,Float m12,Float m13,Float m14,Float m21,Float m22,Float m23,Float m24,Float m31,Float m32,Float m33,Float m34,Float m41,Float m42,Float m43,Float m44);
		Dynamic set_FltX16_dyn();

		virtual Void setIdentity( );
		Dynamic setIdentity_dyn();

		virtual Void setZero( );
		Dynamic setZero_dyn();

		virtual Void subtract_Mat( ::org::gameplay3d::immutable::IMatrix m);
		Dynamic subtract_Mat_dyn();

		virtual Void transformPoint_V3( ::org::gameplay3d::Vector3 point);
		Dynamic transformPoint_V3_dyn();

		virtual Void transformPoint_V3X2( ::org::gameplay3d::immutable::IVector3 point,::org::gameplay3d::Vector3 dst);
		Dynamic transformPoint_V3X2_dyn();

		virtual Void transformVector_V3( ::org::gameplay3d::Vector3 vector);
		Dynamic transformVector_V3_dyn();

		virtual Void transformVector_V4( ::org::gameplay3d::Vector4 vector);
		Dynamic transformVector_V4_dyn();

		virtual Void transformVector_V3X2( ::org::gameplay3d::immutable::IVector3 vector,::org::gameplay3d::Vector3 dst);
		Dynamic transformVector_V3X2_dyn();

		virtual Void transformVector_V4X2( ::org::gameplay3d::immutable::IVector4 vector,::org::gameplay3d::Vector4 dst);
		Dynamic transformVector_V4X2_dyn();

		virtual Void transformVector_FltX4_V3( Float x,Float y,Float z,Float w,::org::gameplay3d::Vector3 dst);
		Dynamic transformVector_FltX4_V3_dyn();

		virtual Void translate_V3( ::org::gameplay3d::immutable::IVector3 t);
		Dynamic translate_V3_dyn();

		virtual Void translate_V3_Mat( ::org::gameplay3d::immutable::IVector3 t,::org::gameplay3d::Matrix dst);
		Dynamic translate_V3_Mat_dyn();

		virtual Void translate_FltX3( Float x,Float y,Float z);
		Dynamic translate_FltX3_dyn();

		virtual Void translate_FltX3_Mat( Float x,Float y,Float z,::org::gameplay3d::Matrix dst);
		Dynamic translate_FltX3_Mat_dyn();

		virtual Void transpose( );
		Dynamic transpose_dyn();

		virtual Void transpose_Mat( ::org::gameplay3d::Matrix dst);
		Dynamic transpose_Mat_dyn();

		virtual ::org::gameplay3d::util::INativeArray get_m_immutable( );
		Dynamic get_m_immutable_dyn();

		virtual ::org::gameplay3d::util::IMutableNativeArray get_m( );
		Dynamic get_m_dyn();

		static ::org::gameplay3d::Matrix _identity;
		static ::org::gameplay3d::Matrix _zero;
		static ::org::gameplay3d::Matrix make( );
		static Dynamic make_dyn();

		static ::org::gameplay3d::Matrix make_Mat( ::org::gameplay3d::immutable::IMatrix copy);
		static Dynamic make_Mat_dyn();

		static ::org::gameplay3d::Matrix make_ArrFlt( Array< Float > m);
		static Dynamic make_ArrFlt_dyn();

		static ::org::gameplay3d::Matrix make_FltX16( Float m11,Float m12,Float m13,Float m14,Float m21,Float m22,Float m23,Float m24,Float m31,Float m32,Float m33,Float m34,Float m41,Float m42,Float m43,Float m44);
		static Dynamic make_FltX16_dyn();

		static Void add_MatX3( ::org::gameplay3d::immutable::IMatrix m1,::org::gameplay3d::immutable::IMatrix m2,::org::gameplay3d::Matrix dst);
		static Dynamic add_MatX3_dyn();

		static Void createBillboard_V3X3_Mat( ::org::gameplay3d::Vector3 objectPosition,::org::gameplay3d::Vector3 cameraPosition,::org::gameplay3d::Vector3 cameraUpVector,::org::gameplay3d::Matrix dst);
		static Dynamic createBillboard_V3X3_Mat_dyn();

		static Void createBillboard_V3X4_Mat( ::org::gameplay3d::Vector3 objectPosition,::org::gameplay3d::Vector3 cameraPosition,::org::gameplay3d::Vector3 cameraUpVector,::org::gameplay3d::Vector3 cameraForwardVector,::org::gameplay3d::Matrix dst);
		static Dynamic createBillboard_V3X4_Mat_dyn();

		static Void createLookAt_V3X3_Mat( ::org::gameplay3d::immutable::IVector3 eyePosition,::org::gameplay3d::immutable::IVector3 targetPosition,::org::gameplay3d::immutable::IVector3 up,::org::gameplay3d::Matrix dst);
		static Dynamic createLookAt_V3X3_Mat_dyn();

		static Void createLookAt_FltX9_Mat( Float eyePositionX,Float eyePositionY,Float eyePositionZ,Float targetCenterX,Float targetCenterY,Float targetCenterZ,Float upX,Float upY,Float upZ,::org::gameplay3d::Matrix dst);
		static Dynamic createLookAt_FltX9_Mat_dyn();

		static Void createOrthographic( Float width,Float height,Float zNearPlane,Float zFarPlane,::org::gameplay3d::Matrix dst);
		static Dynamic createOrthographic_dyn();

		static Void createOrthographicOffCenter( Float left,Float right,Float bottom,Float top,Float zNearPlane,Float zFarPlane,::org::gameplay3d::Matrix dst);
		static Dynamic createOrthographicOffCenter_dyn();

		static Void createPerspective( Float fieldOfView,Float aspectRatio,Float zNearPlane,Float zFarPlane,::org::gameplay3d::Matrix dst);
		static Dynamic createPerspective_dyn();

		static Void createReflection( ::org::gameplay3d::Plane plane,::org::gameplay3d::Matrix dst);
		static Dynamic createReflection_dyn();

		static Void createRotation_Qtrn_Mat( ::org::gameplay3d::immutable::IQuaternion quat,::org::gameplay3d::Matrix dst);
		static Dynamic createRotation_Qtrn_Mat_dyn();

		static Void createRotation_V3_Flt_Mat( ::org::gameplay3d::immutable::IVector3 axis,Float angle,::org::gameplay3d::Matrix dst);
		static Dynamic createRotation_V3_Flt_Mat_dyn();

		static Void createRotationX( Float angle,::org::gameplay3d::Matrix dst);
		static Dynamic createRotationX_dyn();

		static Void createRotationY( Float angle,::org::gameplay3d::Matrix dst);
		static Dynamic createRotationY_dyn();

		static Void createRotationZ( Float angle,::org::gameplay3d::Matrix dst);
		static Dynamic createRotationZ_dyn();

		static Void createScale_V3_Mat( ::org::gameplay3d::immutable::IVector3 scale,::org::gameplay3d::Matrix dst);
		static Dynamic createScale_V3_Mat_dyn();

		static Void createScale_FltX3_Mat( Float xScale,Float yScale,Float zScale,::org::gameplay3d::Matrix dst);
		static Dynamic createScale_FltX3_Mat_dyn();

		static Void createTranslation_V3_Mat( ::org::gameplay3d::immutable::IVector3 translation,::org::gameplay3d::Matrix dst);
		static Dynamic createTranslation_V3_Mat_dyn();

		static Void createTranslation_FltX3_Mat( Float xTranslation,Float yTranslation,Float zTranslation,::org::gameplay3d::Matrix dst);
		static Dynamic createTranslation_FltX3_Mat_dyn();

		static ::org::gameplay3d::immutable::IMatrix identity( );
		static Dynamic identity_dyn();

		static Void multiply_Mat_Flt_Mat( ::org::gameplay3d::immutable::IMatrix m,Float scalar,::org::gameplay3d::Matrix dst);
		static Dynamic multiply_Mat_Flt_Mat_dyn();

		static Void multiply_MatX3( ::org::gameplay3d::immutable::IMatrix m1,::org::gameplay3d::immutable::IMatrix m2,::org::gameplay3d::Matrix dst);
		static Dynamic multiply_MatX3_dyn();

		static Void subtract_MatX3( ::org::gameplay3d::immutable::IMatrix m1,::org::gameplay3d::immutable::IMatrix m2,::org::gameplay3d::Matrix dst);
		static Dynamic subtract_MatX3_dyn();

		static ::org::gameplay3d::immutable::IMatrix zero( );
		static Dynamic zero_dyn();

		static Dynamic constructNativeObject( );
		static Dynamic constructNativeObject_dyn();

		static Dynamic constructNativeObject_Mat( ::org::gameplay3d::immutable::IMatrix copy);
		static Dynamic constructNativeObject_Mat_dyn();

		static Dynamic constructNativeObject_ArrFlt( Array< Float > m);
		static Dynamic constructNativeObject_ArrFlt_dyn();

		static Dynamic constructNativeObject_FltX16( Float m11,Float m12,Float m13,Float m14,Float m21,Float m22,Float m23,Float m24,Float m31,Float m32,Float m33,Float m34,Float m41,Float m42,Float m43,Float m44);
		static Dynamic constructNativeObject_FltX16_dyn();

		static Dynamic hx_Matrix_Construct;
		static Dynamic &hx_Matrix_Construct_dyn() { return hx_Matrix_Construct;}
		static Dynamic hx_Matrix_Construct_Mat;
		static Dynamic &hx_Matrix_Construct_Mat_dyn() { return hx_Matrix_Construct_Mat;}
		static Dynamic hx_Matrix_Construct_ArrFlt;
		static Dynamic &hx_Matrix_Construct_ArrFlt_dyn() { return hx_Matrix_Construct_ArrFlt;}
		static Dynamic hx_Matrix_Construct_FltX16;
		static Dynamic &hx_Matrix_Construct_FltX16_dyn() { return hx_Matrix_Construct_FltX16;}
		static Dynamic hx_Matrix_static_add;
		static Dynamic &hx_Matrix_static_add_dyn() { return hx_Matrix_static_add;}
		static Dynamic hx_Matrix_add_Mat;
		static Dynamic &hx_Matrix_add_Mat_dyn() { return hx_Matrix_add_Mat;}
		static Dynamic hx_Matrix_add_Flt;
		static Dynamic &hx_Matrix_add_Flt_dyn() { return hx_Matrix_add_Flt;}
		static Dynamic hx_Matrix_add_Flt_Mat;
		static Dynamic &hx_Matrix_add_Flt_Mat_dyn() { return hx_Matrix_add_Flt_Mat;}
		static Dynamic hx_Matrix_static_createBillboard_V3X3_Mat;
		static Dynamic &hx_Matrix_static_createBillboard_V3X3_Mat_dyn() { return hx_Matrix_static_createBillboard_V3X3_Mat;}
		static Dynamic hx_Matrix_static_createBillboard_V3X4_Mat;
		static Dynamic &hx_Matrix_static_createBillboard_V3X4_Mat_dyn() { return hx_Matrix_static_createBillboard_V3X4_Mat;}
		static Dynamic hx_Matrix_static_createLookAt_V3X3_Mat;
		static Dynamic &hx_Matrix_static_createLookAt_V3X3_Mat_dyn() { return hx_Matrix_static_createLookAt_V3X3_Mat;}
		static Dynamic hx_Matrix_static_createLookAt_FltX9_Mat;
		static Dynamic &hx_Matrix_static_createLookAt_FltX9_Mat_dyn() { return hx_Matrix_static_createLookAt_FltX9_Mat;}
		static Dynamic hx_Matrix_static_createOrthographic;
		static Dynamic &hx_Matrix_static_createOrthographic_dyn() { return hx_Matrix_static_createOrthographic;}
		static Dynamic hx_Matrix_static_createOrthographicOffCenter;
		static Dynamic &hx_Matrix_static_createOrthographicOffCenter_dyn() { return hx_Matrix_static_createOrthographicOffCenter;}
		static Dynamic hx_Matrix_static_createPerspective;
		static Dynamic &hx_Matrix_static_createPerspective_dyn() { return hx_Matrix_static_createPerspective;}
		static Dynamic hx_Matrix_static_createReflection;
		static Dynamic &hx_Matrix_static_createReflection_dyn() { return hx_Matrix_static_createReflection;}
		static Dynamic hx_Matrix_static_createRotation_Qtrn_Mat;
		static Dynamic &hx_Matrix_static_createRotation_Qtrn_Mat_dyn() { return hx_Matrix_static_createRotation_Qtrn_Mat;}
		static Dynamic hx_Matrix_static_createRotation_V3_Flt_Mat;
		static Dynamic &hx_Matrix_static_createRotation_V3_Flt_Mat_dyn() { return hx_Matrix_static_createRotation_V3_Flt_Mat;}
		static Dynamic hx_Matrix_static_createRotationX;
		static Dynamic &hx_Matrix_static_createRotationX_dyn() { return hx_Matrix_static_createRotationX;}
		static Dynamic hx_Matrix_static_createRotationY;
		static Dynamic &hx_Matrix_static_createRotationY_dyn() { return hx_Matrix_static_createRotationY;}
		static Dynamic hx_Matrix_static_createRotationZ;
		static Dynamic &hx_Matrix_static_createRotationZ_dyn() { return hx_Matrix_static_createRotationZ;}
		static Dynamic hx_Matrix_static_createScale_V3_Mat;
		static Dynamic &hx_Matrix_static_createScale_V3_Mat_dyn() { return hx_Matrix_static_createScale_V3_Mat;}
		static Dynamic hx_Matrix_static_createScale_FltX3_Mat;
		static Dynamic &hx_Matrix_static_createScale_FltX3_Mat_dyn() { return hx_Matrix_static_createScale_FltX3_Mat;}
		static Dynamic hx_Matrix_static_createTranslation_V3_Mat;
		static Dynamic &hx_Matrix_static_createTranslation_V3_Mat_dyn() { return hx_Matrix_static_createTranslation_V3_Mat;}
		static Dynamic hx_Matrix_static_createTranslation_FltX3_Mat;
		static Dynamic &hx_Matrix_static_createTranslation_FltX3_Mat_dyn() { return hx_Matrix_static_createTranslation_FltX3_Mat;}
		static Dynamic hx_Matrix_decompose;
		static Dynamic &hx_Matrix_decompose_dyn() { return hx_Matrix_decompose;}
		static Dynamic hx_Matrix_determinant;
		static Dynamic &hx_Matrix_determinant_dyn() { return hx_Matrix_determinant;}
		static Dynamic hx_Matrix_getBackVector;
		static Dynamic &hx_Matrix_getBackVector_dyn() { return hx_Matrix_getBackVector;}
		static Dynamic hx_Matrix_getDownVector;
		static Dynamic &hx_Matrix_getDownVector_dyn() { return hx_Matrix_getDownVector;}
		static Dynamic hx_Matrix_getForwardVector;
		static Dynamic &hx_Matrix_getForwardVector_dyn() { return hx_Matrix_getForwardVector;}
		static Dynamic hx_Matrix_getLeftVector;
		static Dynamic &hx_Matrix_getLeftVector_dyn() { return hx_Matrix_getLeftVector;}
		static Dynamic hx_Matrix_getRightVector;
		static Dynamic &hx_Matrix_getRightVector_dyn() { return hx_Matrix_getRightVector;}
		static Dynamic hx_Matrix_getRotation;
		static Dynamic &hx_Matrix_getRotation_dyn() { return hx_Matrix_getRotation;}
		static Dynamic hx_Matrix_getScale;
		static Dynamic &hx_Matrix_getScale_dyn() { return hx_Matrix_getScale;}
		static Dynamic hx_Matrix_getTranslation;
		static Dynamic &hx_Matrix_getTranslation_dyn() { return hx_Matrix_getTranslation;}
		static Dynamic hx_Matrix_getUpVector;
		static Dynamic &hx_Matrix_getUpVector_dyn() { return hx_Matrix_getUpVector;}
		static Dynamic hx_Matrix_static_identity;
		static Dynamic &hx_Matrix_static_identity_dyn() { return hx_Matrix_static_identity;}
		static Dynamic hx_Matrix_invert;
		static Dynamic &hx_Matrix_invert_dyn() { return hx_Matrix_invert;}
		static Dynamic hx_Matrix_invert_Mat;
		static Dynamic &hx_Matrix_invert_Mat_dyn() { return hx_Matrix_invert_Mat;}
		static Dynamic hx_Matrix_isIdentity;
		static Dynamic &hx_Matrix_isIdentity_dyn() { return hx_Matrix_isIdentity;}
		static Dynamic hx_Matrix_static_multiply_Mat_Flt_Mat;
		static Dynamic &hx_Matrix_static_multiply_Mat_Flt_Mat_dyn() { return hx_Matrix_static_multiply_Mat_Flt_Mat;}
		static Dynamic hx_Matrix_static_multiply_MatX3;
		static Dynamic &hx_Matrix_static_multiply_MatX3_dyn() { return hx_Matrix_static_multiply_MatX3;}
		static Dynamic hx_Matrix_multiply_Mat;
		static Dynamic &hx_Matrix_multiply_Mat_dyn() { return hx_Matrix_multiply_Mat;}
		static Dynamic hx_Matrix_multiply_Flt;
		static Dynamic &hx_Matrix_multiply_Flt_dyn() { return hx_Matrix_multiply_Flt;}
		static Dynamic hx_Matrix_multiply_Flt_Mat;
		static Dynamic &hx_Matrix_multiply_Flt_Mat_dyn() { return hx_Matrix_multiply_Flt_Mat;}
		static Dynamic hx_Matrix_negate;
		static Dynamic &hx_Matrix_negate_dyn() { return hx_Matrix_negate;}
		static Dynamic hx_Matrix_negate_Mat;
		static Dynamic &hx_Matrix_negate_Mat_dyn() { return hx_Matrix_negate_Mat;}
		static Dynamic hx_Matrix_rotate_Qtrn;
		static Dynamic &hx_Matrix_rotate_Qtrn_dyn() { return hx_Matrix_rotate_Qtrn;}
		static Dynamic hx_Matrix_rotate_Qtrn_Mat;
		static Dynamic &hx_Matrix_rotate_Qtrn_Mat_dyn() { return hx_Matrix_rotate_Qtrn_Mat;}
		static Dynamic hx_Matrix_rotate_V3_Flt;
		static Dynamic &hx_Matrix_rotate_V3_Flt_dyn() { return hx_Matrix_rotate_V3_Flt;}
		static Dynamic hx_Matrix_rotate_V3_Flt_Mat;
		static Dynamic &hx_Matrix_rotate_V3_Flt_Mat_dyn() { return hx_Matrix_rotate_V3_Flt_Mat;}
		static Dynamic hx_Matrix_rotateX_Flt;
		static Dynamic &hx_Matrix_rotateX_Flt_dyn() { return hx_Matrix_rotateX_Flt;}
		static Dynamic hx_Matrix_rotateX_Flt_Mat;
		static Dynamic &hx_Matrix_rotateX_Flt_Mat_dyn() { return hx_Matrix_rotateX_Flt_Mat;}
		static Dynamic hx_Matrix_rotateY_Flt;
		static Dynamic &hx_Matrix_rotateY_Flt_dyn() { return hx_Matrix_rotateY_Flt;}
		static Dynamic hx_Matrix_rotateY_Flt_Mat;
		static Dynamic &hx_Matrix_rotateY_Flt_Mat_dyn() { return hx_Matrix_rotateY_Flt_Mat;}
		static Dynamic hx_Matrix_rotateZ_Flt;
		static Dynamic &hx_Matrix_rotateZ_Flt_dyn() { return hx_Matrix_rotateZ_Flt;}
		static Dynamic hx_Matrix_rotateZ_Flt_Mat;
		static Dynamic &hx_Matrix_rotateZ_Flt_Mat_dyn() { return hx_Matrix_rotateZ_Flt_Mat;}
		static Dynamic hx_Matrix_scale_V3;
		static Dynamic &hx_Matrix_scale_V3_dyn() { return hx_Matrix_scale_V3;}
		static Dynamic hx_Matrix_scale_V3_Mat;
		static Dynamic &hx_Matrix_scale_V3_Mat_dyn() { return hx_Matrix_scale_V3_Mat;}
		static Dynamic hx_Matrix_scale_Flt;
		static Dynamic &hx_Matrix_scale_Flt_dyn() { return hx_Matrix_scale_Flt;}
		static Dynamic hx_Matrix_scale_Flt_Mat;
		static Dynamic &hx_Matrix_scale_Flt_Mat_dyn() { return hx_Matrix_scale_Flt_Mat;}
		static Dynamic hx_Matrix_scale_FltX3;
		static Dynamic &hx_Matrix_scale_FltX3_dyn() { return hx_Matrix_scale_FltX3;}
		static Dynamic hx_Matrix_scale_FltX3_Mat;
		static Dynamic &hx_Matrix_scale_FltX3_Mat_dyn() { return hx_Matrix_scale_FltX3_Mat;}
		static Dynamic hx_Matrix_set_Mat;
		static Dynamic &hx_Matrix_set_Mat_dyn() { return hx_Matrix_set_Mat;}
		static Dynamic hx_Matrix_set_ArrFlt;
		static Dynamic &hx_Matrix_set_ArrFlt_dyn() { return hx_Matrix_set_ArrFlt;}
		static Dynamic hx_Matrix_set_FltX16;
		static Dynamic &hx_Matrix_set_FltX16_dyn() { return hx_Matrix_set_FltX16;}
		static Dynamic hx_Matrix_setIdentity;
		static Dynamic &hx_Matrix_setIdentity_dyn() { return hx_Matrix_setIdentity;}
		static Dynamic hx_Matrix_setZero;
		static Dynamic &hx_Matrix_setZero_dyn() { return hx_Matrix_setZero;}
		static Dynamic hx_Matrix_static_subtract;
		static Dynamic &hx_Matrix_static_subtract_dyn() { return hx_Matrix_static_subtract;}
		static Dynamic hx_Matrix_subtract;
		static Dynamic &hx_Matrix_subtract_dyn() { return hx_Matrix_subtract;}
		static Dynamic hx_Matrix_transformPoint_V3;
		static Dynamic &hx_Matrix_transformPoint_V3_dyn() { return hx_Matrix_transformPoint_V3;}
		static Dynamic hx_Matrix_transformPoint_V3X2;
		static Dynamic &hx_Matrix_transformPoint_V3X2_dyn() { return hx_Matrix_transformPoint_V3X2;}
		static Dynamic hx_Matrix_transformVector_V3;
		static Dynamic &hx_Matrix_transformVector_V3_dyn() { return hx_Matrix_transformVector_V3;}
		static Dynamic hx_Matrix_transformVector_V4;
		static Dynamic &hx_Matrix_transformVector_V4_dyn() { return hx_Matrix_transformVector_V4;}
		static Dynamic hx_Matrix_transformVector_V3X2;
		static Dynamic &hx_Matrix_transformVector_V3X2_dyn() { return hx_Matrix_transformVector_V3X2;}
		static Dynamic hx_Matrix_transformVector_V4X2;
		static Dynamic &hx_Matrix_transformVector_V4X2_dyn() { return hx_Matrix_transformVector_V4X2;}
		static Dynamic hx_Matrix_transformVector_FltX4_V3;
		static Dynamic &hx_Matrix_transformVector_FltX4_V3_dyn() { return hx_Matrix_transformVector_FltX4_V3;}
		static Dynamic hx_Matrix_translate_V3;
		static Dynamic &hx_Matrix_translate_V3_dyn() { return hx_Matrix_translate_V3;}
		static Dynamic hx_Matrix_translate_V3_Mat;
		static Dynamic &hx_Matrix_translate_V3_Mat_dyn() { return hx_Matrix_translate_V3_Mat;}
		static Dynamic hx_Matrix_translate_FltX3;
		static Dynamic &hx_Matrix_translate_FltX3_dyn() { return hx_Matrix_translate_FltX3;}
		static Dynamic hx_Matrix_translate_FltX3_Mat;
		static Dynamic &hx_Matrix_translate_FltX3_Mat_dyn() { return hx_Matrix_translate_FltX3_Mat;}
		static Dynamic hx_Matrix_transpose;
		static Dynamic &hx_Matrix_transpose_dyn() { return hx_Matrix_transpose;}
		static Dynamic hx_Matrix_transpose_Mat;
		static Dynamic &hx_Matrix_transpose_Mat_dyn() { return hx_Matrix_transpose_Mat;}
		static Dynamic hx_Matrix_static_zero;
		static Dynamic &hx_Matrix_static_zero_dyn() { return hx_Matrix_static_zero;}
		static Dynamic hx_Matrix_property_m_get;
		static Dynamic &hx_Matrix_property_m_get_dyn() { return hx_Matrix_property_m_get;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_Matrix */ 
