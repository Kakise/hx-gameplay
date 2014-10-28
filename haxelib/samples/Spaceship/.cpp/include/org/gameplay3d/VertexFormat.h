#ifndef INCLUDED_org_gameplay3d_VertexFormat
#define INCLUDED_org_gameplay3d_VertexFormat

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,VertexFormat)
HX_DECLARE_CLASS2(org,gameplay3d,VertexFormat_Element)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  VertexFormat_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef VertexFormat_obj OBJ_;
		VertexFormat_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< VertexFormat_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VertexFormat_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("VertexFormat"); }

		virtual ::org::gameplay3d::VertexFormat_Element getElement( int index);
		Dynamic getElement_dyn();

		virtual int getElementCount( );
		Dynamic getElementCount_dyn();

		virtual int getVertexSize( );
		Dynamic getVertexSize_dyn();

		static ::org::gameplay3d::VertexFormat make( Array< ::Dynamic > elements,int elementCount);
		static Dynamic make_dyn();

		static ::String toString( int usage);
		static Dynamic toString_dyn();

		static Dynamic constructNativeObject( Array< ::Dynamic > elements,int elementCount);
		static Dynamic constructNativeObject_dyn();

		static Dynamic hx_VertexFormat_Construct;
		static Dynamic &hx_VertexFormat_Construct_dyn() { return hx_VertexFormat_Construct;}
		static Dynamic hx_VertexFormat_getElement;
		static Dynamic &hx_VertexFormat_getElement_dyn() { return hx_VertexFormat_getElement;}
		static Dynamic hx_VertexFormat_getElementCount;
		static Dynamic &hx_VertexFormat_getElementCount_dyn() { return hx_VertexFormat_getElementCount;}
		static Dynamic hx_VertexFormat_getVertexSize;
		static Dynamic &hx_VertexFormat_getVertexSize_dyn() { return hx_VertexFormat_getVertexSize;}
		static Dynamic hx_VertexFormat_static_toString;
		static Dynamic &hx_VertexFormat_static_toString_dyn() { return hx_VertexFormat_static_toString;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_VertexFormat */ 
