#ifndef INCLUDED_org_gameplay3d_BoundingSphere
#define INCLUDED_org_gameplay3d_BoundingSphere

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
#include <org/gameplay3d/immutable/IBoundingSphere.h>
HX_DECLARE_CLASS2(org,gameplay3d,BoundingSphere)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Ray)
HX_DECLARE_CLASS2(org,gameplay3d,Vector3)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IBoundingBox)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IBoundingSphere)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IFrustum)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IMatrix)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IPlane)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector3)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  BoundingSphere_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef BoundingSphere_obj OBJ_;
		BoundingSphere_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< BoundingSphere_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BoundingSphere_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::org::gameplay3d::intern::INativeBinding_obj *()
			{ return new ::org::gameplay3d::intern::INativeBinding_delegate_< BoundingSphere_obj >(this); }
		inline operator ::org::gameplay3d::immutable::IBoundingSphere_obj *()
			{ return new ::org::gameplay3d::immutable::IBoundingSphere_delegate_< BoundingSphere_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("BoundingSphere"); }

		::org::gameplay3d::Vector3 center;
		virtual Dynamic impersonate( Dynamic nativeObject);

		virtual bool intersects_BBox( ::org::gameplay3d::immutable::IBoundingBox box);
		Dynamic intersects_BBox_dyn();

		virtual bool intersects_BSphr( ::org::gameplay3d::immutable::IBoundingSphere sphere);
		Dynamic intersects_BSphr_dyn();

		virtual bool intersects_Frstm( ::org::gameplay3d::immutable::IFrustum frustum);
		Dynamic intersects_Frstm_dyn();

		virtual Float intersects_Plane( ::org::gameplay3d::immutable::IPlane plane);
		Dynamic intersects_Plane_dyn();

		virtual Float intersects_Ray( ::org::gameplay3d::Ray ray);
		Dynamic intersects_Ray_dyn();

		virtual bool isEmpty( );
		Dynamic isEmpty_dyn();

		virtual Void merge_BBox( ::org::gameplay3d::immutable::IBoundingBox box);
		Dynamic merge_BBox_dyn();

		virtual Void merge_BSphr( ::org::gameplay3d::immutable::IBoundingSphere sphere);
		Dynamic merge_BSphr_dyn();

		virtual Void set_BBox( ::org::gameplay3d::immutable::IBoundingBox box);
		Dynamic set_BBox_dyn();

		virtual Void set_BSphr( ::org::gameplay3d::immutable::IBoundingSphere sphere);
		Dynamic set_BSphr_dyn();

		virtual Void set_V3_Flt( ::org::gameplay3d::immutable::IVector3 center,Float radius);
		Dynamic set_V3_Flt_dyn();

		virtual Void transform( ::org::gameplay3d::immutable::IMatrix matrix);
		Dynamic transform_dyn();

		virtual Float get_radius( );
		Dynamic get_radius_dyn();

		virtual Float set_radius( Float value);
		Dynamic set_radius_dyn();

		static ::org::gameplay3d::BoundingSphere _empty;
		static ::org::gameplay3d::BoundingSphere make( );
		static Dynamic make_dyn();

		static ::org::gameplay3d::BoundingSphere make_BSphr( ::org::gameplay3d::immutable::IBoundingSphere copy);
		static Dynamic make_BSphr_dyn();

		static ::org::gameplay3d::BoundingSphere make_V3_Flt( ::org::gameplay3d::immutable::IVector3 center,Float radius);
		static Dynamic make_V3_Flt_dyn();

		static ::org::gameplay3d::immutable::IBoundingSphere empty( );
		static Dynamic empty_dyn();

		static Dynamic constructNativeObject( );
		static Dynamic constructNativeObject_dyn();

		static Dynamic constructNativeObject_BSphr( ::org::gameplay3d::immutable::IBoundingSphere copy);
		static Dynamic constructNativeObject_BSphr_dyn();

		static Dynamic constructNativeObject_V3_Flt( ::org::gameplay3d::immutable::IVector3 center,Float radius);
		static Dynamic constructNativeObject_V3_Flt_dyn();

		static Dynamic hx_BoundingSphere_Construct;
		static Dynamic &hx_BoundingSphere_Construct_dyn() { return hx_BoundingSphere_Construct;}
		static Dynamic hx_BoundingSphere_Construct_BSphr;
		static Dynamic &hx_BoundingSphere_Construct_BSphr_dyn() { return hx_BoundingSphere_Construct_BSphr;}
		static Dynamic hx_BoundingSphere_Construct_V3_Flt;
		static Dynamic &hx_BoundingSphere_Construct_V3_Flt_dyn() { return hx_BoundingSphere_Construct_V3_Flt;}
		static Dynamic hx_BoundingSphere_static_empty;
		static Dynamic &hx_BoundingSphere_static_empty_dyn() { return hx_BoundingSphere_static_empty;}
		static Dynamic hx_BoundingSphere_intersects_BBox;
		static Dynamic &hx_BoundingSphere_intersects_BBox_dyn() { return hx_BoundingSphere_intersects_BBox;}
		static Dynamic hx_BoundingSphere_intersects_BSphr;
		static Dynamic &hx_BoundingSphere_intersects_BSphr_dyn() { return hx_BoundingSphere_intersects_BSphr;}
		static Dynamic hx_BoundingSphere_intersects_Frstm;
		static Dynamic &hx_BoundingSphere_intersects_Frstm_dyn() { return hx_BoundingSphere_intersects_Frstm;}
		static Dynamic hx_BoundingSphere_intersects_Plane;
		static Dynamic &hx_BoundingSphere_intersects_Plane_dyn() { return hx_BoundingSphere_intersects_Plane;}
		static Dynamic hx_BoundingSphere_intersects_Ray;
		static Dynamic &hx_BoundingSphere_intersects_Ray_dyn() { return hx_BoundingSphere_intersects_Ray;}
		static Dynamic hx_BoundingSphere_isEmpty;
		static Dynamic &hx_BoundingSphere_isEmpty_dyn() { return hx_BoundingSphere_isEmpty;}
		static Dynamic hx_BoundingSphere_merge_BBox;
		static Dynamic &hx_BoundingSphere_merge_BBox_dyn() { return hx_BoundingSphere_merge_BBox;}
		static Dynamic hx_BoundingSphere_merge_BSphr;
		static Dynamic &hx_BoundingSphere_merge_BSphr_dyn() { return hx_BoundingSphere_merge_BSphr;}
		static Dynamic hx_BoundingSphere_set_BBox;
		static Dynamic &hx_BoundingSphere_set_BBox_dyn() { return hx_BoundingSphere_set_BBox;}
		static Dynamic hx_BoundingSphere_set_BSphr;
		static Dynamic &hx_BoundingSphere_set_BSphr_dyn() { return hx_BoundingSphere_set_BSphr;}
		static Dynamic hx_BoundingSphere_set_V3_Flt;
		static Dynamic &hx_BoundingSphere_set_V3_Flt_dyn() { return hx_BoundingSphere_set_V3_Flt;}
		static Dynamic hx_BoundingSphere_transform;
		static Dynamic &hx_BoundingSphere_transform_dyn() { return hx_BoundingSphere_transform;}
		static Dynamic hx_BoundingSphere_property_center_get;
		static Dynamic &hx_BoundingSphere_property_center_get_dyn() { return hx_BoundingSphere_property_center_get;}
		static Dynamic hx_BoundingSphere_property_radius_get;
		static Dynamic &hx_BoundingSphere_property_radius_get_dyn() { return hx_BoundingSphere_property_radius_get;}
		static Dynamic hx_BoundingSphere_property_radius_set;
		static Dynamic &hx_BoundingSphere_property_radius_set_dyn() { return hx_BoundingSphere_property_radius_set;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_BoundingSphere */ 
