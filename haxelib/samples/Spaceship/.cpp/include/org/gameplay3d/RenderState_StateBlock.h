#ifndef INCLUDED_org_gameplay3d_RenderState_StateBlock
#define INCLUDED_org_gameplay3d_RenderState_StateBlock

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
#include <org/gameplay3d/Ref.h>
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS2(org,gameplay3d,RenderState_StateBlock)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  RenderState_StateBlock_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef RenderState_StateBlock_obj OBJ_;
		RenderState_StateBlock_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< RenderState_StateBlock_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RenderState_StateBlock_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		inline operator ::org::gameplay3d::intern::INativeBinding_obj *()
			{ return new ::org::gameplay3d::intern::INativeBinding_delegate_< RenderState_StateBlock_obj >(this); }
		inline operator ::org::gameplay3d::Ref_obj *()
			{ return new ::org::gameplay3d::Ref_delegate_< RenderState_StateBlock_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("RenderState_StateBlock"); }

		virtual Void bind( );
		Dynamic bind_dyn();

		virtual Void setBlend( bool enabled);
		Dynamic setBlend_dyn();

		virtual Void setBlendDst( int blend);
		Dynamic setBlendDst_dyn();

		virtual Void setBlendSrc( int blend);
		Dynamic setBlendSrc_dyn();

		virtual Void setCullFace( bool enabled);
		Dynamic setCullFace_dyn();

		virtual Void setDepthTest( bool enabled);
		Dynamic setDepthTest_dyn();

		virtual Void setDepthWrite( bool enabled);
		Dynamic setDepthWrite_dyn();

		virtual Void setDepthFunction( int func);
		Dynamic setDepthFunction_dyn();

		virtual Void setState( ::String name,::String value);
		Dynamic setState_dyn();

		static ::org::gameplay3d::RenderState_StateBlock create( );
		static Dynamic create_dyn();

		static Dynamic hx_RenderState_StateBlock_bind;
		static Dynamic &hx_RenderState_StateBlock_bind_dyn() { return hx_RenderState_StateBlock_bind;}
		static Dynamic hx_RenderState_StateBlock_static_create;
		static Dynamic &hx_RenderState_StateBlock_static_create_dyn() { return hx_RenderState_StateBlock_static_create;}
		static Dynamic hx_RenderState_StateBlock_setBlend;
		static Dynamic &hx_RenderState_StateBlock_setBlend_dyn() { return hx_RenderState_StateBlock_setBlend;}
		static Dynamic hx_RenderState_StateBlock_setBlendDst;
		static Dynamic &hx_RenderState_StateBlock_setBlendDst_dyn() { return hx_RenderState_StateBlock_setBlendDst;}
		static Dynamic hx_RenderState_StateBlock_setBlendSrc;
		static Dynamic &hx_RenderState_StateBlock_setBlendSrc_dyn() { return hx_RenderState_StateBlock_setBlendSrc;}
		static Dynamic hx_RenderState_StateBlock_setCullFace;
		static Dynamic &hx_RenderState_StateBlock_setCullFace_dyn() { return hx_RenderState_StateBlock_setCullFace;}
		static Dynamic hx_RenderState_StateBlock_setDepthTest;
		static Dynamic &hx_RenderState_StateBlock_setDepthTest_dyn() { return hx_RenderState_StateBlock_setDepthTest;}
		static Dynamic hx_RenderState_StateBlock_setDepthWrite;
		static Dynamic &hx_RenderState_StateBlock_setDepthWrite_dyn() { return hx_RenderState_StateBlock_setDepthWrite;}
		static Dynamic hx_RenderState_StateBlock_setDepthFunction;
		static Dynamic &hx_RenderState_StateBlock_setDepthFunction_dyn() { return hx_RenderState_StateBlock_setDepthFunction;}
		static Dynamic hx_RenderState_StateBlock_setState;
		static Dynamic &hx_RenderState_StateBlock_setState_dyn() { return hx_RenderState_StateBlock_setState;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_RenderState_StateBlock */ 
