#ifndef INCLUDED_org_gameplay3d_Scene
#define INCLUDED_org_gameplay3d_Scene

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
#include <org/gameplay3d/Ref.h>
HX_DECLARE_CLASS2(org,gameplay3d,AnimationTarget)
HX_DECLARE_CLASS2(org,gameplay3d,Camera)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Node)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS2(org,gameplay3d,Scene)
HX_DECLARE_CLASS2(org,gameplay3d,ScriptTarget)
HX_DECLARE_CLASS2(org,gameplay3d,Transform)
HX_DECLARE_CLASS2(org,gameplay3d,Transform_Listener)
HX_DECLARE_CLASS2(org,gameplay3d,Vector3)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector3)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,AnimationTarget_ScriptTarget)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,Transform_ListenerImpl)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  Scene_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef Scene_obj OBJ_;
		Scene_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Scene_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Scene_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::org::gameplay3d::intern::INativeBinding_obj *()
			{ return new ::org::gameplay3d::intern::INativeBinding_delegate_< Scene_obj >(this); }
		inline operator ::org::gameplay3d::Ref_obj *()
			{ return new ::org::gameplay3d::Ref_delegate_< Scene_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("Scene"); }

		::org::gameplay3d::Vector3 _ambientColor;
		virtual ::org::gameplay3d::Node addNode_Str( ::String id);
		Dynamic addNode_Str_dyn();

		virtual Void addNode_Node( ::org::gameplay3d::Node node);
		Dynamic addNode_Node_dyn();

		virtual Void bindAudioListenerToCamera( bool bind);
		Dynamic bindAudioListenerToCamera_dyn();

		virtual Void drawDebug( int debugFlags);
		Dynamic drawDebug_dyn();

		virtual ::org::gameplay3d::Node findNode( ::String id,hx::Null< bool >  recursive,hx::Null< bool >  exactMatch);
		Dynamic findNode_dyn();

		virtual int findNodes( ::String id,Dynamic nodes,hx::Null< bool >  recursive,hx::Null< bool >  exactMatch);
		Dynamic findNodes_dyn();

		virtual ::org::gameplay3d::Camera getActiveCamera( );
		Dynamic getActiveCamera_dyn();

		virtual ::org::gameplay3d::immutable::IVector3 getAmbientColor( );
		Dynamic getAmbientColor_dyn();

		virtual ::org::gameplay3d::Node getFirstNode( );
		Dynamic getFirstNode_dyn();

		virtual ::String getId( );
		Dynamic getId_dyn();

		virtual int getNodeCount( );
		Dynamic getNodeCount_dyn();

		virtual Void removeAllNodes( );
		Dynamic removeAllNodes_dyn();

		virtual Void removeNode( ::org::gameplay3d::Node node);
		Dynamic removeNode_dyn();

		virtual Void setActiveCamera( ::org::gameplay3d::Camera camera);
		Dynamic setActiveCamera_dyn();

		virtual Void setAmbientColor( Float red,Float green,Float blue);
		Dynamic setAmbientColor_dyn();

		virtual Void setId( ::String id);
		Dynamic setId_dyn();

		virtual Void visit_Str( ::String visitMethod);
		Dynamic visit_Str_dyn();

		virtual Void visit_Func( Dynamic visitMethod);
		Dynamic visit_Func_dyn();

		virtual Void visit_Func_Int( Dynamic visitMethod,int cookie);
		Dynamic visit_Func_Int_dyn();

		Dynamic clbkVisitMethod_Node;
		Dynamic &clbkVisitMethod_Node_dyn() { return clbkVisitMethod_Node;}
		Dynamic clbkVisitMethod_Node_Int;
		Dynamic &clbkVisitMethod_Node_Int_dyn() { return clbkVisitMethod_Node_Int;}
		virtual bool visitMethod_Node( Dynamic node);
		Dynamic visitMethod_Node_dyn();

		virtual bool visitMethod_Node_Int( Dynamic node,int cookie);
		Dynamic visitMethod_Node_Int_dyn();

		static ::org::gameplay3d::Scene create( );
		static Dynamic create_dyn();

		static ::org::gameplay3d::Scene load( ::String filePath);
		static Dynamic load_dyn();

		static Dynamic hx_Scene_addNode_Str;
		static Dynamic &hx_Scene_addNode_Str_dyn() { return hx_Scene_addNode_Str;}
		static Dynamic hx_Scene_addNode_Node;
		static Dynamic &hx_Scene_addNode_Node_dyn() { return hx_Scene_addNode_Node;}
		static Dynamic hx_Scene_bindAudioListenerToCamera;
		static Dynamic &hx_Scene_bindAudioListenerToCamera_dyn() { return hx_Scene_bindAudioListenerToCamera;}
		static Dynamic hx_Scene_static_create;
		static Dynamic &hx_Scene_static_create_dyn() { return hx_Scene_static_create;}
		static Dynamic hx_Scene_drawDebug;
		static Dynamic &hx_Scene_drawDebug_dyn() { return hx_Scene_drawDebug;}
		static Dynamic hx_Scene_findNode;
		static Dynamic &hx_Scene_findNode_dyn() { return hx_Scene_findNode;}
		static Dynamic hx_Scene_findNodes;
		static Dynamic &hx_Scene_findNodes_dyn() { return hx_Scene_findNodes;}
		static Dynamic hx_Scene_getActiveCamera;
		static Dynamic &hx_Scene_getActiveCamera_dyn() { return hx_Scene_getActiveCamera;}
		static Dynamic hx_Scene_getAmbientColor;
		static Dynamic &hx_Scene_getAmbientColor_dyn() { return hx_Scene_getAmbientColor;}
		static Dynamic hx_Scene_getFirstNode;
		static Dynamic &hx_Scene_getFirstNode_dyn() { return hx_Scene_getFirstNode;}
		static Dynamic hx_Scene_getId;
		static Dynamic &hx_Scene_getId_dyn() { return hx_Scene_getId;}
		static Dynamic hx_Scene_getNodeCount;
		static Dynamic &hx_Scene_getNodeCount_dyn() { return hx_Scene_getNodeCount;}
		static Dynamic hx_Scene_static_load;
		static Dynamic &hx_Scene_static_load_dyn() { return hx_Scene_static_load;}
		static Dynamic hx_Scene_removeAllNodes;
		static Dynamic &hx_Scene_removeAllNodes_dyn() { return hx_Scene_removeAllNodes;}
		static Dynamic hx_Scene_removeNode;
		static Dynamic &hx_Scene_removeNode_dyn() { return hx_Scene_removeNode;}
		static Dynamic hx_Scene_setActiveCamera;
		static Dynamic &hx_Scene_setActiveCamera_dyn() { return hx_Scene_setActiveCamera;}
		static Dynamic hx_Scene_setAmbientColor;
		static Dynamic &hx_Scene_setAmbientColor_dyn() { return hx_Scene_setAmbientColor;}
		static Dynamic hx_Scene_setId;
		static Dynamic &hx_Scene_setId_dyn() { return hx_Scene_setId;}
		static Dynamic hx_Scene_visit_Str;
		static Dynamic &hx_Scene_visit_Str_dyn() { return hx_Scene_visit_Str;}
		static Dynamic hx_Scene_visit_Func;
		static Dynamic &hx_Scene_visit_Func_dyn() { return hx_Scene_visit_Func;}
		static Dynamic hx_Scene_visit_Func_Int;
		static Dynamic &hx_Scene_visit_Func_Int_dyn() { return hx_Scene_visit_Func_Int;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_Scene */ 
