#ifndef INCLUDED_org_gameplay3d_MeshPart
#define INCLUDED_org_gameplay3d_MeshPart

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,MeshPart)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,util,Handle)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  MeshPart_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef MeshPart_obj OBJ_;
		MeshPart_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< MeshPart_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MeshPart_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("MeshPart"); }

		virtual ::org::gameplay3d::util::Handle getIndexBuffer( );
		Dynamic getIndexBuffer_dyn();

		virtual int getIndexCount( );
		Dynamic getIndexCount_dyn();

		virtual int getIndexFormat( );
		Dynamic getIndexFormat_dyn();

		virtual int getMeshIndex( );
		Dynamic getMeshIndex_dyn();

		virtual int getPrimitiveType( );
		Dynamic getPrimitiveType_dyn();

		virtual bool isDynamic( );
		Dynamic isDynamic_dyn();

		virtual Void setIndexData( Array< unsigned char > indexData,int indexStart,int indexCount);
		Dynamic setIndexData_dyn();

		static Dynamic hx_MeshPart_getIndexBuffer;
		static Dynamic &hx_MeshPart_getIndexBuffer_dyn() { return hx_MeshPart_getIndexBuffer;}
		static Dynamic hx_MeshPart_getIndexCount;
		static Dynamic &hx_MeshPart_getIndexCount_dyn() { return hx_MeshPart_getIndexCount;}
		static Dynamic hx_MeshPart_getIndexFormat;
		static Dynamic &hx_MeshPart_getIndexFormat_dyn() { return hx_MeshPart_getIndexFormat;}
		static Dynamic hx_MeshPart_getMeshIndex;
		static Dynamic &hx_MeshPart_getMeshIndex_dyn() { return hx_MeshPart_getMeshIndex;}
		static Dynamic hx_MeshPart_getPrimitiveType;
		static Dynamic &hx_MeshPart_getPrimitiveType_dyn() { return hx_MeshPart_getPrimitiveType;}
		static Dynamic hx_MeshPart_isDynamic;
		static Dynamic &hx_MeshPart_isDynamic_dyn() { return hx_MeshPart_isDynamic;}
		static Dynamic hx_MeshPart_setIndexData;
		static Dynamic &hx_MeshPart_setIndexData_dyn() { return hx_MeshPart_setIndexData;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_MeshPart */ 
