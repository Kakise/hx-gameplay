#ifndef INCLUDED_org_gameplay3d_AnimationTarget
#define INCLUDED_org_gameplay3d_AnimationTarget

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/intern/INativeBinding.h>
HX_DECLARE_CLASS2(org,gameplay3d,Animation)
HX_DECLARE_CLASS2(org,gameplay3d,AnimationTarget)
HX_DECLARE_CLASS2(org,gameplay3d,AnimationValue)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Properties)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,util,IMutableNativeArray)
HX_DECLARE_CLASS3(org,gameplay3d,util,INativeArray)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  AnimationTarget_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef AnimationTarget_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual ::org::gameplay3d::Animation createAnimation_Str_Prop( ::String id,::org::gameplay3d::Properties animationProperties)=0;
		Dynamic createAnimation_Str_Prop_dyn();
virtual ::org::gameplay3d::Animation createAnimation_StrX2( ::String id,::String url)=0;
		Dynamic createAnimation_StrX2_dyn();
virtual ::org::gameplay3d::Animation createAnimation_Str_IntX2_ArrInt_ArrFlt_Int( ::String id,int propertyId,int keyCount,::org::gameplay3d::util::IMutableNativeArray keyTimes,::org::gameplay3d::util::IMutableNativeArray keyValues,int type)=0;
		Dynamic createAnimation_Str_IntX2_ArrInt_ArrFlt_Int_dyn();
virtual ::org::gameplay3d::Animation createAnimation_Str_IntX2_ArrInt_ArrFltX3_Int( ::String id,int propertyId,int keyCount,::org::gameplay3d::util::IMutableNativeArray keyTimes,::org::gameplay3d::util::IMutableNativeArray keyValues,::org::gameplay3d::util::IMutableNativeArray keyInValue,::org::gameplay3d::util::IMutableNativeArray keyOutValue,int type)=0;
		Dynamic createAnimation_Str_IntX2_ArrInt_ArrFltX3_Int_dyn();
virtual ::org::gameplay3d::Animation createAnimationFromBy( ::String id,int propertyId,::org::gameplay3d::util::IMutableNativeArray from,::org::gameplay3d::util::IMutableNativeArray by,int type,int duration)=0;
		Dynamic createAnimationFromBy_dyn();
virtual ::org::gameplay3d::Animation createAnimationFromTo( ::String id,int propertyId,::org::gameplay3d::util::IMutableNativeArray from,::org::gameplay3d::util::IMutableNativeArray to,int type,int duration)=0;
		Dynamic createAnimationFromTo_dyn();
virtual Void destroyAnimation( ::String id)=0;
		Dynamic destroyAnimation_dyn();
virtual ::org::gameplay3d::Animation getAnimation( ::String id)=0;
		Dynamic getAnimation_dyn();
virtual int getAnimationPropertyComponentCount( int propertyId)=0;
		Dynamic getAnimationPropertyComponentCount_dyn();
virtual Void getAnimationPropertyValue( int propertyId,::org::gameplay3d::AnimationValue value)=0;
		Dynamic getAnimationPropertyValue_dyn();
virtual Void setAnimationPropertyValue( int propertyId,::org::gameplay3d::AnimationValue value,hx::Null< Float >  blendWeight)=0;
		Dynamic setAnimationPropertyValue_dyn();
};

#define DELEGATE_org_gameplay3d_AnimationTarget \
virtual ::org::gameplay3d::Animation createAnimation_Str_Prop( ::String id,::org::gameplay3d::Properties animationProperties) { return mDelegate->createAnimation_Str_Prop(id,animationProperties);}  \
virtual Dynamic createAnimation_Str_Prop_dyn() { return mDelegate->createAnimation_Str_Prop_dyn();}  \
virtual ::org::gameplay3d::Animation createAnimation_StrX2( ::String id,::String url) { return mDelegate->createAnimation_StrX2(id,url);}  \
virtual Dynamic createAnimation_StrX2_dyn() { return mDelegate->createAnimation_StrX2_dyn();}  \
virtual ::org::gameplay3d::Animation createAnimation_Str_IntX2_ArrInt_ArrFlt_Int( ::String id,int propertyId,int keyCount,::org::gameplay3d::util::IMutableNativeArray keyTimes,::org::gameplay3d::util::IMutableNativeArray keyValues,int type) { return mDelegate->createAnimation_Str_IntX2_ArrInt_ArrFlt_Int(id,propertyId,keyCount,keyTimes,keyValues,type);}  \
virtual Dynamic createAnimation_Str_IntX2_ArrInt_ArrFlt_Int_dyn() { return mDelegate->createAnimation_Str_IntX2_ArrInt_ArrFlt_Int_dyn();}  \
virtual ::org::gameplay3d::Animation createAnimation_Str_IntX2_ArrInt_ArrFltX3_Int( ::String id,int propertyId,int keyCount,::org::gameplay3d::util::IMutableNativeArray keyTimes,::org::gameplay3d::util::IMutableNativeArray keyValues,::org::gameplay3d::util::IMutableNativeArray keyInValue,::org::gameplay3d::util::IMutableNativeArray keyOutValue,int type) { return mDelegate->createAnimation_Str_IntX2_ArrInt_ArrFltX3_Int(id,propertyId,keyCount,keyTimes,keyValues,keyInValue,keyOutValue,type);}  \
virtual Dynamic createAnimation_Str_IntX2_ArrInt_ArrFltX3_Int_dyn() { return mDelegate->createAnimation_Str_IntX2_ArrInt_ArrFltX3_Int_dyn();}  \
virtual ::org::gameplay3d::Animation createAnimationFromBy( ::String id,int propertyId,::org::gameplay3d::util::IMutableNativeArray from,::org::gameplay3d::util::IMutableNativeArray by,int type,int duration) { return mDelegate->createAnimationFromBy(id,propertyId,from,by,type,duration);}  \
virtual Dynamic createAnimationFromBy_dyn() { return mDelegate->createAnimationFromBy_dyn();}  \
virtual ::org::gameplay3d::Animation createAnimationFromTo( ::String id,int propertyId,::org::gameplay3d::util::IMutableNativeArray from,::org::gameplay3d::util::IMutableNativeArray to,int type,int duration) { return mDelegate->createAnimationFromTo(id,propertyId,from,to,type,duration);}  \
virtual Dynamic createAnimationFromTo_dyn() { return mDelegate->createAnimationFromTo_dyn();}  \
virtual Void destroyAnimation( ::String id) { return mDelegate->destroyAnimation(id);}  \
virtual Dynamic destroyAnimation_dyn() { return mDelegate->destroyAnimation_dyn();}  \
virtual ::org::gameplay3d::Animation getAnimation( ::String id) { return mDelegate->getAnimation(id);}  \
virtual Dynamic getAnimation_dyn() { return mDelegate->getAnimation_dyn();}  \
virtual int getAnimationPropertyComponentCount( int propertyId) { return mDelegate->getAnimationPropertyComponentCount(propertyId);}  \
virtual Dynamic getAnimationPropertyComponentCount_dyn() { return mDelegate->getAnimationPropertyComponentCount_dyn();}  \
virtual Void getAnimationPropertyValue( int propertyId,::org::gameplay3d::AnimationValue value) { return mDelegate->getAnimationPropertyValue(propertyId,value);}  \
virtual Dynamic getAnimationPropertyValue_dyn() { return mDelegate->getAnimationPropertyValue_dyn();}  \
virtual Void setAnimationPropertyValue( int propertyId,::org::gameplay3d::AnimationValue value,hx::Null< Float >  blendWeight) { return mDelegate->setAnimationPropertyValue(propertyId,value,blendWeight);}  \
virtual Dynamic setAnimationPropertyValue_dyn() { return mDelegate->setAnimationPropertyValue_dyn();}  \


template<typename IMPL>
class AnimationTarget_delegate_ : public AnimationTarget_obj
{
	protected:
		IMPL *mDelegate;
	public:
		AnimationTarget_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_org_gameplay3d_AnimationTarget
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_AnimationTarget */ 
