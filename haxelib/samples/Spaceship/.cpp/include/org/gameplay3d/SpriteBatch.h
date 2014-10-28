#ifndef INCLUDED_org_gameplay3d_SpriteBatch
#define INCLUDED_org_gameplay3d_SpriteBatch

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
HX_DECLARE_CLASS2(org,gameplay3d,Effect)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Material)
HX_DECLARE_CLASS2(org,gameplay3d,Matrix)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS2(org,gameplay3d,RenderState)
HX_DECLARE_CLASS2(org,gameplay3d,RenderState_StateBlock)
HX_DECLARE_CLASS2(org,gameplay3d,SpriteBatch)
HX_DECLARE_CLASS2(org,gameplay3d,Texture)
HX_DECLARE_CLASS2(org,gameplay3d,Texture_Sampler)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IMatrix)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IRectangle)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector2)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector3)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector4)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  SpriteBatch_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef SpriteBatch_obj OBJ_;
		SpriteBatch_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SpriteBatch_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SpriteBatch_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SpriteBatch"); }

		::org::gameplay3d::Matrix _projectionMatrix;
		virtual Void draw_RctX2_V4( ::org::gameplay3d::immutable::IRectangle dst,::org::gameplay3d::immutable::IRectangle src,::org::gameplay3d::immutable::IVector4 color);
		Dynamic draw_RctX2_V4_dyn();

		virtual Void draw_V3_Rct_V2_V4( ::org::gameplay3d::immutable::IVector3 dst,::org::gameplay3d::immutable::IRectangle src,::org::gameplay3d::immutable::IVector2 scale,::org::gameplay3d::immutable::IVector4 color);
		Dynamic draw_V3_Rct_V2_V4_dyn();

		virtual Void draw_V3_Rct_V2_V4_V2_Flt( ::org::gameplay3d::immutable::IVector3 dst,::org::gameplay3d::immutable::IRectangle src,::org::gameplay3d::immutable::IVector2 scale,::org::gameplay3d::immutable::IVector4 color,::org::gameplay3d::immutable::IVector2 rotationPoint,Float rotationAngle);
		Dynamic draw_V3_Rct_V2_V4_V2_Flt_dyn();

		virtual Void draw_V3_FltX6_V4_V2_Flt_Bool( ::org::gameplay3d::immutable::IVector3 dst,Float width,Float height,Float u1,Float v1,Float u2,Float v2,::org::gameplay3d::immutable::IVector4 color,::org::gameplay3d::immutable::IVector2 rotationPoint,Float rotationAngle,hx::Null< bool >  positionIsCenter);
		Dynamic draw_V3_FltX6_V4_V2_Flt_Bool_dyn();

		virtual Void draw_V3X3_FltX6_V4_V2_Flt( ::org::gameplay3d::immutable::IVector3 position,::org::gameplay3d::immutable::IVector3 right,::org::gameplay3d::immutable::IVector3 forward,Float width,Float height,Float u1,Float v1,Float u2,Float v2,::org::gameplay3d::immutable::IVector4 color,::org::gameplay3d::immutable::IVector2 rotationPoint,Float rotationAngle);
		Dynamic draw_V3X3_FltX6_V4_V2_Flt_dyn();

		virtual Void draw_FltX8_V4( Float x,Float y,Float width,Float height,Float u1,Float v1,Float u2,Float v2,::org::gameplay3d::immutable::IVector4 color);
		Dynamic draw_FltX8_V4_dyn();

		virtual Void draw_FltX8_V4_Rct( Float x,Float y,Float width,Float height,Float u1,Float v1,Float u2,Float v2,::org::gameplay3d::immutable::IVector4 color,::org::gameplay3d::immutable::IRectangle clip);
		Dynamic draw_FltX8_V4_Rct_dyn();

		virtual Void draw_FltX9_V4_Bool( Float x,Float y,Float z,Float width,Float height,Float u1,Float v1,Float u2,Float v2,::org::gameplay3d::immutable::IVector4 color,hx::Null< bool >  positionIsCenter);
		Dynamic draw_FltX9_V4_Bool_dyn();

		virtual Void draw_FltX9_V4_V2_Flt_Bool( Float x,Float y,Float z,Float width,Float height,Float u1,Float v1,Float u2,Float v2,::org::gameplay3d::immutable::IVector4 color,::org::gameplay3d::immutable::IVector2 rotationPoint,Float rotationAngle,hx::Null< bool >  positionIsCenter);
		Dynamic draw_FltX9_V4_V2_Flt_Bool_dyn();

		virtual Void finish( );
		Dynamic finish_dyn();

		virtual ::org::gameplay3d::Material getMaterial( );
		Dynamic getMaterial_dyn();

		virtual ::org::gameplay3d::immutable::IMatrix getProjectionMatrix( );
		Dynamic getProjectionMatrix_dyn();

		virtual ::org::gameplay3d::Texture_Sampler getSampler( );
		Dynamic getSampler_dyn();

		virtual ::org::gameplay3d::RenderState_StateBlock getStateBlock( );
		Dynamic getStateBlock_dyn();

		virtual Void setProjectionMatrix( ::org::gameplay3d::immutable::IMatrix matrix);
		Dynamic setProjectionMatrix_dyn();

		virtual Void start( );
		Dynamic start_dyn();

		static ::org::gameplay3d::SpriteBatch create_Tex_Eff_Int( ::org::gameplay3d::Texture texture,::org::gameplay3d::Effect effect,hx::Null< int >  initialCapacity);
		static Dynamic create_Tex_Eff_Int_dyn();

		static ::org::gameplay3d::SpriteBatch create_Str_Eff_Int( ::String texturePath,::org::gameplay3d::Effect effect,hx::Null< int >  initialCapacity);
		static Dynamic create_Str_Eff_Int_dyn();

		static Dynamic hx_SpriteBatch_static_create_Tex_Eff_Int;
		static Dynamic &hx_SpriteBatch_static_create_Tex_Eff_Int_dyn() { return hx_SpriteBatch_static_create_Tex_Eff_Int;}
		static Dynamic hx_SpriteBatch_static_create_Str_Eff_Int;
		static Dynamic &hx_SpriteBatch_static_create_Str_Eff_Int_dyn() { return hx_SpriteBatch_static_create_Str_Eff_Int;}
		static Dynamic hx_SpriteBatch_draw_RctX2_V4;
		static Dynamic &hx_SpriteBatch_draw_RctX2_V4_dyn() { return hx_SpriteBatch_draw_RctX2_V4;}
		static Dynamic hx_SpriteBatch_draw_V3_Rct_V2_V4;
		static Dynamic &hx_SpriteBatch_draw_V3_Rct_V2_V4_dyn() { return hx_SpriteBatch_draw_V3_Rct_V2_V4;}
		static Dynamic hx_SpriteBatch_draw_V3_Rct_V2_V4_V2_Flt;
		static Dynamic &hx_SpriteBatch_draw_V3_Rct_V2_V4_V2_Flt_dyn() { return hx_SpriteBatch_draw_V3_Rct_V2_V4_V2_Flt;}
		static Dynamic hx_SpriteBatch_draw_V3_FltX6_V4_V2_Flt_Bool;
		static Dynamic &hx_SpriteBatch_draw_V3_FltX6_V4_V2_Flt_Bool_dyn() { return hx_SpriteBatch_draw_V3_FltX6_V4_V2_Flt_Bool;}
		static Dynamic hx_SpriteBatch_draw_V3X3_FltX6_V4_V2_Flt;
		static Dynamic &hx_SpriteBatch_draw_V3X3_FltX6_V4_V2_Flt_dyn() { return hx_SpriteBatch_draw_V3X3_FltX6_V4_V2_Flt;}
		static Dynamic hx_SpriteBatch_draw_FltX8_V4;
		static Dynamic &hx_SpriteBatch_draw_FltX8_V4_dyn() { return hx_SpriteBatch_draw_FltX8_V4;}
		static Dynamic hx_SpriteBatch_draw_FltX8_V4_Rct;
		static Dynamic &hx_SpriteBatch_draw_FltX8_V4_Rct_dyn() { return hx_SpriteBatch_draw_FltX8_V4_Rct;}
		static Dynamic hx_SpriteBatch_draw_FltX9_V4_Bool;
		static Dynamic &hx_SpriteBatch_draw_FltX9_V4_Bool_dyn() { return hx_SpriteBatch_draw_FltX9_V4_Bool;}
		static Dynamic hx_SpriteBatch_draw_FltX9_V4_V2_Flt_Bool;
		static Dynamic &hx_SpriteBatch_draw_FltX9_V4_V2_Flt_Bool_dyn() { return hx_SpriteBatch_draw_FltX9_V4_V2_Flt_Bool;}
		static Dynamic hx_SpriteBatch_finish;
		static Dynamic &hx_SpriteBatch_finish_dyn() { return hx_SpriteBatch_finish;}
		static Dynamic hx_SpriteBatch_getMaterial;
		static Dynamic &hx_SpriteBatch_getMaterial_dyn() { return hx_SpriteBatch_getMaterial;}
		static Dynamic hx_SpriteBatch_getProjectionMatrix;
		static Dynamic &hx_SpriteBatch_getProjectionMatrix_dyn() { return hx_SpriteBatch_getProjectionMatrix;}
		static Dynamic hx_SpriteBatch_getSampler;
		static Dynamic &hx_SpriteBatch_getSampler_dyn() { return hx_SpriteBatch_getSampler;}
		static Dynamic hx_SpriteBatch_getStateBlock;
		static Dynamic &hx_SpriteBatch_getStateBlock_dyn() { return hx_SpriteBatch_getStateBlock;}
		static Dynamic hx_SpriteBatch_setProjectionMatrix;
		static Dynamic &hx_SpriteBatch_setProjectionMatrix_dyn() { return hx_SpriteBatch_setProjectionMatrix;}
		static Dynamic hx_SpriteBatch_start;
		static Dynamic &hx_SpriteBatch_start_dyn() { return hx_SpriteBatch_start;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_SpriteBatch */ 
