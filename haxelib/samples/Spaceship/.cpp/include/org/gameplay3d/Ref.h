#ifndef INCLUDED_org_gameplay3d_Ref
#define INCLUDED_org_gameplay3d_Ref

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/intern/INativeBinding.h>
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  Ref_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef Ref_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
};

#define DELEGATE_org_gameplay3d_Ref \


template<typename IMPL>
class Ref_delegate_ : public Ref_obj
{
	protected:
		IMPL *mDelegate;
	public:
		Ref_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_org_gameplay3d_Ref
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_Ref */ 
