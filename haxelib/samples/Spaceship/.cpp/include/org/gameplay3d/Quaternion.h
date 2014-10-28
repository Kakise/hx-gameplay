#ifndef INCLUDED_org_gameplay3d_Quaternion
#define INCLUDED_org_gameplay3d_Quaternion

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
#include <org/gameplay3d/immutable/IQuaternion.h>
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Quaternion)
HX_DECLARE_CLASS2(org,gameplay3d,Vector3)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IMatrix)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IQuaternion)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector3)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  Quaternion_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef Quaternion_obj OBJ_;
		Quaternion_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Quaternion_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Quaternion_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		inline operator ::org::gameplay3d::immutable::IQuaternion_obj *()
			{ return new ::org::gameplay3d::immutable::IQuaternion_delegate_< Quaternion_obj >(this); }
		inline operator ::org::gameplay3d::intern::INativeBinding_obj *()
			{ return new ::org::gameplay3d::intern::INativeBinding_delegate_< Quaternion_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("Quaternion"); }

		virtual Void conjugate( );
		Dynamic conjugate_dyn();

		virtual Void conjugate_Qtrn( ::org::gameplay3d::Quaternion dst);
		Dynamic conjugate_Qtrn_dyn();

		virtual bool inverse( );
		Dynamic inverse_dyn();

		virtual bool inverse_Qtrn( ::org::gameplay3d::Quaternion dst);
		Dynamic inverse_Qtrn_dyn();

		virtual bool isIdentity( );
		Dynamic isIdentity_dyn();

		virtual bool isZero( );
		Dynamic isZero_dyn();

		virtual Void multiply_Qtrn( ::org::gameplay3d::immutable::IQuaternion q);
		Dynamic multiply_Qtrn_dyn();

		virtual Void normalize( );
		Dynamic normalize_dyn();

		virtual Void normalize_Qtrn( ::org::gameplay3d::Quaternion dst);
		Dynamic normalize_Qtrn_dyn();

		virtual Void set_Mat( ::org::gameplay3d::immutable::IMatrix m);
		Dynamic set_Mat_dyn();

		virtual Void set_Qtrn( ::org::gameplay3d::immutable::IQuaternion q);
		Dynamic set_Qtrn_dyn();

		virtual Void set_V3_Flt( ::org::gameplay3d::immutable::IVector3 axis,Float angle);
		Dynamic set_V3_Flt_dyn();

		virtual Void set_FltX4( Float x,Float y,Float z,Float w);
		Dynamic set_FltX4_dyn();

		virtual Void set_ArrFlt( Array< Float > array);
		Dynamic set_ArrFlt_dyn();

		virtual Void setIdentity( );
		Dynamic setIdentity_dyn();

		virtual Float toAxisAngle( ::org::gameplay3d::Vector3 e);
		Dynamic toAxisAngle_dyn();

		virtual Float get_x( );
		Dynamic get_x_dyn();

		virtual Float set_x( Float value);
		Dynamic set_x_dyn();

		virtual Float get_y( );
		Dynamic get_y_dyn();

		virtual Float set_y( Float value);
		Dynamic set_y_dyn();

		virtual Float get_z( );
		Dynamic get_z_dyn();

		virtual Float set_z( Float value);
		Dynamic set_z_dyn();

		virtual Float get_w( );
		Dynamic get_w_dyn();

		virtual Float set_w( Float value);
		Dynamic set_w_dyn();

		static ::org::gameplay3d::Quaternion _identity;
		static ::org::gameplay3d::Quaternion _zero;
		static ::org::gameplay3d::Quaternion make( );
		static Dynamic make_dyn();

		static ::org::gameplay3d::Quaternion make_Mat( ::org::gameplay3d::immutable::IMatrix m);
		static Dynamic make_Mat_dyn();

		static ::org::gameplay3d::Quaternion make_Qtrn( ::org::gameplay3d::immutable::IQuaternion copy);
		static Dynamic make_Qtrn_dyn();

		static ::org::gameplay3d::Quaternion make_V3_Flt( ::org::gameplay3d::immutable::IVector3 axis,Float angle);
		static Dynamic make_V3_Flt_dyn();

		static ::org::gameplay3d::Quaternion make_FltX4( Float x,Float y,Float z,Float w);
		static Dynamic make_FltX4_dyn();

		static ::org::gameplay3d::Quaternion make_ArrFlt( Array< Float > array);
		static Dynamic make_ArrFlt_dyn();

		static Void createFromAxisAngle( ::org::gameplay3d::immutable::IVector3 axis,Float angle,::org::gameplay3d::Quaternion dst);
		static Dynamic createFromAxisAngle_dyn();

		static Void createFromRotationMatrix( ::org::gameplay3d::immutable::IMatrix m,::org::gameplay3d::Quaternion dst);
		static Dynamic createFromRotationMatrix_dyn();

		static ::org::gameplay3d::immutable::IQuaternion identity( );
		static Dynamic identity_dyn();

		static Void lerp( ::org::gameplay3d::immutable::IQuaternion q1,::org::gameplay3d::immutable::IQuaternion q2,Float t,::org::gameplay3d::Quaternion dst);
		static Dynamic lerp_dyn();

		static Void multiply_QtrnX3( ::org::gameplay3d::immutable::IQuaternion q1,::org::gameplay3d::immutable::IQuaternion q2,::org::gameplay3d::Quaternion dst);
		static Dynamic multiply_QtrnX3_dyn();

		static Void slerp( ::org::gameplay3d::immutable::IQuaternion q1,::org::gameplay3d::immutable::IQuaternion q2,Float t,::org::gameplay3d::Quaternion dst);
		static Dynamic slerp_dyn();

		static Void squad( ::org::gameplay3d::immutable::IQuaternion q1,::org::gameplay3d::immutable::IQuaternion q2,::org::gameplay3d::immutable::IQuaternion s1,::org::gameplay3d::immutable::IQuaternion s2,Float t,::org::gameplay3d::Quaternion dst);
		static Dynamic squad_dyn();

		static ::org::gameplay3d::immutable::IQuaternion zero( );
		static Dynamic zero_dyn();

		static Dynamic constructNativeObject( );
		static Dynamic constructNativeObject_dyn();

		static Dynamic constructNativeObject_Mat( ::org::gameplay3d::immutable::IMatrix m);
		static Dynamic constructNativeObject_Mat_dyn();

		static Dynamic constructNativeObject_Qtrn( ::org::gameplay3d::immutable::IQuaternion copy);
		static Dynamic constructNativeObject_Qtrn_dyn();

		static Dynamic constructNativeObject_V3_Flt( ::org::gameplay3d::immutable::IVector3 axis,Float angle);
		static Dynamic constructNativeObject_V3_Flt_dyn();

		static Dynamic constructNativeObject_FltX4( Float x,Float y,Float z,Float w);
		static Dynamic constructNativeObject_FltX4_dyn();

		static Dynamic constructNativeObject_ArrFlt( Array< Float > array);
		static Dynamic constructNativeObject_ArrFlt_dyn();

		static Dynamic hx_Quaternion_Construct;
		static Dynamic &hx_Quaternion_Construct_dyn() { return hx_Quaternion_Construct;}
		static Dynamic hx_Quaternion_Construct_Mat;
		static Dynamic &hx_Quaternion_Construct_Mat_dyn() { return hx_Quaternion_Construct_Mat;}
		static Dynamic hx_Quaternion_Construct_Qtrn;
		static Dynamic &hx_Quaternion_Construct_Qtrn_dyn() { return hx_Quaternion_Construct_Qtrn;}
		static Dynamic hx_Quaternion_Construct_V3_Flt;
		static Dynamic &hx_Quaternion_Construct_V3_Flt_dyn() { return hx_Quaternion_Construct_V3_Flt;}
		static Dynamic hx_Quaternion_Construct_FltX4;
		static Dynamic &hx_Quaternion_Construct_FltX4_dyn() { return hx_Quaternion_Construct_FltX4;}
		static Dynamic hx_Quaternion_Construct_ArrFlt;
		static Dynamic &hx_Quaternion_Construct_ArrFlt_dyn() { return hx_Quaternion_Construct_ArrFlt;}
		static Dynamic hx_Quaternion_conjugate;
		static Dynamic &hx_Quaternion_conjugate_dyn() { return hx_Quaternion_conjugate;}
		static Dynamic hx_Quaternion_conjugate_Qtrn;
		static Dynamic &hx_Quaternion_conjugate_Qtrn_dyn() { return hx_Quaternion_conjugate_Qtrn;}
		static Dynamic hx_Quaternion_static_createFromAxisAngle;
		static Dynamic &hx_Quaternion_static_createFromAxisAngle_dyn() { return hx_Quaternion_static_createFromAxisAngle;}
		static Dynamic hx_Quaternion_static_createFromRotationMatrix;
		static Dynamic &hx_Quaternion_static_createFromRotationMatrix_dyn() { return hx_Quaternion_static_createFromRotationMatrix;}
		static Dynamic hx_Quaternion_static_identity;
		static Dynamic &hx_Quaternion_static_identity_dyn() { return hx_Quaternion_static_identity;}
		static Dynamic hx_Quaternion_inverse;
		static Dynamic &hx_Quaternion_inverse_dyn() { return hx_Quaternion_inverse;}
		static Dynamic hx_Quaternion_inverse_Qtrn;
		static Dynamic &hx_Quaternion_inverse_Qtrn_dyn() { return hx_Quaternion_inverse_Qtrn;}
		static Dynamic hx_Quaternion_isIdentity;
		static Dynamic &hx_Quaternion_isIdentity_dyn() { return hx_Quaternion_isIdentity;}
		static Dynamic hx_Quaternion_isZero;
		static Dynamic &hx_Quaternion_isZero_dyn() { return hx_Quaternion_isZero;}
		static Dynamic hx_Quaternion_static_lerp;
		static Dynamic &hx_Quaternion_static_lerp_dyn() { return hx_Quaternion_static_lerp;}
		static Dynamic hx_Quaternion_static_multiply;
		static Dynamic &hx_Quaternion_static_multiply_dyn() { return hx_Quaternion_static_multiply;}
		static Dynamic hx_Quaternion_multiply;
		static Dynamic &hx_Quaternion_multiply_dyn() { return hx_Quaternion_multiply;}
		static Dynamic hx_Quaternion_normalize;
		static Dynamic &hx_Quaternion_normalize_dyn() { return hx_Quaternion_normalize;}
		static Dynamic hx_Quaternion_normalize_Qtrn;
		static Dynamic &hx_Quaternion_normalize_Qtrn_dyn() { return hx_Quaternion_normalize_Qtrn;}
		static Dynamic hx_Quaternion_set_Mat;
		static Dynamic &hx_Quaternion_set_Mat_dyn() { return hx_Quaternion_set_Mat;}
		static Dynamic hx_Quaternion_set_Qtrn;
		static Dynamic &hx_Quaternion_set_Qtrn_dyn() { return hx_Quaternion_set_Qtrn;}
		static Dynamic hx_Quaternion_set_V3_Flt;
		static Dynamic &hx_Quaternion_set_V3_Flt_dyn() { return hx_Quaternion_set_V3_Flt;}
		static Dynamic hx_Quaternion_set_FltX4;
		static Dynamic &hx_Quaternion_set_FltX4_dyn() { return hx_Quaternion_set_FltX4;}
		static Dynamic hx_Quaternion_set_ArrFlt;
		static Dynamic &hx_Quaternion_set_ArrFlt_dyn() { return hx_Quaternion_set_ArrFlt;}
		static Dynamic hx_Quaternion_setIdentity;
		static Dynamic &hx_Quaternion_setIdentity_dyn() { return hx_Quaternion_setIdentity;}
		static Dynamic hx_Quaternion_static_slerp;
		static Dynamic &hx_Quaternion_static_slerp_dyn() { return hx_Quaternion_static_slerp;}
		static Dynamic hx_Quaternion_static_squad;
		static Dynamic &hx_Quaternion_static_squad_dyn() { return hx_Quaternion_static_squad;}
		static Dynamic hx_Quaternion_toAxisAngle;
		static Dynamic &hx_Quaternion_toAxisAngle_dyn() { return hx_Quaternion_toAxisAngle;}
		static Dynamic hx_Quaternion_static_zero;
		static Dynamic &hx_Quaternion_static_zero_dyn() { return hx_Quaternion_static_zero;}
		static Dynamic hx_Quaternion_property_w_get;
		static Dynamic &hx_Quaternion_property_w_get_dyn() { return hx_Quaternion_property_w_get;}
		static Dynamic hx_Quaternion_property_w_set;
		static Dynamic &hx_Quaternion_property_w_set_dyn() { return hx_Quaternion_property_w_set;}
		static Dynamic hx_Quaternion_property_x_get;
		static Dynamic &hx_Quaternion_property_x_get_dyn() { return hx_Quaternion_property_x_get;}
		static Dynamic hx_Quaternion_property_x_set;
		static Dynamic &hx_Quaternion_property_x_set_dyn() { return hx_Quaternion_property_x_set;}
		static Dynamic hx_Quaternion_property_y_get;
		static Dynamic &hx_Quaternion_property_y_get_dyn() { return hx_Quaternion_property_y_get;}
		static Dynamic hx_Quaternion_property_y_set;
		static Dynamic &hx_Quaternion_property_y_set_dyn() { return hx_Quaternion_property_y_set;}
		static Dynamic hx_Quaternion_property_z_get;
		static Dynamic &hx_Quaternion_property_z_get_dyn() { return hx_Quaternion_property_z_get;}
		static Dynamic hx_Quaternion_property_z_set;
		static Dynamic &hx_Quaternion_property_z_set_dyn() { return hx_Quaternion_property_z_set;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_Quaternion */ 
