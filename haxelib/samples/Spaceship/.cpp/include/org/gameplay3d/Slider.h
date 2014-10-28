#ifndef INCLUDED_org_gameplay3d_Slider
#define INCLUDED_org_gameplay3d_Slider

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
HX_DECLARE_CLASS2(org,gameplay3d,Slider)
HX_DECLARE_CLASS2(org,gameplay3d,Theme_Style)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,ListenerWrapper)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,AnimationTarget_ScriptTarget)
HX_DECLARE_CLASS3(org,gameplay3d,wrapper,Control_ListenerWrapper)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  Slider_obj : public ::org::gameplay3d::Label_obj{
	public:
		typedef ::org::gameplay3d::Label_obj super;
		typedef Slider_obj OBJ_;
		Slider_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Slider_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Slider_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Slider"); }

		virtual Void addListener( ::org::gameplay3d::wrapper::Control_ListenerWrapper listener,int eventFlags);

		virtual Float getMax( );
		Dynamic getMax_dyn();

		virtual Float getMin( );
		Dynamic getMin_dyn();

		virtual Float getStep( );
		Dynamic getStep_dyn();

		virtual ::String getType( );

		virtual Float getValue( );
		Dynamic getValue_dyn();

		virtual int getValueTextAlignment( );
		Dynamic getValueTextAlignment_dyn();

		virtual int getValueTextPrecision( );
		Dynamic getValueTextPrecision_dyn();

		virtual bool isValueTextVisible( );
		Dynamic isValueTextVisible_dyn();

		virtual Void setMax( Float max);
		Dynamic setMax_dyn();

		virtual Void setMin( Float min);
		Dynamic setMin_dyn();

		virtual Void setStep( Float step);
		Dynamic setStep_dyn();

		virtual Void setValue( Float value);
		Dynamic setValue_dyn();

		virtual Void setValueTextAlignment( int alignment);
		Dynamic setValueTextAlignment_dyn();

		virtual Void setValueTextPrecision( int precision);
		Dynamic setValueTextPrecision_dyn();

		virtual Void setValueTextVisible( bool visible);
		Dynamic setValueTextVisible_dyn();

		static ::org::gameplay3d::Slider create( ::String id,::org::gameplay3d::Theme_Style style);
		static Dynamic create_dyn();

		static Dynamic hx_Slider_addListener;
		static Dynamic &hx_Slider_addListener_dyn() { return hx_Slider_addListener;}
		static Dynamic hx_Slider_static_create;
		static Dynamic &hx_Slider_static_create_dyn() { return hx_Slider_static_create;}
		static Dynamic hx_Slider_getMax;
		static Dynamic &hx_Slider_getMax_dyn() { return hx_Slider_getMax;}
		static Dynamic hx_Slider_getMin;
		static Dynamic &hx_Slider_getMin_dyn() { return hx_Slider_getMin;}
		static Dynamic hx_Slider_getStep;
		static Dynamic &hx_Slider_getStep_dyn() { return hx_Slider_getStep;}
		static Dynamic hx_Slider_getType;
		static Dynamic &hx_Slider_getType_dyn() { return hx_Slider_getType;}
		static Dynamic hx_Slider_getValue;
		static Dynamic &hx_Slider_getValue_dyn() { return hx_Slider_getValue;}
		static Dynamic hx_Slider_getValueTextAlignment;
		static Dynamic &hx_Slider_getValueTextAlignment_dyn() { return hx_Slider_getValueTextAlignment;}
		static Dynamic hx_Slider_getValueTextPrecision;
		static Dynamic &hx_Slider_getValueTextPrecision_dyn() { return hx_Slider_getValueTextPrecision;}
		static Dynamic hx_Slider_isValueTextVisible;
		static Dynamic &hx_Slider_isValueTextVisible_dyn() { return hx_Slider_isValueTextVisible;}
		static Dynamic hx_Slider_setMax;
		static Dynamic &hx_Slider_setMax_dyn() { return hx_Slider_setMax;}
		static Dynamic hx_Slider_setMin;
		static Dynamic &hx_Slider_setMin_dyn() { return hx_Slider_setMin;}
		static Dynamic hx_Slider_setStep;
		static Dynamic &hx_Slider_setStep_dyn() { return hx_Slider_setStep;}
		static Dynamic hx_Slider_setValue;
		static Dynamic &hx_Slider_setValue_dyn() { return hx_Slider_setValue;}
		static Dynamic hx_Slider_setValueTextAlignment;
		static Dynamic &hx_Slider_setValueTextAlignment_dyn() { return hx_Slider_setValueTextAlignment;}
		static Dynamic hx_Slider_setValueTextPrecision;
		static Dynamic &hx_Slider_setValueTextPrecision_dyn() { return hx_Slider_setValueTextPrecision;}
		static Dynamic hx_Slider_setValueTextVisible;
		static Dynamic &hx_Slider_setValueTextVisible_dyn() { return hx_Slider_setValueTextVisible;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_Slider */ 
