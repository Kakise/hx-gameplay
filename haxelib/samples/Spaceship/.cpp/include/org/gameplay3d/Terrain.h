#ifndef INCLUDED_org_gameplay3d_Terrain
#define INCLUDED_org_gameplay3d_Terrain

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/intern/impl/Transform_ListenerImpl.h>
#include <org/gameplay3d/Ref.h>
HX_DECLARE_CLASS2(org,gameplay3d,AnimationTarget)
HX_DECLARE_CLASS2(org,gameplay3d,BoundingBox)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,HeightField)
HX_DECLARE_CLASS2(org,gameplay3d,Node)
HX_DECLARE_CLASS2(org,gameplay3d,Properties)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS2(org,gameplay3d,ScriptTarget)
HX_DECLARE_CLASS2(org,gameplay3d,Terrain)
HX_DECLARE_CLASS2(org,gameplay3d,Transform)
HX_DECLARE_CLASS2(org,gameplay3d,Transform_Listener)
HX_DECLARE_CLASS2(org,gameplay3d,Vector2)
HX_DECLARE_CLASS2(org,gameplay3d,Vector3)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IBoundingBox)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector2)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector3)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,AnimationTarget_ScriptTarget)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,Transform_ListenerImpl)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  Terrain_obj : public ::org::gameplay3d::intern::impl::Transform_ListenerImpl_obj{
	public:
		typedef ::org::gameplay3d::intern::impl::Transform_ListenerImpl_obj super;
		typedef Terrain_obj OBJ_;
		Terrain_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Terrain_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Terrain_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::org::gameplay3d::intern::INativeBinding_obj *()
			{ return new ::org::gameplay3d::intern::INativeBinding_delegate_< Terrain_obj >(this); }
		inline operator ::org::gameplay3d::Ref_obj *()
			{ return new ::org::gameplay3d::Ref_delegate_< Terrain_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("Terrain"); }

		::org::gameplay3d::BoundingBox _boundingBox;
		virtual Void draw( hx::Null< bool >  wireframe);
		Dynamic draw_dyn();

		virtual ::org::gameplay3d::immutable::IBoundingBox getBoundingBox( );
		Dynamic getBoundingBox_dyn();

		virtual Float getHeight( Float x,Float z);
		Dynamic getHeight_dyn();

		virtual ::org::gameplay3d::Node getNode( );
		Dynamic getNode_dyn();

		virtual int getPatchCount( );
		Dynamic getPatchCount_dyn();

		virtual int getTriangleCount( );
		Dynamic getTriangleCount_dyn();

		virtual int getVisiblePatchCount( );
		Dynamic getVisiblePatchCount_dyn();

		virtual int getVisibleTriangleCount( );
		Dynamic getVisibleTriangleCount_dyn();

		virtual bool isFlagSet( int flag);
		Dynamic isFlagSet_dyn();

		virtual Void setFlag( int flag,bool on);
		Dynamic setFlag_dyn();

		virtual bool setLayer( int index,::String texturePath,::org::gameplay3d::Vector2 textureRepeat,::String blendPath,hx::Null< int >  blendChannel,hx::Null< int >  row,hx::Null< int >  column);
		Dynamic setLayer_dyn();

		virtual Void transformChanged( ::org::gameplay3d::Transform transform,int cookie);

		static ::org::gameplay3d::Terrain create_HghtFld_V3_IntX2_Flt_Str( ::org::gameplay3d::HeightField heightfield,::org::gameplay3d::Vector3 scale,hx::Null< int >  patchSize,hx::Null< int >  detailLevels,hx::Null< Float >  skirtScale,::String normalMapPath);
		static Dynamic create_HghtFld_V3_IntX2_Flt_Str_dyn();

		static ::org::gameplay3d::Terrain create_Prop( ::org::gameplay3d::Properties properties);
		static Dynamic create_Prop_dyn();

		static ::org::gameplay3d::Terrain create_Str( ::String path);
		static Dynamic create_Str_dyn();

		static Dynamic hx_Terrain_static_create_HghtFld_V3_IntX2_Flt_Str;
		static Dynamic &hx_Terrain_static_create_HghtFld_V3_IntX2_Flt_Str_dyn() { return hx_Terrain_static_create_HghtFld_V3_IntX2_Flt_Str;}
		static Dynamic hx_Terrain_static_create_Prop;
		static Dynamic &hx_Terrain_static_create_Prop_dyn() { return hx_Terrain_static_create_Prop;}
		static Dynamic hx_Terrain_static_create_Str;
		static Dynamic &hx_Terrain_static_create_Str_dyn() { return hx_Terrain_static_create_Str;}
		static Dynamic hx_Terrain_draw;
		static Dynamic &hx_Terrain_draw_dyn() { return hx_Terrain_draw;}
		static Dynamic hx_Terrain_getBoundingBox;
		static Dynamic &hx_Terrain_getBoundingBox_dyn() { return hx_Terrain_getBoundingBox;}
		static Dynamic hx_Terrain_getHeight;
		static Dynamic &hx_Terrain_getHeight_dyn() { return hx_Terrain_getHeight;}
		static Dynamic hx_Terrain_getNode;
		static Dynamic &hx_Terrain_getNode_dyn() { return hx_Terrain_getNode;}
		static Dynamic hx_Terrain_getPatchCount;
		static Dynamic &hx_Terrain_getPatchCount_dyn() { return hx_Terrain_getPatchCount;}
		static Dynamic hx_Terrain_getTriangleCount;
		static Dynamic &hx_Terrain_getTriangleCount_dyn() { return hx_Terrain_getTriangleCount;}
		static Dynamic hx_Terrain_getVisiblePatchCount;
		static Dynamic &hx_Terrain_getVisiblePatchCount_dyn() { return hx_Terrain_getVisiblePatchCount;}
		static Dynamic hx_Terrain_getVisibleTriangleCount;
		static Dynamic &hx_Terrain_getVisibleTriangleCount_dyn() { return hx_Terrain_getVisibleTriangleCount;}
		static Dynamic hx_Terrain_isFlagSet;
		static Dynamic &hx_Terrain_isFlagSet_dyn() { return hx_Terrain_isFlagSet;}
		static Dynamic hx_Terrain_setFlag;
		static Dynamic &hx_Terrain_setFlag_dyn() { return hx_Terrain_setFlag;}
		static Dynamic hx_Terrain_setLayer;
		static Dynamic &hx_Terrain_setLayer_dyn() { return hx_Terrain_setLayer;}
		static Dynamic hx_Terrain_transformChanged;
		static Dynamic &hx_Terrain_transformChanged_dyn() { return hx_Terrain_transformChanged;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_Terrain */ 
