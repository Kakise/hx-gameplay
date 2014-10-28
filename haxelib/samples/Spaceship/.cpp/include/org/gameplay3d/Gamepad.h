#ifndef INCLUDED_org_gameplay3d_Gamepad
#define INCLUDED_org_gameplay3d_Gamepad

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
HX_DECLARE_CLASS2(org,gameplay3d,AnimationTarget)
HX_DECLARE_CLASS2(org,gameplay3d,Container)
HX_DECLARE_CLASS2(org,gameplay3d,Control)
HX_DECLARE_CLASS2(org,gameplay3d,Form)
HX_DECLARE_CLASS2(org,gameplay3d,Gamepad)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS2(org,gameplay3d,ScriptTarget)
HX_DECLARE_CLASS2(org,gameplay3d,Vector2)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector2)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,AnimationTarget_ScriptTarget)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  Gamepad_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef Gamepad_obj OBJ_;
		Gamepad_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Gamepad_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Gamepad_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Gamepad"); }

		virtual Void draw( );
		Dynamic draw_dyn();

		virtual int getButtonCount( );
		Dynamic getButtonCount_dyn();

		virtual ::org::gameplay3d::Form getForm( );
		Dynamic getForm_dyn();

		virtual int getJoystickCount( );
		Dynamic getJoystickCount_dyn();

		virtual Void getJoystickValues( int joystickId,::org::gameplay3d::Vector2 outValues);
		Dynamic getJoystickValues_dyn();

		virtual int getProductId( );
		Dynamic getProductId_dyn();

		virtual ::String getProductString( );
		Dynamic getProductString_dyn();

		virtual int getTriggerCount( );
		Dynamic getTriggerCount_dyn();

		virtual Float getTriggerValue( int triggerId);
		Dynamic getTriggerValue_dyn();

		virtual int getVendorId( );
		Dynamic getVendorId_dyn();

		virtual ::String getVendorString( );
		Dynamic getVendorString_dyn();

		virtual bool isButtonDown( int button);
		Dynamic isButtonDown_dyn();

		virtual bool isVirtual( );
		Dynamic isVirtual_dyn();

		virtual Void update( Float elapsedTime);
		Dynamic update_dyn();

		static Dynamic hx_Gamepad_draw;
		static Dynamic &hx_Gamepad_draw_dyn() { return hx_Gamepad_draw;}
		static Dynamic hx_Gamepad_getButtonCount;
		static Dynamic &hx_Gamepad_getButtonCount_dyn() { return hx_Gamepad_getButtonCount;}
		static Dynamic hx_Gamepad_getForm;
		static Dynamic &hx_Gamepad_getForm_dyn() { return hx_Gamepad_getForm;}
		static Dynamic hx_Gamepad_getJoystickCount;
		static Dynamic &hx_Gamepad_getJoystickCount_dyn() { return hx_Gamepad_getJoystickCount;}
		static Dynamic hx_Gamepad_getJoystickValues;
		static Dynamic &hx_Gamepad_getJoystickValues_dyn() { return hx_Gamepad_getJoystickValues;}
		static Dynamic hx_Gamepad_getProductId;
		static Dynamic &hx_Gamepad_getProductId_dyn() { return hx_Gamepad_getProductId;}
		static Dynamic hx_Gamepad_getProductString;
		static Dynamic &hx_Gamepad_getProductString_dyn() { return hx_Gamepad_getProductString;}
		static Dynamic hx_Gamepad_getTriggerCount;
		static Dynamic &hx_Gamepad_getTriggerCount_dyn() { return hx_Gamepad_getTriggerCount;}
		static Dynamic hx_Gamepad_getTriggerValue;
		static Dynamic &hx_Gamepad_getTriggerValue_dyn() { return hx_Gamepad_getTriggerValue;}
		static Dynamic hx_Gamepad_getVendorId;
		static Dynamic &hx_Gamepad_getVendorId_dyn() { return hx_Gamepad_getVendorId;}
		static Dynamic hx_Gamepad_getVendorString;
		static Dynamic &hx_Gamepad_getVendorString_dyn() { return hx_Gamepad_getVendorString;}
		static Dynamic hx_Gamepad_isButtonDown;
		static Dynamic &hx_Gamepad_isButtonDown_dyn() { return hx_Gamepad_isButtonDown;}
		static Dynamic hx_Gamepad_isVirtual;
		static Dynamic &hx_Gamepad_isVirtual_dyn() { return hx_Gamepad_isVirtual;}
		static Dynamic hx_Gamepad_update;
		static Dynamic &hx_Gamepad_update_dyn() { return hx_Gamepad_update;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_Gamepad */ 
