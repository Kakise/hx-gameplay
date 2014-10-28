#ifndef INCLUDED_org_gameplay3d_TextBox
#define INCLUDED_org_gameplay3d_TextBox

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/Label.h>
HX_DECLARE_CLASS2(org,gameplay3d,AnimationTarget)
HX_DECLARE_CLASS2(org,gameplay3d,Control)
HX_DECLARE_CLASS2(org,gameplay3d,Control_Listener)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Label)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS2(org,gameplay3d,ScriptTarget)
HX_DECLARE_CLASS2(org,gameplay3d,TextBox)
HX_DECLARE_CLASS2(org,gameplay3d,Theme_Style)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,ListenerWrapper)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,AnimationTarget_ScriptTarget)
HX_DECLARE_CLASS3(org,gameplay3d,wrapper,Control_ListenerWrapper)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  TextBox_obj : public ::org::gameplay3d::Label_obj{
	public:
		typedef ::org::gameplay3d::Label_obj super;
		typedef TextBox_obj OBJ_;
		TextBox_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TextBox_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextBox_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("TextBox"); }

		virtual Void addListener( ::org::gameplay3d::wrapper::Control_ListenerWrapper listener,int eventFlags);

		virtual int getLastKeypress( );
		Dynamic getLastKeypress_dyn();

		virtual ::String getType( );

		static ::org::gameplay3d::TextBox create( ::String id,::org::gameplay3d::Theme_Style style);
		static Dynamic create_dyn();

		static Dynamic hx_TextBox_addListener;
		static Dynamic &hx_TextBox_addListener_dyn() { return hx_TextBox_addListener;}
		static Dynamic hx_TextBox_static_create;
		static Dynamic &hx_TextBox_static_create_dyn() { return hx_TextBox_static_create;}
		static Dynamic hx_TextBox_getLastKeypress;
		static Dynamic &hx_TextBox_getLastKeypress_dyn() { return hx_TextBox_getLastKeypress;}
		static Dynamic hx_TextBox_getType;
		static Dynamic &hx_TextBox_getType_dyn() { return hx_TextBox_getType;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_TextBox */ 
