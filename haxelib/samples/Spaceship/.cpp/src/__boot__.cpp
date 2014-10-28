#include <hxcpp.h>

#include <tk/amadren/Spaceship.h>
#include <org/gameplay3d/wrapper/Transform_ListenerWrapper.h>
#include <org/gameplay3d/wrapper/TimeListenerWrapper.h>
#include <org/gameplay3d/wrapper/PhysicsController_ListenerWrapper.h>
#include <org/gameplay3d/wrapper/PhysicsController_HitFilterWrapper.h>
#include <org/gameplay3d/wrapper/PhysicsCollisionObject_CollisionListenerWrapper.h>
#include <org/gameplay3d/wrapper/Control_ListenerWrapper.h>
#include <org/gameplay3d/wrapper/AnimationClip_ListenerWrapper.h>
#include <org/gameplay3d/wrapper/AIState_ListenerWrapper.h>
#include <org/gameplay3d/wrapper/AIAgent_ListenerWrapper.h>
#include <org/gameplay3d/util/Handle.h>
#include <org/gameplay3d/util/FunctionBinder.h>
#include <org/gameplay3d/intern/Macros.h>
#include <org/gameplay3d/intern/ListenerWrapper.h>
#include <org/gameplay3d/intern/ConversionTools.h>
#include <org/gameplay3d/VerticalLayout.h>
#include <org/gameplay3d/VertexFormat_Element.h>
#include <org/gameplay3d/VertexFormat.h>
#include <org/gameplay3d/VertexAttributeBinding.h>
#include <org/gameplay3d/Vector4.h>
#include <org/gameplay3d/immutable/IVector4.h>
#include <org/gameplay3d/Vector3.h>
#include <org/gameplay3d/immutable/IVector3.h>
#include <org/gameplay3d/Vector2.h>
#include <org/gameplay3d/immutable/IVector2.h>
#include <org/gameplay3d/Uniform.h>
#include <org/gameplay3d/TimeListener.h>
#include <org/gameplay3d/Theme_UVs.h>
#include <org/gameplay3d/immutable/ITheme_UVs.h>
#include <org/gameplay3d/Theme_ThemeImage.h>
#include <org/gameplay3d/Theme_Style.h>
#include <org/gameplay3d/Theme_SideRegions.h>
#include <org/gameplay3d/immutable/ITheme_SideRegions.h>
#include <org/gameplay3d/Theme.h>
#include <org/gameplay3d/Texture_Sampler.h>
#include <org/gameplay3d/Texture_Format.h>
#include <org/gameplay3d/Texture.h>
#include <org/gameplay3d/TextBox.h>
#include <org/gameplay3d/Terrain.h>
#include <org/gameplay3d/Technique.h>
#include <org/gameplay3d/SpriteBatch.h>
#include <org/gameplay3d/Slider.h>
#include <org/gameplay3d/Scene.h>
#include <org/gameplay3d/RenderTarget.h>
#include <org/gameplay3d/RenderState_StateBlock.h>
#include <org/gameplay3d/Rectangle.h>
#include <org/gameplay3d/immutable/IRectangle.h>
#include <org/gameplay3d/Ray.h>
#include <org/gameplay3d/RadioButton.h>
#include <org/gameplay3d/Quaternion.h>
#include <org/gameplay3d/immutable/IQuaternion.h>
#include <org/gameplay3d/Properties.h>
#include <org/gameplay3d/Platform.h>
#include <org/gameplay3d/Plane.h>
#include <org/gameplay3d/immutable/IPlane.h>
#include <org/gameplay3d/PhysicsVehicleWheel.h>
#include <org/gameplay3d/PhysicsVehicle.h>
#include <org/gameplay3d/PhysicsSpringConstraint.h>
#include <org/gameplay3d/PhysicsSocketConstraint.h>
#include <org/gameplay3d/PhysicsRigidBody_Parameters.h>
#include <org/gameplay3d/PhysicsRigidBody.h>
#include <org/gameplay3d/PhysicsHingeConstraint.h>
#include <org/gameplay3d/PhysicsFixedConstraint.h>
#include <org/gameplay3d/PhysicsGenericConstraint.h>
#include <org/gameplay3d/PhysicsController_Listener.h>
#include <org/gameplay3d/PhysicsController_HitResult.h>
#include <org/gameplay3d/PhysicsController_HitFilter.h>
#include <org/gameplay3d/PhysicsController.h>
#include <org/gameplay3d/PhysicsConstraint.h>
#include <org/gameplay3d/PhysicsCollisionShape_Definition.h>
#include <org/gameplay3d/PhysicsCollisionShape.h>
#include <org/gameplay3d/PhysicsCollisionObject_CollisionPair.h>
#include <org/gameplay3d/PhysicsCollisionObject_CollisionListener.h>
#include <org/gameplay3d/PhysicsCharacter.h>
#include <org/gameplay3d/PhysicsGhostObject.h>
#include <org/gameplay3d/PhysicsCollisionObject.h>
#include <org/gameplay3d/Pass.h>
#include <org/gameplay3d/ParticleEmitter.h>
#include <org/gameplay3d/Model.h>
#include <org/gameplay3d/_MeshSkin/MatrixPalette.h>
#include <org/gameplay3d/util/ObjectArray.h>
#include <org/gameplay3d/MeshSkin.h>
#include <org/gameplay3d/MeshPart.h>
#include <org/gameplay3d/Mesh.h>
#include <org/gameplay3d/_Matrix/MatrixEntries.h>
#include <org/gameplay3d/Matrix.h>
#include <org/gameplay3d/immutable/IMatrix.h>
#include <org/gameplay3d/MaterialParameter.h>
#include <org/gameplay3d/intern/impl/AnimationTargetImpl.h>
#include <org/gameplay3d/_MaterialParameter/MaterialParameterArrayBinder_Impl_.h>
#include <org/gameplay3d/_MaterialParameter/MaterialParameterBinder_Impl_.h>
#include <org/gameplay3d/Material.h>
#include <org/gameplay3d/RenderState.h>
#include <org/gameplay3d/Light.h>
#include <org/gameplay3d/Layout_Type.h>
#include <org/gameplay3d/Joystick.h>
#include <org/gameplay3d/Joint.h>
#include <org/gameplay3d/Node.h>
#include <org/gameplay3d/Transform.h>
#include <org/gameplay3d/Image.h>
#include <org/gameplay3d/_HeightField/HeightFieldArray.h>
#include <org/gameplay3d/util/PrimitiveArray.h>
#include <org/gameplay3d/util/IMutableNativeArray.h>
#include <org/gameplay3d/util/INativeArray.h>
#include <org/gameplay3d/HeightField.h>
#include <org/gameplay3d/Gamepad.h>
#include <org/gameplay3d/Game.h>
#include <org/gameplay3d/Frustum.h>
#include <org/gameplay3d/immutable/IFrustum.h>
#include <org/gameplay3d/FrameBuffer.h>
#include <org/gameplay3d/Form.h>
#include <org/gameplay3d/Font_Text.h>
#include <org/gameplay3d/Font_Justify.h>
#include <org/gameplay3d/Font.h>
#include <org/gameplay3d/FlowLayout.h>
#include <org/gameplay3d/Effect.h>
#include <org/gameplay3d/DepthStencilTarget.h>
#include <org/gameplay3d/Curve.h>
#include <org/gameplay3d/Control_State.h>
#include <org/gameplay3d/Control_Listener.h>
#include <org/gameplay3d/Container.h>
#include <org/gameplay3d/CheckBox.h>
#include <org/gameplay3d/Camera.h>
#include <org/gameplay3d/Button.h>
#include <org/gameplay3d/Label.h>
#include <org/gameplay3d/Control.h>
#include <org/gameplay3d/intern/impl/AnimationTarget_ScriptTarget.h>
#include <org/gameplay3d/Bundle.h>
#include <org/gameplay3d/BoundingSphere.h>
#include <org/gameplay3d/immutable/IBoundingSphere.h>
#include <org/gameplay3d/BoundingBox.h>
#include <org/gameplay3d/immutable/IBoundingBox.h>
#include <org/gameplay3d/AudioBuffer.h>
#include <org/gameplay3d/AudioSource.h>
#include <org/gameplay3d/AudioListener.h>
#include <org/gameplay3d/intern/impl/Transform_ListenerImpl.h>
#include <org/gameplay3d/Transform_Listener.h>
#include <org/gameplay3d/AudioController.h>
#include <org/gameplay3d/AnimationValue.h>
#include <org/gameplay3d/AnimationTarget.h>
#include <org/gameplay3d/AnimationController.h>
#include <org/gameplay3d/AnimationClip_Listener.h>
#include <org/gameplay3d/AnimationClip.h>
#include <org/gameplay3d/Animation.h>
#include <org/gameplay3d/AbsoluteLayout.h>
#include <org/gameplay3d/Layout.h>
#include <org/gameplay3d/AIStateMachine.h>
#include <org/gameplay3d/AIState.h>
#include <org/gameplay3d/AIState_Listener.h>
#include <org/gameplay3d/AIMessage.h>
#include <org/gameplay3d/AIController.h>
#include <org/gameplay3d/AIAgent_Listener.h>
#include <org/gameplay3d/AIAgent.h>
#include <org/gameplay3d/Ref.h>
#include <org/gameplay3d/intern/impl/ScriptTargetImpl.h>
#include <org/gameplay3d/ScriptTarget.h>
#include <org/gameplay3d/GameplayObject.h>
#include <org/gameplay3d/intern/NativeBinding.h>
#include <org/gameplay3d/util/NativeInterface.h>
#include <org/gameplay3d/intern/INativeBinding.h>
#include <cpp/vm/WeakRef.h>
#include <cpp/Lib.h>
#include <Type.h>
#include <Std.h>
#include <Reflect.h>
#include <List.h>

void __files__boot();

void __boot_all()
{
__files__boot();
hx::RegisterResources( hx::GetResources() );
::tk::amadren::Spaceship_obj::__register();
::org::gameplay3d::wrapper::Transform_ListenerWrapper_obj::__register();
::org::gameplay3d::wrapper::TimeListenerWrapper_obj::__register();
::org::gameplay3d::wrapper::PhysicsController_ListenerWrapper_obj::__register();
::org::gameplay3d::wrapper::PhysicsController_HitFilterWrapper_obj::__register();
::org::gameplay3d::wrapper::PhysicsCollisionObject_CollisionListenerWrapper_obj::__register();
::org::gameplay3d::wrapper::Control_ListenerWrapper_obj::__register();
::org::gameplay3d::wrapper::AnimationClip_ListenerWrapper_obj::__register();
::org::gameplay3d::wrapper::AIState_ListenerWrapper_obj::__register();
::org::gameplay3d::wrapper::AIAgent_ListenerWrapper_obj::__register();
::org::gameplay3d::util::Handle_obj::__register();
::org::gameplay3d::util::FunctionBinder_obj::__register();
::org::gameplay3d::intern::Macros_obj::__register();
::org::gameplay3d::intern::ListenerWrapper_obj::__register();
::org::gameplay3d::intern::ConversionTools_obj::__register();
::org::gameplay3d::VerticalLayout_obj::__register();
::org::gameplay3d::VertexFormat_Element_obj::__register();
::org::gameplay3d::VertexFormat_obj::__register();
::org::gameplay3d::VertexAttributeBinding_obj::__register();
::org::gameplay3d::Vector4_obj::__register();
::org::gameplay3d::immutable::IVector4_obj::__register();
::org::gameplay3d::Vector3_obj::__register();
::org::gameplay3d::immutable::IVector3_obj::__register();
::org::gameplay3d::Vector2_obj::__register();
::org::gameplay3d::immutable::IVector2_obj::__register();
::org::gameplay3d::Uniform_obj::__register();
::org::gameplay3d::TimeListener_obj::__register();
::org::gameplay3d::Theme_UVs_obj::__register();
::org::gameplay3d::immutable::ITheme_UVs_obj::__register();
::org::gameplay3d::Theme_ThemeImage_obj::__register();
::org::gameplay3d::Theme_Style_obj::__register();
::org::gameplay3d::Theme_SideRegions_obj::__register();
::org::gameplay3d::immutable::ITheme_SideRegions_obj::__register();
::org::gameplay3d::Theme_obj::__register();
::org::gameplay3d::Texture_Sampler_obj::__register();
::org::gameplay3d::Texture_Format_obj::__register();
::org::gameplay3d::Texture_obj::__register();
::org::gameplay3d::TextBox_obj::__register();
::org::gameplay3d::Terrain_obj::__register();
::org::gameplay3d::Technique_obj::__register();
::org::gameplay3d::SpriteBatch_obj::__register();
::org::gameplay3d::Slider_obj::__register();
::org::gameplay3d::Scene_obj::__register();
::org::gameplay3d::RenderTarget_obj::__register();
::org::gameplay3d::RenderState_StateBlock_obj::__register();
::org::gameplay3d::Rectangle_obj::__register();
::org::gameplay3d::immutable::IRectangle_obj::__register();
::org::gameplay3d::Ray_obj::__register();
::org::gameplay3d::RadioButton_obj::__register();
::org::gameplay3d::Quaternion_obj::__register();
::org::gameplay3d::immutable::IQuaternion_obj::__register();
::org::gameplay3d::Properties_obj::__register();
::org::gameplay3d::Platform_obj::__register();
::org::gameplay3d::Plane_obj::__register();
::org::gameplay3d::immutable::IPlane_obj::__register();
::org::gameplay3d::PhysicsVehicleWheel_obj::__register();
::org::gameplay3d::PhysicsVehicle_obj::__register();
::org::gameplay3d::PhysicsSpringConstraint_obj::__register();
::org::gameplay3d::PhysicsSocketConstraint_obj::__register();
::org::gameplay3d::PhysicsRigidBody_Parameters_obj::__register();
::org::gameplay3d::PhysicsRigidBody_obj::__register();
::org::gameplay3d::PhysicsHingeConstraint_obj::__register();
::org::gameplay3d::PhysicsFixedConstraint_obj::__register();
::org::gameplay3d::PhysicsGenericConstraint_obj::__register();
::org::gameplay3d::PhysicsController_Listener_obj::__register();
::org::gameplay3d::PhysicsController_HitResult_obj::__register();
::org::gameplay3d::PhysicsController_HitFilter_obj::__register();
::org::gameplay3d::PhysicsController_obj::__register();
::org::gameplay3d::PhysicsConstraint_obj::__register();
::org::gameplay3d::PhysicsCollisionShape_Definition_obj::__register();
::org::gameplay3d::PhysicsCollisionShape_obj::__register();
::org::gameplay3d::PhysicsCollisionObject_CollisionPair_obj::__register();
::org::gameplay3d::PhysicsCollisionObject_CollisionListener_obj::__register();
::org::gameplay3d::PhysicsCharacter_obj::__register();
::org::gameplay3d::PhysicsGhostObject_obj::__register();
::org::gameplay3d::PhysicsCollisionObject_obj::__register();
::org::gameplay3d::Pass_obj::__register();
::org::gameplay3d::ParticleEmitter_obj::__register();
::org::gameplay3d::Model_obj::__register();
::org::gameplay3d::_MeshSkin::MatrixPalette_obj::__register();
::org::gameplay3d::util::ObjectArray_obj::__register();
::org::gameplay3d::MeshSkin_obj::__register();
::org::gameplay3d::MeshPart_obj::__register();
::org::gameplay3d::Mesh_obj::__register();
::org::gameplay3d::_Matrix::MatrixEntries_obj::__register();
::org::gameplay3d::Matrix_obj::__register();
::org::gameplay3d::immutable::IMatrix_obj::__register();
::org::gameplay3d::MaterialParameter_obj::__register();
::org::gameplay3d::intern::impl::AnimationTargetImpl_obj::__register();
::org::gameplay3d::_MaterialParameter::MaterialParameterArrayBinder_Impl__obj::__register();
::org::gameplay3d::_MaterialParameter::MaterialParameterBinder_Impl__obj::__register();
::org::gameplay3d::Material_obj::__register();
::org::gameplay3d::RenderState_obj::__register();
::org::gameplay3d::Light_obj::__register();
::org::gameplay3d::Layout_Type_obj::__register();
::org::gameplay3d::Joystick_obj::__register();
::org::gameplay3d::Joint_obj::__register();
::org::gameplay3d::Node_obj::__register();
::org::gameplay3d::Transform_obj::__register();
::org::gameplay3d::Image_obj::__register();
::org::gameplay3d::_HeightField::HeightFieldArray_obj::__register();
::org::gameplay3d::util::PrimitiveArray_obj::__register();
::org::gameplay3d::util::IMutableNativeArray_obj::__register();
::org::gameplay3d::util::INativeArray_obj::__register();
::org::gameplay3d::HeightField_obj::__register();
::org::gameplay3d::Gamepad_obj::__register();
::org::gameplay3d::Game_obj::__register();
::org::gameplay3d::Frustum_obj::__register();
::org::gameplay3d::immutable::IFrustum_obj::__register();
::org::gameplay3d::FrameBuffer_obj::__register();
::org::gameplay3d::Form_obj::__register();
::org::gameplay3d::Font_Text_obj::__register();
::org::gameplay3d::Font_Justify_obj::__register();
::org::gameplay3d::Font_obj::__register();
::org::gameplay3d::FlowLayout_obj::__register();
::org::gameplay3d::Effect_obj::__register();
::org::gameplay3d::DepthStencilTarget_obj::__register();
::org::gameplay3d::Curve_obj::__register();
::org::gameplay3d::Control_State_obj::__register();
::org::gameplay3d::Control_Listener_obj::__register();
::org::gameplay3d::Container_obj::__register();
::org::gameplay3d::CheckBox_obj::__register();
::org::gameplay3d::Camera_obj::__register();
::org::gameplay3d::Button_obj::__register();
::org::gameplay3d::Label_obj::__register();
::org::gameplay3d::Control_obj::__register();
::org::gameplay3d::intern::impl::AnimationTarget_ScriptTarget_obj::__register();
::org::gameplay3d::Bundle_obj::__register();
::org::gameplay3d::BoundingSphere_obj::__register();
::org::gameplay3d::immutable::IBoundingSphere_obj::__register();
::org::gameplay3d::BoundingBox_obj::__register();
::org::gameplay3d::immutable::IBoundingBox_obj::__register();
::org::gameplay3d::AudioBuffer_obj::__register();
::org::gameplay3d::AudioSource_obj::__register();
::org::gameplay3d::AudioListener_obj::__register();
::org::gameplay3d::intern::impl::Transform_ListenerImpl_obj::__register();
::org::gameplay3d::Transform_Listener_obj::__register();
::org::gameplay3d::AudioController_obj::__register();
::org::gameplay3d::AnimationValue_obj::__register();
::org::gameplay3d::AnimationTarget_obj::__register();
::org::gameplay3d::AnimationController_obj::__register();
::org::gameplay3d::AnimationClip_Listener_obj::__register();
::org::gameplay3d::AnimationClip_obj::__register();
::org::gameplay3d::Animation_obj::__register();
::org::gameplay3d::AbsoluteLayout_obj::__register();
::org::gameplay3d::Layout_obj::__register();
::org::gameplay3d::AIStateMachine_obj::__register();
::org::gameplay3d::AIState_obj::__register();
::org::gameplay3d::AIState_Listener_obj::__register();
::org::gameplay3d::AIMessage_obj::__register();
::org::gameplay3d::AIController_obj::__register();
::org::gameplay3d::AIAgent_Listener_obj::__register();
::org::gameplay3d::AIAgent_obj::__register();
::org::gameplay3d::Ref_obj::__register();
::org::gameplay3d::intern::impl::ScriptTargetImpl_obj::__register();
::org::gameplay3d::ScriptTarget_obj::__register();
::org::gameplay3d::GameplayObject_obj::__register();
::org::gameplay3d::intern::NativeBinding_obj::__register();
::org::gameplay3d::util::NativeInterface_obj::__register();
::org::gameplay3d::intern::INativeBinding_obj::__register();
::cpp::vm::WeakRef_obj::__register();
::cpp::Lib_obj::__register();
::Type_obj::__register();
::Std_obj::__register();
::Reflect_obj::__register();
::List_obj::__register();
::cpp::Lib_obj::__boot();
::cpp::vm::WeakRef_obj::__boot();
::List_obj::__boot();
::Reflect_obj::__boot();
::Std_obj::__boot();
::Type_obj::__boot();
::org::gameplay3d::intern::INativeBinding_obj::__boot();
::org::gameplay3d::util::NativeInterface_obj::__boot();
::org::gameplay3d::intern::NativeBinding_obj::__boot();
::org::gameplay3d::GameplayObject_obj::__boot();
::org::gameplay3d::ScriptTarget_obj::__boot();
::org::gameplay3d::intern::impl::ScriptTargetImpl_obj::__boot();
::org::gameplay3d::Ref_obj::__boot();
::org::gameplay3d::AIAgent_obj::__boot();
::org::gameplay3d::AIAgent_Listener_obj::__boot();
::org::gameplay3d::AIController_obj::__boot();
::org::gameplay3d::AIMessage_obj::__boot();
::org::gameplay3d::AIState_Listener_obj::__boot();
::org::gameplay3d::AIState_obj::__boot();
::org::gameplay3d::AIStateMachine_obj::__boot();
::org::gameplay3d::Layout_obj::__boot();
::org::gameplay3d::AbsoluteLayout_obj::__boot();
::org::gameplay3d::Animation_obj::__boot();
::org::gameplay3d::AnimationClip_obj::__boot();
::org::gameplay3d::AnimationClip_Listener_obj::__boot();
::org::gameplay3d::AnimationController_obj::__boot();
::org::gameplay3d::AnimationTarget_obj::__boot();
::org::gameplay3d::AnimationValue_obj::__boot();
::org::gameplay3d::AudioController_obj::__boot();
::org::gameplay3d::Transform_Listener_obj::__boot();
::org::gameplay3d::intern::impl::Transform_ListenerImpl_obj::__boot();
::org::gameplay3d::AudioListener_obj::__boot();
::org::gameplay3d::AudioSource_obj::__boot();
::org::gameplay3d::AudioBuffer_obj::__boot();
::org::gameplay3d::immutable::IBoundingBox_obj::__boot();
::org::gameplay3d::BoundingBox_obj::__boot();
::org::gameplay3d::immutable::IBoundingSphere_obj::__boot();
::org::gameplay3d::BoundingSphere_obj::__boot();
::org::gameplay3d::Bundle_obj::__boot();
::org::gameplay3d::intern::impl::AnimationTarget_ScriptTarget_obj::__boot();
::org::gameplay3d::Control_obj::__boot();
::org::gameplay3d::Label_obj::__boot();
::org::gameplay3d::Button_obj::__boot();
::org::gameplay3d::Camera_obj::__boot();
::org::gameplay3d::CheckBox_obj::__boot();
::org::gameplay3d::Container_obj::__boot();
::org::gameplay3d::Control_Listener_obj::__boot();
::org::gameplay3d::Control_State_obj::__boot();
::org::gameplay3d::Curve_obj::__boot();
::org::gameplay3d::DepthStencilTarget_obj::__boot();
::org::gameplay3d::Effect_obj::__boot();
::org::gameplay3d::FlowLayout_obj::__boot();
::org::gameplay3d::Font_obj::__boot();
::org::gameplay3d::Font_Justify_obj::__boot();
::org::gameplay3d::Font_Text_obj::__boot();
::org::gameplay3d::Form_obj::__boot();
::org::gameplay3d::FrameBuffer_obj::__boot();
::org::gameplay3d::immutable::IFrustum_obj::__boot();
::org::gameplay3d::Frustum_obj::__boot();
::org::gameplay3d::Game_obj::__boot();
::org::gameplay3d::Gamepad_obj::__boot();
::org::gameplay3d::HeightField_obj::__boot();
::org::gameplay3d::util::INativeArray_obj::__boot();
::org::gameplay3d::util::IMutableNativeArray_obj::__boot();
::org::gameplay3d::util::PrimitiveArray_obj::__boot();
::org::gameplay3d::_HeightField::HeightFieldArray_obj::__boot();
::org::gameplay3d::Image_obj::__boot();
::org::gameplay3d::Transform_obj::__boot();
::org::gameplay3d::Node_obj::__boot();
::org::gameplay3d::Joint_obj::__boot();
::org::gameplay3d::Joystick_obj::__boot();
::org::gameplay3d::Layout_Type_obj::__boot();
::org::gameplay3d::Light_obj::__boot();
::org::gameplay3d::RenderState_obj::__boot();
::org::gameplay3d::Material_obj::__boot();
::org::gameplay3d::_MaterialParameter::MaterialParameterBinder_Impl__obj::__boot();
::org::gameplay3d::_MaterialParameter::MaterialParameterArrayBinder_Impl__obj::__boot();
::org::gameplay3d::intern::impl::AnimationTargetImpl_obj::__boot();
::org::gameplay3d::MaterialParameter_obj::__boot();
::org::gameplay3d::immutable::IMatrix_obj::__boot();
::org::gameplay3d::Matrix_obj::__boot();
::org::gameplay3d::_Matrix::MatrixEntries_obj::__boot();
::org::gameplay3d::Mesh_obj::__boot();
::org::gameplay3d::MeshPart_obj::__boot();
::org::gameplay3d::MeshSkin_obj::__boot();
::org::gameplay3d::util::ObjectArray_obj::__boot();
::org::gameplay3d::_MeshSkin::MatrixPalette_obj::__boot();
::org::gameplay3d::Model_obj::__boot();
::org::gameplay3d::ParticleEmitter_obj::__boot();
::org::gameplay3d::Pass_obj::__boot();
::org::gameplay3d::PhysicsCollisionObject_obj::__boot();
::org::gameplay3d::PhysicsGhostObject_obj::__boot();
::org::gameplay3d::PhysicsCharacter_obj::__boot();
::org::gameplay3d::PhysicsCollisionObject_CollisionListener_obj::__boot();
::org::gameplay3d::PhysicsCollisionObject_CollisionPair_obj::__boot();
::org::gameplay3d::PhysicsCollisionShape_obj::__boot();
::org::gameplay3d::PhysicsCollisionShape_Definition_obj::__boot();
::org::gameplay3d::PhysicsConstraint_obj::__boot();
::org::gameplay3d::PhysicsController_obj::__boot();
::org::gameplay3d::PhysicsController_HitFilter_obj::__boot();
::org::gameplay3d::PhysicsController_HitResult_obj::__boot();
::org::gameplay3d::PhysicsController_Listener_obj::__boot();
::org::gameplay3d::PhysicsGenericConstraint_obj::__boot();
::org::gameplay3d::PhysicsFixedConstraint_obj::__boot();
::org::gameplay3d::PhysicsHingeConstraint_obj::__boot();
::org::gameplay3d::PhysicsRigidBody_obj::__boot();
::org::gameplay3d::PhysicsRigidBody_Parameters_obj::__boot();
::org::gameplay3d::PhysicsSocketConstraint_obj::__boot();
::org::gameplay3d::PhysicsSpringConstraint_obj::__boot();
::org::gameplay3d::PhysicsVehicle_obj::__boot();
::org::gameplay3d::PhysicsVehicleWheel_obj::__boot();
::org::gameplay3d::immutable::IPlane_obj::__boot();
::org::gameplay3d::Plane_obj::__boot();
::org::gameplay3d::Platform_obj::__boot();
::org::gameplay3d::Properties_obj::__boot();
::org::gameplay3d::immutable::IQuaternion_obj::__boot();
::org::gameplay3d::Quaternion_obj::__boot();
::org::gameplay3d::RadioButton_obj::__boot();
::org::gameplay3d::Ray_obj::__boot();
::org::gameplay3d::immutable::IRectangle_obj::__boot();
::org::gameplay3d::Rectangle_obj::__boot();
::org::gameplay3d::RenderState_StateBlock_obj::__boot();
::org::gameplay3d::RenderTarget_obj::__boot();
::org::gameplay3d::Scene_obj::__boot();
::org::gameplay3d::Slider_obj::__boot();
::org::gameplay3d::SpriteBatch_obj::__boot();
::org::gameplay3d::Technique_obj::__boot();
::org::gameplay3d::Terrain_obj::__boot();
::org::gameplay3d::TextBox_obj::__boot();
::org::gameplay3d::Texture_obj::__boot();
::org::gameplay3d::Texture_Format_obj::__boot();
::org::gameplay3d::Texture_Sampler_obj::__boot();
::org::gameplay3d::Theme_obj::__boot();
::org::gameplay3d::immutable::ITheme_SideRegions_obj::__boot();
::org::gameplay3d::Theme_SideRegions_obj::__boot();
::org::gameplay3d::Theme_Style_obj::__boot();
::org::gameplay3d::Theme_ThemeImage_obj::__boot();
::org::gameplay3d::immutable::ITheme_UVs_obj::__boot();
::org::gameplay3d::Theme_UVs_obj::__boot();
::org::gameplay3d::TimeListener_obj::__boot();
::org::gameplay3d::Uniform_obj::__boot();
::org::gameplay3d::immutable::IVector2_obj::__boot();
::org::gameplay3d::Vector2_obj::__boot();
::org::gameplay3d::immutable::IVector3_obj::__boot();
::org::gameplay3d::Vector3_obj::__boot();
::org::gameplay3d::immutable::IVector4_obj::__boot();
::org::gameplay3d::Vector4_obj::__boot();
::org::gameplay3d::VertexAttributeBinding_obj::__boot();
::org::gameplay3d::VertexFormat_obj::__boot();
::org::gameplay3d::VertexFormat_Element_obj::__boot();
::org::gameplay3d::VerticalLayout_obj::__boot();
::org::gameplay3d::intern::ConversionTools_obj::__boot();
::org::gameplay3d::intern::ListenerWrapper_obj::__boot();
::org::gameplay3d::intern::Macros_obj::__boot();
::org::gameplay3d::util::FunctionBinder_obj::__boot();
::org::gameplay3d::util::Handle_obj::__boot();
::org::gameplay3d::wrapper::AIAgent_ListenerWrapper_obj::__boot();
::org::gameplay3d::wrapper::AIState_ListenerWrapper_obj::__boot();
::org::gameplay3d::wrapper::AnimationClip_ListenerWrapper_obj::__boot();
::org::gameplay3d::wrapper::Control_ListenerWrapper_obj::__boot();
::org::gameplay3d::wrapper::PhysicsCollisionObject_CollisionListenerWrapper_obj::__boot();
::org::gameplay3d::wrapper::PhysicsController_HitFilterWrapper_obj::__boot();
::org::gameplay3d::wrapper::PhysicsController_ListenerWrapper_obj::__boot();
::org::gameplay3d::wrapper::TimeListenerWrapper_obj::__boot();
::org::gameplay3d::wrapper::Transform_ListenerWrapper_obj::__boot();
::tk::amadren::Spaceship_obj::__boot();
}

