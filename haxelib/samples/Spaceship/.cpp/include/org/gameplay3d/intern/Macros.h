#ifndef INCLUDED_org_gameplay3d_intern_Macros
#define INCLUDED_org_gameplay3d_intern_Macros

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(org,gameplay3d,intern,Macros)
namespace org{
namespace gameplay3d{
namespace intern{


class HXCPP_CLASS_ATTRIBUTES  Macros_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Macros_obj OBJ_;
		Macros_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Macros_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Macros_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Macros"); }

};

} // end namespace org
} // end namespace gameplay3d
} // end namespace intern

#endif /* INCLUDED_org_gameplay3d_intern_Macros */ 
