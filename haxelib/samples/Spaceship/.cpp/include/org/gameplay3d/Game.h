#ifndef INCLUDED_org_gameplay3d_Game
#define INCLUDED_org_gameplay3d_Game

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
HX_DECLARE_CLASS2(org,gameplay3d,AIController)
HX_DECLARE_CLASS2(org,gameplay3d,AnimationController)
HX_DECLARE_CLASS2(org,gameplay3d,AudioController)
HX_DECLARE_CLASS2(org,gameplay3d,AudioListener)
HX_DECLARE_CLASS2(org,gameplay3d,Game)
HX_DECLARE_CLASS2(org,gameplay3d,Gamepad)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsController)
HX_DECLARE_CLASS2(org,gameplay3d,Properties)
HX_DECLARE_CLASS2(org,gameplay3d,Rectangle)
HX_DECLARE_CLASS2(org,gameplay3d,ScriptTarget)
HX_DECLARE_CLASS2(org,gameplay3d,TimeListener)
HX_DECLARE_CLASS2(org,gameplay3d,Transform_Listener)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IRectangle)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector4)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,ListenerWrapper)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,ScriptTargetImpl)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,Transform_ListenerImpl)
HX_DECLARE_CLASS3(org,gameplay3d,util,Handle)
HX_DECLARE_CLASS3(org,gameplay3d,wrapper,TimeListenerWrapper)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  Game_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef Game_obj OBJ_;
		Game_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Game_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Game_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Game"); }

		::org::gameplay3d::Rectangle _viewport;
		virtual Void initialize( );
		Dynamic initialize_dyn();

		virtual Void finalize( );
		Dynamic finalize_dyn();

		virtual Void update( Float elapsedTime);
		Dynamic update_dyn();

		virtual Void render( Float elapsedTime);
		Dynamic render_dyn();

		virtual bool canExit( );
		Dynamic canExit_dyn();

		virtual Void clear_Int_V4_Flt_Int( int flags,::org::gameplay3d::immutable::IVector4 clearColor,Float clearDepth,int clearStencil);
		Dynamic clear_Int_V4_Flt_Int_dyn();

		virtual Void clear_Int_FltX5_Int( int flags,Float red,Float green,Float blue,Float alpha,Float clearDepth,int clearStencil);
		Dynamic clear_Int_FltX5_Int_dyn();

		virtual Void displayKeyboard( bool display);
		Dynamic displayKeyboard_dyn();

		virtual Void exit( );
		Dynamic exit_dyn();

		virtual Void frame( );
		Dynamic frame_dyn();

		virtual Void gamepadEvent( int evt,::org::gameplay3d::Gamepad gamepad);
		Dynamic gamepadEvent_dyn();

		virtual Void gesturePinchEvent( int x,int y,Float scale);
		Dynamic gesturePinchEvent_dyn();

		virtual Void gestureSwipeEvent( int x,int y,int direction);
		Dynamic gestureSwipeEvent_dyn();

		virtual Void gestureTapEvent( int x,int y);
		Dynamic gestureTapEvent_dyn();

		virtual ::org::gameplay3d::AIController getAIController( );
		Dynamic getAIController_dyn();

		virtual Void getAccelerometerValues( Dynamic pitch,Dynamic roll);
		Dynamic getAccelerometerValues_dyn();

		virtual ::org::gameplay3d::AnimationController getAnimationController( );
		Dynamic getAnimationController_dyn();

		virtual Float getAspectRatio( );
		Dynamic getAspectRatio_dyn();

		virtual ::org::gameplay3d::AudioController getAudioController( );
		Dynamic getAudioController_dyn();

		virtual ::org::gameplay3d::AudioListener getAudioListener( );
		Dynamic getAudioListener_dyn();

		virtual ::org::gameplay3d::Properties getConfig( );
		Dynamic getConfig_dyn();

		virtual int getFrameRate( );
		Dynamic getFrameRate_dyn();

		virtual ::org::gameplay3d::Gamepad getGamepad( int index);
		Dynamic getGamepad_dyn();

		virtual int getGamepadCount( );
		Dynamic getGamepadCount_dyn();

		virtual int getHeight( );
		Dynamic getHeight_dyn();

		virtual ::org::gameplay3d::PhysicsController getPhysicsController( );
		Dynamic getPhysicsController_dyn();

		virtual int getState( );
		Dynamic getState_dyn();

		virtual ::org::gameplay3d::immutable::IRectangle getViewport( );
		Dynamic getViewport_dyn();

		virtual int getWidth( );
		Dynamic getWidth_dyn();

		virtual bool hasMouse( );
		Dynamic hasMouse_dyn();

		virtual bool isCursorVisible( );
		Dynamic isCursorVisible_dyn();

		virtual bool isGestureRegistered( int evt);
		Dynamic isGestureRegistered_dyn();

		virtual bool isGestureSupported( int evt);
		Dynamic isGestureSupported_dyn();

		virtual bool isInitialized( );
		Dynamic isInitialized_dyn();

		virtual bool isMouseCaptured( );
		Dynamic isMouseCaptured_dyn();

		virtual bool isMultiTouch( );
		Dynamic isMultiTouch_dyn();

		virtual Void keyEvent( int evt,int key);
		Dynamic keyEvent_dyn();

		virtual bool launchURL( ::String url);
		Dynamic launchURL_dyn();

		virtual Void menuEvent( );
		Dynamic menuEvent_dyn();

		virtual bool mouseEvent( int evt,int x,int y,int wheelDelta);
		Dynamic mouseEvent_dyn();

		virtual Void pause( );
		Dynamic pause_dyn();

		virtual Void registerGesture( int evt);
		Dynamic registerGesture_dyn();

		virtual Void resume( );
		Dynamic resume_dyn();

		virtual int run( );
		Dynamic run_dyn();

		virtual Void schedule_Flt_Lsnr_Hndl( Float timeOffset,::org::gameplay3d::wrapper::TimeListenerWrapper timeListener,::org::gameplay3d::util::Handle cookie);
		Dynamic schedule_Flt_Lsnr_Hndl_dyn();

		virtual Void schedule_Flt_Str( Float timeOffset,::String _function);
		Dynamic schedule_Flt_Str_dyn();

		virtual Void setCursorVisible( bool visible);
		Dynamic setCursorVisible_dyn();

		virtual Void setMouseCaptured( bool captured);
		Dynamic setMouseCaptured_dyn();

		virtual Void setMultiTouch( bool enabled);
		Dynamic setMultiTouch_dyn();

		virtual Void setViewport( ::org::gameplay3d::immutable::IRectangle viewport);
		Dynamic setViewport_dyn();

		virtual Void touchEvent( int evt,int x,int y,int contactIndex);
		Dynamic touchEvent_dyn();

		virtual Void unregisterGesture( int evt);
		Dynamic unregisterGesture_dyn();

		static Float getAbsoluteTime( );
		static Dynamic getAbsoluteTime_dyn();

		static Float getGameTime( );
		static Dynamic getGameTime_dyn();

		static ::org::gameplay3d::Game getInstance( );
		static Dynamic getInstance_dyn();

		static bool isVsync( );
		static Dynamic isVsync_dyn();

		static Void setVsync( bool enable);
		static Dynamic setVsync_dyn();

		static Dynamic constructNativeObject( ::org::gameplay3d::Game thisObj);
		static Dynamic constructNativeObject_dyn();

		static Dynamic hx_Game_Construct;
		static Dynamic &hx_Game_Construct_dyn() { return hx_Game_Construct;}
		static Dynamic hx_Game_canExit;
		static Dynamic &hx_Game_canExit_dyn() { return hx_Game_canExit;}
		static Dynamic hx_Game_clear_Int_V4_Flt_Int;
		static Dynamic &hx_Game_clear_Int_V4_Flt_Int_dyn() { return hx_Game_clear_Int_V4_Flt_Int;}
		static Dynamic hx_Game_clear_Int_FltX5_Int;
		static Dynamic &hx_Game_clear_Int_FltX5_Int_dyn() { return hx_Game_clear_Int_FltX5_Int;}
		static Dynamic hx_Game_displayKeyboard;
		static Dynamic &hx_Game_displayKeyboard_dyn() { return hx_Game_displayKeyboard;}
		static Dynamic hx_Game_exit;
		static Dynamic &hx_Game_exit_dyn() { return hx_Game_exit;}
		static Dynamic hx_Game_frame;
		static Dynamic &hx_Game_frame_dyn() { return hx_Game_frame;}
		static Dynamic hx_Game_getAIController;
		static Dynamic &hx_Game_getAIController_dyn() { return hx_Game_getAIController;}
		static Dynamic hx_Game_static_getAbsoluteTime;
		static Dynamic &hx_Game_static_getAbsoluteTime_dyn() { return hx_Game_static_getAbsoluteTime;}
		static Dynamic hx_Game_getAccelerometerValues;
		static Dynamic &hx_Game_getAccelerometerValues_dyn() { return hx_Game_getAccelerometerValues;}
		static Dynamic hx_Game_getAnimationController;
		static Dynamic &hx_Game_getAnimationController_dyn() { return hx_Game_getAnimationController;}
		static Dynamic hx_Game_getAspectRatio;
		static Dynamic &hx_Game_getAspectRatio_dyn() { return hx_Game_getAspectRatio;}
		static Dynamic hx_Game_getAudioController;
		static Dynamic &hx_Game_getAudioController_dyn() { return hx_Game_getAudioController;}
		static Dynamic hx_Game_getAudioListener;
		static Dynamic &hx_Game_getAudioListener_dyn() { return hx_Game_getAudioListener;}
		static Dynamic hx_Game_getConfig;
		static Dynamic &hx_Game_getConfig_dyn() { return hx_Game_getConfig;}
		static Dynamic hx_Game_getFrameRate;
		static Dynamic &hx_Game_getFrameRate_dyn() { return hx_Game_getFrameRate;}
		static Dynamic hx_Game_static_getGameTime;
		static Dynamic &hx_Game_static_getGameTime_dyn() { return hx_Game_static_getGameTime;}
		static Dynamic hx_Game_getGamepad;
		static Dynamic &hx_Game_getGamepad_dyn() { return hx_Game_getGamepad;}
		static Dynamic hx_Game_getGamepadCount;
		static Dynamic &hx_Game_getGamepadCount_dyn() { return hx_Game_getGamepadCount;}
		static Dynamic hx_Game_getHeight;
		static Dynamic &hx_Game_getHeight_dyn() { return hx_Game_getHeight;}
		static Dynamic hx_Game_static_getInstance;
		static Dynamic &hx_Game_static_getInstance_dyn() { return hx_Game_static_getInstance;}
		static Dynamic hx_Game_getPhysicsController;
		static Dynamic &hx_Game_getPhysicsController_dyn() { return hx_Game_getPhysicsController;}
		static Dynamic hx_Game_getScriptController;
		static Dynamic hx_Game_getState;
		static Dynamic &hx_Game_getState_dyn() { return hx_Game_getState;}
		static Dynamic hx_Game_getViewport;
		static Dynamic &hx_Game_getViewport_dyn() { return hx_Game_getViewport;}
		static Dynamic hx_Game_getWidth;
		static Dynamic &hx_Game_getWidth_dyn() { return hx_Game_getWidth;}
		static Dynamic hx_Game_hasMouse;
		static Dynamic &hx_Game_hasMouse_dyn() { return hx_Game_hasMouse;}
		static Dynamic hx_Game_isCursorVisible;
		static Dynamic &hx_Game_isCursorVisible_dyn() { return hx_Game_isCursorVisible;}
		static Dynamic hx_Game_isGestureRegistered;
		static Dynamic &hx_Game_isGestureRegistered_dyn() { return hx_Game_isGestureRegistered;}
		static Dynamic hx_Game_isGestureSupported;
		static Dynamic &hx_Game_isGestureSupported_dyn() { return hx_Game_isGestureSupported;}
		static Dynamic hx_Game_isInitialized;
		static Dynamic &hx_Game_isInitialized_dyn() { return hx_Game_isInitialized;}
		static Dynamic hx_Game_isMouseCaptured;
		static Dynamic &hx_Game_isMouseCaptured_dyn() { return hx_Game_isMouseCaptured;}
		static Dynamic hx_Game_isMultiTouch;
		static Dynamic &hx_Game_isMultiTouch_dyn() { return hx_Game_isMultiTouch;}
		static Dynamic hx_Game_launchURL;
		static Dynamic &hx_Game_launchURL_dyn() { return hx_Game_launchURL;}
		static Dynamic hx_Game_static_isVsync;
		static Dynamic &hx_Game_static_isVsync_dyn() { return hx_Game_static_isVsync;}
		static Dynamic hx_Game_pause;
		static Dynamic &hx_Game_pause_dyn() { return hx_Game_pause;}
		static Dynamic hx_Game_registerGesture;
		static Dynamic &hx_Game_registerGesture_dyn() { return hx_Game_registerGesture;}
		static Dynamic hx_Game_resume;
		static Dynamic &hx_Game_resume_dyn() { return hx_Game_resume;}
		static Dynamic hx_Game_run;
		static Dynamic &hx_Game_run_dyn() { return hx_Game_run;}
		static Dynamic hx_Game_schedule_Flt_Lsnr_Hndl;
		static Dynamic &hx_Game_schedule_Flt_Lsnr_Hndl_dyn() { return hx_Game_schedule_Flt_Lsnr_Hndl;}
		static Dynamic hx_Game_schedule_Flt_Str;
		static Dynamic &hx_Game_schedule_Flt_Str_dyn() { return hx_Game_schedule_Flt_Str;}
		static Dynamic hx_Game_setCursorVisible;
		static Dynamic &hx_Game_setCursorVisible_dyn() { return hx_Game_setCursorVisible;}
		static Dynamic hx_Game_setMouseCaptured;
		static Dynamic &hx_Game_setMouseCaptured_dyn() { return hx_Game_setMouseCaptured;}
		static Dynamic hx_Game_setMultiTouch;
		static Dynamic &hx_Game_setMultiTouch_dyn() { return hx_Game_setMultiTouch;}
		static Dynamic hx_Game_setViewport;
		static Dynamic &hx_Game_setViewport_dyn() { return hx_Game_setViewport;}
		static Dynamic hx_Game_static_setVsync;
		static Dynamic &hx_Game_static_setVsync_dyn() { return hx_Game_static_setVsync;}
		static Dynamic hx_Game_unregisterGesture;
		static Dynamic &hx_Game_unregisterGesture_dyn() { return hx_Game_unregisterGesture;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_Game */ 
