#ifndef INCLUDED_org_gameplay3d_Frustum
#define INCLUDED_org_gameplay3d_Frustum

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
#include <org/gameplay3d/immutable/IFrustum.h>
HX_DECLARE_CLASS2(org,gameplay3d,Frustum)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Matrix)
HX_DECLARE_CLASS2(org,gameplay3d,Plane)
HX_DECLARE_CLASS2(org,gameplay3d,Ray)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IBoundingBox)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IBoundingSphere)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IFrustum)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IMatrix)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IPlane)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector3)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,util,IMutableNativeArray)
HX_DECLARE_CLASS3(org,gameplay3d,util,INativeArray)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  Frustum_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef Frustum_obj OBJ_;
		Frustum_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Frustum_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Frustum_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::org::gameplay3d::intern::INativeBinding_obj *()
			{ return new ::org::gameplay3d::intern::INativeBinding_delegate_< Frustum_obj >(this); }
		inline operator ::org::gameplay3d::immutable::IFrustum_obj *()
			{ return new ::org::gameplay3d::immutable::IFrustum_delegate_< Frustum_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("Frustum"); }

		::org::gameplay3d::Plane _top;
		::org::gameplay3d::Plane _bottom;
		::org::gameplay3d::Plane _left;
		::org::gameplay3d::Plane _right;
		::org::gameplay3d::Plane _far;
		::org::gameplay3d::Plane _near;
		virtual ::org::gameplay3d::immutable::IPlane getBottom( );
		Dynamic getBottom_dyn();

		virtual Void getCorners( ::org::gameplay3d::util::IMutableNativeArray corners);
		Dynamic getCorners_dyn();

		virtual ::org::gameplay3d::immutable::IPlane getFar( );
		Dynamic getFar_dyn();

		virtual ::org::gameplay3d::immutable::IPlane getLeft( );
		Dynamic getLeft_dyn();

		virtual Void getMatrix( ::org::gameplay3d::Matrix dst);
		Dynamic getMatrix_dyn();

		virtual ::org::gameplay3d::immutable::IPlane getNear( );
		Dynamic getNear_dyn();

		virtual ::org::gameplay3d::immutable::IPlane getRight( );
		Dynamic getRight_dyn();

		virtual ::org::gameplay3d::immutable::IPlane getTop( );
		Dynamic getTop_dyn();

		virtual bool intersects_BBox( ::org::gameplay3d::immutable::IBoundingBox box);
		Dynamic intersects_BBox_dyn();

		virtual bool intersects_BSphr( ::org::gameplay3d::immutable::IBoundingSphere sphere);
		Dynamic intersects_BSphr_dyn();

		virtual bool intersects_V3( ::org::gameplay3d::immutable::IVector3 point);
		Dynamic intersects_V3_dyn();

		virtual bool intersects_FltX3( Float x,Float y,Float z);
		Dynamic intersects_FltX3_dyn();

		virtual Float intersects_Plane( ::org::gameplay3d::immutable::IPlane plane);
		Dynamic intersects_Plane_dyn();

		virtual Float intersects_Ray( ::org::gameplay3d::Ray ray);
		Dynamic intersects_Ray_dyn();

		virtual Void set_Frstm( ::org::gameplay3d::immutable::IFrustum frustum);
		Dynamic set_Frstm_dyn();

		virtual Void set_Mat( ::org::gameplay3d::immutable::IMatrix matrix);
		Dynamic set_Mat_dyn();

		static ::org::gameplay3d::Frustum make( );
		static Dynamic make_dyn();

		static ::org::gameplay3d::Frustum make_Frstm( ::org::gameplay3d::immutable::IFrustum frustum);
		static Dynamic make_Frstm_dyn();

		static ::org::gameplay3d::Frustum make_Mat( ::org::gameplay3d::immutable::IMatrix matrix);
		static Dynamic make_Mat_dyn();

		static Dynamic constructNativeObject( );
		static Dynamic constructNativeObject_dyn();

		static Dynamic constructNativeObject_Frstm( ::org::gameplay3d::immutable::IFrustum frustum);
		static Dynamic constructNativeObject_Frstm_dyn();

		static Dynamic constructNativeObject_Mat( ::org::gameplay3d::immutable::IMatrix matrix);
		static Dynamic constructNativeObject_Mat_dyn();

		static Dynamic hx_Frustum_Construct;
		static Dynamic &hx_Frustum_Construct_dyn() { return hx_Frustum_Construct;}
		static Dynamic hx_Frustum_Construct_Frstm;
		static Dynamic &hx_Frustum_Construct_Frstm_dyn() { return hx_Frustum_Construct_Frstm;}
		static Dynamic hx_Frustum_Construct_Mat;
		static Dynamic &hx_Frustum_Construct_Mat_dyn() { return hx_Frustum_Construct_Mat;}
		static Dynamic hx_Frustum_getBottom;
		static Dynamic &hx_Frustum_getBottom_dyn() { return hx_Frustum_getBottom;}
		static Dynamic hx_Frustum_getCorners;
		static Dynamic &hx_Frustum_getCorners_dyn() { return hx_Frustum_getCorners;}
		static Dynamic hx_Frustum_getFar;
		static Dynamic &hx_Frustum_getFar_dyn() { return hx_Frustum_getFar;}
		static Dynamic hx_Frustum_getLeft;
		static Dynamic &hx_Frustum_getLeft_dyn() { return hx_Frustum_getLeft;}
		static Dynamic hx_Frustum_getMatrix;
		static Dynamic &hx_Frustum_getMatrix_dyn() { return hx_Frustum_getMatrix;}
		static Dynamic hx_Frustum_getNear;
		static Dynamic &hx_Frustum_getNear_dyn() { return hx_Frustum_getNear;}
		static Dynamic hx_Frustum_getRight;
		static Dynamic &hx_Frustum_getRight_dyn() { return hx_Frustum_getRight;}
		static Dynamic hx_Frustum_getTop;
		static Dynamic &hx_Frustum_getTop_dyn() { return hx_Frustum_getTop;}
		static Dynamic hx_Frustum_intersects_BBox;
		static Dynamic &hx_Frustum_intersects_BBox_dyn() { return hx_Frustum_intersects_BBox;}
		static Dynamic hx_Frustum_intersects_BSphr;
		static Dynamic &hx_Frustum_intersects_BSphr_dyn() { return hx_Frustum_intersects_BSphr;}
		static Dynamic hx_Frustum_intersects_V3;
		static Dynamic &hx_Frustum_intersects_V3_dyn() { return hx_Frustum_intersects_V3;}
		static Dynamic hx_Frustum_intersects_FltX3;
		static Dynamic &hx_Frustum_intersects_FltX3_dyn() { return hx_Frustum_intersects_FltX3;}
		static Dynamic hx_Frustum_intersects_Plane;
		static Dynamic &hx_Frustum_intersects_Plane_dyn() { return hx_Frustum_intersects_Plane;}
		static Dynamic hx_Frustum_intersects_Ray;
		static Dynamic &hx_Frustum_intersects_Ray_dyn() { return hx_Frustum_intersects_Ray;}
		static Dynamic hx_Frustum_set_Frstm;
		static Dynamic &hx_Frustum_set_Frstm_dyn() { return hx_Frustum_set_Frstm;}
		static Dynamic hx_Frustum_set_Mat;
		static Dynamic &hx_Frustum_set_Mat_dyn() { return hx_Frustum_set_Mat;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_Frustum */ 
