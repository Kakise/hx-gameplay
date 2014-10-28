#ifndef INCLUDED_org_gameplay3d_Model
#define INCLUDED_org_gameplay3d_Model

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
#include <org/gameplay3d/Ref.h>
HX_DECLARE_CLASS2(org,gameplay3d,AnimationTarget)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Material)
HX_DECLARE_CLASS2(org,gameplay3d,Mesh)
HX_DECLARE_CLASS2(org,gameplay3d,MeshSkin)
HX_DECLARE_CLASS2(org,gameplay3d,Model)
HX_DECLARE_CLASS2(org,gameplay3d,Node)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS2(org,gameplay3d,RenderState)
HX_DECLARE_CLASS2(org,gameplay3d,ScriptTarget)
HX_DECLARE_CLASS2(org,gameplay3d,Transform)
HX_DECLARE_CLASS2(org,gameplay3d,Transform_Listener)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,AnimationTarget_ScriptTarget)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,Transform_ListenerImpl)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  Model_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef Model_obj OBJ_;
		Model_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Model_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Model_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		inline operator ::org::gameplay3d::intern::INativeBinding_obj *()
			{ return new ::org::gameplay3d::intern::INativeBinding_delegate_< Model_obj >(this); }
		inline operator ::org::gameplay3d::Ref_obj *()
			{ return new ::org::gameplay3d::Ref_delegate_< Model_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("Model"); }

		virtual Void draw( hx::Null< bool >  wireframe);
		Dynamic draw_dyn();

		virtual ::org::gameplay3d::Material getMaterial( hx::Null< int >  partIndex);
		Dynamic getMaterial_dyn();

		virtual ::org::gameplay3d::Mesh getMesh( );
		Dynamic getMesh_dyn();

		virtual int getMeshPartCount( );
		Dynamic getMeshPartCount_dyn();

		virtual ::org::gameplay3d::Node getNode( );
		Dynamic getNode_dyn();

		virtual ::org::gameplay3d::MeshSkin getSkin( );
		Dynamic getSkin_dyn();

		virtual bool hasMaterial( int partIndex);
		Dynamic hasMaterial_dyn();

		virtual ::org::gameplay3d::Material setMaterial_Str_Int( ::String materialPath,hx::Null< int >  partIndex);
		Dynamic setMaterial_Str_Int_dyn();

		virtual ::org::gameplay3d::Material setMaterial_StrX3_Int( ::String vshPath,::String fshPath,::String defines,hx::Null< int >  partIndex);
		Dynamic setMaterial_StrX3_Int_dyn();

		virtual Void setMaterial_Mtrl_Int( ::org::gameplay3d::Material material,hx::Null< int >  partIndex);
		Dynamic setMaterial_Mtrl_Int_dyn();

		virtual Void setNode( ::org::gameplay3d::Node node);
		Dynamic setNode_dyn();

		static ::org::gameplay3d::Model create( ::org::gameplay3d::Mesh mesh);
		static Dynamic create_dyn();

		static Dynamic hx_Model_static_create;
		static Dynamic &hx_Model_static_create_dyn() { return hx_Model_static_create;}
		static Dynamic hx_Model_draw;
		static Dynamic &hx_Model_draw_dyn() { return hx_Model_draw;}
		static Dynamic hx_Model_getMaterial;
		static Dynamic &hx_Model_getMaterial_dyn() { return hx_Model_getMaterial;}
		static Dynamic hx_Model_getMesh;
		static Dynamic &hx_Model_getMesh_dyn() { return hx_Model_getMesh;}
		static Dynamic hx_Model_getMeshPartCount;
		static Dynamic &hx_Model_getMeshPartCount_dyn() { return hx_Model_getMeshPartCount;}
		static Dynamic hx_Model_getNode;
		static Dynamic &hx_Model_getNode_dyn() { return hx_Model_getNode;}
		static Dynamic hx_Model_getSkin;
		static Dynamic &hx_Model_getSkin_dyn() { return hx_Model_getSkin;}
		static Dynamic hx_Model_hasMaterial;
		static Dynamic &hx_Model_hasMaterial_dyn() { return hx_Model_hasMaterial;}
		static Dynamic hx_Model_setMaterial_Str_Int;
		static Dynamic &hx_Model_setMaterial_Str_Int_dyn() { return hx_Model_setMaterial_Str_Int;}
		static Dynamic hx_Model_setMaterial_StrX3_Int;
		static Dynamic &hx_Model_setMaterial_StrX3_Int_dyn() { return hx_Model_setMaterial_StrX3_Int;}
		static Dynamic hx_Model_setMaterial_Mtrl_Int;
		static Dynamic &hx_Model_setMaterial_Mtrl_Int_dyn() { return hx_Model_setMaterial_Mtrl_Int;}
		static Dynamic hx_Model_setNode;
		static Dynamic &hx_Model_setNode_dyn() { return hx_Model_setNode;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_Model */ 
