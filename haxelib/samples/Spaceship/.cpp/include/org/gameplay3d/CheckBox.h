#ifndef INCLUDED_org_gameplay3d_CheckBox
#define INCLUDED_org_gameplay3d_CheckBox

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/Button.h>
HX_DECLARE_CLASS2(org,gameplay3d,AnimationTarget)
HX_DECLARE_CLASS2(org,gameplay3d,Button)
HX_DECLARE_CLASS2(org,gameplay3d,CheckBox)
HX_DECLARE_CLASS2(org,gameplay3d,Control)
HX_DECLARE_CLASS2(org,gameplay3d,Control_Listener)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Label)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS2(org,gameplay3d,ScriptTarget)
HX_DECLARE_CLASS2(org,gameplay3d,Theme_Style)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector2)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,ListenerWrapper)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,AnimationTarget_ScriptTarget)
HX_DECLARE_CLASS3(org,gameplay3d,wrapper,Control_ListenerWrapper)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  CheckBox_obj : public ::org::gameplay3d::Button_obj{
	public:
		typedef ::org::gameplay3d::Button_obj super;
		typedef CheckBox_obj OBJ_;
		CheckBox_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< CheckBox_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CheckBox_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("CheckBox"); }

		virtual Void addListener( ::org::gameplay3d::wrapper::Control_ListenerWrapper listener,int eventFlags);

		virtual ::org::gameplay3d::immutable::IVector2 getImageSize( );
		Dynamic getImageSize_dyn();

		virtual ::String getType( );

		virtual bool isChecked( );
		Dynamic isChecked_dyn();

		virtual Void setChecked( bool checked);
		Dynamic setChecked_dyn();

		virtual Void setImageSize( Float width,Float height);
		Dynamic setImageSize_dyn();

		static ::org::gameplay3d::CheckBox create( ::String id,::org::gameplay3d::Theme_Style style);
		static Dynamic create_dyn();

		static Dynamic hx_CheckBox_addListener;
		static Dynamic &hx_CheckBox_addListener_dyn() { return hx_CheckBox_addListener;}
		static Dynamic hx_CheckBox_static_create;
		static Dynamic &hx_CheckBox_static_create_dyn() { return hx_CheckBox_static_create;}
		static Dynamic hx_CheckBox_getImageSize;
		static Dynamic &hx_CheckBox_getImageSize_dyn() { return hx_CheckBox_getImageSize;}
		static Dynamic hx_CheckBox_getType;
		static Dynamic &hx_CheckBox_getType_dyn() { return hx_CheckBox_getType;}
		static Dynamic hx_CheckBox_isChecked;
		static Dynamic &hx_CheckBox_isChecked_dyn() { return hx_CheckBox_isChecked;}
		static Dynamic hx_CheckBox_setChecked;
		static Dynamic &hx_CheckBox_setChecked_dyn() { return hx_CheckBox_setChecked;}
		static Dynamic hx_CheckBox_setImageSize;
		static Dynamic &hx_CheckBox_setImageSize_dyn() { return hx_CheckBox_setImageSize;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_CheckBox */ 
