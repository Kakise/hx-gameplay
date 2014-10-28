#ifndef INCLUDED_org_gameplay3d__HeightField_HeightFieldArray
#define INCLUDED_org_gameplay3d__HeightField_HeightFieldArray

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/util/PrimitiveArray.h>
HX_DECLARE_CLASS3(org,gameplay3d,_HeightField,HeightFieldArray)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,util,IMutableNativeArray)
HX_DECLARE_CLASS3(org,gameplay3d,util,INativeArray)
HX_DECLARE_CLASS3(org,gameplay3d,util,PrimitiveArray)
namespace org{
namespace gameplay3d{
namespace _HeightField{


class HXCPP_CLASS_ATTRIBUTES  HeightFieldArray_obj : public ::org::gameplay3d::util::PrimitiveArray_obj{
	public:
		typedef ::org::gameplay3d::util::PrimitiveArray_obj super;
		typedef HeightFieldArray_obj OBJ_;
		HeightFieldArray_obj();
		Void __construct(Dynamic nativeObject,int rows,int columns);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< HeightFieldArray_obj > __new(Dynamic nativeObject,int rows,int columns);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HeightFieldArray_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("HeightFieldArray"); }

};

} // end namespace org
} // end namespace gameplay3d
} // end namespace _HeightField

#endif /* INCLUDED_org_gameplay3d__HeightField_HeightFieldArray */ 
