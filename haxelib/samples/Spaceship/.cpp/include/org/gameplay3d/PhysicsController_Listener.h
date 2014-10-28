#ifndef INCLUDED_org_gameplay3d_PhysicsController_Listener
#define INCLUDED_org_gameplay3d_PhysicsController_Listener

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(org,gameplay3d,PhysicsController_Listener)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  PhysicsController_Listener_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef PhysicsController_Listener_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Void statusEvent( int type)=0;
		Dynamic statusEvent_dyn();
};

#define DELEGATE_org_gameplay3d_PhysicsController_Listener \
virtual Void statusEvent( int type) { return mDelegate->statusEvent(type);}  \
virtual Dynamic statusEvent_dyn() { return mDelegate->statusEvent_dyn();}  \


template<typename IMPL>
class PhysicsController_Listener_delegate_ : public PhysicsController_Listener_obj
{
	protected:
		IMPL *mDelegate;
	public:
		PhysicsController_Listener_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_org_gameplay3d_PhysicsController_Listener
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_PhysicsController_Listener */ 
