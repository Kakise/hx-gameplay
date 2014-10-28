#ifndef INCLUDED_org_gameplay3d_Curve
#define INCLUDED_org_gameplay3d_Curve

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
#include <org/gameplay3d/Ref.h>
HX_DECLARE_CLASS2(org,gameplay3d,Curve)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,util,IMutableNativeArray)
HX_DECLARE_CLASS3(org,gameplay3d,util,INativeArray)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  Curve_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef Curve_obj OBJ_;
		Curve_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Curve_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Curve_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		inline operator ::org::gameplay3d::intern::INativeBinding_obj *()
			{ return new ::org::gameplay3d::intern::INativeBinding_delegate_< Curve_obj >(this); }
		inline operator ::org::gameplay3d::Ref_obj *()
			{ return new ::org::gameplay3d::Ref_delegate_< Curve_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("Curve"); }

		virtual Void evaluate( Float time,::org::gameplay3d::util::IMutableNativeArray dst);
		Dynamic evaluate_dyn();

		virtual int getComponentCount( );
		Dynamic getComponentCount_dyn();

		virtual Float getEndTime( );
		Dynamic getEndTime_dyn();

		virtual int getPointCount( );
		Dynamic getPointCount_dyn();

		virtual Float getStartTime( );
		Dynamic getStartTime_dyn();

		virtual Void setPoint_Int_Flt_ArrFlt_Int( int index,Float time,::org::gameplay3d::util::IMutableNativeArray value,int type);
		Dynamic setPoint_Int_Flt_ArrFlt_Int_dyn();

		virtual Void setPoint_Int_Flt_ArrFlt_Int_ArrFltX2( int index,Float time,::org::gameplay3d::util::IMutableNativeArray value,int type,::org::gameplay3d::util::IMutableNativeArray inValue,::org::gameplay3d::util::IMutableNativeArray outValue);
		Dynamic setPoint_Int_Flt_ArrFlt_Int_ArrFltX2_dyn();

		virtual Void setTangent( int index,int type,::org::gameplay3d::util::IMutableNativeArray inValue,::org::gameplay3d::util::IMutableNativeArray outValue);
		Dynamic setTangent_dyn();

		static ::org::gameplay3d::Curve create( int pointCount,int componentCount);
		static Dynamic create_dyn();

		static Float lerp( Float t,Float from,Float to);
		static Dynamic lerp_dyn();

		static Dynamic hx_Curve_static_create;
		static Dynamic &hx_Curve_static_create_dyn() { return hx_Curve_static_create;}
		static Dynamic hx_Curve_evaluate;
		static Dynamic &hx_Curve_evaluate_dyn() { return hx_Curve_evaluate;}
		static Dynamic hx_Curve_getComponentCount;
		static Dynamic &hx_Curve_getComponentCount_dyn() { return hx_Curve_getComponentCount;}
		static Dynamic hx_Curve_getEndTime;
		static Dynamic &hx_Curve_getEndTime_dyn() { return hx_Curve_getEndTime;}
		static Dynamic hx_Curve_getPointCount;
		static Dynamic &hx_Curve_getPointCount_dyn() { return hx_Curve_getPointCount;}
		static Dynamic hx_Curve_getStartTime;
		static Dynamic &hx_Curve_getStartTime_dyn() { return hx_Curve_getStartTime;}
		static Dynamic hx_Curve_static_lerp;
		static Dynamic &hx_Curve_static_lerp_dyn() { return hx_Curve_static_lerp;}
		static Dynamic hx_Curve_setPoint_Int_Flt_ArrFlt_Int;
		static Dynamic &hx_Curve_setPoint_Int_Flt_ArrFlt_Int_dyn() { return hx_Curve_setPoint_Int_Flt_ArrFlt_Int;}
		static Dynamic hx_Curve_setPoint_Int_Flt_ArrFlt_Int_ArrFltX2;
		static Dynamic &hx_Curve_setPoint_Int_Flt_ArrFlt_Int_ArrFltX2_dyn() { return hx_Curve_setPoint_Int_Flt_ArrFlt_Int_ArrFltX2;}
		static Dynamic hx_Curve_setTangent;
		static Dynamic &hx_Curve_setTangent_dyn() { return hx_Curve_setTangent;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_Curve */ 
