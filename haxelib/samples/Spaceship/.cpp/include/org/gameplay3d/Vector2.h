#ifndef INCLUDED_org_gameplay3d_Vector2
#define INCLUDED_org_gameplay3d_Vector2

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
#include <org/gameplay3d/immutable/IVector2.h>
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Vector2)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector2)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  Vector2_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef Vector2_obj OBJ_;
		Vector2_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Vector2_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Vector2_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		inline operator ::org::gameplay3d::intern::INativeBinding_obj *()
			{ return new ::org::gameplay3d::intern::INativeBinding_delegate_< Vector2_obj >(this); }
		inline operator ::org::gameplay3d::immutable::IVector2_obj *()
			{ return new ::org::gameplay3d::immutable::IVector2_delegate_< Vector2_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("Vector2"); }

		virtual Void add_V2( ::org::gameplay3d::immutable::IVector2 v);
		Dynamic add_V2_dyn();

		virtual Void clamp_V2X2( ::org::gameplay3d::immutable::IVector2 min,::org::gameplay3d::immutable::IVector2 max);
		Dynamic clamp_V2X2_dyn();

		virtual Float distance( ::org::gameplay3d::immutable::IVector2 v);
		Dynamic distance_dyn();

		virtual Float distanceSquared( ::org::gameplay3d::immutable::IVector2 v);
		Dynamic distanceSquared_dyn();

		virtual Float dot_V2( ::org::gameplay3d::immutable::IVector2 v);
		Dynamic dot_V2_dyn();

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

		virtual ::org::gameplay3d::Vector2 normalize( );
		Dynamic normalize_dyn();

		virtual Void normalize_V2( ::org::gameplay3d::Vector2 dst);
		Dynamic normalize_V2_dyn();

		virtual Void rotate( ::org::gameplay3d::immutable::IVector2 point,Float angle);
		Dynamic rotate_dyn();

		virtual Void scale_V2( ::org::gameplay3d::immutable::IVector2 scale);
		Dynamic scale_V2_dyn();

		virtual Void scale_Flt( Float scalar);
		Dynamic scale_Flt_dyn();

		virtual Void set_V2X2( ::org::gameplay3d::immutable::IVector2 p1,::org::gameplay3d::immutable::IVector2 p2);
		Dynamic set_V2X2_dyn();

		virtual Void set_V2( ::org::gameplay3d::immutable::IVector2 v);
		Dynamic set_V2_dyn();

		virtual Void set_ArrFlt( Array< Float > array);
		Dynamic set_ArrFlt_dyn();

		virtual Void set_FltX2( Float x,Float y);
		Dynamic set_FltX2_dyn();

		virtual Void smooth( ::org::gameplay3d::immutable::IVector2 target,Float elapsedTime,Float responseTime);
		Dynamic smooth_dyn();

		virtual Void subtract_V2( ::org::gameplay3d::immutable::IVector2 v);
		Dynamic subtract_V2_dyn();

		virtual Float get_x( );
		Dynamic get_x_dyn();

		virtual Float set_x( Float value);
		Dynamic set_x_dyn();

		virtual Float get_y( );
		Dynamic get_y_dyn();

		virtual Float set_y( Float value);
		Dynamic set_y_dyn();

		static ::org::gameplay3d::Vector2 _one;
		static ::org::gameplay3d::Vector2 _unitX;
		static ::org::gameplay3d::Vector2 _unitY;
		static ::org::gameplay3d::Vector2 _zero;
		static ::org::gameplay3d::Vector2 make( );
		static Dynamic make_dyn();

		static ::org::gameplay3d::Vector2 make_V2( ::org::gameplay3d::immutable::IVector2 copy);
		static Dynamic make_V2_dyn();

		static ::org::gameplay3d::Vector2 make_V2X2( ::org::gameplay3d::immutable::IVector2 p1,::org::gameplay3d::immutable::IVector2 p2);
		static Dynamic make_V2X2_dyn();

		static ::org::gameplay3d::Vector2 make_ArrFlt( Array< Float > array);
		static Dynamic make_ArrFlt_dyn();

		static ::org::gameplay3d::Vector2 make_FltX2( Float x,Float y);
		static Dynamic make_FltX2_dyn();

		static Void add_V2X3( ::org::gameplay3d::immutable::IVector2 v1,::org::gameplay3d::immutable::IVector2 v2,::org::gameplay3d::Vector2 dst);
		static Dynamic add_V2X3_dyn();

		static Float angle( ::org::gameplay3d::immutable::IVector2 v1,::org::gameplay3d::immutable::IVector2 v2);
		static Dynamic angle_dyn();

		static Void clamp_V2X4( ::org::gameplay3d::immutable::IVector2 v,::org::gameplay3d::immutable::IVector2 min,::org::gameplay3d::immutable::IVector2 max,::org::gameplay3d::Vector2 dst);
		static Dynamic clamp_V2X4_dyn();

		static Float dot_V2X2( ::org::gameplay3d::immutable::IVector2 v1,::org::gameplay3d::immutable::IVector2 v2);
		static Dynamic dot_V2X2_dyn();

		static ::org::gameplay3d::immutable::IVector2 one( );
		static Dynamic one_dyn();

		static Void subtract_V2X3( ::org::gameplay3d::immutable::IVector2 v1,::org::gameplay3d::immutable::IVector2 v2,::org::gameplay3d::Vector2 dst);
		static Dynamic subtract_V2X3_dyn();

		static ::org::gameplay3d::immutable::IVector2 unitX( );
		static Dynamic unitX_dyn();

		static ::org::gameplay3d::immutable::IVector2 unitY( );
		static Dynamic unitY_dyn();

		static ::org::gameplay3d::immutable::IVector2 zero( );
		static Dynamic zero_dyn();

		static Dynamic constructNativeObject( );
		static Dynamic constructNativeObject_dyn();

		static Dynamic constructNativeObject_V2( ::org::gameplay3d::immutable::IVector2 copy);
		static Dynamic constructNativeObject_V2_dyn();

		static Dynamic constructNativeObject_V2X2( ::org::gameplay3d::immutable::IVector2 p1,::org::gameplay3d::immutable::IVector2 p2);
		static Dynamic constructNativeObject_V2X2_dyn();

		static Dynamic constructNativeObject_ArrFlt( Array< Float > array);
		static Dynamic constructNativeObject_ArrFlt_dyn();

		static Dynamic constructNativeObject_FltX2( Float x,Float y);
		static Dynamic constructNativeObject_FltX2_dyn();

		static Dynamic hx_Vector2_Construct;
		static Dynamic &hx_Vector2_Construct_dyn() { return hx_Vector2_Construct;}
		static Dynamic hx_Vector2_Construct_V2;
		static Dynamic &hx_Vector2_Construct_V2_dyn() { return hx_Vector2_Construct_V2;}
		static Dynamic hx_Vector2_Construct_V2X2;
		static Dynamic &hx_Vector2_Construct_V2X2_dyn() { return hx_Vector2_Construct_V2X2;}
		static Dynamic hx_Vector2_Construct_ArrFlt;
		static Dynamic &hx_Vector2_Construct_ArrFlt_dyn() { return hx_Vector2_Construct_ArrFlt;}
		static Dynamic hx_Vector2_Construct_FltX2;
		static Dynamic &hx_Vector2_Construct_FltX2_dyn() { return hx_Vector2_Construct_FltX2;}
		static Dynamic hx_Vector2_static_add;
		static Dynamic &hx_Vector2_static_add_dyn() { return hx_Vector2_static_add;}
		static Dynamic hx_Vector2_add;
		static Dynamic &hx_Vector2_add_dyn() { return hx_Vector2_add;}
		static Dynamic hx_Vector2_static_angle;
		static Dynamic &hx_Vector2_static_angle_dyn() { return hx_Vector2_static_angle;}
		static Dynamic hx_Vector2_static_clamp;
		static Dynamic &hx_Vector2_static_clamp_dyn() { return hx_Vector2_static_clamp;}
		static Dynamic hx_Vector2_clamp;
		static Dynamic &hx_Vector2_clamp_dyn() { return hx_Vector2_clamp;}
		static Dynamic hx_Vector2_distance;
		static Dynamic &hx_Vector2_distance_dyn() { return hx_Vector2_distance;}
		static Dynamic hx_Vector2_distanceSquared;
		static Dynamic &hx_Vector2_distanceSquared_dyn() { return hx_Vector2_distanceSquared;}
		static Dynamic hx_Vector2_dot;
		static Dynamic &hx_Vector2_dot_dyn() { return hx_Vector2_dot;}
		static Dynamic hx_Vector2_static_dot;
		static Dynamic &hx_Vector2_static_dot_dyn() { return hx_Vector2_static_dot;}
		static Dynamic hx_Vector2_isOne;
		static Dynamic &hx_Vector2_isOne_dyn() { return hx_Vector2_isOne;}
		static Dynamic hx_Vector2_isZero;
		static Dynamic &hx_Vector2_isZero_dyn() { return hx_Vector2_isZero;}
		static Dynamic hx_Vector2_length;
		static Dynamic &hx_Vector2_length_dyn() { return hx_Vector2_length;}
		static Dynamic hx_Vector2_lengthSquared;
		static Dynamic &hx_Vector2_lengthSquared_dyn() { return hx_Vector2_lengthSquared;}
		static Dynamic hx_Vector2_negate;
		static Dynamic &hx_Vector2_negate_dyn() { return hx_Vector2_negate;}
		static Dynamic hx_Vector2_normalize;
		static Dynamic &hx_Vector2_normalize_dyn() { return hx_Vector2_normalize;}
		static Dynamic hx_Vector2_normalize_V2;
		static Dynamic &hx_Vector2_normalize_V2_dyn() { return hx_Vector2_normalize_V2;}
		static Dynamic hx_Vector2_static_one;
		static Dynamic &hx_Vector2_static_one_dyn() { return hx_Vector2_static_one;}
		static Dynamic hx_Vector2_rotate;
		static Dynamic &hx_Vector2_rotate_dyn() { return hx_Vector2_rotate;}
		static Dynamic hx_Vector2_scale_V2;
		static Dynamic &hx_Vector2_scale_V2_dyn() { return hx_Vector2_scale_V2;}
		static Dynamic hx_Vector2_scale_Flt;
		static Dynamic &hx_Vector2_scale_Flt_dyn() { return hx_Vector2_scale_Flt;}
		static Dynamic hx_Vector2_set_V2X2;
		static Dynamic &hx_Vector2_set_V2X2_dyn() { return hx_Vector2_set_V2X2;}
		static Dynamic hx_Vector2_set_V2;
		static Dynamic &hx_Vector2_set_V2_dyn() { return hx_Vector2_set_V2;}
		static Dynamic hx_Vector2_set_ArrFlt;
		static Dynamic &hx_Vector2_set_ArrFlt_dyn() { return hx_Vector2_set_ArrFlt;}
		static Dynamic hx_Vector2_set_FltX2;
		static Dynamic &hx_Vector2_set_FltX2_dyn() { return hx_Vector2_set_FltX2;}
		static Dynamic hx_Vector2_smooth;
		static Dynamic &hx_Vector2_smooth_dyn() { return hx_Vector2_smooth;}
		static Dynamic hx_Vector2_static_subtract;
		static Dynamic &hx_Vector2_static_subtract_dyn() { return hx_Vector2_static_subtract;}
		static Dynamic hx_Vector2_subtract;
		static Dynamic &hx_Vector2_subtract_dyn() { return hx_Vector2_subtract;}
		static Dynamic hx_Vector2_static_unitX;
		static Dynamic &hx_Vector2_static_unitX_dyn() { return hx_Vector2_static_unitX;}
		static Dynamic hx_Vector2_static_unitY;
		static Dynamic &hx_Vector2_static_unitY_dyn() { return hx_Vector2_static_unitY;}
		static Dynamic hx_Vector2_static_zero;
		static Dynamic &hx_Vector2_static_zero_dyn() { return hx_Vector2_static_zero;}
		static Dynamic hx_Vector2_property_x_get;
		static Dynamic &hx_Vector2_property_x_get_dyn() { return hx_Vector2_property_x_get;}
		static Dynamic hx_Vector2_property_x_set;
		static Dynamic &hx_Vector2_property_x_set_dyn() { return hx_Vector2_property_x_set;}
		static Dynamic hx_Vector2_property_y_get;
		static Dynamic &hx_Vector2_property_y_get_dyn() { return hx_Vector2_property_y_get;}
		static Dynamic hx_Vector2_property_y_set;
		static Dynamic &hx_Vector2_property_y_set_dyn() { return hx_Vector2_property_y_set;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_Vector2 */ 
