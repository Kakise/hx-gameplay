#ifndef INCLUDED_org_gameplay3d_Texture
#define INCLUDED_org_gameplay3d_Texture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
#include <org/gameplay3d/Ref.h>
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Image)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS2(org,gameplay3d,Texture)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,util,Handle)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  Texture_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef Texture_obj OBJ_;
		Texture_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Texture_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Texture_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		inline operator ::org::gameplay3d::intern::INativeBinding_obj *()
			{ return new ::org::gameplay3d::intern::INativeBinding_delegate_< Texture_obj >(this); }
		inline operator ::org::gameplay3d::Ref_obj *()
			{ return new ::org::gameplay3d::Ref_delegate_< Texture_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("Texture"); }

		virtual Void generateMipmaps( );
		Dynamic generateMipmaps_dyn();

		virtual int getFormat( );
		Dynamic getFormat_dyn();

		virtual ::org::gameplay3d::util::Handle getHandle( );
		Dynamic getHandle_dyn();

		virtual int getHeight( );
		Dynamic getHeight_dyn();

		virtual ::String getPath( );
		Dynamic getPath_dyn();

		virtual int getWidth( );
		Dynamic getWidth_dyn();

		virtual bool isCompressed( );
		Dynamic isCompressed_dyn();

		virtual bool isMipmapped( );
		Dynamic isMipmapped_dyn();

		virtual Void setFilterMode( int minificationFilter,int magnificationFilter);
		Dynamic setFilterMode_dyn();

		virtual Void setWrapMode( int wrapS,int wrapT);
		Dynamic setWrapMode_dyn();

		static ::org::gameplay3d::Texture create_IntX3_Dat_Bool( int format,int width,int height,Array< unsigned char > data,hx::Null< bool >  generateMipmaps);
		static Dynamic create_IntX3_Dat_Bool_dyn();

		static ::org::gameplay3d::Texture create_Img_Bool( ::org::gameplay3d::Image image,hx::Null< bool >  generateMipmaps);
		static Dynamic create_Img_Bool_dyn();

		static ::org::gameplay3d::Texture create_Hndl_IntX3( ::org::gameplay3d::util::Handle handle,int width,int height,hx::Null< int >  format);
		static Dynamic create_Hndl_IntX3_dyn();

		static ::org::gameplay3d::Texture create_Str_Bool( ::String path,hx::Null< bool >  generateMipmaps);
		static Dynamic create_Str_Bool_dyn();

		static Dynamic hx_Texture_static_create_IntX3_Dat_Bool;
		static Dynamic &hx_Texture_static_create_IntX3_Dat_Bool_dyn() { return hx_Texture_static_create_IntX3_Dat_Bool;}
		static Dynamic hx_Texture_static_create_Img_Bool;
		static Dynamic &hx_Texture_static_create_Img_Bool_dyn() { return hx_Texture_static_create_Img_Bool;}
		static Dynamic hx_Texture_static_create_Hndl_IntX3;
		static Dynamic &hx_Texture_static_create_Hndl_IntX3_dyn() { return hx_Texture_static_create_Hndl_IntX3;}
		static Dynamic hx_Texture_static_create_Str_Bool;
		static Dynamic &hx_Texture_static_create_Str_Bool_dyn() { return hx_Texture_static_create_Str_Bool;}
		static Dynamic hx_Texture_generateMipmaps;
		static Dynamic &hx_Texture_generateMipmaps_dyn() { return hx_Texture_generateMipmaps;}
		static Dynamic hx_Texture_getFormat;
		static Dynamic &hx_Texture_getFormat_dyn() { return hx_Texture_getFormat;}
		static Dynamic hx_Texture_getHandle;
		static Dynamic &hx_Texture_getHandle_dyn() { return hx_Texture_getHandle;}
		static Dynamic hx_Texture_getHeight;
		static Dynamic &hx_Texture_getHeight_dyn() { return hx_Texture_getHeight;}
		static Dynamic hx_Texture_getPath;
		static Dynamic &hx_Texture_getPath_dyn() { return hx_Texture_getPath;}
		static Dynamic hx_Texture_getWidth;
		static Dynamic &hx_Texture_getWidth_dyn() { return hx_Texture_getWidth;}
		static Dynamic hx_Texture_isCompressed;
		static Dynamic &hx_Texture_isCompressed_dyn() { return hx_Texture_isCompressed;}
		static Dynamic hx_Texture_isMipmapped;
		static Dynamic &hx_Texture_isMipmapped_dyn() { return hx_Texture_isMipmapped;}
		static Dynamic hx_Texture_setFilterMode;
		static Dynamic &hx_Texture_setFilterMode_dyn() { return hx_Texture_setFilterMode;}
		static Dynamic hx_Texture_setWrapMode;
		static Dynamic &hx_Texture_setWrapMode_dyn() { return hx_Texture_setWrapMode;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_Texture */ 
