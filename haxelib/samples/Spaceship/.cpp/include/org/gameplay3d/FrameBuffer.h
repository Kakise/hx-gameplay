#ifndef INCLUDED_org_gameplay3d_FrameBuffer
#define INCLUDED_org_gameplay3d_FrameBuffer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
#include <org/gameplay3d/Ref.h>
HX_DECLARE_CLASS2(org,gameplay3d,DepthStencilTarget)
HX_DECLARE_CLASS2(org,gameplay3d,FrameBuffer)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS2(org,gameplay3d,RenderTarget)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  FrameBuffer_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef FrameBuffer_obj OBJ_;
		FrameBuffer_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FrameBuffer_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FrameBuffer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		inline operator ::org::gameplay3d::intern::INativeBinding_obj *()
			{ return new ::org::gameplay3d::intern::INativeBinding_delegate_< FrameBuffer_obj >(this); }
		inline operator ::org::gameplay3d::Ref_obj *()
			{ return new ::org::gameplay3d::Ref_delegate_< FrameBuffer_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("FrameBuffer"); }

		virtual Void bind( );
		Dynamic bind_dyn();

		virtual ::org::gameplay3d::DepthStencilTarget getDepthStencilTarget( );
		Dynamic getDepthStencilTarget_dyn();

		virtual int getHeight( );
		Dynamic getHeight_dyn();

		virtual ::String getId( );
		Dynamic getId_dyn();

		virtual ::org::gameplay3d::RenderTarget getRenderTarget( hx::Null< int >  index);
		Dynamic getRenderTarget_dyn();

		virtual int getWidth( );
		Dynamic getWidth_dyn();

		virtual Void setDepthStencilTarget( ::org::gameplay3d::DepthStencilTarget target);
		Dynamic setDepthStencilTarget_dyn();

		virtual Void setRenderTarget( ::org::gameplay3d::RenderTarget target,hx::Null< int >  index);
		Dynamic setRenderTarget_dyn();

		static Void bindDefault( );
		static Dynamic bindDefault_dyn();

		static ::org::gameplay3d::FrameBuffer create_Str( ::String id);
		static Dynamic create_Str_dyn();

		static ::org::gameplay3d::FrameBuffer create_Str_IntX2( ::String id,int width,int height);
		static Dynamic create_Str_IntX2_dyn();

		static ::org::gameplay3d::FrameBuffer getFrameBuffer( ::String id);
		static Dynamic getFrameBuffer_dyn();

		static int getMaxRenderTargets( );
		static Dynamic getMaxRenderTargets_dyn();

		static Dynamic hx_FrameBuffer_bind;
		static Dynamic &hx_FrameBuffer_bind_dyn() { return hx_FrameBuffer_bind;}
		static Dynamic hx_FrameBuffer_static_bindDefault;
		static Dynamic &hx_FrameBuffer_static_bindDefault_dyn() { return hx_FrameBuffer_static_bindDefault;}
		static Dynamic hx_FrameBuffer_static_create_Str;
		static Dynamic &hx_FrameBuffer_static_create_Str_dyn() { return hx_FrameBuffer_static_create_Str;}
		static Dynamic hx_FrameBuffer_static_create_Str_IntX2;
		static Dynamic &hx_FrameBuffer_static_create_Str_IntX2_dyn() { return hx_FrameBuffer_static_create_Str_IntX2;}
		static Dynamic hx_FrameBuffer_getDepthStencilTarget;
		static Dynamic &hx_FrameBuffer_getDepthStencilTarget_dyn() { return hx_FrameBuffer_getDepthStencilTarget;}
		static Dynamic hx_FrameBuffer_static_getFrameBuffer;
		static Dynamic &hx_FrameBuffer_static_getFrameBuffer_dyn() { return hx_FrameBuffer_static_getFrameBuffer;}
		static Dynamic hx_FrameBuffer_getHeight;
		static Dynamic &hx_FrameBuffer_getHeight_dyn() { return hx_FrameBuffer_getHeight;}
		static Dynamic hx_FrameBuffer_getId;
		static Dynamic &hx_FrameBuffer_getId_dyn() { return hx_FrameBuffer_getId;}
		static Dynamic hx_FrameBuffer_static_getMaxRenderTargets;
		static Dynamic &hx_FrameBuffer_static_getMaxRenderTargets_dyn() { return hx_FrameBuffer_static_getMaxRenderTargets;}
		static Dynamic hx_FrameBuffer_getRenderTarget;
		static Dynamic &hx_FrameBuffer_getRenderTarget_dyn() { return hx_FrameBuffer_getRenderTarget;}
		static Dynamic hx_FrameBuffer_getWidth;
		static Dynamic &hx_FrameBuffer_getWidth_dyn() { return hx_FrameBuffer_getWidth;}
		static Dynamic hx_FrameBuffer_setDepthStencilTarget;
		static Dynamic &hx_FrameBuffer_setDepthStencilTarget_dyn() { return hx_FrameBuffer_setDepthStencilTarget;}
		static Dynamic hx_FrameBuffer_setRenderTarget;
		static Dynamic &hx_FrameBuffer_setRenderTarget_dyn() { return hx_FrameBuffer_setRenderTarget;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_FrameBuffer */ 
