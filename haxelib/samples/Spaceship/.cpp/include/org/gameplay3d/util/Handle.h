#ifndef INCLUDED_org_gameplay3d_util_Handle
#define INCLUDED_org_gameplay3d_util_Handle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/intern/NativeBinding.h>
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,util,Handle)
namespace org{
namespace gameplay3d{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  Handle_obj : public ::org::gameplay3d::intern::NativeBinding_obj{
	public:
		typedef ::org::gameplay3d::intern::NativeBinding_obj super;
		typedef Handle_obj OBJ_;
		Handle_obj();
		Void __construct(Dynamic nativeObject);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Handle_obj > __new(Dynamic nativeObject);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Handle_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Handle"); }

		static ::org::gameplay3d::util::Handle wrap( Dynamic nativeObject);
		static Dynamic wrap_dyn();

};

} // end namespace org
} // end namespace gameplay3d
} // end namespace util

#endif /* INCLUDED_org_gameplay3d_util_Handle */ 
