#ifndef INCLUDED_org_gameplay3d_util_NativeInterface
#define INCLUDED_org_gameplay3d_util_NativeInterface

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,util,NativeInterface)
namespace org{
namespace gameplay3d{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  NativeInterface_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef NativeInterface_obj OBJ_;
		NativeInterface_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< NativeInterface_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NativeInterface_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("NativeInterface"); }

		static Void registerClass_org_gameplay3d_VerticalLayout( ::Class classObj);
		static Dynamic registerClass_org_gameplay3d_VerticalLayout_dyn();

		static Void registerClass_org_gameplay3d_VertexAttributeBinding( ::Class classObj);
		static Dynamic registerClass_org_gameplay3d_VertexAttributeBinding_dyn();

		static Void registerClass_org_gameplay3d_Theme_ThemeImage( ::Class classObj);
		static Dynamic registerClass_org_gameplay3d_Theme_ThemeImage_dyn();

		static Void registerClass_org_gameplay3d_Theme( ::Class classObj);
		static Dynamic registerClass_org_gameplay3d_Theme_dyn();

		static Void registerClass_org_gameplay3d_Texture_Sampler( ::Class classObj);
		static Dynamic registerClass_org_gameplay3d_Texture_Sampler_dyn();

		static Void registerClass_org_gameplay3d_Texture( ::Class classObj);
		static Dynamic registerClass_org_gameplay3d_Texture_dyn();

		static Void registerClass_org_gameplay3d_TextBox( ::Class classObj);
		static Dynamic registerClass_org_gameplay3d_TextBox_dyn();

		static Void registerClass_org_gameplay3d_Terrain( ::Class classObj);
		static Dynamic registerClass_org_gameplay3d_Terrain_dyn();

		static Void registerClass_org_gameplay3d_Technique( ::Class classObj);
		static Dynamic registerClass_org_gameplay3d_Technique_dyn();

		static Void registerClass_org_gameplay3d_Slider( ::Class classObj);
		static Dynamic registerClass_org_gameplay3d_Slider_dyn();

		static Void registerClass_org_gameplay3d_Scene( ::Class classObj);
		static Dynamic registerClass_org_gameplay3d_Scene_dyn();

		static Void registerClass_org_gameplay3d_RenderTarget( ::Class classObj);
		static Dynamic registerClass_org_gameplay3d_RenderTarget_dyn();

		static Void registerClass_org_gameplay3d_RenderState_StateBlock( ::Class classObj);
		static Dynamic registerClass_org_gameplay3d_RenderState_StateBlock_dyn();

		static Void registerClass_org_gameplay3d_RenderState( ::Class classObj);
		static Dynamic registerClass_org_gameplay3d_RenderState_dyn();

		static Void registerClass_org_gameplay3d_RadioButton( ::Class classObj);
		static Dynamic registerClass_org_gameplay3d_RadioButton_dyn();

		static Void registerClass_org_gameplay3d_PhysicsCollisionShape( ::Class classObj);
		static Dynamic registerClass_org_gameplay3d_PhysicsCollisionShape_dyn();

		static Void registerClass_org_gameplay3d_Pass( ::Class classObj);
		static Dynamic registerClass_org_gameplay3d_Pass_dyn();

		static Void registerClass_org_gameplay3d_ParticleEmitter( ::Class classObj);
		static Dynamic registerClass_org_gameplay3d_ParticleEmitter_dyn();

		static Void registerClass_org_gameplay3d_Node( ::Class classObj);
		static Dynamic registerClass_org_gameplay3d_Node_dyn();

		static Void registerClass_org_gameplay3d_Model( ::Class classObj);
		static Dynamic registerClass_org_gameplay3d_Model_dyn();

		static Void registerClass_org_gameplay3d_Mesh( ::Class classObj);
		static Dynamic registerClass_org_gameplay3d_Mesh_dyn();

		static Void registerClass_org_gameplay3d_MaterialParameter( ::Class classObj);
		static Dynamic registerClass_org_gameplay3d_MaterialParameter_dyn();

		static Void registerClass_org_gameplay3d_Material( ::Class classObj);
		static Dynamic registerClass_org_gameplay3d_Material_dyn();

		static Void registerClass_org_gameplay3d_Light( ::Class classObj);
		static Dynamic registerClass_org_gameplay3d_Light_dyn();

		static Void registerClass_org_gameplay3d_Layout( ::Class classObj);
		static Dynamic registerClass_org_gameplay3d_Layout_dyn();

		static Void registerClass_org_gameplay3d_Label( ::Class classObj);
		static Dynamic registerClass_org_gameplay3d_Label_dyn();

		static Void registerClass_org_gameplay3d_Joystick( ::Class classObj);
		static Dynamic registerClass_org_gameplay3d_Joystick_dyn();

		static Void registerClass_org_gameplay3d_Joint( ::Class classObj);
		static Dynamic registerClass_org_gameplay3d_Joint_dyn();

		static Void registerClass_org_gameplay3d_Image( ::Class classObj);
		static Dynamic registerClass_org_gameplay3d_Image_dyn();

		static Void registerClass_org_gameplay3d_HeightField( ::Class classObj);
		static Dynamic registerClass_org_gameplay3d_HeightField_dyn();

		static Void registerClass_org_gameplay3d_FrameBuffer( ::Class classObj);
		static Dynamic registerClass_org_gameplay3d_FrameBuffer_dyn();

		static Void registerClass_org_gameplay3d_Form( ::Class classObj);
		static Dynamic registerClass_org_gameplay3d_Form_dyn();

		static Void registerClass_org_gameplay3d_Font( ::Class classObj);
		static Dynamic registerClass_org_gameplay3d_Font_dyn();

		static Void registerClass_org_gameplay3d_FlowLayout( ::Class classObj);
		static Dynamic registerClass_org_gameplay3d_FlowLayout_dyn();

		static Void registerClass_org_gameplay3d_Effect( ::Class classObj);
		static Dynamic registerClass_org_gameplay3d_Effect_dyn();

		static Void registerClass_org_gameplay3d_DepthStencilTarget( ::Class classObj);
		static Dynamic registerClass_org_gameplay3d_DepthStencilTarget_dyn();

		static Void registerClass_org_gameplay3d_Curve( ::Class classObj);
		static Dynamic registerClass_org_gameplay3d_Curve_dyn();

		static Void registerClass_org_gameplay3d_Control( ::Class classObj);
		static Dynamic registerClass_org_gameplay3d_Control_dyn();

		static Void registerClass_org_gameplay3d_Container( ::Class classObj);
		static Dynamic registerClass_org_gameplay3d_Container_dyn();

		static Void registerClass_org_gameplay3d_CheckBox( ::Class classObj);
		static Dynamic registerClass_org_gameplay3d_CheckBox_dyn();

		static Void registerClass_org_gameplay3d_Camera( ::Class classObj);
		static Dynamic registerClass_org_gameplay3d_Camera_dyn();

		static Void registerClass_org_gameplay3d_Button( ::Class classObj);
		static Dynamic registerClass_org_gameplay3d_Button_dyn();

		static Void registerClass_org_gameplay3d_Bundle( ::Class classObj);
		static Dynamic registerClass_org_gameplay3d_Bundle_dyn();

		static Void registerClass_org_gameplay3d_AudioBuffer( ::Class classObj);
		static Dynamic registerClass_org_gameplay3d_AudioBuffer_dyn();

		static Void registerClass_org_gameplay3d_AnimationClip( ::Class classObj);
		static Dynamic registerClass_org_gameplay3d_AnimationClip_dyn();

		static Void registerClass_org_gameplay3d_Animation( ::Class classObj);
		static Dynamic registerClass_org_gameplay3d_Animation_dyn();

		static Void registerClass_org_gameplay3d_AIState( ::Class classObj);
		static Dynamic registerClass_org_gameplay3d_AIState_dyn();

		static Void registerClass_org_gameplay3d_AIAgent( ::Class classObj);
		static Dynamic registerClass_org_gameplay3d_AIAgent_dyn();

		static Void registerClass_org_gameplay3d_AbsoluteLayout( ::Class classObj);
		static Dynamic registerClass_org_gameplay3d_AbsoluteLayout_dyn();

		static Dynamic setReferenceConstructor;
		static Dynamic setReferenceInstance;
		static Dynamic wrapCachedReference;
		static ::List factories;
		static ::Class lastClass;
		static ::String lastName;
		static Void initialie( );
		static Dynamic initialie_dyn();

		static Void deinitialize( );
		static Dynamic deinitialize_dyn();

		static Dynamic rebuildCache( );
		static Dynamic rebuildCache_dyn();

		static Void updateReference( Dynamic nativeObject,::org::gameplay3d::GameplayObject instance);
		static Dynamic updateReference_dyn();

		static Dynamic load( ::String name,int arity);
		static Dynamic load_dyn();

		static Dynamic loadMember( ::Class classObj,::String name,int arity);
		static Dynamic loadMember_dyn();

};

} // end namespace org
} // end namespace gameplay3d
} // end namespace util

#endif /* INCLUDED_org_gameplay3d_util_NativeInterface */ 
