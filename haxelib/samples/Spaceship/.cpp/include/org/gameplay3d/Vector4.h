#ifndef INCLUDED_org_gameplay3d_Vector4
#define INCLUDED_org_gameplay3d_Vector4

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
#include <org/gameplay3d/immutable/IVector4.h>
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Vector4)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector4)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  Vector4_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef Vector4_obj OBJ_;
		Vector4_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Vector4_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Vector4_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		inline operator ::org::gameplay3d::intern::INativeBinding_obj *()
			{ return new ::org::gameplay3d::intern::INativeBinding_delegate_< Vector4_obj >(this); }
		inline operator ::org::gameplay3d::immutable::IVector4_obj *()
			{ return new ::org::gameplay3d::immutable::IVector4_delegate_< Vector4_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("Vector4"); }

		virtual Void add_V4( ::org::gameplay3d::immutable::IVector4 v);
		Dynamic add_V4_dyn();

		virtual Void clamp_V4X2( ::org::gameplay3d::immutable::IVector4 min,::org::gameplay3d::immutable::IVector4 max);
		Dynamic clamp_V4X2_dyn();

		virtual Float distance( ::org::gameplay3d::immutable::IVector4 v);
		Dynamic distance_dyn();

		virtual Float distanceSquared( ::org::gameplay3d::immutable::IVector4 v);
		Dynamic distanceSquared_dyn();

		virtual Float dot_V4( ::org::gameplay3d::immutable::IVector4 v);
		Dynamic dot_V4_dyn();

		virtual bool isOne( );
		Dynamic isOne_dyn();

		virtual bool isZero( );
		Dynamic isZero_dyn();

		virtual Float length( );
		Dynamic length_dyn();

		virtual Float lengthSquared( );
		Dynamic lengthSquared_dyn();

		virtual Void negate( );
		Dynamic negate_dyn();

		virtual ::org::gameplay3d::Vector4 normalize( );
		Dynamic normalize_dyn();

		virtual Void normalize_V4( ::org::gameplay3d::Vector4 dst);
		Dynamic normalize_V4_dyn();

		virtual Void scale( Float scalar);
		Dynamic scale_dyn();

		virtual Void set_V4X2( ::org::gameplay3d::immutable::IVector4 p1,::org::gameplay3d::immutable::IVector4 p2);
		Dynamic set_V4X2_dyn();

		virtual Void set_V4( ::org::gameplay3d::immutable::IVector4 v);
		Dynamic set_V4_dyn();

		virtual Void set_ArrFlt( Array< Float > array);
		Dynamic set_ArrFlt_dyn();

		virtual Void set_FltX4( Float x,Float y,Float z,Float w);
		Dynamic set_FltX4_dyn();

		virtual Void subtract_V4( ::org::gameplay3d::immutable::IVector4 v);
		Dynamic subtract_V4_dyn();

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

		static ::org::gameplay3d::Vector4 _one;
		static ::org::gameplay3d::Vector4 _unitX;
		static ::org::gameplay3d::Vector4 _unitY;
		static ::org::gameplay3d::Vector4 _unitZ;
		static ::org::gameplay3d::Vector4 _unitW;
		static ::org::gameplay3d::Vector4 _zero;
		static ::org::gameplay3d::Vector4 make( );
		static Dynamic make_dyn();

		static ::org::gameplay3d::Vector4 make_V4( ::org::gameplay3d::immutable::IVector4 copy);
		static Dynamic make_V4_dyn();

		static ::org::gameplay3d::Vector4 make_V4X2( ::org::gameplay3d::immutable::IVector4 p1,::org::gameplay3d::immutable::IVector4 p2);
		static Dynamic make_V4X2_dyn();

		static ::org::gameplay3d::Vector4 make_ArrFlt( Array< Float > array);
		static Dynamic make_ArrFlt_dyn();

		static ::org::gameplay3d::Vector4 make_FltX4( Float x,Float y,Float z,Float w);
		static Dynamic make_FltX4_dyn();

		static Void add_V4X3( ::org::gameplay3d::immutable::IVector4 v1,::org::gameplay3d::immutable::IVector4 v2,::org::gameplay3d::Vector4 dst);
		static Dynamic add_V4X3_dyn();

		static Float angle( ::org::gameplay3d::immutable::IVector4 v1,::org::gameplay3d::immutable::IVector4 v2);
		static Dynamic angle_dyn();

		static Void clamp_V4X4( ::org::gameplay3d::immutable::IVector4 v,::org::gameplay3d::immutable::IVector4 min,::org::gameplay3d::immutable::IVector4 max,::org::gameplay3d::Vector4 dst);
		static Dynamic clamp_V4X4_dyn();

		static Float dot_V4X2( ::org::gameplay3d::immutable::IVector4 v1,::org::gameplay3d::immutable::IVector4 v2);
		static Dynamic dot_V4X2_dyn();

		static ::org::gameplay3d::Vector4 fromColor( int color);
		static Dynamic fromColor_dyn();

		static ::org::gameplay3d::immutable::IVector4 one( );
		static Dynamic one_dyn();

		static Void subtract_V4X3( ::org::gameplay3d::immutable::IVector4 v1,::org::gameplay3d::immutable::IVector4 v2,::org::gameplay3d::Vector4 dst);
		static Dynamic subtract_V4X3_dyn();

		static ::org::gameplay3d::immutable::IVector4 unitW( );
		static Dynamic unitW_dyn();

		static ::org::gameplay3d::immutable::IVector4 unitX( );
		static Dynamic unitX_dyn();

		static ::org::gameplay3d::immutable::IVector4 unitY( );
		static Dynamic unitY_dyn();

		static ::org::gameplay3d::immutable::IVector4 unitZ( );
		static Dynamic unitZ_dyn();

		static ::org::gameplay3d::immutable::IVector4 zero( );
		static Dynamic zero_dyn();

		static Dynamic constructNativeObject( );
		static Dynamic constructNativeObject_dyn();

		static Dynamic constructNativeObject_V4( ::org::gameplay3d::immutable::IVector4 copy);
		static Dynamic constructNativeObject_V4_dyn();

		static Dynamic constructNativeObject_V4X2( ::org::gameplay3d::immutable::IVector4 p1,::org::gameplay3d::immutable::IVector4 p2);
		static Dynamic constructNativeObject_V4X2_dyn();

		static Dynamic constructNativeObject_ArrFlt( Array< Float > array);
		static Dynamic constructNativeObject_ArrFlt_dyn();

		static Dynamic constructNativeObject_FltX4( Float x,Float y,Float z,Float w);
		static Dynamic constructNativeObject_FltX4_dyn();

		static Dynamic hx_Vector4_Construct;
		static Dynamic &hx_Vector4_Construct_dyn() { return hx_Vector4_Construct;}
		static Dynamic hx_Vector4_Construct_V4;
		static Dynamic &hx_Vector4_Construct_V4_dyn() { return hx_Vector4_Construct_V4;}
		static Dynamic hx_Vector4_Construct_V4X2;
		static Dynamic &hx_Vector4_Construct_V4X2_dyn() { return hx_Vector4_Construct_V4X2;}
		static Dynamic hx_Vector4_Construct_ArrFlt;
		static Dynamic &hx_Vector4_Construct_ArrFlt_dyn() { return hx_Vector4_Construct_ArrFlt;}
		static Dynamic hx_Vector4_Construct_FltX4;
		static Dynamic &hx_Vector4_Construct_FltX4_dyn() { return hx_Vector4_Construct_FltX4;}
		static Dynamic hx_Vector4_static_add;
		static Dynamic &hx_Vector4_static_add_dyn() { return hx_Vector4_static_add;}
		static Dynamic hx_Vector4_add;
		static Dynamic &hx_Vector4_add_dyn() { return hx_Vector4_add;}
		static Dynamic hx_Vector4_static_angle;
		static Dynamic &hx_Vector4_static_angle_dyn() { return hx_Vector4_static_angle;}
		static Dynamic hx_Vector4_static_clamp;
		static Dynamic &hx_Vector4_static_clamp_dyn() { return hx_Vector4_static_clamp;}
		static Dynamic hx_Vector4_clamp;
		static Dynamic &hx_Vector4_clamp_dyn() { return hx_Vector4_clamp;}
		static Dynamic hx_Vector4_distance;
		static Dynamic &hx_Vector4_distance_dyn() { return hx_Vector4_distance;}
		static Dynamic hx_Vector4_distanceSquared;
		static Dynamic &hx_Vector4_distanceSquared_dyn() { return hx_Vector4_distanceSquared;}
		static Dynamic hx_Vector4_dot;
		static Dynamic &hx_Vector4_dot_dyn() { return hx_Vector4_dot;}
		static Dynamic hx_Vector4_static_dot;
		static Dynamic &hx_Vector4_static_dot_dyn() { return hx_Vector4_static_dot;}
		static Dynamic hx_Vector4_static_fromColor;
		static Dynamic &hx_Vector4_static_fromColor_dyn() { return hx_Vector4_static_fromColor;}
		static Dynamic hx_Vector4_isOne;
		static Dynamic &hx_Vector4_isOne_dyn() { return hx_Vector4_isOne;}
		static Dynamic hx_Vector4_isZero;
		static Dynamic &hx_Vector4_isZero_dyn() { return hx_Vector4_isZero;}
		static Dynamic hx_Vector4_length;
		static Dynamic &hx_Vector4_length_dyn() { return hx_Vector4_length;}
		static Dynamic hx_Vector4_lengthSquared;
		static Dynamic &hx_Vector4_lengthSquared_dyn() { return hx_Vector4_lengthSquared;}
		static Dynamic hx_Vector4_negate;
		static Dynamic &hx_Vector4_negate_dyn() { return hx_Vector4_negate;}
		static Dynamic hx_Vector4_normalize;
		static Dynamic &hx_Vector4_normalize_dyn() { return hx_Vector4_normalize;}
		static Dynamic hx_Vector4_normalize_V4;
		static Dynamic &hx_Vector4_normalize_V4_dyn() { return hx_Vector4_normalize_V4;}
		static Dynamic hx_Vector4_static_one;
		static Dynamic &hx_Vector4_static_one_dyn() { return hx_Vector4_static_one;}
		static Dynamic hx_Vector4_scale;
		static Dynamic &hx_Vector4_scale_dyn() { return hx_Vector4_scale;}
		static Dynamic hx_Vector4_set_V4X2;
		static Dynamic &hx_Vector4_set_V4X2_dyn() { return hx_Vector4_set_V4X2;}
		static Dynamic hx_Vector4_set_V4;
		static Dynamic &hx_Vector4_set_V4_dyn() { return hx_Vector4_set_V4;}
		static Dynamic hx_Vector4_set_ArrFlt;
		static Dynamic &hx_Vector4_set_ArrFlt_dyn() { return hx_Vector4_set_ArrFlt;}
		static Dynamic hx_Vector4_set_FltX4;
		static Dynamic &hx_Vector4_set_FltX4_dyn() { return hx_Vector4_set_FltX4;}
		static Dynamic hx_Vector4_static_subtract;
		static Dynamic &hx_Vector4_static_subtract_dyn() { return hx_Vector4_static_subtract;}
		static Dynamic hx_Vector4_subtract;
		static Dynamic &hx_Vector4_subtract_dyn() { return hx_Vector4_subtract;}
		static Dynamic hx_Vector4_static_unitW;
		static Dynamic &hx_Vector4_static_unitW_dyn() { return hx_Vector4_static_unitW;}
		static Dynamic hx_Vector4_static_unitX;
		static Dynamic &hx_Vector4_static_unitX_dyn() { return hx_Vector4_static_unitX;}
		static Dynamic hx_Vector4_static_unitY;
		static Dynamic &hx_Vector4_static_unitY_dyn() { return hx_Vector4_static_unitY;}
		static Dynamic hx_Vector4_static_unitZ;
		static Dynamic &hx_Vector4_static_unitZ_dyn() { return hx_Vector4_static_unitZ;}
		static Dynamic hx_Vector4_static_zero;
		static Dynamic &hx_Vector4_static_zero_dyn() { return hx_Vector4_static_zero;}
		static Dynamic hx_Vector4_property_w_get;
		static Dynamic &hx_Vector4_property_w_get_dyn() { return hx_Vector4_property_w_get;}
		static Dynamic hx_Vector4_property_w_set;
		static Dynamic &hx_Vector4_property_w_set_dyn() { return hx_Vector4_property_w_set;}
		static Dynamic hx_Vector4_property_x_get;
		static Dynamic &hx_Vector4_property_x_get_dyn() { return hx_Vector4_property_x_get;}
		static Dynamic hx_Vector4_property_x_set;
		static Dynamic &hx_Vector4_property_x_set_dyn() { return hx_Vector4_property_x_set;}
		static Dynamic hx_Vector4_property_y_get;
		static Dynamic &hx_Vector4_property_y_get_dyn() { return hx_Vector4_property_y_get;}
		static Dynamic hx_Vector4_property_y_set;
		static Dynamic &hx_Vector4_property_y_set_dyn() { return hx_Vector4_property_y_set;}
		static Dynamic hx_Vector4_property_z_get;
		static Dynamic &hx_Vector4_property_z_get_dyn() { return hx_Vector4_property_z_get;}
		static Dynamic hx_Vector4_property_z_set;
		static Dynamic &hx_Vector4_property_z_set_dyn() { return hx_Vector4_property_z_set;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_Vector4 */ 
