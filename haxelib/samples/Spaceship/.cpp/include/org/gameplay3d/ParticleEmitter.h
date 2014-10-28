#ifndef INCLUDED_org_gameplay3d_ParticleEmitter
#define INCLUDED_org_gameplay3d_ParticleEmitter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
#include <org/gameplay3d/Ref.h>
HX_DECLARE_CLASS2(org,gameplay3d,AnimationTarget)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Node)
HX_DECLARE_CLASS2(org,gameplay3d,ParticleEmitter)
HX_DECLARE_CLASS2(org,gameplay3d,Properties)
HX_DECLARE_CLASS2(org,gameplay3d,Rectangle)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS2(org,gameplay3d,ScriptTarget)
HX_DECLARE_CLASS2(org,gameplay3d,Transform)
HX_DECLARE_CLASS2(org,gameplay3d,Vector3)
HX_DECLARE_CLASS2(org,gameplay3d,Vector4)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IRectangle)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector3)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector4)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,AnimationTarget_ScriptTarget)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  ParticleEmitter_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef ParticleEmitter_obj OBJ_;
		ParticleEmitter_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ParticleEmitter_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ParticleEmitter_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::org::gameplay3d::intern::INativeBinding_obj *()
			{ return new ::org::gameplay3d::intern::INativeBinding_delegate_< ParticleEmitter_obj >(this); }
		inline operator ::org::gameplay3d::Ref_obj *()
			{ return new ::org::gameplay3d::Ref_delegate_< ParticleEmitter_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("ParticleEmitter"); }

		::org::gameplay3d::Vector3 _acceleration;
		::org::gameplay3d::Vector3 _accelerationVariance;
		::org::gameplay3d::Vector3 _position;
		::org::gameplay3d::Vector3 _positionVariance;
		::org::gameplay3d::Vector3 _rotationAxis;
		::org::gameplay3d::Vector3 _rotationAxisVariance;
		::org::gameplay3d::Vector3 _velocity;
		::org::gameplay3d::Vector3 _velocityVariance;
		::org::gameplay3d::Vector4 _colorEnd;
		::org::gameplay3d::Vector4 _colorEndVariance;
		::org::gameplay3d::Vector4 _colorStart;
		::org::gameplay3d::Vector4 _colorStartVariance;
		virtual Void draw( );
		Dynamic draw_dyn();

		virtual Void emitOnce( int particleCount);
		Dynamic emitOnce_dyn();

		virtual ::org::gameplay3d::immutable::IVector3 getAcceleration( );
		Dynamic getAcceleration_dyn();

		virtual ::org::gameplay3d::immutable::IVector3 getAccelerationVariance( );
		Dynamic getAccelerationVariance_dyn();

		virtual ::org::gameplay3d::immutable::IVector4 getColorEnd( );
		Dynamic getColorEnd_dyn();

		virtual ::org::gameplay3d::immutable::IVector4 getColorEndVariance( );
		Dynamic getColorEndVariance_dyn();

		virtual ::org::gameplay3d::immutable::IVector4 getColorStart( );
		Dynamic getColorStart_dyn();

		virtual ::org::gameplay3d::immutable::IVector4 getColorStartVariance( );
		Dynamic getColorStartVariance_dyn();

		virtual int getEmissionRate( );
		Dynamic getEmissionRate_dyn();

		virtual int getEnergyMax( );
		Dynamic getEnergyMax_dyn();

		virtual int getEnergyMin( );
		Dynamic getEnergyMin_dyn();

		virtual ::org::gameplay3d::Node getNode( );
		Dynamic getNode_dyn();

		virtual int getParticlesCount( );
		Dynamic getParticlesCount_dyn();

		virtual ::org::gameplay3d::immutable::IVector3 getPosition( );
		Dynamic getPosition_dyn();

		virtual ::org::gameplay3d::immutable::IVector3 getPositionVariance( );
		Dynamic getPositionVariance_dyn();

		virtual ::org::gameplay3d::immutable::IVector3 getRotationAxis( );
		Dynamic getRotationAxis_dyn();

		virtual ::org::gameplay3d::immutable::IVector3 getRotationAxisVariance( );
		Dynamic getRotationAxisVariance_dyn();

		virtual Float getRotationPerParticleSpeedMax( );
		Dynamic getRotationPerParticleSpeedMax_dyn();

		virtual Float getRotationPerParticleSpeedMin( );
		Dynamic getRotationPerParticleSpeedMin_dyn();

		virtual Float getRotationSpeedMax( );
		Dynamic getRotationSpeedMax_dyn();

		virtual Float getRotationSpeedMin( );
		Dynamic getRotationSpeedMin_dyn();

		virtual Float getSizeEndMax( );
		Dynamic getSizeEndMax_dyn();

		virtual Float getSizeEndMin( );
		Dynamic getSizeEndMin_dyn();

		virtual Float getSizeStartMax( );
		Dynamic getSizeStartMax_dyn();

		virtual Float getSizeStartMin( );
		Dynamic getSizeStartMin_dyn();

		virtual int getSpriteFrameDuration( );
		Dynamic getSpriteFrameDuration_dyn();

		virtual int getSpriteFrameRandomOffset( );
		Dynamic getSpriteFrameRandomOffset_dyn();

		virtual ::org::gameplay3d::immutable::IVector3 getVelocity( );
		Dynamic getVelocity_dyn();

		virtual ::org::gameplay3d::immutable::IVector3 getVelocityVariance( );
		Dynamic getVelocityVariance_dyn();

		virtual bool isActive( );
		Dynamic isActive_dyn();

		virtual bool isEllipsoid( );
		Dynamic isEllipsoid_dyn();

		virtual bool isSpriteAnimated( );
		Dynamic isSpriteAnimated_dyn();

		virtual bool isSpriteLooped( );
		Dynamic isSpriteLooped_dyn();

		virtual bool isStarted( );
		Dynamic isStarted_dyn();

		virtual Void setAcceleration( ::org::gameplay3d::immutable::IVector3 acceleration,::org::gameplay3d::immutable::IVector3 accelerationVariance);
		Dynamic setAcceleration_dyn();

		virtual Void setColor( ::org::gameplay3d::immutable::IVector4 start,::org::gameplay3d::immutable::IVector4 startVariance,::org::gameplay3d::immutable::IVector4 end,::org::gameplay3d::immutable::IVector4 endVariance);
		Dynamic setColor_dyn();

		virtual Void setEllipsoid( bool ellipsoid);
		Dynamic setEllipsoid_dyn();

		virtual Void setEmissionRate( int rate);
		Dynamic setEmissionRate_dyn();

		virtual Void setEnergy( int energyMin,int energyMax);
		Dynamic setEnergy_dyn();

		virtual Void setOrbit( bool orbitPosition,bool orbitVelocity,bool orbitAcceleration);
		Dynamic setOrbit_dyn();

		virtual Void setPosition( ::org::gameplay3d::immutable::IVector3 position,::org::gameplay3d::immutable::IVector3 positionVariance);
		Dynamic setPosition_dyn();

		virtual Void setRotation( Float speedMin,Float speedMax,::org::gameplay3d::immutable::IVector3 axis,::org::gameplay3d::immutable::IVector3 axisVariance);
		Dynamic setRotation_dyn();

		virtual Void setRotationPerParticle( Float speedMin,Float speedMax);
		Dynamic setRotationPerParticle_dyn();

		virtual Void setSize( Float startMin,Float startMax,Float endMin,Float endMax);
		Dynamic setSize_dyn();

		virtual Void setSpriteAnimated( bool animated);
		Dynamic setSpriteAnimated_dyn();

		virtual Void setSpriteFrameCoords_Int_ArrRct( int frameCount,Array< ::Dynamic > frameCoords);
		Dynamic setSpriteFrameCoords_Int_ArrRct_dyn();

		virtual Void setSpriteFrameCoords_IntX3( int frameCount,int width,int height);
		Dynamic setSpriteFrameCoords_IntX3_dyn();

		virtual Void setSpriteFrameDuration( int duration);
		Dynamic setSpriteFrameDuration_dyn();

		virtual Void setSpriteFrameRandomOffset( int maxOffset);
		Dynamic setSpriteFrameRandomOffset_dyn();

		virtual Void setSpriteLooped( bool looped);
		Dynamic setSpriteLooped_dyn();

		virtual Void setSpriteTexCoords( int frameCount,Array< Float > texCoords);
		Dynamic setSpriteTexCoords_dyn();

		virtual Void setTextureBlending( int blending);
		Dynamic setTextureBlending_dyn();

		virtual Void setVelocity( ::org::gameplay3d::immutable::IVector3 velocity,::org::gameplay3d::immutable::IVector3 velocityVariance);
		Dynamic setVelocity_dyn();

		virtual Void start( );
		Dynamic start_dyn();

		virtual Void stop( );
		Dynamic stop_dyn();

		virtual Void update( Float elapsedTime);
		Dynamic update_dyn();

		static ::org::gameplay3d::ParticleEmitter create_Prop( ::org::gameplay3d::Properties properties);
		static Dynamic create_Prop_dyn();

		static ::org::gameplay3d::ParticleEmitter create_Str_IntX2( ::String texturePath,int textureBlending,int particleCountMax);
		static Dynamic create_Str_IntX2_dyn();

		static ::org::gameplay3d::ParticleEmitter create_Str( ::String url);
		static Dynamic create_Str_dyn();

		static int getTextureBlendingFromString( ::String src);
		static Dynamic getTextureBlendingFromString_dyn();

		static Dynamic hx_ParticleEmitter_static_create_Prop;
		static Dynamic &hx_ParticleEmitter_static_create_Prop_dyn() { return hx_ParticleEmitter_static_create_Prop;}
		static Dynamic hx_ParticleEmitter_static_create_Str_IntX2;
		static Dynamic &hx_ParticleEmitter_static_create_Str_IntX2_dyn() { return hx_ParticleEmitter_static_create_Str_IntX2;}
		static Dynamic hx_ParticleEmitter_static_create_Str;
		static Dynamic &hx_ParticleEmitter_static_create_Str_dyn() { return hx_ParticleEmitter_static_create_Str;}
		static Dynamic hx_ParticleEmitter_draw;
		static Dynamic &hx_ParticleEmitter_draw_dyn() { return hx_ParticleEmitter_draw;}
		static Dynamic hx_ParticleEmitter_emitOnce;
		static Dynamic &hx_ParticleEmitter_emitOnce_dyn() { return hx_ParticleEmitter_emitOnce;}
		static Dynamic hx_ParticleEmitter_getAcceleration;
		static Dynamic &hx_ParticleEmitter_getAcceleration_dyn() { return hx_ParticleEmitter_getAcceleration;}
		static Dynamic hx_ParticleEmitter_getAccelerationVariance;
		static Dynamic &hx_ParticleEmitter_getAccelerationVariance_dyn() { return hx_ParticleEmitter_getAccelerationVariance;}
		static Dynamic hx_ParticleEmitter_getColorEnd;
		static Dynamic &hx_ParticleEmitter_getColorEnd_dyn() { return hx_ParticleEmitter_getColorEnd;}
		static Dynamic hx_ParticleEmitter_getColorEndVariance;
		static Dynamic &hx_ParticleEmitter_getColorEndVariance_dyn() { return hx_ParticleEmitter_getColorEndVariance;}
		static Dynamic hx_ParticleEmitter_getColorStart;
		static Dynamic &hx_ParticleEmitter_getColorStart_dyn() { return hx_ParticleEmitter_getColorStart;}
		static Dynamic hx_ParticleEmitter_getColorStartVariance;
		static Dynamic &hx_ParticleEmitter_getColorStartVariance_dyn() { return hx_ParticleEmitter_getColorStartVariance;}
		static Dynamic hx_ParticleEmitter_getEmissionRate;
		static Dynamic &hx_ParticleEmitter_getEmissionRate_dyn() { return hx_ParticleEmitter_getEmissionRate;}
		static Dynamic hx_ParticleEmitter_getEnergyMax;
		static Dynamic &hx_ParticleEmitter_getEnergyMax_dyn() { return hx_ParticleEmitter_getEnergyMax;}
		static Dynamic hx_ParticleEmitter_getEnergyMin;
		static Dynamic &hx_ParticleEmitter_getEnergyMin_dyn() { return hx_ParticleEmitter_getEnergyMin;}
		static Dynamic hx_ParticleEmitter_getNode;
		static Dynamic &hx_ParticleEmitter_getNode_dyn() { return hx_ParticleEmitter_getNode;}
		static Dynamic hx_ParticleEmitter_getParticlesCount;
		static Dynamic &hx_ParticleEmitter_getParticlesCount_dyn() { return hx_ParticleEmitter_getParticlesCount;}
		static Dynamic hx_ParticleEmitter_getPosition;
		static Dynamic &hx_ParticleEmitter_getPosition_dyn() { return hx_ParticleEmitter_getPosition;}
		static Dynamic hx_ParticleEmitter_getPositionVariance;
		static Dynamic &hx_ParticleEmitter_getPositionVariance_dyn() { return hx_ParticleEmitter_getPositionVariance;}
		static Dynamic hx_ParticleEmitter_getRotationAxis;
		static Dynamic &hx_ParticleEmitter_getRotationAxis_dyn() { return hx_ParticleEmitter_getRotationAxis;}
		static Dynamic hx_ParticleEmitter_getRotationAxisVariance;
		static Dynamic &hx_ParticleEmitter_getRotationAxisVariance_dyn() { return hx_ParticleEmitter_getRotationAxisVariance;}
		static Dynamic hx_ParticleEmitter_getRotationPerParticleSpeedMax;
		static Dynamic &hx_ParticleEmitter_getRotationPerParticleSpeedMax_dyn() { return hx_ParticleEmitter_getRotationPerParticleSpeedMax;}
		static Dynamic hx_ParticleEmitter_getRotationPerParticleSpeedMin;
		static Dynamic &hx_ParticleEmitter_getRotationPerParticleSpeedMin_dyn() { return hx_ParticleEmitter_getRotationPerParticleSpeedMin;}
		static Dynamic hx_ParticleEmitter_getRotationSpeedMax;
		static Dynamic &hx_ParticleEmitter_getRotationSpeedMax_dyn() { return hx_ParticleEmitter_getRotationSpeedMax;}
		static Dynamic hx_ParticleEmitter_getRotationSpeedMin;
		static Dynamic &hx_ParticleEmitter_getRotationSpeedMin_dyn() { return hx_ParticleEmitter_getRotationSpeedMin;}
		static Dynamic hx_ParticleEmitter_getSizeEndMax;
		static Dynamic &hx_ParticleEmitter_getSizeEndMax_dyn() { return hx_ParticleEmitter_getSizeEndMax;}
		static Dynamic hx_ParticleEmitter_getSizeEndMin;
		static Dynamic &hx_ParticleEmitter_getSizeEndMin_dyn() { return hx_ParticleEmitter_getSizeEndMin;}
		static Dynamic hx_ParticleEmitter_getSizeStartMax;
		static Dynamic &hx_ParticleEmitter_getSizeStartMax_dyn() { return hx_ParticleEmitter_getSizeStartMax;}
		static Dynamic hx_ParticleEmitter_getSizeStartMin;
		static Dynamic &hx_ParticleEmitter_getSizeStartMin_dyn() { return hx_ParticleEmitter_getSizeStartMin;}
		static Dynamic hx_ParticleEmitter_getSpriteFrameDuration;
		static Dynamic &hx_ParticleEmitter_getSpriteFrameDuration_dyn() { return hx_ParticleEmitter_getSpriteFrameDuration;}
		static Dynamic hx_ParticleEmitter_getSpriteFrameRandomOffset;
		static Dynamic &hx_ParticleEmitter_getSpriteFrameRandomOffset_dyn() { return hx_ParticleEmitter_getSpriteFrameRandomOffset;}
		static Dynamic hx_ParticleEmitter_static_getTextureBlendingFromString;
		static Dynamic &hx_ParticleEmitter_static_getTextureBlendingFromString_dyn() { return hx_ParticleEmitter_static_getTextureBlendingFromString;}
		static Dynamic hx_ParticleEmitter_getVelocity;
		static Dynamic &hx_ParticleEmitter_getVelocity_dyn() { return hx_ParticleEmitter_getVelocity;}
		static Dynamic hx_ParticleEmitter_getVelocityVariance;
		static Dynamic &hx_ParticleEmitter_getVelocityVariance_dyn() { return hx_ParticleEmitter_getVelocityVariance;}
		static Dynamic hx_ParticleEmitter_isActive;
		static Dynamic &hx_ParticleEmitter_isActive_dyn() { return hx_ParticleEmitter_isActive;}
		static Dynamic hx_ParticleEmitter_isEllipsoid;
		static Dynamic &hx_ParticleEmitter_isEllipsoid_dyn() { return hx_ParticleEmitter_isEllipsoid;}
		static Dynamic hx_ParticleEmitter_isSpriteAnimated;
		static Dynamic &hx_ParticleEmitter_isSpriteAnimated_dyn() { return hx_ParticleEmitter_isSpriteAnimated;}
		static Dynamic hx_ParticleEmitter_isSpriteLooped;
		static Dynamic &hx_ParticleEmitter_isSpriteLooped_dyn() { return hx_ParticleEmitter_isSpriteLooped;}
		static Dynamic hx_ParticleEmitter_isStarted;
		static Dynamic &hx_ParticleEmitter_isStarted_dyn() { return hx_ParticleEmitter_isStarted;}
		static Dynamic hx_ParticleEmitter_setAcceleration;
		static Dynamic &hx_ParticleEmitter_setAcceleration_dyn() { return hx_ParticleEmitter_setAcceleration;}
		static Dynamic hx_ParticleEmitter_setColor;
		static Dynamic &hx_ParticleEmitter_setColor_dyn() { return hx_ParticleEmitter_setColor;}
		static Dynamic hx_ParticleEmitter_setEllipsoid;
		static Dynamic &hx_ParticleEmitter_setEllipsoid_dyn() { return hx_ParticleEmitter_setEllipsoid;}
		static Dynamic hx_ParticleEmitter_setEmissionRate;
		static Dynamic &hx_ParticleEmitter_setEmissionRate_dyn() { return hx_ParticleEmitter_setEmissionRate;}
		static Dynamic hx_ParticleEmitter_setEnergy;
		static Dynamic &hx_ParticleEmitter_setEnergy_dyn() { return hx_ParticleEmitter_setEnergy;}
		static Dynamic hx_ParticleEmitter_setOrbit;
		static Dynamic &hx_ParticleEmitter_setOrbit_dyn() { return hx_ParticleEmitter_setOrbit;}
		static Dynamic hx_ParticleEmitter_setPosition;
		static Dynamic &hx_ParticleEmitter_setPosition_dyn() { return hx_ParticleEmitter_setPosition;}
		static Dynamic hx_ParticleEmitter_setRotation;
		static Dynamic &hx_ParticleEmitter_setRotation_dyn() { return hx_ParticleEmitter_setRotation;}
		static Dynamic hx_ParticleEmitter_setRotationPerParticle;
		static Dynamic &hx_ParticleEmitter_setRotationPerParticle_dyn() { return hx_ParticleEmitter_setRotationPerParticle;}
		static Dynamic hx_ParticleEmitter_setSize;
		static Dynamic &hx_ParticleEmitter_setSize_dyn() { return hx_ParticleEmitter_setSize;}
		static Dynamic hx_ParticleEmitter_setSpriteAnimated;
		static Dynamic &hx_ParticleEmitter_setSpriteAnimated_dyn() { return hx_ParticleEmitter_setSpriteAnimated;}
		static Dynamic hx_ParticleEmitter_setSpriteFrameCoords_Int_ArrRct;
		static Dynamic &hx_ParticleEmitter_setSpriteFrameCoords_Int_ArrRct_dyn() { return hx_ParticleEmitter_setSpriteFrameCoords_Int_ArrRct;}
		static Dynamic hx_ParticleEmitter_setSpriteFrameCoords_IntX3;
		static Dynamic &hx_ParticleEmitter_setSpriteFrameCoords_IntX3_dyn() { return hx_ParticleEmitter_setSpriteFrameCoords_IntX3;}
		static Dynamic hx_ParticleEmitter_setSpriteFrameDuration;
		static Dynamic &hx_ParticleEmitter_setSpriteFrameDuration_dyn() { return hx_ParticleEmitter_setSpriteFrameDuration;}
		static Dynamic hx_ParticleEmitter_setSpriteFrameRandomOffset;
		static Dynamic &hx_ParticleEmitter_setSpriteFrameRandomOffset_dyn() { return hx_ParticleEmitter_setSpriteFrameRandomOffset;}
		static Dynamic hx_ParticleEmitter_setSpriteLooped;
		static Dynamic &hx_ParticleEmitter_setSpriteLooped_dyn() { return hx_ParticleEmitter_setSpriteLooped;}
		static Dynamic hx_ParticleEmitter_setSpriteTexCoords;
		static Dynamic &hx_ParticleEmitter_setSpriteTexCoords_dyn() { return hx_ParticleEmitter_setSpriteTexCoords;}
		static Dynamic hx_ParticleEmitter_setTextureBlending;
		static Dynamic &hx_ParticleEmitter_setTextureBlending_dyn() { return hx_ParticleEmitter_setTextureBlending;}
		static Dynamic hx_ParticleEmitter_setVelocity;
		static Dynamic &hx_ParticleEmitter_setVelocity_dyn() { return hx_ParticleEmitter_setVelocity;}
		static Dynamic hx_ParticleEmitter_start;
		static Dynamic &hx_ParticleEmitter_start_dyn() { return hx_ParticleEmitter_start;}
		static Dynamic hx_ParticleEmitter_stop;
		static Dynamic &hx_ParticleEmitter_stop_dyn() { return hx_ParticleEmitter_stop;}
		static Dynamic hx_ParticleEmitter_update;
		static Dynamic &hx_ParticleEmitter_update_dyn() { return hx_ParticleEmitter_update;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_ParticleEmitter */ 
