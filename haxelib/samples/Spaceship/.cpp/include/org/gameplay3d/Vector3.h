#ifndef INCLUDED_org_gameplay3d_Vector3
#define INCLUDED_org_gameplay3d_Vector3

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
#include <org/gameplay3d/immutable/IVector3.h>
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Vector3)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector3)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  Vector3_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef Vector3_obj OBJ_;
		Vector3_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Vector3_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Vector3_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		inline operator ::org::gameplay3d::intern::INativeBinding_obj *()
			{ return new ::org::gameplay3d::intern::INativeBinding_delegate_< Vector3_obj >(this); }
		inline operator ::org::gameplay3d::immutable::IVector3_obj *()
			{ return new ::org::gameplay3d::immutable::IVector3_delegate_< Vector3_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("Vector3"); }

		virtual Void add_V3( ::org::gameplay3d::immutable::IVector3 v);
		Dynamic add_V3_dyn();

		virtual Void clamp_V3X2( ::org::gameplay3d::immutable::IVector3 min,::org::gameplay3d::immutable::IVector3 max);
		Dynamic clamp_V3X2_dyn();

		virtual Void cross_V3( ::org::gameplay3d::immutable::IVector3 v);
		Dynamic cross_V3_dyn();

		virtual Float distance( ::org::gameplay3d::immutable::IVector3 v);
		Dynamic distance_dyn();

		virtual Float distanceSquared( ::org::gameplay3d::immutable::IVector3 v);
		Dynamic distanceSquared_dyn();

		virtual Float dot_V3( ::org::gameplay3d::immutable::IVector3 v);
		Dynamic dot_V3_dyn();

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

		virtual ::org::gameplay3d::Vector3 normalize( );
		Dynamic normalize_dyn();

		virtual Void normalize_V3( ::org::gameplay3d::Vector3 dst);
		Dynamic normalize_V3_dyn();

		virtual Void scale( Float scalar);
		Dynamic scale_dyn();

		virtual Void set_V3X2( ::org::gameplay3d::immutable::IVector3 p1,::org::gameplay3d::immutable::IVector3 p2);
		Dynamic set_V3X2_dyn();

		virtual Void set_V3( ::org::gameplay3d::immutable::IVector3 v);
		Dynamic set_V3_dyn();

		virtual Void set_ArrFlt( Array< Float > array);
		Dynamic set_ArrFlt_dyn();

		virtual Void set_FltX3( Float x,Float y,Float z);
		Dynamic set_FltX3_dyn();

		virtual Void smooth( ::org::gameplay3d::immutable::IVector3 target,Float elapsedTime,Float responseTime);
		Dynamic smooth_dyn();

		virtual Void subtract_V3( ::org::gameplay3d::immutable::IVector3 v);
		Dynamic subtract_V3_dyn();

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

		static ::org::gameplay3d::Vector3 _one;
		static ::org::gameplay3d::Vector3 _unitX;
		static ::org::gameplay3d::Vector3 _unitY;
		static ::org::gameplay3d::Vector3 _unitZ;
		static ::org::gameplay3d::Vector3 _zero;
		static ::org::gameplay3d::Vector3 make( );
		static Dynamic make_dyn();

		static ::org::gameplay3d::Vector3 make_V3( ::org::gameplay3d::immutable::IVector3 copy);
		static Dynamic make_V3_dyn();

		static ::org::gameplay3d::Vector3 make_V3X2( ::org::gameplay3d::immutable::IVector3 p1,::org::gameplay3d::immutable::IVector3 p2);
		static Dynamic make_V3X2_dyn();

		static ::org::gameplay3d::Vector3 make_ArrFlt( Array< Float > array);
		static Dynamic make_ArrFlt_dyn();

		static ::org::gameplay3d::Vector3 make_FltX3( Float x,Float y,Float z);
		static Dynamic make_FltX3_dyn();

		static Void add_V3X3( ::org::gameplay3d::immutable::IVector3 v1,::org::gameplay3d::immutable::IVector3 v2,::org::gameplay3d::Vector3 dst);
		static Dynamic add_V3X3_dyn();

		static Float angle( ::org::gameplay3d::immutable::IVector3 v1,::org::gameplay3d::immutable::IVector3 v2);
		static Dynamic angle_dyn();

		static Void clamp_V3X4( ::org::gameplay3d::immutable::IVector3 v,::org::gameplay3d::immutable::IVector3 min,::org::gameplay3d::immutable::IVector3 max,::org::gameplay3d::Vector3 dst);
		static Dynamic clamp_V3X4_dyn();

		static Void cross_V3X3( ::org::gameplay3d::immutable::IVector3 v1,::org::gameplay3d::immutable::IVector3 v2,::org::gameplay3d::Vector3 dst);
		static Dynamic cross_V3X3_dyn();

		static Float dot_V3X2( ::org::gameplay3d::immutable::IVector3 v1,::org::gameplay3d::immutable::IVector3 v2);
		static Dynamic dot_V3X2_dyn();

		static ::org::gameplay3d::Vector3 fromColor( int color);
		static Dynamic fromColor_dyn();

		static ::org::gameplay3d::immutable::IVector3 one( );
		static Dynamic one_dyn();

		static Void subtract_V3X3( ::org::gameplay3d::immutable::IVector3 v1,::org::gameplay3d::immutable::IVector3 v2,::org::gameplay3d::Vector3 dst);
		static Dynamic subtract_V3X3_dyn();

		static ::org::gameplay3d::immutable::IVector3 unitX( );
		static Dynamic unitX_dyn();

		static ::org::gameplay3d::immutable::IVector3 unitY( );
		static Dynamic unitY_dyn();

		static ::org::gameplay3d::immutable::IVector3 unitZ( );
		static Dynamic unitZ_dyn();

		static ::org::gameplay3d::immutable::IVector3 zero( );
		static Dynamic zero_dyn();

		static Dynamic constructNativeObject( );
		static Dynamic constructNativeObject_dyn();

		static Dynamic constructNativeObject_V3( ::org::gameplay3d::immutable::IVector3 copy);
		static Dynamic constructNativeObject_V3_dyn();

		static Dynamic constructNativeObject_V3X2( ::org::gameplay3d::immutable::IVector3 p1,::org::gameplay3d::immutable::IVector3 p2);
		static Dynamic constructNativeObject_V3X2_dyn();

		static Dynamic constructNativeObject_ArrFlt( Array< Float > array);
		static Dynamic constructNativeObject_ArrFlt_dyn();

		static Dynamic constructNativeObject_FltX3( Float x,Float y,Float z);
		static Dynamic constructNativeObject_FltX3_dyn();

		static Dynamic hx_Vector3_Construct;
		static Dynamic &hx_Vector3_Construct_dyn() { return hx_Vector3_Construct;}
		static Dynamic hx_Vector3_Construct_V3;
		static Dynamic &hx_Vector3_Construct_V3_dyn() { return hx_Vector3_Construct_V3;}
		static Dynamic hx_Vector3_Construct_V3X2;
		static Dynamic &hx_Vector3_Construct_V3X2_dyn() { return hx_Vector3_Construct_V3X2;}
		static Dynamic hx_Vector3_Construct_ArrFlt;
		static Dynamic &hx_Vector3_Construct_ArrFlt_dyn() { return hx_Vector3_Construct_ArrFlt;}
		static Dynamic hx_Vector3_Construct_FltX3;
		static Dynamic &hx_Vector3_Construct_FltX3_dyn() { return hx_Vector3_Construct_FltX3;}
		static Dynamic hx_Vector3_static_add;
		static Dynamic &hx_Vector3_static_add_dyn() { return hx_Vector3_static_add;}
		static Dynamic hx_Vector3_add;
		static Dynamic &hx_Vector3_add_dyn() { return hx_Vector3_add;}
		static Dynamic hx_Vector3_static_angle;
		static Dynamic &hx_Vector3_static_angle_dyn() { return hx_Vector3_static_angle;}
		static Dynamic hx_Vector3_static_clamp;
		static Dynamic &hx_Vector3_static_clamp_dyn() { return hx_Vector3_static_clamp;}
		static Dynamic hx_Vector3_clamp;
		static Dynamic &hx_Vector3_clamp_dyn() { return hx_Vector3_clamp;}
		static Dynamic hx_Vector3_static_cross;
		static Dynamic &hx_Vector3_static_cross_dyn() { return hx_Vector3_static_cross;}
		static Dynamic hx_Vector3_cross;
		static Dynamic &hx_Vector3_cross_dyn() { return hx_Vector3_cross;}
		static Dynamic hx_Vector3_distance;
		static Dynamic &hx_Vector3_distance_dyn() { return hx_Vector3_distance;}
		static Dynamic hx_Vector3_distanceSquared;
		static Dynamic &hx_Vector3_distanceSquared_dyn() { return hx_Vector3_distanceSquared;}
		static Dynamic hx_Vector3_dot;
		static Dynamic &hx_Vector3_dot_dyn() { return hx_Vector3_dot;}
		static Dynamic hx_Vector3_static_dot;
		static Dynamic &hx_Vector3_static_dot_dyn() { return hx_Vector3_static_dot;}
		static Dynamic hx_Vector3_static_fromColor;
		static Dynamic &hx_Vector3_static_fromColor_dyn() { return hx_Vector3_static_fromColor;}
		static Dynamic hx_Vector3_isOne;
		static Dynamic &hx_Vector3_isOne_dyn() { return hx_Vector3_isOne;}
		static Dynamic hx_Vector3_isZero;
		static Dynamic &hx_Vector3_isZero_dyn() { return hx_Vector3_isZero;}
		static Dynamic hx_Vector3_length;
		static Dynamic &hx_Vector3_length_dyn() { return hx_Vector3_length;}
		static Dynamic hx_Vector3_lengthSquared;
		static Dynamic &hx_Vector3_lengthSquared_dyn() { return hx_Vector3_lengthSquared;}
		static Dynamic hx_Vector3_negate;
		static Dynamic &hx_Vector3_negate_dyn() { return hx_Vector3_negate;}
		static Dynamic hx_Vector3_normalize;
		static Dynamic &hx_Vector3_normalize_dyn() { return hx_Vector3_normalize;}
		static Dynamic hx_Vector3_normalize_V3;
		static Dynamic &hx_Vector3_normalize_V3_dyn() { return hx_Vector3_normalize_V3;}
		static Dynamic hx_Vector3_static_one;
		static Dynamic &hx_Vector3_static_one_dyn() { return hx_Vector3_static_one;}
		static Dynamic hx_Vector3_scale;
		static Dynamic &hx_Vector3_scale_dyn() { return hx_Vector3_scale;}
		static Dynamic hx_Vector3_set_V3X2;
		static Dynamic &hx_Vector3_set_V3X2_dyn() { return hx_Vector3_set_V3X2;}
		static Dynamic hx_Vector3_set_V3;
		static Dynamic &hx_Vector3_set_V3_dyn() { return hx_Vector3_set_V3;}
		static Dynamic hx_Vector3_set_ArrFlt;
		static Dynamic &hx_Vector3_set_ArrFlt_dyn() { return hx_Vector3_set_ArrFlt;}
		static Dynamic hx_Vector3_set_FltX3;
		static Dynamic &hx_Vector3_set_FltX3_dyn() { return hx_Vector3_set_FltX3;}
		static Dynamic hx_Vector3_smooth;
		static Dynamic &hx_Vector3_smooth_dyn() { return hx_Vector3_smooth;}
		static Dynamic hx_Vector3_static_subtract;
		static Dynamic &hx_Vector3_static_subtract_dyn() { return hx_Vector3_static_subtract;}
		static Dynamic hx_Vector3_subtract;
		static Dynamic &hx_Vector3_subtract_dyn() { return hx_Vector3_subtract;}
		static Dynamic hx_Vector3_static_unitX;
		static Dynamic &hx_Vector3_static_unitX_dyn() { return hx_Vector3_static_unitX;}
		static Dynamic hx_Vector3_static_unitY;
		static Dynamic &hx_Vector3_static_unitY_dyn() { return hx_Vector3_static_unitY;}
		static Dynamic hx_Vector3_static_unitZ;
		static Dynamic &hx_Vector3_static_unitZ_dyn() { return hx_Vector3_static_unitZ;}
		static Dynamic hx_Vector3_static_zero;
		static Dynamic &hx_Vector3_static_zero_dyn() { return hx_Vector3_static_zero;}
		static Dynamic hx_Vector3_property_x_get;
		static Dynamic &hx_Vector3_property_x_get_dyn() { return hx_Vector3_property_x_get;}
		static Dynamic hx_Vector3_property_x_set;
		static Dynamic &hx_Vector3_property_x_set_dyn() { return hx_Vector3_property_x_set;}
		static Dynamic hx_Vector3_property_y_get;
		static Dynamic &hx_Vector3_property_y_get_dyn() { return hx_Vector3_property_y_get;}
		static Dynamic hx_Vector3_property_y_set;
		static Dynamic &hx_Vector3_property_y_set_dyn() { return hx_Vector3_property_y_set;}
		static Dynamic hx_Vector3_property_z_get;
		static Dynamic &hx_Vector3_property_z_get_dyn() { return hx_Vector3_property_z_get;}
		static Dynamic hx_Vector3_property_z_set;
		static Dynamic &hx_Vector3_property_z_set_dyn() { return hx_Vector3_property_z_set;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_Vector3 */ 
