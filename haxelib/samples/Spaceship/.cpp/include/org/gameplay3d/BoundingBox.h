#ifndef INCLUDED_org_gameplay3d_BoundingBox
#define INCLUDED_org_gameplay3d_BoundingBox

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
#include <org/gameplay3d/immutable/IBoundingBox.h>
HX_DECLARE_CLASS2(org,gameplay3d,BoundingBox)
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
HX_DECLARE_CLASS3(org,gameplay3d,util,INativeArray)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  BoundingBox_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef BoundingBox_obj OBJ_;
		BoundingBox_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< BoundingBox_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BoundingBox_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::org::gameplay3d::intern::INativeBinding_obj *()
			{ return new ::org::gameplay3d::intern::INativeBinding_delegate_< BoundingBox_obj >(this); }
		inline operator ::org::gameplay3d::immutable::IBoundingBox_obj *()
			{ return new ::org::gameplay3d::immutable::IBoundingBox_delegate_< BoundingBox_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("BoundingBox"); }

		::org::gameplay3d::Vector3 min;
		::org::gameplay3d::Vector3 max;
		::org::gameplay3d::Vector3 _center;
		virtual Dynamic impersonate( Dynamic nativeObject);

		virtual ::org::gameplay3d::Vector3 getCenter( );
		Dynamic getCenter_dyn();

		virtual Void getCenter_V3( ::org::gameplay3d::Vector3 dst);
		Dynamic getCenter_V3_dyn();

		virtual Void getCorners( ::org::gameplay3d::util::INativeArray dst);
		Dynamic getCorners_dyn();

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

		virtual Void set_V3X2( ::org::gameplay3d::immutable::IVector3 min,::org::gameplay3d::immutable::IVector3 max);
		Dynamic set_V3X2_dyn();

		virtual Void set_FltX6( Float minX,Float minY,Float minZ,Float maxX,Float maxY,Float maxZ);
		Dynamic set_FltX6_dyn();

		virtual Void transform( ::org::gameplay3d::immutable::IMatrix matrix);
		Dynamic transform_dyn();

		static ::org::gameplay3d::BoundingBox _empty;
		static ::org::gameplay3d::BoundingBox make( );
		static Dynamic make_dyn();

		static ::org::gameplay3d::BoundingBox make_BBox( ::org::gameplay3d::immutable::IBoundingBox copy);
		static Dynamic make_BBox_dyn();

		static ::org::gameplay3d::BoundingBox make_V3X2( ::org::gameplay3d::immutable::IVector3 min,::org::gameplay3d::immutable::IVector3 max);
		static Dynamic make_V3X2_dyn();

		static ::org::gameplay3d::BoundingBox make_FltX6( Float minX,Float minY,Float minZ,Float maxX,Float maxY,Float maxZ);
		static Dynamic make_FltX6_dyn();

		static ::org::gameplay3d::immutable::IBoundingBox empty( );
		static Dynamic empty_dyn();

		static Dynamic constructNativeObject( );
		static Dynamic constructNativeObject_dyn();

		static Dynamic constructNativeObject_BBox( ::org::gameplay3d::immutable::IBoundingBox copy);
		static Dynamic constructNativeObject_BBox_dyn();

		static Dynamic constructNativeObject_V3X2( ::org::gameplay3d::immutable::IVector3 min,::org::gameplay3d::immutable::IVector3 max);
		static Dynamic constructNativeObject_V3X2_dyn();

		static Dynamic constructNativeObject_FltX6( Float minX,Float minY,Float minZ,Float maxX,Float maxY,Float maxZ);
		static Dynamic constructNativeObject_FltX6_dyn();

		static Dynamic hx_BoundingBox_Construct;
		static Dynamic &hx_BoundingBox_Construct_dyn() { return hx_BoundingBox_Construct;}
		static Dynamic hx_BoundingBox_Construct_BBox;
		static Dynamic &hx_BoundingBox_Construct_BBox_dyn() { return hx_BoundingBox_Construct_BBox;}
		static Dynamic hx_BoundingBox_Construct_V3X2;
		static Dynamic &hx_BoundingBox_Construct_V3X2_dyn() { return hx_BoundingBox_Construct_V3X2;}
		static Dynamic hx_BoundingBox_Construct_FltX6;
		static Dynamic &hx_BoundingBox_Construct_FltX6_dyn() { return hx_BoundingBox_Construct_FltX6;}
		static Dynamic hx_BoundingBox_static_empty;
		static Dynamic &hx_BoundingBox_static_empty_dyn() { return hx_BoundingBox_static_empty;}
		static Dynamic hx_BoundingBox_getCenter;
		static Dynamic &hx_BoundingBox_getCenter_dyn() { return hx_BoundingBox_getCenter;}
		static Dynamic hx_BoundingBox_getCenter_V3;
		static Dynamic &hx_BoundingBox_getCenter_V3_dyn() { return hx_BoundingBox_getCenter_V3;}
		static Dynamic hx_BoundingBox_getCorners;
		static Dynamic &hx_BoundingBox_getCorners_dyn() { return hx_BoundingBox_getCorners;}
		static Dynamic hx_BoundingBox_intersects_BBox;
		static Dynamic &hx_BoundingBox_intersects_BBox_dyn() { return hx_BoundingBox_intersects_BBox;}
		static Dynamic hx_BoundingBox_intersects_BSphr;
		static Dynamic &hx_BoundingBox_intersects_BSphr_dyn() { return hx_BoundingBox_intersects_BSphr;}
		static Dynamic hx_BoundingBox_intersects_Frstm;
		static Dynamic &hx_BoundingBox_intersects_Frstm_dyn() { return hx_BoundingBox_intersects_Frstm;}
		static Dynamic hx_BoundingBox_intersects_Plane;
		static Dynamic &hx_BoundingBox_intersects_Plane_dyn() { return hx_BoundingBox_intersects_Plane;}
		static Dynamic hx_BoundingBox_intersects_Ray;
		static Dynamic &hx_BoundingBox_intersects_Ray_dyn() { return hx_BoundingBox_intersects_Ray;}
		static Dynamic hx_BoundingBox_isEmpty;
		static Dynamic &hx_BoundingBox_isEmpty_dyn() { return hx_BoundingBox_isEmpty;}
		static Dynamic hx_BoundingBox_merge_BBox;
		static Dynamic &hx_BoundingBox_merge_BBox_dyn() { return hx_BoundingBox_merge_BBox;}
		static Dynamic hx_BoundingBox_merge_BSphr;
		static Dynamic &hx_BoundingBox_merge_BSphr_dyn() { return hx_BoundingBox_merge_BSphr;}
		static Dynamic hx_BoundingBox_set_BBox;
		static Dynamic &hx_BoundingBox_set_BBox_dyn() { return hx_BoundingBox_set_BBox;}
		static Dynamic hx_BoundingBox_set_BSphr;
		static Dynamic &hx_BoundingBox_set_BSphr_dyn() { return hx_BoundingBox_set_BSphr;}
		static Dynamic hx_BoundingBox_set_V3X2;
		static Dynamic &hx_BoundingBox_set_V3X2_dyn() { return hx_BoundingBox_set_V3X2;}
		static Dynamic hx_BoundingBox_set_FltX6;
		static Dynamic &hx_BoundingBox_set_FltX6_dyn() { return hx_BoundingBox_set_FltX6;}
		static Dynamic hx_BoundingBox_transform;
		static Dynamic &hx_BoundingBox_transform_dyn() { return hx_BoundingBox_transform;}
		static Dynamic hx_BoundingBox_property_min_get;
		static Dynamic &hx_BoundingBox_property_min_get_dyn() { return hx_BoundingBox_property_min_get;}
		static Dynamic hx_BoundingBox_property_max_get;
		static Dynamic &hx_BoundingBox_property_max_get_dyn() { return hx_BoundingBox_property_max_get;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_BoundingBox */ 
