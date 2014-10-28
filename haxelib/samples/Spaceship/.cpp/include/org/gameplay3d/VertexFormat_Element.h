#ifndef INCLUDED_org_gameplay3d_VertexFormat_Element
#define INCLUDED_org_gameplay3d_VertexFormat_Element

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,VertexFormat_Element)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  VertexFormat_Element_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef VertexFormat_Element_obj OBJ_;
		VertexFormat_Element_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< VertexFormat_Element_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VertexFormat_Element_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("VertexFormat_Element"); }

		virtual int get_usage( );
		Dynamic get_usage_dyn();

		virtual int set_usage( int value);
		Dynamic set_usage_dyn();

		virtual int get_size( );
		Dynamic get_size_dyn();

		virtual int set_size( Float value);
		Dynamic set_size_dyn();

		static ::org::gameplay3d::VertexFormat_Element make( );
		static Dynamic make_dyn();

		static ::org::gameplay3d::VertexFormat_Element make_IntX2( int usage,int size);
		static Dynamic make_IntX2_dyn();

		static Dynamic constructNativeObject( );
		static Dynamic constructNativeObject_dyn();

		static Dynamic constructNativeObject_IntX2( int usage,int size);
		static Dynamic constructNativeObject_IntX2_dyn();

		static Dynamic hx_VertexFormat_Element_Construct;
		static Dynamic &hx_VertexFormat_Element_Construct_dyn() { return hx_VertexFormat_Element_Construct;}
		static Dynamic hx_VertexFormat_Element_Construct_IntX2;
		static Dynamic &hx_VertexFormat_Element_Construct_IntX2_dyn() { return hx_VertexFormat_Element_Construct_IntX2;}
		static Dynamic hx_VertexFormat_Element_property_usage_get;
		static Dynamic &hx_VertexFormat_Element_property_usage_get_dyn() { return hx_VertexFormat_Element_property_usage_get;}
		static Dynamic hx_VertexFormat_Element_property_usage_set;
		static Dynamic &hx_VertexFormat_Element_property_usage_set_dyn() { return hx_VertexFormat_Element_property_usage_set;}
		static Dynamic hx_VertexFormat_Element_property_size_get;
		static Dynamic &hx_VertexFormat_Element_property_size_get_dyn() { return hx_VertexFormat_Element_property_size_get;}
		static Dynamic hx_VertexFormat_Element_property_size_set;
		static Dynamic &hx_VertexFormat_Element_property_size_set_dyn() { return hx_VertexFormat_Element_property_size_set;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_VertexFormat_Element */ 
