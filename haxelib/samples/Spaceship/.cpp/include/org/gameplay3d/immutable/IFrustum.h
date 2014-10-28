#ifndef INCLUDED_org_gameplay3d_immutable_IFrustum
#define INCLUDED_org_gameplay3d_immutable_IFrustum

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/intern/INativeBinding.h>
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Matrix)
HX_DECLARE_CLASS2(org,gameplay3d,Ray)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IBoundingBox)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IBoundingSphere)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IFrustum)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IMatrix)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IPlane)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector3)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,util,IMutableNativeArray)
HX_DECLARE_CLASS3(org,gameplay3d,util,INativeArray)
namespace org{
namespace gameplay3d{
namespace immutable{


class HXCPP_CLASS_ATTRIBUTES  IFrustum_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IFrustum_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual ::org::gameplay3d::immutable::IPlane getBottom( )=0;
		Dynamic getBottom_dyn();
virtual Void getCorners( ::org::gameplay3d::util::IMutableNativeArray corners)=0;
		Dynamic getCorners_dyn();
virtual ::org::gameplay3d::immutable::IPlane getFar( )=0;
		Dynamic getFar_dyn();
virtual ::org::gameplay3d::immutable::IPlane getLeft( )=0;
		Dynamic getLeft_dyn();
virtual Void getMatrix( ::org::gameplay3d::Matrix dst)=0;
		Dynamic getMatrix_dyn();
virtual ::org::gameplay3d::immutable::IPlane getNear( )=0;
		Dynamic getNear_dyn();
virtual ::org::gameplay3d::immutable::IPlane getRight( )=0;
		Dynamic getRight_dyn();
virtual ::org::gameplay3d::immutable::IPlane getTop( )=0;
		Dynamic getTop_dyn();
virtual bool intersects_BBox( ::org::gameplay3d::immutable::IBoundingBox box)=0;
		Dynamic intersects_BBox_dyn();
virtual bool intersects_BSphr( ::org::gameplay3d::immutable::IBoundingSphere sphere)=0;
		Dynamic intersects_BSphr_dyn();
virtual bool intersects_V3( ::org::gameplay3d::immutable::IVector3 point)=0;
		Dynamic intersects_V3_dyn();
virtual bool intersects_FltX3( Float x,Float y,Float z)=0;
		Dynamic intersects_FltX3_dyn();
virtual Float intersects_Plane( ::org::gameplay3d::immutable::IPlane plane)=0;
		Dynamic intersects_Plane_dyn();
virtual Float intersects_Ray( ::org::gameplay3d::Ray ray)=0;
		Dynamic intersects_Ray_dyn();
};

#define DELEGATE_org_gameplay3d_immutable_IFrustum \
virtual ::org::gameplay3d::immutable::IPlane getBottom( ) { return mDelegate->getBottom();}  \
virtual Dynamic getBottom_dyn() { return mDelegate->getBottom_dyn();}  \
virtual Void getCorners( ::org::gameplay3d::util::IMutableNativeArray corners) { return mDelegate->getCorners(corners);}  \
virtual Dynamic getCorners_dyn() { return mDelegate->getCorners_dyn();}  \
virtual ::org::gameplay3d::immutable::IPlane getFar( ) { return mDelegate->getFar();}  \
virtual Dynamic getFar_dyn() { return mDelegate->getFar_dyn();}  \
virtual ::org::gameplay3d::immutable::IPlane getLeft( ) { return mDelegate->getLeft();}  \
virtual Dynamic getLeft_dyn() { return mDelegate->getLeft_dyn();}  \
virtual Void getMatrix( ::org::gameplay3d::Matrix dst) { return mDelegate->getMatrix(dst);}  \
virtual Dynamic getMatrix_dyn() { return mDelegate->getMatrix_dyn();}  \
virtual ::org::gameplay3d::immutable::IPlane getNear( ) { return mDelegate->getNear();}  \
virtual Dynamic getNear_dyn() { return mDelegate->getNear_dyn();}  \
virtual ::org::gameplay3d::immutable::IPlane getRight( ) { return mDelegate->getRight();}  \
virtual Dynamic getRight_dyn() { return mDelegate->getRight_dyn();}  \
virtual ::org::gameplay3d::immutable::IPlane getTop( ) { return mDelegate->getTop();}  \
virtual Dynamic getTop_dyn() { return mDelegate->getTop_dyn();}  \
virtual bool intersects_BBox( ::org::gameplay3d::immutable::IBoundingBox box) { return mDelegate->intersects_BBox(box);}  \
virtual Dynamic intersects_BBox_dyn() { return mDelegate->intersects_BBox_dyn();}  \
virtual bool intersects_BSphr( ::org::gameplay3d::immutable::IBoundingSphere sphere) { return mDelegate->intersects_BSphr(sphere);}  \
virtual Dynamic intersects_BSphr_dyn() { return mDelegate->intersects_BSphr_dyn();}  \
virtual bool intersects_V3( ::org::gameplay3d::immutable::IVector3 point) { return mDelegate->intersects_V3(point);}  \
virtual Dynamic intersects_V3_dyn() { return mDelegate->intersects_V3_dyn();}  \
virtual bool intersects_FltX3( Float x,Float y,Float z) { return mDelegate->intersects_FltX3(x,y,z);}  \
virtual Dynamic intersects_FltX3_dyn() { return mDelegate->intersects_FltX3_dyn();}  \
virtual Float intersects_Plane( ::org::gameplay3d::immutable::IPlane plane) { return mDelegate->intersects_Plane(plane);}  \
virtual Dynamic intersects_Plane_dyn() { return mDelegate->intersects_Plane_dyn();}  \
virtual Float intersects_Ray( ::org::gameplay3d::Ray ray) { return mDelegate->intersects_Ray(ray);}  \
virtual Dynamic intersects_Ray_dyn() { return mDelegate->intersects_Ray_dyn();}  \


template<typename IMPL>
class IFrustum_delegate_ : public IFrustum_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IFrustum_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_org_gameplay3d_immutable_IFrustum
};

} // end namespace org
} // end namespace gameplay3d
} // end namespace immutable

#endif /* INCLUDED_org_gameplay3d_immutable_IFrustum */ 
