#ifndef INCLUDED_org_gameplay3d_Joystick
#define INCLUDED_org_gameplay3d_Joystick

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/Control.h>
HX_DECLARE_CLASS2(org,gameplay3d,AnimationTarget)
HX_DECLARE_CLASS2(org,gameplay3d,Control)
HX_DECLARE_CLASS2(org,gameplay3d,Control_Listener)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Joystick)
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


class HXCPP_CLASS_ATTRIBUTES  Joystick_obj : public ::org::gameplay3d::Control_obj{
	public:
		typedef ::org::gameplay3d::Control_obj super;
		typedef Joystick_obj OBJ_;
		Joystick_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Joystick_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Joystick_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Joystick"); }

		virtual Void addListener( ::org::gameplay3d::wrapper::Control_ListenerWrapper listener,int eventFlags);

		virtual int getIndex( );
		Dynamic getIndex_dyn();

		virtual ::org::gameplay3d::immutable::IVector2 getInnerRegionSize( );
		Dynamic getInnerRegionSize_dyn();

		virtual ::org::gameplay3d::immutable::IVector2 getOuterRegionSize( );
		Dynamic getOuterRegionSize_dyn();

		virtual ::String getType( );

		virtual ::org::gameplay3d::immutable::IVector2 getValue( );
		Dynamic getValue_dyn();

		virtual bool isRelative( );
		Dynamic isRelative_dyn();

		virtual Void setInnerRegionSize( ::org::gameplay3d::immutable::IVector2 size);
		Dynamic setInnerRegionSize_dyn();

		virtual Void setOuterRegionSize( ::org::gameplay3d::immutable::IVector2 size);
		Dynamic setOuterRegionSize_dyn();

		virtual Void setRelative( bool relative);
		Dynamic setRelative_dyn();

		static ::org::gameplay3d::Joystick create( ::String id,::org::gameplay3d::Theme_Style style);
		static Dynamic create_dyn();

		static Dynamic hx_Joystick_addListener;
		static Dynamic &hx_Joystick_addListener_dyn() { return hx_Joystick_addListener;}
		static Dynamic hx_Joystick_static_create;
		static Dynamic &hx_Joystick_static_create_dyn() { return hx_Joystick_static_create;}
		static Dynamic hx_Joystick_getIndex;
		static Dynamic &hx_Joystick_getIndex_dyn() { return hx_Joystick_getIndex;}
		static Dynamic hx_Joystick_getInnerRegionSize;
		static Dynamic &hx_Joystick_getInnerRegionSize_dyn() { return hx_Joystick_getInnerRegionSize;}
		static Dynamic hx_Joystick_getOuterRegionSize;
		static Dynamic &hx_Joystick_getOuterRegionSize_dyn() { return hx_Joystick_getOuterRegionSize;}
		static Dynamic hx_Joystick_getType;
		static Dynamic &hx_Joystick_getType_dyn() { return hx_Joystick_getType;}
		static Dynamic hx_Joystick_getValue;
		static Dynamic &hx_Joystick_getValue_dyn() { return hx_Joystick_getValue;}
		static Dynamic hx_Joystick_isRelative;
		static Dynamic &hx_Joystick_isRelative_dyn() { return hx_Joystick_isRelative;}
		static Dynamic hx_Joystick_setInnerRegionSize;
		static Dynamic &hx_Joystick_setInnerRegionSize_dyn() { return hx_Joystick_setInnerRegionSize;}
		static Dynamic hx_Joystick_setOuterRegionSize;
		static Dynamic &hx_Joystick_setOuterRegionSize_dyn() { return hx_Joystick_setOuterRegionSize;}
		static Dynamic hx_Joystick_setRelative;
		static Dynamic &hx_Joystick_setRelative_dyn() { return hx_Joystick_setRelative;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_Joystick */ 
