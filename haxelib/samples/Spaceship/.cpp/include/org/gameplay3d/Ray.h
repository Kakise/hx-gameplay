#ifndef INCLUDED_org_gameplay3d_Ray
#define INCLUDED_org_gameplay3d_Ray

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
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


class HXCPP_CLASS_ATTRIBUTES  Ray_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef Ray_obj OBJ_;
		Ray_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Ray_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Ray_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Ray"); }

		::org::gameplay3d::Vector3 _direction;
		::org::gameplay3d::Vector3 _origin;
		virtual ::org::gameplay3d::immutable::IVector3 getDirection( );
		Dynamic getDirection_dyn();

		virtual ::org::gameplay3d::immutable::IVector3 getOrigin( );
		Dynamic getOrigin_dyn();

		virtual Float intersects_BBox( ::org::gameplay3d::immutable::IBoundingBox box);
		Dynamic intersects_BBox_dyn();

		virtual Float intersects_BSphr( ::org::gameplay3d::immutable::IBoundingSphere sphere);
		Dynamic intersects_BSphr_dyn();

		virtual Float intersects_Frstm( ::org::gameplay3d::immutable::IFrustum frustum);
		Dynamic intersects_Frstm_dyn();

		virtual Float intersects_Plane( ::org::gameplay3d::immutable::IPlane plane);
		Dynamic intersects_Plane_dyn();

		virtual Void set_Ray( ::org::gameplay3d::Ray ray);
		Dynamic set_Ray_dyn();

		virtual Void set_V3X2( ::org::gameplay3d::immutable::IVector3 origin,::org::gameplay3d::immutable::IVector3 direction);
		Dynamic set_V3X2_dyn();

		virtual Void setDirection_V3( ::org::gameplay3d::immutable::IVector3 direction);
		Dynamic setDirection_V3_dyn();

		virtual Void setDirection_FltX3( Float x,Float y,Float z);
		Dynamic setDirection_FltX3_dyn();

		virtual Void setOrigin_V3( ::org::gameplay3d::immutable::IVector3 origin);
		Dynamic setOrigin_V3_dyn();

		virtual Void setOrigin_FltX3( Float x,Float y,Float z);
		Dynamic setOrigin_FltX3_dyn();

		virtual Void transform( ::org::gameplay3d::immutable::IMatrix matrix);
		Dynamic transform_dyn();

		static int INTERSECTS_NONE;
		static ::org::gameplay3d::Ray make( );
		static Dynamic make_dyn();

		static ::org::gameplay3d::Ray make_Ray( ::org::gameplay3d::Ray copy);
		static Dynamic make_Ray_dyn();

		static ::org::gameplay3d::Ray make_V3X2( ::org::gameplay3d::immutable::IVector3 origin,::org::gameplay3d::immutable::IVector3 direction);
		static Dynamic make_V3X2_dyn();

		static ::org::gameplay3d::Ray make_FltX6( Float originX,Float originY,Float originZ,Float dirX,Float dirY,Float dirZ);
		static Dynamic make_FltX6_dyn();

		static Dynamic constructNativeObject( );
		static Dynamic constructNativeObject_dyn();

		static Dynamic constructNativeObject_Ray( ::org::gameplay3d::Ray copy);
		static Dynamic constructNativeObject_Ray_dyn();

		static Dynamic constructNativeObject_V3X2( ::org::gameplay3d::immutable::IVector3 origin,::org::gameplay3d::immutable::IVector3 direction);
		static Dynamic constructNativeObject_V3X2_dyn();

		static Dynamic constructNativeObject_FltX6( Float originX,Float originY,Float originZ,Float dirX,Float dirY,Float dirZ);
		static Dynamic constructNativeObject_FltX6_dyn();

		static Dynamic hx_Ray_Construct;
		static Dynamic &hx_Ray_Construct_dyn() { return hx_Ray_Construct;}
		static Dynamic hx_Ray_Construct_Ray;
		static Dynamic &hx_Ray_Construct_Ray_dyn() { return hx_Ray_Construct_Ray;}
		static Dynamic hx_Ray_Construct_V3X2;
		static Dynamic &hx_Ray_Construct_V3X2_dyn() { return hx_Ray_Construct_V3X2;}
		static Dynamic hx_Ray_Construct_FltX6;
		static Dynamic &hx_Ray_Construct_FltX6_dyn() { return hx_Ray_Construct_FltX6;}
		static Dynamic hx_Ray_getDirection;
		static Dynamic &hx_Ray_getDirection_dyn() { return hx_Ray_getDirection;}
		static Dynamic hx_Ray_getOrigin;
		static Dynamic &hx_Ray_getOrigin_dyn() { return hx_Ray_getOrigin;}
		static Dynamic hx_Ray_intersects_BBox;
		static Dynamic &hx_Ray_intersects_BBox_dyn() { return hx_Ray_intersects_BBox;}
		static Dynamic hx_Ray_intersects_BSphr;
		static Dynamic &hx_Ray_intersects_BSphr_dyn() { return hx_Ray_intersects_BSphr;}
		static Dynamic hx_Ray_intersects_Frstm;
		static Dynamic &hx_Ray_intersects_Frstm_dyn() { return hx_Ray_intersects_Frstm;}
		static Dynamic hx_Ray_intersects_Plane;
		static Dynamic &hx_Ray_intersects_Plane_dyn() { return hx_Ray_intersects_Plane;}
		static Dynamic hx_Ray_set_Ray;
		static Dynamic &hx_Ray_set_Ray_dyn() { return hx_Ray_set_Ray;}
		static Dynamic hx_Ray_set_V3X2;
		static Dynamic &hx_Ray_set_V3X2_dyn() { return hx_Ray_set_V3X2;}
		static Dynamic hx_Ray_setDirection_V3;
		static Dynamic &hx_Ray_setDirection_V3_dyn() { return hx_Ray_setDirection_V3;}
		static Dynamic hx_Ray_setDirection_FltX3;
		static Dynamic &hx_Ray_setDirection_FltX3_dyn() { return hx_Ray_setDirection_FltX3;}
		static Dynamic hx_Ray_setOrigin_V3;
		static Dynamic &hx_Ray_setOrigin_V3_dyn() { return hx_Ray_setOrigin_V3;}
		static Dynamic hx_Ray_setOrigin_FltX3;
		static Dynamic &hx_Ray_setOrigin_FltX3_dyn() { return hx_Ray_setOrigin_FltX3;}
		static Dynamic hx_Ray_transform;
		static Dynamic &hx_Ray_transform_dyn() { return hx_Ray_transform;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_Ray */ 
