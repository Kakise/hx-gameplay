#ifndef INCLUDED_org_gameplay3d_Pass
#define INCLUDED_org_gameplay3d_Pass

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/RenderState.h>
HX_DECLARE_CLASS2(org,gameplay3d,Effect)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Pass)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS2(org,gameplay3d,RenderState)
HX_DECLARE_CLASS2(org,gameplay3d,VertexAttributeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  Pass_obj : public ::org::gameplay3d::RenderState_obj{
	public:
		typedef ::org::gameplay3d::RenderState_obj super;
		typedef Pass_obj OBJ_;
		Pass_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Pass_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Pass_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Pass"); }

		virtual Void bind( );
		Dynamic bind_dyn();

		virtual ::org::gameplay3d::Effect getEffect( );
		Dynamic getEffect_dyn();

		virtual ::String getId( );
		Dynamic getId_dyn();

		virtual ::org::gameplay3d::VertexAttributeBinding getVertexAttributeBinding( );
		Dynamic getVertexAttributeBinding_dyn();

		virtual Void setVertexAttributeBinding( ::org::gameplay3d::VertexAttributeBinding binding);
		Dynamic setVertexAttributeBinding_dyn();

		virtual Void unbind( );
		Dynamic unbind_dyn();

		static Dynamic hx_Pass_bind;
		static Dynamic &hx_Pass_bind_dyn() { return hx_Pass_bind;}
		static Dynamic hx_Pass_getEffect;
		static Dynamic &hx_Pass_getEffect_dyn() { return hx_Pass_getEffect;}
		static Dynamic hx_Pass_getId;
		static Dynamic &hx_Pass_getId_dyn() { return hx_Pass_getId;}
		static Dynamic hx_Pass_getVertexAttributeBinding;
		static Dynamic &hx_Pass_getVertexAttributeBinding_dyn() { return hx_Pass_getVertexAttributeBinding;}
		static Dynamic hx_Pass_setVertexAttributeBinding;
		static Dynamic &hx_Pass_setVertexAttributeBinding_dyn() { return hx_Pass_setVertexAttributeBinding;}
		static Dynamic hx_Pass_unbind;
		static Dynamic &hx_Pass_unbind_dyn() { return hx_Pass_unbind;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_Pass */ 
