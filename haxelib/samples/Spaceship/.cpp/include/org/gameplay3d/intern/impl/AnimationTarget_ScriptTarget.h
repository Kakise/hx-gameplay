#ifndef INCLUDED_org_gameplay3d_intern_impl_AnimationTarget_ScriptTarget
#define INCLUDED_org_gameplay3d_intern_impl_AnimationTarget_ScriptTarget

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
#include <org/gameplay3d/ScriptTarget.h>
#include <org/gameplay3d/AnimationTarget.h>
HX_DECLARE_CLASS2(org,gameplay3d,Animation)
HX_DECLARE_CLASS2(org,gameplay3d,AnimationTarget)
HX_DECLARE_CLASS2(org,gameplay3d,AnimationValue)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Properties)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS2(org,gameplay3d,ScriptTarget)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,AnimationTarget_ScriptTarget)
HX_DECLARE_CLASS3(org,gameplay3d,util,IMutableNativeArray)
HX_DECLARE_CLASS3(org,gameplay3d,util,INativeArray)
namespace org{
namespace gameplay3d{
namespace intern{
namespace impl{


class HXCPP_CLASS_ATTRIBUTES  AnimationTarget_ScriptTarget_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef AnimationTarget_ScriptTarget_obj OBJ_;
		AnimationTarget_ScriptTarget_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AnimationTarget_ScriptTarget_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AnimationTarget_ScriptTarget_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		inline operator ::org::gameplay3d::AnimationTarget_obj *()
			{ return new ::org::gameplay3d::AnimationTarget_delegate_< AnimationTarget_ScriptTarget_obj >(this); }
		inline operator ::org::gameplay3d::intern::INativeBinding_obj *()
			{ return new ::org::gameplay3d::intern::INativeBinding_delegate_< AnimationTarget_ScriptTarget_obj >(this); }
		inline operator ::org::gameplay3d::ScriptTarget_obj *()
			{ return new ::org::gameplay3d::ScriptTarget_delegate_< AnimationTarget_ScriptTarget_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("AnimationTarget_ScriptTarget"); }

		virtual ::org::gameplay3d::Animation createAnimation_Str_Prop( ::String id,::org::gameplay3d::Properties animationProperties);
		Dynamic createAnimation_Str_Prop_dyn();

		virtual ::org::gameplay3d::Animation createAnimation_StrX2( ::String id,::String url);
		Dynamic createAnimation_StrX2_dyn();

		virtual ::org::gameplay3d::Animation createAnimation_Str_IntX2_ArrInt_ArrFlt_Int( ::String id,int propertyId,int keyCount,::org::gameplay3d::util::IMutableNativeArray keyTimes,::org::gameplay3d::util::IMutableNativeArray keyValues,int type);
		Dynamic createAnimation_Str_IntX2_ArrInt_ArrFlt_Int_dyn();

		virtual ::org::gameplay3d::Animation createAnimation_Str_IntX2_ArrInt_ArrFltX3_Int( ::String id,int propertyId,int keyCount,::org::gameplay3d::util::IMutableNativeArray keyTimes,::org::gameplay3d::util::IMutableNativeArray keyValues,::org::gameplay3d::util::IMutableNativeArray keyInValue,::org::gameplay3d::util::IMutableNativeArray keyOutValue,int type);
		Dynamic createAnimation_Str_IntX2_ArrInt_ArrFltX3_Int_dyn();

		virtual ::org::gameplay3d::Animation createAnimationFromBy( ::String id,int propertyId,::org::gameplay3d::util::IMutableNativeArray from,::org::gameplay3d::util::IMutableNativeArray by,int type,int duration);
		Dynamic createAnimationFromBy_dyn();

		virtual ::org::gameplay3d::Animation createAnimationFromTo( ::String id,int propertyId,::org::gameplay3d::util::IMutableNativeArray from,::org::gameplay3d::util::IMutableNativeArray to,int type,int duration);
		Dynamic createAnimationFromTo_dyn();

		virtual Void destroyAnimation( ::String id);
		Dynamic destroyAnimation_dyn();

		virtual ::org::gameplay3d::Animation getAnimation( ::String id);
		Dynamic getAnimation_dyn();

		virtual int getAnimationPropertyComponentCount( int propertyId);
		Dynamic getAnimationPropertyComponentCount_dyn();

		virtual Void getAnimationPropertyValue( int propertyId,::org::gameplay3d::AnimationValue value);
		Dynamic getAnimationPropertyValue_dyn();

		virtual Void setAnimationPropertyValue( int propertyId,::org::gameplay3d::AnimationValue value,hx::Null< Float >  blendWeight);
		Dynamic setAnimationPropertyValue_dyn();

		virtual Void addScriptCallback( ::String eventName,::String _function);
		Dynamic addScriptCallback_dyn();

		virtual Void removeScriptCallback( ::String eventName,::String _function);
		Dynamic removeScriptCallback_dyn();

		static Dynamic hx_AnimationTarget_createAnimation_Str_Prop;
		static Dynamic &hx_AnimationTarget_createAnimation_Str_Prop_dyn() { return hx_AnimationTarget_createAnimation_Str_Prop;}
		static Dynamic hx_AnimationTarget_createAnimation_StrX2;
		static Dynamic &hx_AnimationTarget_createAnimation_StrX2_dyn() { return hx_AnimationTarget_createAnimation_StrX2;}
		static Dynamic hx_AnimationTarget_createAnimation_Str_IntX2_ArrInt_ArrFlt_Int;
		static Dynamic &hx_AnimationTarget_createAnimation_Str_IntX2_ArrInt_ArrFlt_Int_dyn() { return hx_AnimationTarget_createAnimation_Str_IntX2_ArrInt_ArrFlt_Int;}
		static Dynamic hx_AnimationTarget_createAnimation_Str_IntX2_ArrInt_ArrFltX3_Int;
		static Dynamic &hx_AnimationTarget_createAnimation_Str_IntX2_ArrInt_ArrFltX3_Int_dyn() { return hx_AnimationTarget_createAnimation_Str_IntX2_ArrInt_ArrFltX3_Int;}
		static Dynamic hx_AnimationTarget_createAnimationFromBy;
		static Dynamic &hx_AnimationTarget_createAnimationFromBy_dyn() { return hx_AnimationTarget_createAnimationFromBy;}
		static Dynamic hx_AnimationTarget_createAnimationFromTo;
		static Dynamic &hx_AnimationTarget_createAnimationFromTo_dyn() { return hx_AnimationTarget_createAnimationFromTo;}
		static Dynamic hx_AnimationTarget_destroyAnimation;
		static Dynamic &hx_AnimationTarget_destroyAnimation_dyn() { return hx_AnimationTarget_destroyAnimation;}
		static Dynamic hx_AnimationTarget_getAnimation;
		static Dynamic &hx_AnimationTarget_getAnimation_dyn() { return hx_AnimationTarget_getAnimation;}
		static Dynamic hx_AnimationTarget_getAnimationPropertyComponentCount;
		static Dynamic &hx_AnimationTarget_getAnimationPropertyComponentCount_dyn() { return hx_AnimationTarget_getAnimationPropertyComponentCount;}
		static Dynamic hx_AnimationTarget_getAnimationPropertyValue;
		static Dynamic &hx_AnimationTarget_getAnimationPropertyValue_dyn() { return hx_AnimationTarget_getAnimationPropertyValue;}
		static Dynamic hx_AnimationTarget_setAnimationPropertyValue;
		static Dynamic &hx_AnimationTarget_setAnimationPropertyValue_dyn() { return hx_AnimationTarget_setAnimationPropertyValue;}
		static Dynamic hx_ScriptTarget_addScriptCallback;
		static Dynamic &hx_ScriptTarget_addScriptCallback_dyn() { return hx_ScriptTarget_addScriptCallback;}
		static Dynamic hx_ScriptTarget_removeScriptCallback;
		static Dynamic &hx_ScriptTarget_removeScriptCallback_dyn() { return hx_ScriptTarget_removeScriptCallback;}
};

} // end namespace org
} // end namespace gameplay3d
} // end namespace intern
} // end namespace impl

#endif /* INCLUDED_org_gameplay3d_intern_impl_AnimationTarget_ScriptTarget */ 
