#ifndef INCLUDED_org_gameplay3d_Image
#define INCLUDED_org_gameplay3d_Image

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
#include <org/gameplay3d/Ref.h>
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Image)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  Image_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef Image_obj OBJ_;
		Image_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Image_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Image_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		inline operator ::org::gameplay3d::intern::INativeBinding_obj *()
			{ return new ::org::gameplay3d::intern::INativeBinding_delegate_< Image_obj >(this); }
		inline operator ::org::gameplay3d::Ref_obj *()
			{ return new ::org::gameplay3d::Ref_delegate_< Image_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("Image"); }

		virtual Array< unsigned char > getData( );
		Dynamic getData_dyn();

		virtual int getFormat( );
		Dynamic getFormat_dyn();

		virtual int getHeight( );
		Dynamic getHeight_dyn();

		virtual int getWidth( );
		Dynamic getWidth_dyn();

		static ::org::gameplay3d::Image create( ::String path);
		static Dynamic create_dyn();

		static Dynamic hx_Image_static_create;
		static Dynamic &hx_Image_static_create_dyn() { return hx_Image_static_create;}
		static Dynamic hx_Image_getData;
		static Dynamic &hx_Image_getData_dyn() { return hx_Image_getData;}
		static Dynamic hx_Image_getFormat;
		static Dynamic &hx_Image_getFormat_dyn() { return hx_Image_getFormat;}
		static Dynamic hx_Image_getHeight;
		static Dynamic &hx_Image_getHeight_dyn() { return hx_Image_getHeight;}
		static Dynamic hx_Image_getWidth;
		static Dynamic &hx_Image_getWidth_dyn() { return hx_Image_getWidth;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_Image */ 
