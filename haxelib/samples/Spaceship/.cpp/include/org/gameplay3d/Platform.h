#ifndef INCLUDED_org_gameplay3d_Platform
#define INCLUDED_org_gameplay3d_Platform

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
HX_DECLARE_CLASS2(org,gameplay3d,Game)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Platform)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,util,Handle)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  Platform_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef Platform_obj OBJ_;
		Platform_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Platform_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Platform_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Platform"); }

		virtual int enterMessagePump( );
		Dynamic enterMessagePump_dyn();

		static ::org::gameplay3d::Platform create( ::org::gameplay3d::Game game,::org::gameplay3d::util::Handle attachToWindow);
		static Dynamic create_dyn();

		static Void gamepadEventConnectedInternal( ::org::gameplay3d::util::Handle handle,int buttonCount,int joystickCount,int triggerCount,int vendorId,int productId,::String vendorString,::String productString);
		static Dynamic gamepadEventConnectedInternal_dyn();

		static Void gamepadEventDisconnectedInternal( ::org::gameplay3d::util::Handle handle);
		static Dynamic gamepadEventDisconnectedInternal_dyn();

		static Void keyEventInternal( int evt,int key);
		static Dynamic keyEventInternal_dyn();

		static bool mouseEventInternal( int evt,int x,int y,int wheelDelta);
		static Dynamic mouseEventInternal_dyn();

		static Void touchEventInternal( int evt,int x,int y,int contactIndex);
		static Dynamic touchEventInternal_dyn();

		static Dynamic hx_Platform_static_create;
		static Dynamic &hx_Platform_static_create_dyn() { return hx_Platform_static_create;}
		static Dynamic hx_Platform_enterMessagePump;
		static Dynamic &hx_Platform_enterMessagePump_dyn() { return hx_Platform_enterMessagePump;}
		static Dynamic hx_Platform_static_gamepadEventConnectedInternal;
		static Dynamic &hx_Platform_static_gamepadEventConnectedInternal_dyn() { return hx_Platform_static_gamepadEventConnectedInternal;}
		static Dynamic hx_Platform_static_gamepadEventDisconnectedInternal;
		static Dynamic &hx_Platform_static_gamepadEventDisconnectedInternal_dyn() { return hx_Platform_static_gamepadEventDisconnectedInternal;}
		static Dynamic hx_Platform_static_keyEventInternal;
		static Dynamic &hx_Platform_static_keyEventInternal_dyn() { return hx_Platform_static_keyEventInternal;}
		static Dynamic hx_Platform_static_mouseEventInternal;
		static Dynamic &hx_Platform_static_mouseEventInternal_dyn() { return hx_Platform_static_mouseEventInternal;}
		static Dynamic hx_Platform_static_touchEventInternal;
		static Dynamic &hx_Platform_static_touchEventInternal_dyn() { return hx_Platform_static_touchEventInternal;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_Platform */ 
