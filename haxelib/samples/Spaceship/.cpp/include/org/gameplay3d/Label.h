#ifndef INCLUDED_org_gameplay3d_Label
#define INCLUDED_org_gameplay3d_Label

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/Control.h>
HX_DECLARE_CLASS2(org,gameplay3d,AnimationTarget)
HX_DECLARE_CLASS2(org,gameplay3d,Control)
HX_DECLARE_CLASS2(org,gameplay3d,Control_Listener)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Label)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS2(org,gameplay3d,ScriptTarget)
HX_DECLARE_CLASS2(org,gameplay3d,Theme_Style)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,ListenerWrapper)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,AnimationTarget_ScriptTarget)
HX_DECLARE_CLASS3(org,gameplay3d,wrapper,Control_ListenerWrapper)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  Label_obj : public ::org::gameplay3d::Control_obj{
	public:
		typedef ::org::gameplay3d::Control_obj super;
		typedef Label_obj OBJ_;
		Label_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Label_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Label_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Label"); }

		virtual Void addListener( ::org::gameplay3d::wrapper::Control_ListenerWrapper listener,int eventFlags);

		virtual ::String getText( );
		Dynamic getText_dyn();

		virtual ::String getType( );

		virtual Void setText( ::String text);
		Dynamic setText_dyn();

		static ::org::gameplay3d::Label create( ::String id,::org::gameplay3d::Theme_Style style);
		static Dynamic create_dyn();

		static Dynamic hx_Label_addListener;
		static Dynamic &hx_Label_addListener_dyn() { return hx_Label_addListener;}
		static Dynamic hx_Label_static_create;
		static Dynamic &hx_Label_static_create_dyn() { return hx_Label_static_create;}
		static Dynamic hx_Label_getText;
		static Dynamic &hx_Label_getText_dyn() { return hx_Label_getText;}
		static Dynamic hx_Label_getType;
		static Dynamic &hx_Label_getType_dyn() { return hx_Label_getType;}
		static Dynamic hx_Label_setText;
		static Dynamic &hx_Label_setText_dyn() { return hx_Label_setText;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_Label */ 
