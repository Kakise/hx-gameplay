#ifndef INCLUDED_org_gameplay3d_Material
#define INCLUDED_org_gameplay3d_Material

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/RenderState.h>
HX_DECLARE_CLASS2(org,gameplay3d,Effect)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Material)
HX_DECLARE_CLASS2(org,gameplay3d,Properties)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS2(org,gameplay3d,RenderState)
HX_DECLARE_CLASS2(org,gameplay3d,Technique)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  Material_obj : public ::org::gameplay3d::RenderState_obj{
	public:
		typedef ::org::gameplay3d::RenderState_obj super;
		typedef Material_obj OBJ_;
		Material_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Material_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Material_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Material"); }

		virtual ::org::gameplay3d::Technique getTechnique( );
		Dynamic getTechnique_dyn();

		virtual ::org::gameplay3d::Technique getTechnique_Str( ::String id);
		Dynamic getTechnique_Str_dyn();

		virtual ::org::gameplay3d::Technique getTechniqueByIndex( int index);
		Dynamic getTechniqueByIndex_dyn();

		virtual int getTechniqueCount( );
		Dynamic getTechniqueCount_dyn();

		virtual Void setTechnique( ::String id);
		Dynamic setTechnique_dyn();

		static ::org::gameplay3d::Material create_Eff( ::org::gameplay3d::Effect effect);
		static Dynamic create_Eff_dyn();

		static ::org::gameplay3d::Material create_Prop( ::org::gameplay3d::Properties materialProperties);
		static Dynamic create_Prop_dyn();

		static ::org::gameplay3d::Material create_Str( ::String url);
		static Dynamic create_Str_dyn();

		static ::org::gameplay3d::Material create_StrX3( ::String vshPath,::String fshPath,::String defines);
		static Dynamic create_StrX3_dyn();

		static Dynamic hx_Material_static_create_Eff;
		static Dynamic &hx_Material_static_create_Eff_dyn() { return hx_Material_static_create_Eff;}
		static Dynamic hx_Material_static_create_Prop;
		static Dynamic &hx_Material_static_create_Prop_dyn() { return hx_Material_static_create_Prop;}
		static Dynamic hx_Material_static_create_Str;
		static Dynamic &hx_Material_static_create_Str_dyn() { return hx_Material_static_create_Str;}
		static Dynamic hx_Material_static_create_StrX3;
		static Dynamic &hx_Material_static_create_StrX3_dyn() { return hx_Material_static_create_StrX3;}
		static Dynamic hx_Material_getTechnique;
		static Dynamic &hx_Material_getTechnique_dyn() { return hx_Material_getTechnique;}
		static Dynamic hx_Material_getTechnique_Str;
		static Dynamic &hx_Material_getTechnique_Str_dyn() { return hx_Material_getTechnique_Str;}
		static Dynamic hx_Material_getTechniqueByIndex;
		static Dynamic &hx_Material_getTechniqueByIndex_dyn() { return hx_Material_getTechniqueByIndex;}
		static Dynamic hx_Material_getTechniqueCount;
		static Dynamic &hx_Material_getTechniqueCount_dyn() { return hx_Material_getTechniqueCount;}
		static Dynamic hx_Material_setTechnique;
		static Dynamic &hx_Material_setTechnique_dyn() { return hx_Material_setTechnique;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_Material */ 
