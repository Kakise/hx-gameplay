#ifndef INCLUDED_org_gameplay3d_Theme_SideRegions
#define INCLUDED_org_gameplay3d_Theme_SideRegions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
#include <org/gameplay3d/immutable/ITheme_SideRegions.h>
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Theme_SideRegions)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,ITheme_SideRegions)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  Theme_SideRegions_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef Theme_SideRegions_obj OBJ_;
		Theme_SideRegions_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Theme_SideRegions_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Theme_SideRegions_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		inline operator ::org::gameplay3d::immutable::ITheme_SideRegions_obj *()
			{ return new ::org::gameplay3d::immutable::ITheme_SideRegions_delegate_< Theme_SideRegions_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("Theme_SideRegions"); }

		virtual Float get_top( );
		Dynamic get_top_dyn();

		virtual Float set_top( Float value);
		Dynamic set_top_dyn();

		virtual Float get_left( );
		Dynamic get_left_dyn();

		virtual Float set_left( Float value);
		Dynamic set_left_dyn();

		virtual Float get_bottom( );
		Dynamic get_bottom_dyn();

		virtual Float set_bottom( Float value);
		Dynamic set_bottom_dyn();

		virtual Float get_right( );
		Dynamic get_right_dyn();

		virtual Float set_right( Float value);
		Dynamic set_right_dyn();

		static ::org::gameplay3d::Theme_SideRegions _empty;
		static ::org::gameplay3d::Theme_SideRegions make( );
		static Dynamic make_dyn();

		static ::org::gameplay3d::immutable::ITheme_SideRegions empty( );
		static Dynamic empty_dyn();

		static Dynamic constructNativeObject( );
		static Dynamic constructNativeObject_dyn();

		static Dynamic hx_Theme_SideRegions_Construct;
		static Dynamic &hx_Theme_SideRegions_Construct_dyn() { return hx_Theme_SideRegions_Construct;}
		static Dynamic hx_Theme_SideRegions_static_empty;
		static Dynamic &hx_Theme_SideRegions_static_empty_dyn() { return hx_Theme_SideRegions_static_empty;}
		static Dynamic hx_Theme_SideRegions_property_top_get;
		static Dynamic &hx_Theme_SideRegions_property_top_get_dyn() { return hx_Theme_SideRegions_property_top_get;}
		static Dynamic hx_Theme_SideRegions_property_top_set;
		static Dynamic &hx_Theme_SideRegions_property_top_set_dyn() { return hx_Theme_SideRegions_property_top_set;}
		static Dynamic hx_Theme_SideRegions_property_left_get;
		static Dynamic &hx_Theme_SideRegions_property_left_get_dyn() { return hx_Theme_SideRegions_property_left_get;}
		static Dynamic hx_Theme_SideRegions_property_left_set;
		static Dynamic &hx_Theme_SideRegions_property_left_set_dyn() { return hx_Theme_SideRegions_property_left_set;}
		static Dynamic hx_Theme_SideRegions_property_bottom_get;
		static Dynamic &hx_Theme_SideRegions_property_bottom_get_dyn() { return hx_Theme_SideRegions_property_bottom_get;}
		static Dynamic hx_Theme_SideRegions_property_bottom_set;
		static Dynamic &hx_Theme_SideRegions_property_bottom_set_dyn() { return hx_Theme_SideRegions_property_bottom_set;}
		static Dynamic hx_Theme_SideRegions_property_right_get;
		static Dynamic &hx_Theme_SideRegions_property_right_get_dyn() { return hx_Theme_SideRegions_property_right_get;}
		static Dynamic hx_Theme_SideRegions_property_right_set;
		static Dynamic &hx_Theme_SideRegions_property_right_set_dyn() { return hx_Theme_SideRegions_property_right_set;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_Theme_SideRegions */ 
