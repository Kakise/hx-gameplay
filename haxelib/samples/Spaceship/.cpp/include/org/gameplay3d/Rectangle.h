#ifndef INCLUDED_org_gameplay3d_Rectangle
#define INCLUDED_org_gameplay3d_Rectangle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
#include <org/gameplay3d/immutable/IRectangle.h>
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Rectangle)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IRectangle)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  Rectangle_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef Rectangle_obj OBJ_;
		Rectangle_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Rectangle_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Rectangle_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		inline operator ::org::gameplay3d::intern::INativeBinding_obj *()
			{ return new ::org::gameplay3d::intern::INativeBinding_delegate_< Rectangle_obj >(this); }
		inline operator ::org::gameplay3d::immutable::IRectangle_obj *()
			{ return new ::org::gameplay3d::immutable::IRectangle_delegate_< Rectangle_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("Rectangle"); }

		virtual Float bottom( );
		Dynamic bottom_dyn();

		virtual bool contains_Rct( ::org::gameplay3d::immutable::IRectangle r);
		Dynamic contains_Rct_dyn();

		virtual bool contains_FltX2( Float x,Float y);
		Dynamic contains_FltX2_dyn();

		virtual bool contains_FltX4( Float x,Float y,Float width,Float height);
		Dynamic contains_FltX4_dyn();

		virtual Void inflate( Float horizontalAmount,Float verticalAmount);
		Dynamic inflate_dyn();

		virtual bool intersects_Rct( ::org::gameplay3d::immutable::IRectangle r);
		Dynamic intersects_Rct_dyn();

		virtual bool intersects_FltX4( Float x,Float y,Float width,Float height);
		Dynamic intersects_FltX4_dyn();

		virtual bool isEmpty( );
		Dynamic isEmpty_dyn();

		virtual Float left( );
		Dynamic left_dyn();

		virtual Float right( );
		Dynamic right_dyn();

		virtual Void set_Rct( ::org::gameplay3d::immutable::IRectangle r);
		Dynamic set_Rct_dyn();

		virtual Void set_FltX4( Float x,Float y,Float width,Float height);
		Dynamic set_FltX4_dyn();

		virtual Void setPosition( Float x,Float y);
		Dynamic setPosition_dyn();

		virtual Float top( );
		Dynamic top_dyn();

		virtual Float get_x( );
		Dynamic get_x_dyn();

		virtual Float set_x( Float value);
		Dynamic set_x_dyn();

		virtual Float get_y( );
		Dynamic get_y_dyn();

		virtual Float set_y( Float value);
		Dynamic set_y_dyn();

		virtual Float get_width( );
		Dynamic get_width_dyn();

		virtual Float set_width( Float value);
		Dynamic set_width_dyn();

		virtual Float get_height( );
		Dynamic get_height_dyn();

		virtual Float set_height( Float value);
		Dynamic set_height_dyn();

		static ::org::gameplay3d::Rectangle _empty;
		static ::org::gameplay3d::Rectangle make( );
		static Dynamic make_dyn();

		static ::org::gameplay3d::Rectangle make_Rct( ::org::gameplay3d::immutable::IRectangle copy);
		static Dynamic make_Rct_dyn();

		static ::org::gameplay3d::Rectangle make_FltX2( Float width,Float height);
		static Dynamic make_FltX2_dyn();

		static ::org::gameplay3d::Rectangle make_FltX4( Float x,Float y,Float width,Float height);
		static Dynamic make_FltX4_dyn();

		static Void combine( ::org::gameplay3d::immutable::IRectangle r1,::org::gameplay3d::immutable::IRectangle r2,::org::gameplay3d::Rectangle dst);
		static Dynamic combine_dyn();

		static ::org::gameplay3d::immutable::IRectangle empty( );
		static Dynamic empty_dyn();

		static Dynamic constructNativeObject( );
		static Dynamic constructNativeObject_dyn();

		static Dynamic constructNativeObject_Rct( ::org::gameplay3d::immutable::IRectangle copy);
		static Dynamic constructNativeObject_Rct_dyn();

		static Dynamic constructNativeObject_FltX2( Float width,Float height);
		static Dynamic constructNativeObject_FltX2_dyn();

		static Dynamic constructNativeObject_FltX4( Float x,Float y,Float width,Float height);
		static Dynamic constructNativeObject_FltX4_dyn();

		static Dynamic hx_Rectangle_Construct;
		static Dynamic &hx_Rectangle_Construct_dyn() { return hx_Rectangle_Construct;}
		static Dynamic hx_Rectangle_Construct_Rct;
		static Dynamic &hx_Rectangle_Construct_Rct_dyn() { return hx_Rectangle_Construct_Rct;}
		static Dynamic hx_Rectangle_Construct_FltX2;
		static Dynamic &hx_Rectangle_Construct_FltX2_dyn() { return hx_Rectangle_Construct_FltX2;}
		static Dynamic hx_Rectangle_Construct_FltX4;
		static Dynamic &hx_Rectangle_Construct_FltX4_dyn() { return hx_Rectangle_Construct_FltX4;}
		static Dynamic hx_Rectangle_bottom;
		static Dynamic &hx_Rectangle_bottom_dyn() { return hx_Rectangle_bottom;}
		static Dynamic hx_Rectangle_static_combine;
		static Dynamic &hx_Rectangle_static_combine_dyn() { return hx_Rectangle_static_combine;}
		static Dynamic hx_Rectangle_contains_Rct;
		static Dynamic &hx_Rectangle_contains_Rct_dyn() { return hx_Rectangle_contains_Rct;}
		static Dynamic hx_Rectangle_contains_FltX2;
		static Dynamic &hx_Rectangle_contains_FltX2_dyn() { return hx_Rectangle_contains_FltX2;}
		static Dynamic hx_Rectangle_contains_FltX4;
		static Dynamic &hx_Rectangle_contains_FltX4_dyn() { return hx_Rectangle_contains_FltX4;}
		static Dynamic hx_Rectangle_static_empty;
		static Dynamic &hx_Rectangle_static_empty_dyn() { return hx_Rectangle_static_empty;}
		static Dynamic hx_Rectangle_inflate;
		static Dynamic &hx_Rectangle_inflate_dyn() { return hx_Rectangle_inflate;}
		static Dynamic hx_Rectangle_intersects_Rct;
		static Dynamic &hx_Rectangle_intersects_Rct_dyn() { return hx_Rectangle_intersects_Rct;}
		static Dynamic hx_Rectangle_intersects_FltX4;
		static Dynamic &hx_Rectangle_intersects_FltX4_dyn() { return hx_Rectangle_intersects_FltX4;}
		static Dynamic hx_Rectangle_isEmpty;
		static Dynamic &hx_Rectangle_isEmpty_dyn() { return hx_Rectangle_isEmpty;}
		static Dynamic hx_Rectangle_left;
		static Dynamic &hx_Rectangle_left_dyn() { return hx_Rectangle_left;}
		static Dynamic hx_Rectangle_right;
		static Dynamic &hx_Rectangle_right_dyn() { return hx_Rectangle_right;}
		static Dynamic hx_Rectangle_set_Rct;
		static Dynamic &hx_Rectangle_set_Rct_dyn() { return hx_Rectangle_set_Rct;}
		static Dynamic hx_Rectangle_set_FltX4;
		static Dynamic &hx_Rectangle_set_FltX4_dyn() { return hx_Rectangle_set_FltX4;}
		static Dynamic hx_Rectangle_setPosition;
		static Dynamic &hx_Rectangle_setPosition_dyn() { return hx_Rectangle_setPosition;}
		static Dynamic hx_Rectangle_top;
		static Dynamic &hx_Rectangle_top_dyn() { return hx_Rectangle_top;}
		static Dynamic hx_Rectangle_property_x_get;
		static Dynamic &hx_Rectangle_property_x_get_dyn() { return hx_Rectangle_property_x_get;}
		static Dynamic hx_Rectangle_property_x_set;
		static Dynamic &hx_Rectangle_property_x_set_dyn() { return hx_Rectangle_property_x_set;}
		static Dynamic hx_Rectangle_property_y_get;
		static Dynamic &hx_Rectangle_property_y_get_dyn() { return hx_Rectangle_property_y_get;}
		static Dynamic hx_Rectangle_property_y_set;
		static Dynamic &hx_Rectangle_property_y_set_dyn() { return hx_Rectangle_property_y_set;}
		static Dynamic hx_Rectangle_property_width_get;
		static Dynamic &hx_Rectangle_property_width_get_dyn() { return hx_Rectangle_property_width_get;}
		static Dynamic hx_Rectangle_property_width_set;
		static Dynamic &hx_Rectangle_property_width_set_dyn() { return hx_Rectangle_property_width_set;}
		static Dynamic hx_Rectangle_property_height_get;
		static Dynamic &hx_Rectangle_property_height_get_dyn() { return hx_Rectangle_property_height_get;}
		static Dynamic hx_Rectangle_property_height_set;
		static Dynamic &hx_Rectangle_property_height_set_dyn() { return hx_Rectangle_property_height_set;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_Rectangle */ 
