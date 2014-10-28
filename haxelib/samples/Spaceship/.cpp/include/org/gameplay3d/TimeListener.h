#ifndef INCLUDED_org_gameplay3d_TimeListener
#define INCLUDED_org_gameplay3d_TimeListener

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(org,gameplay3d,TimeListener)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,util,Handle)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  TimeListener_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef TimeListener_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Void timeEvent( int timeDiff,::org::gameplay3d::util::Handle cookie)=0;
		Dynamic timeEvent_dyn();
};

#define DELEGATE_org_gameplay3d_TimeListener \
virtual Void timeEvent( int timeDiff,::org::gameplay3d::util::Handle cookie) { return mDelegate->timeEvent(timeDiff,cookie);}  \
virtual Dynamic timeEvent_dyn() { return mDelegate->timeEvent_dyn();}  \


template<typename IMPL>
class TimeListener_delegate_ : public TimeListener_obj
{
	protected:
		IMPL *mDelegate;
	public:
		TimeListener_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_org_gameplay3d_TimeListener
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_TimeListener */ 
