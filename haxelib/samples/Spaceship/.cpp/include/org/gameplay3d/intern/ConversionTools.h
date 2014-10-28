#ifndef INCLUDED_org_gameplay3d_intern_ConversionTools
#define INCLUDED_org_gameplay3d_intern_ConversionTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(org,gameplay3d,AnimationTarget)
HX_DECLARE_CLASS2(org,gameplay3d,Control)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Matrix)
HX_DECLARE_CLASS2(org,gameplay3d,Node)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS2(org,gameplay3d,ScriptTarget)
HX_DECLARE_CLASS2(org,gameplay3d,Transform)
HX_DECLARE_CLASS2(org,gameplay3d,Vector2)
HX_DECLARE_CLASS2(org,gameplay3d,Vector3)
HX_DECLARE_CLASS2(org,gameplay3d,Vector4)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IMatrix)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector2)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector3)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector4)
HX_DECLARE_CLASS3(org,gameplay3d,intern,ConversionTools)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,AnimationTarget_ScriptTarget)
namespace org{
namespace gameplay3d{
namespace intern{


class HXCPP_CLASS_ATTRIBUTES  ConversionTools_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ConversionTools_obj OBJ_;
		ConversionTools_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ConversionTools_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ConversionTools_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("ConversionTools"); }

		static Array< ::Dynamic > extractVector2Array( Dynamic array);
		static Dynamic extractVector2Array_dyn();

		static Array< ::Dynamic > extractVector3Array( Dynamic array);
		static Dynamic extractVector3Array_dyn();

		static Array< ::Dynamic > extractVector4Array( Dynamic array);
		static Dynamic extractVector4Array_dyn();

		static Array< ::Dynamic > extractMatrixArray( Dynamic array);
		static Dynamic extractMatrixArray_dyn();

		static Array< ::Dynamic > extractNodeArray( Dynamic array);
		static Dynamic extractNodeArray_dyn();

		static Array< ::Dynamic > extractControlArray( Dynamic array);
		static Dynamic extractControlArray_dyn();

		static Dynamic insertArray( Dynamic array);
		static Dynamic insertArray_dyn();

};

} // end namespace org
} // end namespace gameplay3d
} // end namespace intern

#endif /* INCLUDED_org_gameplay3d_intern_ConversionTools */ 
