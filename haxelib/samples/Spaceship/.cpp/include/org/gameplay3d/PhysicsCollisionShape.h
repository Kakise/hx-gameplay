#ifndef INCLUDED_org_gameplay3d_PhysicsCollisionShape
#define INCLUDED_org_gameplay3d_PhysicsCollisionShape

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
#include <org/gameplay3d/Ref.h>
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,HeightField)
HX_DECLARE_CLASS2(org,gameplay3d,Mesh)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsCollisionShape)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsCollisionShape_Definition)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector3)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  PhysicsCollisionShape_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef PhysicsCollisionShape_obj OBJ_;
		PhysicsCollisionShape_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PhysicsCollisionShape_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PhysicsCollisionShape_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		inline operator ::org::gameplay3d::intern::INativeBinding_obj *()
			{ return new ::org::gameplay3d::intern::INativeBinding_delegate_< PhysicsCollisionShape_obj >(this); }
		inline operator ::org::gameplay3d::Ref_obj *()
			{ return new ::org::gameplay3d::Ref_delegate_< PhysicsCollisionShape_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("PhysicsCollisionShape"); }

		virtual int getType( );
		Dynamic getType_dyn();

		static ::org::gameplay3d::PhysicsCollisionShape_Definition box( );
		static Dynamic box_dyn();

		static ::org::gameplay3d::PhysicsCollisionShape_Definition box_V3X2_Bool( ::org::gameplay3d::immutable::IVector3 extents,::org::gameplay3d::immutable::IVector3 center,hx::Null< bool >  absolute);
		static Dynamic box_V3X2_Bool_dyn();

		static ::org::gameplay3d::PhysicsCollisionShape_Definition capsule( );
		static Dynamic capsule_dyn();

		static ::org::gameplay3d::PhysicsCollisionShape_Definition capsule_FltX2_V3_Bool( Float radius,Float height,::org::gameplay3d::immutable::IVector3 center,hx::Null< bool >  absolute);
		static Dynamic capsule_FltX2_V3_Bool_dyn();

		static ::org::gameplay3d::PhysicsCollisionShape_Definition heightfield( );
		static Dynamic heightfield_dyn();

		static ::org::gameplay3d::PhysicsCollisionShape_Definition heightfield_HghtFld( ::org::gameplay3d::HeightField heightfield);
		static Dynamic heightfield_HghtFld_dyn();

		static ::org::gameplay3d::PhysicsCollisionShape_Definition mesh( ::org::gameplay3d::Mesh mesh);
		static Dynamic mesh_dyn();

		static ::org::gameplay3d::PhysicsCollisionShape_Definition sphere( );
		static Dynamic sphere_dyn();

		static ::org::gameplay3d::PhysicsCollisionShape_Definition sphere_Flt_V3_Bool( Float radius,::org::gameplay3d::immutable::IVector3 center,hx::Null< bool >  absolute);
		static Dynamic sphere_Flt_V3_Bool_dyn();

		static Dynamic hx_PhysicsCollisionShape_static_box;
		static Dynamic &hx_PhysicsCollisionShape_static_box_dyn() { return hx_PhysicsCollisionShape_static_box;}
		static Dynamic hx_PhysicsCollisionShape_static_box_V3X2_Bool;
		static Dynamic &hx_PhysicsCollisionShape_static_box_V3X2_Bool_dyn() { return hx_PhysicsCollisionShape_static_box_V3X2_Bool;}
		static Dynamic hx_PhysicsCollisionShape_static_capsule;
		static Dynamic &hx_PhysicsCollisionShape_static_capsule_dyn() { return hx_PhysicsCollisionShape_static_capsule;}
		static Dynamic hx_PhysicsCollisionShape_static_capsule_FltX2_V3_Bool;
		static Dynamic &hx_PhysicsCollisionShape_static_capsule_FltX2_V3_Bool_dyn() { return hx_PhysicsCollisionShape_static_capsule_FltX2_V3_Bool;}
		static Dynamic hx_PhysicsCollisionShape_getType;
		static Dynamic &hx_PhysicsCollisionShape_getType_dyn() { return hx_PhysicsCollisionShape_getType;}
		static Dynamic hx_PhysicsCollisionShape_static_heightfield;
		static Dynamic &hx_PhysicsCollisionShape_static_heightfield_dyn() { return hx_PhysicsCollisionShape_static_heightfield;}
		static Dynamic hx_PhysicsCollisionShape_static_heightfield_HghtFld;
		static Dynamic &hx_PhysicsCollisionShape_static_heightfield_HghtFld_dyn() { return hx_PhysicsCollisionShape_static_heightfield_HghtFld;}
		static Dynamic hx_PhysicsCollisionShape_static_mesh;
		static Dynamic &hx_PhysicsCollisionShape_static_mesh_dyn() { return hx_PhysicsCollisionShape_static_mesh;}
		static Dynamic hx_PhysicsCollisionShape_static_sphere;
		static Dynamic &hx_PhysicsCollisionShape_static_sphere_dyn() { return hx_PhysicsCollisionShape_static_sphere;}
		static Dynamic hx_PhysicsCollisionShape_static_sphere_Flt_V3_Bool;
		static Dynamic &hx_PhysicsCollisionShape_static_sphere_Flt_V3_Bool_dyn() { return hx_PhysicsCollisionShape_static_sphere_Flt_V3_Bool;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_PhysicsCollisionShape */ 
