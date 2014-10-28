#ifndef INCLUDED_org_gameplay3d_Texture_Format
#define INCLUDED_org_gameplay3d_Texture_Format

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(org,gameplay3d,Texture_Format)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  Texture_Format_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Texture_Format_obj OBJ_;
		Texture_Format_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Texture_Format_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Texture_Format_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Texture_Format"); }

		static int UNKNOWN;
		static int RGB;
		static int RGBA;
		static int ALPHA;
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_Texture_Format */ 
