#ifndef INCLUDED_org_gameplay3d_RenderTarget
#define INCLUDED_org_gameplay3d_RenderTarget

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
#include <org/gameplay3d/Ref.h>
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS2(org,gameplay3d,RenderTarget)
HX_DECLARE_CLASS2(org,gameplay3d,Texture)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  RenderTarget_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef RenderTarget_obj OBJ_;
		RenderTarget_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< RenderTarget_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RenderTarget_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		inline operator ::org::gameplay3d::intern::INativeBinding_obj *()
			{ return new ::org::gameplay3d::intern::INativeBinding_delegate_< RenderTarget_obj >(this); }
		inline operator ::org::gameplay3d::Ref_obj *()
			{ return new ::org::gameplay3d::Ref_delegate_< RenderTarget_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("RenderTarget"); }

		virtual int getHeight( );
		Dynamic getHeight_dyn();

		virtual ::String getId( );
		Dynamic getId_dyn();

		virtual ::org::gameplay3d::Texture getTexture( );
		Dynamic getTexture_dyn();

		virtual int getWidth( );
		Dynamic getWidth_dyn();

		static ::org::gameplay3d::RenderTarget create_Str_Tex( ::String id,::org::gameplay3d::Texture texture);
		static Dynamic create_Str_Tex_dyn();

		static ::org::gameplay3d::RenderTarget create_Str_IntX2( ::String id,int width,int height);
		static Dynamic create_Str_IntX2_dyn();

		static ::org::gameplay3d::RenderTarget getRenderTarget( ::String id);
		static Dynamic getRenderTarget_dyn();

		static Dynamic hx_RenderTarget_static_create_Str_Tex;
		static Dynamic &hx_RenderTarget_static_create_Str_Tex_dyn() { return hx_RenderTarget_static_create_Str_Tex;}
		static Dynamic hx_RenderTarget_static_create_Str_IntX2;
		static Dynamic &hx_RenderTarget_static_create_Str_IntX2_dyn() { return hx_RenderTarget_static_create_Str_IntX2;}
		static Dynamic hx_RenderTarget_getHeight;
		static Dynamic &hx_RenderTarget_getHeight_dyn() { return hx_RenderTarget_getHeight;}
		static Dynamic hx_RenderTarget_getId;
		static Dynamic &hx_RenderTarget_getId_dyn() { return hx_RenderTarget_getId;}
		static Dynamic hx_RenderTarget_static_getRenderTarget;
		static Dynamic &hx_RenderTarget_static_getRenderTarget_dyn() { return hx_RenderTarget_static_getRenderTarget;}
		static Dynamic hx_RenderTarget_getTexture;
		static Dynamic &hx_RenderTarget_getTexture_dyn() { return hx_RenderTarget_getTexture;}
		static Dynamic hx_RenderTarget_getWidth;
		static Dynamic &hx_RenderTarget_getWidth_dyn() { return hx_RenderTarget_getWidth;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_RenderTarget */ 
