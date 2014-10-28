#ifndef INCLUDED_org_gameplay3d_util_INativeArray
#define INCLUDED_org_gameplay3d_util_INativeArray

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/intern/INativeBinding.h>
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,util,INativeArray)
namespace org{
namespace gameplay3d{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  INativeArray_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef INativeArray_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Dynamic getAt( int index)=0;
		Dynamic getAt_dyn();
};

#define DELEGATE_org_gameplay3d_util_INativeArray \
virtual Dynamic getAt( int index) { return mDelegate->getAt(index);}  \
virtual Dynamic getAt_dyn() { return mDelegate->getAt_dyn();}  \


template<typename IMPL>
class INativeArray_delegate_ : public INativeArray_obj
{
	protected:
		IMPL *mDelegate;
	public:
		INativeArray_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_org_gameplay3d_util_INativeArray
};

} // end namespace org
} // end namespace gameplay3d
} // end namespace util

#endif /* INCLUDED_org_gameplay3d_util_INativeArray */ 
