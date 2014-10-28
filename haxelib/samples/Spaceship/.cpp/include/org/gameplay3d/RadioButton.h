#ifndef INCLUDED_org_gameplay3d_RadioButton
#define INCLUDED_org_gameplay3d_RadioButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/Button.h>
HX_DECLARE_CLASS2(org,gameplay3d,AnimationTarget)
HX_DECLARE_CLASS2(org,gameplay3d,Button)
HX_DECLARE_CLASS2(org,gameplay3d,Control)
HX_DECLARE_CLASS2(org,gameplay3d,Control_Listener)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Label)
HX_DECLARE_CLASS2(org,gameplay3d,RadioButton)
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


class HXCPP_CLASS_ATTRIBUTES  RadioButton_obj : public ::org::gameplay3d::Button_obj{
	public:
		typedef ::org::gameplay3d::Button_obj super;
		typedef RadioButton_obj OBJ_;
		RadioButton_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< RadioButton_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RadioButton_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("RadioButton"); }

		virtual Void addListener( ::org::gameplay3d::wrapper::Control_ListenerWrapper listener,int eventFlags);

		virtual ::String getGroupId( );
		Dynamic getGroupId_dyn();

		virtual ::org::gameplay3d::immutable::IVector2 getImageSize( );
		Dynamic getImageSize_dyn();

		virtual ::String getType( );

		virtual bool isSelected( );
		Dynamic isSelected_dyn();

		virtual Void setGroupId( ::String groupId);
		Dynamic setGroupId_dyn();

		virtual Void setImageSize( Float width,Float height);
		Dynamic setImageSize_dyn();

		virtual Void setSelected( bool selected);
		Dynamic setSelected_dyn();

		static ::org::gameplay3d::RadioButton create( ::String id,::org::gameplay3d::Theme_Style style);
		static Dynamic create_dyn();

		static Dynamic hx_RadioButton_addListener;
		static Dynamic &hx_RadioButton_addListener_dyn() { return hx_RadioButton_addListener;}
		static Dynamic hx_RadioButton_static_create;
		static Dynamic &hx_RadioButton_static_create_dyn() { return hx_RadioButton_static_create;}
		static Dynamic hx_RadioButton_getGroupId;
		static Dynamic &hx_RadioButton_getGroupId_dyn() { return hx_RadioButton_getGroupId;}
		static Dynamic hx_RadioButton_getImageSize;
		static Dynamic &hx_RadioButton_getImageSize_dyn() { return hx_RadioButton_getImageSize;}
		static Dynamic hx_RadioButton_getType;
		static Dynamic &hx_RadioButton_getType_dyn() { return hx_RadioButton_getType;}
		static Dynamic hx_RadioButton_isSelected;
		static Dynamic &hx_RadioButton_isSelected_dyn() { return hx_RadioButton_isSelected;}
		static Dynamic hx_RadioButton_setGroupId;
		static Dynamic &hx_RadioButton_setGroupId_dyn() { return hx_RadioButton_setGroupId;}
		static Dynamic hx_RadioButton_setImageSize;
		static Dynamic &hx_RadioButton_setImageSize_dyn() { return hx_RadioButton_setImageSize;}
		static Dynamic hx_RadioButton_setSelected;
		static Dynamic &hx_RadioButton_setSelected_dyn() { return hx_RadioButton_setSelected;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_RadioButton */ 
