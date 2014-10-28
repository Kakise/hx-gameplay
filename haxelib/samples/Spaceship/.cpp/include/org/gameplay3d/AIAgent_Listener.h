#ifndef INCLUDED_org_gameplay3d_AIAgent_Listener
#define INCLUDED_org_gameplay3d_AIAgent_Listener

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(org,gameplay3d,AIAgent_Listener)
HX_DECLARE_CLASS2(org,gameplay3d,AIMessage)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  AIAgent_Listener_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef AIAgent_Listener_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual bool messageReceived( ::org::gameplay3d::AIMessage message)=0;
		Dynamic messageReceived_dyn();
};

#define DELEGATE_org_gameplay3d_AIAgent_Listener \
virtual bool messageReceived( ::org::gameplay3d::AIMessage message) { return mDelegate->messageReceived(message);}  \
virtual Dynamic messageReceived_dyn() { return mDelegate->messageReceived_dyn();}  \


template<typename IMPL>
class AIAgent_Listener_delegate_ : public AIAgent_Listener_obj
{
	protected:
		IMPL *mDelegate;
	public:
		AIAgent_Listener_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_org_gameplay3d_AIAgent_Listener
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_AIAgent_Listener */ 
