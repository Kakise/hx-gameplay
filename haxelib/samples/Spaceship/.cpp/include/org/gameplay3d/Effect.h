#ifndef INCLUDED_org_gameplay3d_Effect
#define INCLUDED_org_gameplay3d_Effect

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
#include <org/gameplay3d/Ref.h>
HX_DECLARE_CLASS2(org,gameplay3d,Effect)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Matrix)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS2(org,gameplay3d,Texture_Sampler)
HX_DECLARE_CLASS2(org,gameplay3d,Uniform)
HX_DECLARE_CLASS2(org,gameplay3d,Vector2)
HX_DECLARE_CLASS2(org,gameplay3d,Vector3)
HX_DECLARE_CLASS2(org,gameplay3d,Vector4)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IMatrix)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector2)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector3)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector4)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,util,Handle)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  Effect_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef Effect_obj OBJ_;
		Effect_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Effect_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Effect_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		inline operator ::org::gameplay3d::intern::INativeBinding_obj *()
			{ return new ::org::gameplay3d::intern::INativeBinding_delegate_< Effect_obj >(this); }
		inline operator ::org::gameplay3d::Ref_obj *()
			{ return new ::org::gameplay3d::Ref_delegate_< Effect_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("Effect"); }

		virtual Void bind( );
		Dynamic bind_dyn();

		virtual ::String getId( );
		Dynamic getId_dyn();

		virtual ::org::gameplay3d::Uniform getUniform_Str( ::String name);
		Dynamic getUniform_Str_dyn();

		virtual ::org::gameplay3d::Uniform getUniform_Int( int index);
		Dynamic getUniform_Int_dyn();

		virtual int getUniformCount( );
		Dynamic getUniformCount_dyn();

		virtual ::org::gameplay3d::util::Handle getVertexAttribute( ::String name);
		Dynamic getVertexAttribute_dyn();

		virtual Void setValue_Unif_Mat( ::org::gameplay3d::Uniform uniform,::org::gameplay3d::immutable::IMatrix value);
		Dynamic setValue_Unif_Mat_dyn();

		virtual Void setValue_Unif_ArrMat_Int( ::org::gameplay3d::Uniform uniform,Array< ::Dynamic > values,hx::Null< int >  count);
		Dynamic setValue_Unif_ArrMat_Int_dyn();

		virtual Void setValue_Unif_Smplr( ::org::gameplay3d::Uniform uniform,::org::gameplay3d::Texture_Sampler sampler);
		Dynamic setValue_Unif_Smplr_dyn();

		virtual Void setValue( ::org::gameplay3d::Uniform uniform,Array< ::Dynamic > values,int count);
		Dynamic setValue_dyn();

		virtual Void setValue_Unif_V2( ::org::gameplay3d::Uniform uniform,::org::gameplay3d::immutable::IVector2 value);
		Dynamic setValue_Unif_V2_dyn();

		virtual Void setValue_Unif_ArrV2_Int( ::org::gameplay3d::Uniform uniform,Array< ::Dynamic > values,hx::Null< int >  count);
		Dynamic setValue_Unif_ArrV2_Int_dyn();

		virtual Void setValue_Unif_V3( ::org::gameplay3d::Uniform uniform,::org::gameplay3d::immutable::IVector3 value);
		Dynamic setValue_Unif_V3_dyn();

		virtual Void setValue_Unif_ArrV3_Int( ::org::gameplay3d::Uniform uniform,Array< ::Dynamic > values,hx::Null< int >  count);
		Dynamic setValue_Unif_ArrV3_Int_dyn();

		virtual Void setValue_Unif_V4( ::org::gameplay3d::Uniform uniform,::org::gameplay3d::immutable::IVector4 value);
		Dynamic setValue_Unif_V4_dyn();

		virtual Void setValue_Unif_ArrV4_Int( ::org::gameplay3d::Uniform uniform,Array< ::Dynamic > values,hx::Null< int >  count);
		Dynamic setValue_Unif_ArrV4_Int_dyn();

		virtual Void setValue_Unif_ArrFlt_Int( ::org::gameplay3d::Uniform uniform,Array< Float > values,hx::Null< int >  count);
		Dynamic setValue_Unif_ArrFlt_Int_dyn();

		virtual Void setValue_Unif_ArrInt_Int( ::org::gameplay3d::Uniform uniform,Array< int > values,hx::Null< int >  count);
		Dynamic setValue_Unif_ArrInt_Int_dyn();

		virtual Void setValue_Unif_Flt( ::org::gameplay3d::Uniform uniform,Float value);
		Dynamic setValue_Unif_Flt_dyn();

		virtual Void setValue_Unif_Int( ::org::gameplay3d::Uniform uniform,int value);
		Dynamic setValue_Unif_Int_dyn();

		static ::org::gameplay3d::Effect createFromFile( ::String vshPath,::String fshPath,::String defines);
		static Dynamic createFromFile_dyn();

		static ::org::gameplay3d::Effect createFromSource( ::String vshSource,::String fshSource,::String defines);
		static Dynamic createFromSource_dyn();

		static ::org::gameplay3d::Effect getCurrentEffect( );
		static Dynamic getCurrentEffect_dyn();

		static Dynamic hx_Effect_bind;
		static Dynamic &hx_Effect_bind_dyn() { return hx_Effect_bind;}
		static Dynamic hx_Effect_static_createFromFile;
		static Dynamic &hx_Effect_static_createFromFile_dyn() { return hx_Effect_static_createFromFile;}
		static Dynamic hx_Effect_static_createFromSource;
		static Dynamic &hx_Effect_static_createFromSource_dyn() { return hx_Effect_static_createFromSource;}
		static Dynamic hx_Effect_static_getCurrentEffect;
		static Dynamic &hx_Effect_static_getCurrentEffect_dyn() { return hx_Effect_static_getCurrentEffect;}
		static Dynamic hx_Effect_getId;
		static Dynamic &hx_Effect_getId_dyn() { return hx_Effect_getId;}
		static Dynamic hx_Effect_getUniform_Str;
		static Dynamic &hx_Effect_getUniform_Str_dyn() { return hx_Effect_getUniform_Str;}
		static Dynamic hx_Effect_getUniform_Int;
		static Dynamic &hx_Effect_getUniform_Int_dyn() { return hx_Effect_getUniform_Int;}
		static Dynamic hx_Effect_getUniformCount;
		static Dynamic &hx_Effect_getUniformCount_dyn() { return hx_Effect_getUniformCount;}
		static Dynamic hx_Effect_getVertexAttribute;
		static Dynamic &hx_Effect_getVertexAttribute_dyn() { return hx_Effect_getVertexAttribute;}
		static Dynamic hx_Effect_setValue_Unif_Mat;
		static Dynamic &hx_Effect_setValue_Unif_Mat_dyn() { return hx_Effect_setValue_Unif_Mat;}
		static Dynamic hx_Effect_setValue_Unif_ArrMat_Int;
		static Dynamic &hx_Effect_setValue_Unif_ArrMat_Int_dyn() { return hx_Effect_setValue_Unif_ArrMat_Int;}
		static Dynamic hx_Effect_setValue_Unif_Smplr;
		static Dynamic &hx_Effect_setValue_Unif_Smplr_dyn() { return hx_Effect_setValue_Unif_Smplr;}
		static Dynamic hx_Effect_setValue_Unif_ArrSmplr_Int;
		static Dynamic &hx_Effect_setValue_Unif_ArrSmplr_Int_dyn() { return hx_Effect_setValue_Unif_ArrSmplr_Int;}
		static Dynamic hx_Effect_setValue_Unif_V2;
		static Dynamic &hx_Effect_setValue_Unif_V2_dyn() { return hx_Effect_setValue_Unif_V2;}
		static Dynamic hx_Effect_setValue_Unif_ArrV2_Int;
		static Dynamic &hx_Effect_setValue_Unif_ArrV2_Int_dyn() { return hx_Effect_setValue_Unif_ArrV2_Int;}
		static Dynamic hx_Effect_setValue_Unif_V3;
		static Dynamic &hx_Effect_setValue_Unif_V3_dyn() { return hx_Effect_setValue_Unif_V3;}
		static Dynamic hx_Effect_setValue_Unif_ArrV3_Int;
		static Dynamic &hx_Effect_setValue_Unif_ArrV3_Int_dyn() { return hx_Effect_setValue_Unif_ArrV3_Int;}
		static Dynamic hx_Effect_setValue_Unif_V4;
		static Dynamic &hx_Effect_setValue_Unif_V4_dyn() { return hx_Effect_setValue_Unif_V4;}
		static Dynamic hx_Effect_setValue_Unif_ArrV4_Int;
		static Dynamic &hx_Effect_setValue_Unif_ArrV4_Int_dyn() { return hx_Effect_setValue_Unif_ArrV4_Int;}
		static Dynamic hx_Effect_setValue_Unif_ArrFlt_Int;
		static Dynamic &hx_Effect_setValue_Unif_ArrFlt_Int_dyn() { return hx_Effect_setValue_Unif_ArrFlt_Int;}
		static Dynamic hx_Effect_setValue_Unif_ArrInt_Int;
		static Dynamic &hx_Effect_setValue_Unif_ArrInt_Int_dyn() { return hx_Effect_setValue_Unif_ArrInt_Int;}
		static Dynamic hx_Effect_setValue_Unif_Flt;
		static Dynamic &hx_Effect_setValue_Unif_Flt_dyn() { return hx_Effect_setValue_Unif_Flt;}
		static Dynamic hx_Effect_setValue_Unif_Int;
		static Dynamic &hx_Effect_setValue_Unif_Int_dyn() { return hx_Effect_setValue_Unif_Int;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_Effect */ 
