#ifndef INCLUDED_org_gameplay3d_Font_Justify
#define INCLUDED_org_gameplay3d_Font_Justify

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(org,gameplay3d,Font_Justify)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  Font_Justify_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Font_Justify_obj OBJ_;
		Font_Justify_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Font_Justify_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Font_Justify_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Font_Justify"); }

		static int ALIGN_LEFT;
		static int ALIGN_HCENTER;
		static int ALIGN_RIGHT;
		static int ALIGN_TOP;
		static int ALIGN_VCENTER;
		static int ALIGN_BOTTOM;
		static int ALIGN_TOP_LEFT;
		static int ALIGN_VCENTER_LEFT;
		static int ALIGN_BOTTOM_LEFT;
		static int ALIGN_TOP_HCENTER;
		static int ALIGN_VCENTER_HCENTER;
		static int ALIGN_BOTTOM_HCENTER;
		static int ALIGN_TOP_RIGHT;
		static int ALIGN_VCENTER_RIGHT;
		static int ALIGN_BOTTOM_RIGHT;
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_Font_Justify */ 
