#ifndef INCLUDED_org_gameplay3d_Bundle
#define INCLUDED_org_gameplay3d_Bundle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
#include <org/gameplay3d/Ref.h>
HX_DECLARE_CLASS2(org,gameplay3d,AnimationTarget)
HX_DECLARE_CLASS2(org,gameplay3d,Bundle)
HX_DECLARE_CLASS2(org,gameplay3d,Font)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Mesh)
HX_DECLARE_CLASS2(org,gameplay3d,Node)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS2(org,gameplay3d,Scene)
HX_DECLARE_CLASS2(org,gameplay3d,ScriptTarget)
HX_DECLARE_CLASS2(org,gameplay3d,Transform)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,AnimationTarget_ScriptTarget)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  Bundle_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef Bundle_obj OBJ_;
		Bundle_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Bundle_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Bundle_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		inline operator ::org::gameplay3d::intern::INativeBinding_obj *()
			{ return new ::org::gameplay3d::intern::INativeBinding_delegate_< Bundle_obj >(this); }
		inline operator ::org::gameplay3d::Ref_obj *()
			{ return new ::org::gameplay3d::Ref_delegate_< Bundle_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("Bundle"); }

		virtual bool contains( ::String id);
		Dynamic contains_dyn();

		virtual int getObjectCount( );
		Dynamic getObjectCount_dyn();

		virtual ::String getObjectId( int index);
		Dynamic getObjectId_dyn();

		virtual ::org::gameplay3d::Font loadFont( ::String id);
		Dynamic loadFont_dyn();

		virtual ::org::gameplay3d::Mesh loadMesh( ::String id);
		Dynamic loadMesh_dyn();

		virtual ::org::gameplay3d::Node loadNode( ::String id);
		Dynamic loadNode_dyn();

		virtual ::org::gameplay3d::Scene loadScene( ::String id);
		Dynamic loadScene_dyn();

		static ::org::gameplay3d::Bundle create( ::String path);
		static Dynamic create_dyn();

		static Dynamic hx_Bundle_contains;
		static Dynamic &hx_Bundle_contains_dyn() { return hx_Bundle_contains;}
		static Dynamic hx_Bundle_static_create;
		static Dynamic &hx_Bundle_static_create_dyn() { return hx_Bundle_static_create;}
		static Dynamic hx_Bundle_getObjectCount;
		static Dynamic &hx_Bundle_getObjectCount_dyn() { return hx_Bundle_getObjectCount;}
		static Dynamic hx_Bundle_getObjectId;
		static Dynamic &hx_Bundle_getObjectId_dyn() { return hx_Bundle_getObjectId;}
		static Dynamic hx_Bundle_loadFont;
		static Dynamic &hx_Bundle_loadFont_dyn() { return hx_Bundle_loadFont;}
		static Dynamic hx_Bundle_loadMesh;
		static Dynamic &hx_Bundle_loadMesh_dyn() { return hx_Bundle_loadMesh;}
		static Dynamic hx_Bundle_loadNode;
		static Dynamic &hx_Bundle_loadNode_dyn() { return hx_Bundle_loadNode;}
		static Dynamic hx_Bundle_loadScene;
		static Dynamic &hx_Bundle_loadScene_dyn() { return hx_Bundle_loadScene;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_Bundle */ 
