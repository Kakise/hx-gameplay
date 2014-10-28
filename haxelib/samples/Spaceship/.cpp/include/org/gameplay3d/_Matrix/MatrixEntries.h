#ifndef INCLUDED_org_gameplay3d__Matrix_MatrixEntries
#define INCLUDED_org_gameplay3d__Matrix_MatrixEntries

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/util/PrimitiveArray.h>
HX_DECLARE_CLASS3(org,gameplay3d,_Matrix,MatrixEntries)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,util,IMutableNativeArray)
HX_DECLARE_CLASS3(org,gameplay3d,util,INativeArray)
HX_DECLARE_CLASS3(org,gameplay3d,util,PrimitiveArray)
namespace org{
namespace gameplay3d{
namespace _Matrix{


class HXCPP_CLASS_ATTRIBUTES  MatrixEntries_obj : public ::org::gameplay3d::util::PrimitiveArray_obj{
	public:
		typedef ::org::gameplay3d::util::PrimitiveArray_obj super;
		typedef MatrixEntries_obj OBJ_;
		MatrixEntries_obj();
		Void __construct(Dynamic nativeObject);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< MatrixEntries_obj > __new(Dynamic nativeObject);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MatrixEntries_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("MatrixEntries"); }

};

} // end namespace org
} // end namespace gameplay3d
} // end namespace _Matrix

#endif /* INCLUDED_org_gameplay3d__Matrix_MatrixEntries */ 
