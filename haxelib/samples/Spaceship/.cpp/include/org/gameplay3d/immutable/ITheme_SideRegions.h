#ifndef INCLUDED_org_gameplay3d_immutable_ITheme_SideRegions
#define INCLUDED_org_gameplay3d_immutable_ITheme_SideRegions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(org,gameplay3d,immutable,ITheme_SideRegions)
namespace org{
namespace gameplay3d{
namespace immutable{


class HXCPP_CLASS_ATTRIBUTES  ITheme_SideRegions_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef ITheme_SideRegions_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
};

#define DELEGATE_org_gameplay3d_immutable_ITheme_SideRegions \


template<typename IMPL>
class ITheme_SideRegions_delegate_ : public ITheme_SideRegions_obj
{
	protected:
		IMPL *mDelegate;
	public:
		ITheme_SideRegions_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_org_gameplay3d_immutable_ITheme_SideRegions
};

} // end namespace org
} // end namespace gameplay3d
} // end namespace immutable

#endif /* INCLUDED_org_gameplay3d_immutable_ITheme_SideRegions */ 
