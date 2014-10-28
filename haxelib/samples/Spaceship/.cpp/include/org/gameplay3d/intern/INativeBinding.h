#ifndef INCLUDED_org_gameplay3d_intern_INativeBinding
#define INCLUDED_org_gameplay3d_intern_INativeBinding

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
namespace org{
namespace gameplay3d{
namespace intern{


class HXCPP_CLASS_ATTRIBUTES  INativeBinding_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef INativeBinding_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual bool isEquivalentTo( ::org::gameplay3d::intern::INativeBinding object)=0;
		Dynamic isEquivalentTo_dyn();
};

#define DELEGATE_org_gameplay3d_intern_INativeBinding \
virtual bool isEquivalentTo( ::org::gameplay3d::intern::INativeBinding object) { return mDelegate->isEquivalentTo(object);}  \
virtual Dynamic isEquivalentTo_dyn() { return mDelegate->isEquivalentTo_dyn();}  \


template<typename IMPL>
class INativeBinding_delegate_ : public INativeBinding_obj
{
	protected:
		IMPL *mDelegate;
	public:
		INativeBinding_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_org_gameplay3d_intern_INativeBinding
};

} // end namespace org
} // end namespace gameplay3d
} // end namespace intern

#endif /* INCLUDED_org_gameplay3d_intern_INativeBinding */ 
