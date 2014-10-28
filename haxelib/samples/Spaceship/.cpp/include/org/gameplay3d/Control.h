#ifndef INCLUDED_org_gameplay3d_Control
#define INCLUDED_org_gameplay3d_Control

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/intern/impl/AnimationTarget_ScriptTarget.h>
#include <org/gameplay3d/Ref.h>
HX_DECLARE_CLASS2(org,gameplay3d,AnimationTarget)
HX_DECLARE_CLASS2(org,gameplay3d,AnimationValue)
HX_DECLARE_CLASS2(org,gameplay3d,Control)
HX_DECLARE_CLASS2(org,gameplay3d,Control_Listener)
HX_DECLARE_CLASS2(org,gameplay3d,Font)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Rectangle)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS2(org,gameplay3d,ScriptTarget)
HX_DECLARE_CLASS2(org,gameplay3d,Theme_SideRegions)
HX_DECLARE_CLASS2(org,gameplay3d,Theme_Style)
HX_DECLARE_CLASS2(org,gameplay3d,Theme_UVs)
HX_DECLARE_CLASS2(org,gameplay3d,Vector4)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IRectangle)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,ITheme_SideRegions)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,ITheme_UVs)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector4)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,ListenerWrapper)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,AnimationTarget_ScriptTarget)
HX_DECLARE_CLASS3(org,gameplay3d,wrapper,Control_ListenerWrapper)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  Control_obj : public ::org::gameplay3d::intern::impl::AnimationTarget_ScriptTarget_obj{
	public:
		typedef ::org::gameplay3d::intern::impl::AnimationTarget_ScriptTarget_obj super;
		typedef Control_obj OBJ_;
		Control_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Control_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Control_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::org::gameplay3d::intern::INativeBinding_obj *()
			{ return new ::org::gameplay3d::intern::INativeBinding_delegate_< Control_obj >(this); }
		inline operator ::org::gameplay3d::Ref_obj *()
			{ return new ::org::gameplay3d::Ref_delegate_< Control_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("Control"); }

		::org::gameplay3d::Vector4 _cursorColor;
		::org::gameplay3d::Vector4 _imageColor;
		::org::gameplay3d::Vector4 _skinColor;
		::org::gameplay3d::Vector4 _textColor;
		::org::gameplay3d::Rectangle _bounds;
		::org::gameplay3d::Rectangle _clip;
		::org::gameplay3d::Rectangle _clipBounds;
		::org::gameplay3d::Rectangle _cursorRegion;
		::org::gameplay3d::Rectangle _imageRegion;
		::org::gameplay3d::Rectangle _skinRegion;
		::org::gameplay3d::Theme_UVs _cursorUVs;
		::org::gameplay3d::Theme_UVs _imageUVs;
		::org::gameplay3d::Theme_SideRegions _border;
		::org::gameplay3d::Theme_SideRegions _margin;
		::org::gameplay3d::Theme_SideRegions _padding;
		virtual Void addListener( ::org::gameplay3d::wrapper::Control_ListenerWrapper listener,int eventFlags);
		Dynamic addListener_dyn();

		virtual Void setEnabled( bool enabled);
		Dynamic setEnabled_dyn();

		virtual int getAlignment( );
		Dynamic getAlignment_dyn();

		virtual int getAnimationPropertyComponentCount( int propertyId);

		virtual Void getAnimationPropertyValue( int propertyId,::org::gameplay3d::AnimationValue value);

		virtual bool getAutoHeight( );
		Dynamic getAutoHeight_dyn();

		virtual bool getAutoWidth( );
		Dynamic getAutoWidth_dyn();

		virtual ::org::gameplay3d::immutable::ITheme_SideRegions getBorder( hx::Null< int >  state);
		Dynamic getBorder_dyn();

		virtual ::org::gameplay3d::immutable::IRectangle getBounds( );
		Dynamic getBounds_dyn();

		virtual ::org::gameplay3d::immutable::IRectangle getClip( );
		Dynamic getClip_dyn();

		virtual ::org::gameplay3d::immutable::IRectangle getClipBounds( );
		Dynamic getClipBounds_dyn();

		virtual bool getConsumeInputEvents( );
		Dynamic getConsumeInputEvents_dyn();

		virtual ::org::gameplay3d::immutable::IVector4 getCursorColor( int state);
		Dynamic getCursorColor_dyn();

		virtual ::org::gameplay3d::immutable::IRectangle getCursorRegion( int state);
		Dynamic getCursorRegion_dyn();

		virtual ::org::gameplay3d::immutable::ITheme_UVs getCursorUVs( int state);
		Dynamic getCursorUVs_dyn();

		virtual int getFocusIndex( );
		Dynamic getFocusIndex_dyn();

		virtual ::org::gameplay3d::Font getFont( hx::Null< int >  state);
		Dynamic getFont_dyn();

		virtual int getFontSize( hx::Null< int >  state);
		Dynamic getFontSize_dyn();

		virtual Float getHeight( );
		Dynamic getHeight_dyn();

		virtual ::String getId( );
		Dynamic getId_dyn();

		virtual ::org::gameplay3d::immutable::IVector4 getImageColor( ::String id,int state);
		Dynamic getImageColor_dyn();

		virtual ::org::gameplay3d::immutable::IRectangle getImageRegion( ::String id,int state);
		Dynamic getImageRegion_dyn();

		virtual ::org::gameplay3d::immutable::ITheme_UVs getImageUVs( ::String id,int state);
		Dynamic getImageUVs_dyn();

		virtual ::org::gameplay3d::immutable::ITheme_SideRegions getMargin( );
		Dynamic getMargin_dyn();

		virtual Float getOpacity( hx::Null< int >  state);
		Dynamic getOpacity_dyn();

		virtual ::org::gameplay3d::Theme_SideRegions getPadding( );
		Dynamic getPadding_dyn();

		virtual ::org::gameplay3d::immutable::IVector4 getSkinColor( hx::Null< int >  state);
		Dynamic getSkinColor_dyn();

		virtual ::org::gameplay3d::immutable::IRectangle getSkinRegion( hx::Null< int >  state);
		Dynamic getSkinRegion_dyn();

		virtual int getState( );
		Dynamic getState_dyn();

		virtual ::org::gameplay3d::Theme_Style getStyle( );
		Dynamic getStyle_dyn();

		virtual int getTextAlignment( hx::Null< int >  state);
		Dynamic getTextAlignment_dyn();

		virtual ::org::gameplay3d::immutable::IVector4 getTextColor( hx::Null< int >  state);
		Dynamic getTextColor_dyn();

		virtual bool getTextRightToLeft( hx::Null< int >  state);
		Dynamic getTextRightToLeft_dyn();

		virtual ::String getType( );
		Dynamic getType_dyn();

		virtual Float getWidth( );
		Dynamic getWidth_dyn();

		virtual Float getX( );
		Dynamic getX_dyn();

		virtual Float getY( );
		Dynamic getY_dyn();

		virtual int getZIndex( );
		Dynamic getZIndex_dyn();

		virtual bool isContainer( );
		Dynamic isContainer_dyn();

		virtual bool isEnabled( );
		Dynamic isEnabled_dyn();

		virtual Void setAlignment( int alignment);
		Dynamic setAlignment_dyn();

		virtual Void setAnimationPropertyValue( int propertyId,::org::gameplay3d::AnimationValue value,hx::Null< Float >  blendWeight);

		virtual Void setAutoHeight( bool autoHeight);
		Dynamic setAutoHeight_dyn();

		virtual Void setAutoWidth( bool autoWidth);
		Dynamic setAutoWidth_dyn();

		virtual Void setBorder( Float top,Float bottom,Float left,Float right,hx::Null< int >  states);
		Dynamic setBorder_dyn();

		virtual Void setBounds( ::org::gameplay3d::immutable::IRectangle bounds);
		Dynamic setBounds_dyn();

		virtual Void setConsumeInputEvents( bool consume);
		Dynamic setConsumeInputEvents_dyn();

		virtual Void setCursorColor( ::org::gameplay3d::immutable::IVector4 color,int states);
		Dynamic setCursorColor_dyn();

		virtual Void setCursorRegion( ::org::gameplay3d::immutable::IRectangle region,int states);
		Dynamic setCursorRegion_dyn();

		virtual Void setFocusIndex( int focusIndex);
		Dynamic setFocusIndex_dyn();

		virtual Void setFont( ::org::gameplay3d::Font font,hx::Null< int >  states);
		Dynamic setFont_dyn();

		virtual Void setFontSize( int size,hx::Null< int >  states);
		Dynamic setFontSize_dyn();

		virtual Void setHeight( Float height);
		Dynamic setHeight_dyn();

		virtual Void setImageColor( ::String id,::org::gameplay3d::immutable::IVector4 color,hx::Null< int >  states);
		Dynamic setImageColor_dyn();

		virtual Void setImageRegion( ::String id,::org::gameplay3d::immutable::IRectangle region,hx::Null< int >  states);
		Dynamic setImageRegion_dyn();

		virtual Void setMargin( Float top,Float bottom,Float left,Float right);
		Dynamic setMargin_dyn();

		virtual Void setVisible( bool visible);
		Dynamic setVisible_dyn();

		virtual bool isVisible( );
		Dynamic isVisible_dyn();

		virtual Void setOpacity( Float opacity,hx::Null< int >  states);
		Dynamic setOpacity_dyn();

		virtual Void setPadding( Float top,Float bottom,Float left,Float right);
		Dynamic setPadding_dyn();

		virtual Void setPosition( Float x,Float y);
		Dynamic setPosition_dyn();

		virtual Void setSize( Float width,Float height);
		Dynamic setSize_dyn();

		virtual Void setSkinColor( ::org::gameplay3d::immutable::IVector4 color,hx::Null< int >  states);
		Dynamic setSkinColor_dyn();

		virtual Void setSkinRegion( ::org::gameplay3d::immutable::IRectangle region,hx::Null< int >  states);
		Dynamic setSkinRegion_dyn();

		virtual Void setState( int state);
		Dynamic setState_dyn();

		virtual Void setStyle( ::org::gameplay3d::Theme_Style style);
		Dynamic setStyle_dyn();

		virtual Void setTextAlignment( int alignment,hx::Null< int >  states);
		Dynamic setTextAlignment_dyn();

		virtual Void setTextColor( ::org::gameplay3d::immutable::IVector4 color,hx::Null< int >  states);
		Dynamic setTextColor_dyn();

		virtual Void setTextRightToLeft( bool rightToLeft,hx::Null< int >  states);
		Dynamic setTextRightToLeft_dyn();

		virtual Void setWidth( Float width);
		Dynamic setWidth_dyn();

		virtual Void setZIndex( int zIndex);
		Dynamic setZIndex_dyn();

		static int STATE_ALL;
		static int ANIMATE_POSITION;
		static int ANIMATE_POSITION_X;
		static int ANIMATE_POSITION_Y;
		static int ANIMATE_SIZE;
		static int ANIMATE_SIZE_WIDTH;
		static int ANIMATE_SIZE_HEIGHT;
		static int ANIMATE_OPACITY;
		static Dynamic hx_Control_addListener;
		static Dynamic &hx_Control_addListener_dyn() { return hx_Control_addListener;}
		static Dynamic hx_Control_setEnabled;
		static Dynamic &hx_Control_setEnabled_dyn() { return hx_Control_setEnabled;}
		static Dynamic hx_Control_getAlignment;
		static Dynamic &hx_Control_getAlignment_dyn() { return hx_Control_getAlignment;}
		static Dynamic hx_Control_getAnimationPropertyComponentCount;
		static Dynamic &hx_Control_getAnimationPropertyComponentCount_dyn() { return hx_Control_getAnimationPropertyComponentCount;}
		static Dynamic hx_Control_getAnimationPropertyValue;
		static Dynamic &hx_Control_getAnimationPropertyValue_dyn() { return hx_Control_getAnimationPropertyValue;}
		static Dynamic hx_Control_getAutoHeight;
		static Dynamic &hx_Control_getAutoHeight_dyn() { return hx_Control_getAutoHeight;}
		static Dynamic hx_Control_getAutoWidth;
		static Dynamic &hx_Control_getAutoWidth_dyn() { return hx_Control_getAutoWidth;}
		static Dynamic hx_Control_getBorder;
		static Dynamic &hx_Control_getBorder_dyn() { return hx_Control_getBorder;}
		static Dynamic hx_Control_getBounds;
		static Dynamic &hx_Control_getBounds_dyn() { return hx_Control_getBounds;}
		static Dynamic hx_Control_getClip;
		static Dynamic &hx_Control_getClip_dyn() { return hx_Control_getClip;}
		static Dynamic hx_Control_getClipBounds;
		static Dynamic &hx_Control_getClipBounds_dyn() { return hx_Control_getClipBounds;}
		static Dynamic hx_Control_getConsumeInputEvents;
		static Dynamic &hx_Control_getConsumeInputEvents_dyn() { return hx_Control_getConsumeInputEvents;}
		static Dynamic hx_Control_getCursorColor;
		static Dynamic &hx_Control_getCursorColor_dyn() { return hx_Control_getCursorColor;}
		static Dynamic hx_Control_getCursorRegion;
		static Dynamic &hx_Control_getCursorRegion_dyn() { return hx_Control_getCursorRegion;}
		static Dynamic hx_Control_getCursorUVs;
		static Dynamic &hx_Control_getCursorUVs_dyn() { return hx_Control_getCursorUVs;}
		static Dynamic hx_Control_getFocusIndex;
		static Dynamic &hx_Control_getFocusIndex_dyn() { return hx_Control_getFocusIndex;}
		static Dynamic hx_Control_getFont;
		static Dynamic &hx_Control_getFont_dyn() { return hx_Control_getFont;}
		static Dynamic hx_Control_getFontSize;
		static Dynamic &hx_Control_getFontSize_dyn() { return hx_Control_getFontSize;}
		static Dynamic hx_Control_getHeight;
		static Dynamic &hx_Control_getHeight_dyn() { return hx_Control_getHeight;}
		static Dynamic hx_Control_getId;
		static Dynamic &hx_Control_getId_dyn() { return hx_Control_getId;}
		static Dynamic hx_Control_getImageColor;
		static Dynamic &hx_Control_getImageColor_dyn() { return hx_Control_getImageColor;}
		static Dynamic hx_Control_getImageRegion;
		static Dynamic &hx_Control_getImageRegion_dyn() { return hx_Control_getImageRegion;}
		static Dynamic hx_Control_getImageUVs;
		static Dynamic &hx_Control_getImageUVs_dyn() { return hx_Control_getImageUVs;}
		static Dynamic hx_Control_getMargin;
		static Dynamic &hx_Control_getMargin_dyn() { return hx_Control_getMargin;}
		static Dynamic hx_Control_getOpacity;
		static Dynamic &hx_Control_getOpacity_dyn() { return hx_Control_getOpacity;}
		static Dynamic hx_Control_getPadding;
		static Dynamic &hx_Control_getPadding_dyn() { return hx_Control_getPadding;}
		static Dynamic hx_Control_getSkinColor;
		static Dynamic &hx_Control_getSkinColor_dyn() { return hx_Control_getSkinColor;}
		static Dynamic hx_Control_getSkinRegion;
		static Dynamic &hx_Control_getSkinRegion_dyn() { return hx_Control_getSkinRegion;}
		static Dynamic hx_Control_getState;
		static Dynamic &hx_Control_getState_dyn() { return hx_Control_getState;}
		static Dynamic hx_Control_getStyle;
		static Dynamic &hx_Control_getStyle_dyn() { return hx_Control_getStyle;}
		static Dynamic hx_Control_getTextAlignment;
		static Dynamic &hx_Control_getTextAlignment_dyn() { return hx_Control_getTextAlignment;}
		static Dynamic hx_Control_getTextColor;
		static Dynamic &hx_Control_getTextColor_dyn() { return hx_Control_getTextColor;}
		static Dynamic hx_Control_getTextRightToLeft;
		static Dynamic &hx_Control_getTextRightToLeft_dyn() { return hx_Control_getTextRightToLeft;}
		static Dynamic hx_Control_getType;
		static Dynamic &hx_Control_getType_dyn() { return hx_Control_getType;}
		static Dynamic hx_Control_getWidth;
		static Dynamic &hx_Control_getWidth_dyn() { return hx_Control_getWidth;}
		static Dynamic hx_Control_getX;
		static Dynamic &hx_Control_getX_dyn() { return hx_Control_getX;}
		static Dynamic hx_Control_getY;
		static Dynamic &hx_Control_getY_dyn() { return hx_Control_getY;}
		static Dynamic hx_Control_getZIndex;
		static Dynamic &hx_Control_getZIndex_dyn() { return hx_Control_getZIndex;}
		static Dynamic hx_Control_isContainer;
		static Dynamic &hx_Control_isContainer_dyn() { return hx_Control_isContainer;}
		static Dynamic hx_Control_isEnabled;
		static Dynamic &hx_Control_isEnabled_dyn() { return hx_Control_isEnabled;}
		static Dynamic hx_Control_setAlignment;
		static Dynamic &hx_Control_setAlignment_dyn() { return hx_Control_setAlignment;}
		static Dynamic hx_Control_setAnimationPropertyValue;
		static Dynamic &hx_Control_setAnimationPropertyValue_dyn() { return hx_Control_setAnimationPropertyValue;}
		static Dynamic hx_Control_setAutoHeight;
		static Dynamic &hx_Control_setAutoHeight_dyn() { return hx_Control_setAutoHeight;}
		static Dynamic hx_Control_setAutoWidth;
		static Dynamic &hx_Control_setAutoWidth_dyn() { return hx_Control_setAutoWidth;}
		static Dynamic hx_Control_setBorder;
		static Dynamic &hx_Control_setBorder_dyn() { return hx_Control_setBorder;}
		static Dynamic hx_Control_setBounds;
		static Dynamic &hx_Control_setBounds_dyn() { return hx_Control_setBounds;}
		static Dynamic hx_Control_setConsumeInputEvents;
		static Dynamic &hx_Control_setConsumeInputEvents_dyn() { return hx_Control_setConsumeInputEvents;}
		static Dynamic hx_Control_setCursorColor;
		static Dynamic &hx_Control_setCursorColor_dyn() { return hx_Control_setCursorColor;}
		static Dynamic hx_Control_setCursorRegion;
		static Dynamic &hx_Control_setCursorRegion_dyn() { return hx_Control_setCursorRegion;}
		static Dynamic hx_Control_setFocusIndex;
		static Dynamic &hx_Control_setFocusIndex_dyn() { return hx_Control_setFocusIndex;}
		static Dynamic hx_Control_setFont;
		static Dynamic &hx_Control_setFont_dyn() { return hx_Control_setFont;}
		static Dynamic hx_Control_setFontSize;
		static Dynamic &hx_Control_setFontSize_dyn() { return hx_Control_setFontSize;}
		static Dynamic hx_Control_setHeight;
		static Dynamic &hx_Control_setHeight_dyn() { return hx_Control_setHeight;}
		static Dynamic hx_Control_setImageColor;
		static Dynamic &hx_Control_setImageColor_dyn() { return hx_Control_setImageColor;}
		static Dynamic hx_Control_setImageRegion;
		static Dynamic &hx_Control_setImageRegion_dyn() { return hx_Control_setImageRegion;}
		static Dynamic hx_Control_setMargin;
		static Dynamic &hx_Control_setMargin_dyn() { return hx_Control_setMargin;}
		static Dynamic hx_Control_setVisible;
		static Dynamic &hx_Control_setVisible_dyn() { return hx_Control_setVisible;}
		static Dynamic hx_Control_isVisible;
		static Dynamic &hx_Control_isVisible_dyn() { return hx_Control_isVisible;}
		static Dynamic hx_Control_setOpacity;
		static Dynamic &hx_Control_setOpacity_dyn() { return hx_Control_setOpacity;}
		static Dynamic hx_Control_setPadding;
		static Dynamic &hx_Control_setPadding_dyn() { return hx_Control_setPadding;}
		static Dynamic hx_Control_setPosition;
		static Dynamic &hx_Control_setPosition_dyn() { return hx_Control_setPosition;}
		static Dynamic hx_Control_setSize;
		static Dynamic &hx_Control_setSize_dyn() { return hx_Control_setSize;}
		static Dynamic hx_Control_setSkinColor;
		static Dynamic &hx_Control_setSkinColor_dyn() { return hx_Control_setSkinColor;}
		static Dynamic hx_Control_setSkinRegion;
		static Dynamic &hx_Control_setSkinRegion_dyn() { return hx_Control_setSkinRegion;}
		static Dynamic hx_Control_setState;
		static Dynamic &hx_Control_setState_dyn() { return hx_Control_setState;}
		static Dynamic hx_Control_setStyle;
		static Dynamic &hx_Control_setStyle_dyn() { return hx_Control_setStyle;}
		static Dynamic hx_Control_setTextAlignment;
		static Dynamic &hx_Control_setTextAlignment_dyn() { return hx_Control_setTextAlignment;}
		static Dynamic hx_Control_setTextColor;
		static Dynamic &hx_Control_setTextColor_dyn() { return hx_Control_setTextColor;}
		static Dynamic hx_Control_setTextRightToLeft;
		static Dynamic &hx_Control_setTextRightToLeft_dyn() { return hx_Control_setTextRightToLeft;}
		static Dynamic hx_Control_setWidth;
		static Dynamic &hx_Control_setWidth_dyn() { return hx_Control_setWidth;}
		static Dynamic hx_Control_setZIndex;
		static Dynamic &hx_Control_setZIndex_dyn() { return hx_Control_setZIndex;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_Control */ 
