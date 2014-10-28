#ifndef INCLUDED_org_gameplay3d_intern_NativeBinding
#define INCLUDED_org_gameplay3d_intern_NativeBinding

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/intern/INativeBinding.h>
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
namespace org{
namespace gameplay3d{
namespace intern{


class HXCPP_CLASS_ATTRIBUTES  NativeBinding_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef NativeBinding_obj OBJ_;
		NativeBinding_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< NativeBinding_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NativeBinding_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::org::gameplay3d::intern::INativeBinding_obj *()
			{ return new ::org::gameplay3d::intern::INativeBinding_delegate_< NativeBinding_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("NativeBinding"); }

		Dynamic nativeObject;
		virtual Dynamic impersonate( Dynamic nativeObject);
		Dynamic impersonate_dyn();

		virtual bool isEquivalentTo( ::org::gameplay3d::intern::INativeBinding object);
		Dynamic isEquivalentTo_dyn();

		static Dynamic native( ::org::gameplay3d::intern::INativeBinding object);
		static Dynamic native_dyn();

		static Dynamic testEquivalence;
};

} // end namespace org
} // end namespace gameplay3d
} // end namespace intern

#endif /* INCLUDED_org_gameplay3d_intern_NativeBinding */ 
