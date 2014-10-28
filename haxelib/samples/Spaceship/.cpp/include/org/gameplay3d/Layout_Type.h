#ifndef INCLUDED_org_gameplay3d_Layout_Type
#define INCLUDED_org_gameplay3d_Layout_Type

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(org,gameplay3d,Layout_Type)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  Layout_Type_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Layout_Type_obj OBJ_;
		Layout_Type_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Layout_Type_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Layout_Type_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Layout_Type"); }

		static int LAYOUT_FLOW;
		static int LAYOUT_VERTICAL;
		static int LAYOUT_ABSOLUTE;
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_Layout_Type */ 
