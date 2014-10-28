#ifndef INCLUDED_org_gameplay3d_MaterialParameter
#define INCLUDED_org_gameplay3d_MaterialParameter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/intern/impl/AnimationTargetImpl.h>
#include <org/gameplay3d/Ref.h>
HX_DECLARE_CLASS2(org,gameplay3d,AnimationTarget)
HX_DECLARE_CLASS2(org,gameplay3d,AnimationValue)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,MaterialParameter)
HX_DECLARE_CLASS2(org,gameplay3d,Node)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS2(org,gameplay3d,ScriptTarget)
HX_DECLARE_CLASS2(org,gameplay3d,Texture_Sampler)
HX_DECLARE_CLASS2(org,gameplay3d,Transform)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IMatrix)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector2)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector3)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector4)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,AnimationTargetImpl)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,AnimationTarget_ScriptTarget)
HX_DECLARE_CLASS3(org,gameplay3d,util,FunctionBinder)
HX_DECLARE_CLASS3(org,gameplay3d,util,IMutableNativeArray)
HX_DECLARE_CLASS3(org,gameplay3d,util,INativeArray)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  MaterialParameter_obj : public ::org::gameplay3d::intern::impl::AnimationTargetImpl_obj{
	public:
		typedef ::org::gameplay3d::intern::impl::AnimationTargetImpl_obj super;
		typedef MaterialParameter_obj OBJ_;
		MaterialParameter_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< MaterialParameter_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MaterialParameter_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::org::gameplay3d::intern::INativeBinding_obj *()
			{ return new ::org::gameplay3d::intern::INativeBinding_delegate_< MaterialParameter_obj >(this); }
		inline operator ::org::gameplay3d::Ref_obj *()
			{ return new ::org::gameplay3d::Ref_delegate_< MaterialParameter_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("MaterialParameter"); }

		::org::gameplay3d::util::FunctionBinder binder;
		::org::gameplay3d::util::FunctionBinder arrayBinder;
		::org::gameplay3d::util::FunctionBinder countBinder;
		virtual Void clearBinder( );
		Dynamic clearBinder_dyn();

		virtual Void bindValue_Func( ::org::gameplay3d::util::FunctionBinder binder);
		Dynamic bindValue_Func_dyn();

		virtual Void bindValue_FuncX2( ::org::gameplay3d::util::FunctionBinder arrayBinder,Dynamic countBinder);
		Dynamic bindValue_FuncX2_dyn();

		virtual Void bindValue_Node_Str( ::org::gameplay3d::Node node,::String binding);
		Dynamic bindValue_Node_Str_dyn();

		virtual int getAnimationPropertyComponentCount( int propertyId);

		virtual Void getAnimationPropertyValue( int propertyId,::org::gameplay3d::AnimationValue value);

		virtual ::String getName( );
		Dynamic getName_dyn();

		virtual ::org::gameplay3d::Texture_Sampler getSampler( hx::Null< int >  index);
		Dynamic getSampler_dyn();

		virtual Void setAnimationPropertyValue( int propertyId,::org::gameplay3d::AnimationValue value,hx::Null< Float >  blendWeight);

		virtual ::org::gameplay3d::Texture_Sampler setValue_Str_Bool( ::String texturePath,bool generateMipmaps);
		Dynamic setValue_Str_Bool_dyn();

		virtual Void setValue_Mat( ::org::gameplay3d::immutable::IMatrix value);
		Dynamic setValue_Mat_dyn();

		virtual Void setValue_ArrMat_Int( ::org::gameplay3d::util::INativeArray values,hx::Null< int >  count);
		Dynamic setValue_ArrMat_Int_dyn();

		virtual Void setValue_Smplr( ::org::gameplay3d::Texture_Sampler sampler);
		Dynamic setValue_Smplr_dyn();

		virtual Void setValue_ArrSmplr_Int( Array< ::Dynamic > samplers,hx::Null< int >  count);
		Dynamic setValue_ArrSmplr_Int_dyn();

		virtual Void setValue_V2( ::org::gameplay3d::immutable::IVector2 value);
		Dynamic setValue_V2_dyn();

		virtual Void setValue_ArrV2_Int( ::org::gameplay3d::util::INativeArray values,hx::Null< int >  count);
		Dynamic setValue_ArrV2_Int_dyn();

		virtual Void setValue_V3( ::org::gameplay3d::immutable::IVector3 value);
		Dynamic setValue_V3_dyn();

		virtual Void setValue_ArrV3_Int( ::org::gameplay3d::util::INativeArray values,hx::Null< int >  count);
		Dynamic setValue_ArrV3_Int_dyn();

		virtual Void setValue_V4( ::org::gameplay3d::immutable::IVector4 value);
		Dynamic setValue_V4_dyn();

		virtual Void setValue_ArrV4_Int( ::org::gameplay3d::util::INativeArray values,hx::Null< int >  count);
		Dynamic setValue_ArrV4_Int_dyn();

		virtual Void setValue_ArrFlt_Int( ::org::gameplay3d::util::IMutableNativeArray values,hx::Null< int >  count);
		Dynamic setValue_ArrFlt_Int_dyn();

		virtual Void setValue_ArrInt_Int( ::org::gameplay3d::util::IMutableNativeArray values,hx::Null< int >  count);
		Dynamic setValue_ArrInt_Int_dyn();

		virtual Void setValue_Flt( Float value);
		Dynamic setValue_Flt_dyn();

		virtual Void setValue_Int( int value);
		Dynamic setValue_Int_dyn();

		static int ANIMATE_UNIFORM;
		static Dynamic hx_MaterialParameter_bindValue_Func_Str;
		static Dynamic &hx_MaterialParameter_bindValue_Func_Str_dyn() { return hx_MaterialParameter_bindValue_Func_Str;}
		static Dynamic hx_MaterialParameter_bindValue_Node_Str;
		static Dynamic &hx_MaterialParameter_bindValue_Node_Str_dyn() { return hx_MaterialParameter_bindValue_Node_Str;}
		static Dynamic hx_MaterialParameter_getAnimationPropertyComponentCount;
		static Dynamic &hx_MaterialParameter_getAnimationPropertyComponentCount_dyn() { return hx_MaterialParameter_getAnimationPropertyComponentCount;}
		static Dynamic hx_MaterialParameter_getAnimationPropertyValue;
		static Dynamic &hx_MaterialParameter_getAnimationPropertyValue_dyn() { return hx_MaterialParameter_getAnimationPropertyValue;}
		static Dynamic hx_MaterialParameter_getName;
		static Dynamic &hx_MaterialParameter_getName_dyn() { return hx_MaterialParameter_getName;}
		static Dynamic hx_MaterialParameter_getSampler;
		static Dynamic &hx_MaterialParameter_getSampler_dyn() { return hx_MaterialParameter_getSampler;}
		static Dynamic hx_MaterialParameter_setAnimationPropertyValue;
		static Dynamic &hx_MaterialParameter_setAnimationPropertyValue_dyn() { return hx_MaterialParameter_setAnimationPropertyValue;}
		static Dynamic hx_MaterialParameter_setValue_Str_Bool;
		static Dynamic &hx_MaterialParameter_setValue_Str_Bool_dyn() { return hx_MaterialParameter_setValue_Str_Bool;}
		static Dynamic hx_MaterialParameter_setValue_Mat;
		static Dynamic &hx_MaterialParameter_setValue_Mat_dyn() { return hx_MaterialParameter_setValue_Mat;}
		static Dynamic hx_MaterialParameter_setValue_ArrMat_Int;
		static Dynamic &hx_MaterialParameter_setValue_ArrMat_Int_dyn() { return hx_MaterialParameter_setValue_ArrMat_Int;}
		static Dynamic hx_MaterialParameter_setValue_Smplr;
		static Dynamic &hx_MaterialParameter_setValue_Smplr_dyn() { return hx_MaterialParameter_setValue_Smplr;}
		static Dynamic hx_MaterialParameter_setValue_ArrSmplr_Int;
		static Dynamic &hx_MaterialParameter_setValue_ArrSmplr_Int_dyn() { return hx_MaterialParameter_setValue_ArrSmplr_Int;}
		static Dynamic hx_MaterialParameter_setValue_V2;
		static Dynamic &hx_MaterialParameter_setValue_V2_dyn() { return hx_MaterialParameter_setValue_V2;}
		static Dynamic hx_MaterialParameter_setValue_ArrV2_Int;
		static Dynamic &hx_MaterialParameter_setValue_ArrV2_Int_dyn() { return hx_MaterialParameter_setValue_ArrV2_Int;}
		static Dynamic hx_MaterialParameter_setValue_V3;
		static Dynamic &hx_MaterialParameter_setValue_V3_dyn() { return hx_MaterialParameter_setValue_V3;}
		static Dynamic hx_MaterialParameter_setValue_ArrV3_Int;
		static Dynamic &hx_MaterialParameter_setValue_ArrV3_Int_dyn() { return hx_MaterialParameter_setValue_ArrV3_Int;}
		static Dynamic hx_MaterialParameter_setValue_V4;
		static Dynamic &hx_MaterialParameter_setValue_V4_dyn() { return hx_MaterialParameter_setValue_V4;}
		static Dynamic hx_MaterialParameter_setValue_ArrV4_Int;
		static Dynamic &hx_MaterialParameter_setValue_ArrV4_Int_dyn() { return hx_MaterialParameter_setValue_ArrV4_Int;}
		static Dynamic hx_MaterialParameter_setValue_ArrFlt_Int;
		static Dynamic &hx_MaterialParameter_setValue_ArrFlt_Int_dyn() { return hx_MaterialParameter_setValue_ArrFlt_Int;}
		static Dynamic hx_MaterialParameter_setValue_ArrInt_Int;
		static Dynamic &hx_MaterialParameter_setValue_ArrInt_Int_dyn() { return hx_MaterialParameter_setValue_ArrInt_Int;}
		static Dynamic hx_MaterialParameter_setValue_Flt;
		static Dynamic &hx_MaterialParameter_setValue_Flt_dyn() { return hx_MaterialParameter_setValue_Flt;}
		static Dynamic hx_MaterialParameter_setValue_Int;
		static Dynamic &hx_MaterialParameter_setValue_Int_dyn() { return hx_MaterialParameter_setValue_Int;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_MaterialParameter */ 
