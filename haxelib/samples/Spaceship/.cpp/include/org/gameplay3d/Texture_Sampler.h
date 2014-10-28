#ifndef INCLUDED_org_gameplay3d_Texture_Sampler
#define INCLUDED_org_gameplay3d_Texture_Sampler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
#include <org/gameplay3d/Ref.h>
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS2(org,gameplay3d,Texture)
HX_DECLARE_CLASS2(org,gameplay3d,Texture_Sampler)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  Texture_Sampler_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef Texture_Sampler_obj OBJ_;
		Texture_Sampler_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Texture_Sampler_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Texture_Sampler_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		inline operator ::org::gameplay3d::intern::INativeBinding_obj *()
			{ return new ::org::gameplay3d::intern::INativeBinding_delegate_< Texture_Sampler_obj >(this); }
		inline operator ::org::gameplay3d::Ref_obj *()
			{ return new ::org::gameplay3d::Ref_delegate_< Texture_Sampler_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("Texture_Sampler"); }

		virtual Void bind( );
		Dynamic bind_dyn();

		virtual ::org::gameplay3d::Texture getTexture( );
		Dynamic getTexture_dyn();

		virtual Void setFilterMode( int minificationFilter,int magnificationFilter);
		Dynamic setFilterMode_dyn();

		virtual Void setWrapMode( int wrapS,int wrapT);
		Dynamic setWrapMode_dyn();

		static ::org::gameplay3d::Texture_Sampler create_Tex( ::org::gameplay3d::Texture texture);
		static Dynamic create_Tex_dyn();

		static ::org::gameplay3d::Texture_Sampler create_Str_Bool( ::String path,hx::Null< bool >  generateMipmaps);
		static Dynamic create_Str_Bool_dyn();

		static Dynamic hx_Texture_Sampler_bind;
		static Dynamic &hx_Texture_Sampler_bind_dyn() { return hx_Texture_Sampler_bind;}
		static Dynamic hx_Texture_Sampler_static_create_Tex;
		static Dynamic &hx_Texture_Sampler_static_create_Tex_dyn() { return hx_Texture_Sampler_static_create_Tex;}
		static Dynamic hx_Texture_Sampler_static_create_Str_Bool;
		static Dynamic &hx_Texture_Sampler_static_create_Str_Bool_dyn() { return hx_Texture_Sampler_static_create_Str_Bool;}
		static Dynamic hx_Texture_Sampler_getTexture;
		static Dynamic &hx_Texture_Sampler_getTexture_dyn() { return hx_Texture_Sampler_getTexture;}
		static Dynamic hx_Texture_Sampler_setFilterMode;
		static Dynamic &hx_Texture_Sampler_setFilterMode_dyn() { return hx_Texture_Sampler_setFilterMode;}
		static Dynamic hx_Texture_Sampler_setWrapMode;
		static Dynamic &hx_Texture_Sampler_setWrapMode_dyn() { return hx_Texture_Sampler_setWrapMode;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_Texture_Sampler */ 
