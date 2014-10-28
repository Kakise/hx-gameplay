#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_cpp_vm_WeakRef
#include <cpp/vm/WeakRef.h>
#endif
#ifndef INCLUDED_org_gameplay3d_AIAgent
#include <org/gameplay3d/AIAgent.h>
#endif
#ifndef INCLUDED_org_gameplay3d_AIState
#include <org/gameplay3d/AIState.h>
#endif
#ifndef INCLUDED_org_gameplay3d_AbsoluteLayout
#include <org/gameplay3d/AbsoluteLayout.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Animation
#include <org/gameplay3d/Animation.h>
#endif
#ifndef INCLUDED_org_gameplay3d_AnimationClip
#include <org/gameplay3d/AnimationClip.h>
#endif
#ifndef INCLUDED_org_gameplay3d_AnimationTarget
#include <org/gameplay3d/AnimationTarget.h>
#endif
#ifndef INCLUDED_org_gameplay3d_AudioBuffer
#include <org/gameplay3d/AudioBuffer.h>
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
#ifndef INCLUDED_org_gameplay3d_FlowLayout
#include <org/gameplay3d/FlowLayout.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Font
#include <org/gameplay3d/Font.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Form
#include <org/gameplay3d/Form.h>
#endif
#ifndef INCLUDED_org_gameplay3d_FrameBuffer
#include <org/gameplay3d/FrameBuffer.h>
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
#ifndef INCLUDED_org_gameplay3d_Mesh
#include <org/gameplay3d/Mesh.h>
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
#ifndef INCLUDED_org_gameplay3d_PhysicsCollisionShape
#include <org/gameplay3d/PhysicsCollisionShape.h>
#endif
#ifndef INCLUDED_org_gameplay3d_RadioButton
#include <org/gameplay3d/RadioButton.h>
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
#ifndef INCLUDED_org_gameplay3d_Technique
#include <org/gameplay3d/Technique.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Terrain
#include <org/gameplay3d/Terrain.h>
#endif
#ifndef INCLUDED_org_gameplay3d_TextBox
#include <org/gameplay3d/TextBox.h>
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
#ifndef INCLUDED_org_gameplay3d_Theme_ThemeImage
#include <org/gameplay3d/Theme_ThemeImage.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Transform
#include <org/gameplay3d/Transform.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Transform_Listener
#include <org/gameplay3d/Transform_Listener.h>
#endif
#ifndef INCLUDED_org_gameplay3d_VertexAttributeBinding
#include <org/gameplay3d/VertexAttributeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_VerticalLayout
#include <org/gameplay3d/VerticalLayout.h>
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
namespace util{

Void NativeInterface_obj::__construct()
{
	return null();
}

//NativeInterface_obj::~NativeInterface_obj() { }

Dynamic NativeInterface_obj::__CreateEmpty() { return  new NativeInterface_obj; }
hx::ObjectPtr< NativeInterface_obj > NativeInterface_obj::__new()
{  hx::ObjectPtr< NativeInterface_obj > result = new NativeInterface_obj();
	result->__construct();
	return result;}

Dynamic NativeInterface_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NativeInterface_obj > result = new NativeInterface_obj();
	result->__construct();
	return result;}

Void NativeInterface_obj::registerClass_org_gameplay3d_VerticalLayout( ::Class classObj){
{
		HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","registerClass_org_gameplay3d_VerticalLayout",0x4404cd58,"org.gameplay3d.util.NativeInterface.registerClass_org_gameplay3d_VerticalLayout","org/gameplay3d/util/NativeInterface.hx",190,0x672d7a9c)
		HX_STACK_ARG(classObj,"classObj")
		HX_STACK_LINE(190)
		Array< ::Dynamic > classObj1 = Array_obj< ::Dynamic >::__new().Add(classObj);		HX_STACK_VAR(classObj1,"classObj1");
		HX_STACK_LINE(195)
		::String name = ::Type_obj::getClassName(classObj1->__get((int)0).StaticCast< ::Class >());		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(196)
		int packageEnd = name.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(packageEnd,"packageEnd");
		HX_STACK_LINE(197)
		if (((packageEnd != (int)-1))){
			HX_STACK_LINE(198)
			::String _g = name.substr((packageEnd + (int)1),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			name = _g;
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,classObj1)
		::cpp::vm::WeakRef run(Dynamic nativeObject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
			HX_STACK_ARG(nativeObject,"nativeObject")
			{
				struct _Function_2_1{
					inline static ::org::gameplay3d::VerticalLayout Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
							HX_STACK_LINE(207)
							::org::gameplay3d::VerticalLayout result = ref->get();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(207)
							if (((result == null()))){
								HX_STACK_LINE(207)
								hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
								HX_STACK_LINE(207)
								result = ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
								HX_STACK_LINE(207)
								ref->set(result);
							}
							HX_STACK_LINE(207)
							return result;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::org::gameplay3d::VerticalLayout Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
							HX_STACK_LINE(207)
							return ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
						}
						return null();
					}
				};
				HX_STACK_LINE(207)
				return ::cpp::vm::WeakRef_obj::__new((  (((nativeObject == null()))) ? ::org::gameplay3d::VerticalLayout(null()) : ::org::gameplay3d::VerticalLayout((  ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))) ? ::org::gameplay3d::VerticalLayout(_Function_2_1::Block(nativeObject,classObj1)) : ::org::gameplay3d::VerticalLayout(_Function_2_2::Block(nativeObject,classObj1)) )) ),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(204)
		::org::gameplay3d::util::NativeInterface_obj::factories->push( Dynamic(new _Function_1_1(classObj1)));
		HX_STACK_LINE(211)
		Dynamic _g1 = ::org::gameplay3d::util::NativeInterface_obj::factories->first();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		::org::gameplay3d::util::NativeInterface_obj::setReferenceConstructor(name,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeInterface_obj,registerClass_org_gameplay3d_VerticalLayout,(void))

Void NativeInterface_obj::registerClass_org_gameplay3d_VertexAttributeBinding( ::Class classObj){
{
		HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","registerClass_org_gameplay3d_VertexAttributeBinding",0x355f07a5,"org.gameplay3d.util.NativeInterface.registerClass_org_gameplay3d_VertexAttributeBinding","org/gameplay3d/util/NativeInterface.hx",190,0x672d7a9c)
		HX_STACK_ARG(classObj,"classObj")
		HX_STACK_LINE(190)
		Array< ::Dynamic > classObj1 = Array_obj< ::Dynamic >::__new().Add(classObj);		HX_STACK_VAR(classObj1,"classObj1");
		HX_STACK_LINE(195)
		::String name = ::Type_obj::getClassName(classObj1->__get((int)0).StaticCast< ::Class >());		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(196)
		int packageEnd = name.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(packageEnd,"packageEnd");
		HX_STACK_LINE(197)
		if (((packageEnd != (int)-1))){
			HX_STACK_LINE(198)
			::String _g = name.substr((packageEnd + (int)1),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			name = _g;
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,classObj1)
		::cpp::vm::WeakRef run(Dynamic nativeObject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
			HX_STACK_ARG(nativeObject,"nativeObject")
			{
				struct _Function_2_1{
					inline static ::org::gameplay3d::VertexAttributeBinding Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
							HX_STACK_LINE(207)
							::org::gameplay3d::VertexAttributeBinding result = ref->get();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(207)
							if (((result == null()))){
								HX_STACK_LINE(207)
								hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
								HX_STACK_LINE(207)
								result = ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
								HX_STACK_LINE(207)
								ref->set(result);
							}
							HX_STACK_LINE(207)
							return result;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::org::gameplay3d::VertexAttributeBinding Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
							HX_STACK_LINE(207)
							return ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
						}
						return null();
					}
				};
				HX_STACK_LINE(207)
				return ::cpp::vm::WeakRef_obj::__new((  (((nativeObject == null()))) ? ::org::gameplay3d::VertexAttributeBinding(null()) : ::org::gameplay3d::VertexAttributeBinding((  ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))) ? ::org::gameplay3d::VertexAttributeBinding(_Function_2_1::Block(nativeObject,classObj1)) : ::org::gameplay3d::VertexAttributeBinding(_Function_2_2::Block(nativeObject,classObj1)) )) ),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(204)
		::org::gameplay3d::util::NativeInterface_obj::factories->push( Dynamic(new _Function_1_1(classObj1)));
		HX_STACK_LINE(211)
		Dynamic _g1 = ::org::gameplay3d::util::NativeInterface_obj::factories->first();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		::org::gameplay3d::util::NativeInterface_obj::setReferenceConstructor(name,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeInterface_obj,registerClass_org_gameplay3d_VertexAttributeBinding,(void))

Void NativeInterface_obj::registerClass_org_gameplay3d_Theme_ThemeImage( ::Class classObj){
{
		HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","registerClass_org_gameplay3d_Theme_ThemeImage",0xd78b4600,"org.gameplay3d.util.NativeInterface.registerClass_org_gameplay3d_Theme_ThemeImage","org/gameplay3d/util/NativeInterface.hx",190,0x672d7a9c)
		HX_STACK_ARG(classObj,"classObj")
		HX_STACK_LINE(190)
		Array< ::Dynamic > classObj1 = Array_obj< ::Dynamic >::__new().Add(classObj);		HX_STACK_VAR(classObj1,"classObj1");
		HX_STACK_LINE(195)
		::String name = ::Type_obj::getClassName(classObj1->__get((int)0).StaticCast< ::Class >());		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(196)
		int packageEnd = name.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(packageEnd,"packageEnd");
		HX_STACK_LINE(197)
		if (((packageEnd != (int)-1))){
			HX_STACK_LINE(198)
			::String _g = name.substr((packageEnd + (int)1),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			name = _g;
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,classObj1)
		::cpp::vm::WeakRef run(Dynamic nativeObject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
			HX_STACK_ARG(nativeObject,"nativeObject")
			{
				struct _Function_2_1{
					inline static ::org::gameplay3d::Theme_ThemeImage Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
							HX_STACK_LINE(207)
							::org::gameplay3d::Theme_ThemeImage result = ref->get();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(207)
							if (((result == null()))){
								HX_STACK_LINE(207)
								hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
								HX_STACK_LINE(207)
								result = ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
								HX_STACK_LINE(207)
								ref->set(result);
							}
							HX_STACK_LINE(207)
							return result;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::org::gameplay3d::Theme_ThemeImage Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
							HX_STACK_LINE(207)
							return ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
						}
						return null();
					}
				};
				HX_STACK_LINE(207)
				return ::cpp::vm::WeakRef_obj::__new((  (((nativeObject == null()))) ? ::org::gameplay3d::Theme_ThemeImage(null()) : ::org::gameplay3d::Theme_ThemeImage((  ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))) ? ::org::gameplay3d::Theme_ThemeImage(_Function_2_1::Block(nativeObject,classObj1)) : ::org::gameplay3d::Theme_ThemeImage(_Function_2_2::Block(nativeObject,classObj1)) )) ),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(204)
		::org::gameplay3d::util::NativeInterface_obj::factories->push( Dynamic(new _Function_1_1(classObj1)));
		HX_STACK_LINE(211)
		Dynamic _g1 = ::org::gameplay3d::util::NativeInterface_obj::factories->first();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		::org::gameplay3d::util::NativeInterface_obj::setReferenceConstructor(name,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeInterface_obj,registerClass_org_gameplay3d_Theme_ThemeImage,(void))

Void NativeInterface_obj::registerClass_org_gameplay3d_Theme( ::Class classObj){
{
		HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","registerClass_org_gameplay3d_Theme",0x17eadf71,"org.gameplay3d.util.NativeInterface.registerClass_org_gameplay3d_Theme","org/gameplay3d/util/NativeInterface.hx",190,0x672d7a9c)
		HX_STACK_ARG(classObj,"classObj")
		HX_STACK_LINE(190)
		Array< ::Dynamic > classObj1 = Array_obj< ::Dynamic >::__new().Add(classObj);		HX_STACK_VAR(classObj1,"classObj1");
		HX_STACK_LINE(195)
		::String name = ::Type_obj::getClassName(classObj1->__get((int)0).StaticCast< ::Class >());		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(196)
		int packageEnd = name.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(packageEnd,"packageEnd");
		HX_STACK_LINE(197)
		if (((packageEnd != (int)-1))){
			HX_STACK_LINE(198)
			::String _g = name.substr((packageEnd + (int)1),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			name = _g;
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,classObj1)
		::cpp::vm::WeakRef run(Dynamic nativeObject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
			HX_STACK_ARG(nativeObject,"nativeObject")
			{
				struct _Function_2_1{
					inline static ::org::gameplay3d::Theme Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
							HX_STACK_LINE(207)
							::org::gameplay3d::Theme result = ref->get();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(207)
							if (((result == null()))){
								HX_STACK_LINE(207)
								hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
								HX_STACK_LINE(207)
								result = ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
								HX_STACK_LINE(207)
								ref->set(result);
							}
							HX_STACK_LINE(207)
							return result;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::org::gameplay3d::Theme Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
							HX_STACK_LINE(207)
							return ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
						}
						return null();
					}
				};
				HX_STACK_LINE(207)
				return ::cpp::vm::WeakRef_obj::__new((  (((nativeObject == null()))) ? ::org::gameplay3d::Theme(null()) : ::org::gameplay3d::Theme((  ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))) ? ::org::gameplay3d::Theme(_Function_2_1::Block(nativeObject,classObj1)) : ::org::gameplay3d::Theme(_Function_2_2::Block(nativeObject,classObj1)) )) ),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(204)
		::org::gameplay3d::util::NativeInterface_obj::factories->push( Dynamic(new _Function_1_1(classObj1)));
		HX_STACK_LINE(211)
		Dynamic _g1 = ::org::gameplay3d::util::NativeInterface_obj::factories->first();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		::org::gameplay3d::util::NativeInterface_obj::setReferenceConstructor(name,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeInterface_obj,registerClass_org_gameplay3d_Theme,(void))

Void NativeInterface_obj::registerClass_org_gameplay3d_Texture_Sampler( ::Class classObj){
{
		HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","registerClass_org_gameplay3d_Texture_Sampler",0xa6a415ac,"org.gameplay3d.util.NativeInterface.registerClass_org_gameplay3d_Texture_Sampler","org/gameplay3d/util/NativeInterface.hx",190,0x672d7a9c)
		HX_STACK_ARG(classObj,"classObj")
		HX_STACK_LINE(190)
		Array< ::Dynamic > classObj1 = Array_obj< ::Dynamic >::__new().Add(classObj);		HX_STACK_VAR(classObj1,"classObj1");
		HX_STACK_LINE(195)
		::String name = ::Type_obj::getClassName(classObj1->__get((int)0).StaticCast< ::Class >());		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(196)
		int packageEnd = name.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(packageEnd,"packageEnd");
		HX_STACK_LINE(197)
		if (((packageEnd != (int)-1))){
			HX_STACK_LINE(198)
			::String _g = name.substr((packageEnd + (int)1),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			name = _g;
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,classObj1)
		::cpp::vm::WeakRef run(Dynamic nativeObject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
			HX_STACK_ARG(nativeObject,"nativeObject")
			{
				struct _Function_2_1{
					inline static ::org::gameplay3d::Texture_Sampler Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
							HX_STACK_LINE(207)
							::org::gameplay3d::Texture_Sampler result = ref->get();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(207)
							if (((result == null()))){
								HX_STACK_LINE(207)
								hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
								HX_STACK_LINE(207)
								result = ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
								HX_STACK_LINE(207)
								ref->set(result);
							}
							HX_STACK_LINE(207)
							return result;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::org::gameplay3d::Texture_Sampler Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
							HX_STACK_LINE(207)
							return ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
						}
						return null();
					}
				};
				HX_STACK_LINE(207)
				return ::cpp::vm::WeakRef_obj::__new((  (((nativeObject == null()))) ? ::org::gameplay3d::Texture_Sampler(null()) : ::org::gameplay3d::Texture_Sampler((  ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))) ? ::org::gameplay3d::Texture_Sampler(_Function_2_1::Block(nativeObject,classObj1)) : ::org::gameplay3d::Texture_Sampler(_Function_2_2::Block(nativeObject,classObj1)) )) ),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(204)
		::org::gameplay3d::util::NativeInterface_obj::factories->push( Dynamic(new _Function_1_1(classObj1)));
		HX_STACK_LINE(211)
		Dynamic _g1 = ::org::gameplay3d::util::NativeInterface_obj::factories->first();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		::org::gameplay3d::util::NativeInterface_obj::setReferenceConstructor(name,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeInterface_obj,registerClass_org_gameplay3d_Texture_Sampler,(void))

Void NativeInterface_obj::registerClass_org_gameplay3d_Texture( ::Class classObj){
{
		HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","registerClass_org_gameplay3d_Texture",0xd22e5443,"org.gameplay3d.util.NativeInterface.registerClass_org_gameplay3d_Texture","org/gameplay3d/util/NativeInterface.hx",190,0x672d7a9c)
		HX_STACK_ARG(classObj,"classObj")
		HX_STACK_LINE(190)
		Array< ::Dynamic > classObj1 = Array_obj< ::Dynamic >::__new().Add(classObj);		HX_STACK_VAR(classObj1,"classObj1");
		HX_STACK_LINE(195)
		::String name = ::Type_obj::getClassName(classObj1->__get((int)0).StaticCast< ::Class >());		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(196)
		int packageEnd = name.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(packageEnd,"packageEnd");
		HX_STACK_LINE(197)
		if (((packageEnd != (int)-1))){
			HX_STACK_LINE(198)
			::String _g = name.substr((packageEnd + (int)1),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			name = _g;
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,classObj1)
		::cpp::vm::WeakRef run(Dynamic nativeObject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
			HX_STACK_ARG(nativeObject,"nativeObject")
			{
				struct _Function_2_1{
					inline static ::org::gameplay3d::Texture Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
							HX_STACK_LINE(207)
							::org::gameplay3d::Texture result = ref->get();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(207)
							if (((result == null()))){
								HX_STACK_LINE(207)
								hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
								HX_STACK_LINE(207)
								result = ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
								HX_STACK_LINE(207)
								ref->set(result);
							}
							HX_STACK_LINE(207)
							return result;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::org::gameplay3d::Texture Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
							HX_STACK_LINE(207)
							return ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
						}
						return null();
					}
				};
				HX_STACK_LINE(207)
				return ::cpp::vm::WeakRef_obj::__new((  (((nativeObject == null()))) ? ::org::gameplay3d::Texture(null()) : ::org::gameplay3d::Texture((  ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))) ? ::org::gameplay3d::Texture(_Function_2_1::Block(nativeObject,classObj1)) : ::org::gameplay3d::Texture(_Function_2_2::Block(nativeObject,classObj1)) )) ),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(204)
		::org::gameplay3d::util::NativeInterface_obj::factories->push( Dynamic(new _Function_1_1(classObj1)));
		HX_STACK_LINE(211)
		Dynamic _g1 = ::org::gameplay3d::util::NativeInterface_obj::factories->first();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		::org::gameplay3d::util::NativeInterface_obj::setReferenceConstructor(name,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeInterface_obj,registerClass_org_gameplay3d_Texture,(void))

Void NativeInterface_obj::registerClass_org_gameplay3d_TextBox( ::Class classObj){
{
		HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","registerClass_org_gameplay3d_TextBox",0xd2079ec6,"org.gameplay3d.util.NativeInterface.registerClass_org_gameplay3d_TextBox","org/gameplay3d/util/NativeInterface.hx",190,0x672d7a9c)
		HX_STACK_ARG(classObj,"classObj")
		HX_STACK_LINE(190)
		Array< ::Dynamic > classObj1 = Array_obj< ::Dynamic >::__new().Add(classObj);		HX_STACK_VAR(classObj1,"classObj1");
		HX_STACK_LINE(195)
		::String name = ::Type_obj::getClassName(classObj1->__get((int)0).StaticCast< ::Class >());		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(196)
		int packageEnd = name.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(packageEnd,"packageEnd");
		HX_STACK_LINE(197)
		if (((packageEnd != (int)-1))){
			HX_STACK_LINE(198)
			::String _g = name.substr((packageEnd + (int)1),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			name = _g;
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,classObj1)
		::cpp::vm::WeakRef run(Dynamic nativeObject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
			HX_STACK_ARG(nativeObject,"nativeObject")
			{
				struct _Function_2_1{
					inline static ::org::gameplay3d::TextBox Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
							HX_STACK_LINE(207)
							::org::gameplay3d::TextBox result = ref->get();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(207)
							if (((result == null()))){
								HX_STACK_LINE(207)
								hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
								HX_STACK_LINE(207)
								result = ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
								HX_STACK_LINE(207)
								ref->set(result);
							}
							HX_STACK_LINE(207)
							return result;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::org::gameplay3d::TextBox Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
							HX_STACK_LINE(207)
							return ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
						}
						return null();
					}
				};
				HX_STACK_LINE(207)
				return ::cpp::vm::WeakRef_obj::__new((  (((nativeObject == null()))) ? ::org::gameplay3d::TextBox(null()) : ::org::gameplay3d::TextBox((  ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))) ? ::org::gameplay3d::TextBox(_Function_2_1::Block(nativeObject,classObj1)) : ::org::gameplay3d::TextBox(_Function_2_2::Block(nativeObject,classObj1)) )) ),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(204)
		::org::gameplay3d::util::NativeInterface_obj::factories->push( Dynamic(new _Function_1_1(classObj1)));
		HX_STACK_LINE(211)
		Dynamic _g1 = ::org::gameplay3d::util::NativeInterface_obj::factories->first();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		::org::gameplay3d::util::NativeInterface_obj::setReferenceConstructor(name,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeInterface_obj,registerClass_org_gameplay3d_TextBox,(void))

Void NativeInterface_obj::registerClass_org_gameplay3d_Terrain( ::Class classObj){
{
		HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","registerClass_org_gameplay3d_Terrain",0x5c65371d,"org.gameplay3d.util.NativeInterface.registerClass_org_gameplay3d_Terrain","org/gameplay3d/util/NativeInterface.hx",190,0x672d7a9c)
		HX_STACK_ARG(classObj,"classObj")
		HX_STACK_LINE(190)
		Array< ::Dynamic > classObj1 = Array_obj< ::Dynamic >::__new().Add(classObj);		HX_STACK_VAR(classObj1,"classObj1");
		HX_STACK_LINE(195)
		::String name = ::Type_obj::getClassName(classObj1->__get((int)0).StaticCast< ::Class >());		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(196)
		int packageEnd = name.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(packageEnd,"packageEnd");
		HX_STACK_LINE(197)
		if (((packageEnd != (int)-1))){
			HX_STACK_LINE(198)
			::String _g = name.substr((packageEnd + (int)1),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			name = _g;
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,classObj1)
		::cpp::vm::WeakRef run(Dynamic nativeObject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
			HX_STACK_ARG(nativeObject,"nativeObject")
			{
				struct _Function_2_1{
					inline static ::org::gameplay3d::Terrain Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
							HX_STACK_LINE(207)
							::org::gameplay3d::Terrain result = ref->get();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(207)
							if (((result == null()))){
								HX_STACK_LINE(207)
								hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
								HX_STACK_LINE(207)
								result = ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
								HX_STACK_LINE(207)
								ref->set(result);
							}
							HX_STACK_LINE(207)
							return result;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::org::gameplay3d::Terrain Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
							HX_STACK_LINE(207)
							return ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
						}
						return null();
					}
				};
				HX_STACK_LINE(207)
				return ::cpp::vm::WeakRef_obj::__new((  (((nativeObject == null()))) ? ::org::gameplay3d::Terrain(null()) : ::org::gameplay3d::Terrain((  ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))) ? ::org::gameplay3d::Terrain(_Function_2_1::Block(nativeObject,classObj1)) : ::org::gameplay3d::Terrain(_Function_2_2::Block(nativeObject,classObj1)) )) ),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(204)
		::org::gameplay3d::util::NativeInterface_obj::factories->push( Dynamic(new _Function_1_1(classObj1)));
		HX_STACK_LINE(211)
		Dynamic _g1 = ::org::gameplay3d::util::NativeInterface_obj::factories->first();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		::org::gameplay3d::util::NativeInterface_obj::setReferenceConstructor(name,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeInterface_obj,registerClass_org_gameplay3d_Terrain,(void))

Void NativeInterface_obj::registerClass_org_gameplay3d_Technique( ::Class classObj){
{
		HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","registerClass_org_gameplay3d_Technique",0x365b9ef8,"org.gameplay3d.util.NativeInterface.registerClass_org_gameplay3d_Technique","org/gameplay3d/util/NativeInterface.hx",190,0x672d7a9c)
		HX_STACK_ARG(classObj,"classObj")
		HX_STACK_LINE(190)
		Array< ::Dynamic > classObj1 = Array_obj< ::Dynamic >::__new().Add(classObj);		HX_STACK_VAR(classObj1,"classObj1");
		HX_STACK_LINE(195)
		::String name = ::Type_obj::getClassName(classObj1->__get((int)0).StaticCast< ::Class >());		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(196)
		int packageEnd = name.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(packageEnd,"packageEnd");
		HX_STACK_LINE(197)
		if (((packageEnd != (int)-1))){
			HX_STACK_LINE(198)
			::String _g = name.substr((packageEnd + (int)1),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			name = _g;
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,classObj1)
		::cpp::vm::WeakRef run(Dynamic nativeObject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
			HX_STACK_ARG(nativeObject,"nativeObject")
			{
				struct _Function_2_1{
					inline static ::org::gameplay3d::Technique Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
							HX_STACK_LINE(207)
							::org::gameplay3d::Technique result = ref->get();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(207)
							if (((result == null()))){
								HX_STACK_LINE(207)
								hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
								HX_STACK_LINE(207)
								result = ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
								HX_STACK_LINE(207)
								ref->set(result);
							}
							HX_STACK_LINE(207)
							return result;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::org::gameplay3d::Technique Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
							HX_STACK_LINE(207)
							return ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
						}
						return null();
					}
				};
				HX_STACK_LINE(207)
				return ::cpp::vm::WeakRef_obj::__new((  (((nativeObject == null()))) ? ::org::gameplay3d::Technique(null()) : ::org::gameplay3d::Technique((  ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))) ? ::org::gameplay3d::Technique(_Function_2_1::Block(nativeObject,classObj1)) : ::org::gameplay3d::Technique(_Function_2_2::Block(nativeObject,classObj1)) )) ),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(204)
		::org::gameplay3d::util::NativeInterface_obj::factories->push( Dynamic(new _Function_1_1(classObj1)));
		HX_STACK_LINE(211)
		Dynamic _g1 = ::org::gameplay3d::util::NativeInterface_obj::factories->first();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		::org::gameplay3d::util::NativeInterface_obj::setReferenceConstructor(name,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeInterface_obj,registerClass_org_gameplay3d_Technique,(void))

Void NativeInterface_obj::registerClass_org_gameplay3d_Slider( ::Class classObj){
{
		HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","registerClass_org_gameplay3d_Slider",0xbf759fb9,"org.gameplay3d.util.NativeInterface.registerClass_org_gameplay3d_Slider","org/gameplay3d/util/NativeInterface.hx",190,0x672d7a9c)
		HX_STACK_ARG(classObj,"classObj")
		HX_STACK_LINE(190)
		Array< ::Dynamic > classObj1 = Array_obj< ::Dynamic >::__new().Add(classObj);		HX_STACK_VAR(classObj1,"classObj1");
		HX_STACK_LINE(195)
		::String name = ::Type_obj::getClassName(classObj1->__get((int)0).StaticCast< ::Class >());		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(196)
		int packageEnd = name.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(packageEnd,"packageEnd");
		HX_STACK_LINE(197)
		if (((packageEnd != (int)-1))){
			HX_STACK_LINE(198)
			::String _g = name.substr((packageEnd + (int)1),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			name = _g;
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,classObj1)
		::cpp::vm::WeakRef run(Dynamic nativeObject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
			HX_STACK_ARG(nativeObject,"nativeObject")
			{
				struct _Function_2_1{
					inline static ::org::gameplay3d::Slider Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
							HX_STACK_LINE(207)
							::org::gameplay3d::Slider result = ref->get();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(207)
							if (((result == null()))){
								HX_STACK_LINE(207)
								hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
								HX_STACK_LINE(207)
								result = ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
								HX_STACK_LINE(207)
								ref->set(result);
							}
							HX_STACK_LINE(207)
							return result;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::org::gameplay3d::Slider Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
							HX_STACK_LINE(207)
							return ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
						}
						return null();
					}
				};
				HX_STACK_LINE(207)
				return ::cpp::vm::WeakRef_obj::__new((  (((nativeObject == null()))) ? ::org::gameplay3d::Slider(null()) : ::org::gameplay3d::Slider((  ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))) ? ::org::gameplay3d::Slider(_Function_2_1::Block(nativeObject,classObj1)) : ::org::gameplay3d::Slider(_Function_2_2::Block(nativeObject,classObj1)) )) ),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(204)
		::org::gameplay3d::util::NativeInterface_obj::factories->push( Dynamic(new _Function_1_1(classObj1)));
		HX_STACK_LINE(211)
		Dynamic _g1 = ::org::gameplay3d::util::NativeInterface_obj::factories->first();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		::org::gameplay3d::util::NativeInterface_obj::setReferenceConstructor(name,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeInterface_obj,registerClass_org_gameplay3d_Slider,(void))

Void NativeInterface_obj::registerClass_org_gameplay3d_Scene( ::Class classObj){
{
		HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","registerClass_org_gameplay3d_Scene",0x81363ab4,"org.gameplay3d.util.NativeInterface.registerClass_org_gameplay3d_Scene","org/gameplay3d/util/NativeInterface.hx",190,0x672d7a9c)
		HX_STACK_ARG(classObj,"classObj")
		HX_STACK_LINE(190)
		Array< ::Dynamic > classObj1 = Array_obj< ::Dynamic >::__new().Add(classObj);		HX_STACK_VAR(classObj1,"classObj1");
		HX_STACK_LINE(195)
		::String name = ::Type_obj::getClassName(classObj1->__get((int)0).StaticCast< ::Class >());		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(196)
		int packageEnd = name.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(packageEnd,"packageEnd");
		HX_STACK_LINE(197)
		if (((packageEnd != (int)-1))){
			HX_STACK_LINE(198)
			::String _g = name.substr((packageEnd + (int)1),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			name = _g;
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,classObj1)
		::cpp::vm::WeakRef run(Dynamic nativeObject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
			HX_STACK_ARG(nativeObject,"nativeObject")
			{
				struct _Function_2_1{
					inline static ::org::gameplay3d::Scene Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
							HX_STACK_LINE(207)
							::org::gameplay3d::Scene result = ref->get();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(207)
							if (((result == null()))){
								HX_STACK_LINE(207)
								hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
								HX_STACK_LINE(207)
								result = ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
								HX_STACK_LINE(207)
								ref->set(result);
							}
							HX_STACK_LINE(207)
							return result;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::org::gameplay3d::Scene Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
							HX_STACK_LINE(207)
							return ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
						}
						return null();
					}
				};
				HX_STACK_LINE(207)
				return ::cpp::vm::WeakRef_obj::__new((  (((nativeObject == null()))) ? ::org::gameplay3d::Scene(null()) : ::org::gameplay3d::Scene((  ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))) ? ::org::gameplay3d::Scene(_Function_2_1::Block(nativeObject,classObj1)) : ::org::gameplay3d::Scene(_Function_2_2::Block(nativeObject,classObj1)) )) ),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(204)
		::org::gameplay3d::util::NativeInterface_obj::factories->push( Dynamic(new _Function_1_1(classObj1)));
		HX_STACK_LINE(211)
		Dynamic _g1 = ::org::gameplay3d::util::NativeInterface_obj::factories->first();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		::org::gameplay3d::util::NativeInterface_obj::setReferenceConstructor(name,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeInterface_obj,registerClass_org_gameplay3d_Scene,(void))

Void NativeInterface_obj::registerClass_org_gameplay3d_RenderTarget( ::Class classObj){
{
		HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","registerClass_org_gameplay3d_RenderTarget",0xdc1b12df,"org.gameplay3d.util.NativeInterface.registerClass_org_gameplay3d_RenderTarget","org/gameplay3d/util/NativeInterface.hx",190,0x672d7a9c)
		HX_STACK_ARG(classObj,"classObj")
		HX_STACK_LINE(190)
		Array< ::Dynamic > classObj1 = Array_obj< ::Dynamic >::__new().Add(classObj);		HX_STACK_VAR(classObj1,"classObj1");
		HX_STACK_LINE(195)
		::String name = ::Type_obj::getClassName(classObj1->__get((int)0).StaticCast< ::Class >());		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(196)
		int packageEnd = name.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(packageEnd,"packageEnd");
		HX_STACK_LINE(197)
		if (((packageEnd != (int)-1))){
			HX_STACK_LINE(198)
			::String _g = name.substr((packageEnd + (int)1),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			name = _g;
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,classObj1)
		::cpp::vm::WeakRef run(Dynamic nativeObject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
			HX_STACK_ARG(nativeObject,"nativeObject")
			{
				struct _Function_2_1{
					inline static ::org::gameplay3d::RenderTarget Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
							HX_STACK_LINE(207)
							::org::gameplay3d::RenderTarget result = ref->get();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(207)
							if (((result == null()))){
								HX_STACK_LINE(207)
								hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
								HX_STACK_LINE(207)
								result = ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
								HX_STACK_LINE(207)
								ref->set(result);
							}
							HX_STACK_LINE(207)
							return result;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::org::gameplay3d::RenderTarget Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
							HX_STACK_LINE(207)
							return ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
						}
						return null();
					}
				};
				HX_STACK_LINE(207)
				return ::cpp::vm::WeakRef_obj::__new((  (((nativeObject == null()))) ? ::org::gameplay3d::RenderTarget(null()) : ::org::gameplay3d::RenderTarget((  ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))) ? ::org::gameplay3d::RenderTarget(_Function_2_1::Block(nativeObject,classObj1)) : ::org::gameplay3d::RenderTarget(_Function_2_2::Block(nativeObject,classObj1)) )) ),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(204)
		::org::gameplay3d::util::NativeInterface_obj::factories->push( Dynamic(new _Function_1_1(classObj1)));
		HX_STACK_LINE(211)
		Dynamic _g1 = ::org::gameplay3d::util::NativeInterface_obj::factories->first();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		::org::gameplay3d::util::NativeInterface_obj::setReferenceConstructor(name,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeInterface_obj,registerClass_org_gameplay3d_RenderTarget,(void))

Void NativeInterface_obj::registerClass_org_gameplay3d_RenderState_StateBlock( ::Class classObj){
{
		HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","registerClass_org_gameplay3d_RenderState_StateBlock",0x7f3b9158,"org.gameplay3d.util.NativeInterface.registerClass_org_gameplay3d_RenderState_StateBlock","org/gameplay3d/util/NativeInterface.hx",190,0x672d7a9c)
		HX_STACK_ARG(classObj,"classObj")
		HX_STACK_LINE(190)
		Array< ::Dynamic > classObj1 = Array_obj< ::Dynamic >::__new().Add(classObj);		HX_STACK_VAR(classObj1,"classObj1");
		HX_STACK_LINE(195)
		::String name = ::Type_obj::getClassName(classObj1->__get((int)0).StaticCast< ::Class >());		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(196)
		int packageEnd = name.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(packageEnd,"packageEnd");
		HX_STACK_LINE(197)
		if (((packageEnd != (int)-1))){
			HX_STACK_LINE(198)
			::String _g = name.substr((packageEnd + (int)1),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			name = _g;
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,classObj1)
		::cpp::vm::WeakRef run(Dynamic nativeObject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
			HX_STACK_ARG(nativeObject,"nativeObject")
			{
				struct _Function_2_1{
					inline static ::org::gameplay3d::RenderState_StateBlock Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
							HX_STACK_LINE(207)
							::org::gameplay3d::RenderState_StateBlock result = ref->get();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(207)
							if (((result == null()))){
								HX_STACK_LINE(207)
								hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
								HX_STACK_LINE(207)
								result = ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
								HX_STACK_LINE(207)
								ref->set(result);
							}
							HX_STACK_LINE(207)
							return result;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::org::gameplay3d::RenderState_StateBlock Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
							HX_STACK_LINE(207)
							return ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
						}
						return null();
					}
				};
				HX_STACK_LINE(207)
				return ::cpp::vm::WeakRef_obj::__new((  (((nativeObject == null()))) ? ::org::gameplay3d::RenderState_StateBlock(null()) : ::org::gameplay3d::RenderState_StateBlock((  ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))) ? ::org::gameplay3d::RenderState_StateBlock(_Function_2_1::Block(nativeObject,classObj1)) : ::org::gameplay3d::RenderState_StateBlock(_Function_2_2::Block(nativeObject,classObj1)) )) ),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(204)
		::org::gameplay3d::util::NativeInterface_obj::factories->push( Dynamic(new _Function_1_1(classObj1)));
		HX_STACK_LINE(211)
		Dynamic _g1 = ::org::gameplay3d::util::NativeInterface_obj::factories->first();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		::org::gameplay3d::util::NativeInterface_obj::setReferenceConstructor(name,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeInterface_obj,registerClass_org_gameplay3d_RenderState_StateBlock,(void))

Void NativeInterface_obj::registerClass_org_gameplay3d_RenderState( ::Class classObj){
{
		HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","registerClass_org_gameplay3d_RenderState",0x41d80243,"org.gameplay3d.util.NativeInterface.registerClass_org_gameplay3d_RenderState","org/gameplay3d/util/NativeInterface.hx",190,0x672d7a9c)
		HX_STACK_ARG(classObj,"classObj")
		HX_STACK_LINE(190)
		Array< ::Dynamic > classObj1 = Array_obj< ::Dynamic >::__new().Add(classObj);		HX_STACK_VAR(classObj1,"classObj1");
		HX_STACK_LINE(195)
		::String name = ::Type_obj::getClassName(classObj1->__get((int)0).StaticCast< ::Class >());		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(196)
		int packageEnd = name.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(packageEnd,"packageEnd");
		HX_STACK_LINE(197)
		if (((packageEnd != (int)-1))){
			HX_STACK_LINE(198)
			::String _g = name.substr((packageEnd + (int)1),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			name = _g;
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,classObj1)
		::cpp::vm::WeakRef run(Dynamic nativeObject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
			HX_STACK_ARG(nativeObject,"nativeObject")
			{
				struct _Function_2_1{
					inline static ::org::gameplay3d::RenderState Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
							HX_STACK_LINE(207)
							::org::gameplay3d::RenderState result = ref->get();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(207)
							if (((result == null()))){
								HX_STACK_LINE(207)
								hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
								HX_STACK_LINE(207)
								result = ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
								HX_STACK_LINE(207)
								ref->set(result);
							}
							HX_STACK_LINE(207)
							return result;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::org::gameplay3d::RenderState Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
							HX_STACK_LINE(207)
							return ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
						}
						return null();
					}
				};
				HX_STACK_LINE(207)
				return ::cpp::vm::WeakRef_obj::__new((  (((nativeObject == null()))) ? ::org::gameplay3d::RenderState(null()) : ::org::gameplay3d::RenderState((  ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))) ? ::org::gameplay3d::RenderState(_Function_2_1::Block(nativeObject,classObj1)) : ::org::gameplay3d::RenderState(_Function_2_2::Block(nativeObject,classObj1)) )) ),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(204)
		::org::gameplay3d::util::NativeInterface_obj::factories->push( Dynamic(new _Function_1_1(classObj1)));
		HX_STACK_LINE(211)
		Dynamic _g1 = ::org::gameplay3d::util::NativeInterface_obj::factories->first();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		::org::gameplay3d::util::NativeInterface_obj::setReferenceConstructor(name,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeInterface_obj,registerClass_org_gameplay3d_RenderState,(void))

Void NativeInterface_obj::registerClass_org_gameplay3d_RadioButton( ::Class classObj){
{
		HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","registerClass_org_gameplay3d_RadioButton",0x239fb4b5,"org.gameplay3d.util.NativeInterface.registerClass_org_gameplay3d_RadioButton","org/gameplay3d/util/NativeInterface.hx",190,0x672d7a9c)
		HX_STACK_ARG(classObj,"classObj")
		HX_STACK_LINE(190)
		Array< ::Dynamic > classObj1 = Array_obj< ::Dynamic >::__new().Add(classObj);		HX_STACK_VAR(classObj1,"classObj1");
		HX_STACK_LINE(195)
		::String name = ::Type_obj::getClassName(classObj1->__get((int)0).StaticCast< ::Class >());		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(196)
		int packageEnd = name.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(packageEnd,"packageEnd");
		HX_STACK_LINE(197)
		if (((packageEnd != (int)-1))){
			HX_STACK_LINE(198)
			::String _g = name.substr((packageEnd + (int)1),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			name = _g;
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,classObj1)
		::cpp::vm::WeakRef run(Dynamic nativeObject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
			HX_STACK_ARG(nativeObject,"nativeObject")
			{
				struct _Function_2_1{
					inline static ::org::gameplay3d::RadioButton Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
							HX_STACK_LINE(207)
							::org::gameplay3d::RadioButton result = ref->get();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(207)
							if (((result == null()))){
								HX_STACK_LINE(207)
								hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
								HX_STACK_LINE(207)
								result = ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
								HX_STACK_LINE(207)
								ref->set(result);
							}
							HX_STACK_LINE(207)
							return result;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::org::gameplay3d::RadioButton Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
							HX_STACK_LINE(207)
							return ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
						}
						return null();
					}
				};
				HX_STACK_LINE(207)
				return ::cpp::vm::WeakRef_obj::__new((  (((nativeObject == null()))) ? ::org::gameplay3d::RadioButton(null()) : ::org::gameplay3d::RadioButton((  ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))) ? ::org::gameplay3d::RadioButton(_Function_2_1::Block(nativeObject,classObj1)) : ::org::gameplay3d::RadioButton(_Function_2_2::Block(nativeObject,classObj1)) )) ),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(204)
		::org::gameplay3d::util::NativeInterface_obj::factories->push( Dynamic(new _Function_1_1(classObj1)));
		HX_STACK_LINE(211)
		Dynamic _g1 = ::org::gameplay3d::util::NativeInterface_obj::factories->first();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		::org::gameplay3d::util::NativeInterface_obj::setReferenceConstructor(name,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeInterface_obj,registerClass_org_gameplay3d_RadioButton,(void))

Void NativeInterface_obj::registerClass_org_gameplay3d_PhysicsCollisionShape( ::Class classObj){
{
		HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","registerClass_org_gameplay3d_PhysicsCollisionShape",0xc01379de,"org.gameplay3d.util.NativeInterface.registerClass_org_gameplay3d_PhysicsCollisionShape","org/gameplay3d/util/NativeInterface.hx",190,0x672d7a9c)
		HX_STACK_ARG(classObj,"classObj")
		HX_STACK_LINE(190)
		Array< ::Dynamic > classObj1 = Array_obj< ::Dynamic >::__new().Add(classObj);		HX_STACK_VAR(classObj1,"classObj1");
		HX_STACK_LINE(195)
		::String name = ::Type_obj::getClassName(classObj1->__get((int)0).StaticCast< ::Class >());		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(196)
		int packageEnd = name.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(packageEnd,"packageEnd");
		HX_STACK_LINE(197)
		if (((packageEnd != (int)-1))){
			HX_STACK_LINE(198)
			::String _g = name.substr((packageEnd + (int)1),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			name = _g;
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,classObj1)
		::cpp::vm::WeakRef run(Dynamic nativeObject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
			HX_STACK_ARG(nativeObject,"nativeObject")
			{
				struct _Function_2_1{
					inline static ::org::gameplay3d::PhysicsCollisionShape Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
							HX_STACK_LINE(207)
							::org::gameplay3d::PhysicsCollisionShape result = ref->get();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(207)
							if (((result == null()))){
								HX_STACK_LINE(207)
								hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
								HX_STACK_LINE(207)
								result = ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
								HX_STACK_LINE(207)
								ref->set(result);
							}
							HX_STACK_LINE(207)
							return result;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::org::gameplay3d::PhysicsCollisionShape Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
							HX_STACK_LINE(207)
							return ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
						}
						return null();
					}
				};
				HX_STACK_LINE(207)
				return ::cpp::vm::WeakRef_obj::__new((  (((nativeObject == null()))) ? ::org::gameplay3d::PhysicsCollisionShape(null()) : ::org::gameplay3d::PhysicsCollisionShape((  ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))) ? ::org::gameplay3d::PhysicsCollisionShape(_Function_2_1::Block(nativeObject,classObj1)) : ::org::gameplay3d::PhysicsCollisionShape(_Function_2_2::Block(nativeObject,classObj1)) )) ),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(204)
		::org::gameplay3d::util::NativeInterface_obj::factories->push( Dynamic(new _Function_1_1(classObj1)));
		HX_STACK_LINE(211)
		Dynamic _g1 = ::org::gameplay3d::util::NativeInterface_obj::factories->first();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		::org::gameplay3d::util::NativeInterface_obj::setReferenceConstructor(name,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeInterface_obj,registerClass_org_gameplay3d_PhysicsCollisionShape,(void))

Void NativeInterface_obj::registerClass_org_gameplay3d_Pass( ::Class classObj){
{
		HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","registerClass_org_gameplay3d_Pass",0x17d8a869,"org.gameplay3d.util.NativeInterface.registerClass_org_gameplay3d_Pass","org/gameplay3d/util/NativeInterface.hx",190,0x672d7a9c)
		HX_STACK_ARG(classObj,"classObj")
		HX_STACK_LINE(190)
		Array< ::Dynamic > classObj1 = Array_obj< ::Dynamic >::__new().Add(classObj);		HX_STACK_VAR(classObj1,"classObj1");
		HX_STACK_LINE(195)
		::String name = ::Type_obj::getClassName(classObj1->__get((int)0).StaticCast< ::Class >());		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(196)
		int packageEnd = name.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(packageEnd,"packageEnd");
		HX_STACK_LINE(197)
		if (((packageEnd != (int)-1))){
			HX_STACK_LINE(198)
			::String _g = name.substr((packageEnd + (int)1),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			name = _g;
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,classObj1)
		::cpp::vm::WeakRef run(Dynamic nativeObject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
			HX_STACK_ARG(nativeObject,"nativeObject")
			{
				struct _Function_2_1{
					inline static ::org::gameplay3d::Pass Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
							HX_STACK_LINE(207)
							::org::gameplay3d::Pass result = ref->get();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(207)
							if (((result == null()))){
								HX_STACK_LINE(207)
								hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
								HX_STACK_LINE(207)
								result = ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
								HX_STACK_LINE(207)
								ref->set(result);
							}
							HX_STACK_LINE(207)
							return result;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::org::gameplay3d::Pass Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
							HX_STACK_LINE(207)
							return ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
						}
						return null();
					}
				};
				HX_STACK_LINE(207)
				return ::cpp::vm::WeakRef_obj::__new((  (((nativeObject == null()))) ? ::org::gameplay3d::Pass(null()) : ::org::gameplay3d::Pass((  ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))) ? ::org::gameplay3d::Pass(_Function_2_1::Block(nativeObject,classObj1)) : ::org::gameplay3d::Pass(_Function_2_2::Block(nativeObject,classObj1)) )) ),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(204)
		::org::gameplay3d::util::NativeInterface_obj::factories->push( Dynamic(new _Function_1_1(classObj1)));
		HX_STACK_LINE(211)
		Dynamic _g1 = ::org::gameplay3d::util::NativeInterface_obj::factories->first();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		::org::gameplay3d::util::NativeInterface_obj::setReferenceConstructor(name,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeInterface_obj,registerClass_org_gameplay3d_Pass,(void))

Void NativeInterface_obj::registerClass_org_gameplay3d_ParticleEmitter( ::Class classObj){
{
		HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","registerClass_org_gameplay3d_ParticleEmitter",0xada84730,"org.gameplay3d.util.NativeInterface.registerClass_org_gameplay3d_ParticleEmitter","org/gameplay3d/util/NativeInterface.hx",190,0x672d7a9c)
		HX_STACK_ARG(classObj,"classObj")
		HX_STACK_LINE(190)
		Array< ::Dynamic > classObj1 = Array_obj< ::Dynamic >::__new().Add(classObj);		HX_STACK_VAR(classObj1,"classObj1");
		HX_STACK_LINE(195)
		::String name = ::Type_obj::getClassName(classObj1->__get((int)0).StaticCast< ::Class >());		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(196)
		int packageEnd = name.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(packageEnd,"packageEnd");
		HX_STACK_LINE(197)
		if (((packageEnd != (int)-1))){
			HX_STACK_LINE(198)
			::String _g = name.substr((packageEnd + (int)1),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			name = _g;
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,classObj1)
		::cpp::vm::WeakRef run(Dynamic nativeObject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
			HX_STACK_ARG(nativeObject,"nativeObject")
			{
				struct _Function_2_1{
					inline static ::org::gameplay3d::ParticleEmitter Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
							HX_STACK_LINE(207)
							::org::gameplay3d::ParticleEmitter result = ref->get();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(207)
							if (((result == null()))){
								HX_STACK_LINE(207)
								hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
								HX_STACK_LINE(207)
								result = ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
								HX_STACK_LINE(207)
								ref->set(result);
							}
							HX_STACK_LINE(207)
							return result;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::org::gameplay3d::ParticleEmitter Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
							HX_STACK_LINE(207)
							return ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
						}
						return null();
					}
				};
				HX_STACK_LINE(207)
				return ::cpp::vm::WeakRef_obj::__new((  (((nativeObject == null()))) ? ::org::gameplay3d::ParticleEmitter(null()) : ::org::gameplay3d::ParticleEmitter((  ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))) ? ::org::gameplay3d::ParticleEmitter(_Function_2_1::Block(nativeObject,classObj1)) : ::org::gameplay3d::ParticleEmitter(_Function_2_2::Block(nativeObject,classObj1)) )) ),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(204)
		::org::gameplay3d::util::NativeInterface_obj::factories->push( Dynamic(new _Function_1_1(classObj1)));
		HX_STACK_LINE(211)
		Dynamic _g1 = ::org::gameplay3d::util::NativeInterface_obj::factories->first();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		::org::gameplay3d::util::NativeInterface_obj::setReferenceConstructor(name,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeInterface_obj,registerClass_org_gameplay3d_ParticleEmitter,(void))

Void NativeInterface_obj::registerClass_org_gameplay3d_Node( ::Class classObj){
{
		HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","registerClass_org_gameplay3d_Node",0x1690cd9a,"org.gameplay3d.util.NativeInterface.registerClass_org_gameplay3d_Node","org/gameplay3d/util/NativeInterface.hx",190,0x672d7a9c)
		HX_STACK_ARG(classObj,"classObj")
		HX_STACK_LINE(190)
		Array< ::Dynamic > classObj1 = Array_obj< ::Dynamic >::__new().Add(classObj);		HX_STACK_VAR(classObj1,"classObj1");
		HX_STACK_LINE(195)
		::String name = ::Type_obj::getClassName(classObj1->__get((int)0).StaticCast< ::Class >());		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(196)
		int packageEnd = name.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(packageEnd,"packageEnd");
		HX_STACK_LINE(197)
		if (((packageEnd != (int)-1))){
			HX_STACK_LINE(198)
			::String _g = name.substr((packageEnd + (int)1),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			name = _g;
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,classObj1)
		::cpp::vm::WeakRef run(Dynamic nativeObject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
			HX_STACK_ARG(nativeObject,"nativeObject")
			{
				struct _Function_2_1{
					inline static ::org::gameplay3d::Node Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
							HX_STACK_LINE(207)
							::org::gameplay3d::Node result = ref->get();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(207)
							if (((result == null()))){
								HX_STACK_LINE(207)
								hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
								HX_STACK_LINE(207)
								result = ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
								HX_STACK_LINE(207)
								ref->set(result);
							}
							HX_STACK_LINE(207)
							return result;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::org::gameplay3d::Node Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
							HX_STACK_LINE(207)
							return ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
						}
						return null();
					}
				};
				HX_STACK_LINE(207)
				return ::cpp::vm::WeakRef_obj::__new((  (((nativeObject == null()))) ? ::org::gameplay3d::Node(null()) : ::org::gameplay3d::Node((  ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))) ? ::org::gameplay3d::Node(_Function_2_1::Block(nativeObject,classObj1)) : ::org::gameplay3d::Node(_Function_2_2::Block(nativeObject,classObj1)) )) ),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(204)
		::org::gameplay3d::util::NativeInterface_obj::factories->push( Dynamic(new _Function_1_1(classObj1)));
		HX_STACK_LINE(211)
		Dynamic _g1 = ::org::gameplay3d::util::NativeInterface_obj::factories->first();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		::org::gameplay3d::util::NativeInterface_obj::setReferenceConstructor(name,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeInterface_obj,registerClass_org_gameplay3d_Node,(void))

Void NativeInterface_obj::registerClass_org_gameplay3d_Model( ::Class classObj){
{
		HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","registerClass_org_gameplay3d_Model",0x14bc8511,"org.gameplay3d.util.NativeInterface.registerClass_org_gameplay3d_Model","org/gameplay3d/util/NativeInterface.hx",190,0x672d7a9c)
		HX_STACK_ARG(classObj,"classObj")
		HX_STACK_LINE(190)
		Array< ::Dynamic > classObj1 = Array_obj< ::Dynamic >::__new().Add(classObj);		HX_STACK_VAR(classObj1,"classObj1");
		HX_STACK_LINE(195)
		::String name = ::Type_obj::getClassName(classObj1->__get((int)0).StaticCast< ::Class >());		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(196)
		int packageEnd = name.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(packageEnd,"packageEnd");
		HX_STACK_LINE(197)
		if (((packageEnd != (int)-1))){
			HX_STACK_LINE(198)
			::String _g = name.substr((packageEnd + (int)1),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			name = _g;
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,classObj1)
		::cpp::vm::WeakRef run(Dynamic nativeObject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
			HX_STACK_ARG(nativeObject,"nativeObject")
			{
				struct _Function_2_1{
					inline static ::org::gameplay3d::Model Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
							HX_STACK_LINE(207)
							::org::gameplay3d::Model result = ref->get();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(207)
							if (((result == null()))){
								HX_STACK_LINE(207)
								hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
								HX_STACK_LINE(207)
								result = ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
								HX_STACK_LINE(207)
								ref->set(result);
							}
							HX_STACK_LINE(207)
							return result;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::org::gameplay3d::Model Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
							HX_STACK_LINE(207)
							return ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
						}
						return null();
					}
				};
				HX_STACK_LINE(207)
				return ::cpp::vm::WeakRef_obj::__new((  (((nativeObject == null()))) ? ::org::gameplay3d::Model(null()) : ::org::gameplay3d::Model((  ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))) ? ::org::gameplay3d::Model(_Function_2_1::Block(nativeObject,classObj1)) : ::org::gameplay3d::Model(_Function_2_2::Block(nativeObject,classObj1)) )) ),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(204)
		::org::gameplay3d::util::NativeInterface_obj::factories->push( Dynamic(new _Function_1_1(classObj1)));
		HX_STACK_LINE(211)
		Dynamic _g1 = ::org::gameplay3d::util::NativeInterface_obj::factories->first();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		::org::gameplay3d::util::NativeInterface_obj::setReferenceConstructor(name,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeInterface_obj,registerClass_org_gameplay3d_Model,(void))

Void NativeInterface_obj::registerClass_org_gameplay3d_Mesh( ::Class classObj){
{
		HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","registerClass_org_gameplay3d_Mesh",0x15e00d85,"org.gameplay3d.util.NativeInterface.registerClass_org_gameplay3d_Mesh","org/gameplay3d/util/NativeInterface.hx",190,0x672d7a9c)
		HX_STACK_ARG(classObj,"classObj")
		HX_STACK_LINE(190)
		Array< ::Dynamic > classObj1 = Array_obj< ::Dynamic >::__new().Add(classObj);		HX_STACK_VAR(classObj1,"classObj1");
		HX_STACK_LINE(195)
		::String name = ::Type_obj::getClassName(classObj1->__get((int)0).StaticCast< ::Class >());		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(196)
		int packageEnd = name.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(packageEnd,"packageEnd");
		HX_STACK_LINE(197)
		if (((packageEnd != (int)-1))){
			HX_STACK_LINE(198)
			::String _g = name.substr((packageEnd + (int)1),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			name = _g;
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,classObj1)
		::cpp::vm::WeakRef run(Dynamic nativeObject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
			HX_STACK_ARG(nativeObject,"nativeObject")
			{
				struct _Function_2_1{
					inline static ::org::gameplay3d::Mesh Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
							HX_STACK_LINE(207)
							::org::gameplay3d::Mesh result = ref->get();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(207)
							if (((result == null()))){
								HX_STACK_LINE(207)
								hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
								HX_STACK_LINE(207)
								result = ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
								HX_STACK_LINE(207)
								ref->set(result);
							}
							HX_STACK_LINE(207)
							return result;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::org::gameplay3d::Mesh Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
							HX_STACK_LINE(207)
							return ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
						}
						return null();
					}
				};
				HX_STACK_LINE(207)
				return ::cpp::vm::WeakRef_obj::__new((  (((nativeObject == null()))) ? ::org::gameplay3d::Mesh(null()) : ::org::gameplay3d::Mesh((  ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))) ? ::org::gameplay3d::Mesh(_Function_2_1::Block(nativeObject,classObj1)) : ::org::gameplay3d::Mesh(_Function_2_2::Block(nativeObject,classObj1)) )) ),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(204)
		::org::gameplay3d::util::NativeInterface_obj::factories->push( Dynamic(new _Function_1_1(classObj1)));
		HX_STACK_LINE(211)
		Dynamic _g1 = ::org::gameplay3d::util::NativeInterface_obj::factories->first();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		::org::gameplay3d::util::NativeInterface_obj::setReferenceConstructor(name,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeInterface_obj,registerClass_org_gameplay3d_Mesh,(void))

Void NativeInterface_obj::registerClass_org_gameplay3d_MaterialParameter( ::Class classObj){
{
		HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","registerClass_org_gameplay3d_MaterialParameter",0xc50b496a,"org.gameplay3d.util.NativeInterface.registerClass_org_gameplay3d_MaterialParameter","org/gameplay3d/util/NativeInterface.hx",190,0x672d7a9c)
		HX_STACK_ARG(classObj,"classObj")
		HX_STACK_LINE(190)
		Array< ::Dynamic > classObj1 = Array_obj< ::Dynamic >::__new().Add(classObj);		HX_STACK_VAR(classObj1,"classObj1");
		HX_STACK_LINE(195)
		::String name = ::Type_obj::getClassName(classObj1->__get((int)0).StaticCast< ::Class >());		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(196)
		int packageEnd = name.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(packageEnd,"packageEnd");
		HX_STACK_LINE(197)
		if (((packageEnd != (int)-1))){
			HX_STACK_LINE(198)
			::String _g = name.substr((packageEnd + (int)1),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			name = _g;
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,classObj1)
		::cpp::vm::WeakRef run(Dynamic nativeObject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
			HX_STACK_ARG(nativeObject,"nativeObject")
			{
				struct _Function_2_1{
					inline static ::org::gameplay3d::MaterialParameter Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
							HX_STACK_LINE(207)
							::org::gameplay3d::MaterialParameter result = ref->get();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(207)
							if (((result == null()))){
								HX_STACK_LINE(207)
								hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
								HX_STACK_LINE(207)
								result = ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
								HX_STACK_LINE(207)
								ref->set(result);
							}
							HX_STACK_LINE(207)
							return result;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::org::gameplay3d::MaterialParameter Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
							HX_STACK_LINE(207)
							return ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
						}
						return null();
					}
				};
				HX_STACK_LINE(207)
				return ::cpp::vm::WeakRef_obj::__new((  (((nativeObject == null()))) ? ::org::gameplay3d::MaterialParameter(null()) : ::org::gameplay3d::MaterialParameter((  ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))) ? ::org::gameplay3d::MaterialParameter(_Function_2_1::Block(nativeObject,classObj1)) : ::org::gameplay3d::MaterialParameter(_Function_2_2::Block(nativeObject,classObj1)) )) ),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(204)
		::org::gameplay3d::util::NativeInterface_obj::factories->push( Dynamic(new _Function_1_1(classObj1)));
		HX_STACK_LINE(211)
		Dynamic _g1 = ::org::gameplay3d::util::NativeInterface_obj::factories->first();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		::org::gameplay3d::util::NativeInterface_obj::setReferenceConstructor(name,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeInterface_obj,registerClass_org_gameplay3d_MaterialParameter,(void))

Void NativeInterface_obj::registerClass_org_gameplay3d_Material( ::Class classObj){
{
		HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","registerClass_org_gameplay3d_Material",0xa131cc3f,"org.gameplay3d.util.NativeInterface.registerClass_org_gameplay3d_Material","org/gameplay3d/util/NativeInterface.hx",190,0x672d7a9c)
		HX_STACK_ARG(classObj,"classObj")
		HX_STACK_LINE(190)
		Array< ::Dynamic > classObj1 = Array_obj< ::Dynamic >::__new().Add(classObj);		HX_STACK_VAR(classObj1,"classObj1");
		HX_STACK_LINE(195)
		::String name = ::Type_obj::getClassName(classObj1->__get((int)0).StaticCast< ::Class >());		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(196)
		int packageEnd = name.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(packageEnd,"packageEnd");
		HX_STACK_LINE(197)
		if (((packageEnd != (int)-1))){
			HX_STACK_LINE(198)
			::String _g = name.substr((packageEnd + (int)1),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			name = _g;
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,classObj1)
		::cpp::vm::WeakRef run(Dynamic nativeObject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
			HX_STACK_ARG(nativeObject,"nativeObject")
			{
				struct _Function_2_1{
					inline static ::org::gameplay3d::Material Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
							HX_STACK_LINE(207)
							::org::gameplay3d::Material result = ref->get();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(207)
							if (((result == null()))){
								HX_STACK_LINE(207)
								hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
								HX_STACK_LINE(207)
								result = ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
								HX_STACK_LINE(207)
								ref->set(result);
							}
							HX_STACK_LINE(207)
							return result;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::org::gameplay3d::Material Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
							HX_STACK_LINE(207)
							return ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
						}
						return null();
					}
				};
				HX_STACK_LINE(207)
				return ::cpp::vm::WeakRef_obj::__new((  (((nativeObject == null()))) ? ::org::gameplay3d::Material(null()) : ::org::gameplay3d::Material((  ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))) ? ::org::gameplay3d::Material(_Function_2_1::Block(nativeObject,classObj1)) : ::org::gameplay3d::Material(_Function_2_2::Block(nativeObject,classObj1)) )) ),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(204)
		::org::gameplay3d::util::NativeInterface_obj::factories->push( Dynamic(new _Function_1_1(classObj1)));
		HX_STACK_LINE(211)
		Dynamic _g1 = ::org::gameplay3d::util::NativeInterface_obj::factories->first();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		::org::gameplay3d::util::NativeInterface_obj::setReferenceConstructor(name,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeInterface_obj,registerClass_org_gameplay3d_Material,(void))

Void NativeInterface_obj::registerClass_org_gameplay3d_Light( ::Class classObj){
{
		HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","registerClass_org_gameplay3d_Light",0x7d60f23e,"org.gameplay3d.util.NativeInterface.registerClass_org_gameplay3d_Light","org/gameplay3d/util/NativeInterface.hx",190,0x672d7a9c)
		HX_STACK_ARG(classObj,"classObj")
		HX_STACK_LINE(190)
		Array< ::Dynamic > classObj1 = Array_obj< ::Dynamic >::__new().Add(classObj);		HX_STACK_VAR(classObj1,"classObj1");
		HX_STACK_LINE(195)
		::String name = ::Type_obj::getClassName(classObj1->__get((int)0).StaticCast< ::Class >());		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(196)
		int packageEnd = name.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(packageEnd,"packageEnd");
		HX_STACK_LINE(197)
		if (((packageEnd != (int)-1))){
			HX_STACK_LINE(198)
			::String _g = name.substr((packageEnd + (int)1),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			name = _g;
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,classObj1)
		::cpp::vm::WeakRef run(Dynamic nativeObject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
			HX_STACK_ARG(nativeObject,"nativeObject")
			{
				struct _Function_2_1{
					inline static ::org::gameplay3d::Light Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
							HX_STACK_LINE(207)
							::org::gameplay3d::Light result = ref->get();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(207)
							if (((result == null()))){
								HX_STACK_LINE(207)
								hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
								HX_STACK_LINE(207)
								result = ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
								HX_STACK_LINE(207)
								ref->set(result);
							}
							HX_STACK_LINE(207)
							return result;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::org::gameplay3d::Light Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
							HX_STACK_LINE(207)
							return ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
						}
						return null();
					}
				};
				HX_STACK_LINE(207)
				return ::cpp::vm::WeakRef_obj::__new((  (((nativeObject == null()))) ? ::org::gameplay3d::Light(null()) : ::org::gameplay3d::Light((  ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))) ? ::org::gameplay3d::Light(_Function_2_1::Block(nativeObject,classObj1)) : ::org::gameplay3d::Light(_Function_2_2::Block(nativeObject,classObj1)) )) ),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(204)
		::org::gameplay3d::util::NativeInterface_obj::factories->push( Dynamic(new _Function_1_1(classObj1)));
		HX_STACK_LINE(211)
		Dynamic _g1 = ::org::gameplay3d::util::NativeInterface_obj::factories->first();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		::org::gameplay3d::util::NativeInterface_obj::setReferenceConstructor(name,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeInterface_obj,registerClass_org_gameplay3d_Light,(void))

Void NativeInterface_obj::registerClass_org_gameplay3d_Layout( ::Class classObj){
{
		HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","registerClass_org_gameplay3d_Layout",0xa8298842,"org.gameplay3d.util.NativeInterface.registerClass_org_gameplay3d_Layout","org/gameplay3d/util/NativeInterface.hx",190,0x672d7a9c)
		HX_STACK_ARG(classObj,"classObj")
		HX_STACK_LINE(190)
		Array< ::Dynamic > classObj1 = Array_obj< ::Dynamic >::__new().Add(classObj);		HX_STACK_VAR(classObj1,"classObj1");
		HX_STACK_LINE(195)
		::String name = ::Type_obj::getClassName(classObj1->__get((int)0).StaticCast< ::Class >());		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(196)
		int packageEnd = name.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(packageEnd,"packageEnd");
		HX_STACK_LINE(197)
		if (((packageEnd != (int)-1))){
			HX_STACK_LINE(198)
			::String _g = name.substr((packageEnd + (int)1),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			name = _g;
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,classObj1)
		::cpp::vm::WeakRef run(Dynamic nativeObject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
			HX_STACK_ARG(nativeObject,"nativeObject")
			{
				struct _Function_2_1{
					inline static ::org::gameplay3d::Layout Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
							HX_STACK_LINE(207)
							::org::gameplay3d::Layout result = ref->get();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(207)
							if (((result == null()))){
								HX_STACK_LINE(207)
								hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
								HX_STACK_LINE(207)
								result = ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
								HX_STACK_LINE(207)
								ref->set(result);
							}
							HX_STACK_LINE(207)
							return result;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::org::gameplay3d::Layout Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
							HX_STACK_LINE(207)
							return ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
						}
						return null();
					}
				};
				HX_STACK_LINE(207)
				return ::cpp::vm::WeakRef_obj::__new((  (((nativeObject == null()))) ? ::org::gameplay3d::Layout(null()) : ::org::gameplay3d::Layout((  ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))) ? ::org::gameplay3d::Layout(_Function_2_1::Block(nativeObject,classObj1)) : ::org::gameplay3d::Layout(_Function_2_2::Block(nativeObject,classObj1)) )) ),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(204)
		::org::gameplay3d::util::NativeInterface_obj::factories->push( Dynamic(new _Function_1_1(classObj1)));
		HX_STACK_LINE(211)
		Dynamic _g1 = ::org::gameplay3d::util::NativeInterface_obj::factories->first();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		::org::gameplay3d::util::NativeInterface_obj::setReferenceConstructor(name,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeInterface_obj,registerClass_org_gameplay3d_Layout,(void))

Void NativeInterface_obj::registerClass_org_gameplay3d_Label( ::Class classObj){
{
		HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","registerClass_org_gameplay3d_Label",0x78136f5c,"org.gameplay3d.util.NativeInterface.registerClass_org_gameplay3d_Label","org/gameplay3d/util/NativeInterface.hx",190,0x672d7a9c)
		HX_STACK_ARG(classObj,"classObj")
		HX_STACK_LINE(190)
		Array< ::Dynamic > classObj1 = Array_obj< ::Dynamic >::__new().Add(classObj);		HX_STACK_VAR(classObj1,"classObj1");
		HX_STACK_LINE(195)
		::String name = ::Type_obj::getClassName(classObj1->__get((int)0).StaticCast< ::Class >());		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(196)
		int packageEnd = name.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(packageEnd,"packageEnd");
		HX_STACK_LINE(197)
		if (((packageEnd != (int)-1))){
			HX_STACK_LINE(198)
			::String _g = name.substr((packageEnd + (int)1),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			name = _g;
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,classObj1)
		::cpp::vm::WeakRef run(Dynamic nativeObject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
			HX_STACK_ARG(nativeObject,"nativeObject")
			{
				struct _Function_2_1{
					inline static ::org::gameplay3d::Label Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
							HX_STACK_LINE(207)
							::org::gameplay3d::Label result = ref->get();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(207)
							if (((result == null()))){
								HX_STACK_LINE(207)
								hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
								HX_STACK_LINE(207)
								result = ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
								HX_STACK_LINE(207)
								ref->set(result);
							}
							HX_STACK_LINE(207)
							return result;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::org::gameplay3d::Label Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
							HX_STACK_LINE(207)
							return ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
						}
						return null();
					}
				};
				HX_STACK_LINE(207)
				return ::cpp::vm::WeakRef_obj::__new((  (((nativeObject == null()))) ? ::org::gameplay3d::Label(null()) : ::org::gameplay3d::Label((  ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))) ? ::org::gameplay3d::Label(_Function_2_1::Block(nativeObject,classObj1)) : ::org::gameplay3d::Label(_Function_2_2::Block(nativeObject,classObj1)) )) ),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(204)
		::org::gameplay3d::util::NativeInterface_obj::factories->push( Dynamic(new _Function_1_1(classObj1)));
		HX_STACK_LINE(211)
		Dynamic _g1 = ::org::gameplay3d::util::NativeInterface_obj::factories->first();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		::org::gameplay3d::util::NativeInterface_obj::setReferenceConstructor(name,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeInterface_obj,registerClass_org_gameplay3d_Label,(void))

Void NativeInterface_obj::registerClass_org_gameplay3d_Joystick( ::Class classObj){
{
		HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","registerClass_org_gameplay3d_Joystick",0x4c7e5054,"org.gameplay3d.util.NativeInterface.registerClass_org_gameplay3d_Joystick","org/gameplay3d/util/NativeInterface.hx",190,0x672d7a9c)
		HX_STACK_ARG(classObj,"classObj")
		HX_STACK_LINE(190)
		Array< ::Dynamic > classObj1 = Array_obj< ::Dynamic >::__new().Add(classObj);		HX_STACK_VAR(classObj1,"classObj1");
		HX_STACK_LINE(195)
		::String name = ::Type_obj::getClassName(classObj1->__get((int)0).StaticCast< ::Class >());		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(196)
		int packageEnd = name.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(packageEnd,"packageEnd");
		HX_STACK_LINE(197)
		if (((packageEnd != (int)-1))){
			HX_STACK_LINE(198)
			::String _g = name.substr((packageEnd + (int)1),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			name = _g;
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,classObj1)
		::cpp::vm::WeakRef run(Dynamic nativeObject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
			HX_STACK_ARG(nativeObject,"nativeObject")
			{
				struct _Function_2_1{
					inline static ::org::gameplay3d::Joystick Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
							HX_STACK_LINE(207)
							::org::gameplay3d::Joystick result = ref->get();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(207)
							if (((result == null()))){
								HX_STACK_LINE(207)
								hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
								HX_STACK_LINE(207)
								result = ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
								HX_STACK_LINE(207)
								ref->set(result);
							}
							HX_STACK_LINE(207)
							return result;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::org::gameplay3d::Joystick Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
							HX_STACK_LINE(207)
							return ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
						}
						return null();
					}
				};
				HX_STACK_LINE(207)
				return ::cpp::vm::WeakRef_obj::__new((  (((nativeObject == null()))) ? ::org::gameplay3d::Joystick(null()) : ::org::gameplay3d::Joystick((  ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))) ? ::org::gameplay3d::Joystick(_Function_2_1::Block(nativeObject,classObj1)) : ::org::gameplay3d::Joystick(_Function_2_2::Block(nativeObject,classObj1)) )) ),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(204)
		::org::gameplay3d::util::NativeInterface_obj::factories->push( Dynamic(new _Function_1_1(classObj1)));
		HX_STACK_LINE(211)
		Dynamic _g1 = ::org::gameplay3d::util::NativeInterface_obj::factories->first();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		::org::gameplay3d::util::NativeInterface_obj::setReferenceConstructor(name,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeInterface_obj,registerClass_org_gameplay3d_Joystick,(void))

Void NativeInterface_obj::registerClass_org_gameplay3d_Joint( ::Class classObj){
{
		HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","registerClass_org_gameplay3d_Joint",0x5a8c9ab2,"org.gameplay3d.util.NativeInterface.registerClass_org_gameplay3d_Joint","org/gameplay3d/util/NativeInterface.hx",190,0x672d7a9c)
		HX_STACK_ARG(classObj,"classObj")
		HX_STACK_LINE(190)
		Array< ::Dynamic > classObj1 = Array_obj< ::Dynamic >::__new().Add(classObj);		HX_STACK_VAR(classObj1,"classObj1");
		HX_STACK_LINE(195)
		::String name = ::Type_obj::getClassName(classObj1->__get((int)0).StaticCast< ::Class >());		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(196)
		int packageEnd = name.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(packageEnd,"packageEnd");
		HX_STACK_LINE(197)
		if (((packageEnd != (int)-1))){
			HX_STACK_LINE(198)
			::String _g = name.substr((packageEnd + (int)1),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			name = _g;
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,classObj1)
		::cpp::vm::WeakRef run(Dynamic nativeObject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
			HX_STACK_ARG(nativeObject,"nativeObject")
			{
				struct _Function_2_1{
					inline static ::org::gameplay3d::Joint Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
							HX_STACK_LINE(207)
							::org::gameplay3d::Joint result = ref->get();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(207)
							if (((result == null()))){
								HX_STACK_LINE(207)
								hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
								HX_STACK_LINE(207)
								result = ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
								HX_STACK_LINE(207)
								ref->set(result);
							}
							HX_STACK_LINE(207)
							return result;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::org::gameplay3d::Joint Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
							HX_STACK_LINE(207)
							return ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
						}
						return null();
					}
				};
				HX_STACK_LINE(207)
				return ::cpp::vm::WeakRef_obj::__new((  (((nativeObject == null()))) ? ::org::gameplay3d::Joint(null()) : ::org::gameplay3d::Joint((  ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))) ? ::org::gameplay3d::Joint(_Function_2_1::Block(nativeObject,classObj1)) : ::org::gameplay3d::Joint(_Function_2_2::Block(nativeObject,classObj1)) )) ),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(204)
		::org::gameplay3d::util::NativeInterface_obj::factories->push( Dynamic(new _Function_1_1(classObj1)));
		HX_STACK_LINE(211)
		Dynamic _g1 = ::org::gameplay3d::util::NativeInterface_obj::factories->first();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		::org::gameplay3d::util::NativeInterface_obj::setReferenceConstructor(name,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeInterface_obj,registerClass_org_gameplay3d_Joint,(void))

Void NativeInterface_obj::registerClass_org_gameplay3d_Image( ::Class classObj){
{
		HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","registerClass_org_gameplay3d_Image",0xc5cd80c3,"org.gameplay3d.util.NativeInterface.registerClass_org_gameplay3d_Image","org/gameplay3d/util/NativeInterface.hx",190,0x672d7a9c)
		HX_STACK_ARG(classObj,"classObj")
		HX_STACK_LINE(190)
		Array< ::Dynamic > classObj1 = Array_obj< ::Dynamic >::__new().Add(classObj);		HX_STACK_VAR(classObj1,"classObj1");
		HX_STACK_LINE(195)
		::String name = ::Type_obj::getClassName(classObj1->__get((int)0).StaticCast< ::Class >());		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(196)
		int packageEnd = name.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(packageEnd,"packageEnd");
		HX_STACK_LINE(197)
		if (((packageEnd != (int)-1))){
			HX_STACK_LINE(198)
			::String _g = name.substr((packageEnd + (int)1),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			name = _g;
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,classObj1)
		::cpp::vm::WeakRef run(Dynamic nativeObject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
			HX_STACK_ARG(nativeObject,"nativeObject")
			{
				struct _Function_2_1{
					inline static ::org::gameplay3d::Image Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
							HX_STACK_LINE(207)
							::org::gameplay3d::Image result = ref->get();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(207)
							if (((result == null()))){
								HX_STACK_LINE(207)
								hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
								HX_STACK_LINE(207)
								result = ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
								HX_STACK_LINE(207)
								ref->set(result);
							}
							HX_STACK_LINE(207)
							return result;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::org::gameplay3d::Image Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
							HX_STACK_LINE(207)
							return ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
						}
						return null();
					}
				};
				HX_STACK_LINE(207)
				return ::cpp::vm::WeakRef_obj::__new((  (((nativeObject == null()))) ? ::org::gameplay3d::Image(null()) : ::org::gameplay3d::Image((  ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))) ? ::org::gameplay3d::Image(_Function_2_1::Block(nativeObject,classObj1)) : ::org::gameplay3d::Image(_Function_2_2::Block(nativeObject,classObj1)) )) ),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(204)
		::org::gameplay3d::util::NativeInterface_obj::factories->push( Dynamic(new _Function_1_1(classObj1)));
		HX_STACK_LINE(211)
		Dynamic _g1 = ::org::gameplay3d::util::NativeInterface_obj::factories->first();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		::org::gameplay3d::util::NativeInterface_obj::setReferenceConstructor(name,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeInterface_obj,registerClass_org_gameplay3d_Image,(void))

Void NativeInterface_obj::registerClass_org_gameplay3d_HeightField( ::Class classObj){
{
		HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","registerClass_org_gameplay3d_HeightField",0x8c0756bb,"org.gameplay3d.util.NativeInterface.registerClass_org_gameplay3d_HeightField","org/gameplay3d/util/NativeInterface.hx",190,0x672d7a9c)
		HX_STACK_ARG(classObj,"classObj")
		HX_STACK_LINE(190)
		Array< ::Dynamic > classObj1 = Array_obj< ::Dynamic >::__new().Add(classObj);		HX_STACK_VAR(classObj1,"classObj1");
		HX_STACK_LINE(195)
		::String name = ::Type_obj::getClassName(classObj1->__get((int)0).StaticCast< ::Class >());		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(196)
		int packageEnd = name.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(packageEnd,"packageEnd");
		HX_STACK_LINE(197)
		if (((packageEnd != (int)-1))){
			HX_STACK_LINE(198)
			::String _g = name.substr((packageEnd + (int)1),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			name = _g;
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,classObj1)
		::cpp::vm::WeakRef run(Dynamic nativeObject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
			HX_STACK_ARG(nativeObject,"nativeObject")
			{
				struct _Function_2_1{
					inline static ::org::gameplay3d::HeightField Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
							HX_STACK_LINE(207)
							::org::gameplay3d::HeightField result = ref->get();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(207)
							if (((result == null()))){
								HX_STACK_LINE(207)
								hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
								HX_STACK_LINE(207)
								result = ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
								HX_STACK_LINE(207)
								ref->set(result);
							}
							HX_STACK_LINE(207)
							return result;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::org::gameplay3d::HeightField Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
							HX_STACK_LINE(207)
							return ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
						}
						return null();
					}
				};
				HX_STACK_LINE(207)
				return ::cpp::vm::WeakRef_obj::__new((  (((nativeObject == null()))) ? ::org::gameplay3d::HeightField(null()) : ::org::gameplay3d::HeightField((  ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))) ? ::org::gameplay3d::HeightField(_Function_2_1::Block(nativeObject,classObj1)) : ::org::gameplay3d::HeightField(_Function_2_2::Block(nativeObject,classObj1)) )) ),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(204)
		::org::gameplay3d::util::NativeInterface_obj::factories->push( Dynamic(new _Function_1_1(classObj1)));
		HX_STACK_LINE(211)
		Dynamic _g1 = ::org::gameplay3d::util::NativeInterface_obj::factories->first();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		::org::gameplay3d::util::NativeInterface_obj::setReferenceConstructor(name,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeInterface_obj,registerClass_org_gameplay3d_HeightField,(void))

Void NativeInterface_obj::registerClass_org_gameplay3d_FrameBuffer( ::Class classObj){
{
		HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","registerClass_org_gameplay3d_FrameBuffer",0xa0f7e875,"org.gameplay3d.util.NativeInterface.registerClass_org_gameplay3d_FrameBuffer","org/gameplay3d/util/NativeInterface.hx",190,0x672d7a9c)
		HX_STACK_ARG(classObj,"classObj")
		HX_STACK_LINE(190)
		Array< ::Dynamic > classObj1 = Array_obj< ::Dynamic >::__new().Add(classObj);		HX_STACK_VAR(classObj1,"classObj1");
		HX_STACK_LINE(195)
		::String name = ::Type_obj::getClassName(classObj1->__get((int)0).StaticCast< ::Class >());		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(196)
		int packageEnd = name.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(packageEnd,"packageEnd");
		HX_STACK_LINE(197)
		if (((packageEnd != (int)-1))){
			HX_STACK_LINE(198)
			::String _g = name.substr((packageEnd + (int)1),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			name = _g;
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,classObj1)
		::cpp::vm::WeakRef run(Dynamic nativeObject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
			HX_STACK_ARG(nativeObject,"nativeObject")
			{
				struct _Function_2_1{
					inline static ::org::gameplay3d::FrameBuffer Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
							HX_STACK_LINE(207)
							::org::gameplay3d::FrameBuffer result = ref->get();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(207)
							if (((result == null()))){
								HX_STACK_LINE(207)
								hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
								HX_STACK_LINE(207)
								result = ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
								HX_STACK_LINE(207)
								ref->set(result);
							}
							HX_STACK_LINE(207)
							return result;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::org::gameplay3d::FrameBuffer Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
							HX_STACK_LINE(207)
							return ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
						}
						return null();
					}
				};
				HX_STACK_LINE(207)
				return ::cpp::vm::WeakRef_obj::__new((  (((nativeObject == null()))) ? ::org::gameplay3d::FrameBuffer(null()) : ::org::gameplay3d::FrameBuffer((  ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))) ? ::org::gameplay3d::FrameBuffer(_Function_2_1::Block(nativeObject,classObj1)) : ::org::gameplay3d::FrameBuffer(_Function_2_2::Block(nativeObject,classObj1)) )) ),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(204)
		::org::gameplay3d::util::NativeInterface_obj::factories->push( Dynamic(new _Function_1_1(classObj1)));
		HX_STACK_LINE(211)
		Dynamic _g1 = ::org::gameplay3d::util::NativeInterface_obj::factories->first();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		::org::gameplay3d::util::NativeInterface_obj::setReferenceConstructor(name,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeInterface_obj,registerClass_org_gameplay3d_FrameBuffer,(void))

Void NativeInterface_obj::registerClass_org_gameplay3d_Form( ::Class classObj){
{
		HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","registerClass_org_gameplay3d_Form",0x114724dc,"org.gameplay3d.util.NativeInterface.registerClass_org_gameplay3d_Form","org/gameplay3d/util/NativeInterface.hx",190,0x672d7a9c)
		HX_STACK_ARG(classObj,"classObj")
		HX_STACK_LINE(190)
		Array< ::Dynamic > classObj1 = Array_obj< ::Dynamic >::__new().Add(classObj);		HX_STACK_VAR(classObj1,"classObj1");
		HX_STACK_LINE(195)
		::String name = ::Type_obj::getClassName(classObj1->__get((int)0).StaticCast< ::Class >());		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(196)
		int packageEnd = name.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(packageEnd,"packageEnd");
		HX_STACK_LINE(197)
		if (((packageEnd != (int)-1))){
			HX_STACK_LINE(198)
			::String _g = name.substr((packageEnd + (int)1),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			name = _g;
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,classObj1)
		::cpp::vm::WeakRef run(Dynamic nativeObject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
			HX_STACK_ARG(nativeObject,"nativeObject")
			{
				struct _Function_2_1{
					inline static ::org::gameplay3d::Form Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
							HX_STACK_LINE(207)
							::org::gameplay3d::Form result = ref->get();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(207)
							if (((result == null()))){
								HX_STACK_LINE(207)
								hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
								HX_STACK_LINE(207)
								result = ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
								HX_STACK_LINE(207)
								ref->set(result);
							}
							HX_STACK_LINE(207)
							return result;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::org::gameplay3d::Form Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
							HX_STACK_LINE(207)
							return ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
						}
						return null();
					}
				};
				HX_STACK_LINE(207)
				return ::cpp::vm::WeakRef_obj::__new((  (((nativeObject == null()))) ? ::org::gameplay3d::Form(null()) : ::org::gameplay3d::Form((  ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))) ? ::org::gameplay3d::Form(_Function_2_1::Block(nativeObject,classObj1)) : ::org::gameplay3d::Form(_Function_2_2::Block(nativeObject,classObj1)) )) ),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(204)
		::org::gameplay3d::util::NativeInterface_obj::factories->push( Dynamic(new _Function_1_1(classObj1)));
		HX_STACK_LINE(211)
		Dynamic _g1 = ::org::gameplay3d::util::NativeInterface_obj::factories->first();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		::org::gameplay3d::util::NativeInterface_obj::setReferenceConstructor(name,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeInterface_obj,registerClass_org_gameplay3d_Form,(void))

Void NativeInterface_obj::registerClass_org_gameplay3d_Font( ::Class classObj){
{
		HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","registerClass_org_gameplay3d_Font",0x11472167,"org.gameplay3d.util.NativeInterface.registerClass_org_gameplay3d_Font","org/gameplay3d/util/NativeInterface.hx",190,0x672d7a9c)
		HX_STACK_ARG(classObj,"classObj")
		HX_STACK_LINE(190)
		Array< ::Dynamic > classObj1 = Array_obj< ::Dynamic >::__new().Add(classObj);		HX_STACK_VAR(classObj1,"classObj1");
		HX_STACK_LINE(195)
		::String name = ::Type_obj::getClassName(classObj1->__get((int)0).StaticCast< ::Class >());		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(196)
		int packageEnd = name.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(packageEnd,"packageEnd");
		HX_STACK_LINE(197)
		if (((packageEnd != (int)-1))){
			HX_STACK_LINE(198)
			::String _g = name.substr((packageEnd + (int)1),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			name = _g;
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,classObj1)
		::cpp::vm::WeakRef run(Dynamic nativeObject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
			HX_STACK_ARG(nativeObject,"nativeObject")
			{
				struct _Function_2_1{
					inline static ::org::gameplay3d::Font Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
							HX_STACK_LINE(207)
							::org::gameplay3d::Font result = ref->get();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(207)
							if (((result == null()))){
								HX_STACK_LINE(207)
								hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
								HX_STACK_LINE(207)
								result = ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
								HX_STACK_LINE(207)
								ref->set(result);
							}
							HX_STACK_LINE(207)
							return result;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::org::gameplay3d::Font Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
							HX_STACK_LINE(207)
							return ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
						}
						return null();
					}
				};
				HX_STACK_LINE(207)
				return ::cpp::vm::WeakRef_obj::__new((  (((nativeObject == null()))) ? ::org::gameplay3d::Font(null()) : ::org::gameplay3d::Font((  ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))) ? ::org::gameplay3d::Font(_Function_2_1::Block(nativeObject,classObj1)) : ::org::gameplay3d::Font(_Function_2_2::Block(nativeObject,classObj1)) )) ),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(204)
		::org::gameplay3d::util::NativeInterface_obj::factories->push( Dynamic(new _Function_1_1(classObj1)));
		HX_STACK_LINE(211)
		Dynamic _g1 = ::org::gameplay3d::util::NativeInterface_obj::factories->first();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		::org::gameplay3d::util::NativeInterface_obj::setReferenceConstructor(name,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeInterface_obj,registerClass_org_gameplay3d_Font,(void))

Void NativeInterface_obj::registerClass_org_gameplay3d_FlowLayout( ::Class classObj){
{
		HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","registerClass_org_gameplay3d_FlowLayout",0x8a6466d0,"org.gameplay3d.util.NativeInterface.registerClass_org_gameplay3d_FlowLayout","org/gameplay3d/util/NativeInterface.hx",190,0x672d7a9c)
		HX_STACK_ARG(classObj,"classObj")
		HX_STACK_LINE(190)
		Array< ::Dynamic > classObj1 = Array_obj< ::Dynamic >::__new().Add(classObj);		HX_STACK_VAR(classObj1,"classObj1");
		HX_STACK_LINE(195)
		::String name = ::Type_obj::getClassName(classObj1->__get((int)0).StaticCast< ::Class >());		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(196)
		int packageEnd = name.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(packageEnd,"packageEnd");
		HX_STACK_LINE(197)
		if (((packageEnd != (int)-1))){
			HX_STACK_LINE(198)
			::String _g = name.substr((packageEnd + (int)1),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			name = _g;
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,classObj1)
		::cpp::vm::WeakRef run(Dynamic nativeObject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
			HX_STACK_ARG(nativeObject,"nativeObject")
			{
				struct _Function_2_1{
					inline static ::org::gameplay3d::FlowLayout Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
							HX_STACK_LINE(207)
							::org::gameplay3d::FlowLayout result = ref->get();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(207)
							if (((result == null()))){
								HX_STACK_LINE(207)
								hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
								HX_STACK_LINE(207)
								result = ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
								HX_STACK_LINE(207)
								ref->set(result);
							}
							HX_STACK_LINE(207)
							return result;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::org::gameplay3d::FlowLayout Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
							HX_STACK_LINE(207)
							return ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
						}
						return null();
					}
				};
				HX_STACK_LINE(207)
				return ::cpp::vm::WeakRef_obj::__new((  (((nativeObject == null()))) ? ::org::gameplay3d::FlowLayout(null()) : ::org::gameplay3d::FlowLayout((  ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))) ? ::org::gameplay3d::FlowLayout(_Function_2_1::Block(nativeObject,classObj1)) : ::org::gameplay3d::FlowLayout(_Function_2_2::Block(nativeObject,classObj1)) )) ),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(204)
		::org::gameplay3d::util::NativeInterface_obj::factories->push( Dynamic(new _Function_1_1(classObj1)));
		HX_STACK_LINE(211)
		Dynamic _g1 = ::org::gameplay3d::util::NativeInterface_obj::factories->first();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		::org::gameplay3d::util::NativeInterface_obj::setReferenceConstructor(name,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeInterface_obj,registerClass_org_gameplay3d_FlowLayout,(void))

Void NativeInterface_obj::registerClass_org_gameplay3d_Effect( ::Class classObj){
{
		HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","registerClass_org_gameplay3d_Effect",0xb0143429,"org.gameplay3d.util.NativeInterface.registerClass_org_gameplay3d_Effect","org/gameplay3d/util/NativeInterface.hx",190,0x672d7a9c)
		HX_STACK_ARG(classObj,"classObj")
		HX_STACK_LINE(190)
		Array< ::Dynamic > classObj1 = Array_obj< ::Dynamic >::__new().Add(classObj);		HX_STACK_VAR(classObj1,"classObj1");
		HX_STACK_LINE(195)
		::String name = ::Type_obj::getClassName(classObj1->__get((int)0).StaticCast< ::Class >());		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(196)
		int packageEnd = name.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(packageEnd,"packageEnd");
		HX_STACK_LINE(197)
		if (((packageEnd != (int)-1))){
			HX_STACK_LINE(198)
			::String _g = name.substr((packageEnd + (int)1),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			name = _g;
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,classObj1)
		::cpp::vm::WeakRef run(Dynamic nativeObject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
			HX_STACK_ARG(nativeObject,"nativeObject")
			{
				struct _Function_2_1{
					inline static ::org::gameplay3d::Effect Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
							HX_STACK_LINE(207)
							::org::gameplay3d::Effect result = ref->get();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(207)
							if (((result == null()))){
								HX_STACK_LINE(207)
								hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
								HX_STACK_LINE(207)
								result = ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
								HX_STACK_LINE(207)
								ref->set(result);
							}
							HX_STACK_LINE(207)
							return result;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::org::gameplay3d::Effect Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
							HX_STACK_LINE(207)
							return ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
						}
						return null();
					}
				};
				HX_STACK_LINE(207)
				return ::cpp::vm::WeakRef_obj::__new((  (((nativeObject == null()))) ? ::org::gameplay3d::Effect(null()) : ::org::gameplay3d::Effect((  ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))) ? ::org::gameplay3d::Effect(_Function_2_1::Block(nativeObject,classObj1)) : ::org::gameplay3d::Effect(_Function_2_2::Block(nativeObject,classObj1)) )) ),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(204)
		::org::gameplay3d::util::NativeInterface_obj::factories->push( Dynamic(new _Function_1_1(classObj1)));
		HX_STACK_LINE(211)
		Dynamic _g1 = ::org::gameplay3d::util::NativeInterface_obj::factories->first();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		::org::gameplay3d::util::NativeInterface_obj::setReferenceConstructor(name,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeInterface_obj,registerClass_org_gameplay3d_Effect,(void))

Void NativeInterface_obj::registerClass_org_gameplay3d_DepthStencilTarget( ::Class classObj){
{
		HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","registerClass_org_gameplay3d_DepthStencilTarget",0x125a6102,"org.gameplay3d.util.NativeInterface.registerClass_org_gameplay3d_DepthStencilTarget","org/gameplay3d/util/NativeInterface.hx",190,0x672d7a9c)
		HX_STACK_ARG(classObj,"classObj")
		HX_STACK_LINE(190)
		Array< ::Dynamic > classObj1 = Array_obj< ::Dynamic >::__new().Add(classObj);		HX_STACK_VAR(classObj1,"classObj1");
		HX_STACK_LINE(195)
		::String name = ::Type_obj::getClassName(classObj1->__get((int)0).StaticCast< ::Class >());		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(196)
		int packageEnd = name.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(packageEnd,"packageEnd");
		HX_STACK_LINE(197)
		if (((packageEnd != (int)-1))){
			HX_STACK_LINE(198)
			::String _g = name.substr((packageEnd + (int)1),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			name = _g;
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,classObj1)
		::cpp::vm::WeakRef run(Dynamic nativeObject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
			HX_STACK_ARG(nativeObject,"nativeObject")
			{
				struct _Function_2_1{
					inline static ::org::gameplay3d::DepthStencilTarget Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
							HX_STACK_LINE(207)
							::org::gameplay3d::DepthStencilTarget result = ref->get();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(207)
							if (((result == null()))){
								HX_STACK_LINE(207)
								hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
								HX_STACK_LINE(207)
								result = ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
								HX_STACK_LINE(207)
								ref->set(result);
							}
							HX_STACK_LINE(207)
							return result;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::org::gameplay3d::DepthStencilTarget Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
							HX_STACK_LINE(207)
							return ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
						}
						return null();
					}
				};
				HX_STACK_LINE(207)
				return ::cpp::vm::WeakRef_obj::__new((  (((nativeObject == null()))) ? ::org::gameplay3d::DepthStencilTarget(null()) : ::org::gameplay3d::DepthStencilTarget((  ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))) ? ::org::gameplay3d::DepthStencilTarget(_Function_2_1::Block(nativeObject,classObj1)) : ::org::gameplay3d::DepthStencilTarget(_Function_2_2::Block(nativeObject,classObj1)) )) ),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(204)
		::org::gameplay3d::util::NativeInterface_obj::factories->push( Dynamic(new _Function_1_1(classObj1)));
		HX_STACK_LINE(211)
		Dynamic _g1 = ::org::gameplay3d::util::NativeInterface_obj::factories->first();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		::org::gameplay3d::util::NativeInterface_obj::setReferenceConstructor(name,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeInterface_obj,registerClass_org_gameplay3d_DepthStencilTarget,(void))

Void NativeInterface_obj::registerClass_org_gameplay3d_Curve( ::Class classObj){
{
		HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","registerClass_org_gameplay3d_Curve",0x56bcae17,"org.gameplay3d.util.NativeInterface.registerClass_org_gameplay3d_Curve","org/gameplay3d/util/NativeInterface.hx",190,0x672d7a9c)
		HX_STACK_ARG(classObj,"classObj")
		HX_STACK_LINE(190)
		Array< ::Dynamic > classObj1 = Array_obj< ::Dynamic >::__new().Add(classObj);		HX_STACK_VAR(classObj1,"classObj1");
		HX_STACK_LINE(195)
		::String name = ::Type_obj::getClassName(classObj1->__get((int)0).StaticCast< ::Class >());		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(196)
		int packageEnd = name.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(packageEnd,"packageEnd");
		HX_STACK_LINE(197)
		if (((packageEnd != (int)-1))){
			HX_STACK_LINE(198)
			::String _g = name.substr((packageEnd + (int)1),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			name = _g;
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,classObj1)
		::cpp::vm::WeakRef run(Dynamic nativeObject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
			HX_STACK_ARG(nativeObject,"nativeObject")
			{
				struct _Function_2_1{
					inline static ::org::gameplay3d::Curve Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
							HX_STACK_LINE(207)
							::org::gameplay3d::Curve result = ref->get();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(207)
							if (((result == null()))){
								HX_STACK_LINE(207)
								hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
								HX_STACK_LINE(207)
								result = ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
								HX_STACK_LINE(207)
								ref->set(result);
							}
							HX_STACK_LINE(207)
							return result;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::org::gameplay3d::Curve Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
							HX_STACK_LINE(207)
							return ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
						}
						return null();
					}
				};
				HX_STACK_LINE(207)
				return ::cpp::vm::WeakRef_obj::__new((  (((nativeObject == null()))) ? ::org::gameplay3d::Curve(null()) : ::org::gameplay3d::Curve((  ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))) ? ::org::gameplay3d::Curve(_Function_2_1::Block(nativeObject,classObj1)) : ::org::gameplay3d::Curve(_Function_2_2::Block(nativeObject,classObj1)) )) ),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(204)
		::org::gameplay3d::util::NativeInterface_obj::factories->push( Dynamic(new _Function_1_1(classObj1)));
		HX_STACK_LINE(211)
		Dynamic _g1 = ::org::gameplay3d::util::NativeInterface_obj::factories->first();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		::org::gameplay3d::util::NativeInterface_obj::setReferenceConstructor(name,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeInterface_obj,registerClass_org_gameplay3d_Curve,(void))

Void NativeInterface_obj::registerClass_org_gameplay3d_Control( ::Class classObj){
{
		HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","registerClass_org_gameplay3d_Control",0x4ccef6c5,"org.gameplay3d.util.NativeInterface.registerClass_org_gameplay3d_Control","org/gameplay3d/util/NativeInterface.hx",190,0x672d7a9c)
		HX_STACK_ARG(classObj,"classObj")
		HX_STACK_LINE(190)
		Array< ::Dynamic > classObj1 = Array_obj< ::Dynamic >::__new().Add(classObj);		HX_STACK_VAR(classObj1,"classObj1");
		HX_STACK_LINE(195)
		::String name = ::Type_obj::getClassName(classObj1->__get((int)0).StaticCast< ::Class >());		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(196)
		int packageEnd = name.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(packageEnd,"packageEnd");
		HX_STACK_LINE(197)
		if (((packageEnd != (int)-1))){
			HX_STACK_LINE(198)
			::String _g = name.substr((packageEnd + (int)1),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			name = _g;
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,classObj1)
		::cpp::vm::WeakRef run(Dynamic nativeObject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
			HX_STACK_ARG(nativeObject,"nativeObject")
			{
				struct _Function_2_1{
					inline static ::org::gameplay3d::Control Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
							HX_STACK_LINE(207)
							::org::gameplay3d::Control result = ref->get();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(207)
							if (((result == null()))){
								HX_STACK_LINE(207)
								hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
								HX_STACK_LINE(207)
								result = ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
								HX_STACK_LINE(207)
								ref->set(result);
							}
							HX_STACK_LINE(207)
							return result;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::org::gameplay3d::Control Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
							HX_STACK_LINE(207)
							return ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
						}
						return null();
					}
				};
				HX_STACK_LINE(207)
				return ::cpp::vm::WeakRef_obj::__new((  (((nativeObject == null()))) ? ::org::gameplay3d::Control(null()) : ::org::gameplay3d::Control((  ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))) ? ::org::gameplay3d::Control(_Function_2_1::Block(nativeObject,classObj1)) : ::org::gameplay3d::Control(_Function_2_2::Block(nativeObject,classObj1)) )) ),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(204)
		::org::gameplay3d::util::NativeInterface_obj::factories->push( Dynamic(new _Function_1_1(classObj1)));
		HX_STACK_LINE(211)
		Dynamic _g1 = ::org::gameplay3d::util::NativeInterface_obj::factories->first();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		::org::gameplay3d::util::NativeInterface_obj::setReferenceConstructor(name,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeInterface_obj,registerClass_org_gameplay3d_Control,(void))

Void NativeInterface_obj::registerClass_org_gameplay3d_Container( ::Class classObj){
{
		HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","registerClass_org_gameplay3d_Container",0x89c8aaa9,"org.gameplay3d.util.NativeInterface.registerClass_org_gameplay3d_Container","org/gameplay3d/util/NativeInterface.hx",190,0x672d7a9c)
		HX_STACK_ARG(classObj,"classObj")
		HX_STACK_LINE(190)
		Array< ::Dynamic > classObj1 = Array_obj< ::Dynamic >::__new().Add(classObj);		HX_STACK_VAR(classObj1,"classObj1");
		HX_STACK_LINE(195)
		::String name = ::Type_obj::getClassName(classObj1->__get((int)0).StaticCast< ::Class >());		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(196)
		int packageEnd = name.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(packageEnd,"packageEnd");
		HX_STACK_LINE(197)
		if (((packageEnd != (int)-1))){
			HX_STACK_LINE(198)
			::String _g = name.substr((packageEnd + (int)1),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			name = _g;
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,classObj1)
		::cpp::vm::WeakRef run(Dynamic nativeObject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
			HX_STACK_ARG(nativeObject,"nativeObject")
			{
				struct _Function_2_1{
					inline static ::org::gameplay3d::Container Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
							HX_STACK_LINE(207)
							::org::gameplay3d::Container result = ref->get();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(207)
							if (((result == null()))){
								HX_STACK_LINE(207)
								hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
								HX_STACK_LINE(207)
								result = ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
								HX_STACK_LINE(207)
								ref->set(result);
							}
							HX_STACK_LINE(207)
							return result;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::org::gameplay3d::Container Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
							HX_STACK_LINE(207)
							return ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
						}
						return null();
					}
				};
				HX_STACK_LINE(207)
				return ::cpp::vm::WeakRef_obj::__new((  (((nativeObject == null()))) ? ::org::gameplay3d::Container(null()) : ::org::gameplay3d::Container((  ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))) ? ::org::gameplay3d::Container(_Function_2_1::Block(nativeObject,classObj1)) : ::org::gameplay3d::Container(_Function_2_2::Block(nativeObject,classObj1)) )) ),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(204)
		::org::gameplay3d::util::NativeInterface_obj::factories->push( Dynamic(new _Function_1_1(classObj1)));
		HX_STACK_LINE(211)
		Dynamic _g1 = ::org::gameplay3d::util::NativeInterface_obj::factories->first();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		::org::gameplay3d::util::NativeInterface_obj::setReferenceConstructor(name,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeInterface_obj,registerClass_org_gameplay3d_Container,(void))

Void NativeInterface_obj::registerClass_org_gameplay3d_CheckBox( ::Class classObj){
{
		HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","registerClass_org_gameplay3d_CheckBox",0x5d69f9bb,"org.gameplay3d.util.NativeInterface.registerClass_org_gameplay3d_CheckBox","org/gameplay3d/util/NativeInterface.hx",190,0x672d7a9c)
		HX_STACK_ARG(classObj,"classObj")
		HX_STACK_LINE(190)
		Array< ::Dynamic > classObj1 = Array_obj< ::Dynamic >::__new().Add(classObj);		HX_STACK_VAR(classObj1,"classObj1");
		HX_STACK_LINE(195)
		::String name = ::Type_obj::getClassName(classObj1->__get((int)0).StaticCast< ::Class >());		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(196)
		int packageEnd = name.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(packageEnd,"packageEnd");
		HX_STACK_LINE(197)
		if (((packageEnd != (int)-1))){
			HX_STACK_LINE(198)
			::String _g = name.substr((packageEnd + (int)1),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			name = _g;
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,classObj1)
		::cpp::vm::WeakRef run(Dynamic nativeObject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
			HX_STACK_ARG(nativeObject,"nativeObject")
			{
				struct _Function_2_1{
					inline static ::org::gameplay3d::CheckBox Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
							HX_STACK_LINE(207)
							::org::gameplay3d::CheckBox result = ref->get();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(207)
							if (((result == null()))){
								HX_STACK_LINE(207)
								hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
								HX_STACK_LINE(207)
								result = ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
								HX_STACK_LINE(207)
								ref->set(result);
							}
							HX_STACK_LINE(207)
							return result;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::org::gameplay3d::CheckBox Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
							HX_STACK_LINE(207)
							return ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
						}
						return null();
					}
				};
				HX_STACK_LINE(207)
				return ::cpp::vm::WeakRef_obj::__new((  (((nativeObject == null()))) ? ::org::gameplay3d::CheckBox(null()) : ::org::gameplay3d::CheckBox((  ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))) ? ::org::gameplay3d::CheckBox(_Function_2_1::Block(nativeObject,classObj1)) : ::org::gameplay3d::CheckBox(_Function_2_2::Block(nativeObject,classObj1)) )) ),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(204)
		::org::gameplay3d::util::NativeInterface_obj::factories->push( Dynamic(new _Function_1_1(classObj1)));
		HX_STACK_LINE(211)
		Dynamic _g1 = ::org::gameplay3d::util::NativeInterface_obj::factories->first();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		::org::gameplay3d::util::NativeInterface_obj::setReferenceConstructor(name,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeInterface_obj,registerClass_org_gameplay3d_CheckBox,(void))

Void NativeInterface_obj::registerClass_org_gameplay3d_Camera( ::Class classObj){
{
		HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","registerClass_org_gameplay3d_Camera",0x06fd203d,"org.gameplay3d.util.NativeInterface.registerClass_org_gameplay3d_Camera","org/gameplay3d/util/NativeInterface.hx",190,0x672d7a9c)
		HX_STACK_ARG(classObj,"classObj")
		HX_STACK_LINE(190)
		Array< ::Dynamic > classObj1 = Array_obj< ::Dynamic >::__new().Add(classObj);		HX_STACK_VAR(classObj1,"classObj1");
		HX_STACK_LINE(195)
		::String name = ::Type_obj::getClassName(classObj1->__get((int)0).StaticCast< ::Class >());		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(196)
		int packageEnd = name.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(packageEnd,"packageEnd");
		HX_STACK_LINE(197)
		if (((packageEnd != (int)-1))){
			HX_STACK_LINE(198)
			::String _g = name.substr((packageEnd + (int)1),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			name = _g;
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,classObj1)
		::cpp::vm::WeakRef run(Dynamic nativeObject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
			HX_STACK_ARG(nativeObject,"nativeObject")
			{
				struct _Function_2_1{
					inline static ::org::gameplay3d::Camera Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
							HX_STACK_LINE(207)
							::org::gameplay3d::Camera result = ref->get();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(207)
							if (((result == null()))){
								HX_STACK_LINE(207)
								hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
								HX_STACK_LINE(207)
								result = ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
								HX_STACK_LINE(207)
								ref->set(result);
							}
							HX_STACK_LINE(207)
							return result;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::org::gameplay3d::Camera Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
							HX_STACK_LINE(207)
							return ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
						}
						return null();
					}
				};
				HX_STACK_LINE(207)
				return ::cpp::vm::WeakRef_obj::__new((  (((nativeObject == null()))) ? ::org::gameplay3d::Camera(null()) : ::org::gameplay3d::Camera((  ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))) ? ::org::gameplay3d::Camera(_Function_2_1::Block(nativeObject,classObj1)) : ::org::gameplay3d::Camera(_Function_2_2::Block(nativeObject,classObj1)) )) ),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(204)
		::org::gameplay3d::util::NativeInterface_obj::factories->push( Dynamic(new _Function_1_1(classObj1)));
		HX_STACK_LINE(211)
		Dynamic _g1 = ::org::gameplay3d::util::NativeInterface_obj::factories->first();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		::org::gameplay3d::util::NativeInterface_obj::setReferenceConstructor(name,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeInterface_obj,registerClass_org_gameplay3d_Camera,(void))

Void NativeInterface_obj::registerClass_org_gameplay3d_Button( ::Class classObj){
{
		HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","registerClass_org_gameplay3d_Button",0x29513b8a,"org.gameplay3d.util.NativeInterface.registerClass_org_gameplay3d_Button","org/gameplay3d/util/NativeInterface.hx",190,0x672d7a9c)
		HX_STACK_ARG(classObj,"classObj")
		HX_STACK_LINE(190)
		Array< ::Dynamic > classObj1 = Array_obj< ::Dynamic >::__new().Add(classObj);		HX_STACK_VAR(classObj1,"classObj1");
		HX_STACK_LINE(195)
		::String name = ::Type_obj::getClassName(classObj1->__get((int)0).StaticCast< ::Class >());		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(196)
		int packageEnd = name.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(packageEnd,"packageEnd");
		HX_STACK_LINE(197)
		if (((packageEnd != (int)-1))){
			HX_STACK_LINE(198)
			::String _g = name.substr((packageEnd + (int)1),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			name = _g;
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,classObj1)
		::cpp::vm::WeakRef run(Dynamic nativeObject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
			HX_STACK_ARG(nativeObject,"nativeObject")
			{
				struct _Function_2_1{
					inline static ::org::gameplay3d::Button Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
							HX_STACK_LINE(207)
							::org::gameplay3d::Button result = ref->get();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(207)
							if (((result == null()))){
								HX_STACK_LINE(207)
								hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
								HX_STACK_LINE(207)
								result = ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
								HX_STACK_LINE(207)
								ref->set(result);
							}
							HX_STACK_LINE(207)
							return result;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::org::gameplay3d::Button Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
							HX_STACK_LINE(207)
							return ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
						}
						return null();
					}
				};
				HX_STACK_LINE(207)
				return ::cpp::vm::WeakRef_obj::__new((  (((nativeObject == null()))) ? ::org::gameplay3d::Button(null()) : ::org::gameplay3d::Button((  ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))) ? ::org::gameplay3d::Button(_Function_2_1::Block(nativeObject,classObj1)) : ::org::gameplay3d::Button(_Function_2_2::Block(nativeObject,classObj1)) )) ),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(204)
		::org::gameplay3d::util::NativeInterface_obj::factories->push( Dynamic(new _Function_1_1(classObj1)));
		HX_STACK_LINE(211)
		Dynamic _g1 = ::org::gameplay3d::util::NativeInterface_obj::factories->first();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		::org::gameplay3d::util::NativeInterface_obj::setReferenceConstructor(name,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeInterface_obj,registerClass_org_gameplay3d_Button,(void))

Void NativeInterface_obj::registerClass_org_gameplay3d_Bundle( ::Class classObj){
{
		HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","registerClass_org_gameplay3d_Bundle",0x254dcd1a,"org.gameplay3d.util.NativeInterface.registerClass_org_gameplay3d_Bundle","org/gameplay3d/util/NativeInterface.hx",190,0x672d7a9c)
		HX_STACK_ARG(classObj,"classObj")
		HX_STACK_LINE(190)
		Array< ::Dynamic > classObj1 = Array_obj< ::Dynamic >::__new().Add(classObj);		HX_STACK_VAR(classObj1,"classObj1");
		HX_STACK_LINE(195)
		::String name = ::Type_obj::getClassName(classObj1->__get((int)0).StaticCast< ::Class >());		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(196)
		int packageEnd = name.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(packageEnd,"packageEnd");
		HX_STACK_LINE(197)
		if (((packageEnd != (int)-1))){
			HX_STACK_LINE(198)
			::String _g = name.substr((packageEnd + (int)1),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			name = _g;
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,classObj1)
		::cpp::vm::WeakRef run(Dynamic nativeObject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
			HX_STACK_ARG(nativeObject,"nativeObject")
			{
				struct _Function_2_1{
					inline static ::org::gameplay3d::Bundle Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
							HX_STACK_LINE(207)
							::org::gameplay3d::Bundle result = ref->get();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(207)
							if (((result == null()))){
								HX_STACK_LINE(207)
								hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
								HX_STACK_LINE(207)
								result = ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
								HX_STACK_LINE(207)
								ref->set(result);
							}
							HX_STACK_LINE(207)
							return result;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::org::gameplay3d::Bundle Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
							HX_STACK_LINE(207)
							return ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
						}
						return null();
					}
				};
				HX_STACK_LINE(207)
				return ::cpp::vm::WeakRef_obj::__new((  (((nativeObject == null()))) ? ::org::gameplay3d::Bundle(null()) : ::org::gameplay3d::Bundle((  ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))) ? ::org::gameplay3d::Bundle(_Function_2_1::Block(nativeObject,classObj1)) : ::org::gameplay3d::Bundle(_Function_2_2::Block(nativeObject,classObj1)) )) ),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(204)
		::org::gameplay3d::util::NativeInterface_obj::factories->push( Dynamic(new _Function_1_1(classObj1)));
		HX_STACK_LINE(211)
		Dynamic _g1 = ::org::gameplay3d::util::NativeInterface_obj::factories->first();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		::org::gameplay3d::util::NativeInterface_obj::setReferenceConstructor(name,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeInterface_obj,registerClass_org_gameplay3d_Bundle,(void))

Void NativeInterface_obj::registerClass_org_gameplay3d_AudioBuffer( ::Class classObj){
{
		HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","registerClass_org_gameplay3d_AudioBuffer",0x91604dde,"org.gameplay3d.util.NativeInterface.registerClass_org_gameplay3d_AudioBuffer","org/gameplay3d/util/NativeInterface.hx",190,0x672d7a9c)
		HX_STACK_ARG(classObj,"classObj")
		HX_STACK_LINE(190)
		Array< ::Dynamic > classObj1 = Array_obj< ::Dynamic >::__new().Add(classObj);		HX_STACK_VAR(classObj1,"classObj1");
		HX_STACK_LINE(195)
		::String name = ::Type_obj::getClassName(classObj1->__get((int)0).StaticCast< ::Class >());		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(196)
		int packageEnd = name.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(packageEnd,"packageEnd");
		HX_STACK_LINE(197)
		if (((packageEnd != (int)-1))){
			HX_STACK_LINE(198)
			::String _g = name.substr((packageEnd + (int)1),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			name = _g;
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,classObj1)
		::cpp::vm::WeakRef run(Dynamic nativeObject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
			HX_STACK_ARG(nativeObject,"nativeObject")
			{
				struct _Function_2_1{
					inline static ::org::gameplay3d::AudioBuffer Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
							HX_STACK_LINE(207)
							::org::gameplay3d::AudioBuffer result = ref->get();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(207)
							if (((result == null()))){
								HX_STACK_LINE(207)
								hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
								HX_STACK_LINE(207)
								result = ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
								HX_STACK_LINE(207)
								ref->set(result);
							}
							HX_STACK_LINE(207)
							return result;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::org::gameplay3d::AudioBuffer Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
							HX_STACK_LINE(207)
							return ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
						}
						return null();
					}
				};
				HX_STACK_LINE(207)
				return ::cpp::vm::WeakRef_obj::__new((  (((nativeObject == null()))) ? ::org::gameplay3d::AudioBuffer(null()) : ::org::gameplay3d::AudioBuffer((  ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))) ? ::org::gameplay3d::AudioBuffer(_Function_2_1::Block(nativeObject,classObj1)) : ::org::gameplay3d::AudioBuffer(_Function_2_2::Block(nativeObject,classObj1)) )) ),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(204)
		::org::gameplay3d::util::NativeInterface_obj::factories->push( Dynamic(new _Function_1_1(classObj1)));
		HX_STACK_LINE(211)
		Dynamic _g1 = ::org::gameplay3d::util::NativeInterface_obj::factories->first();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		::org::gameplay3d::util::NativeInterface_obj::setReferenceConstructor(name,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeInterface_obj,registerClass_org_gameplay3d_AudioBuffer,(void))

Void NativeInterface_obj::registerClass_org_gameplay3d_AnimationClip( ::Class classObj){
{
		HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","registerClass_org_gameplay3d_AnimationClip",0x6b4e655c,"org.gameplay3d.util.NativeInterface.registerClass_org_gameplay3d_AnimationClip","org/gameplay3d/util/NativeInterface.hx",190,0x672d7a9c)
		HX_STACK_ARG(classObj,"classObj")
		HX_STACK_LINE(190)
		Array< ::Dynamic > classObj1 = Array_obj< ::Dynamic >::__new().Add(classObj);		HX_STACK_VAR(classObj1,"classObj1");
		HX_STACK_LINE(195)
		::String name = ::Type_obj::getClassName(classObj1->__get((int)0).StaticCast< ::Class >());		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(196)
		int packageEnd = name.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(packageEnd,"packageEnd");
		HX_STACK_LINE(197)
		if (((packageEnd != (int)-1))){
			HX_STACK_LINE(198)
			::String _g = name.substr((packageEnd + (int)1),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			name = _g;
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,classObj1)
		::cpp::vm::WeakRef run(Dynamic nativeObject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
			HX_STACK_ARG(nativeObject,"nativeObject")
			{
				struct _Function_2_1{
					inline static ::org::gameplay3d::AnimationClip Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
							HX_STACK_LINE(207)
							::org::gameplay3d::AnimationClip result = ref->get();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(207)
							if (((result == null()))){
								HX_STACK_LINE(207)
								hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
								HX_STACK_LINE(207)
								result = ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
								HX_STACK_LINE(207)
								ref->set(result);
							}
							HX_STACK_LINE(207)
							return result;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::org::gameplay3d::AnimationClip Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
							HX_STACK_LINE(207)
							return ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
						}
						return null();
					}
				};
				HX_STACK_LINE(207)
				return ::cpp::vm::WeakRef_obj::__new((  (((nativeObject == null()))) ? ::org::gameplay3d::AnimationClip(null()) : ::org::gameplay3d::AnimationClip((  ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))) ? ::org::gameplay3d::AnimationClip(_Function_2_1::Block(nativeObject,classObj1)) : ::org::gameplay3d::AnimationClip(_Function_2_2::Block(nativeObject,classObj1)) )) ),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(204)
		::org::gameplay3d::util::NativeInterface_obj::factories->push( Dynamic(new _Function_1_1(classObj1)));
		HX_STACK_LINE(211)
		Dynamic _g1 = ::org::gameplay3d::util::NativeInterface_obj::factories->first();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		::org::gameplay3d::util::NativeInterface_obj::setReferenceConstructor(name,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeInterface_obj,registerClass_org_gameplay3d_AnimationClip,(void))

Void NativeInterface_obj::registerClass_org_gameplay3d_Animation( ::Class classObj){
{
		HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","registerClass_org_gameplay3d_Animation",0x158a246c,"org.gameplay3d.util.NativeInterface.registerClass_org_gameplay3d_Animation","org/gameplay3d/util/NativeInterface.hx",190,0x672d7a9c)
		HX_STACK_ARG(classObj,"classObj")
		HX_STACK_LINE(190)
		Array< ::Dynamic > classObj1 = Array_obj< ::Dynamic >::__new().Add(classObj);		HX_STACK_VAR(classObj1,"classObj1");
		HX_STACK_LINE(195)
		::String name = ::Type_obj::getClassName(classObj1->__get((int)0).StaticCast< ::Class >());		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(196)
		int packageEnd = name.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(packageEnd,"packageEnd");
		HX_STACK_LINE(197)
		if (((packageEnd != (int)-1))){
			HX_STACK_LINE(198)
			::String _g = name.substr((packageEnd + (int)1),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			name = _g;
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,classObj1)
		::cpp::vm::WeakRef run(Dynamic nativeObject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
			HX_STACK_ARG(nativeObject,"nativeObject")
			{
				struct _Function_2_1{
					inline static ::org::gameplay3d::Animation Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
							HX_STACK_LINE(207)
							::org::gameplay3d::Animation result = ref->get();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(207)
							if (((result == null()))){
								HX_STACK_LINE(207)
								hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
								HX_STACK_LINE(207)
								result = ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
								HX_STACK_LINE(207)
								ref->set(result);
							}
							HX_STACK_LINE(207)
							return result;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::org::gameplay3d::Animation Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
							HX_STACK_LINE(207)
							return ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
						}
						return null();
					}
				};
				HX_STACK_LINE(207)
				return ::cpp::vm::WeakRef_obj::__new((  (((nativeObject == null()))) ? ::org::gameplay3d::Animation(null()) : ::org::gameplay3d::Animation((  ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))) ? ::org::gameplay3d::Animation(_Function_2_1::Block(nativeObject,classObj1)) : ::org::gameplay3d::Animation(_Function_2_2::Block(nativeObject,classObj1)) )) ),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(204)
		::org::gameplay3d::util::NativeInterface_obj::factories->push( Dynamic(new _Function_1_1(classObj1)));
		HX_STACK_LINE(211)
		Dynamic _g1 = ::org::gameplay3d::util::NativeInterface_obj::factories->first();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		::org::gameplay3d::util::NativeInterface_obj::setReferenceConstructor(name,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeInterface_obj,registerClass_org_gameplay3d_Animation,(void))

Void NativeInterface_obj::registerClass_org_gameplay3d_AIState( ::Class classObj){
{
		HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","registerClass_org_gameplay3d_AIState",0x3c35c791,"org.gameplay3d.util.NativeInterface.registerClass_org_gameplay3d_AIState","org/gameplay3d/util/NativeInterface.hx",190,0x672d7a9c)
		HX_STACK_ARG(classObj,"classObj")
		HX_STACK_LINE(190)
		Array< ::Dynamic > classObj1 = Array_obj< ::Dynamic >::__new().Add(classObj);		HX_STACK_VAR(classObj1,"classObj1");
		HX_STACK_LINE(195)
		::String name = ::Type_obj::getClassName(classObj1->__get((int)0).StaticCast< ::Class >());		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(196)
		int packageEnd = name.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(packageEnd,"packageEnd");
		HX_STACK_LINE(197)
		if (((packageEnd != (int)-1))){
			HX_STACK_LINE(198)
			::String _g = name.substr((packageEnd + (int)1),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			name = _g;
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,classObj1)
		::cpp::vm::WeakRef run(Dynamic nativeObject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
			HX_STACK_ARG(nativeObject,"nativeObject")
			{
				struct _Function_2_1{
					inline static ::org::gameplay3d::AIState Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
							HX_STACK_LINE(207)
							::org::gameplay3d::AIState result = ref->get();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(207)
							if (((result == null()))){
								HX_STACK_LINE(207)
								hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
								HX_STACK_LINE(207)
								result = ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
								HX_STACK_LINE(207)
								ref->set(result);
							}
							HX_STACK_LINE(207)
							return result;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::org::gameplay3d::AIState Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
							HX_STACK_LINE(207)
							return ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
						}
						return null();
					}
				};
				HX_STACK_LINE(207)
				return ::cpp::vm::WeakRef_obj::__new((  (((nativeObject == null()))) ? ::org::gameplay3d::AIState(null()) : ::org::gameplay3d::AIState((  ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))) ? ::org::gameplay3d::AIState(_Function_2_1::Block(nativeObject,classObj1)) : ::org::gameplay3d::AIState(_Function_2_2::Block(nativeObject,classObj1)) )) ),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(204)
		::org::gameplay3d::util::NativeInterface_obj::factories->push( Dynamic(new _Function_1_1(classObj1)));
		HX_STACK_LINE(211)
		Dynamic _g1 = ::org::gameplay3d::util::NativeInterface_obj::factories->first();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		::org::gameplay3d::util::NativeInterface_obj::setReferenceConstructor(name,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeInterface_obj,registerClass_org_gameplay3d_AIState,(void))

Void NativeInterface_obj::registerClass_org_gameplay3d_AIAgent( ::Class classObj){
{
		HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","registerClass_org_gameplay3d_AIAgent",0xd66a9445,"org.gameplay3d.util.NativeInterface.registerClass_org_gameplay3d_AIAgent","org/gameplay3d/util/NativeInterface.hx",190,0x672d7a9c)
		HX_STACK_ARG(classObj,"classObj")
		HX_STACK_LINE(190)
		Array< ::Dynamic > classObj1 = Array_obj< ::Dynamic >::__new().Add(classObj);		HX_STACK_VAR(classObj1,"classObj1");
		HX_STACK_LINE(195)
		::String name = ::Type_obj::getClassName(classObj1->__get((int)0).StaticCast< ::Class >());		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(196)
		int packageEnd = name.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(packageEnd,"packageEnd");
		HX_STACK_LINE(197)
		if (((packageEnd != (int)-1))){
			HX_STACK_LINE(198)
			::String _g = name.substr((packageEnd + (int)1),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			name = _g;
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,classObj1)
		::cpp::vm::WeakRef run(Dynamic nativeObject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
			HX_STACK_ARG(nativeObject,"nativeObject")
			{
				struct _Function_2_1{
					inline static ::org::gameplay3d::AIAgent Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
							HX_STACK_LINE(207)
							::org::gameplay3d::AIAgent result = ref->get();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(207)
							if (((result == null()))){
								HX_STACK_LINE(207)
								hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
								HX_STACK_LINE(207)
								result = ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
								HX_STACK_LINE(207)
								ref->set(result);
							}
							HX_STACK_LINE(207)
							return result;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::org::gameplay3d::AIAgent Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
							HX_STACK_LINE(207)
							return ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
						}
						return null();
					}
				};
				HX_STACK_LINE(207)
				return ::cpp::vm::WeakRef_obj::__new((  (((nativeObject == null()))) ? ::org::gameplay3d::AIAgent(null()) : ::org::gameplay3d::AIAgent((  ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))) ? ::org::gameplay3d::AIAgent(_Function_2_1::Block(nativeObject,classObj1)) : ::org::gameplay3d::AIAgent(_Function_2_2::Block(nativeObject,classObj1)) )) ),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(204)
		::org::gameplay3d::util::NativeInterface_obj::factories->push( Dynamic(new _Function_1_1(classObj1)));
		HX_STACK_LINE(211)
		Dynamic _g1 = ::org::gameplay3d::util::NativeInterface_obj::factories->first();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		::org::gameplay3d::util::NativeInterface_obj::setReferenceConstructor(name,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeInterface_obj,registerClass_org_gameplay3d_AIAgent,(void))

Void NativeInterface_obj::registerClass_org_gameplay3d_AbsoluteLayout( ::Class classObj){
{
		HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","registerClass_org_gameplay3d_AbsoluteLayout",0x6973d619,"org.gameplay3d.util.NativeInterface.registerClass_org_gameplay3d_AbsoluteLayout","org/gameplay3d/util/NativeInterface.hx",190,0x672d7a9c)
		HX_STACK_ARG(classObj,"classObj")
		HX_STACK_LINE(190)
		Array< ::Dynamic > classObj1 = Array_obj< ::Dynamic >::__new().Add(classObj);		HX_STACK_VAR(classObj1,"classObj1");
		HX_STACK_LINE(195)
		::String name = ::Type_obj::getClassName(classObj1->__get((int)0).StaticCast< ::Class >());		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(196)
		int packageEnd = name.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(packageEnd,"packageEnd");
		HX_STACK_LINE(197)
		if (((packageEnd != (int)-1))){
			HX_STACK_LINE(198)
			::String _g = name.substr((packageEnd + (int)1),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			name = _g;
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,classObj1)
		::cpp::vm::WeakRef run(Dynamic nativeObject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
			HX_STACK_ARG(nativeObject,"nativeObject")
			{
				struct _Function_2_1{
					inline static ::org::gameplay3d::AbsoluteLayout Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
							HX_STACK_LINE(207)
							::org::gameplay3d::AbsoluteLayout result = ref->get();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(207)
							if (((result == null()))){
								HX_STACK_LINE(207)
								hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
								HX_STACK_LINE(207)
								result = ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
								HX_STACK_LINE(207)
								ref->set(result);
							}
							HX_STACK_LINE(207)
							return result;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::org::gameplay3d::AbsoluteLayout Block( Dynamic &nativeObject,Array< ::Dynamic > &classObj1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/gameplay3d/util/NativeInterface.hx",207,0x672d7a9c)
						{
							HX_STACK_LINE(207)
							hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
							HX_STACK_LINE(207)
							return ::Type_obj::createInstance(classObj1->__get((int)0).StaticCast< ::Class >(),::org::gameplay3d::GameplayObject_obj::args);
						}
						return null();
					}
				};
				HX_STACK_LINE(207)
				return ::cpp::vm::WeakRef_obj::__new((  (((nativeObject == null()))) ? ::org::gameplay3d::AbsoluteLayout(null()) : ::org::gameplay3d::AbsoluteLayout((  ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))) ? ::org::gameplay3d::AbsoluteLayout(_Function_2_1::Block(nativeObject,classObj1)) : ::org::gameplay3d::AbsoluteLayout(_Function_2_2::Block(nativeObject,classObj1)) )) ),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(204)
		::org::gameplay3d::util::NativeInterface_obj::factories->push( Dynamic(new _Function_1_1(classObj1)));
		HX_STACK_LINE(211)
		Dynamic _g1 = ::org::gameplay3d::util::NativeInterface_obj::factories->first();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		::org::gameplay3d::util::NativeInterface_obj::setReferenceConstructor(name,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeInterface_obj,registerClass_org_gameplay3d_AbsoluteLayout,(void))

Dynamic NativeInterface_obj::setReferenceConstructor;

Dynamic NativeInterface_obj::setReferenceInstance;

Dynamic NativeInterface_obj::wrapCachedReference;

::List NativeInterface_obj::factories;

::Class NativeInterface_obj::lastClass;

::String NativeInterface_obj::lastName;

Void NativeInterface_obj::initialie( ){
{
		HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","initialie",0x2eb113d5,"org.gameplay3d.util.NativeInterface.initialie","org/gameplay3d/util/NativeInterface.hx",114,0x672d7a9c)
		HX_STACK_LINE(115)
		Dynamic _g = ::org::gameplay3d::util::NativeInterface_obj::load(HX_CSTRING("setReferenceConstructor"),(int)2);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(115)
		::org::gameplay3d::util::NativeInterface_obj::setReferenceConstructor = _g;
		HX_STACK_LINE(116)
		Dynamic _g1 = ::org::gameplay3d::util::NativeInterface_obj::load(HX_CSTRING("setReferenceInstance"),(int)2);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(116)
		::org::gameplay3d::util::NativeInterface_obj::setReferenceInstance = _g1;
		HX_STACK_LINE(117)
		Dynamic _g2 = ::org::gameplay3d::util::NativeInterface_obj::load(HX_CSTRING("wrapCachedReference"),(int)0);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(117)
		::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference = _g2;
		HX_STACK_LINE(118)
		::org::gameplay3d::util::NativeInterface_obj::registerClass_org_gameplay3d_AbsoluteLayout(hx::ClassOf< ::org::gameplay3d::AbsoluteLayout >());
		HX_STACK_LINE(119)
		::org::gameplay3d::util::NativeInterface_obj::registerClass_org_gameplay3d_AIAgent(hx::ClassOf< ::org::gameplay3d::AIAgent >());
		HX_STACK_LINE(120)
		::org::gameplay3d::util::NativeInterface_obj::registerClass_org_gameplay3d_AIState(hx::ClassOf< ::org::gameplay3d::AIState >());
		HX_STACK_LINE(121)
		::org::gameplay3d::util::NativeInterface_obj::registerClass_org_gameplay3d_Animation(hx::ClassOf< ::org::gameplay3d::Animation >());
		HX_STACK_LINE(122)
		::org::gameplay3d::util::NativeInterface_obj::registerClass_org_gameplay3d_AnimationClip(hx::ClassOf< ::org::gameplay3d::AnimationClip >());
		HX_STACK_LINE(123)
		::org::gameplay3d::util::NativeInterface_obj::registerClass_org_gameplay3d_AudioBuffer(hx::ClassOf< ::org::gameplay3d::AudioBuffer >());
		HX_STACK_LINE(124)
		::org::gameplay3d::util::NativeInterface_obj::registerClass_org_gameplay3d_Bundle(hx::ClassOf< ::org::gameplay3d::Bundle >());
		HX_STACK_LINE(125)
		::org::gameplay3d::util::NativeInterface_obj::registerClass_org_gameplay3d_Button(hx::ClassOf< ::org::gameplay3d::Button >());
		HX_STACK_LINE(126)
		::org::gameplay3d::util::NativeInterface_obj::registerClass_org_gameplay3d_Camera(hx::ClassOf< ::org::gameplay3d::Camera >());
		HX_STACK_LINE(127)
		::org::gameplay3d::util::NativeInterface_obj::registerClass_org_gameplay3d_CheckBox(hx::ClassOf< ::org::gameplay3d::CheckBox >());
		HX_STACK_LINE(128)
		::org::gameplay3d::util::NativeInterface_obj::registerClass_org_gameplay3d_Container(hx::ClassOf< ::org::gameplay3d::Container >());
		HX_STACK_LINE(129)
		::org::gameplay3d::util::NativeInterface_obj::registerClass_org_gameplay3d_Control(hx::ClassOf< ::org::gameplay3d::Control >());
		HX_STACK_LINE(130)
		::org::gameplay3d::util::NativeInterface_obj::registerClass_org_gameplay3d_Curve(hx::ClassOf< ::org::gameplay3d::Curve >());
		HX_STACK_LINE(131)
		::org::gameplay3d::util::NativeInterface_obj::registerClass_org_gameplay3d_DepthStencilTarget(hx::ClassOf< ::org::gameplay3d::DepthStencilTarget >());
		HX_STACK_LINE(132)
		::org::gameplay3d::util::NativeInterface_obj::registerClass_org_gameplay3d_Effect(hx::ClassOf< ::org::gameplay3d::Effect >());
		HX_STACK_LINE(133)
		::org::gameplay3d::util::NativeInterface_obj::registerClass_org_gameplay3d_FlowLayout(hx::ClassOf< ::org::gameplay3d::FlowLayout >());
		HX_STACK_LINE(134)
		::org::gameplay3d::util::NativeInterface_obj::registerClass_org_gameplay3d_Font(hx::ClassOf< ::org::gameplay3d::Font >());
		HX_STACK_LINE(135)
		::org::gameplay3d::util::NativeInterface_obj::registerClass_org_gameplay3d_Form(hx::ClassOf< ::org::gameplay3d::Form >());
		HX_STACK_LINE(136)
		::org::gameplay3d::util::NativeInterface_obj::registerClass_org_gameplay3d_FrameBuffer(hx::ClassOf< ::org::gameplay3d::FrameBuffer >());
		HX_STACK_LINE(137)
		::org::gameplay3d::util::NativeInterface_obj::registerClass_org_gameplay3d_HeightField(hx::ClassOf< ::org::gameplay3d::HeightField >());
		HX_STACK_LINE(138)
		::org::gameplay3d::util::NativeInterface_obj::registerClass_org_gameplay3d_Image(hx::ClassOf< ::org::gameplay3d::Image >());
		HX_STACK_LINE(139)
		::org::gameplay3d::util::NativeInterface_obj::registerClass_org_gameplay3d_Joint(hx::ClassOf< ::org::gameplay3d::Joint >());
		HX_STACK_LINE(140)
		::org::gameplay3d::util::NativeInterface_obj::registerClass_org_gameplay3d_Joystick(hx::ClassOf< ::org::gameplay3d::Joystick >());
		HX_STACK_LINE(141)
		::org::gameplay3d::util::NativeInterface_obj::registerClass_org_gameplay3d_Label(hx::ClassOf< ::org::gameplay3d::Label >());
		HX_STACK_LINE(142)
		::org::gameplay3d::util::NativeInterface_obj::registerClass_org_gameplay3d_Layout(hx::ClassOf< ::org::gameplay3d::Layout >());
		HX_STACK_LINE(143)
		::org::gameplay3d::util::NativeInterface_obj::registerClass_org_gameplay3d_Light(hx::ClassOf< ::org::gameplay3d::Light >());
		HX_STACK_LINE(144)
		::org::gameplay3d::util::NativeInterface_obj::registerClass_org_gameplay3d_Material(hx::ClassOf< ::org::gameplay3d::Material >());
		HX_STACK_LINE(145)
		::org::gameplay3d::util::NativeInterface_obj::registerClass_org_gameplay3d_MaterialParameter(hx::ClassOf< ::org::gameplay3d::MaterialParameter >());
		HX_STACK_LINE(146)
		::org::gameplay3d::util::NativeInterface_obj::registerClass_org_gameplay3d_Mesh(hx::ClassOf< ::org::gameplay3d::Mesh >());
		HX_STACK_LINE(147)
		::org::gameplay3d::util::NativeInterface_obj::registerClass_org_gameplay3d_Model(hx::ClassOf< ::org::gameplay3d::Model >());
		HX_STACK_LINE(148)
		::org::gameplay3d::util::NativeInterface_obj::registerClass_org_gameplay3d_Node(hx::ClassOf< ::org::gameplay3d::Node >());
		HX_STACK_LINE(149)
		::org::gameplay3d::util::NativeInterface_obj::registerClass_org_gameplay3d_ParticleEmitter(hx::ClassOf< ::org::gameplay3d::ParticleEmitter >());
		HX_STACK_LINE(150)
		::org::gameplay3d::util::NativeInterface_obj::registerClass_org_gameplay3d_Pass(hx::ClassOf< ::org::gameplay3d::Pass >());
		HX_STACK_LINE(151)
		::org::gameplay3d::util::NativeInterface_obj::registerClass_org_gameplay3d_PhysicsCollisionShape(hx::ClassOf< ::org::gameplay3d::PhysicsCollisionShape >());
		HX_STACK_LINE(152)
		::org::gameplay3d::util::NativeInterface_obj::registerClass_org_gameplay3d_RadioButton(hx::ClassOf< ::org::gameplay3d::RadioButton >());
		HX_STACK_LINE(153)
		::org::gameplay3d::util::NativeInterface_obj::registerClass_org_gameplay3d_RenderState(hx::ClassOf< ::org::gameplay3d::RenderState >());
		HX_STACK_LINE(154)
		::org::gameplay3d::util::NativeInterface_obj::registerClass_org_gameplay3d_RenderState_StateBlock(hx::ClassOf< ::org::gameplay3d::RenderState_StateBlock >());
		HX_STACK_LINE(155)
		::org::gameplay3d::util::NativeInterface_obj::registerClass_org_gameplay3d_RenderTarget(hx::ClassOf< ::org::gameplay3d::RenderTarget >());
		HX_STACK_LINE(156)
		::org::gameplay3d::util::NativeInterface_obj::registerClass_org_gameplay3d_Scene(hx::ClassOf< ::org::gameplay3d::Scene >());
		HX_STACK_LINE(157)
		::org::gameplay3d::util::NativeInterface_obj::registerClass_org_gameplay3d_Slider(hx::ClassOf< ::org::gameplay3d::Slider >());
		HX_STACK_LINE(158)
		::org::gameplay3d::util::NativeInterface_obj::registerClass_org_gameplay3d_Technique(hx::ClassOf< ::org::gameplay3d::Technique >());
		HX_STACK_LINE(159)
		::org::gameplay3d::util::NativeInterface_obj::registerClass_org_gameplay3d_Terrain(hx::ClassOf< ::org::gameplay3d::Terrain >());
		HX_STACK_LINE(160)
		::org::gameplay3d::util::NativeInterface_obj::registerClass_org_gameplay3d_TextBox(hx::ClassOf< ::org::gameplay3d::TextBox >());
		HX_STACK_LINE(161)
		::org::gameplay3d::util::NativeInterface_obj::registerClass_org_gameplay3d_Texture(hx::ClassOf< ::org::gameplay3d::Texture >());
		HX_STACK_LINE(162)
		::org::gameplay3d::util::NativeInterface_obj::registerClass_org_gameplay3d_Texture_Sampler(hx::ClassOf< ::org::gameplay3d::Texture_Sampler >());
		HX_STACK_LINE(163)
		::org::gameplay3d::util::NativeInterface_obj::registerClass_org_gameplay3d_Theme(hx::ClassOf< ::org::gameplay3d::Theme >());
		HX_STACK_LINE(164)
		::org::gameplay3d::util::NativeInterface_obj::registerClass_org_gameplay3d_Theme_ThemeImage(hx::ClassOf< ::org::gameplay3d::Theme_ThemeImage >());
		HX_STACK_LINE(165)
		::org::gameplay3d::util::NativeInterface_obj::registerClass_org_gameplay3d_VertexAttributeBinding(hx::ClassOf< ::org::gameplay3d::VertexAttributeBinding >());
		HX_STACK_LINE(166)
		::org::gameplay3d::util::NativeInterface_obj::registerClass_org_gameplay3d_VerticalLayout(hx::ClassOf< ::org::gameplay3d::VerticalLayout >());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeInterface_obj,initialie,(void))

Void NativeInterface_obj::deinitialize( ){
{
		HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","deinitialize",0xfc518cbc,"org.gameplay3d.util.NativeInterface.deinitialize","org/gameplay3d/util/NativeInterface.hx",173,0x672d7a9c)
		HX_STACK_LINE(174)
		Dynamic releaseReferenceConstructors = ::org::gameplay3d::util::NativeInterface_obj::load(HX_CSTRING("releaseReferenceConstructors"),(int)0);		HX_STACK_VAR(releaseReferenceConstructors,"releaseReferenceConstructors");
		HX_STACK_LINE(175)
		releaseReferenceConstructors();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeInterface_obj,deinitialize,(void))

Dynamic NativeInterface_obj::rebuildCache( ){
	HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","rebuildCache",0x7d964252,"org.gameplay3d.util.NativeInterface.rebuildCache","org/gameplay3d/util/NativeInterface.hx",183,0x672d7a9c)
	HX_STACK_LINE(183)
	return ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeInterface_obj,rebuildCache,return )

Void NativeInterface_obj::updateReference( Dynamic nativeObject,::org::gameplay3d::GameplayObject instance){
{
		HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","updateReference",0x699b1cb7,"org.gameplay3d.util.NativeInterface.updateReference","org/gameplay3d/util/NativeInterface.hx",219,0x672d7a9c)
		HX_STACK_ARG(nativeObject,"nativeObject")
		HX_STACK_ARG(instance,"instance")
		HX_STACK_LINE(221)
		::cpp::vm::WeakRef _g = ::cpp::vm::WeakRef_obj::__new(instance,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(221)
		::org::gameplay3d::util::NativeInterface_obj::setReferenceInstance(nativeObject,_g);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeInterface_obj,updateReference,(void))

Dynamic NativeInterface_obj::load( ::String name,int arity){
	HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","load",0x02e8afd1,"org.gameplay3d.util.NativeInterface.load","org/gameplay3d/util/NativeInterface.hx",231,0x672d7a9c)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(arity,"arity")
	HX_STACK_LINE(231)
	return ::cpp::Lib_obj::load(HX_CSTRING("gameplay"),name,arity);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeInterface_obj,load,return )

Dynamic NativeInterface_obj::loadMember( ::Class classObj,::String name,int arity){
	HX_STACK_FRAME("org.gameplay3d.util.NativeInterface","loadMember",0x7966390b,"org.gameplay3d.util.NativeInterface.loadMember","org/gameplay3d/util/NativeInterface.hx",241,0x672d7a9c)
	HX_STACK_ARG(classObj,"classObj")
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(arity,"arity")
	HX_STACK_LINE(242)
	if (((::org::gameplay3d::util::NativeInterface_obj::lastClass != classObj))){
		HX_STACK_LINE(244)
		Array< ::String > path = ::Type_obj::getClassName(classObj).split(HX_CSTRING("."));		HX_STACK_VAR(path,"path");
		HX_STACK_LINE(245)
		::org::gameplay3d::util::NativeInterface_obj::lastClass = classObj;
		HX_STACK_LINE(246)
		::org::gameplay3d::util::NativeInterface_obj::lastName = path->__get((path->length - (int)1));
	}
	HX_STACK_LINE(248)
	return ::org::gameplay3d::util::NativeInterface_obj::load((((HX_CSTRING("hx_") + ::org::gameplay3d::util::NativeInterface_obj::lastName) + HX_CSTRING("_")) + name),arity);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeInterface_obj,loadMember,return )


NativeInterface_obj::NativeInterface_obj()
{
}

Dynamic NativeInterface_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lastName") ) { return lastName; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"factories") ) { return factories; }
		if (HX_FIELD_EQ(inName,"lastClass") ) { return lastClass; }
		if (HX_FIELD_EQ(inName,"initialie") ) { return initialie_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"loadMember") ) { return loadMember_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"deinitialize") ) { return deinitialize_dyn(); }
		if (HX_FIELD_EQ(inName,"rebuildCache") ) { return rebuildCache_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateReference") ) { return updateReference_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"wrapCachedReference") ) { return wrapCachedReference; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"setReferenceInstance") ) { return setReferenceInstance; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"setReferenceConstructor") ) { return setReferenceConstructor; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"registerClass_org_gameplay3d_Pass") ) { return registerClass_org_gameplay3d_Pass_dyn(); }
		if (HX_FIELD_EQ(inName,"registerClass_org_gameplay3d_Node") ) { return registerClass_org_gameplay3d_Node_dyn(); }
		if (HX_FIELD_EQ(inName,"registerClass_org_gameplay3d_Mesh") ) { return registerClass_org_gameplay3d_Mesh_dyn(); }
		if (HX_FIELD_EQ(inName,"registerClass_org_gameplay3d_Form") ) { return registerClass_org_gameplay3d_Form_dyn(); }
		if (HX_FIELD_EQ(inName,"registerClass_org_gameplay3d_Font") ) { return registerClass_org_gameplay3d_Font_dyn(); }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"registerClass_org_gameplay3d_Theme") ) { return registerClass_org_gameplay3d_Theme_dyn(); }
		if (HX_FIELD_EQ(inName,"registerClass_org_gameplay3d_Scene") ) { return registerClass_org_gameplay3d_Scene_dyn(); }
		if (HX_FIELD_EQ(inName,"registerClass_org_gameplay3d_Model") ) { return registerClass_org_gameplay3d_Model_dyn(); }
		if (HX_FIELD_EQ(inName,"registerClass_org_gameplay3d_Light") ) { return registerClass_org_gameplay3d_Light_dyn(); }
		if (HX_FIELD_EQ(inName,"registerClass_org_gameplay3d_Label") ) { return registerClass_org_gameplay3d_Label_dyn(); }
		if (HX_FIELD_EQ(inName,"registerClass_org_gameplay3d_Joint") ) { return registerClass_org_gameplay3d_Joint_dyn(); }
		if (HX_FIELD_EQ(inName,"registerClass_org_gameplay3d_Image") ) { return registerClass_org_gameplay3d_Image_dyn(); }
		if (HX_FIELD_EQ(inName,"registerClass_org_gameplay3d_Curve") ) { return registerClass_org_gameplay3d_Curve_dyn(); }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"registerClass_org_gameplay3d_Slider") ) { return registerClass_org_gameplay3d_Slider_dyn(); }
		if (HX_FIELD_EQ(inName,"registerClass_org_gameplay3d_Layout") ) { return registerClass_org_gameplay3d_Layout_dyn(); }
		if (HX_FIELD_EQ(inName,"registerClass_org_gameplay3d_Effect") ) { return registerClass_org_gameplay3d_Effect_dyn(); }
		if (HX_FIELD_EQ(inName,"registerClass_org_gameplay3d_Camera") ) { return registerClass_org_gameplay3d_Camera_dyn(); }
		if (HX_FIELD_EQ(inName,"registerClass_org_gameplay3d_Button") ) { return registerClass_org_gameplay3d_Button_dyn(); }
		if (HX_FIELD_EQ(inName,"registerClass_org_gameplay3d_Bundle") ) { return registerClass_org_gameplay3d_Bundle_dyn(); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"registerClass_org_gameplay3d_Texture") ) { return registerClass_org_gameplay3d_Texture_dyn(); }
		if (HX_FIELD_EQ(inName,"registerClass_org_gameplay3d_TextBox") ) { return registerClass_org_gameplay3d_TextBox_dyn(); }
		if (HX_FIELD_EQ(inName,"registerClass_org_gameplay3d_Terrain") ) { return registerClass_org_gameplay3d_Terrain_dyn(); }
		if (HX_FIELD_EQ(inName,"registerClass_org_gameplay3d_Control") ) { return registerClass_org_gameplay3d_Control_dyn(); }
		if (HX_FIELD_EQ(inName,"registerClass_org_gameplay3d_AIState") ) { return registerClass_org_gameplay3d_AIState_dyn(); }
		if (HX_FIELD_EQ(inName,"registerClass_org_gameplay3d_AIAgent") ) { return registerClass_org_gameplay3d_AIAgent_dyn(); }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"registerClass_org_gameplay3d_Material") ) { return registerClass_org_gameplay3d_Material_dyn(); }
		if (HX_FIELD_EQ(inName,"registerClass_org_gameplay3d_Joystick") ) { return registerClass_org_gameplay3d_Joystick_dyn(); }
		if (HX_FIELD_EQ(inName,"registerClass_org_gameplay3d_CheckBox") ) { return registerClass_org_gameplay3d_CheckBox_dyn(); }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"registerClass_org_gameplay3d_Technique") ) { return registerClass_org_gameplay3d_Technique_dyn(); }
		if (HX_FIELD_EQ(inName,"registerClass_org_gameplay3d_Container") ) { return registerClass_org_gameplay3d_Container_dyn(); }
		if (HX_FIELD_EQ(inName,"registerClass_org_gameplay3d_Animation") ) { return registerClass_org_gameplay3d_Animation_dyn(); }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"registerClass_org_gameplay3d_FlowLayout") ) { return registerClass_org_gameplay3d_FlowLayout_dyn(); }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"registerClass_org_gameplay3d_RenderState") ) { return registerClass_org_gameplay3d_RenderState_dyn(); }
		if (HX_FIELD_EQ(inName,"registerClass_org_gameplay3d_RadioButton") ) { return registerClass_org_gameplay3d_RadioButton_dyn(); }
		if (HX_FIELD_EQ(inName,"registerClass_org_gameplay3d_HeightField") ) { return registerClass_org_gameplay3d_HeightField_dyn(); }
		if (HX_FIELD_EQ(inName,"registerClass_org_gameplay3d_FrameBuffer") ) { return registerClass_org_gameplay3d_FrameBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"registerClass_org_gameplay3d_AudioBuffer") ) { return registerClass_org_gameplay3d_AudioBuffer_dyn(); }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"registerClass_org_gameplay3d_RenderTarget") ) { return registerClass_org_gameplay3d_RenderTarget_dyn(); }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"registerClass_org_gameplay3d_AnimationClip") ) { return registerClass_org_gameplay3d_AnimationClip_dyn(); }
		break;
	case 43:
		if (HX_FIELD_EQ(inName,"registerClass_org_gameplay3d_VerticalLayout") ) { return registerClass_org_gameplay3d_VerticalLayout_dyn(); }
		if (HX_FIELD_EQ(inName,"registerClass_org_gameplay3d_AbsoluteLayout") ) { return registerClass_org_gameplay3d_AbsoluteLayout_dyn(); }
		break;
	case 44:
		if (HX_FIELD_EQ(inName,"registerClass_org_gameplay3d_Texture_Sampler") ) { return registerClass_org_gameplay3d_Texture_Sampler_dyn(); }
		if (HX_FIELD_EQ(inName,"registerClass_org_gameplay3d_ParticleEmitter") ) { return registerClass_org_gameplay3d_ParticleEmitter_dyn(); }
		break;
	case 45:
		if (HX_FIELD_EQ(inName,"registerClass_org_gameplay3d_Theme_ThemeImage") ) { return registerClass_org_gameplay3d_Theme_ThemeImage_dyn(); }
		break;
	case 46:
		if (HX_FIELD_EQ(inName,"registerClass_org_gameplay3d_MaterialParameter") ) { return registerClass_org_gameplay3d_MaterialParameter_dyn(); }
		break;
	case 47:
		if (HX_FIELD_EQ(inName,"registerClass_org_gameplay3d_DepthStencilTarget") ) { return registerClass_org_gameplay3d_DepthStencilTarget_dyn(); }
		break;
	case 50:
		if (HX_FIELD_EQ(inName,"registerClass_org_gameplay3d_PhysicsCollisionShape") ) { return registerClass_org_gameplay3d_PhysicsCollisionShape_dyn(); }
		break;
	case 51:
		if (HX_FIELD_EQ(inName,"registerClass_org_gameplay3d_VertexAttributeBinding") ) { return registerClass_org_gameplay3d_VertexAttributeBinding_dyn(); }
		if (HX_FIELD_EQ(inName,"registerClass_org_gameplay3d_RenderState_StateBlock") ) { return registerClass_org_gameplay3d_RenderState_StateBlock_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic NativeInterface_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"lastName") ) { lastName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"factories") ) { factories=inValue.Cast< ::List >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastClass") ) { lastClass=inValue.Cast< ::Class >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"wrapCachedReference") ) { wrapCachedReference=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"setReferenceInstance") ) { setReferenceInstance=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"setReferenceConstructor") ) { setReferenceConstructor=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NativeInterface_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("registerClass_org_gameplay3d_VerticalLayout"),
	HX_CSTRING("registerClass_org_gameplay3d_VertexAttributeBinding"),
	HX_CSTRING("registerClass_org_gameplay3d_Theme_ThemeImage"),
	HX_CSTRING("registerClass_org_gameplay3d_Theme"),
	HX_CSTRING("registerClass_org_gameplay3d_Texture_Sampler"),
	HX_CSTRING("registerClass_org_gameplay3d_Texture"),
	HX_CSTRING("registerClass_org_gameplay3d_TextBox"),
	HX_CSTRING("registerClass_org_gameplay3d_Terrain"),
	HX_CSTRING("registerClass_org_gameplay3d_Technique"),
	HX_CSTRING("registerClass_org_gameplay3d_Slider"),
	HX_CSTRING("registerClass_org_gameplay3d_Scene"),
	HX_CSTRING("registerClass_org_gameplay3d_RenderTarget"),
	HX_CSTRING("registerClass_org_gameplay3d_RenderState_StateBlock"),
	HX_CSTRING("registerClass_org_gameplay3d_RenderState"),
	HX_CSTRING("registerClass_org_gameplay3d_RadioButton"),
	HX_CSTRING("registerClass_org_gameplay3d_PhysicsCollisionShape"),
	HX_CSTRING("registerClass_org_gameplay3d_Pass"),
	HX_CSTRING("registerClass_org_gameplay3d_ParticleEmitter"),
	HX_CSTRING("registerClass_org_gameplay3d_Node"),
	HX_CSTRING("registerClass_org_gameplay3d_Model"),
	HX_CSTRING("registerClass_org_gameplay3d_Mesh"),
	HX_CSTRING("registerClass_org_gameplay3d_MaterialParameter"),
	HX_CSTRING("registerClass_org_gameplay3d_Material"),
	HX_CSTRING("registerClass_org_gameplay3d_Light"),
	HX_CSTRING("registerClass_org_gameplay3d_Layout"),
	HX_CSTRING("registerClass_org_gameplay3d_Label"),
	HX_CSTRING("registerClass_org_gameplay3d_Joystick"),
	HX_CSTRING("registerClass_org_gameplay3d_Joint"),
	HX_CSTRING("registerClass_org_gameplay3d_Image"),
	HX_CSTRING("registerClass_org_gameplay3d_HeightField"),
	HX_CSTRING("registerClass_org_gameplay3d_FrameBuffer"),
	HX_CSTRING("registerClass_org_gameplay3d_Form"),
	HX_CSTRING("registerClass_org_gameplay3d_Font"),
	HX_CSTRING("registerClass_org_gameplay3d_FlowLayout"),
	HX_CSTRING("registerClass_org_gameplay3d_Effect"),
	HX_CSTRING("registerClass_org_gameplay3d_DepthStencilTarget"),
	HX_CSTRING("registerClass_org_gameplay3d_Curve"),
	HX_CSTRING("registerClass_org_gameplay3d_Control"),
	HX_CSTRING("registerClass_org_gameplay3d_Container"),
	HX_CSTRING("registerClass_org_gameplay3d_CheckBox"),
	HX_CSTRING("registerClass_org_gameplay3d_Camera"),
	HX_CSTRING("registerClass_org_gameplay3d_Button"),
	HX_CSTRING("registerClass_org_gameplay3d_Bundle"),
	HX_CSTRING("registerClass_org_gameplay3d_AudioBuffer"),
	HX_CSTRING("registerClass_org_gameplay3d_AnimationClip"),
	HX_CSTRING("registerClass_org_gameplay3d_Animation"),
	HX_CSTRING("registerClass_org_gameplay3d_AIState"),
	HX_CSTRING("registerClass_org_gameplay3d_AIAgent"),
	HX_CSTRING("registerClass_org_gameplay3d_AbsoluteLayout"),
	HX_CSTRING("setReferenceConstructor"),
	HX_CSTRING("setReferenceInstance"),
	HX_CSTRING("wrapCachedReference"),
	HX_CSTRING("factories"),
	HX_CSTRING("lastClass"),
	HX_CSTRING("lastName"),
	HX_CSTRING("initialie"),
	HX_CSTRING("deinitialize"),
	HX_CSTRING("rebuildCache"),
	HX_CSTRING("updateReference"),
	HX_CSTRING("load"),
	HX_CSTRING("loadMember"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NativeInterface_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(NativeInterface_obj::setReferenceConstructor,"setReferenceConstructor");
	HX_MARK_MEMBER_NAME(NativeInterface_obj::setReferenceInstance,"setReferenceInstance");
	HX_MARK_MEMBER_NAME(NativeInterface_obj::wrapCachedReference,"wrapCachedReference");
	HX_MARK_MEMBER_NAME(NativeInterface_obj::factories,"factories");
	HX_MARK_MEMBER_NAME(NativeInterface_obj::lastClass,"lastClass");
	HX_MARK_MEMBER_NAME(NativeInterface_obj::lastName,"lastName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NativeInterface_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(NativeInterface_obj::setReferenceConstructor,"setReferenceConstructor");
	HX_VISIT_MEMBER_NAME(NativeInterface_obj::setReferenceInstance,"setReferenceInstance");
	HX_VISIT_MEMBER_NAME(NativeInterface_obj::wrapCachedReference,"wrapCachedReference");
	HX_VISIT_MEMBER_NAME(NativeInterface_obj::factories,"factories");
	HX_VISIT_MEMBER_NAME(NativeInterface_obj::lastClass,"lastClass");
	HX_VISIT_MEMBER_NAME(NativeInterface_obj::lastName,"lastName");
};

#endif

Class NativeInterface_obj::__mClass;

void NativeInterface_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.util.NativeInterface"), hx::TCanCast< NativeInterface_obj> ,sStaticFields,sMemberFields,
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

void NativeInterface_obj::__boot()
{
	factories= ::List_obj::__new();
}

} // end namespace org
} // end namespace gameplay3d
} // end namespace util
