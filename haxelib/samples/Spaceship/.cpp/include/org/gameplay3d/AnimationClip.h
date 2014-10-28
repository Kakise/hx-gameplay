#ifndef INCLUDED_org_gameplay3d_AnimationClip
#define INCLUDED_org_gameplay3d_AnimationClip

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
#include <org/gameplay3d/Ref.h>
HX_DECLARE_CLASS2(org,gameplay3d,Animation)
HX_DECLARE_CLASS2(org,gameplay3d,AnimationClip)
HX_DECLARE_CLASS2(org,gameplay3d,AnimationClip_Listener)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,ListenerWrapper)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,wrapper,AnimationClip_ListenerWrapper)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  AnimationClip_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef AnimationClip_obj OBJ_;
		AnimationClip_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AnimationClip_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AnimationClip_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		inline operator ::org::gameplay3d::intern::INativeBinding_obj *()
			{ return new ::org::gameplay3d::intern::INativeBinding_delegate_< AnimationClip_obj >(this); }
		inline operator ::org::gameplay3d::Ref_obj *()
			{ return new ::org::gameplay3d::Ref_delegate_< AnimationClip_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("AnimationClip"); }

		virtual Void addBeginListener( ::org::gameplay3d::wrapper::AnimationClip_ListenerWrapper listener);
		Dynamic addBeginListener_dyn();

		virtual Void addBeginListener_Str( ::String func);
		Dynamic addBeginListener_Str_dyn();

		virtual Void addEndListener_Lsnr( ::org::gameplay3d::wrapper::AnimationClip_ListenerWrapper listener);
		Dynamic addEndListener_Lsnr_dyn();

		virtual Void addEndListener_Str( ::String func);
		Dynamic addEndListener_Str_dyn();

		virtual Void addListener_Lsnr_Int( ::org::gameplay3d::wrapper::AnimationClip_ListenerWrapper listener,int eventTime);
		Dynamic addListener_Lsnr_Int_dyn();

		virtual Void addListener_Str_Int( ::String func,int eventTime);
		Dynamic addListener_Str_Int_dyn();

		virtual Void crossFade( ::org::gameplay3d::AnimationClip clip,int duration);
		Dynamic crossFade_dyn();

		virtual int getActiveDuration( );
		Dynamic getActiveDuration_dyn();

		virtual ::org::gameplay3d::Animation getAnimation( );
		Dynamic getAnimation_dyn();

		virtual Float getBlendWeight( );
		Dynamic getBlendWeight_dyn();

		virtual int getDuration( );
		Dynamic getDuration_dyn();

		virtual Float getElaspedTime( );
		Dynamic getElaspedTime_dyn();

		virtual int getEndTime( );
		Dynamic getEndTime_dyn();

		virtual ::String getId( );
		Dynamic getId_dyn();

		virtual Float getRepeatCount( );
		Dynamic getRepeatCount_dyn();

		virtual Float getSpeed( );
		Dynamic getSpeed_dyn();

		virtual int getStartTime( );
		Dynamic getStartTime_dyn();

		virtual bool isPlaying( );
		Dynamic isPlaying_dyn();

		virtual Void pause( );
		Dynamic pause_dyn();

		virtual Void play( );
		Dynamic play_dyn();

		virtual Void setActiveDuration( int duration);
		Dynamic setActiveDuration_dyn();

		virtual Void setBlendWeight( Float blendWeight);
		Dynamic setBlendWeight_dyn();

		virtual Void setRepeatCount( Float repeatCount);
		Dynamic setRepeatCount_dyn();

		virtual Void setSpeed( Float speed);
		Dynamic setSpeed_dyn();

		virtual Void stop( );
		Dynamic stop_dyn();

		static int REPEAT_INDEFINITE;
		static Dynamic hx_AnimationClip_addBeginListener_Lsnr;
		static Dynamic &hx_AnimationClip_addBeginListener_Lsnr_dyn() { return hx_AnimationClip_addBeginListener_Lsnr;}
		static Dynamic hx_AnimationClip_addBeginListener_Str;
		static Dynamic &hx_AnimationClip_addBeginListener_Str_dyn() { return hx_AnimationClip_addBeginListener_Str;}
		static Dynamic hx_AnimationClip_addEndListener_Lsnr;
		static Dynamic &hx_AnimationClip_addEndListener_Lsnr_dyn() { return hx_AnimationClip_addEndListener_Lsnr;}
		static Dynamic hx_AnimationClip_addEndListener_Str;
		static Dynamic &hx_AnimationClip_addEndListener_Str_dyn() { return hx_AnimationClip_addEndListener_Str;}
		static Dynamic hx_AnimationClip_addListener_Lsnr_Int;
		static Dynamic &hx_AnimationClip_addListener_Lsnr_Int_dyn() { return hx_AnimationClip_addListener_Lsnr_Int;}
		static Dynamic hx_AnimationClip_addListener_Str_Int;
		static Dynamic &hx_AnimationClip_addListener_Str_Int_dyn() { return hx_AnimationClip_addListener_Str_Int;}
		static Dynamic hx_AnimationClip_crossFade;
		static Dynamic &hx_AnimationClip_crossFade_dyn() { return hx_AnimationClip_crossFade;}
		static Dynamic hx_AnimationClip_getActiveDuration;
		static Dynamic &hx_AnimationClip_getActiveDuration_dyn() { return hx_AnimationClip_getActiveDuration;}
		static Dynamic hx_AnimationClip_getAnimation;
		static Dynamic &hx_AnimationClip_getAnimation_dyn() { return hx_AnimationClip_getAnimation;}
		static Dynamic hx_AnimationClip_getBlendWeight;
		static Dynamic &hx_AnimationClip_getBlendWeight_dyn() { return hx_AnimationClip_getBlendWeight;}
		static Dynamic hx_AnimationClip_getDuration;
		static Dynamic &hx_AnimationClip_getDuration_dyn() { return hx_AnimationClip_getDuration;}
		static Dynamic hx_AnimationClip_getElaspedTime;
		static Dynamic &hx_AnimationClip_getElaspedTime_dyn() { return hx_AnimationClip_getElaspedTime;}
		static Dynamic hx_AnimationClip_getEndTime;
		static Dynamic &hx_AnimationClip_getEndTime_dyn() { return hx_AnimationClip_getEndTime;}
		static Dynamic hx_AnimationClip_getId;
		static Dynamic &hx_AnimationClip_getId_dyn() { return hx_AnimationClip_getId;}
		static Dynamic hx_AnimationClip_getRepeatCount;
		static Dynamic &hx_AnimationClip_getRepeatCount_dyn() { return hx_AnimationClip_getRepeatCount;}
		static Dynamic hx_AnimationClip_getSpeed;
		static Dynamic &hx_AnimationClip_getSpeed_dyn() { return hx_AnimationClip_getSpeed;}
		static Dynamic hx_AnimationClip_getStartTime;
		static Dynamic &hx_AnimationClip_getStartTime_dyn() { return hx_AnimationClip_getStartTime;}
		static Dynamic hx_AnimationClip_isPlaying;
		static Dynamic &hx_AnimationClip_isPlaying_dyn() { return hx_AnimationClip_isPlaying;}
		static Dynamic hx_AnimationClip_pause;
		static Dynamic &hx_AnimationClip_pause_dyn() { return hx_AnimationClip_pause;}
		static Dynamic hx_AnimationClip_play;
		static Dynamic &hx_AnimationClip_play_dyn() { return hx_AnimationClip_play;}
		static Dynamic hx_AnimationClip_setActiveDuration;
		static Dynamic &hx_AnimationClip_setActiveDuration_dyn() { return hx_AnimationClip_setActiveDuration;}
		static Dynamic hx_AnimationClip_setBlendWeight;
		static Dynamic &hx_AnimationClip_setBlendWeight_dyn() { return hx_AnimationClip_setBlendWeight;}
		static Dynamic hx_AnimationClip_setRepeatCount;
		static Dynamic &hx_AnimationClip_setRepeatCount_dyn() { return hx_AnimationClip_setRepeatCount;}
		static Dynamic hx_AnimationClip_setSpeed;
		static Dynamic &hx_AnimationClip_setSpeed_dyn() { return hx_AnimationClip_setSpeed;}
		static Dynamic hx_AnimationClip_stop;
		static Dynamic &hx_AnimationClip_stop_dyn() { return hx_AnimationClip_stop;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_AnimationClip */ 
