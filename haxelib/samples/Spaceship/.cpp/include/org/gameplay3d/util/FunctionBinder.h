#ifndef INCLUDED_org_gameplay3d_util_FunctionBinder
#define INCLUDED_org_gameplay3d_util_FunctionBinder

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/intern/NativeBinding.h>
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,util,FunctionBinder)
namespace org{
namespace gameplay3d{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  FunctionBinder_obj : public ::org::gameplay3d::intern::NativeBinding_obj{
	public:
		typedef ::org::gameplay3d::intern::NativeBinding_obj super;
		typedef FunctionBinder_obj OBJ_;
		FunctionBinder_obj();
		Void __construct(Dynamic func,::String type,hx::Null< bool >  __o_native);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FunctionBinder_obj > __new(Dynamic func,::String type,hx::Null< bool >  __o_native);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FunctionBinder_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FunctionBinder"); }

		::String type;
		Dynamic func;
		Dynamic &func_dyn() { return func;}
		static Dynamic createFunctionBinder;
		static Dynamic &createFunctionBinder_dyn() { return createFunctionBinder;}
};

} // end namespace org
} // end namespace gameplay3d
} // end namespace util

#endif /* INCLUDED_org_gameplay3d_util_FunctionBinder */ 
