#ifndef INCLUDED_org_gameplay3d_Camera
#define INCLUDED_org_gameplay3d_Camera

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/intern/impl/Transform_ListenerImpl.h>
#include <org/gameplay3d/Ref.h>
HX_DECLARE_CLASS2(org,gameplay3d,AnimationTarget)
HX_DECLARE_CLASS2(org,gameplay3d,Camera)
HX_DECLARE_CLASS2(org,gameplay3d,Frustum)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Matrix)
HX_DECLARE_CLASS2(org,gameplay3d,Node)
HX_DECLARE_CLASS2(org,gameplay3d,Properties)
HX_DECLARE_CLASS2(org,gameplay3d,Ray)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS2(org,gameplay3d,ScriptTarget)
HX_DECLARE_CLASS2(org,gameplay3d,Transform)
HX_DECLARE_CLASS2(org,gameplay3d,Transform_Listener)
HX_DECLARE_CLASS2(org,gameplay3d,Vector3)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IFrustum)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IMatrix)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IRectangle)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector3)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,AnimationTarget_ScriptTarget)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,Transform_ListenerImpl)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  Camera_obj : public ::org::gameplay3d::intern::impl::Transform_ListenerImpl_obj{
	public:
		typedef ::org::gameplay3d::intern::impl::Transform_ListenerImpl_obj super;
		typedef Camera_obj OBJ_;
		Camera_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Camera_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Camera_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::org::gameplay3d::intern::INativeBinding_obj *()
			{ return new ::org::gameplay3d::intern::INativeBinding_delegate_< Camera_obj >(this); }
		inline operator ::org::gameplay3d::Ref_obj *()
			{ return new ::org::gameplay3d::Ref_delegate_< Camera_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("Camera"); }

		::org::gameplay3d::Matrix _inverseViewMatrix;
		::org::gameplay3d::Matrix _inverseViewProjectionMatrix;
		::org::gameplay3d::Matrix _projectionMatrix;
		::org::gameplay3d::Matrix _viewMatrix;
		::org::gameplay3d::Matrix _viewProjectionMatrix;
		::org::gameplay3d::Frustum _frustum;
		virtual Float getAspectRatio( );
		Dynamic getAspectRatio_dyn();

		virtual int getCameraType( );
		Dynamic getCameraType_dyn();

		virtual Float getFarPlane( );
		Dynamic getFarPlane_dyn();

		virtual Float getFieldOfView( );
		Dynamic getFieldOfView_dyn();

		virtual ::org::gameplay3d::immutable::IFrustum getFrustum( );
		Dynamic getFrustum_dyn();

		virtual ::org::gameplay3d::immutable::IMatrix getInverseViewMatrix( );
		Dynamic getInverseViewMatrix_dyn();

		virtual ::org::gameplay3d::immutable::IMatrix getInverseViewProjectionMatrix( );
		Dynamic getInverseViewProjectionMatrix_dyn();

		virtual Float getNearPlane( );
		Dynamic getNearPlane_dyn();

		virtual ::org::gameplay3d::Node getNode( );
		Dynamic getNode_dyn();

		virtual ::org::gameplay3d::immutable::IMatrix getProjectionMatrix( );
		Dynamic getProjectionMatrix_dyn();

		virtual ::org::gameplay3d::immutable::IMatrix getViewMatrix( );
		Dynamic getViewMatrix_dyn();

		virtual ::org::gameplay3d::immutable::IMatrix getViewProjectionMatrix( );
		Dynamic getViewProjectionMatrix_dyn();

		virtual Float getZoomX( );
		Dynamic getZoomX_dyn();

		virtual Float getZoomY( );
		Dynamic getZoomY_dyn();

		virtual Void pickRay( ::org::gameplay3d::immutable::IRectangle viewport,Float x,Float y,::org::gameplay3d::Ray dst);
		Dynamic pickRay_dyn();

		virtual Void project( ::org::gameplay3d::immutable::IRectangle viewport,::org::gameplay3d::immutable::IVector3 position,Dynamic x,Dynamic y,Dynamic depth);
		Dynamic project_dyn();

		virtual Void setAspectRatio( Float aspectRatio);
		Dynamic setAspectRatio_dyn();

		virtual Void setFarPlane( Float farPlane);
		Dynamic setFarPlane_dyn();

		virtual Void setFieldOfView( Float fieldOfView);
		Dynamic setFieldOfView_dyn();

		virtual Void setNearPlane( Float nearPlane);
		Dynamic setNearPlane_dyn();

		virtual Void setZoomX( Float zoomX);
		Dynamic setZoomX_dyn();

		virtual Void setZoomY( Float zoomY);
		Dynamic setZoomY_dyn();

		virtual Void unproject( ::org::gameplay3d::immutable::IRectangle viewport,Float x,Float y,Float depth,::org::gameplay3d::Vector3 dst);
		Dynamic unproject_dyn();

		static ::org::gameplay3d::Camera create( ::org::gameplay3d::Properties properties);
		static Dynamic create_dyn();

		static ::org::gameplay3d::Camera createOrthographic( Float zoomX,Float zoomY,Float aspectRatio,Float nearPlane,Float farPlane);
		static Dynamic createOrthographic_dyn();

		static ::org::gameplay3d::Camera createPerspective( Float fieldOfView,Float aspectRatio,Float nearPlane,Float farPlane);
		static Dynamic createPerspective_dyn();

		static Dynamic hx_Camera_static_create;
		static Dynamic &hx_Camera_static_create_dyn() { return hx_Camera_static_create;}
		static Dynamic hx_Camera_static_createOrthographic;
		static Dynamic &hx_Camera_static_createOrthographic_dyn() { return hx_Camera_static_createOrthographic;}
		static Dynamic hx_Camera_static_createPerspective;
		static Dynamic &hx_Camera_static_createPerspective_dyn() { return hx_Camera_static_createPerspective;}
		static Dynamic hx_Camera_getAspectRatio;
		static Dynamic &hx_Camera_getAspectRatio_dyn() { return hx_Camera_getAspectRatio;}
		static Dynamic hx_Camera_getCameraType;
		static Dynamic &hx_Camera_getCameraType_dyn() { return hx_Camera_getCameraType;}
		static Dynamic hx_Camera_getFarPlane;
		static Dynamic &hx_Camera_getFarPlane_dyn() { return hx_Camera_getFarPlane;}
		static Dynamic hx_Camera_getFieldOfView;
		static Dynamic &hx_Camera_getFieldOfView_dyn() { return hx_Camera_getFieldOfView;}
		static Dynamic hx_Camera_getFrustum;
		static Dynamic &hx_Camera_getFrustum_dyn() { return hx_Camera_getFrustum;}
		static Dynamic hx_Camera_getInverseViewMatrix;
		static Dynamic &hx_Camera_getInverseViewMatrix_dyn() { return hx_Camera_getInverseViewMatrix;}
		static Dynamic hx_Camera_getInverseViewProjectionMatrix;
		static Dynamic &hx_Camera_getInverseViewProjectionMatrix_dyn() { return hx_Camera_getInverseViewProjectionMatrix;}
		static Dynamic hx_Camera_getNearPlane;
		static Dynamic &hx_Camera_getNearPlane_dyn() { return hx_Camera_getNearPlane;}
		static Dynamic hx_Camera_getNode;
		static Dynamic &hx_Camera_getNode_dyn() { return hx_Camera_getNode;}
		static Dynamic hx_Camera_getProjectionMatrix;
		static Dynamic &hx_Camera_getProjectionMatrix_dyn() { return hx_Camera_getProjectionMatrix;}
		static Dynamic hx_Camera_getViewMatrix;
		static Dynamic &hx_Camera_getViewMatrix_dyn() { return hx_Camera_getViewMatrix;}
		static Dynamic hx_Camera_getViewProjectionMatrix;
		static Dynamic &hx_Camera_getViewProjectionMatrix_dyn() { return hx_Camera_getViewProjectionMatrix;}
		static Dynamic hx_Camera_getZoomX;
		static Dynamic &hx_Camera_getZoomX_dyn() { return hx_Camera_getZoomX;}
		static Dynamic hx_Camera_getZoomY;
		static Dynamic &hx_Camera_getZoomY_dyn() { return hx_Camera_getZoomY;}
		static Dynamic hx_Camera_pickRay;
		static Dynamic &hx_Camera_pickRay_dyn() { return hx_Camera_pickRay;}
		static Dynamic hx_Camera_project;
		static Dynamic &hx_Camera_project_dyn() { return hx_Camera_project;}
		static Dynamic hx_Camera_setAspectRatio;
		static Dynamic &hx_Camera_setAspectRatio_dyn() { return hx_Camera_setAspectRatio;}
		static Dynamic hx_Camera_setFarPlane;
		static Dynamic &hx_Camera_setFarPlane_dyn() { return hx_Camera_setFarPlane;}
		static Dynamic hx_Camera_setFieldOfView;
		static Dynamic &hx_Camera_setFieldOfView_dyn() { return hx_Camera_setFieldOfView;}
		static Dynamic hx_Camera_setNearPlane;
		static Dynamic &hx_Camera_setNearPlane_dyn() { return hx_Camera_setNearPlane;}
		static Dynamic hx_Camera_setZoomX;
		static Dynamic &hx_Camera_setZoomX_dyn() { return hx_Camera_setZoomX;}
		static Dynamic hx_Camera_setZoomY;
		static Dynamic &hx_Camera_setZoomY_dyn() { return hx_Camera_setZoomY;}
		static Dynamic hx_Camera_unproject;
		static Dynamic &hx_Camera_unproject_dyn() { return hx_Camera_unproject;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_Camera */ 
