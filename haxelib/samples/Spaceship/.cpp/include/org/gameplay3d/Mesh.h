#ifndef INCLUDED_org_gameplay3d_Mesh
#define INCLUDED_org_gameplay3d_Mesh

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
#include <org/gameplay3d/Ref.h>
HX_DECLARE_CLASS2(org,gameplay3d,BoundingBox)
HX_DECLARE_CLASS2(org,gameplay3d,BoundingSphere)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Mesh)
HX_DECLARE_CLASS2(org,gameplay3d,MeshPart)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS2(org,gameplay3d,Vector3)
HX_DECLARE_CLASS2(org,gameplay3d,VertexFormat)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IBoundingBox)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IBoundingSphere)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector3)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,util,Handle)
HX_DECLARE_CLASS3(org,gameplay3d,util,IMutableNativeArray)
HX_DECLARE_CLASS3(org,gameplay3d,util,INativeArray)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  Mesh_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef Mesh_obj OBJ_;
		Mesh_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Mesh_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Mesh_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::org::gameplay3d::intern::INativeBinding_obj *()
			{ return new ::org::gameplay3d::intern::INativeBinding_delegate_< Mesh_obj >(this); }
		inline operator ::org::gameplay3d::Ref_obj *()
			{ return new ::org::gameplay3d::Ref_delegate_< Mesh_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("Mesh"); }

		::org::gameplay3d::BoundingBox _boundingBox;
		::org::gameplay3d::BoundingSphere _boundingSphere;
		virtual ::org::gameplay3d::MeshPart addPart( int primitiveType,int indexFormat,int indexCount,hx::Null< bool >  _dynamic);
		Dynamic addPart_dyn();

		virtual ::org::gameplay3d::immutable::IBoundingBox getBoundingBox( );
		Dynamic getBoundingBox_dyn();

		virtual ::org::gameplay3d::immutable::IBoundingSphere getBoundingSphere( );
		Dynamic getBoundingSphere_dyn();

		virtual ::org::gameplay3d::MeshPart getPart( int index);
		Dynamic getPart_dyn();

		virtual int getPartCount( );
		Dynamic getPartCount_dyn();

		virtual int getPrimitiveType( );
		Dynamic getPrimitiveType_dyn();

		virtual ::String getUrl( );
		Dynamic getUrl_dyn();

		virtual ::org::gameplay3d::util::Handle getVertexBuffer( );
		Dynamic getVertexBuffer_dyn();

		virtual int getVertexCount( );
		Dynamic getVertexCount_dyn();

		virtual ::org::gameplay3d::VertexFormat getVertexFormat( );
		Dynamic getVertexFormat_dyn();

		virtual int getVertexSize( );
		Dynamic getVertexSize_dyn();

		virtual bool isDynamic( );
		Dynamic isDynamic_dyn();

		virtual Void setBoundingBox( ::org::gameplay3d::immutable::IBoundingBox box);
		Dynamic setBoundingBox_dyn();

		virtual Void setBoundingSphere( ::org::gameplay3d::immutable::IBoundingSphere sphere);
		Dynamic setBoundingSphere_dyn();

		virtual Void setPrimitiveType( int type);
		Dynamic setPrimitiveType_dyn();

		virtual Void setVertexData( ::org::gameplay3d::util::IMutableNativeArray vertexData,hx::Null< int >  vertexStart,hx::Null< int >  vertexCount);
		Dynamic setVertexData_dyn();

		static ::org::gameplay3d::Mesh createBoundingBox( ::org::gameplay3d::immutable::IBoundingBox box);
		static Dynamic createBoundingBox_dyn();

		static ::org::gameplay3d::Mesh createLines( Array< ::Dynamic > points,int pointCount);
		static Dynamic createLines_dyn();

		static ::org::gameplay3d::Mesh createMesh( ::org::gameplay3d::VertexFormat vertexFormat,int vertexCount,hx::Null< bool >  _dynamic);
		static Dynamic createMesh_dyn();

		static ::org::gameplay3d::Mesh createQuad_V3X4( ::org::gameplay3d::immutable::IVector3 p1,::org::gameplay3d::immutable::IVector3 p2,::org::gameplay3d::immutable::IVector3 p3,::org::gameplay3d::immutable::IVector3 p4);
		static Dynamic createQuad_V3X4_dyn();

		static ::org::gameplay3d::Mesh createQuad_FltX8( Float x,Float y,Float width,Float height,hx::Null< Float >  s1,hx::Null< Float >  t1,hx::Null< Float >  s2,hx::Null< Float >  t2);
		static Dynamic createQuad_FltX8_dyn();

		static ::org::gameplay3d::Mesh createQuadFullscreen( );
		static Dynamic createQuadFullscreen_dyn();

		static Dynamic hx_Mesh_addPart;
		static Dynamic &hx_Mesh_addPart_dyn() { return hx_Mesh_addPart;}
		static Dynamic hx_Mesh_static_createBoundingBox;
		static Dynamic &hx_Mesh_static_createBoundingBox_dyn() { return hx_Mesh_static_createBoundingBox;}
		static Dynamic hx_Mesh_static_createLines;
		static Dynamic &hx_Mesh_static_createLines_dyn() { return hx_Mesh_static_createLines;}
		static Dynamic hx_Mesh_static_createMesh;
		static Dynamic &hx_Mesh_static_createMesh_dyn() { return hx_Mesh_static_createMesh;}
		static Dynamic hx_Mesh_static_createQuad_V3X4;
		static Dynamic &hx_Mesh_static_createQuad_V3X4_dyn() { return hx_Mesh_static_createQuad_V3X4;}
		static Dynamic hx_Mesh_static_createQuad_FltX8;
		static Dynamic &hx_Mesh_static_createQuad_FltX8_dyn() { return hx_Mesh_static_createQuad_FltX8;}
		static Dynamic hx_Mesh_static_createQuadFullscreen;
		static Dynamic &hx_Mesh_static_createQuadFullscreen_dyn() { return hx_Mesh_static_createQuadFullscreen;}
		static Dynamic hx_Mesh_getBoundingBox;
		static Dynamic &hx_Mesh_getBoundingBox_dyn() { return hx_Mesh_getBoundingBox;}
		static Dynamic hx_Mesh_getBoundingSphere;
		static Dynamic &hx_Mesh_getBoundingSphere_dyn() { return hx_Mesh_getBoundingSphere;}
		static Dynamic hx_Mesh_getPart;
		static Dynamic &hx_Mesh_getPart_dyn() { return hx_Mesh_getPart;}
		static Dynamic hx_Mesh_getPartCount;
		static Dynamic &hx_Mesh_getPartCount_dyn() { return hx_Mesh_getPartCount;}
		static Dynamic hx_Mesh_getPrimitiveType;
		static Dynamic &hx_Mesh_getPrimitiveType_dyn() { return hx_Mesh_getPrimitiveType;}
		static Dynamic hx_Mesh_getUrl;
		static Dynamic &hx_Mesh_getUrl_dyn() { return hx_Mesh_getUrl;}
		static Dynamic hx_Mesh_getVertexBuffer;
		static Dynamic &hx_Mesh_getVertexBuffer_dyn() { return hx_Mesh_getVertexBuffer;}
		static Dynamic hx_Mesh_getVertexCount;
		static Dynamic &hx_Mesh_getVertexCount_dyn() { return hx_Mesh_getVertexCount;}
		static Dynamic hx_Mesh_getVertexFormat;
		static Dynamic &hx_Mesh_getVertexFormat_dyn() { return hx_Mesh_getVertexFormat;}
		static Dynamic hx_Mesh_getVertexSize;
		static Dynamic &hx_Mesh_getVertexSize_dyn() { return hx_Mesh_getVertexSize;}
		static Dynamic hx_Mesh_isDynamic;
		static Dynamic &hx_Mesh_isDynamic_dyn() { return hx_Mesh_isDynamic;}
		static Dynamic hx_Mesh_setBoundingBox;
		static Dynamic &hx_Mesh_setBoundingBox_dyn() { return hx_Mesh_setBoundingBox;}
		static Dynamic hx_Mesh_setBoundingSphere;
		static Dynamic &hx_Mesh_setBoundingSphere_dyn() { return hx_Mesh_setBoundingSphere;}
		static Dynamic hx_Mesh_setPrimitiveType;
		static Dynamic &hx_Mesh_setPrimitiveType_dyn() { return hx_Mesh_setPrimitiveType;}
		static Dynamic hx_Mesh_setVertexData;
		static Dynamic &hx_Mesh_setVertexData_dyn() { return hx_Mesh_setVertexData;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_Mesh */ 
