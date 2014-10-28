#ifndef INCLUDED_org_gameplay3d_Control_Listener
#define INCLUDED_org_gameplay3d_Control_Listener

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(org,gameplay3d,AnimationTarget)
HX_DECLARE_CLASS2(org,gameplay3d,Control)
HX_DECLARE_CLASS2(org,gameplay3d,Control_Listener)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS2(org,gameplay3d,ScriptTarget)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,AnimationTarget_ScriptTarget)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  Control_Listener_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef Control_Listener_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Void controlEvent( ::org::gameplay3d::Control control,int evt)=0;
		Dynamic controlEvent_dyn();
};

#define DELEGATE_org_gameplay3d_Control_Listener \
virtual Void controlEvent( ::org::gameplay3d::Control control,int evt) { return mDelegate->controlEvent(control,evt);}  \
virtual Dynamic controlEvent_dyn() { return mDelegate->controlEvent_dyn();}  \


template<typename IMPL>
class Control_Listener_delegate_ : public Control_Listener_obj
{
	protected:
		IMPL *mDelegate;
	public:
		Control_Listener_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_org_gameplay3d_Control_Listener
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_Control_Listener */ 
