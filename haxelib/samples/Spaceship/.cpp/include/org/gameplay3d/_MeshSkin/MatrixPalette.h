#ifndef INCLUDED_org_gameplay3d__MeshSkin_MatrixPalette
#define INCLUDED_org_gameplay3d__MeshSkin_MatrixPalette

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/util/ObjectArray.h>
HX_DECLARE_CLASS3(org,gameplay3d,_MeshSkin,MatrixPalette)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,util,INativeArray)
HX_DECLARE_CLASS3(org,gameplay3d,util,ObjectArray)
namespace org{
namespace gameplay3d{
namespace _MeshSkin{


class HXCPP_CLASS_ATTRIBUTES  MatrixPalette_obj : public ::org::gameplay3d::util::ObjectArray_obj{
	public:
		typedef ::org::gameplay3d::util::ObjectArray_obj super;
		typedef MatrixPalette_obj OBJ_;
		MatrixPalette_obj();
		Void __construct(Dynamic nativeObject,int length);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< MatrixPalette_obj > __new(Dynamic nativeObject,int length);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MatrixPalette_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("MatrixPalette"); }

};

} // end namespace org
} // end namespace gameplay3d
} // end namespace _MeshSkin

#endif /* INCLUDED_org_gameplay3d__MeshSkin_MatrixPalette */ 
