#ifndef INCLUDED_cpp_vm_WeakRef
#define INCLUDED_cpp_vm_WeakRef

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(cpp,vm,WeakRef)
namespace cpp{
namespace vm{


class HXCPP_CLASS_ATTRIBUTES  WeakRef_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef WeakRef_obj OBJ_;
		WeakRef_obj();
		Void __construct(Dynamic inObject,hx::Null< bool >  __o_inHard);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< WeakRef_obj > __new(Dynamic inObject,hx::Null< bool >  __o_inHard);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WeakRef_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("WeakRef"); }

		Dynamic ref;
		bool hardRef;
		virtual Dynamic get( );
		Dynamic get_dyn();

		virtual Dynamic set( Dynamic inObject);
		Dynamic set_dyn();

};

} // end namespace cpp
} // end namespace vm

#endif /* INCLUDED_cpp_vm_WeakRef */ 
