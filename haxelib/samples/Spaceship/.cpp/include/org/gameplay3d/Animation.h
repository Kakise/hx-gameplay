#ifndef INCLUDED_org_gameplay3d_Animation
#define INCLUDED_org_gameplay3d_Animation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
#include <org/gameplay3d/Ref.h>
HX_DECLARE_CLASS2(org,gameplay3d,Animation)
HX_DECLARE_CLASS2(org,gameplay3d,AnimationClip)
HX_DECLARE_CLASS2(org,gameplay3d,AnimationTarget)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  Animation_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef Animation_obj OBJ_;
		Animation_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Animation_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Animation_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		inline operator ::org::gameplay3d::intern::INativeBinding_obj *()
			{ return new ::org::gameplay3d::intern::INativeBinding_delegate_< Animation_obj >(this); }
		inline operator ::org::gameplay3d::Ref_obj *()
			{ return new ::org::gameplay3d::Ref_delegate_< Animation_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("Animation"); }

		virtual ::org::gameplay3d::AnimationClip createClip( ::String id,int start,int end);
		Dynamic createClip_dyn();

		virtual Void createClips( ::String url);
		Dynamic createClips_dyn();

		virtual ::org::gameplay3d::AnimationClip getClip_Str( ::String clipId);
		Dynamic getClip_Str_dyn();

		virtual ::org::gameplay3d::AnimationClip getClip_Int( int index);
		Dynamic getClip_Int_dyn();

		virtual int getClipCount( );
		Dynamic getClipCount_dyn();

		virtual int getDuration( );
		Dynamic getDuration_dyn();

		virtual ::String getId( );
		Dynamic getId_dyn();

		virtual Void pause( ::String clipId);
		Dynamic pause_dyn();

		virtual Void play( ::String clipId);
		Dynamic play_dyn();

		virtual Void stop( ::String clipId);
		Dynamic stop_dyn();

		virtual bool targets( ::org::gameplay3d::AnimationTarget target);
		Dynamic targets_dyn();

		static Dynamic hx_Animation_createClip;
		static Dynamic &hx_Animation_createClip_dyn() { return hx_Animation_createClip;}
		static Dynamic hx_Animation_createClips;
		static Dynamic &hx_Animation_createClips_dyn() { return hx_Animation_createClips;}
		static Dynamic hx_Animation_getClip_Str;
		static Dynamic &hx_Animation_getClip_Str_dyn() { return hx_Animation_getClip_Str;}
		static Dynamic hx_Animation_getClip_Int;
		static Dynamic &hx_Animation_getClip_Int_dyn() { return hx_Animation_getClip_Int;}
		static Dynamic hx_Animation_getClipCount;
		static Dynamic &hx_Animation_getClipCount_dyn() { return hx_Animation_getClipCount;}
		static Dynamic hx_Animation_getDuration;
		static Dynamic &hx_Animation_getDuration_dyn() { return hx_Animation_getDuration;}
		static Dynamic hx_Animation_getId;
		static Dynamic &hx_Animation_getId_dyn() { return hx_Animation_getId;}
		static Dynamic hx_Animation_pause;
		static Dynamic &hx_Animation_pause_dyn() { return hx_Animation_pause;}
		static Dynamic hx_Animation_play;
		static Dynamic &hx_Animation_play_dyn() { return hx_Animation_play;}
		static Dynamic hx_Animation_stop;
		static Dynamic &hx_Animation_stop_dyn() { return hx_Animation_stop;}
		static Dynamic hx_Animation_targets;
		static Dynamic &hx_Animation_targets_dyn() { return hx_Animation_targets;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_Animation */ 
