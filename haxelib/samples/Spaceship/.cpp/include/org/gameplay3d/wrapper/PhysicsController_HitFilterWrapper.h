#ifndef INCLUDED_org_gameplay3d_wrapper_PhysicsController_HitFilterWrapper
#define INCLUDED_org_gameplay3d_wrapper_PhysicsController_HitFilterWrapper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/intern/ListenerWrapper.h>
#include <org/gameplay3d/PhysicsController_HitFilter.h>
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsCollisionObject)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsController_HitFilter)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsController_HitResult)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,ListenerWrapper)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,wrapper,PhysicsController_HitFilterWrapper)
namespace org{
namespace gameplay3d{
namespace wrapper{


class HXCPP_CLASS_ATTRIBUTES  PhysicsController_HitFilterWrapper_obj : public ::org::gameplay3d::intern::ListenerWrapper_obj{
	public:
		typedef ::org::gameplay3d::intern::ListenerWrapper_obj super;
		typedef PhysicsController_HitFilterWrapper_obj OBJ_;
		PhysicsController_HitFilterWrapper_obj();
		Void __construct(::org::gameplay3d::PhysicsController_HitFilter target,Dynamic nativeObject,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PhysicsController_HitFilterWrapper_obj > __new(::org::gameplay3d::PhysicsController_HitFilter target,Dynamic nativeObject,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PhysicsController_HitFilterWrapper_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::org::gameplay3d::PhysicsController_HitFilter_obj *()
			{ return new ::org::gameplay3d::PhysicsController_HitFilter_delegate_< PhysicsController_HitFilterWrapper_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("PhysicsController_HitFilterWrapper"); }

		::org::gameplay3d::PhysicsController_HitResult _result;
		virtual bool filter( ::org::gameplay3d::PhysicsCollisionObject object);
		Dynamic filter_dyn();

		virtual bool hit( ::org::gameplay3d::PhysicsController_HitResult result);
		Dynamic hit_dyn();

		virtual bool filterWrapper( Dynamic object);
		Dynamic filterWrapper_dyn();

		virtual bool hitWrapper( Dynamic result);
		Dynamic hitWrapper_dyn();

		static ::org::gameplay3d::wrapper::PhysicsController_HitFilterWrapper make( ::org::gameplay3d::PhysicsController_HitFilter target);
		static Dynamic make_dyn();

		static Dynamic constructNativeObject( ::org::gameplay3d::wrapper::PhysicsController_HitFilterWrapper thisObj);
		static Dynamic constructNativeObject_dyn();

		static Dynamic hx_HaxePhysicsController_HitFilter_Construct;
		static Dynamic &hx_HaxePhysicsController_HitFilter_Construct_dyn() { return hx_HaxePhysicsController_HitFilter_Construct;}
};

} // end namespace org
} // end namespace gameplay3d
} // end namespace wrapper

#endif /* INCLUDED_org_gameplay3d_wrapper_PhysicsController_HitFilterWrapper */ 
