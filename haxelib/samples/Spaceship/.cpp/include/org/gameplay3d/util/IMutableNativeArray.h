#ifndef INCLUDED_org_gameplay3d_util_IMutableNativeArray
#define INCLUDED_org_gameplay3d_util_IMutableNativeArray

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/util/INativeArray.h>
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,util,IMutableNativeArray)
HX_DECLARE_CLASS3(org,gameplay3d,util,INativeArray)
namespace org{
namespace gameplay3d{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  IMutableNativeArray_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IMutableNativeArray_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Void setAt( int element,Dynamic value)=0;
		Dynamic setAt_dyn();
};

#define DELEGATE_org_gameplay3d_util_IMutableNativeArray \
virtual Void setAt( int element,Dynamic value) { return mDelegate->setAt(element,value);}  \
virtual Dynamic setAt_dyn() { return mDelegate->setAt_dyn();}  \


template<typename IMPL>
class IMutableNativeArray_delegate_ : public IMutableNativeArray_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IMutableNativeArray_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_org_gameplay3d_util_IMutableNativeArray
};

} // end namespace org
} // end namespace gameplay3d
} // end namespace util

#endif /* INCLUDED_org_gameplay3d_util_IMutableNativeArray */ 
