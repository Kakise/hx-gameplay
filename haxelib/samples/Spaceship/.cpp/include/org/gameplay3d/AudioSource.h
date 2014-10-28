#ifndef INCLUDED_org_gameplay3d_AudioSource
#define INCLUDED_org_gameplay3d_AudioSource

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/intern/impl/Transform_ListenerImpl.h>
#include <org/gameplay3d/Ref.h>
HX_DECLARE_CLASS2(org,gameplay3d,AnimationTarget)
HX_DECLARE_CLASS2(org,gameplay3d,AudioSource)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Node)
HX_DECLARE_CLASS2(org,gameplay3d,Properties)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS2(org,gameplay3d,ScriptTarget)
HX_DECLARE_CLASS2(org,gameplay3d,Transform)
HX_DECLARE_CLASS2(org,gameplay3d,Transform_Listener)
HX_DECLARE_CLASS2(org,gameplay3d,Vector3)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector3)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,AnimationTarget_ScriptTarget)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,Transform_ListenerImpl)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  AudioSource_obj : public ::org::gameplay3d::intern::impl::Transform_ListenerImpl_obj{
	public:
		typedef ::org::gameplay3d::intern::impl::Transform_ListenerImpl_obj super;
		typedef AudioSource_obj OBJ_;
		AudioSource_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AudioSource_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AudioSource_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::org::gameplay3d::intern::INativeBinding_obj *()
			{ return new ::org::gameplay3d::intern::INativeBinding_delegate_< AudioSource_obj >(this); }
		inline operator ::org::gameplay3d::Ref_obj *()
			{ return new ::org::gameplay3d::Ref_delegate_< AudioSource_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("AudioSource"); }

		::org::gameplay3d::Vector3 _velocity;
		virtual Float getGain( );
		Dynamic getGain_dyn();

		virtual ::org::gameplay3d::Node getNode( );
		Dynamic getNode_dyn();

		virtual Float getPitch( );
		Dynamic getPitch_dyn();

		virtual int getState( );
		Dynamic getState_dyn();

		virtual ::org::gameplay3d::immutable::IVector3 getVelocity( );
		Dynamic getVelocity_dyn();

		virtual bool isLooped( );
		Dynamic isLooped_dyn();

		virtual Void pause( );
		Dynamic pause_dyn();

		virtual Void play( );
		Dynamic play_dyn();

		virtual Void resume( );
		Dynamic resume_dyn();

		virtual Void rewind( );
		Dynamic rewind_dyn();

		virtual Void setGain( Float gain);
		Dynamic setGain_dyn();

		virtual Void setLooped( bool looped);
		Dynamic setLooped_dyn();

		virtual Void setPitch( Float pitch);
		Dynamic setPitch_dyn();

		virtual Void setVelocity_V3( ::org::gameplay3d::immutable::IVector3 velocity);
		Dynamic setVelocity_V3_dyn();

		virtual Void setVelocity_FltX3( Float x,Float y,Float z);
		Dynamic setVelocity_FltX3_dyn();

		virtual Void stop( );
		Dynamic stop_dyn();

		static ::org::gameplay3d::AudioSource create_Prop( ::org::gameplay3d::Properties properties);
		static Dynamic create_Prop_dyn();

		static ::org::gameplay3d::AudioSource create_Str( ::String url);
		static Dynamic create_Str_dyn();

		static Dynamic hx_AudioSource_static_create_Prop;
		static Dynamic &hx_AudioSource_static_create_Prop_dyn() { return hx_AudioSource_static_create_Prop;}
		static Dynamic hx_AudioSource_static_create_Str;
		static Dynamic &hx_AudioSource_static_create_Str_dyn() { return hx_AudioSource_static_create_Str;}
		static Dynamic hx_AudioSource_getGain;
		static Dynamic &hx_AudioSource_getGain_dyn() { return hx_AudioSource_getGain;}
		static Dynamic hx_AudioSource_getNode;
		static Dynamic &hx_AudioSource_getNode_dyn() { return hx_AudioSource_getNode;}
		static Dynamic hx_AudioSource_getPitch;
		static Dynamic &hx_AudioSource_getPitch_dyn() { return hx_AudioSource_getPitch;}
		static Dynamic hx_AudioSource_getState;
		static Dynamic &hx_AudioSource_getState_dyn() { return hx_AudioSource_getState;}
		static Dynamic hx_AudioSource_getVelocity;
		static Dynamic &hx_AudioSource_getVelocity_dyn() { return hx_AudioSource_getVelocity;}
		static Dynamic hx_AudioSource_isLooped;
		static Dynamic &hx_AudioSource_isLooped_dyn() { return hx_AudioSource_isLooped;}
		static Dynamic hx_AudioSource_pause;
		static Dynamic &hx_AudioSource_pause_dyn() { return hx_AudioSource_pause;}
		static Dynamic hx_AudioSource_play;
		static Dynamic &hx_AudioSource_play_dyn() { return hx_AudioSource_play;}
		static Dynamic hx_AudioSource_resume;
		static Dynamic &hx_AudioSource_resume_dyn() { return hx_AudioSource_resume;}
		static Dynamic hx_AudioSource_rewind;
		static Dynamic &hx_AudioSource_rewind_dyn() { return hx_AudioSource_rewind;}
		static Dynamic hx_AudioSource_setGain;
		static Dynamic &hx_AudioSource_setGain_dyn() { return hx_AudioSource_setGain;}
		static Dynamic hx_AudioSource_setLooped;
		static Dynamic &hx_AudioSource_setLooped_dyn() { return hx_AudioSource_setLooped;}
		static Dynamic hx_AudioSource_setPitch;
		static Dynamic &hx_AudioSource_setPitch_dyn() { return hx_AudioSource_setPitch;}
		static Dynamic hx_AudioSource_setVelocity_V3;
		static Dynamic &hx_AudioSource_setVelocity_V3_dyn() { return hx_AudioSource_setVelocity_V3;}
		static Dynamic hx_AudioSource_setVelocity_FltX3;
		static Dynamic &hx_AudioSource_setVelocity_FltX3_dyn() { return hx_AudioSource_setVelocity_FltX3;}
		static Dynamic hx_AudioSource_stop;
		static Dynamic &hx_AudioSource_stop_dyn() { return hx_AudioSource_stop;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_AudioSource */ 
