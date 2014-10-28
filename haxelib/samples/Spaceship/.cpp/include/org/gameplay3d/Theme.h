#ifndef INCLUDED_org_gameplay3d_Theme
#define INCLUDED_org_gameplay3d_Theme

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
#include <org/gameplay3d/Ref.h>
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS2(org,gameplay3d,Theme)
HX_DECLARE_CLASS2(org,gameplay3d,Theme_Style)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  Theme_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef Theme_obj OBJ_;
		Theme_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Theme_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Theme_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		inline operator ::org::gameplay3d::intern::INativeBinding_obj *()
			{ return new ::org::gameplay3d::intern::INativeBinding_delegate_< Theme_obj >(this); }
		inline operator ::org::gameplay3d::Ref_obj *()
			{ return new ::org::gameplay3d::Ref_delegate_< Theme_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("Theme"); }

		virtual ::org::gameplay3d::Theme_Style getEmptyStyle( );
		Dynamic getEmptyStyle_dyn();

		virtual ::org::gameplay3d::Theme_Style getStyle( ::String id);
		Dynamic getStyle_dyn();

		static ::org::gameplay3d::Theme create( ::String url);
		static Dynamic create_dyn();

		static Dynamic hx_Theme_static_create;
		static Dynamic &hx_Theme_static_create_dyn() { return hx_Theme_static_create;}
		static Dynamic hx_Theme_getEmptyStyle;
		static Dynamic &hx_Theme_getEmptyStyle_dyn() { return hx_Theme_getEmptyStyle;}
		static Dynamic hx_Theme_getStyle;
		static Dynamic &hx_Theme_getStyle_dyn() { return hx_Theme_getStyle;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_Theme */ 
