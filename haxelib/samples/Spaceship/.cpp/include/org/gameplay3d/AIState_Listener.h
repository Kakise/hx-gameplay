#ifndef INCLUDED_org_gameplay3d_AIState_Listener
#define INCLUDED_org_gameplay3d_AIState_Listener

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(org,gameplay3d,AIAgent)
HX_DECLARE_CLASS2(org,gameplay3d,AIState)
HX_DECLARE_CLASS2(org,gameplay3d,AIState_Listener)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS2(org,gameplay3d,ScriptTarget)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,ScriptTargetImpl)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  AIState_Listener_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef AIState_Listener_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Void stateEnter( ::org::gameplay3d::AIAgent agent,::org::gameplay3d::AIState state)=0;
		Dynamic stateEnter_dyn();
virtual Void stateExit( ::org::gameplay3d::AIAgent agent,::org::gameplay3d::AIState state)=0;
		Dynamic stateExit_dyn();
virtual Void stateUpdate( ::org::gameplay3d::AIAgent agent,::org::gameplay3d::AIState state,Float elapsedTime)=0;
		Dynamic stateUpdate_dyn();
};

#define DELEGATE_org_gameplay3d_AIState_Listener \
virtual Void stateEnter( ::org::gameplay3d::AIAgent agent,::org::gameplay3d::AIState state) { return mDelegate->stateEnter(agent,state);}  \
virtual Dynamic stateEnter_dyn() { return mDelegate->stateEnter_dyn();}  \
virtual Void stateExit( ::org::gameplay3d::AIAgent agent,::org::gameplay3d::AIState state) { return mDelegate->stateExit(agent,state);}  \
virtual Dynamic stateExit_dyn() { return mDelegate->stateExit_dyn();}  \
virtual Void stateUpdate( ::org::gameplay3d::AIAgent agent,::org::gameplay3d::AIState state,Float elapsedTime) { return mDelegate->stateUpdate(agent,state,elapsedTime);}  \
virtual Dynamic stateUpdate_dyn() { return mDelegate->stateUpdate_dyn();}  \


template<typename IMPL>
class AIState_Listener_delegate_ : public AIState_Listener_obj
{
	protected:
		IMPL *mDelegate;
	public:
		AIState_Listener_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_org_gameplay3d_AIState_Listener
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_AIState_Listener */ 
