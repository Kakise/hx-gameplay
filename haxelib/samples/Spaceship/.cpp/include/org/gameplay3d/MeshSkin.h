#ifndef INCLUDED_org_gameplay3d_MeshSkin
#define INCLUDED_org_gameplay3d_MeshSkin

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/intern/impl/Transform_ListenerImpl.h>
HX_DECLARE_CLASS2(org,gameplay3d,AnimationTarget)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Joint)
HX_DECLARE_CLASS2(org,gameplay3d,Matrix)
HX_DECLARE_CLASS2(org,gameplay3d,MeshSkin)
HX_DECLARE_CLASS2(org,gameplay3d,Model)
HX_DECLARE_CLASS2(org,gameplay3d,Node)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS2(org,gameplay3d,ScriptTarget)
HX_DECLARE_CLASS2(org,gameplay3d,Transform)
HX_DECLARE_CLASS2(org,gameplay3d,Transform_Listener)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IMatrix)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,AnimationTarget_ScriptTarget)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,Transform_ListenerImpl)
HX_DECLARE_CLASS3(org,gameplay3d,util,INativeArray)
HX_DECLARE_CLASS3(org,gameplay3d,util,ObjectArray)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  MeshSkin_obj : public ::org::gameplay3d::intern::impl::Transform_ListenerImpl_obj{
	public:
		typedef ::org::gameplay3d::intern::impl::Transform_ListenerImpl_obj super;
		typedef MeshSkin_obj OBJ_;
		MeshSkin_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< MeshSkin_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MeshSkin_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("MeshSkin"); }

		::org::gameplay3d::Matrix _bindShape;
		virtual ::org::gameplay3d::immutable::IMatrix getBindShape( );
		Dynamic getBindShape_dyn();

		virtual ::org::gameplay3d::Joint getJoint_Str( ::String id);
		Dynamic getJoint_Str_dyn();

		virtual ::org::gameplay3d::Joint getJoint_Int( int index);
		Dynamic getJoint_Int_dyn();

		virtual int getJointCount( );
		Dynamic getJointCount_dyn();

		virtual int getJointIndex( ::org::gameplay3d::Joint joint);
		Dynamic getJointIndex_dyn();

		virtual ::org::gameplay3d::util::ObjectArray getMatrixPalette( );
		Dynamic getMatrixPalette_dyn();

		virtual int getMatrixPaletteSize( );
		Dynamic getMatrixPaletteSize_dyn();

		virtual ::org::gameplay3d::Model getModel( );
		Dynamic getModel_dyn();

		virtual ::org::gameplay3d::Joint getRootJoint( );
		Dynamic getRootJoint_dyn();

		virtual Void setBindShape( Float matrix);
		Dynamic setBindShape_dyn();

		virtual Void setRootJoint( ::org::gameplay3d::Joint joint);
		Dynamic setRootJoint_dyn();

		static Dynamic hx_MeshSkin_getBindShape;
		static Dynamic &hx_MeshSkin_getBindShape_dyn() { return hx_MeshSkin_getBindShape;}
		static Dynamic hx_MeshSkin_getJoint_Str;
		static Dynamic &hx_MeshSkin_getJoint_Str_dyn() { return hx_MeshSkin_getJoint_Str;}
		static Dynamic hx_MeshSkin_getJoint_Int;
		static Dynamic &hx_MeshSkin_getJoint_Int_dyn() { return hx_MeshSkin_getJoint_Int;}
		static Dynamic hx_MeshSkin_getJointCount;
		static Dynamic &hx_MeshSkin_getJointCount_dyn() { return hx_MeshSkin_getJointCount;}
		static Dynamic hx_MeshSkin_getJointIndex;
		static Dynamic &hx_MeshSkin_getJointIndex_dyn() { return hx_MeshSkin_getJointIndex;}
		static Dynamic hx_MeshSkin_getMatrixPalette;
		static Dynamic &hx_MeshSkin_getMatrixPalette_dyn() { return hx_MeshSkin_getMatrixPalette;}
		static Dynamic hx_MeshSkin_getMatrixPaletteSize;
		static Dynamic &hx_MeshSkin_getMatrixPaletteSize_dyn() { return hx_MeshSkin_getMatrixPaletteSize;}
		static Dynamic hx_MeshSkin_getModel;
		static Dynamic &hx_MeshSkin_getModel_dyn() { return hx_MeshSkin_getModel;}
		static Dynamic hx_MeshSkin_getRootJoint;
		static Dynamic &hx_MeshSkin_getRootJoint_dyn() { return hx_MeshSkin_getRootJoint;}
		static Dynamic hx_MeshSkin_setBindShape;
		static Dynamic &hx_MeshSkin_setBindShape_dyn() { return hx_MeshSkin_setBindShape;}
		static Dynamic hx_MeshSkin_setRootJoint;
		static Dynamic &hx_MeshSkin_setRootJoint_dyn() { return hx_MeshSkin_setRootJoint;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_MeshSkin */ 
