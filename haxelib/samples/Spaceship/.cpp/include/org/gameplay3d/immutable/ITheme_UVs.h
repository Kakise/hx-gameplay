#ifndef INCLUDED_org_gameplay3d_immutable_ITheme_UVs
#define INCLUDED_org_gameplay3d_immutable_ITheme_UVs

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/intern/INativeBinding.h>
HX_DECLARE_CLASS3(org,gameplay3d,immutable,ITheme_UVs)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
namespace org{
namespace gameplay3d{
namespace immutable{


class HXCPP_CLASS_ATTRIBUTES  ITheme_UVs_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef ITheme_UVs_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
};

#define DELEGATE_org_gameplay3d_immutable_ITheme_UVs \


template<typename IMPL>
class ITheme_UVs_delegate_ : public ITheme_UVs_obj
{
	protected:
		IMPL *mDelegate;
	public:
		ITheme_UVs_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_org_gameplay3d_immutable_ITheme_UVs
};

} // end namespace org
} // end namespace gameplay3d
} // end namespace immutable

#endif /* INCLUDED_org_gameplay3d_immutable_ITheme_UVs */ 
