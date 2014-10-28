#ifndef INCLUDED_org_gameplay3d_AudioListener
#define INCLUDED_org_gameplay3d_AudioListener

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/intern/impl/Transform_ListenerImpl.h>
HX_DECLARE_CLASS2(org,gameplay3d,AudioListener)
HX_DECLARE_CLASS2(org,gameplay3d,Camera)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS2(org,gameplay3d,Transform_Listener)
HX_DECLARE_CLASS2(org,gameplay3d,Vector3)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector3)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,Transform_ListenerImpl)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  AudioListener_obj : public ::org::gameplay3d::intern::impl::Transform_ListenerImpl_obj{
	public:
		typedef ::org::gameplay3d::intern::impl::Transform_ListenerImpl_obj super;
		typedef AudioListener_obj OBJ_;
		AudioListener_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AudioListener_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AudioListener_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("AudioListener"); }

		::org::gameplay3d::Vector3 _orientationForward;
		::org::gameplay3d::Vector3 _orientationUp;
		::org::gameplay3d::Vector3 _position;
		::org::gameplay3d::Vector3 _velocity;
		virtual ::org::gameplay3d::Camera getCamera( );
		Dynamic getCamera_dyn();

		virtual Float getGain( );
		Dynamic getGain_dyn();

		virtual Float getOrientation( );
		Dynamic getOrientation_dyn();

		virtual ::org::gameplay3d::immutable::IVector3 getOrientationForward( );
		Dynamic getOrientationForward_dyn();

		virtual ::org::gameplay3d::immutable::IVector3 getOrientationUp( );
		Dynamic getOrientationUp_dyn();

		virtual ::org::gameplay3d::immutable::IVector3 getPosition( );
		Dynamic getPosition_dyn();

		virtual ::org::gameplay3d::immutable::IVector3 getVelocity( );
		Dynamic getVelocity_dyn();

		virtual Void setCamera( ::org::gameplay3d::Camera camera);
		Dynamic setCamera_dyn();

		virtual Void setGain( Float gain);
		Dynamic setGain_dyn();

		virtual Void setOrientation_V3X2( ::org::gameplay3d::immutable::IVector3 forward,::org::gameplay3d::immutable::IVector3 up);
		Dynamic setOrientation_V3X2_dyn();

		virtual Void setOrientation_FltX6( Float forwardX,Float forwardY,Float forwardZ,Float upX,Float upY,Float upZ);
		Dynamic setOrientation_FltX6_dyn();

		virtual Void setPosition_V3( ::org::gameplay3d::immutable::IVector3 position);
		Dynamic setPosition_V3_dyn();

		virtual Void setPosition_FltX3( Float x,Float y,Float z);
		Dynamic setPosition_FltX3_dyn();

		virtual Void setVelocity_V3( ::org::gameplay3d::immutable::IVector3 velocity);
		Dynamic setVelocity_V3_dyn();

		virtual Void setVelocity_FltX3( Float x,Float y,Float z);
		Dynamic setVelocity_FltX3_dyn();

		static ::org::gameplay3d::AudioListener getInstance( );
		static Dynamic getInstance_dyn();

		static Dynamic hx_AudioListener_getCamera;
		static Dynamic &hx_AudioListener_getCamera_dyn() { return hx_AudioListener_getCamera;}
		static Dynamic hx_AudioListener_getGain;
		static Dynamic &hx_AudioListener_getGain_dyn() { return hx_AudioListener_getGain;}
		static Dynamic hx_AudioListener_static_getInstance;
		static Dynamic &hx_AudioListener_static_getInstance_dyn() { return hx_AudioListener_static_getInstance;}
		static Dynamic hx_AudioListener_getOrientation;
		static Dynamic &hx_AudioListener_getOrientation_dyn() { return hx_AudioListener_getOrientation;}
		static Dynamic hx_AudioListener_getOrientationForward;
		static Dynamic &hx_AudioListener_getOrientationForward_dyn() { return hx_AudioListener_getOrientationForward;}
		static Dynamic hx_AudioListener_getOrientationUp;
		static Dynamic &hx_AudioListener_getOrientationUp_dyn() { return hx_AudioListener_getOrientationUp;}
		static Dynamic hx_AudioListener_getPosition;
		static Dynamic &hx_AudioListener_getPosition_dyn() { return hx_AudioListener_getPosition;}
		static Dynamic hx_AudioListener_getVelocity;
		static Dynamic &hx_AudioListener_getVelocity_dyn() { return hx_AudioListener_getVelocity;}
		static Dynamic hx_AudioListener_setCamera;
		static Dynamic &hx_AudioListener_setCamera_dyn() { return hx_AudioListener_setCamera;}
		static Dynamic hx_AudioListener_setGain;
		static Dynamic &hx_AudioListener_setGain_dyn() { return hx_AudioListener_setGain;}
		static Dynamic hx_AudioListener_setOrientation_V3X2;
		static Dynamic &hx_AudioListener_setOrientation_V3X2_dyn() { return hx_AudioListener_setOrientation_V3X2;}
		static Dynamic hx_AudioListener_setOrientation_FltX6;
		static Dynamic &hx_AudioListener_setOrientation_FltX6_dyn() { return hx_AudioListener_setOrientation_FltX6;}
		static Dynamic hx_AudioListener_setPosition_V3;
		static Dynamic &hx_AudioListener_setPosition_V3_dyn() { return hx_AudioListener_setPosition_V3;}
		static Dynamic hx_AudioListener_setPosition_FltX3;
		static Dynamic &hx_AudioListener_setPosition_FltX3_dyn() { return hx_AudioListener_setPosition_FltX3;}
		static Dynamic hx_AudioListener_setVelocity_V3;
		static Dynamic &hx_AudioListener_setVelocity_V3_dyn() { return hx_AudioListener_setVelocity_V3;}
		static Dynamic hx_AudioListener_setVelocity_FltX3;
		static Dynamic &hx_AudioListener_setVelocity_FltX3_dyn() { return hx_AudioListener_setVelocity_FltX3;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_AudioListener */ 
