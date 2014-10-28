#ifndef INCLUDED_org_gameplay3d_GameplayObject
#define INCLUDED_org_gameplay3d_GameplayObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/intern/NativeBinding.h>
HX_DECLARE_CLASS2(org,gameplay3d,AIAgent)
HX_DECLARE_CLASS2(org,gameplay3d,AIController)
HX_DECLARE_CLASS2(org,gameplay3d,AIMessage)
HX_DECLARE_CLASS2(org,gameplay3d,AIState)
HX_DECLARE_CLASS2(org,gameplay3d,AIStateMachine)
HX_DECLARE_CLASS2(org,gameplay3d,Animation)
HX_DECLARE_CLASS2(org,gameplay3d,AnimationClip)
HX_DECLARE_CLASS2(org,gameplay3d,AnimationController)
HX_DECLARE_CLASS2(org,gameplay3d,AnimationTarget)
HX_DECLARE_CLASS2(org,gameplay3d,AudioController)
HX_DECLARE_CLASS2(org,gameplay3d,AudioListener)
HX_DECLARE_CLASS2(org,gameplay3d,AudioSource)
HX_DECLARE_CLASS2(org,gameplay3d,BoundingBox)
HX_DECLARE_CLASS2(org,gameplay3d,BoundingSphere)
HX_DECLARE_CLASS2(org,gameplay3d,Bundle)
HX_DECLARE_CLASS2(org,gameplay3d,Button)
HX_DECLARE_CLASS2(org,gameplay3d,Camera)
HX_DECLARE_CLASS2(org,gameplay3d,CheckBox)
HX_DECLARE_CLASS2(org,gameplay3d,Container)
HX_DECLARE_CLASS2(org,gameplay3d,Control)
HX_DECLARE_CLASS2(org,gameplay3d,Curve)
HX_DECLARE_CLASS2(org,gameplay3d,DepthStencilTarget)
HX_DECLARE_CLASS2(org,gameplay3d,Effect)
HX_DECLARE_CLASS2(org,gameplay3d,Font)
HX_DECLARE_CLASS2(org,gameplay3d,Font_Text)
HX_DECLARE_CLASS2(org,gameplay3d,Form)
HX_DECLARE_CLASS2(org,gameplay3d,FrameBuffer)
HX_DECLARE_CLASS2(org,gameplay3d,Frustum)
HX_DECLARE_CLASS2(org,gameplay3d,Game)
HX_DECLARE_CLASS2(org,gameplay3d,Gamepad)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,HeightField)
HX_DECLARE_CLASS2(org,gameplay3d,Image)
HX_DECLARE_CLASS2(org,gameplay3d,Joint)
HX_DECLARE_CLASS2(org,gameplay3d,Joystick)
HX_DECLARE_CLASS2(org,gameplay3d,Label)
HX_DECLARE_CLASS2(org,gameplay3d,Layout)
HX_DECLARE_CLASS2(org,gameplay3d,Light)
HX_DECLARE_CLASS2(org,gameplay3d,Material)
HX_DECLARE_CLASS2(org,gameplay3d,MaterialParameter)
HX_DECLARE_CLASS2(org,gameplay3d,Matrix)
HX_DECLARE_CLASS2(org,gameplay3d,Mesh)
HX_DECLARE_CLASS2(org,gameplay3d,MeshPart)
HX_DECLARE_CLASS2(org,gameplay3d,MeshSkin)
HX_DECLARE_CLASS2(org,gameplay3d,Model)
HX_DECLARE_CLASS2(org,gameplay3d,Node)
HX_DECLARE_CLASS2(org,gameplay3d,ParticleEmitter)
HX_DECLARE_CLASS2(org,gameplay3d,Pass)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsCharacter)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsCollisionObject)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsCollisionObject_CollisionPair)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsCollisionShape)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsCollisionShape_Definition)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsConstraint)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsController)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsController_HitResult)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsFixedConstraint)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsGenericConstraint)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsGhostObject)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsHingeConstraint)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsRigidBody)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsSocketConstraint)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsSpringConstraint)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsVehicle)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsVehicleWheel)
HX_DECLARE_CLASS2(org,gameplay3d,Plane)
HX_DECLARE_CLASS2(org,gameplay3d,Platform)
HX_DECLARE_CLASS2(org,gameplay3d,Properties)
HX_DECLARE_CLASS2(org,gameplay3d,Quaternion)
HX_DECLARE_CLASS2(org,gameplay3d,RadioButton)
HX_DECLARE_CLASS2(org,gameplay3d,Rectangle)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS2(org,gameplay3d,RenderState)
HX_DECLARE_CLASS2(org,gameplay3d,RenderState_StateBlock)
HX_DECLARE_CLASS2(org,gameplay3d,RenderTarget)
HX_DECLARE_CLASS2(org,gameplay3d,Scene)
HX_DECLARE_CLASS2(org,gameplay3d,ScriptTarget)
HX_DECLARE_CLASS2(org,gameplay3d,Slider)
HX_DECLARE_CLASS2(org,gameplay3d,SpriteBatch)
HX_DECLARE_CLASS2(org,gameplay3d,Technique)
HX_DECLARE_CLASS2(org,gameplay3d,Terrain)
HX_DECLARE_CLASS2(org,gameplay3d,Texture)
HX_DECLARE_CLASS2(org,gameplay3d,Texture_Sampler)
HX_DECLARE_CLASS2(org,gameplay3d,Theme)
HX_DECLARE_CLASS2(org,gameplay3d,Theme_SideRegions)
HX_DECLARE_CLASS2(org,gameplay3d,Theme_Style)
HX_DECLARE_CLASS2(org,gameplay3d,Theme_UVs)
HX_DECLARE_CLASS2(org,gameplay3d,Transform)
HX_DECLARE_CLASS2(org,gameplay3d,Transform_Listener)
HX_DECLARE_CLASS2(org,gameplay3d,Uniform)
HX_DECLARE_CLASS2(org,gameplay3d,Vector2)
HX_DECLARE_CLASS2(org,gameplay3d,Vector3)
HX_DECLARE_CLASS2(org,gameplay3d,Vector4)
HX_DECLARE_CLASS2(org,gameplay3d,VertexAttributeBinding)
HX_DECLARE_CLASS2(org,gameplay3d,VertexFormat)
HX_DECLARE_CLASS2(org,gameplay3d,VertexFormat_Element)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IBoundingBox)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IBoundingSphere)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IFrustum)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IMatrix)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IPlane)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IQuaternion)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IRectangle)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,ITheme_SideRegions)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,ITheme_UVs)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector2)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector3)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector4)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,AnimationTargetImpl)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,AnimationTarget_ScriptTarget)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,ScriptTargetImpl)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,Transform_ListenerImpl)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  GameplayObject_obj : public ::org::gameplay3d::intern::NativeBinding_obj{
	public:
		typedef ::org::gameplay3d::intern::NativeBinding_obj super;
		typedef GameplayObject_obj OBJ_;
		GameplayObject_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GameplayObject_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GameplayObject_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("GameplayObject"); }

		static Dynamic wrap_castTo_T( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_castTo_T_dyn();

		static ::org::gameplay3d::PhysicsController wrap_org_gameplay3d_PhysicsController( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_PhysicsController_dyn();

		static ::org::gameplay3d::Game wrap_org_gameplay3d_Game( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_Game_dyn();

		static ::org::gameplay3d::Gamepad wrap_org_gameplay3d_Gamepad( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_Gamepad_dyn();

		static ::org::gameplay3d::AudioController wrap_org_gameplay3d_AudioController( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_AudioController_dyn();

		static ::org::gameplay3d::AnimationController wrap_org_gameplay3d_AnimationController( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_AnimationController_dyn();

		static ::org::gameplay3d::AIController wrap_org_gameplay3d_AIController( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_AIController_dyn();

		static ::org::gameplay3d::Platform wrap_org_gameplay3d_Platform( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_Platform_dyn();

		static ::org::gameplay3d::PhysicsSpringConstraint wrap_org_gameplay3d_PhysicsSpringConstraint( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_PhysicsSpringConstraint_dyn();

		static ::org::gameplay3d::PhysicsSocketConstraint wrap_org_gameplay3d_PhysicsSocketConstraint( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_PhysicsSocketConstraint_dyn();

		static ::org::gameplay3d::PhysicsHingeConstraint wrap_org_gameplay3d_PhysicsHingeConstraint( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_PhysicsHingeConstraint_dyn();

		static ::org::gameplay3d::PhysicsGenericConstraint wrap_org_gameplay3d_PhysicsGenericConstraint( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_PhysicsGenericConstraint_dyn();

		static ::org::gameplay3d::PhysicsFixedConstraint wrap_org_gameplay3d_PhysicsFixedConstraint( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_PhysicsFixedConstraint_dyn();

		static ::org::gameplay3d::PhysicsCollisionShape wrap_org_gameplay3d_PhysicsCollisionShape( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_PhysicsCollisionShape_dyn();

		static ::org::gameplay3d::PhysicsVehicle wrap_org_gameplay3d_PhysicsVehicle( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_PhysicsVehicle_dyn();

		static ::org::gameplay3d::PhysicsGhostObject wrap_org_gameplay3d_PhysicsGhostObject( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_PhysicsGhostObject_dyn();

		static ::org::gameplay3d::PhysicsCharacter wrap_org_gameplay3d_PhysicsCharacter( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_PhysicsCharacter_dyn();

		static ::org::gameplay3d::PhysicsVehicleWheel wrap_org_gameplay3d_PhysicsVehicleWheel( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_PhysicsVehicleWheel_dyn();

		static ::org::gameplay3d::PhysicsRigidBody wrap_org_gameplay3d_PhysicsRigidBody( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_PhysicsRigidBody_dyn();

		static ::org::gameplay3d::PhysicsCollisionObject_CollisionPair wrap_org_gameplay3d_PhysicsCollisionObject_CollisionPair( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_PhysicsCollisionObject_CollisionPair_dyn();

		static ::org::gameplay3d::PhysicsController_HitResult wrap_org_gameplay3d_PhysicsController_HitResult( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_PhysicsController_HitResult_dyn();

		static ::org::gameplay3d::AudioListener wrap_org_gameplay3d_AudioListener( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_AudioListener_dyn();

		static ::org::gameplay3d::Quaternion wrap_org_gameplay3d_Quaternion( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_Quaternion_dyn();

		static ::org::gameplay3d::Transform wrap_org_gameplay3d_Transform( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_Transform_dyn();

		static Dynamic wrap_registerClass_T( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_registerClass_T_dyn();

		static ::org::gameplay3d::VertexFormat_Element wrap_org_gameplay3d_VertexFormat_Element( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_VertexFormat_Element_dyn();

		static ::org::gameplay3d::VertexFormat wrap_org_gameplay3d_VertexFormat( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_VertexFormat_dyn();

		static ::org::gameplay3d::MeshPart wrap_org_gameplay3d_MeshPart( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_MeshPart_dyn();

		static ::org::gameplay3d::Theme_Style wrap_org_gameplay3d_Theme_Style( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_Theme_Style_dyn();

		static ::org::gameplay3d::Theme_UVs wrap_org_gameplay3d_Theme_UVs( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_Theme_UVs_dyn();

		static ::org::gameplay3d::Rectangle wrap_org_gameplay3d_Rectangle( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_Rectangle_dyn();

		static ::org::gameplay3d::Label wrap_org_gameplay3d_Label( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_Label_dyn();

		static ::org::gameplay3d::BoundingBox wrap_org_gameplay3d_BoundingBox( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_BoundingBox_dyn();

		static ::org::gameplay3d::MaterialParameter wrap_org_gameplay3d_MaterialParameter( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_MaterialParameter_dyn();

		static ::org::gameplay3d::Pass wrap_org_gameplay3d_Pass( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_Pass_dyn();

		static ::org::gameplay3d::Slider wrap_org_gameplay3d_Slider( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_Slider_dyn();

		static ::org::gameplay3d::Texture wrap_org_gameplay3d_Texture( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_Texture_dyn();

		static ::org::gameplay3d::Button wrap_org_gameplay3d_Button( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_Button_dyn();

		static ::org::gameplay3d::RadioButton wrap_org_gameplay3d_RadioButton( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_RadioButton_dyn();

		static ::org::gameplay3d::PhysicsCollisionShape_Definition wrap_org_gameplay3d_PhysicsCollisionShape_Definition( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_PhysicsCollisionShape_Definition_dyn();

		static ::org::gameplay3d::VertexAttributeBinding wrap_org_gameplay3d_VertexAttributeBinding( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_VertexAttributeBinding_dyn();

		static ::org::gameplay3d::MeshSkin wrap_org_gameplay3d_MeshSkin( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_MeshSkin_dyn();

		static Dynamic wrap_org_gameplay3d_util_ObjectArray_T( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_util_ObjectArray_T_dyn();

		static ::org::gameplay3d::Joint wrap_org_gameplay3d_Joint( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_Joint_dyn();

		static ::org::gameplay3d::Technique wrap_org_gameplay3d_Technique( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_Technique_dyn();

		static ::org::gameplay3d::Joystick wrap_org_gameplay3d_Joystick( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_Joystick_dyn();

		static ::org::gameplay3d::Terrain wrap_org_gameplay3d_Terrain( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_Terrain_dyn();

		static ::org::gameplay3d::ParticleEmitter wrap_org_gameplay3d_ParticleEmitter( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_ParticleEmitter_dyn();

		static ::org::gameplay3d::Model wrap_org_gameplay3d_Model( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_Model_dyn();

		static ::org::gameplay3d::Light wrap_org_gameplay3d_Light( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_Light_dyn();

		static ::org::gameplay3d::PhysicsCollisionObject wrap_org_gameplay3d_PhysicsCollisionObject( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_PhysicsCollisionObject_dyn();

		static ::org::gameplay3d::BoundingSphere wrap_org_gameplay3d_BoundingSphere( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_BoundingSphere_dyn();

		static ::org::gameplay3d::AudioSource wrap_org_gameplay3d_AudioSource( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_AudioSource_dyn();

		static ::org::gameplay3d::Image wrap_org_gameplay3d_Image( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_Image_dyn();

		static ::org::gameplay3d::HeightField wrap_org_gameplay3d_HeightField( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_HeightField_dyn();

		static ::org::gameplay3d::RenderTarget wrap_org_gameplay3d_RenderTarget( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_RenderTarget_dyn();

		static ::org::gameplay3d::FrameBuffer wrap_org_gameplay3d_FrameBuffer( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_FrameBuffer_dyn();

		static ::org::gameplay3d::Layout wrap_org_gameplay3d_Layout( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_Layout_dyn();

		static ::org::gameplay3d::Container wrap_org_gameplay3d_Container( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_Container_dyn();

		static ::org::gameplay3d::Theme wrap_org_gameplay3d_Theme( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_Theme_dyn();

		static ::org::gameplay3d::Form wrap_org_gameplay3d_Form( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_Form_dyn();

		static ::org::gameplay3d::Font_Text wrap_org_gameplay3d_Font_Text( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_Font_Text_dyn();

		static ::org::gameplay3d::RenderState_StateBlock wrap_org_gameplay3d_RenderState_StateBlock( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_RenderState_StateBlock_dyn();

		static ::org::gameplay3d::Texture_Sampler wrap_org_gameplay3d_Texture_Sampler( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_Texture_Sampler_dyn();

		static ::org::gameplay3d::Material wrap_org_gameplay3d_Material( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_Material_dyn();

		static ::org::gameplay3d::SpriteBatch wrap_org_gameplay3d_SpriteBatch( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_SpriteBatch_dyn();

		static ::org::gameplay3d::Uniform wrap_org_gameplay3d_Uniform( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_Uniform_dyn();

		static ::org::gameplay3d::Effect wrap_org_gameplay3d_Effect( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_Effect_dyn();

		static ::org::gameplay3d::DepthStencilTarget wrap_org_gameplay3d_DepthStencilTarget( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_DepthStencilTarget_dyn();

		static ::org::gameplay3d::Curve wrap_org_gameplay3d_Curve( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_Curve_dyn();

		static ::org::gameplay3d::Vector4 wrap_org_gameplay3d_Vector4( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_Vector4_dyn();

		static ::org::gameplay3d::Vector3 wrap_org_gameplay3d_Vector3( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_Vector3_dyn();

		static ::org::gameplay3d::Vector2 wrap_org_gameplay3d_Vector2( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_Vector2_dyn();

		static ::org::gameplay3d::CheckBox wrap_org_gameplay3d_CheckBox( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_CheckBox_dyn();

		static ::org::gameplay3d::Control wrap_org_gameplay3d_Control( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_Control_dyn();

		static ::org::gameplay3d::Properties wrap_org_gameplay3d_Properties( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_Properties_dyn();

		static ::org::gameplay3d::Theme_SideRegions wrap_org_gameplay3d_Theme_SideRegions( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_Theme_SideRegions_dyn();

		static ::org::gameplay3d::Matrix wrap_org_gameplay3d_Matrix( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_Matrix_dyn();

		static ::org::gameplay3d::Frustum wrap_org_gameplay3d_Frustum( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_Frustum_dyn();

		static ::org::gameplay3d::Camera wrap_org_gameplay3d_Camera( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_Camera_dyn();

		static ::org::gameplay3d::Plane wrap_org_gameplay3d_Plane( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_Plane_dyn();

		static ::org::gameplay3d::Scene wrap_org_gameplay3d_Scene( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_Scene_dyn();

		static ::org::gameplay3d::Node wrap_org_gameplay3d_Node( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_Node_dyn();

		static ::org::gameplay3d::Mesh wrap_org_gameplay3d_Mesh( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_Mesh_dyn();

		static ::org::gameplay3d::Font wrap_org_gameplay3d_Font( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_Font_dyn();

		static ::org::gameplay3d::Bundle wrap_org_gameplay3d_Bundle( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_Bundle_dyn();

		static ::org::gameplay3d::Animation wrap_org_gameplay3d_Animation( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_Animation_dyn();

		static ::org::gameplay3d::AnimationClip wrap_org_gameplay3d_AnimationClip( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_AnimationClip_dyn();

		static ::org::gameplay3d::AIStateMachine wrap_org_gameplay3d_AIStateMachine( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_AIStateMachine_dyn();

		static ::org::gameplay3d::AIAgent wrap_org_gameplay3d_AIAgent( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_AIAgent_dyn();

		static ::org::gameplay3d::AIState wrap_org_gameplay3d_AIState( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_AIState_dyn();

		static ::org::gameplay3d::AIMessage wrap_org_gameplay3d_AIMessage( ::Class classObj,Dynamic nativeObject);
		static Dynamic wrap_org_gameplay3d_AIMessage_dyn();

		static Dynamic args;
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_GameplayObject */ 
