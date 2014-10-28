#ifndef INCLUDED_org_gameplay3d_DepthStencilTarget
#define INCLUDED_org_gameplay3d_DepthStencilTarget

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
#include <org/gameplay3d/Ref.h>
HX_DECLARE_CLASS2(org,gameplay3d,DepthStencilTarget)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  DepthStencilTarget_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef DepthStencilTarget_obj OBJ_;
		DepthStencilTarget_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< DepthStencilTarget_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DepthStencilTarget_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		inline operator ::org::gameplay3d::intern::INativeBinding_obj *()
			{ return new ::org::gameplay3d::intern::INativeBinding_delegate_< DepthStencilTarget_obj >(this); }
		inline operator ::org::gameplay3d::Ref_obj *()
			{ return new ::org::gameplay3d::Ref_delegate_< DepthStencilTarget_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("DepthStencilTarget"); }

		virtual int getFormat( );
		Dynamic getFormat_dyn();

		virtual int getHeight( );
		Dynamic getHeight_dyn();

		virtual ::String getId( );
		Dynamic getId_dyn();

		virtual int getWidth( );
		Dynamic getWidth_dyn();

		static ::org::gameplay3d::DepthStencilTarget create( ::String id,int format,int width,int height);
		static Dynamic create_dyn();

		static ::org::gameplay3d::DepthStencilTarget getDepthStencilTarget( ::String id);
		static Dynamic getDepthStencilTarget_dyn();

		static Dynamic hx_DepthStencilTarget_static_create;
		static Dynamic &hx_DepthStencilTarget_static_create_dyn() { return hx_DepthStencilTarget_static_create;}
		static Dynamic hx_DepthStencilTarget_static_getDepthStencilTarget;
		static Dynamic &hx_DepthStencilTarget_static_getDepthStencilTarget_dyn() { return hx_DepthStencilTarget_static_getDepthStencilTarget;}
		static Dynamic hx_DepthStencilTarget_getFormat;
		static Dynamic &hx_DepthStencilTarget_getFormat_dyn() { return hx_DepthStencilTarget_getFormat;}
		static Dynamic hx_DepthStencilTarget_getHeight;
		static Dynamic &hx_DepthStencilTarget_getHeight_dyn() { return hx_DepthStencilTarget_getHeight;}
		static Dynamic hx_DepthStencilTarget_getId;
		static Dynamic &hx_DepthStencilTarget_getId_dyn() { return hx_DepthStencilTarget_getId;}
		static Dynamic hx_DepthStencilTarget_getWidth;
		static Dynamic &hx_DepthStencilTarget_getWidth_dyn() { return hx_DepthStencilTarget_getWidth;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_DepthStencilTarget */ 
