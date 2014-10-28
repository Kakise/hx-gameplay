#ifndef INCLUDED_org_gameplay3d_Container
#define INCLUDED_org_gameplay3d_Container

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/Control.h>
HX_DECLARE_CLASS2(org,gameplay3d,Animation)
HX_DECLARE_CLASS2(org,gameplay3d,AnimationTarget)
HX_DECLARE_CLASS2(org,gameplay3d,AnimationValue)
HX_DECLARE_CLASS2(org,gameplay3d,Container)
HX_DECLARE_CLASS2(org,gameplay3d,Control)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Layout)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS2(org,gameplay3d,ScriptTarget)
HX_DECLARE_CLASS2(org,gameplay3d,Theme_Style)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,AnimationTarget_ScriptTarget)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  Container_obj : public ::org::gameplay3d::Control_obj{
	public:
		typedef ::org::gameplay3d::Control_obj super;
		typedef Container_obj OBJ_;
		Container_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Container_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Container_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Container"); }

		virtual int addControl( ::org::gameplay3d::Control control);
		Dynamic addControl_dyn();

		virtual ::org::gameplay3d::Animation getAnimation( ::String id);

		virtual int getAnimationPropertyComponentCount( int propertyId);

		virtual Void getAnimationPropertyValue( int propertyId,::org::gameplay3d::AnimationValue value);

		virtual ::org::gameplay3d::Control getControl_Str( ::String id);
		Dynamic getControl_Str_dyn();

		virtual ::org::gameplay3d::Control getControl_Int( int index);
		Dynamic getControl_Int_dyn();

		virtual Array< ::Dynamic > getControls( );
		Dynamic getControls_dyn();

		virtual ::org::gameplay3d::Layout getLayout( );
		Dynamic getLayout_dyn();

		virtual int getScroll( );
		Dynamic getScroll_dyn();

		virtual ::String getType( );

		virtual Void insertControl( ::org::gameplay3d::Control control,int index);
		Dynamic insertControl_dyn();

		virtual bool isContainer( );

		virtual bool isScrollBarsAutoHide( );
		Dynamic isScrollBarsAutoHide_dyn();

		virtual bool isScrolling( );
		Dynamic isScrolling_dyn();

		virtual Void removeControl_Ctrl( ::org::gameplay3d::Control control);
		Dynamic removeControl_Ctrl_dyn();

		virtual Void removeControl_Str( ::String id);
		Dynamic removeControl_Str_dyn();

		virtual Void removeControl_Int( int index);
		Dynamic removeControl_Int_dyn();

		virtual Void setAnimationPropertyValue( int propertyId,::org::gameplay3d::AnimationValue value,hx::Null< Float >  blendWeight);

		virtual Void setScroll( int scroll);
		Dynamic setScroll_dyn();

		virtual Void setScrollBarsAutoHide( bool autoHide);
		Dynamic setScrollBarsAutoHide_dyn();

		static int ANIMATE_SCROLLBAR_OPACITY;
		static ::org::gameplay3d::Container create( ::String id,::org::gameplay3d::Theme_Style style,hx::Null< int >  layoutType);
		static Dynamic create_dyn();

		static Dynamic hx_Container_addControl;
		static Dynamic &hx_Container_addControl_dyn() { return hx_Container_addControl;}
		static Dynamic hx_Container_static_create;
		static Dynamic &hx_Container_static_create_dyn() { return hx_Container_static_create;}
		static Dynamic hx_Container_getAnimation;
		static Dynamic &hx_Container_getAnimation_dyn() { return hx_Container_getAnimation;}
		static Dynamic hx_Container_getAnimationPropertyComponentCount;
		static Dynamic &hx_Container_getAnimationPropertyComponentCount_dyn() { return hx_Container_getAnimationPropertyComponentCount;}
		static Dynamic hx_Container_getAnimationPropertyValue;
		static Dynamic &hx_Container_getAnimationPropertyValue_dyn() { return hx_Container_getAnimationPropertyValue;}
		static Dynamic hx_Container_getControl_Str;
		static Dynamic &hx_Container_getControl_Str_dyn() { return hx_Container_getControl_Str;}
		static Dynamic hx_Container_getControl_Int;
		static Dynamic &hx_Container_getControl_Int_dyn() { return hx_Container_getControl_Int;}
		static Dynamic hx_Container_getControls;
		static Dynamic &hx_Container_getControls_dyn() { return hx_Container_getControls;}
		static Dynamic hx_Container_getLayout;
		static Dynamic &hx_Container_getLayout_dyn() { return hx_Container_getLayout;}
		static Dynamic hx_Container_getScroll;
		static Dynamic &hx_Container_getScroll_dyn() { return hx_Container_getScroll;}
		static Dynamic hx_Container_getType;
		static Dynamic &hx_Container_getType_dyn() { return hx_Container_getType;}
		static Dynamic hx_Container_insertControl;
		static Dynamic &hx_Container_insertControl_dyn() { return hx_Container_insertControl;}
		static Dynamic hx_Container_isContainer;
		static Dynamic &hx_Container_isContainer_dyn() { return hx_Container_isContainer;}
		static Dynamic hx_Container_isScrollBarsAutoHide;
		static Dynamic &hx_Container_isScrollBarsAutoHide_dyn() { return hx_Container_isScrollBarsAutoHide;}
		static Dynamic hx_Container_isScrolling;
		static Dynamic &hx_Container_isScrolling_dyn() { return hx_Container_isScrolling;}
		static Dynamic hx_Container_removeControl_Ctrl;
		static Dynamic &hx_Container_removeControl_Ctrl_dyn() { return hx_Container_removeControl_Ctrl;}
		static Dynamic hx_Container_removeControl_Str;
		static Dynamic &hx_Container_removeControl_Str_dyn() { return hx_Container_removeControl_Str;}
		static Dynamic hx_Container_removeControl_Int;
		static Dynamic &hx_Container_removeControl_Int_dyn() { return hx_Container_removeControl_Int;}
		static Dynamic hx_Container_setAnimationPropertyValue;
		static Dynamic &hx_Container_setAnimationPropertyValue_dyn() { return hx_Container_setAnimationPropertyValue;}
		static Dynamic hx_Container_setScroll;
		static Dynamic &hx_Container_setScroll_dyn() { return hx_Container_setScroll;}
		static Dynamic hx_Container_setScrollBarsAutoHide;
		static Dynamic &hx_Container_setScrollBarsAutoHide_dyn() { return hx_Container_setScrollBarsAutoHide;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_Container */ 
