#ifndef INCLUDED_org_gameplay3d_Control_State
#define INCLUDED_org_gameplay3d_Control_State

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(org,gameplay3d,Control_State)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  Control_State_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Control_State_obj OBJ_;
		Control_State_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Control_State_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Control_State_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Control_State"); }

		static int NORMAL;
		static int FOCUS;
		static int ACTIVE;
		static int DISABLED;
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_Control_State */ 
