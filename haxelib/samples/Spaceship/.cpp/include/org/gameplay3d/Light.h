#ifndef INCLUDED_org_gameplay3d_Light
#define INCLUDED_org_gameplay3d_Light

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
#include <org/gameplay3d/Ref.h>
HX_DECLARE_CLASS2(org,gameplay3d,AnimationTarget)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Light)
HX_DECLARE_CLASS2(org,gameplay3d,Node)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS2(org,gameplay3d,ScriptTarget)
HX_DECLARE_CLASS2(org,gameplay3d,Transform)
HX_DECLARE_CLASS2(org,gameplay3d,Vector3)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector3)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,AnimationTarget_ScriptTarget)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  Light_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef Light_obj OBJ_;
		Light_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Light_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Light_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::org::gameplay3d::intern::INativeBinding_obj *()
			{ return new ::org::gameplay3d::intern::INativeBinding_delegate_< Light_obj >(this); }
		inline operator ::org::gameplay3d::Ref_obj *()
			{ return new ::org::gameplay3d::Ref_delegate_< Light_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("Light"); }

		::org::gameplay3d::Vector3 _color;
		virtual ::org::gameplay3d::immutable::IVector3 getColor( );
		Dynamic getColor_dyn();

		virtual Float getInnerAngle( );
		Dynamic getInnerAngle_dyn();

		virtual Float getInnerAngleCos( );
		Dynamic getInnerAngleCos_dyn();

		virtual int getLightType( );
		Dynamic getLightType_dyn();

		virtual ::org::gameplay3d::Node getNode( );
		Dynamic getNode_dyn();

		virtual Float getOuterAngle( );
		Dynamic getOuterAngle_dyn();

		virtual Float getOuterAngleCos( );
		Dynamic getOuterAngleCos_dyn();

		virtual Float getRange( );
		Dynamic getRange_dyn();

		virtual Float getRangeInverse( );
		Dynamic getRangeInverse_dyn();

		virtual Void setColor_V3( ::org::gameplay3d::immutable::IVector3 color);
		Dynamic setColor_V3_dyn();

		virtual Void setColor_FltX3( Float red,Float green,Float blue);
		Dynamic setColor_FltX3_dyn();

		virtual Void setInnerAngle( Float innerAngle);
		Dynamic setInnerAngle_dyn();

		virtual Void setOuterAngle( Float outerAngle);
		Dynamic setOuterAngle_dyn();

		virtual Void setRange( Float range);
		Dynamic setRange_dyn();

		static ::org::gameplay3d::Light createDirectional_V3( ::org::gameplay3d::immutable::IVector3 color);
		static Dynamic createDirectional_V3_dyn();

		static ::org::gameplay3d::Light createDirectional_FltX3( Float red,Float green,Float blue);
		static Dynamic createDirectional_FltX3_dyn();

		static ::org::gameplay3d::Light createPoint_V3_Flt( ::org::gameplay3d::immutable::IVector3 color,Float range);
		static Dynamic createPoint_V3_Flt_dyn();

		static ::org::gameplay3d::Light createPoint_FltX4( Float red,Float green,Float blue,Float range);
		static Dynamic createPoint_FltX4_dyn();

		static ::org::gameplay3d::Light createSpot_V3_FltX3( ::org::gameplay3d::immutable::IVector3 color,Float range,Float innerAngle,Float outerAngle);
		static Dynamic createSpot_V3_FltX3_dyn();

		static ::org::gameplay3d::Light createSpot_FltX6( Float red,Float green,Float blue,Float range,Float innerAngle,Float outerAngle);
		static Dynamic createSpot_FltX6_dyn();

		static Dynamic hx_Light_static_createDirectional_V3;
		static Dynamic &hx_Light_static_createDirectional_V3_dyn() { return hx_Light_static_createDirectional_V3;}
		static Dynamic hx_Light_static_createDirectional_FltX3;
		static Dynamic &hx_Light_static_createDirectional_FltX3_dyn() { return hx_Light_static_createDirectional_FltX3;}
		static Dynamic hx_Light_static_createPoint_V3_Flt;
		static Dynamic &hx_Light_static_createPoint_V3_Flt_dyn() { return hx_Light_static_createPoint_V3_Flt;}
		static Dynamic hx_Light_static_createPoint_FltX4;
		static Dynamic &hx_Light_static_createPoint_FltX4_dyn() { return hx_Light_static_createPoint_FltX4;}
		static Dynamic hx_Light_static_createSpot_V3_FltX3;
		static Dynamic &hx_Light_static_createSpot_V3_FltX3_dyn() { return hx_Light_static_createSpot_V3_FltX3;}
		static Dynamic hx_Light_static_createSpot_FltX6;
		static Dynamic &hx_Light_static_createSpot_FltX6_dyn() { return hx_Light_static_createSpot_FltX6;}
		static Dynamic hx_Light_getColor;
		static Dynamic &hx_Light_getColor_dyn() { return hx_Light_getColor;}
		static Dynamic hx_Light_getInnerAngle;
		static Dynamic &hx_Light_getInnerAngle_dyn() { return hx_Light_getInnerAngle;}
		static Dynamic hx_Light_getInnerAngleCos;
		static Dynamic &hx_Light_getInnerAngleCos_dyn() { return hx_Light_getInnerAngleCos;}
		static Dynamic hx_Light_getLightType;
		static Dynamic &hx_Light_getLightType_dyn() { return hx_Light_getLightType;}
		static Dynamic hx_Light_getNode;
		static Dynamic &hx_Light_getNode_dyn() { return hx_Light_getNode;}
		static Dynamic hx_Light_getOuterAngle;
		static Dynamic &hx_Light_getOuterAngle_dyn() { return hx_Light_getOuterAngle;}
		static Dynamic hx_Light_getOuterAngleCos;
		static Dynamic &hx_Light_getOuterAngleCos_dyn() { return hx_Light_getOuterAngleCos;}
		static Dynamic hx_Light_getRange;
		static Dynamic &hx_Light_getRange_dyn() { return hx_Light_getRange;}
		static Dynamic hx_Light_getRangeInverse;
		static Dynamic &hx_Light_getRangeInverse_dyn() { return hx_Light_getRangeInverse;}
		static Dynamic hx_Light_setColor_V3;
		static Dynamic &hx_Light_setColor_V3_dyn() { return hx_Light_setColor_V3;}
		static Dynamic hx_Light_setColor_FltX3;
		static Dynamic &hx_Light_setColor_FltX3_dyn() { return hx_Light_setColor_FltX3;}
		static Dynamic hx_Light_setInnerAngle;
		static Dynamic &hx_Light_setInnerAngle_dyn() { return hx_Light_setInnerAngle;}
		static Dynamic hx_Light_setOuterAngle;
		static Dynamic &hx_Light_setOuterAngle_dyn() { return hx_Light_setOuterAngle;}
		static Dynamic hx_Light_setRange;
		static Dynamic &hx_Light_setRange_dyn() { return hx_Light_setRange;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_Light */ 
