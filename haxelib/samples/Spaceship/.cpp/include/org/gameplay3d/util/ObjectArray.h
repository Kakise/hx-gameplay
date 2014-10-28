#ifndef INCLUDED_org_gameplay3d_util_ObjectArray
#define INCLUDED_org_gameplay3d_util_ObjectArray

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/intern/NativeBinding.h>
#include <org/gameplay3d/intern/INativeBinding.h>
#include <org/gameplay3d/util/INativeArray.h>
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,util,INativeArray)
HX_DECLARE_CLASS3(org,gameplay3d,util,ObjectArray)
namespace org{
namespace gameplay3d{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  ObjectArray_obj : public ::org::gameplay3d::intern::NativeBinding_obj{
	public:
		typedef ::org::gameplay3d::intern::NativeBinding_obj super;
		typedef ObjectArray_obj OBJ_;
		ObjectArray_obj();
		Void __construct(::Class classObj,Dynamic nativeObject,int length);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ObjectArray_obj > __new(::Class classObj,Dynamic nativeObject,int length);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ObjectArray_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::org::gameplay3d::intern::INativeBinding_obj *()
			{ return new ::org::gameplay3d::intern::INativeBinding_delegate_< ObjectArray_obj >(this); }
		inline operator ::org::gameplay3d::util::INativeArray_obj *()
			{ return new ::org::gameplay3d::util::INativeArray_delegate_< ObjectArray_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("ObjectArray"); }

		int length;
		Dynamic objects;
		virtual Dynamic getAt( int index);
		Dynamic getAt_dyn();

};

} // end namespace org
} // end namespace gameplay3d
} // end namespace util

#endif /* INCLUDED_org_gameplay3d_util_ObjectArray */ 
