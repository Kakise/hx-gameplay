#ifndef INCLUDED_org_gameplay3d_Form
#define INCLUDED_org_gameplay3d_Form

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/Container.h>
HX_DECLARE_CLASS2(org,gameplay3d,AnimationTarget)
HX_DECLARE_CLASS2(org,gameplay3d,Container)
HX_DECLARE_CLASS2(org,gameplay3d,Control)
HX_DECLARE_CLASS2(org,gameplay3d,Form)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Node)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS2(org,gameplay3d,ScriptTarget)
HX_DECLARE_CLASS2(org,gameplay3d,Theme)
HX_DECLARE_CLASS2(org,gameplay3d,Theme_Style)
HX_DECLARE_CLASS2(org,gameplay3d,Transform)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IRectangle)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,AnimationTarget_ScriptTarget)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  Form_obj : public ::org::gameplay3d::Container_obj{
	public:
		typedef ::org::gameplay3d::Container_obj super;
		typedef Form_obj OBJ_;
		Form_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Form_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Form_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Form"); }

		virtual Void draw( );
		Dynamic draw_dyn();

		virtual ::org::gameplay3d::Theme getTheme( );
		Dynamic getTheme_dyn();

		virtual ::String getType( );

		virtual Void setAutoHeight( bool autoHeight);

		virtual Void setAutoWidth( bool autoWidth);

		virtual Void setBounds( ::org::gameplay3d::immutable::IRectangle bounds);

		virtual Void setHeight( Float height);

		virtual Void setNode( ::org::gameplay3d::Node node);
		Dynamic setNode_dyn();

		virtual Void setSize( Float width,Float height);

		virtual Void setWidth( Float width);

		virtual Void update( Float elapsedTime);
		Dynamic update_dyn();

		static ::org::gameplay3d::Form create_Str_ThmStl_Int( ::String id,::org::gameplay3d::Theme_Style style,int layoutType);
		static Dynamic create_Str_ThmStl_Int_dyn();

		static ::org::gameplay3d::Form create_Str( ::String url);
		static Dynamic create_Str_dyn();

		static ::org::gameplay3d::Form getForm( ::String id);
		static Dynamic getForm_dyn();

		static Dynamic hx_Form_static_create_Str_ThmStl_Int;
		static Dynamic &hx_Form_static_create_Str_ThmStl_Int_dyn() { return hx_Form_static_create_Str_ThmStl_Int;}
		static Dynamic hx_Form_static_create_Str;
		static Dynamic &hx_Form_static_create_Str_dyn() { return hx_Form_static_create_Str;}
		static Dynamic hx_Form_draw;
		static Dynamic &hx_Form_draw_dyn() { return hx_Form_draw;}
		static Dynamic hx_Form_static_getForm;
		static Dynamic &hx_Form_static_getForm_dyn() { return hx_Form_static_getForm;}
		static Dynamic hx_Form_getTheme;
		static Dynamic &hx_Form_getTheme_dyn() { return hx_Form_getTheme;}
		static Dynamic hx_Form_getType;
		static Dynamic &hx_Form_getType_dyn() { return hx_Form_getType;}
		static Dynamic hx_Form_setAutoHeight;
		static Dynamic &hx_Form_setAutoHeight_dyn() { return hx_Form_setAutoHeight;}
		static Dynamic hx_Form_setAutoWidth;
		static Dynamic &hx_Form_setAutoWidth_dyn() { return hx_Form_setAutoWidth;}
		static Dynamic hx_Form_setBounds;
		static Dynamic &hx_Form_setBounds_dyn() { return hx_Form_setBounds;}
		static Dynamic hx_Form_setHeight;
		static Dynamic &hx_Form_setHeight_dyn() { return hx_Form_setHeight;}
		static Dynamic hx_Form_setNode;
		static Dynamic &hx_Form_setNode_dyn() { return hx_Form_setNode;}
		static Dynamic hx_Form_setSize;
		static Dynamic &hx_Form_setSize_dyn() { return hx_Form_setSize;}
		static Dynamic hx_Form_setWidth;
		static Dynamic &hx_Form_setWidth_dyn() { return hx_Form_setWidth;}
		static Dynamic hx_Form_update;
		static Dynamic &hx_Form_update_dyn() { return hx_Form_update;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_Form */ 
