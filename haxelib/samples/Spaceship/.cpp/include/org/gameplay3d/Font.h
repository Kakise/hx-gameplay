#ifndef INCLUDED_org_gameplay3d_Font
#define INCLUDED_org_gameplay3d_Font

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
#include <org/gameplay3d/Ref.h>
HX_DECLARE_CLASS2(org,gameplay3d,Font)
HX_DECLARE_CLASS2(org,gameplay3d,Font_Text)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Rectangle)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS2(org,gameplay3d,SpriteBatch)
HX_DECLARE_CLASS2(org,gameplay3d,Vector2)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IRectangle)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector2)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector4)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  Font_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef Font_obj OBJ_;
		Font_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Font_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Font_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		inline operator ::org::gameplay3d::intern::INativeBinding_obj *()
			{ return new ::org::gameplay3d::intern::INativeBinding_delegate_< Font_obj >(this); }
		inline operator ::org::gameplay3d::Ref_obj *()
			{ return new ::org::gameplay3d::Ref_delegate_< Font_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("Font"); }

		virtual ::org::gameplay3d::Font_Text createText( ::String text,::org::gameplay3d::immutable::IRectangle area,::org::gameplay3d::immutable::IVector4 color,hx::Null< int >  size,hx::Null< int >  justify,hx::Null< bool >  wrap,hx::Null< bool >  rightToLeft,::org::gameplay3d::Rectangle clip);
		Dynamic createText_dyn();

		virtual Void drawText_Txt( ::org::gameplay3d::Font_Text text);
		Dynamic drawText_Txt_dyn();

		virtual Void drawText_Str_Rct_V4_IntX2_BoolX2_Rct( ::String text,::org::gameplay3d::immutable::IRectangle area,::org::gameplay3d::immutable::IVector4 color,hx::Null< int >  size,hx::Null< int >  justify,hx::Null< bool >  wrap,hx::Null< bool >  rightToLeft,::org::gameplay3d::Rectangle clip);
		Dynamic drawText_Str_Rct_V4_IntX2_BoolX2_Rct_dyn();

		virtual Void drawText_Str_IntX2_V4_Int_Bool( ::String text,int x,int y,::org::gameplay3d::immutable::IVector4 color,hx::Null< int >  size,hx::Null< bool >  rightToLeft);
		Dynamic drawText_Str_IntX2_V4_Int_Bool_dyn();

		virtual Void drawText_Str_IntX2_FltX4_Int_Bool( ::String text,int x,int y,Float red,Float green,Float blue,Float alpha,hx::Null< int >  size,hx::Null< bool >  rightToLeft);
		Dynamic drawText_Str_IntX2_FltX4_Int_Bool_dyn();

		virtual Void finish( );
		Dynamic finish_dyn();

		virtual int getIndexAtLocation( ::String text,::org::gameplay3d::immutable::IRectangle clip,int size,::org::gameplay3d::immutable::IVector2 inLocation,::org::gameplay3d::Vector2 outLocation,hx::Null< int >  justify,hx::Null< bool >  wrap,hx::Null< bool >  rightToLeft);
		Dynamic getIndexAtLocation_dyn();

		virtual Void getLocationAtIndex( ::String text,::org::gameplay3d::immutable::IRectangle clip,int size,::org::gameplay3d::Vector2 outLocation,int destIndex,hx::Null< int >  justify,hx::Null< bool >  wrap,hx::Null< bool >  rightToLeft);
		Dynamic getLocationAtIndex_dyn();

		virtual int getSize( );
		Dynamic getSize_dyn();

		virtual ::org::gameplay3d::SpriteBatch getSpriteBatch( );
		Dynamic getSpriteBatch_dyn();

		virtual Void measureText_Str_Rct_Int_Rct_Int_BoolX2( ::String text,::org::gameplay3d::immutable::IRectangle clip,int size,::org::gameplay3d::Rectangle out,hx::Null< int >  justify,hx::Null< bool >  wrap,hx::Null< bool >  ignoreClip);
		Dynamic measureText_Str_Rct_Int_Rct_Int_BoolX2_dyn();

		virtual Void measureText_Str_Int_OutIntX2( ::String text,int size,Dynamic widthOut,Dynamic heightOut);
		Dynamic measureText_Str_Int_OutIntX2_dyn();

		virtual Void start( );
		Dynamic start_dyn();

		static ::org::gameplay3d::Font create( ::String path,::String id);
		static Dynamic create_dyn();

		static int getJustify( ::String justify);
		static Dynamic getJustify_dyn();

		static Dynamic hx_Font_static_create;
		static Dynamic &hx_Font_static_create_dyn() { return hx_Font_static_create;}
		static Dynamic hx_Font_createText;
		static Dynamic &hx_Font_createText_dyn() { return hx_Font_createText;}
		static Dynamic hx_Font_drawText_Txt;
		static Dynamic &hx_Font_drawText_Txt_dyn() { return hx_Font_drawText_Txt;}
		static Dynamic hx_Font_drawText_Str_Rct_V4_IntX2_BoolX2_Rct;
		static Dynamic &hx_Font_drawText_Str_Rct_V4_IntX2_BoolX2_Rct_dyn() { return hx_Font_drawText_Str_Rct_V4_IntX2_BoolX2_Rct;}
		static Dynamic hx_Font_drawText_Str_IntX2_V4_Int_Bool;
		static Dynamic &hx_Font_drawText_Str_IntX2_V4_Int_Bool_dyn() { return hx_Font_drawText_Str_IntX2_V4_Int_Bool;}
		static Dynamic hx_Font_drawText_Str_IntX2_FltX4_Int_Bool;
		static Dynamic &hx_Font_drawText_Str_IntX2_FltX4_Int_Bool_dyn() { return hx_Font_drawText_Str_IntX2_FltX4_Int_Bool;}
		static Dynamic hx_Font_finish;
		static Dynamic &hx_Font_finish_dyn() { return hx_Font_finish;}
		static Dynamic hx_Font_getIndexAtLocation;
		static Dynamic &hx_Font_getIndexAtLocation_dyn() { return hx_Font_getIndexAtLocation;}
		static Dynamic hx_Font_static_getJustify;
		static Dynamic &hx_Font_static_getJustify_dyn() { return hx_Font_static_getJustify;}
		static Dynamic hx_Font_getLocationAtIndex;
		static Dynamic &hx_Font_getLocationAtIndex_dyn() { return hx_Font_getLocationAtIndex;}
		static Dynamic hx_Font_getSize;
		static Dynamic &hx_Font_getSize_dyn() { return hx_Font_getSize;}
		static Dynamic hx_Font_getSpriteBatch;
		static Dynamic &hx_Font_getSpriteBatch_dyn() { return hx_Font_getSpriteBatch;}
		static Dynamic hx_Font_measureText_Str_Rct_Int_Rct_Int_BoolX2;
		static Dynamic &hx_Font_measureText_Str_Rct_Int_Rct_Int_BoolX2_dyn() { return hx_Font_measureText_Str_Rct_Int_Rct_Int_BoolX2;}
		static Dynamic hx_Font_measureText_Str_Int_OutIntX2;
		static Dynamic &hx_Font_measureText_Str_Int_OutIntX2_dyn() { return hx_Font_measureText_Str_Int_OutIntX2;}
		static Dynamic hx_Font_start;
		static Dynamic &hx_Font_start_dyn() { return hx_Font_start;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_Font */ 
