#ifndef INCLUDED_org_gameplay3d_Plane
#define INCLUDED_org_gameplay3d_Plane

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
#include <org/gameplay3d/immutable/IPlane.h>
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Plane)
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


class HXCPP_CLASS_ATTRIBUTES  Plane_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef Plane_obj OBJ_;
		Plane_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Plane_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Plane_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::org::gameplay3d::immutable::IPlane_obj *()
			{ return new ::org::gameplay3d::immutable::IPlane_delegate_< Plane_obj >(this); }
		inline operator ::org::gameplay3d::intern::INativeBinding_obj *()
			{ return new ::org::gameplay3d::intern::INativeBinding_delegate_< Plane_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("Plane"); }

		::org::gameplay3d::Vector3 _normal;
		virtual Float distance( ::org::gameplay3d::immutable::IVector3 point);
		Dynamic distance_dyn();

		virtual Float getDistance( );
		Dynamic getDistance_dyn();

		virtual ::org::gameplay3d::immutable::IVector3 getNormal( );
		Dynamic getNormal_dyn();

		virtual Float intersects_BBox( ::org::gameplay3d::immutable::IBoundingBox box);
		Dynamic intersects_BBox_dyn();

		virtual Float intersects_BSphr( ::org::gameplay3d::immutable::IBoundingSphere sphere);
		Dynamic intersects_BSphr_dyn();

		virtual Float intersects_Frstm( ::org::gameplay3d::immutable::IFrustum frustum);
		Dynamic intersects_Frstm_dyn();

		virtual Float intersects_Plane( ::org::gameplay3d::immutable::IPlane plane);
		Dynamic intersects_Plane_dyn();

		virtual Float intersects_Ray( ::org::gameplay3d::Ray ray);
		Dynamic intersects_Ray_dyn();

		virtual bool isParallel( ::org::gameplay3d::immutable::IPlane plane);
		Dynamic isParallel_dyn();

		virtual Void set_Plane( ::org::gameplay3d::immutable::IPlane plane);
		Dynamic set_Plane_dyn();

		virtual Void set_V3_Flt( ::org::gameplay3d::immutable::IVector3 normal,Float distance);
		Dynamic set_V3_Flt_dyn();

		virtual Void setDistance( Float distance);
		Dynamic setDistance_dyn();

		virtual Void setNormal_V3( ::org::gameplay3d::immutable::IVector3 normal);
		Dynamic setNormal_V3_dyn();

		virtual Void setNormal_FltX3( Float x,Float y,Float z);
		Dynamic setNormal_FltX3_dyn();

		virtual Void transform( ::org::gameplay3d::immutable::IMatrix matrix);
		Dynamic transform_dyn();

		static int INTERSECTS_INTERSECTING;
		static int INTERSECTS_FRONT;
		static int INTERSECTS_BACK;
		static ::org::gameplay3d::Plane make( );
		static Dynamic make_dyn();

		static ::org::gameplay3d::Plane make_Plane( ::org::gameplay3d::immutable::IPlane copy);
		static Dynamic make_Plane_dyn();

		static ::org::gameplay3d::Plane make_V3_Flt( ::org::gameplay3d::immutable::IVector3 normal,Float distance);
		static Dynamic make_V3_Flt_dyn();

		static ::org::gameplay3d::Plane make_FltX4( Float normalX,Float normalY,Float normalZ,Float distance);
		static Dynamic make_FltX4_dyn();

		static Void intersection( ::org::gameplay3d::immutable::IPlane p1,::org::gameplay3d::immutable::IPlane p2,::org::gameplay3d::immutable::IPlane p3,::org::gameplay3d::Vector3 point);
		static Dynamic intersection_dyn();

		static Dynamic constructNativeObject( );
		static Dynamic constructNativeObject_dyn();

		static Dynamic constructNativeObject_Plane( ::org::gameplay3d::immutable::IPlane copy);
		static Dynamic constructNativeObject_Plane_dyn();

		static Dynamic constructNativeObject_V3_Flt( ::org::gameplay3d::immutable::IVector3 normal,Float distance);
		static Dynamic constructNativeObject_V3_Flt_dyn();

		static Dynamic constructNativeObject_FltX4( Float normalX,Float normalY,Float normalZ,Float distance);
		static Dynamic constructNativeObject_FltX4_dyn();

		static Dynamic hx_Plane_Construct;
		static Dynamic &hx_Plane_Construct_dyn() { return hx_Plane_Construct;}
		static Dynamic hx_Plane_Construct_Plane;
		static Dynamic &hx_Plane_Construct_Plane_dyn() { return hx_Plane_Construct_Plane;}
		static Dynamic hx_Plane_Construct_V3_Flt;
		static Dynamic &hx_Plane_Construct_V3_Flt_dyn() { return hx_Plane_Construct_V3_Flt;}
		static Dynamic hx_Plane_Construct_FltX4;
		static Dynamic &hx_Plane_Construct_FltX4_dyn() { return hx_Plane_Construct_FltX4;}
		static Dynamic hx_Plane_distance;
		static Dynamic &hx_Plane_distance_dyn() { return hx_Plane_distance;}
		static Dynamic hx_Plane_getDistance;
		static Dynamic &hx_Plane_getDistance_dyn() { return hx_Plane_getDistance;}
		static Dynamic hx_Plane_getNormal;
		static Dynamic &hx_Plane_getNormal_dyn() { return hx_Plane_getNormal;}
		static Dynamic hx_Plane_static_intersection;
		static Dynamic &hx_Plane_static_intersection_dyn() { return hx_Plane_static_intersection;}
		static Dynamic hx_Plane_intersects_BBox;
		static Dynamic &hx_Plane_intersects_BBox_dyn() { return hx_Plane_intersects_BBox;}
		static Dynamic hx_Plane_intersects_BSphr;
		static Dynamic &hx_Plane_intersects_BSphr_dyn() { return hx_Plane_intersects_BSphr;}
		static Dynamic hx_Plane_intersects_Frstm;
		static Dynamic &hx_Plane_intersects_Frstm_dyn() { return hx_Plane_intersects_Frstm;}
		static Dynamic hx_Plane_intersects_Plane;
		static Dynamic &hx_Plane_intersects_Plane_dyn() { return hx_Plane_intersects_Plane;}
		static Dynamic hx_Plane_intersects_Ray;
		static Dynamic &hx_Plane_intersects_Ray_dyn() { return hx_Plane_intersects_Ray;}
		static Dynamic hx_Plane_isParallel;
		static Dynamic &hx_Plane_isParallel_dyn() { return hx_Plane_isParallel;}
		static Dynamic hx_Plane_set_Plane;
		static Dynamic &hx_Plane_set_Plane_dyn() { return hx_Plane_set_Plane;}
		static Dynamic hx_Plane_set_V3_Flt;
		static Dynamic &hx_Plane_set_V3_Flt_dyn() { return hx_Plane_set_V3_Flt;}
		static Dynamic hx_Plane_setDistance;
		static Dynamic &hx_Plane_setDistance_dyn() { return hx_Plane_setDistance;}
		static Dynamic hx_Plane_setNormal_V3;
		static Dynamic &hx_Plane_setNormal_V3_dyn() { return hx_Plane_setNormal_V3;}
		static Dynamic hx_Plane_setNormal_FltX3;
		static Dynamic &hx_Plane_setNormal_FltX3_dyn() { return hx_Plane_setNormal_FltX3;}
		static Dynamic hx_Plane_transform;
		static Dynamic &hx_Plane_transform_dyn() { return hx_Plane_transform;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_Plane */ 
