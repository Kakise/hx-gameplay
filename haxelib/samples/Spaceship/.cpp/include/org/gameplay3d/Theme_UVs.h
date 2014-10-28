#ifndef INCLUDED_org_gameplay3d_Theme_UVs
#define INCLUDED_org_gameplay3d_Theme_UVs

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
#include <org/gameplay3d/immutable/ITheme_UVs.h>
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Theme_UVs)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,ITheme_UVs)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  Theme_UVs_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef Theme_UVs_obj OBJ_;
		Theme_UVs_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Theme_UVs_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Theme_UVs_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		inline operator ::org::gameplay3d::intern::INativeBinding_obj *()
			{ return new ::org::gameplay3d::intern::INativeBinding_delegate_< Theme_UVs_obj >(this); }
		inline operator ::org::gameplay3d::immutable::ITheme_UVs_obj *()
			{ return new ::org::gameplay3d::immutable::ITheme_UVs_delegate_< Theme_UVs_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("Theme_UVs"); }

		virtual Float get_u1( );
		Dynamic get_u1_dyn();

		virtual Float set_u1( Float value);
		Dynamic set_u1_dyn();

		virtual Float get_v1( );
		Dynamic get_v1_dyn();

		virtual Float set_v1( Float value);
		Dynamic set_v1_dyn();

		virtual Float get_u2( );
		Dynamic get_u2_dyn();

		virtual Float set_u2( Float value);
		Dynamic set_u2_dyn();

		virtual Float get_v2( );
		Dynamic get_v2_dyn();

		virtual Float set_v2( Float value);
		Dynamic set_v2_dyn();

		static ::org::gameplay3d::Theme_UVs _empty;
		static ::org::gameplay3d::Theme_UVs make( );
		static Dynamic make_dyn();

		static ::org::gameplay3d::Theme_UVs make_FltX4( Float u1,Float v1,Float u2,Float v2);
		static Dynamic make_FltX4_dyn();

		static ::org::gameplay3d::immutable::ITheme_UVs empty( );
		static Dynamic empty_dyn();

		static Dynamic constructNativeObject( );
		static Dynamic constructNativeObject_dyn();

		static Dynamic constructNativeObject_FltX4( Float u1,Float v1,Float u2,Float v2);
		static Dynamic constructNativeObject_FltX4_dyn();

		static Dynamic hx_Theme_UVs_Construct;
		static Dynamic &hx_Theme_UVs_Construct_dyn() { return hx_Theme_UVs_Construct;}
		static Dynamic hx_Theme_UVs_Construct_FltX4;
		static Dynamic &hx_Theme_UVs_Construct_FltX4_dyn() { return hx_Theme_UVs_Construct_FltX4;}
		static Dynamic hx_Theme_UVs_static_empty;
		static Dynamic &hx_Theme_UVs_static_empty_dyn() { return hx_Theme_UVs_static_empty;}
		static Dynamic hx_Theme_UVs_property_u1_get;
		static Dynamic &hx_Theme_UVs_property_u1_get_dyn() { return hx_Theme_UVs_property_u1_get;}
		static Dynamic hx_Theme_UVs_property_u1_set;
		static Dynamic &hx_Theme_UVs_property_u1_set_dyn() { return hx_Theme_UVs_property_u1_set;}
		static Dynamic hx_Theme_UVs_property_v1_get;
		static Dynamic &hx_Theme_UVs_property_v1_get_dyn() { return hx_Theme_UVs_property_v1_get;}
		static Dynamic hx_Theme_UVs_property_v1_set;
		static Dynamic &hx_Theme_UVs_property_v1_set_dyn() { return hx_Theme_UVs_property_v1_set;}
		static Dynamic hx_Theme_UVs_property_u2_get;
		static Dynamic &hx_Theme_UVs_property_u2_get_dyn() { return hx_Theme_UVs_property_u2_get;}
		static Dynamic hx_Theme_UVs_property_u2_set;
		static Dynamic &hx_Theme_UVs_property_u2_set_dyn() { return hx_Theme_UVs_property_u2_set;}
		static Dynamic hx_Theme_UVs_property_v2_get;
		static Dynamic &hx_Theme_UVs_property_v2_get_dyn() { return hx_Theme_UVs_property_v2_get;}
		static Dynamic hx_Theme_UVs_property_v2_set;
		static Dynamic &hx_Theme_UVs_property_v2_set_dyn() { return hx_Theme_UVs_property_v2_set;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_Theme_UVs */ 
