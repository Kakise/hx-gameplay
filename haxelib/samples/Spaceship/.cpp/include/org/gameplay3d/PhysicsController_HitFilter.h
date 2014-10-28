#ifndef INCLUDED_org_gameplay3d_PhysicsController_HitFilter
#define INCLUDED_org_gameplay3d_PhysicsController_HitFilter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsCollisionObject)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsController_HitFilter)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsController_HitResult)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  PhysicsController_HitFilter_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef PhysicsController_HitFilter_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual bool filter( ::org::gameplay3d::PhysicsCollisionObject object)=0;
		Dynamic filter_dyn();
virtual bool hit( ::org::gameplay3d::PhysicsController_HitResult result)=0;
		Dynamic hit_dyn();
};

#define DELEGATE_org_gameplay3d_PhysicsController_HitFilter \
virtual bool filter( ::org::gameplay3d::PhysicsCollisionObject object) { return mDelegate->filter(object);}  \
virtual Dynamic filter_dyn() { return mDelegate->filter_dyn();}  \
virtual bool hit( ::org::gameplay3d::PhysicsController_HitResult result) { return mDelegate->hit(result);}  \
virtual Dynamic hit_dyn() { return mDelegate->hit_dyn();}  \


template<typename IMPL>
class PhysicsController_HitFilter_delegate_ : public PhysicsController_HitFilter_obj
{
	protected:
		IMPL *mDelegate;
	public:
		PhysicsController_HitFilter_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_org_gameplay3d_PhysicsController_HitFilter
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_PhysicsController_HitFilter */ 
