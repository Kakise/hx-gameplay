#ifndef INCLUDED_org_gameplay3d_RenderState
#define INCLUDED_org_gameplay3d_RenderState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
#include <org/gameplay3d/Ref.h>
HX_DECLARE_CLASS2(org,gameplay3d,AnimationTarget)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,MaterialParameter)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS2(org,gameplay3d,RenderState)
HX_DECLARE_CLASS2(org,gameplay3d,RenderState_StateBlock)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,AnimationTargetImpl)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  RenderState_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef RenderState_obj OBJ_;
		RenderState_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< RenderState_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RenderState_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		inline operator ::org::gameplay3d::intern::INativeBinding_obj *()
			{ return new ::org::gameplay3d::intern::INativeBinding_delegate_< RenderState_obj >(this); }
		inline operator ::org::gameplay3d::Ref_obj *()
			{ return new ::org::gameplay3d::Ref_delegate_< RenderState_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("RenderState"); }

		virtual ::org::gameplay3d::MaterialParameter getParameter( ::String name);
		Dynamic getParameter_dyn();

		virtual ::org::gameplay3d::RenderState_StateBlock getStateBlock( );
		Dynamic getStateBlock_dyn();

		virtual Void setParameterAutoBinding_Str_Int( ::String name,int autoBinding);
		Dynamic setParameterAutoBinding_Str_Int_dyn();

		virtual Void setParameterAutoBinding_StrX2( ::String name,::String autoBinding);
		Dynamic setParameterAutoBinding_StrX2_dyn();

		virtual Void setStateBlock( ::org::gameplay3d::RenderState_StateBlock state);
		Dynamic setStateBlock_dyn();

		static Dynamic hx_RenderState_getParameter;
		static Dynamic &hx_RenderState_getParameter_dyn() { return hx_RenderState_getParameter;}
		static Dynamic hx_RenderState_getStateBlock;
		static Dynamic &hx_RenderState_getStateBlock_dyn() { return hx_RenderState_getStateBlock;}
		static Dynamic hx_RenderState_setParameterAutoBinding_Str_Int;
		static Dynamic &hx_RenderState_setParameterAutoBinding_Str_Int_dyn() { return hx_RenderState_setParameterAutoBinding_Str_Int;}
		static Dynamic hx_RenderState_setParameterAutoBinding_StrX2;
		static Dynamic &hx_RenderState_setParameterAutoBinding_StrX2_dyn() { return hx_RenderState_setParameterAutoBinding_StrX2;}
		static Dynamic hx_RenderState_setStateBlock;
		static Dynamic &hx_RenderState_setStateBlock_dyn() { return hx_RenderState_setStateBlock;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_RenderState */ 
