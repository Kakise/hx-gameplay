#ifndef INCLUDED_org_gameplay3d_Transform
#define INCLUDED_org_gameplay3d_Transform

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/intern/impl/AnimationTarget_ScriptTarget.h>
HX_DECLARE_CLASS2(org,gameplay3d,AnimationTarget)
HX_DECLARE_CLASS2(org,gameplay3d,AnimationValue)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Matrix)
HX_DECLARE_CLASS2(org,gameplay3d,Quaternion)
HX_DECLARE_CLASS2(org,gameplay3d,ScriptTarget)
HX_DECLARE_CLASS2(org,gameplay3d,Transform)
HX_DECLARE_CLASS2(org,gameplay3d,Transform_Listener)
HX_DECLARE_CLASS2(org,gameplay3d,Vector3)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IMatrix)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IQuaternion)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector3)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,ListenerWrapper)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,AnimationTarget_ScriptTarget)
HX_DECLARE_CLASS3(org,gameplay3d,wrapper,Transform_ListenerWrapper)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  Transform_obj : public ::org::gameplay3d::intern::impl::AnimationTarget_ScriptTarget_obj{
	public:
		typedef ::org::gameplay3d::intern::impl::AnimationTarget_ScriptTarget_obj super;
		typedef Transform_obj OBJ_;
		Transform_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Transform_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Transform_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Transform"); }

		::org::gameplay3d::Vector3 _scale;
		::org::gameplay3d::Vector3 _translation;
		::org::gameplay3d::Vector3 _backVector;
		::org::gameplay3d::Vector3 _downVector;
		::org::gameplay3d::Vector3 _forwardVector;
		::org::gameplay3d::Vector3 _leftVector;
		::org::gameplay3d::Vector3 _rightVector;
		::org::gameplay3d::Vector3 _upVector;
		::org::gameplay3d::Matrix _matrix;
		::org::gameplay3d::Quaternion _rotation;
		virtual Void addListener( ::org::gameplay3d::wrapper::Transform_ListenerWrapper listener,hx::Null< int >  cookie);
		Dynamic addListener_dyn();

		virtual int getAnimationPropertyComponentCount( int propertyId);

		virtual Void getAnimationPropertyValue( int propertyId,::org::gameplay3d::AnimationValue value);

		virtual ::org::gameplay3d::Vector3 getBackVector( );
		Dynamic getBackVector_dyn();

		virtual Void getBackVector_V3( ::org::gameplay3d::Vector3 dst);
		Dynamic getBackVector_V3_dyn();

		virtual ::org::gameplay3d::Vector3 getDownVector( );
		Dynamic getDownVector_dyn();

		virtual Void getDownVector_V3( ::org::gameplay3d::Vector3 dst);
		Dynamic getDownVector_V3_dyn();

		virtual ::org::gameplay3d::Vector3 getForwardVector( );
		Dynamic getForwardVector_dyn();

		virtual Void getForwardVector_V3( ::org::gameplay3d::Vector3 dst);
		Dynamic getForwardVector_V3_dyn();

		virtual ::org::gameplay3d::Vector3 getLeftVector( );
		Dynamic getLeftVector_dyn();

		virtual Void getLeftVector_V3( ::org::gameplay3d::Vector3 dst);
		Dynamic getLeftVector_V3_dyn();

		virtual ::org::gameplay3d::immutable::IMatrix getMatrix( );
		Dynamic getMatrix_dyn();

		virtual ::org::gameplay3d::Vector3 getRightVector( );
		Dynamic getRightVector_dyn();

		virtual Void getRightVector_V3( ::org::gameplay3d::Vector3 dst);
		Dynamic getRightVector_V3_dyn();

		virtual ::org::gameplay3d::immutable::IQuaternion getRotation( );
		Dynamic getRotation_dyn();

		virtual Float getRotation_V3( ::org::gameplay3d::Vector3 axis);
		Dynamic getRotation_V3_dyn();

		virtual Void getRotation_Mat( ::org::gameplay3d::Matrix rotation);
		Dynamic getRotation_Mat_dyn();

		virtual Void getRotation_Qtrn( ::org::gameplay3d::Quaternion rotation);
		Dynamic getRotation_Qtrn_dyn();

		virtual ::org::gameplay3d::immutable::IVector3 getScale( );
		Dynamic getScale_dyn();

		virtual Void getScale_V3( ::org::gameplay3d::Vector3 scale);
		Dynamic getScale_V3_dyn();

		virtual Float getScaleX( );
		Dynamic getScaleX_dyn();

		virtual Float getScaleY( );
		Dynamic getScaleY_dyn();

		virtual Float getScaleZ( );
		Dynamic getScaleZ_dyn();

		virtual ::org::gameplay3d::immutable::IVector3 getTranslation( );
		Dynamic getTranslation_dyn();

		virtual Void getTranslation_V3( ::org::gameplay3d::Vector3 translation);
		Dynamic getTranslation_V3_dyn();

		virtual Float getTranslationX( );
		Dynamic getTranslationX_dyn();

		virtual Float getTranslationY( );
		Dynamic getTranslationY_dyn();

		virtual Float getTranslationZ( );
		Dynamic getTranslationZ_dyn();

		virtual ::org::gameplay3d::Vector3 getUpVector( );
		Dynamic getUpVector_dyn();

		virtual Void getUpVector_V3( ::org::gameplay3d::Vector3 dst);
		Dynamic getUpVector_V3_dyn();

		virtual Void removeListener( ::org::gameplay3d::wrapper::Transform_ListenerWrapper listener);
		Dynamic removeListener_dyn();

		virtual Void rotate_Mat( ::org::gameplay3d::immutable::IMatrix rotation);
		Dynamic rotate_Mat_dyn();

		virtual Void rotate_Qtrn( ::org::gameplay3d::immutable::IQuaternion rotation);
		Dynamic rotate_Qtrn_dyn();

		virtual Void rotate_V3_Flt( ::org::gameplay3d::immutable::IVector3 axis,Float angle);
		Dynamic rotate_V3_Flt_dyn();

		virtual Void rotate_FltX4( Float qx,Float qy,Float qz,Float qw);
		Dynamic rotate_FltX4_dyn();

		virtual Void rotateX( Float angle);
		Dynamic rotateX_dyn();

		virtual Void rotateY( Float angle);
		Dynamic rotateY_dyn();

		virtual Void rotateZ( Float angle);
		Dynamic rotateZ_dyn();

		virtual Void scale_V3( ::org::gameplay3d::immutable::IVector3 scale);
		Dynamic scale_V3_dyn();

		virtual Void scale_Flt( Float scale);
		Dynamic scale_Flt_dyn();

		virtual Void scale_FltX3( Float sx,Float sy,Float sz);
		Dynamic scale_FltX3_dyn();

		virtual Void scaleX( Float sx);
		Dynamic scaleX_dyn();

		virtual Void scaleY( Float sy);
		Dynamic scaleY_dyn();

		virtual Void scaleZ( Float sz);
		Dynamic scaleZ_dyn();

		virtual Void set_Trans( ::org::gameplay3d::Transform transform);
		Dynamic set_Trans_dyn();

		virtual Void set_V3_Mat_V3( ::org::gameplay3d::immutable::IVector3 scale,::org::gameplay3d::immutable::IMatrix rotation,::org::gameplay3d::immutable::IVector3 translation);
		Dynamic set_V3_Mat_V3_dyn();

		virtual Void set_V3_Qtrn_V3( ::org::gameplay3d::immutable::IVector3 scale,::org::gameplay3d::immutable::IQuaternion rotation,::org::gameplay3d::immutable::IVector3 translation);
		Dynamic set_V3_Qtrn_V3_dyn();

		virtual Void set_V3X2_Flt_V3( ::org::gameplay3d::immutable::IVector3 scale,::org::gameplay3d::immutable::IVector3 axis,Float angle,::org::gameplay3d::immutable::IVector3 translation);
		Dynamic set_V3X2_Flt_V3_dyn();

		virtual Void setAnimationPropertyValue( int propertyId,::org::gameplay3d::AnimationValue value,hx::Null< Float >  blendWeight);

		virtual Void setIdentity( );
		Dynamic setIdentity_dyn();

		virtual Void setRotation_Mat( ::org::gameplay3d::immutable::IMatrix rotation);
		Dynamic setRotation_Mat_dyn();

		virtual Void setRotation_Qtrn( ::org::gameplay3d::immutable::IQuaternion rotation);
		Dynamic setRotation_Qtrn_dyn();

		virtual Void setRotation_V3_Flt( ::org::gameplay3d::immutable::IVector3 axis,Float angle);
		Dynamic setRotation_V3_Flt_dyn();

		virtual Void setRotation_FltX4( Float qx,Float qy,Float qz,Float qw);
		Dynamic setRotation_FltX4_dyn();

		virtual Void setScale_V3( ::org::gameplay3d::immutable::IVector3 scale);
		Dynamic setScale_V3_dyn();

		virtual Void setScale_Flt( Float scale);
		Dynamic setScale_Flt_dyn();

		virtual Void setScale_FltX3( Float sx,Float sy,Float sz);
		Dynamic setScale_FltX3_dyn();

		virtual Void setScaleX( Float sx);
		Dynamic setScaleX_dyn();

		virtual Void setScaleY( Float sy);
		Dynamic setScaleY_dyn();

		virtual Void setScaleZ( Float sz);
		Dynamic setScaleZ_dyn();

		virtual Void setTranslation_V3( ::org::gameplay3d::immutable::IVector3 translation);
		Dynamic setTranslation_V3_dyn();

		virtual Void setTranslation_FltX3( Float tx,Float ty,Float tz);
		Dynamic setTranslation_FltX3_dyn();

		virtual Void setTranslationX( Float tx);
		Dynamic setTranslationX_dyn();

		virtual Void setTranslationY( Float ty);
		Dynamic setTranslationY_dyn();

		virtual Void setTranslationZ( Float tz);
		Dynamic setTranslationZ_dyn();

		virtual Void transformPoint_V3( ::org::gameplay3d::Vector3 point);
		Dynamic transformPoint_V3_dyn();

		virtual Void transformPoint_V3X2( ::org::gameplay3d::immutable::IVector3 point,::org::gameplay3d::Vector3 dst);
		Dynamic transformPoint_V3X2_dyn();

		virtual Void transformVector_V3( ::org::gameplay3d::Vector3 vector);
		Dynamic transformVector_V3_dyn();

		virtual Void transformVector_V3X2( ::org::gameplay3d::immutable::IVector3 transformVector,::org::gameplay3d::Vector3 dst);
		Dynamic transformVector_V3X2_dyn();

		virtual Void transformVector_FltX4_V3( Float x,Float y,Float z,Float w,::org::gameplay3d::Vector3 dst);
		Dynamic transformVector_FltX4_V3_dyn();

		virtual Void translate_V3( ::org::gameplay3d::immutable::IVector3 translation);
		Dynamic translate_V3_dyn();

		virtual Void translate_FltX3( Float tx,Float ty,Float tz);
		Dynamic translate_FltX3_dyn();

		virtual Void translateForward( Float amount);
		Dynamic translateForward_dyn();

		virtual Void translateLeft( Float amount);
		Dynamic translateLeft_dyn();

		virtual Void translateSmooth( ::org::gameplay3d::immutable::IVector3 target,Float elapsedTime,Float responseTime);
		Dynamic translateSmooth_dyn();

		virtual Void translateUp( Float amount);
		Dynamic translateUp_dyn();

		virtual Void translateX( Float tx);
		Dynamic translateX_dyn();

		virtual Void translateY( Float ty);
		Dynamic translateY_dyn();

		virtual Void translateZ( Float tz);
		Dynamic translateZ_dyn();

		static int ANIMATE_SCALE_UNIT;
		static int ANIMATE_SCALE;
		static int ANIMATE_SCALE_X;
		static int ANIMATE_SCALE_Y;
		static int ANIMATE_SCALE_Z;
		static int ANIMATE_ROTATE;
		static int ANIMATE_TRANSLATE;
		static int ANIMATE_TRANSLATE_X;
		static int ANIMATE_TRANSLATE_Y;
		static int ANIMATE_TRANSLATE_Z;
		static int ANIMATE_ROTATE_TRANSLATE;
		static int ANIMATE_SCALE_ROTATE_TRANSLATE;
		static int ANIMATE_SCALE_TRANSLATE;
		static int ANIMATE_SCALE_ROTATE;
		static ::org::gameplay3d::Transform make( );
		static Dynamic make_dyn();

		static ::org::gameplay3d::Transform make_Trans( ::org::gameplay3d::Transform copy);
		static Dynamic make_Trans_dyn();

		static ::org::gameplay3d::Transform make_V3_Mat_V3( ::org::gameplay3d::immutable::IVector3 scale,::org::gameplay3d::immutable::IMatrix rotation,::org::gameplay3d::immutable::IVector3 translation);
		static Dynamic make_V3_Mat_V3_dyn();

		static ::org::gameplay3d::Transform make_V3_Qtrn_V3( ::org::gameplay3d::immutable::IVector3 scale,::org::gameplay3d::immutable::IQuaternion rotation,::org::gameplay3d::immutable::IVector3 translation);
		static Dynamic make_V3_Qtrn_V3_dyn();

		static bool isTransformChangedSuspended( );
		static Dynamic isTransformChangedSuspended_dyn();

		static Void resumeTransformChanged( );
		static Dynamic resumeTransformChanged_dyn();

		static Void suspendTransformChanged( );
		static Dynamic suspendTransformChanged_dyn();

		static Dynamic constructNativeObject( );
		static Dynamic constructNativeObject_dyn();

		static Dynamic constructNativeObject_Trans( ::org::gameplay3d::Transform copy);
		static Dynamic constructNativeObject_Trans_dyn();

		static Dynamic constructNativeObject_V3_Mat_V3( ::org::gameplay3d::immutable::IVector3 scale,::org::gameplay3d::immutable::IMatrix rotation,::org::gameplay3d::immutable::IVector3 translation);
		static Dynamic constructNativeObject_V3_Mat_V3_dyn();

		static Dynamic constructNativeObject_V3_Qtrn_V3( ::org::gameplay3d::immutable::IVector3 scale,::org::gameplay3d::immutable::IQuaternion rotation,::org::gameplay3d::immutable::IVector3 translation);
		static Dynamic constructNativeObject_V3_Qtrn_V3_dyn();

		static Dynamic hx_Transform_Construct;
		static Dynamic &hx_Transform_Construct_dyn() { return hx_Transform_Construct;}
		static Dynamic hx_Transform_Construct_Trans;
		static Dynamic &hx_Transform_Construct_Trans_dyn() { return hx_Transform_Construct_Trans;}
		static Dynamic hx_Transform_Construct_V3_Mat_V3;
		static Dynamic &hx_Transform_Construct_V3_Mat_V3_dyn() { return hx_Transform_Construct_V3_Mat_V3;}
		static Dynamic hx_Transform_Construct_V3_Qtrn_V3;
		static Dynamic &hx_Transform_Construct_V3_Qtrn_V3_dyn() { return hx_Transform_Construct_V3_Qtrn_V3;}
		static Dynamic hx_Transform_addListener;
		static Dynamic &hx_Transform_addListener_dyn() { return hx_Transform_addListener;}
		static Dynamic hx_Transform_getAnimationPropertyComponentCount;
		static Dynamic &hx_Transform_getAnimationPropertyComponentCount_dyn() { return hx_Transform_getAnimationPropertyComponentCount;}
		static Dynamic hx_Transform_getAnimationPropertyValue;
		static Dynamic &hx_Transform_getAnimationPropertyValue_dyn() { return hx_Transform_getAnimationPropertyValue;}
		static Dynamic hx_Transform_getBackVector;
		static Dynamic &hx_Transform_getBackVector_dyn() { return hx_Transform_getBackVector;}
		static Dynamic hx_Transform_getBackVector_V3;
		static Dynamic &hx_Transform_getBackVector_V3_dyn() { return hx_Transform_getBackVector_V3;}
		static Dynamic hx_Transform_getDownVector;
		static Dynamic &hx_Transform_getDownVector_dyn() { return hx_Transform_getDownVector;}
		static Dynamic hx_Transform_getDownVector_V3;
		static Dynamic &hx_Transform_getDownVector_V3_dyn() { return hx_Transform_getDownVector_V3;}
		static Dynamic hx_Transform_getForwardVector;
		static Dynamic &hx_Transform_getForwardVector_dyn() { return hx_Transform_getForwardVector;}
		static Dynamic hx_Transform_getForwardVector_V3;
		static Dynamic &hx_Transform_getForwardVector_V3_dyn() { return hx_Transform_getForwardVector_V3;}
		static Dynamic hx_Transform_getLeftVector;
		static Dynamic &hx_Transform_getLeftVector_dyn() { return hx_Transform_getLeftVector;}
		static Dynamic hx_Transform_getLeftVector_V3;
		static Dynamic &hx_Transform_getLeftVector_V3_dyn() { return hx_Transform_getLeftVector_V3;}
		static Dynamic hx_Transform_getMatrix;
		static Dynamic &hx_Transform_getMatrix_dyn() { return hx_Transform_getMatrix;}
		static Dynamic hx_Transform_getRightVector;
		static Dynamic &hx_Transform_getRightVector_dyn() { return hx_Transform_getRightVector;}
		static Dynamic hx_Transform_getRightVector_V3;
		static Dynamic &hx_Transform_getRightVector_V3_dyn() { return hx_Transform_getRightVector_V3;}
		static Dynamic hx_Transform_getRotation;
		static Dynamic &hx_Transform_getRotation_dyn() { return hx_Transform_getRotation;}
		static Dynamic hx_Transform_getRotation_V3;
		static Dynamic &hx_Transform_getRotation_V3_dyn() { return hx_Transform_getRotation_V3;}
		static Dynamic hx_Transform_getRotation_Mat;
		static Dynamic &hx_Transform_getRotation_Mat_dyn() { return hx_Transform_getRotation_Mat;}
		static Dynamic hx_Transform_getRotation_Qtrn;
		static Dynamic &hx_Transform_getRotation_Qtrn_dyn() { return hx_Transform_getRotation_Qtrn;}
		static Dynamic hx_Transform_getScale;
		static Dynamic &hx_Transform_getScale_dyn() { return hx_Transform_getScale;}
		static Dynamic hx_Transform_getScale_V3;
		static Dynamic &hx_Transform_getScale_V3_dyn() { return hx_Transform_getScale_V3;}
		static Dynamic hx_Transform_getScaleX;
		static Dynamic &hx_Transform_getScaleX_dyn() { return hx_Transform_getScaleX;}
		static Dynamic hx_Transform_getScaleY;
		static Dynamic &hx_Transform_getScaleY_dyn() { return hx_Transform_getScaleY;}
		static Dynamic hx_Transform_getScaleZ;
		static Dynamic &hx_Transform_getScaleZ_dyn() { return hx_Transform_getScaleZ;}
		static Dynamic hx_Transform_getTranslation;
		static Dynamic &hx_Transform_getTranslation_dyn() { return hx_Transform_getTranslation;}
		static Dynamic hx_Transform_getTranslation_V3;
		static Dynamic &hx_Transform_getTranslation_V3_dyn() { return hx_Transform_getTranslation_V3;}
		static Dynamic hx_Transform_getTranslationX;
		static Dynamic &hx_Transform_getTranslationX_dyn() { return hx_Transform_getTranslationX;}
		static Dynamic hx_Transform_getTranslationY;
		static Dynamic &hx_Transform_getTranslationY_dyn() { return hx_Transform_getTranslationY;}
		static Dynamic hx_Transform_getTranslationZ;
		static Dynamic &hx_Transform_getTranslationZ_dyn() { return hx_Transform_getTranslationZ;}
		static Dynamic hx_Transform_getUpVector;
		static Dynamic &hx_Transform_getUpVector_dyn() { return hx_Transform_getUpVector;}
		static Dynamic hx_Transform_getUpVector_V3;
		static Dynamic &hx_Transform_getUpVector_V3_dyn() { return hx_Transform_getUpVector_V3;}
		static Dynamic hx_Transform_static_isTransformChangedSuspended;
		static Dynamic &hx_Transform_static_isTransformChangedSuspended_dyn() { return hx_Transform_static_isTransformChangedSuspended;}
		static Dynamic hx_Transform_removeListener;
		static Dynamic &hx_Transform_removeListener_dyn() { return hx_Transform_removeListener;}
		static Dynamic hx_Transform_static_resumeTransformChanged;
		static Dynamic &hx_Transform_static_resumeTransformChanged_dyn() { return hx_Transform_static_resumeTransformChanged;}
		static Dynamic hx_Transform_rotate_Mat;
		static Dynamic &hx_Transform_rotate_Mat_dyn() { return hx_Transform_rotate_Mat;}
		static Dynamic hx_Transform_rotate_Qtrn;
		static Dynamic &hx_Transform_rotate_Qtrn_dyn() { return hx_Transform_rotate_Qtrn;}
		static Dynamic hx_Transform_rotate_V3_Flt;
		static Dynamic &hx_Transform_rotate_V3_Flt_dyn() { return hx_Transform_rotate_V3_Flt;}
		static Dynamic hx_Transform_rotate_FltX4;
		static Dynamic &hx_Transform_rotate_FltX4_dyn() { return hx_Transform_rotate_FltX4;}
		static Dynamic hx_Transform_rotateX;
		static Dynamic &hx_Transform_rotateX_dyn() { return hx_Transform_rotateX;}
		static Dynamic hx_Transform_rotateY;
		static Dynamic &hx_Transform_rotateY_dyn() { return hx_Transform_rotateY;}
		static Dynamic hx_Transform_rotateZ;
		static Dynamic &hx_Transform_rotateZ_dyn() { return hx_Transform_rotateZ;}
		static Dynamic hx_Transform_scale_V3;
		static Dynamic &hx_Transform_scale_V3_dyn() { return hx_Transform_scale_V3;}
		static Dynamic hx_Transform_scale_Flt;
		static Dynamic &hx_Transform_scale_Flt_dyn() { return hx_Transform_scale_Flt;}
		static Dynamic hx_Transform_scale_FltX3;
		static Dynamic &hx_Transform_scale_FltX3_dyn() { return hx_Transform_scale_FltX3;}
		static Dynamic hx_Transform_scaleX;
		static Dynamic &hx_Transform_scaleX_dyn() { return hx_Transform_scaleX;}
		static Dynamic hx_Transform_scaleY;
		static Dynamic &hx_Transform_scaleY_dyn() { return hx_Transform_scaleY;}
		static Dynamic hx_Transform_scaleZ;
		static Dynamic &hx_Transform_scaleZ_dyn() { return hx_Transform_scaleZ;}
		static Dynamic hx_Transform_set_Trans;
		static Dynamic &hx_Transform_set_Trans_dyn() { return hx_Transform_set_Trans;}
		static Dynamic hx_Transform_set_V3_Mat_V3;
		static Dynamic &hx_Transform_set_V3_Mat_V3_dyn() { return hx_Transform_set_V3_Mat_V3;}
		static Dynamic hx_Transform_set_V3_Qtrn_V3;
		static Dynamic &hx_Transform_set_V3_Qtrn_V3_dyn() { return hx_Transform_set_V3_Qtrn_V3;}
		static Dynamic hx_Transform_set_V3X2_Flt_V3;
		static Dynamic &hx_Transform_set_V3X2_Flt_V3_dyn() { return hx_Transform_set_V3X2_Flt_V3;}
		static Dynamic hx_Transform_setAnimationPropertyValue;
		static Dynamic &hx_Transform_setAnimationPropertyValue_dyn() { return hx_Transform_setAnimationPropertyValue;}
		static Dynamic hx_Transform_setIdentity;
		static Dynamic &hx_Transform_setIdentity_dyn() { return hx_Transform_setIdentity;}
		static Dynamic hx_Transform_setRotation_Mat;
		static Dynamic &hx_Transform_setRotation_Mat_dyn() { return hx_Transform_setRotation_Mat;}
		static Dynamic hx_Transform_setRotation_Qtrn;
		static Dynamic &hx_Transform_setRotation_Qtrn_dyn() { return hx_Transform_setRotation_Qtrn;}
		static Dynamic hx_Transform_setRotation_V3_Flt;
		static Dynamic &hx_Transform_setRotation_V3_Flt_dyn() { return hx_Transform_setRotation_V3_Flt;}
		static Dynamic hx_Transform_setRotation_FltX4;
		static Dynamic &hx_Transform_setRotation_FltX4_dyn() { return hx_Transform_setRotation_FltX4;}
		static Dynamic hx_Transform_setScale_V3;
		static Dynamic &hx_Transform_setScale_V3_dyn() { return hx_Transform_setScale_V3;}
		static Dynamic hx_Transform_setScale_Flt;
		static Dynamic &hx_Transform_setScale_Flt_dyn() { return hx_Transform_setScale_Flt;}
		static Dynamic hx_Transform_setScale_FltX3;
		static Dynamic &hx_Transform_setScale_FltX3_dyn() { return hx_Transform_setScale_FltX3;}
		static Dynamic hx_Transform_setScaleX;
		static Dynamic &hx_Transform_setScaleX_dyn() { return hx_Transform_setScaleX;}
		static Dynamic hx_Transform_setScaleY;
		static Dynamic &hx_Transform_setScaleY_dyn() { return hx_Transform_setScaleY;}
		static Dynamic hx_Transform_setScaleZ;
		static Dynamic &hx_Transform_setScaleZ_dyn() { return hx_Transform_setScaleZ;}
		static Dynamic hx_Transform_setTranslation_V3;
		static Dynamic &hx_Transform_setTranslation_V3_dyn() { return hx_Transform_setTranslation_V3;}
		static Dynamic hx_Transform_setTranslation_FltX3;
		static Dynamic &hx_Transform_setTranslation_FltX3_dyn() { return hx_Transform_setTranslation_FltX3;}
		static Dynamic hx_Transform_setTranslationX;
		static Dynamic &hx_Transform_setTranslationX_dyn() { return hx_Transform_setTranslationX;}
		static Dynamic hx_Transform_setTranslationY;
		static Dynamic &hx_Transform_setTranslationY_dyn() { return hx_Transform_setTranslationY;}
		static Dynamic hx_Transform_setTranslationZ;
		static Dynamic &hx_Transform_setTranslationZ_dyn() { return hx_Transform_setTranslationZ;}
		static Dynamic hx_Transform_static_suspendTransformChanged;
		static Dynamic &hx_Transform_static_suspendTransformChanged_dyn() { return hx_Transform_static_suspendTransformChanged;}
		static Dynamic hx_Transform_transformPoint_V3;
		static Dynamic &hx_Transform_transformPoint_V3_dyn() { return hx_Transform_transformPoint_V3;}
		static Dynamic hx_Transform_transformPoint_V3X2;
		static Dynamic &hx_Transform_transformPoint_V3X2_dyn() { return hx_Transform_transformPoint_V3X2;}
		static Dynamic hx_Transform_transformVector_V3;
		static Dynamic &hx_Transform_transformVector_V3_dyn() { return hx_Transform_transformVector_V3;}
		static Dynamic hx_Transform_transformVector_V3X2;
		static Dynamic &hx_Transform_transformVector_V3X2_dyn() { return hx_Transform_transformVector_V3X2;}
		static Dynamic hx_Transform_transformVector_FltX4_V3;
		static Dynamic &hx_Transform_transformVector_FltX4_V3_dyn() { return hx_Transform_transformVector_FltX4_V3;}
		static Dynamic hx_Transform_translate_V3;
		static Dynamic &hx_Transform_translate_V3_dyn() { return hx_Transform_translate_V3;}
		static Dynamic hx_Transform_translate_FltX3;
		static Dynamic &hx_Transform_translate_FltX3_dyn() { return hx_Transform_translate_FltX3;}
		static Dynamic hx_Transform_translateForward;
		static Dynamic &hx_Transform_translateForward_dyn() { return hx_Transform_translateForward;}
		static Dynamic hx_Transform_translateLeft;
		static Dynamic &hx_Transform_translateLeft_dyn() { return hx_Transform_translateLeft;}
		static Dynamic hx_Transform_translateSmooth;
		static Dynamic &hx_Transform_translateSmooth_dyn() { return hx_Transform_translateSmooth;}
		static Dynamic hx_Transform_translateUp;
		static Dynamic &hx_Transform_translateUp_dyn() { return hx_Transform_translateUp;}
		static Dynamic hx_Transform_translateX;
		static Dynamic &hx_Transform_translateX_dyn() { return hx_Transform_translateX;}
		static Dynamic hx_Transform_translateY;
		static Dynamic &hx_Transform_translateY_dyn() { return hx_Transform_translateY;}
		static Dynamic hx_Transform_translateZ;
		static Dynamic &hx_Transform_translateZ_dyn() { return hx_Transform_translateZ;}
		static Dynamic hx_Transform_Listener_Construct;
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_Transform */ 
