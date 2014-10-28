#ifndef INCLUDED_org_gameplay3d_PhysicsController_HitResult
#define INCLUDED_org_gameplay3d_PhysicsController_HitResult

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsCollisionObject)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsController_HitResult)
HX_DECLARE_CLASS2(org,gameplay3d,Vector3)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector3)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  PhysicsController_HitResult_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef PhysicsController_HitResult_obj OBJ_;
		PhysicsController_HitResult_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PhysicsController_HitResult_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PhysicsController_HitResult_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PhysicsController_HitResult"); }

		::org::gameplay3d::PhysicsCollisionObject object;
		::org::gameplay3d::Vector3 point;
		::org::gameplay3d::Vector3 normal;
		virtual Dynamic impersonate( Dynamic nativeObject);

		virtual Float get_fraction( );
		Dynamic get_fraction_dyn();

		virtual Float set_fraction( Float value);
		Dynamic set_fraction_dyn();

		static ::org::gameplay3d::PhysicsController_HitResult make( );
		static Dynamic make_dyn();

		static Dynamic constructNativeObject( );
		static Dynamic constructNativeObject_dyn();

		static Dynamic hx_PhysicsController_HitResult_Construct;
		static Dynamic &hx_PhysicsController_HitResult_Construct_dyn() { return hx_PhysicsController_HitResult_Construct;}
		static Dynamic hx_PhysicsController_HitResult_property_object_get;
		static Dynamic &hx_PhysicsController_HitResult_property_object_get_dyn() { return hx_PhysicsController_HitResult_property_object_get;}
		static Dynamic hx_PhysicsController_HitResult_property_point_get;
		static Dynamic &hx_PhysicsController_HitResult_property_point_get_dyn() { return hx_PhysicsController_HitResult_property_point_get;}
		static Dynamic hx_PhysicsController_HitResult_property_fraction_get;
		static Dynamic &hx_PhysicsController_HitResult_property_fraction_get_dyn() { return hx_PhysicsController_HitResult_property_fraction_get;}
		static Dynamic hx_PhysicsController_HitResult_property_fraction_set;
		static Dynamic &hx_PhysicsController_HitResult_property_fraction_set_dyn() { return hx_PhysicsController_HitResult_property_fraction_set;}
		static Dynamic hx_PhysicsController_HitResult_property_normal_get;
		static Dynamic &hx_PhysicsController_HitResult_property_normal_get_dyn() { return hx_PhysicsController_HitResult_property_normal_get;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_PhysicsController_HitResult */ 
