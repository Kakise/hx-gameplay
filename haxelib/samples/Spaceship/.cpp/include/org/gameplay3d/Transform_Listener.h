#ifndef INCLUDED_org_gameplay3d_Transform_Listener
#define INCLUDED_org_gameplay3d_Transform_Listener

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(org,gameplay3d,AnimationTarget)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,ScriptTarget)
HX_DECLARE_CLASS2(org,gameplay3d,Transform)
HX_DECLARE_CLASS2(org,gameplay3d,Transform_Listener)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,AnimationTarget_ScriptTarget)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  Transform_Listener_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef Transform_Listener_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Void transformChanged( ::org::gameplay3d::Transform transform,int cookie)=0;
		Dynamic transformChanged_dyn();
};

#define DELEGATE_org_gameplay3d_Transform_Listener \
virtual Void transformChanged( ::org::gameplay3d::Transform transform,int cookie) { return mDelegate->transformChanged(transform,cookie);}  \
virtual Dynamic transformChanged_dyn() { return mDelegate->transformChanged_dyn();}  \


template<typename IMPL>
class Transform_Listener_delegate_ : public Transform_Listener_obj
{
	protected:
		IMPL *mDelegate;
	public:
		Transform_Listener_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_org_gameplay3d_Transform_Listener
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_Transform_Listener */ 
