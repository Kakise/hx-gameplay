#ifndef INCLUDED_org_gameplay3d_Node
#define INCLUDED_org_gameplay3d_Node

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/Transform.h>
#include <org/gameplay3d/Ref.h>
HX_DECLARE_CLASS2(org,gameplay3d,AIAgent)
HX_DECLARE_CLASS2(org,gameplay3d,Animation)
HX_DECLARE_CLASS2(org,gameplay3d,AnimationTarget)
HX_DECLARE_CLASS2(org,gameplay3d,AudioSource)
HX_DECLARE_CLASS2(org,gameplay3d,BoundingSphere)
HX_DECLARE_CLASS2(org,gameplay3d,Camera)
HX_DECLARE_CLASS2(org,gameplay3d,Container)
HX_DECLARE_CLASS2(org,gameplay3d,Control)
HX_DECLARE_CLASS2(org,gameplay3d,Form)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Light)
HX_DECLARE_CLASS2(org,gameplay3d,Matrix)
HX_DECLARE_CLASS2(org,gameplay3d,Model)
HX_DECLARE_CLASS2(org,gameplay3d,Node)
HX_DECLARE_CLASS2(org,gameplay3d,ParticleEmitter)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsCollisionObject)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsCollisionShape_Definition)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsRigidBody_Parameters)
HX_DECLARE_CLASS2(org,gameplay3d,Properties)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS2(org,gameplay3d,Scene)
HX_DECLARE_CLASS2(org,gameplay3d,ScriptTarget)
HX_DECLARE_CLASS2(org,gameplay3d,Terrain)
HX_DECLARE_CLASS2(org,gameplay3d,Transform)
HX_DECLARE_CLASS2(org,gameplay3d,Transform_Listener)
HX_DECLARE_CLASS2(org,gameplay3d,Vector3)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IBoundingSphere)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IMatrix)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector3)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,AnimationTarget_ScriptTarget)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,ScriptTargetImpl)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,Transform_ListenerImpl)
HX_DECLARE_CLASS3(org,gameplay3d,util,Handle)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  Node_obj : public ::org::gameplay3d::Transform_obj{
	public:
		typedef ::org::gameplay3d::Transform_obj super;
		typedef Node_obj OBJ_;
		Node_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Node_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Node_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::org::gameplay3d::intern::INativeBinding_obj *()
			{ return new ::org::gameplay3d::intern::INativeBinding_delegate_< Node_obj >(this); }
		inline operator ::org::gameplay3d::Ref_obj *()
			{ return new ::org::gameplay3d::Ref_delegate_< Node_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("Node"); }

		::org::gameplay3d::Vector3 _activeCameraTranslationView;
		::org::gameplay3d::Vector3 _activeCameraTranslationWorld;
		::org::gameplay3d::Vector3 _forwardVectorView;
		::org::gameplay3d::Vector3 _forwardVectorWorld;
		::org::gameplay3d::Vector3 _rightVectorWorld;
		::org::gameplay3d::Vector3 _translationView;
		::org::gameplay3d::Vector3 _translationWorld;
		::org::gameplay3d::Vector3 _upVectorWorld;
		::org::gameplay3d::Matrix _inverseTransposeWorldMatrix;
		::org::gameplay3d::Matrix _inverseTransposeWorldViewMatrix;
		::org::gameplay3d::Matrix _inverseViewMatrix;
		::org::gameplay3d::Matrix _inverseViewProjectionMatrix;
		::org::gameplay3d::Matrix _projectionMatrix;
		::org::gameplay3d::Matrix _viewMatrix;
		::org::gameplay3d::Matrix _viewProjectionMatrix;
		::org::gameplay3d::Matrix _worldMatrix;
		::org::gameplay3d::Matrix _worldViewMatrix;
		::org::gameplay3d::Matrix _worldViewProjectionMatrix;
		::org::gameplay3d::BoundingSphere _boundingSphere;
		virtual Void addAdvertisedDescendant( ::org::gameplay3d::Node node);
		Dynamic addAdvertisedDescendant_dyn();

		virtual Void addChild( ::org::gameplay3d::Node child);
		Dynamic addChild_dyn();

		virtual ::org::gameplay3d::Node clone( );
		Dynamic clone_dyn();

		virtual ::org::gameplay3d::Node findNode( ::String id,hx::Null< bool >  recursive,hx::Null< bool >  exactMatch);
		Dynamic findNode_dyn();

		virtual int findNodes( ::String id,Dynamic nodes,hx::Null< bool >  recursive,hx::Null< bool >  exactMatch);
		Dynamic findNodes_dyn();

		virtual ::org::gameplay3d::Vector3 getActiveCameraTranslationView( );
		Dynamic getActiveCameraTranslationView_dyn();

		virtual ::org::gameplay3d::Vector3 getActiveCameraTranslationWorld( );
		Dynamic getActiveCameraTranslationWorld_dyn();

		virtual ::org::gameplay3d::Node getAdvertisedDescendant( int i);
		Dynamic getAdvertisedDescendant_dyn();

		virtual ::org::gameplay3d::AIAgent getAgent( );
		Dynamic getAgent_dyn();

		virtual ::org::gameplay3d::Animation getAnimation( ::String id);

		virtual ::org::gameplay3d::AudioSource getAudioSource( );
		Dynamic getAudioSource_dyn();

		virtual ::org::gameplay3d::immutable::IBoundingSphere getBoundingSphere( );
		Dynamic getBoundingSphere_dyn();

		virtual ::org::gameplay3d::Camera getCamera( );
		Dynamic getCamera_dyn();

		virtual int getChildCount( );
		Dynamic getChildCount_dyn();

		virtual ::org::gameplay3d::PhysicsCollisionObject getCollisionObject( );
		Dynamic getCollisionObject_dyn();

		virtual ::org::gameplay3d::Node getFirstChild( );
		Dynamic getFirstChild_dyn();

		virtual ::org::gameplay3d::Form getForm( );
		Dynamic getForm_dyn();

		virtual ::org::gameplay3d::Vector3 getForwardVectorView( );
		Dynamic getForwardVectorView_dyn();

		virtual ::org::gameplay3d::Vector3 getForwardVectorWorld( );
		Dynamic getForwardVectorWorld_dyn();

		virtual ::String getId( );
		Dynamic getId_dyn();

		virtual ::org::gameplay3d::immutable::IMatrix getInverseTransposeWorldMatrix( );
		Dynamic getInverseTransposeWorldMatrix_dyn();

		virtual ::org::gameplay3d::immutable::IMatrix getInverseTransposeWorldViewMatrix( );
		Dynamic getInverseTransposeWorldViewMatrix_dyn();

		virtual ::org::gameplay3d::immutable::IMatrix getInverseViewMatrix( );
		Dynamic getInverseViewMatrix_dyn();

		virtual ::org::gameplay3d::immutable::IMatrix getInverseViewProjectionMatrix( );
		Dynamic getInverseViewProjectionMatrix_dyn();

		virtual ::org::gameplay3d::Light getLight( );
		Dynamic getLight_dyn();

		virtual ::org::gameplay3d::Model getModel( );
		Dynamic getModel_dyn();

		virtual ::org::gameplay3d::Node getNextSibling( );
		Dynamic getNextSibling_dyn();

		virtual int getNumAdvertisedDescendants( );
		Dynamic getNumAdvertisedDescendants_dyn();

		virtual ::org::gameplay3d::Node getParent( );
		Dynamic getParent_dyn();

		virtual ::org::gameplay3d::ParticleEmitter getParticleEmitter( );
		Dynamic getParticleEmitter_dyn();

		virtual ::org::gameplay3d::Node getPreviousSibling( );
		Dynamic getPreviousSibling_dyn();

		virtual ::org::gameplay3d::immutable::IMatrix getProjectionMatrix( );
		Dynamic getProjectionMatrix_dyn();

		virtual ::org::gameplay3d::Vector3 getRightVectorWorld( );
		Dynamic getRightVectorWorld_dyn();

		virtual ::org::gameplay3d::Node getRootNode( );
		Dynamic getRootNode_dyn();

		virtual ::org::gameplay3d::Scene getScene( );
		Dynamic getScene_dyn();

		virtual ::String getTag( ::String name);
		Dynamic getTag_dyn();

		virtual ::org::gameplay3d::Terrain getTerrain( );
		Dynamic getTerrain_dyn();

		virtual ::org::gameplay3d::Vector3 getTranslationView( );
		Dynamic getTranslationView_dyn();

		virtual ::org::gameplay3d::Vector3 getTranslationWorld( );
		Dynamic getTranslationWorld_dyn();

		virtual int getType( );
		Dynamic getType_dyn();

		virtual ::org::gameplay3d::Vector3 getUpVectorWorld( );
		Dynamic getUpVectorWorld_dyn();

		virtual ::org::gameplay3d::util::Handle getUserPointer( );
		Dynamic getUserPointer_dyn();

		virtual ::org::gameplay3d::immutable::IMatrix getViewMatrix( );
		Dynamic getViewMatrix_dyn();

		virtual ::org::gameplay3d::immutable::IMatrix getViewProjectionMatrix( );
		Dynamic getViewProjectionMatrix_dyn();

		virtual ::org::gameplay3d::immutable::IMatrix getWorldMatrix( );
		Dynamic getWorldMatrix_dyn();

		virtual ::org::gameplay3d::immutable::IMatrix getWorldViewMatrix( );
		Dynamic getWorldViewMatrix_dyn();

		virtual ::org::gameplay3d::immutable::IMatrix getWorldViewProjectionMatrix( );
		Dynamic getWorldViewProjectionMatrix_dyn();

		virtual bool hasTag( ::String name);
		Dynamic hasTag_dyn();

		virtual Void removeAllChildren( );
		Dynamic removeAllChildren_dyn();

		virtual Void removeChild( ::org::gameplay3d::Node child);
		Dynamic removeChild_dyn();

		virtual Void setAgent( ::org::gameplay3d::AIAgent agent);
		Dynamic setAgent_dyn();

		virtual Void setAudioSource( ::org::gameplay3d::AudioSource audio);
		Dynamic setAudioSource_dyn();

		virtual Void setCamera( ::org::gameplay3d::Camera camera);
		Dynamic setCamera_dyn();

		virtual ::org::gameplay3d::PhysicsCollisionObject setCollisionObject_Int_Def_Param( int type,::org::gameplay3d::PhysicsCollisionShape_Definition shape,::org::gameplay3d::PhysicsRigidBody_Parameters rigidBodyParameters);
		Dynamic setCollisionObject_Int_Def_Param_dyn();

		virtual ::org::gameplay3d::PhysicsCollisionObject setCollisionObject_Prop( ::org::gameplay3d::Properties properties);
		Dynamic setCollisionObject_Prop_dyn();

		virtual ::org::gameplay3d::PhysicsCollisionObject setCollisionObject_Str( ::String url);
		Dynamic setCollisionObject_Str_dyn();

		virtual Void setForm( ::org::gameplay3d::Form form);
		Dynamic setForm_dyn();

		virtual Void setId( ::String id);
		Dynamic setId_dyn();

		virtual Void setLight( ::org::gameplay3d::Light light);
		Dynamic setLight_dyn();

		virtual Void setModel( ::org::gameplay3d::Model model);
		Dynamic setModel_dyn();

		virtual Void setParticleEmitter( ::org::gameplay3d::ParticleEmitter emitter);
		Dynamic setParticleEmitter_dyn();

		virtual Void setTag( ::String name,::String value);
		Dynamic setTag_dyn();

		virtual Void setTerrain( ::org::gameplay3d::Terrain terrain);
		Dynamic setTerrain_dyn();

		virtual Void setUserPointer( ::org::gameplay3d::util::Handle pointer,Dynamic cleanCallback);
		Dynamic setUserPointer_dyn();

		static ::org::gameplay3d::Node create( ::String id);
		static Dynamic create_dyn();

		static Dynamic hx_Node_addAdvertisedDescendant;
		static Dynamic &hx_Node_addAdvertisedDescendant_dyn() { return hx_Node_addAdvertisedDescendant;}
		static Dynamic hx_Node_addChild;
		static Dynamic &hx_Node_addChild_dyn() { return hx_Node_addChild;}
		static Dynamic hx_Node_clone;
		static Dynamic &hx_Node_clone_dyn() { return hx_Node_clone;}
		static Dynamic hx_Node_static_create;
		static Dynamic &hx_Node_static_create_dyn() { return hx_Node_static_create;}
		static Dynamic hx_Node_findNode;
		static Dynamic &hx_Node_findNode_dyn() { return hx_Node_findNode;}
		static Dynamic hx_Node_findNodes;
		static Dynamic &hx_Node_findNodes_dyn() { return hx_Node_findNodes;}
		static Dynamic hx_Node_getActiveCameraTranslationView;
		static Dynamic &hx_Node_getActiveCameraTranslationView_dyn() { return hx_Node_getActiveCameraTranslationView;}
		static Dynamic hx_Node_getActiveCameraTranslationWorld;
		static Dynamic &hx_Node_getActiveCameraTranslationWorld_dyn() { return hx_Node_getActiveCameraTranslationWorld;}
		static Dynamic hx_Node_getAdvertisedDescendant;
		static Dynamic &hx_Node_getAdvertisedDescendant_dyn() { return hx_Node_getAdvertisedDescendant;}
		static Dynamic hx_Node_getAgent;
		static Dynamic &hx_Node_getAgent_dyn() { return hx_Node_getAgent;}
		static Dynamic hx_Node_getAnimation;
		static Dynamic &hx_Node_getAnimation_dyn() { return hx_Node_getAnimation;}
		static Dynamic hx_Node_getAudioSource;
		static Dynamic &hx_Node_getAudioSource_dyn() { return hx_Node_getAudioSource;}
		static Dynamic hx_Node_getBoundingSphere;
		static Dynamic &hx_Node_getBoundingSphere_dyn() { return hx_Node_getBoundingSphere;}
		static Dynamic hx_Node_getCamera;
		static Dynamic &hx_Node_getCamera_dyn() { return hx_Node_getCamera;}
		static Dynamic hx_Node_getChildCount;
		static Dynamic &hx_Node_getChildCount_dyn() { return hx_Node_getChildCount;}
		static Dynamic hx_Node_getCollisionObject;
		static Dynamic &hx_Node_getCollisionObject_dyn() { return hx_Node_getCollisionObject;}
		static Dynamic hx_Node_getFirstChild;
		static Dynamic &hx_Node_getFirstChild_dyn() { return hx_Node_getFirstChild;}
		static Dynamic hx_Node_getForm;
		static Dynamic &hx_Node_getForm_dyn() { return hx_Node_getForm;}
		static Dynamic hx_Node_getForwardVectorView;
		static Dynamic &hx_Node_getForwardVectorView_dyn() { return hx_Node_getForwardVectorView;}
		static Dynamic hx_Node_getForwardVectorWorld;
		static Dynamic &hx_Node_getForwardVectorWorld_dyn() { return hx_Node_getForwardVectorWorld;}
		static Dynamic hx_Node_getId;
		static Dynamic &hx_Node_getId_dyn() { return hx_Node_getId;}
		static Dynamic hx_Node_getInverseTransposeWorldMatrix;
		static Dynamic &hx_Node_getInverseTransposeWorldMatrix_dyn() { return hx_Node_getInverseTransposeWorldMatrix;}
		static Dynamic hx_Node_getInverseTransposeWorldViewMatrix;
		static Dynamic &hx_Node_getInverseTransposeWorldViewMatrix_dyn() { return hx_Node_getInverseTransposeWorldViewMatrix;}
		static Dynamic hx_Node_getInverseViewMatrix;
		static Dynamic &hx_Node_getInverseViewMatrix_dyn() { return hx_Node_getInverseViewMatrix;}
		static Dynamic hx_Node_getInverseViewProjectionMatrix;
		static Dynamic &hx_Node_getInverseViewProjectionMatrix_dyn() { return hx_Node_getInverseViewProjectionMatrix;}
		static Dynamic hx_Node_getLight;
		static Dynamic &hx_Node_getLight_dyn() { return hx_Node_getLight;}
		static Dynamic hx_Node_getModel;
		static Dynamic &hx_Node_getModel_dyn() { return hx_Node_getModel;}
		static Dynamic hx_Node_getNextSibling;
		static Dynamic &hx_Node_getNextSibling_dyn() { return hx_Node_getNextSibling;}
		static Dynamic hx_Node_getNumAdvertisedDescendants;
		static Dynamic &hx_Node_getNumAdvertisedDescendants_dyn() { return hx_Node_getNumAdvertisedDescendants;}
		static Dynamic hx_Node_getParent;
		static Dynamic &hx_Node_getParent_dyn() { return hx_Node_getParent;}
		static Dynamic hx_Node_getParticleEmitter;
		static Dynamic &hx_Node_getParticleEmitter_dyn() { return hx_Node_getParticleEmitter;}
		static Dynamic hx_Node_getPreviousSibling;
		static Dynamic &hx_Node_getPreviousSibling_dyn() { return hx_Node_getPreviousSibling;}
		static Dynamic hx_Node_getProjectionMatrix;
		static Dynamic &hx_Node_getProjectionMatrix_dyn() { return hx_Node_getProjectionMatrix;}
		static Dynamic hx_Node_getRightVectorWorld;
		static Dynamic &hx_Node_getRightVectorWorld_dyn() { return hx_Node_getRightVectorWorld;}
		static Dynamic hx_Node_getRootNode;
		static Dynamic &hx_Node_getRootNode_dyn() { return hx_Node_getRootNode;}
		static Dynamic hx_Node_getScene;
		static Dynamic &hx_Node_getScene_dyn() { return hx_Node_getScene;}
		static Dynamic hx_Node_getTag;
		static Dynamic &hx_Node_getTag_dyn() { return hx_Node_getTag;}
		static Dynamic hx_Node_getTerrain;
		static Dynamic &hx_Node_getTerrain_dyn() { return hx_Node_getTerrain;}
		static Dynamic hx_Node_getTranslationView;
		static Dynamic &hx_Node_getTranslationView_dyn() { return hx_Node_getTranslationView;}
		static Dynamic hx_Node_getTranslationWorld;
		static Dynamic &hx_Node_getTranslationWorld_dyn() { return hx_Node_getTranslationWorld;}
		static Dynamic hx_Node_getType;
		static Dynamic &hx_Node_getType_dyn() { return hx_Node_getType;}
		static Dynamic hx_Node_getUpVectorWorld;
		static Dynamic &hx_Node_getUpVectorWorld_dyn() { return hx_Node_getUpVectorWorld;}
		static Dynamic hx_Node_getUserPointer;
		static Dynamic &hx_Node_getUserPointer_dyn() { return hx_Node_getUserPointer;}
		static Dynamic hx_Node_getViewMatrix;
		static Dynamic &hx_Node_getViewMatrix_dyn() { return hx_Node_getViewMatrix;}
		static Dynamic hx_Node_getViewProjectionMatrix;
		static Dynamic &hx_Node_getViewProjectionMatrix_dyn() { return hx_Node_getViewProjectionMatrix;}
		static Dynamic hx_Node_getWorldMatrix;
		static Dynamic &hx_Node_getWorldMatrix_dyn() { return hx_Node_getWorldMatrix;}
		static Dynamic hx_Node_getWorldViewMatrix;
		static Dynamic &hx_Node_getWorldViewMatrix_dyn() { return hx_Node_getWorldViewMatrix;}
		static Dynamic hx_Node_getWorldViewProjectionMatrix;
		static Dynamic &hx_Node_getWorldViewProjectionMatrix_dyn() { return hx_Node_getWorldViewProjectionMatrix;}
		static Dynamic hx_Node_hasTag;
		static Dynamic &hx_Node_hasTag_dyn() { return hx_Node_hasTag;}
		static Dynamic hx_Node_removeAllChildren;
		static Dynamic &hx_Node_removeAllChildren_dyn() { return hx_Node_removeAllChildren;}
		static Dynamic hx_Node_removeChild;
		static Dynamic &hx_Node_removeChild_dyn() { return hx_Node_removeChild;}
		static Dynamic hx_Node_setAgent;
		static Dynamic &hx_Node_setAgent_dyn() { return hx_Node_setAgent;}
		static Dynamic hx_Node_setAudioSource;
		static Dynamic &hx_Node_setAudioSource_dyn() { return hx_Node_setAudioSource;}
		static Dynamic hx_Node_setCamera;
		static Dynamic &hx_Node_setCamera_dyn() { return hx_Node_setCamera;}
		static Dynamic hx_Node_setCollisionObject_Int_Def_Param;
		static Dynamic &hx_Node_setCollisionObject_Int_Def_Param_dyn() { return hx_Node_setCollisionObject_Int_Def_Param;}
		static Dynamic hx_Node_setCollisionObject_Prop;
		static Dynamic &hx_Node_setCollisionObject_Prop_dyn() { return hx_Node_setCollisionObject_Prop;}
		static Dynamic hx_Node_setCollisionObject_Str;
		static Dynamic &hx_Node_setCollisionObject_Str_dyn() { return hx_Node_setCollisionObject_Str;}
		static Dynamic hx_Node_setForm;
		static Dynamic &hx_Node_setForm_dyn() { return hx_Node_setForm;}
		static Dynamic hx_Node_setId;
		static Dynamic &hx_Node_setId_dyn() { return hx_Node_setId;}
		static Dynamic hx_Node_setLight;
		static Dynamic &hx_Node_setLight_dyn() { return hx_Node_setLight;}
		static Dynamic hx_Node_setModel;
		static Dynamic &hx_Node_setModel_dyn() { return hx_Node_setModel;}
		static Dynamic hx_Node_setParticleEmitter;
		static Dynamic &hx_Node_setParticleEmitter_dyn() { return hx_Node_setParticleEmitter;}
		static Dynamic hx_Node_setTag;
		static Dynamic &hx_Node_setTag_dyn() { return hx_Node_setTag;}
		static Dynamic hx_Node_setTerrain;
		static Dynamic &hx_Node_setTerrain_dyn() { return hx_Node_setTerrain;}
		static Dynamic hx_Node_setUserPointer;
		static Dynamic &hx_Node_setUserPointer_dyn() { return hx_Node_setUserPointer;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_Node */ 
