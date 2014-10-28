#ifndef INCLUDED_org_gameplay3d_AnimationClip_Listener
#define INCLUDED_org_gameplay3d_AnimationClip_Listener

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(org,gameplay3d,AnimationClip)
HX_DECLARE_CLASS2(org,gameplay3d,AnimationClip_Listener)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  AnimationClip_Listener_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef AnimationClip_Listener_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Void animationEvent( ::org::gameplay3d::AnimationClip clip,int type)=0;
		Dynamic animationEvent_dyn();
};

#define DELEGATE_org_gameplay3d_AnimationClip_Listener \
virtual Void animationEvent( ::org::gameplay3d::AnimationClip clip,int type) { return mDelegate->animationEvent(clip,type);}  \
virtual Dynamic animationEvent_dyn() { return mDelegate->animationEvent_dyn();}  \


template<typename IMPL>
class AnimationClip_Listener_delegate_ : public AnimationClip_Listener_obj
{
	protected:
		IMPL *mDelegate;
	public:
		AnimationClip_Listener_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_org_gameplay3d_AnimationClip_Listener
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_AnimationClip_Listener */ 
