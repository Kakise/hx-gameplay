#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_cpp_vm_WeakRef
#include <cpp/vm/WeakRef.h>
#endif
#ifndef INCLUDED_org_gameplay3d_AIAgent
#include <org/gameplay3d/AIAgent.h>
#endif
#ifndef INCLUDED_org_gameplay3d_AIController
#include <org/gameplay3d/AIController.h>
#endif
#ifndef INCLUDED_org_gameplay3d_AIMessage
#include <org/gameplay3d/AIMessage.h>
#endif
#ifndef INCLUDED_org_gameplay3d_AIState
#include <org/gameplay3d/AIState.h>
#endif
#ifndef INCLUDED_org_gameplay3d_AIStateMachine
#include <org/gameplay3d/AIStateMachine.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Animation
#include <org/gameplay3d/Animation.h>
#endif
#ifndef INCLUDED_org_gameplay3d_AnimationClip
#include <org/gameplay3d/AnimationClip.h>
#endif
#ifndef INCLUDED_org_gameplay3d_AnimationController
#include <org/gameplay3d/AnimationController.h>
#endif
#ifndef INCLUDED_org_gameplay3d_AnimationTarget
#include <org/gameplay3d/AnimationTarget.h>
#endif
#ifndef INCLUDED_org_gameplay3d_AudioController
#include <org/gameplay3d/AudioController.h>
#endif
#ifndef INCLUDED_org_gameplay3d_AudioListener
#include <org/gameplay3d/AudioListener.h>
#endif
#ifndef INCLUDED_org_gameplay3d_AudioSource
#include <org/gameplay3d/AudioSource.h>
#endif
#ifndef INCLUDED_org_gameplay3d_BoundingBox
#include <org/gameplay3d/BoundingBox.h>
#endif
#ifndef INCLUDED_org_gameplay3d_BoundingSphere
#include <org/gameplay3d/BoundingSphere.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Bundle
#include <org/gameplay3d/Bundle.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Button
#include <org/gameplay3d/Button.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Camera
#include <org/gameplay3d/Camera.h>
#endif
#ifndef INCLUDED_org_gameplay3d_CheckBox
#include <org/gameplay3d/CheckBox.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Container
#include <org/gameplay3d/Container.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Control
#include <org/gameplay3d/Control.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Curve
#include <org/gameplay3d/Curve.h>
#endif
#ifndef INCLUDED_org_gameplay3d_DepthStencilTarget
#include <org/gameplay3d/DepthStencilTarget.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Effect
#include <org/gameplay3d/Effect.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Font
#include <org/gameplay3d/Font.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Font_Text
#include <org/gameplay3d/Font_Text.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Form
#include <org/gameplay3d/Form.h>
#endif
#ifndef INCLUDED_org_gameplay3d_FrameBuffer
#include <org/gameplay3d/FrameBuffer.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Frustum
#include <org/gameplay3d/Frustum.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Game
#include <org/gameplay3d/Game.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Gamepad
#include <org/gameplay3d/Gamepad.h>
#endif
#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_HeightField
#include <org/gameplay3d/HeightField.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Image
#include <org/gameplay3d/Image.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Joint
#include <org/gameplay3d/Joint.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Joystick
#include <org/gameplay3d/Joystick.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Label
#include <org/gameplay3d/Label.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Layout
#include <org/gameplay3d/Layout.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Light
#include <org/gameplay3d/Light.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Material
#include <org/gameplay3d/Material.h>
#endif
#ifndef INCLUDED_org_gameplay3d_MaterialParameter
#include <org/gameplay3d/MaterialParameter.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Matrix
#include <org/gameplay3d/Matrix.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Mesh
#include <org/gameplay3d/Mesh.h>
#endif
#ifndef INCLUDED_org_gameplay3d_MeshPart
#include <org/gameplay3d/MeshPart.h>
#endif
#ifndef INCLUDED_org_gameplay3d_MeshSkin
#include <org/gameplay3d/MeshSkin.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Model
#include <org/gameplay3d/Model.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Node
#include <org/gameplay3d/Node.h>
#endif
#ifndef INCLUDED_org_gameplay3d_ParticleEmitter
#include <org/gameplay3d/ParticleEmitter.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Pass
#include <org/gameplay3d/Pass.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsCharacter
#include <org/gameplay3d/PhysicsCharacter.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsCollisionObject
#include <org/gameplay3d/PhysicsCollisionObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsCollisionObject_CollisionPair
#include <org/gameplay3d/PhysicsCollisionObject_CollisionPair.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsCollisionShape
#include <org/gameplay3d/PhysicsCollisionShape.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsCollisionShape_Definition
#include <org/gameplay3d/PhysicsCollisionShape_Definition.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsConstraint
#include <org/gameplay3d/PhysicsConstraint.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsController
#include <org/gameplay3d/PhysicsController.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsController_HitResult
#include <org/gameplay3d/PhysicsController_HitResult.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsFixedConstraint
#include <org/gameplay3d/PhysicsFixedConstraint.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsGenericConstraint
#include <org/gameplay3d/PhysicsGenericConstraint.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsGhostObject
#include <org/gameplay3d/PhysicsGhostObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsHingeConstraint
#include <org/gameplay3d/PhysicsHingeConstraint.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsRigidBody
#include <org/gameplay3d/PhysicsRigidBody.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsSocketConstraint
#include <org/gameplay3d/PhysicsSocketConstraint.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsSpringConstraint
#include <org/gameplay3d/PhysicsSpringConstraint.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsVehicle
#include <org/gameplay3d/PhysicsVehicle.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsVehicleWheel
#include <org/gameplay3d/PhysicsVehicleWheel.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Plane
#include <org/gameplay3d/Plane.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Platform
#include <org/gameplay3d/Platform.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Properties
#include <org/gameplay3d/Properties.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Quaternion
#include <org/gameplay3d/Quaternion.h>
#endif
#ifndef INCLUDED_org_gameplay3d_RadioButton
#include <org/gameplay3d/RadioButton.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Rectangle
#include <org/gameplay3d/Rectangle.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Ref
#include <org/gameplay3d/Ref.h>
#endif
#ifndef INCLUDED_org_gameplay3d_RenderState
#include <org/gameplay3d/RenderState.h>
#endif
#ifndef INCLUDED_org_gameplay3d_RenderState_StateBlock
#include <org/gameplay3d/RenderState_StateBlock.h>
#endif
#ifndef INCLUDED_org_gameplay3d_RenderTarget
#include <org/gameplay3d/RenderTarget.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Scene
#include <org/gameplay3d/Scene.h>
#endif
#ifndef INCLUDED_org_gameplay3d_ScriptTarget
#include <org/gameplay3d/ScriptTarget.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Slider
#include <org/gameplay3d/Slider.h>
#endif
#ifndef INCLUDED_org_gameplay3d_SpriteBatch
#include <org/gameplay3d/SpriteBatch.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Technique
#include <org/gameplay3d/Technique.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Terrain
#include <org/gameplay3d/Terrain.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Texture
#include <org/gameplay3d/Texture.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Texture_Sampler
#include <org/gameplay3d/Texture_Sampler.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Theme
#include <org/gameplay3d/Theme.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Theme_SideRegions
#include <org/gameplay3d/Theme_SideRegions.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Theme_Style
#include <org/gameplay3d/Theme_Style.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Theme_UVs
#include <org/gameplay3d/Theme_UVs.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Transform
#include <org/gameplay3d/Transform.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Transform_Listener
#include <org/gameplay3d/Transform_Listener.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Uniform
#include <org/gameplay3d/Uniform.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Vector2
#include <org/gameplay3d/Vector2.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Vector3
#include <org/gameplay3d/Vector3.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Vector4
#include <org/gameplay3d/Vector4.h>
#endif
#ifndef INCLUDED_org_gameplay3d_VertexAttributeBinding
#include <org/gameplay3d/VertexAttributeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_VertexFormat
#include <org/gameplay3d/VertexFormat.h>
#endif
#ifndef INCLUDED_org_gameplay3d_VertexFormat_Element
#include <org/gameplay3d/VertexFormat_Element.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IBoundingBox
#include <org/gameplay3d/immutable/IBoundingBox.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IBoundingSphere
#include <org/gameplay3d/immutable/IBoundingSphere.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IFrustum
#include <org/gameplay3d/immutable/IFrustum.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IMatrix
#include <org/gameplay3d/immutable/IMatrix.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IPlane
#include <org/gameplay3d/immutable/IPlane.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IQuaternion
#include <org/gameplay3d/immutable/IQuaternion.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IRectangle
#include <org/gameplay3d/immutable/IRectangle.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_ITheme_SideRegions
#include <org/gameplay3d/immutable/ITheme_SideRegions.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_ITheme_UVs
#include <org/gameplay3d/immutable/ITheme_UVs.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IVector2
#include <org/gameplay3d/immutable/IVector2.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IVector3
#include <org/gameplay3d/immutable/IVector3.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IVector4
#include <org/gameplay3d/immutable/IVector4.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_INativeBinding
#include <org/gameplay3d/intern/INativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_NativeBinding
#include <org/gameplay3d/intern/NativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_impl_AnimationTargetImpl
#include <org/gameplay3d/intern/impl/AnimationTargetImpl.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_impl_AnimationTarget_ScriptTarget
#include <org/gameplay3d/intern/impl/AnimationTarget_ScriptTarget.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_impl_ScriptTargetImpl
#include <org/gameplay3d/intern/impl/ScriptTargetImpl.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_impl_Transform_ListenerImpl
#include <org/gameplay3d/intern/impl/Transform_ListenerImpl.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_NativeInterface
#include <org/gameplay3d/util/NativeInterface.h>
#endif
namespace org{
namespace gameplay3d{

Void GameplayObject_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.GameplayObject","new",0x8d5a4aa4,"org.gameplay3d.GameplayObject.new","org/gameplay3d/GameplayObject.hx",42,0xdd7013ac)
HX_STACK_THIS(this)
HX_STACK_ARG(nativeObjectInitializer,"nativeObjectInitializer")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(42)
	if (((nativeObjectInitializerParams == null()))){
		HX_STACK_LINE(43)
		this->impersonate(nativeObjectInitializer);
	}
	else{
		HX_STACK_LINE(46)
		hx::IndexRef((nativeObjectInitializerParams).mPtr,(int)0) = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(48)
		Dynamic _g = ::Reflect_obj::callMethod(null(),nativeObjectInitializer,nativeObjectInitializerParams);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(47)
		this->impersonate(_g);
		HX_STACK_LINE(54)
		hx::IndexRef((nativeObjectInitializerParams).mPtr,(int)0) = null();
	}
}
;
	return null();
}

//GameplayObject_obj::~GameplayObject_obj() { }

Dynamic GameplayObject_obj::__CreateEmpty() { return  new GameplayObject_obj; }
hx::ObjectPtr< GameplayObject_obj > GameplayObject_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< GameplayObject_obj > result = new GameplayObject_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic GameplayObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GameplayObject_obj > result = new GameplayObject_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Dynamic GameplayObject_obj::wrap_castTo_T( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_castTo_T",0x58660f48,"org.gameplay3d.GameplayObject.wrap_castTo_T","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			Dynamic result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				Dynamic _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_castTo_T,return )

::org::gameplay3d::PhysicsController GameplayObject_obj::wrap_org_gameplay3d_PhysicsController( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_PhysicsController",0x9ffb52ef,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_PhysicsController","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::PhysicsController result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::PhysicsController _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_PhysicsController,return )

::org::gameplay3d::Game GameplayObject_obj::wrap_org_gameplay3d_Game( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_Game",0x3ab560c6,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_Game","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::Game result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::Game _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_Game,return )

::org::gameplay3d::Gamepad GameplayObject_obj::wrap_org_gameplay3d_Gamepad( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_Gamepad",0x9c1c304d,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_Gamepad","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::Gamepad result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::Gamepad _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_Gamepad,return )

::org::gameplay3d::AudioController GameplayObject_obj::wrap_org_gameplay3d_AudioController( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_AudioController",0x515398be,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_AudioController","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::AudioController result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::AudioController _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_AudioController,return )

::org::gameplay3d::AnimationController GameplayObject_obj::wrap_org_gameplay3d_AnimationController( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_AnimationController",0x58e41a6c,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_AnimationController","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::AnimationController result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::AnimationController _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_AnimationController,return )

::org::gameplay3d::AIController GameplayObject_obj::wrap_org_gameplay3d_AIController( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_AIController",0x68f21c58,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_AIController","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::AIController result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::AIController _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_AIController,return )

::org::gameplay3d::Platform GameplayObject_obj::wrap_org_gameplay3d_Platform( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_Platform",0x98e91987,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_Platform","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::Platform result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::Platform _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_Platform,return )

::org::gameplay3d::PhysicsSpringConstraint GameplayObject_obj::wrap_org_gameplay3d_PhysicsSpringConstraint( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_PhysicsSpringConstraint",0x250ff81d,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_PhysicsSpringConstraint","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::PhysicsSpringConstraint result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::PhysicsSpringConstraint _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_PhysicsSpringConstraint,return )

::org::gameplay3d::PhysicsSocketConstraint GameplayObject_obj::wrap_org_gameplay3d_PhysicsSocketConstraint( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_PhysicsSocketConstraint",0xeefe0883,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_PhysicsSocketConstraint","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::PhysicsSocketConstraint result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::PhysicsSocketConstraint _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_PhysicsSocketConstraint,return )

::org::gameplay3d::PhysicsHingeConstraint GameplayObject_obj::wrap_org_gameplay3d_PhysicsHingeConstraint( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_PhysicsHingeConstraint",0xb1486eb5,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_PhysicsHingeConstraint","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::PhysicsHingeConstraint result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::PhysicsHingeConstraint _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_PhysicsHingeConstraint,return )

::org::gameplay3d::PhysicsGenericConstraint GameplayObject_obj::wrap_org_gameplay3d_PhysicsGenericConstraint( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_PhysicsGenericConstraint",0xfde01f61,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_PhysicsGenericConstraint","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::PhysicsGenericConstraint result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::PhysicsGenericConstraint _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_PhysicsGenericConstraint,return )

::org::gameplay3d::PhysicsFixedConstraint GameplayObject_obj::wrap_org_gameplay3d_PhysicsFixedConstraint( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_PhysicsFixedConstraint",0x3c78cfbe,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_PhysicsFixedConstraint","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::PhysicsFixedConstraint result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::PhysicsFixedConstraint _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_PhysicsFixedConstraint,return )

::org::gameplay3d::PhysicsCollisionShape GameplayObject_obj::wrap_org_gameplay3d_PhysicsCollisionShape( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_PhysicsCollisionShape",0x0681ad22,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_PhysicsCollisionShape","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::PhysicsCollisionShape result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::PhysicsCollisionShape _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_PhysicsCollisionShape,return )

::org::gameplay3d::PhysicsVehicle GameplayObject_obj::wrap_org_gameplay3d_PhysicsVehicle( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_PhysicsVehicle",0x29e34b79,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_PhysicsVehicle","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::PhysicsVehicle result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::PhysicsVehicle _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_PhysicsVehicle,return )

::org::gameplay3d::PhysicsGhostObject GameplayObject_obj::wrap_org_gameplay3d_PhysicsGhostObject( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_PhysicsGhostObject",0x7b87b5bb,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_PhysicsGhostObject","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::PhysicsGhostObject result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::PhysicsGhostObject _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_PhysicsGhostObject,return )

::org::gameplay3d::PhysicsCharacter GameplayObject_obj::wrap_org_gameplay3d_PhysicsCharacter( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_PhysicsCharacter",0x2f000cb6,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_PhysicsCharacter","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::PhysicsCharacter result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::PhysicsCharacter _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_PhysicsCharacter,return )

::org::gameplay3d::PhysicsVehicleWheel GameplayObject_obj::wrap_org_gameplay3d_PhysicsVehicleWheel( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_PhysicsVehicleWheel",0xa1632262,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_PhysicsVehicleWheel","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::PhysicsVehicleWheel result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::PhysicsVehicleWheel _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_PhysicsVehicleWheel,return )

::org::gameplay3d::PhysicsRigidBody GameplayObject_obj::wrap_org_gameplay3d_PhysicsRigidBody( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_PhysicsRigidBody",0xc90215fa,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_PhysicsRigidBody","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::PhysicsRigidBody result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::PhysicsRigidBody _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_PhysicsRigidBody,return )

::org::gameplay3d::PhysicsCollisionObject_CollisionPair GameplayObject_obj::wrap_org_gameplay3d_PhysicsCollisionObject_CollisionPair( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_PhysicsCollisionObject_CollisionPair",0x6464dfeb,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_PhysicsCollisionObject_CollisionPair","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::PhysicsCollisionObject_CollisionPair result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::PhysicsCollisionObject_CollisionPair _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_PhysicsCollisionObject_CollisionPair,return )

::org::gameplay3d::PhysicsController_HitResult GameplayObject_obj::wrap_org_gameplay3d_PhysicsController_HitResult( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_PhysicsController_HitResult",0x4fc772e0,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_PhysicsController_HitResult","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::PhysicsController_HitResult result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::PhysicsController_HitResult _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_PhysicsController_HitResult,return )

::org::gameplay3d::AudioListener GameplayObject_obj::wrap_org_gameplay3d_AudioListener( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_AudioListener",0x6f915416,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_AudioListener","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::AudioListener result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::AudioListener _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_AudioListener,return )

::org::gameplay3d::Quaternion GameplayObject_obj::wrap_org_gameplay3d_Quaternion( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_Quaternion",0xf47fd0f2,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_Quaternion","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::Quaternion result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::Quaternion _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_Quaternion,return )

::org::gameplay3d::Transform GameplayObject_obj::wrap_org_gameplay3d_Transform( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_Transform",0xe61dc018,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_Transform","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::Transform result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::Transform _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_Transform,return )

Dynamic GameplayObject_obj::wrap_registerClass_T( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_registerClass_T",0x114596b1,"org.gameplay3d.GameplayObject.wrap_registerClass_T","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			Dynamic result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				Dynamic _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_registerClass_T,return )

::org::gameplay3d::VertexFormat_Element GameplayObject_obj::wrap_org_gameplay3d_VertexFormat_Element( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_VertexFormat_Element",0x131ab9ac,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_VertexFormat_Element","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::VertexFormat_Element result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::VertexFormat_Element _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_VertexFormat_Element,return )

::org::gameplay3d::VertexFormat GameplayObject_obj::wrap_org_gameplay3d_VertexFormat( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_VertexFormat",0x6230e28f,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_VertexFormat","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::VertexFormat result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::VertexFormat _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_VertexFormat,return )

::org::gameplay3d::MeshPart GameplayObject_obj::wrap_org_gameplay3d_MeshPart( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_MeshPart",0x0543bb54,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_MeshPart","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::MeshPart result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::MeshPart _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_MeshPart,return )

::org::gameplay3d::Theme_Style GameplayObject_obj::wrap_org_gameplay3d_Theme_Style( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_Theme_Style",0x58421cc7,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_Theme_Style","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::Theme_Style result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::Theme_Style _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_Theme_Style,return )

::org::gameplay3d::Theme_UVs GameplayObject_obj::wrap_org_gameplay3d_Theme_UVs( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_Theme_UVs",0xd5cf5928,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_Theme_UVs","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::Theme_UVs result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::Theme_UVs _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_Theme_UVs,return )

::org::gameplay3d::Rectangle GameplayObject_obj::wrap_org_gameplay3d_Rectangle( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_Rectangle",0xba0766db,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_Rectangle","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::Rectangle result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::Rectangle _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_Rectangle,return )

::org::gameplay3d::Label GameplayObject_obj::wrap_org_gameplay3d_Label( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_Label",0x04f7daa0,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_Label","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::Label result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::Label _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_Label,return )

::org::gameplay3d::BoundingBox GameplayObject_obj::wrap_org_gameplay3d_BoundingBox( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_BoundingBox",0x4bfd2ab3,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_BoundingBox","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::BoundingBox result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::BoundingBox _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_BoundingBox,return )

::org::gameplay3d::MaterialParameter GameplayObject_obj::wrap_org_gameplay3d_MaterialParameter( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_MaterialParameter",0x13858aae,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_MaterialParameter","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::MaterialParameter result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::MaterialParameter _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_MaterialParameter,return )

::org::gameplay3d::Pass GameplayObject_obj::wrap_org_gameplay3d_Pass( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_Pass",0x40a851a5,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_Pass","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::Pass result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::Pass _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_Pass,return )

::org::gameplay3d::Slider GameplayObject_obj::wrap_org_gameplay3d_Slider( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_Slider",0x7a6f0ff5,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_Slider","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::Slider result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::Slider _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_Slider,return )

::org::gameplay3d::Texture GameplayObject_obj::wrap_org_gameplay3d_Texture( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_Texture",0xb1771887,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_Texture","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::Texture result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::Texture _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_Texture,return )

::org::gameplay3d::Button GameplayObject_obj::wrap_org_gameplay3d_Button( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_Button",0xe44aabc6,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_Button","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::Button result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::Button _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_Button,return )

::org::gameplay3d::RadioButton GameplayObject_obj::wrap_org_gameplay3d_RadioButton( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_RadioButton",0xf7d9eaf9,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_RadioButton","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::RadioButton result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::RadioButton _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_RadioButton,return )

::org::gameplay3d::PhysicsCollisionShape_Definition GameplayObject_obj::wrap_org_gameplay3d_PhysicsCollisionShape_Definition( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_PhysicsCollisionShape_Definition",0xc4e8a8f0,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_PhysicsCollisionShape_Definition","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::PhysicsCollisionShape_Definition result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::PhysicsCollisionShape_Definition _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_PhysicsCollisionShape_Definition,return )

::org::gameplay3d::VertexAttributeBinding GameplayObject_obj::wrap_org_gameplay3d_VertexAttributeBinding( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_VertexAttributeBinding",0x8f5dafe1,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_VertexAttributeBinding","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::VertexAttributeBinding result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::VertexAttributeBinding _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_VertexAttributeBinding,return )

::org::gameplay3d::MeshSkin GameplayObject_obj::wrap_org_gameplay3d_MeshSkin( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_MeshSkin",0x0746edde,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_MeshSkin","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::MeshSkin result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::MeshSkin _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_MeshSkin,return )

Dynamic GameplayObject_obj::wrap_org_gameplay3d_util_ObjectArray_T( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_util_ObjectArray_T",0xefa51346,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_util_ObjectArray_T","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			Dynamic result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				Dynamic _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_util_ObjectArray_T,return )

::org::gameplay3d::Joint GameplayObject_obj::wrap_org_gameplay3d_Joint( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_Joint",0xe77105f6,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_Joint","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::Joint result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::Joint _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_Joint,return )

::org::gameplay3d::Technique GameplayObject_obj::wrap_org_gameplay3d_Technique( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_Technique",0x0c90fc3c,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_Technique","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::Technique result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::Technique _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_Technique,return )

::org::gameplay3d::Joystick GameplayObject_obj::wrap_org_gameplay3d_Joystick( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_Joystick",0xcce14790,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_Joystick","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::Joystick result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::Joystick _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_Joystick,return )

::org::gameplay3d::Terrain GameplayObject_obj::wrap_org_gameplay3d_Terrain( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_Terrain",0x3badfb61,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_Terrain","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::Terrain result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::Terrain _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_Terrain,return )

::org::gameplay3d::ParticleEmitter GameplayObject_obj::wrap_org_gameplay3d_ParticleEmitter( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_ParticleEmitter",0xf174ef74,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_ParticleEmitter","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::ParticleEmitter result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::ParticleEmitter _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_ParticleEmitter,return )

::org::gameplay3d::Model GameplayObject_obj::wrap_org_gameplay3d_Model( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_Model",0xa1a0f055,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_Model","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::Model result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::Model _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_Model,return )

::org::gameplay3d::Light GameplayObject_obj::wrap_org_gameplay3d_Light( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_Light",0x0a455d82,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_Light","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::Light result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::Light _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_Light,return )

::org::gameplay3d::PhysicsCollisionObject GameplayObject_obj::wrap_org_gameplay3d_PhysicsCollisionObject( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_PhysicsCollisionObject",0xa30b759e,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_PhysicsCollisionObject","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::PhysicsCollisionObject result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::PhysicsCollisionObject _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_PhysicsCollisionObject,return )

::org::gameplay3d::BoundingSphere GameplayObject_obj::wrap_org_gameplay3d_BoundingSphere( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_BoundingSphere",0x1e9b9b65,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_BoundingSphere","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::BoundingSphere result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::BoundingSphere _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_BoundingSphere,return )

::org::gameplay3d::AudioSource GameplayObject_obj::wrap_org_gameplay3d_AudioSource( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_AudioSource",0xc73777fd,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_AudioSource","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::AudioSource result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::AudioSource _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_AudioSource,return )

::org::gameplay3d::Image GameplayObject_obj::wrap_org_gameplay3d_Image( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_Image",0x52b1ec07,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_Image","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::Image result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::Image _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_Image,return )

::org::gameplay3d::HeightField GameplayObject_obj::wrap_org_gameplay3d_HeightField( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_HeightField",0x60418cff,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_HeightField","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::HeightField result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::HeightField _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_HeightField,return )

::org::gameplay3d::RenderTarget GameplayObject_obj::wrap_org_gameplay3d_RenderTarget( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_RenderTarget",0xbad0581b,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_RenderTarget","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::RenderTarget result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::RenderTarget _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_RenderTarget,return )

::org::gameplay3d::FrameBuffer GameplayObject_obj::wrap_org_gameplay3d_FrameBuffer( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_FrameBuffer",0x75321eb9,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_FrameBuffer","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::FrameBuffer result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::FrameBuffer _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_FrameBuffer,return )

::org::gameplay3d::Layout GameplayObject_obj::wrap_org_gameplay3d_Layout( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_Layout",0x6322f87e,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_Layout","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::Layout result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::Layout _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_Layout,return )

::org::gameplay3d::Container GameplayObject_obj::wrap_org_gameplay3d_Container( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_Container",0x5ffe07ed,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_Container","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::Container result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::Container _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_Container,return )

::org::gameplay3d::Theme GameplayObject_obj::wrap_org_gameplay3d_Theme( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_Theme",0xa4cf4ab5,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_Theme","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::Theme result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::Theme _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_Theme,return )

::org::gameplay3d::Form GameplayObject_obj::wrap_org_gameplay3d_Form( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_Form",0x3a16ce18,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_Form","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::Form result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::Form _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_Form,return )

::org::gameplay3d::Font_Text GameplayObject_obj::wrap_org_gameplay3d_Font_Text( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_Font_Text",0xa41cdb29,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_Font_Text","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::Font_Text result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::Font_Text _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_Font_Text,return )

::org::gameplay3d::RenderState_StateBlock GameplayObject_obj::wrap_org_gameplay3d_RenderState_StateBlock( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_RenderState_StateBlock",0xd93a3994,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_RenderState_StateBlock","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::RenderState_StateBlock result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::RenderState_StateBlock _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_RenderState_StateBlock,return )

::org::gameplay3d::Texture_Sampler GameplayObject_obj::wrap_org_gameplay3d_Texture_Sampler( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_Texture_Sampler",0xea70bdf0,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_Texture_Sampler","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::Texture_Sampler result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::Texture_Sampler _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_Texture_Sampler,return )

::org::gameplay3d::Material GameplayObject_obj::wrap_org_gameplay3d_Material( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_Material",0x2194c37b,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_Material","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::Material result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::Material _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_Material,return )

::org::gameplay3d::SpriteBatch GameplayObject_obj::wrap_org_gameplay3d_SpriteBatch( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_SpriteBatch",0xaab35f21,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_SpriteBatch","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::SpriteBatch result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::SpriteBatch _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_SpriteBatch,return )

::org::gameplay3d::Uniform GameplayObject_obj::wrap_org_gameplay3d_Uniform( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_Uniform",0xc7fa90e0,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_Uniform","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::Uniform result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::Uniform _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_Uniform,return )

::org::gameplay3d::Effect GameplayObject_obj::wrap_org_gameplay3d_Effect( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_Effect",0x6b0da465,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_Effect","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::Effect result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::Effect _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_Effect,return )

::org::gameplay3d::DepthStencilTarget GameplayObject_obj::wrap_org_gameplay3d_DepthStencilTarget( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_DepthStencilTarget",0x6ed93b3e,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_DepthStencilTarget","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::DepthStencilTarget result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::DepthStencilTarget _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_DepthStencilTarget,return )

::org::gameplay3d::Curve GameplayObject_obj::wrap_org_gameplay3d_Curve( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_Curve",0xe3a1195b,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_Curve","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::Curve result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::Curve _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_Curve,return )

::org::gameplay3d::Vector4 GameplayObject_obj::wrap_org_gameplay3d_Vector4( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_Vector4",0xed3349bd,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_Vector4","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::Vector4 result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::Vector4 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_Vector4,return )

::org::gameplay3d::Vector3 GameplayObject_obj::wrap_org_gameplay3d_Vector3( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_Vector3",0xed3349bc,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_Vector3","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::Vector3 result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::Vector3 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_Vector3,return )

::org::gameplay3d::Vector2 GameplayObject_obj::wrap_org_gameplay3d_Vector2( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_Vector2",0xed3349bb,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_Vector2","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::Vector2 result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::Vector2 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_Vector2,return )

::org::gameplay3d::CheckBox GameplayObject_obj::wrap_org_gameplay3d_CheckBox( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_CheckBox",0xddccf0f7,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_CheckBox","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::CheckBox result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::CheckBox _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_CheckBox,return )

::org::gameplay3d::Control GameplayObject_obj::wrap_org_gameplay3d_Control( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_Control",0x2c17bb09,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_Control","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::Control result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::Control _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_Control,return )

::org::gameplay3d::Properties GameplayObject_obj::wrap_org_gameplay3d_Properties( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_Properties",0x39c4bfc7,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_Properties","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::Properties result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::Properties _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_Properties,return )

::org::gameplay3d::Theme_SideRegions GameplayObject_obj::wrap_org_gameplay3d_Theme_SideRegions( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_Theme_SideRegions",0x6081ec3e,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_Theme_SideRegions","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::Theme_SideRegions result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::Theme_SideRegions _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_Theme_SideRegions,return )

::org::gameplay3d::Matrix GameplayObject_obj::wrap_org_gameplay3d_Matrix( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_Matrix",0xc6328015,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_Matrix","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::Matrix result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::Matrix _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_Matrix,return )

::org::gameplay3d::Frustum GameplayObject_obj::wrap_org_gameplay3d_Frustum( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_Frustum",0xe310970e,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_Frustum","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::Frustum result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::Frustum _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_Frustum,return )

::org::gameplay3d::Camera GameplayObject_obj::wrap_org_gameplay3d_Camera( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_Camera",0xc1f69079,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_Camera","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::Camera result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::Camera _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_Camera,return )

::org::gameplay3d::Plane GameplayObject_obj::wrap_org_gameplay3d_Plane( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_Plane",0x59d6cb08,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_Plane","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::Plane result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::Plane _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_Plane,return )

::org::gameplay3d::Scene GameplayObject_obj::wrap_org_gameplay3d_Scene( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_Scene",0x0e1aa5f8,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_Scene","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::Scene result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::Scene _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_Scene,return )

::org::gameplay3d::Node GameplayObject_obj::wrap_org_gameplay3d_Node( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_Node",0x3f6076d6,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_Node","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::Node result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::Node _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_Node,return )

::org::gameplay3d::Mesh GameplayObject_obj::wrap_org_gameplay3d_Mesh( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_Mesh",0x3eafb6c1,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_Mesh","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::Mesh result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::Mesh _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_Mesh,return )

::org::gameplay3d::Font GameplayObject_obj::wrap_org_gameplay3d_Font( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_Font",0x3a16caa3,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_Font","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::Font result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::Font _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_Font,return )

::org::gameplay3d::Bundle GameplayObject_obj::wrap_org_gameplay3d_Bundle( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_Bundle",0xe0473d56,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_Bundle","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::Bundle result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::Bundle _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_Bundle,return )

::org::gameplay3d::Animation GameplayObject_obj::wrap_org_gameplay3d_Animation( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_Animation",0xebbf81b0,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_Animation","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::Animation result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::Animation _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_Animation,return )

::org::gameplay3d::AnimationClip GameplayObject_obj::wrap_org_gameplay3d_AnimationClip( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_AnimationClip",0x6b35b4a0,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_AnimationClip","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::AnimationClip result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::AnimationClip _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_AnimationClip,return )

::org::gameplay3d::AIStateMachine GameplayObject_obj::wrap_org_gameplay3d_AIStateMachine( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_AIStateMachine",0xfb7e2c32,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_AIStateMachine","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::AIStateMachine result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::AIStateMachine _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_AIStateMachine,return )

::org::gameplay3d::AIAgent GameplayObject_obj::wrap_org_gameplay3d_AIAgent( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_AIAgent",0xb5b35889,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_AIAgent","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::AIAgent result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::AIAgent _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_AIAgent,return )

::org::gameplay3d::AIState GameplayObject_obj::wrap_org_gameplay3d_AIState( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_AIState",0x1b7e8bd5,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_AIState","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::AIState result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::AIState _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_AIState,return )

::org::gameplay3d::AIMessage GameplayObject_obj::wrap_org_gameplay3d_AIMessage( ::Class classObj,Dynamic nativeObject){
	HX_STACK_FRAME("org.gameplay3d.GameplayObject","wrap_org_gameplay3d_AIMessage",0x44c8448b,"org.gameplay3d.GameplayObject.wrap_org_gameplay3d_AIMessage","org/gameplay3d/GameplayObject.hx",71,0xdd7013ac)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(nativeObject,"nativeObject")
	HX_STACK_LINE(72)
	if (((nativeObject == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(77)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(78)
			::org::gameplay3d::AIMessage result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			if (((result == null()))){
				HX_STACK_LINE(81)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(82)
				::org::gameplay3d::AIMessage _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				result = _g;
				HX_STACK_LINE(83)
				ref->set(result);
			}
			HX_STACK_LINE(85)
			return result;
		}
		else{
			HX_STACK_LINE(90)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(91)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameplayObject_obj,wrap_org_gameplay3d_AIMessage,return )

Dynamic GameplayObject_obj::args;


GameplayObject_obj::GameplayObject_obj()
{
}

Dynamic GameplayObject_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"args") ) { return args; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"wrap_castTo_T") ) { return wrap_castTo_T_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"wrap_registerClass_T") ) { return wrap_registerClass_T_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_Game") ) { return wrap_org_gameplay3d_Game_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_Pass") ) { return wrap_org_gameplay3d_Pass_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_Form") ) { return wrap_org_gameplay3d_Form_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_Node") ) { return wrap_org_gameplay3d_Node_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_Mesh") ) { return wrap_org_gameplay3d_Mesh_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_Font") ) { return wrap_org_gameplay3d_Font_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_Label") ) { return wrap_org_gameplay3d_Label_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_Joint") ) { return wrap_org_gameplay3d_Joint_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_Model") ) { return wrap_org_gameplay3d_Model_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_Light") ) { return wrap_org_gameplay3d_Light_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_Image") ) { return wrap_org_gameplay3d_Image_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_Theme") ) { return wrap_org_gameplay3d_Theme_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_Curve") ) { return wrap_org_gameplay3d_Curve_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_Plane") ) { return wrap_org_gameplay3d_Plane_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_Scene") ) { return wrap_org_gameplay3d_Scene_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_Slider") ) { return wrap_org_gameplay3d_Slider_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_Button") ) { return wrap_org_gameplay3d_Button_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_Layout") ) { return wrap_org_gameplay3d_Layout_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_Effect") ) { return wrap_org_gameplay3d_Effect_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_Matrix") ) { return wrap_org_gameplay3d_Matrix_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_Camera") ) { return wrap_org_gameplay3d_Camera_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_Bundle") ) { return wrap_org_gameplay3d_Bundle_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_Gamepad") ) { return wrap_org_gameplay3d_Gamepad_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_Texture") ) { return wrap_org_gameplay3d_Texture_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_Terrain") ) { return wrap_org_gameplay3d_Terrain_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_Uniform") ) { return wrap_org_gameplay3d_Uniform_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_Vector4") ) { return wrap_org_gameplay3d_Vector4_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_Vector3") ) { return wrap_org_gameplay3d_Vector3_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_Vector2") ) { return wrap_org_gameplay3d_Vector2_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_Control") ) { return wrap_org_gameplay3d_Control_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_Frustum") ) { return wrap_org_gameplay3d_Frustum_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_AIAgent") ) { return wrap_org_gameplay3d_AIAgent_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_AIState") ) { return wrap_org_gameplay3d_AIState_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_Platform") ) { return wrap_org_gameplay3d_Platform_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_MeshPart") ) { return wrap_org_gameplay3d_MeshPart_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_MeshSkin") ) { return wrap_org_gameplay3d_MeshSkin_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_Joystick") ) { return wrap_org_gameplay3d_Joystick_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_Material") ) { return wrap_org_gameplay3d_Material_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_CheckBox") ) { return wrap_org_gameplay3d_CheckBox_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_Transform") ) { return wrap_org_gameplay3d_Transform_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_Theme_UVs") ) { return wrap_org_gameplay3d_Theme_UVs_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_Rectangle") ) { return wrap_org_gameplay3d_Rectangle_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_Technique") ) { return wrap_org_gameplay3d_Technique_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_Container") ) { return wrap_org_gameplay3d_Container_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_Font_Text") ) { return wrap_org_gameplay3d_Font_Text_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_Animation") ) { return wrap_org_gameplay3d_Animation_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_AIMessage") ) { return wrap_org_gameplay3d_AIMessage_dyn(); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_Quaternion") ) { return wrap_org_gameplay3d_Quaternion_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_Properties") ) { return wrap_org_gameplay3d_Properties_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_Theme_Style") ) { return wrap_org_gameplay3d_Theme_Style_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_BoundingBox") ) { return wrap_org_gameplay3d_BoundingBox_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_RadioButton") ) { return wrap_org_gameplay3d_RadioButton_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_AudioSource") ) { return wrap_org_gameplay3d_AudioSource_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_HeightField") ) { return wrap_org_gameplay3d_HeightField_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_FrameBuffer") ) { return wrap_org_gameplay3d_FrameBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_SpriteBatch") ) { return wrap_org_gameplay3d_SpriteBatch_dyn(); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_AIController") ) { return wrap_org_gameplay3d_AIController_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_VertexFormat") ) { return wrap_org_gameplay3d_VertexFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_RenderTarget") ) { return wrap_org_gameplay3d_RenderTarget_dyn(); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_AudioListener") ) { return wrap_org_gameplay3d_AudioListener_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_AnimationClip") ) { return wrap_org_gameplay3d_AnimationClip_dyn(); }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_PhysicsVehicle") ) { return wrap_org_gameplay3d_PhysicsVehicle_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_BoundingSphere") ) { return wrap_org_gameplay3d_BoundingSphere_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_AIStateMachine") ) { return wrap_org_gameplay3d_AIStateMachine_dyn(); }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_AudioController") ) { return wrap_org_gameplay3d_AudioController_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_ParticleEmitter") ) { return wrap_org_gameplay3d_ParticleEmitter_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_Texture_Sampler") ) { return wrap_org_gameplay3d_Texture_Sampler_dyn(); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_PhysicsCharacter") ) { return wrap_org_gameplay3d_PhysicsCharacter_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_PhysicsRigidBody") ) { return wrap_org_gameplay3d_PhysicsRigidBody_dyn(); }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_PhysicsController") ) { return wrap_org_gameplay3d_PhysicsController_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_MaterialParameter") ) { return wrap_org_gameplay3d_MaterialParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_Theme_SideRegions") ) { return wrap_org_gameplay3d_Theme_SideRegions_dyn(); }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_PhysicsGhostObject") ) { return wrap_org_gameplay3d_PhysicsGhostObject_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_util_ObjectArray_T") ) { return wrap_org_gameplay3d_util_ObjectArray_T_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_DepthStencilTarget") ) { return wrap_org_gameplay3d_DepthStencilTarget_dyn(); }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_AnimationController") ) { return wrap_org_gameplay3d_AnimationController_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_PhysicsVehicleWheel") ) { return wrap_org_gameplay3d_PhysicsVehicleWheel_dyn(); }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_VertexFormat_Element") ) { return wrap_org_gameplay3d_VertexFormat_Element_dyn(); }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_PhysicsCollisionShape") ) { return wrap_org_gameplay3d_PhysicsCollisionShape_dyn(); }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_PhysicsHingeConstraint") ) { return wrap_org_gameplay3d_PhysicsHingeConstraint_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_PhysicsFixedConstraint") ) { return wrap_org_gameplay3d_PhysicsFixedConstraint_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_VertexAttributeBinding") ) { return wrap_org_gameplay3d_VertexAttributeBinding_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_PhysicsCollisionObject") ) { return wrap_org_gameplay3d_PhysicsCollisionObject_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_RenderState_StateBlock") ) { return wrap_org_gameplay3d_RenderState_StateBlock_dyn(); }
		break;
	case 43:
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_PhysicsSpringConstraint") ) { return wrap_org_gameplay3d_PhysicsSpringConstraint_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_PhysicsSocketConstraint") ) { return wrap_org_gameplay3d_PhysicsSocketConstraint_dyn(); }
		break;
	case 44:
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_PhysicsGenericConstraint") ) { return wrap_org_gameplay3d_PhysicsGenericConstraint_dyn(); }
		break;
	case 47:
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_PhysicsController_HitResult") ) { return wrap_org_gameplay3d_PhysicsController_HitResult_dyn(); }
		break;
	case 52:
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_PhysicsCollisionShape_Definition") ) { return wrap_org_gameplay3d_PhysicsCollisionShape_Definition_dyn(); }
		break;
	case 56:
		if (HX_FIELD_EQ(inName,"wrap_org_gameplay3d_PhysicsCollisionObject_CollisionPair") ) { return wrap_org_gameplay3d_PhysicsCollisionObject_CollisionPair_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GameplayObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"args") ) { args=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameplayObject_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("wrap_castTo_T"),
	HX_CSTRING("wrap_org_gameplay3d_PhysicsController"),
	HX_CSTRING("wrap_org_gameplay3d_Game"),
	HX_CSTRING("wrap_org_gameplay3d_Gamepad"),
	HX_CSTRING("wrap_org_gameplay3d_AudioController"),
	HX_CSTRING("wrap_org_gameplay3d_AnimationController"),
	HX_CSTRING("wrap_org_gameplay3d_AIController"),
	HX_CSTRING("wrap_org_gameplay3d_Platform"),
	HX_CSTRING("wrap_org_gameplay3d_PhysicsSpringConstraint"),
	HX_CSTRING("wrap_org_gameplay3d_PhysicsSocketConstraint"),
	HX_CSTRING("wrap_org_gameplay3d_PhysicsHingeConstraint"),
	HX_CSTRING("wrap_org_gameplay3d_PhysicsGenericConstraint"),
	HX_CSTRING("wrap_org_gameplay3d_PhysicsFixedConstraint"),
	HX_CSTRING("wrap_org_gameplay3d_PhysicsCollisionShape"),
	HX_CSTRING("wrap_org_gameplay3d_PhysicsVehicle"),
	HX_CSTRING("wrap_org_gameplay3d_PhysicsGhostObject"),
	HX_CSTRING("wrap_org_gameplay3d_PhysicsCharacter"),
	HX_CSTRING("wrap_org_gameplay3d_PhysicsVehicleWheel"),
	HX_CSTRING("wrap_org_gameplay3d_PhysicsRigidBody"),
	HX_CSTRING("wrap_org_gameplay3d_PhysicsCollisionObject_CollisionPair"),
	HX_CSTRING("wrap_org_gameplay3d_PhysicsController_HitResult"),
	HX_CSTRING("wrap_org_gameplay3d_AudioListener"),
	HX_CSTRING("wrap_org_gameplay3d_Quaternion"),
	HX_CSTRING("wrap_org_gameplay3d_Transform"),
	HX_CSTRING("wrap_registerClass_T"),
	HX_CSTRING("wrap_org_gameplay3d_VertexFormat_Element"),
	HX_CSTRING("wrap_org_gameplay3d_VertexFormat"),
	HX_CSTRING("wrap_org_gameplay3d_MeshPart"),
	HX_CSTRING("wrap_org_gameplay3d_Theme_Style"),
	HX_CSTRING("wrap_org_gameplay3d_Theme_UVs"),
	HX_CSTRING("wrap_org_gameplay3d_Rectangle"),
	HX_CSTRING("wrap_org_gameplay3d_Label"),
	HX_CSTRING("wrap_org_gameplay3d_BoundingBox"),
	HX_CSTRING("wrap_org_gameplay3d_MaterialParameter"),
	HX_CSTRING("wrap_org_gameplay3d_Pass"),
	HX_CSTRING("wrap_org_gameplay3d_Slider"),
	HX_CSTRING("wrap_org_gameplay3d_Texture"),
	HX_CSTRING("wrap_org_gameplay3d_Button"),
	HX_CSTRING("wrap_org_gameplay3d_RadioButton"),
	HX_CSTRING("wrap_org_gameplay3d_PhysicsCollisionShape_Definition"),
	HX_CSTRING("wrap_org_gameplay3d_VertexAttributeBinding"),
	HX_CSTRING("wrap_org_gameplay3d_MeshSkin"),
	HX_CSTRING("wrap_org_gameplay3d_util_ObjectArray_T"),
	HX_CSTRING("wrap_org_gameplay3d_Joint"),
	HX_CSTRING("wrap_org_gameplay3d_Technique"),
	HX_CSTRING("wrap_org_gameplay3d_Joystick"),
	HX_CSTRING("wrap_org_gameplay3d_Terrain"),
	HX_CSTRING("wrap_org_gameplay3d_ParticleEmitter"),
	HX_CSTRING("wrap_org_gameplay3d_Model"),
	HX_CSTRING("wrap_org_gameplay3d_Light"),
	HX_CSTRING("wrap_org_gameplay3d_PhysicsCollisionObject"),
	HX_CSTRING("wrap_org_gameplay3d_BoundingSphere"),
	HX_CSTRING("wrap_org_gameplay3d_AudioSource"),
	HX_CSTRING("wrap_org_gameplay3d_Image"),
	HX_CSTRING("wrap_org_gameplay3d_HeightField"),
	HX_CSTRING("wrap_org_gameplay3d_RenderTarget"),
	HX_CSTRING("wrap_org_gameplay3d_FrameBuffer"),
	HX_CSTRING("wrap_org_gameplay3d_Layout"),
	HX_CSTRING("wrap_org_gameplay3d_Container"),
	HX_CSTRING("wrap_org_gameplay3d_Theme"),
	HX_CSTRING("wrap_org_gameplay3d_Form"),
	HX_CSTRING("wrap_org_gameplay3d_Font_Text"),
	HX_CSTRING("wrap_org_gameplay3d_RenderState_StateBlock"),
	HX_CSTRING("wrap_org_gameplay3d_Texture_Sampler"),
	HX_CSTRING("wrap_org_gameplay3d_Material"),
	HX_CSTRING("wrap_org_gameplay3d_SpriteBatch"),
	HX_CSTRING("wrap_org_gameplay3d_Uniform"),
	HX_CSTRING("wrap_org_gameplay3d_Effect"),
	HX_CSTRING("wrap_org_gameplay3d_DepthStencilTarget"),
	HX_CSTRING("wrap_org_gameplay3d_Curve"),
	HX_CSTRING("wrap_org_gameplay3d_Vector4"),
	HX_CSTRING("wrap_org_gameplay3d_Vector3"),
	HX_CSTRING("wrap_org_gameplay3d_Vector2"),
	HX_CSTRING("wrap_org_gameplay3d_CheckBox"),
	HX_CSTRING("wrap_org_gameplay3d_Control"),
	HX_CSTRING("wrap_org_gameplay3d_Properties"),
	HX_CSTRING("wrap_org_gameplay3d_Theme_SideRegions"),
	HX_CSTRING("wrap_org_gameplay3d_Matrix"),
	HX_CSTRING("wrap_org_gameplay3d_Frustum"),
	HX_CSTRING("wrap_org_gameplay3d_Camera"),
	HX_CSTRING("wrap_org_gameplay3d_Plane"),
	HX_CSTRING("wrap_org_gameplay3d_Scene"),
	HX_CSTRING("wrap_org_gameplay3d_Node"),
	HX_CSTRING("wrap_org_gameplay3d_Mesh"),
	HX_CSTRING("wrap_org_gameplay3d_Font"),
	HX_CSTRING("wrap_org_gameplay3d_Bundle"),
	HX_CSTRING("wrap_org_gameplay3d_Animation"),
	HX_CSTRING("wrap_org_gameplay3d_AnimationClip"),
	HX_CSTRING("wrap_org_gameplay3d_AIStateMachine"),
	HX_CSTRING("wrap_org_gameplay3d_AIAgent"),
	HX_CSTRING("wrap_org_gameplay3d_AIState"),
	HX_CSTRING("wrap_org_gameplay3d_AIMessage"),
	HX_CSTRING("args"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameplayObject_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GameplayObject_obj::args,"args");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameplayObject_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GameplayObject_obj::args,"args");
};

#endif

Class GameplayObject_obj::__mClass;

void GameplayObject_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.GameplayObject"), hx::TCanCast< GameplayObject_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void GameplayObject_obj::__boot()
{
	args= Dynamic( Array_obj<Dynamic>::__new().Add(null()).Add(null()));
}

} // end namespace org
} // end namespace gameplay3d
