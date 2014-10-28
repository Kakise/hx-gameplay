#ifndef INCLUDED_org_gameplay3d_Font_Text
#define INCLUDED_org_gameplay3d_Font_Text

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
HX_DECLARE_CLASS2(org,gameplay3d,Font_Text)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  Font_Text_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef Font_Text_obj OBJ_;
		Font_Text_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Font_Text_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Font_Text_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Font_Text"); }

		virtual ::String getText( );
		Dynamic getText_dyn();

		static ::org::gameplay3d::Font_Text make( ::String text);
		static Dynamic make_dyn();

		static Dynamic constructNativeObject( ::String text);
		static Dynamic constructNativeObject_dyn();

		static Dynamic hx_Font_Text_Construct;
		static Dynamic &hx_Font_Text_Construct_dyn() { return hx_Font_Text_Construct;}
		static Dynamic hx_Font_Text_getText;
		static Dynamic &hx_Font_Text_getText_dyn() { return hx_Font_Text_getText;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_Font_Text */ 
