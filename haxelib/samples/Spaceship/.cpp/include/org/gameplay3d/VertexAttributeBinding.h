#ifndef INCLUDED_org_gameplay3d_VertexAttributeBinding
#define INCLUDED_org_gameplay3d_VertexAttributeBinding

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
#include <org/gameplay3d/Ref.h>
HX_DECLARE_CLASS2(org,gameplay3d,Effect)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Mesh)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS2(org,gameplay3d,VertexAttributeBinding)
HX_DECLARE_CLASS2(org,gameplay3d,VertexFormat)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  VertexAttributeBinding_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef VertexAttributeBinding_obj OBJ_;
		VertexAttributeBinding_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< VertexAttributeBinding_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VertexAttributeBinding_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		inline operator ::org::gameplay3d::intern::INativeBinding_obj *()
			{ return new ::org::gameplay3d::intern::INativeBinding_delegate_< VertexAttributeBinding_obj >(this); }
		inline operator ::org::gameplay3d::Ref_obj *()
			{ return new ::org::gameplay3d::Ref_delegate_< VertexAttributeBinding_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("VertexAttributeBinding"); }

		virtual Void bind( );
		Dynamic bind_dyn();

		virtual Void unbind( );
		Dynamic unbind_dyn();

		static ::org::gameplay3d::VertexAttributeBinding create_Mesh_Eff( ::org::gameplay3d::Mesh mesh,::org::gameplay3d::Effect effect);
		static Dynamic create_Mesh_Eff_dyn();

		static ::org::gameplay3d::VertexAttributeBinding create_Frmt_Dat_Eff( ::org::gameplay3d::VertexFormat vertexFormat,Array< unsigned char > vertexPointer,::org::gameplay3d::Effect effect);
		static Dynamic create_Frmt_Dat_Eff_dyn();

		static Dynamic hx_VertexAttributeBinding_bind;
		static Dynamic &hx_VertexAttributeBinding_bind_dyn() { return hx_VertexAttributeBinding_bind;}
		static Dynamic hx_VertexAttributeBinding_static_create_Mesh_Eff;
		static Dynamic &hx_VertexAttributeBinding_static_create_Mesh_Eff_dyn() { return hx_VertexAttributeBinding_static_create_Mesh_Eff;}
		static Dynamic hx_VertexAttributeBinding_static_create_Frmt_Dat_Eff;
		static Dynamic &hx_VertexAttributeBinding_static_create_Frmt_Dat_Eff_dyn() { return hx_VertexAttributeBinding_static_create_Frmt_Dat_Eff;}
		static Dynamic hx_VertexAttributeBinding_unbind;
		static Dynamic &hx_VertexAttributeBinding_unbind_dyn() { return hx_VertexAttributeBinding_unbind;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_VertexAttributeBinding */ 
