#ifndef INCLUDED_org_gameplay3d_Theme_ThemeImage
#define INCLUDED_org_gameplay3d_Theme_ThemeImage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
#include <org/gameplay3d/Ref.h>
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Rectangle)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS2(org,gameplay3d,Theme_ThemeImage)
HX_DECLARE_CLASS2(org,gameplay3d,Theme_UVs)
HX_DECLARE_CLASS2(org,gameplay3d,Vector4)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IRectangle)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,ITheme_UVs)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector4)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  Theme_ThemeImage_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef Theme_ThemeImage_obj OBJ_;
		Theme_ThemeImage_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Theme_ThemeImage_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Theme_ThemeImage_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::org::gameplay3d::intern::INativeBinding_obj *()
			{ return new ::org::gameplay3d::intern::INativeBinding_delegate_< Theme_ThemeImage_obj >(this); }
		inline operator ::org::gameplay3d::Ref_obj *()
			{ return new ::org::gameplay3d::Ref_delegate_< Theme_ThemeImage_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("Theme_ThemeImage"); }

		::org::gameplay3d::Vector4 _color;
		::org::gameplay3d::Rectangle _region;
		::org::gameplay3d::Theme_UVs _uvs;
		virtual ::org::gameplay3d::immutable::IVector4 getColor( );
		Dynamic getColor_dyn();

		virtual ::String getId( );
		Dynamic getId_dyn();

		virtual ::org::gameplay3d::immutable::IRectangle getRegion( );
		Dynamic getRegion_dyn();

		virtual ::org::gameplay3d::immutable::ITheme_UVs getUVs( );
		Dynamic getUVs_dyn();

		static Dynamic hx_Theme_ThemeImage_getColor;
		static Dynamic &hx_Theme_ThemeImage_getColor_dyn() { return hx_Theme_ThemeImage_getColor;}
		static Dynamic hx_Theme_ThemeImage_getId;
		static Dynamic &hx_Theme_ThemeImage_getId_dyn() { return hx_Theme_ThemeImage_getId;}
		static Dynamic hx_Theme_ThemeImage_getRegion;
		static Dynamic &hx_Theme_ThemeImage_getRegion_dyn() { return hx_Theme_ThemeImage_getRegion;}
		static Dynamic hx_Theme_ThemeImage_getUVs;
		static Dynamic &hx_Theme_ThemeImage_getUVs_dyn() { return hx_Theme_ThemeImage_getUVs;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_Theme_ThemeImage */ 
