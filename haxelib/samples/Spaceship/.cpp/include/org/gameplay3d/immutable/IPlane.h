#ifndef INCLUDED_org_gameplay3d_immutable_IPlane
#define INCLUDED_org_gameplay3d_immutable_IPlane

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/intern/INativeBinding.h>
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Ray)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IBoundingBox)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IBoundingSphere)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IFrustum)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IPlane)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector3)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
namespace org{
namespace gameplay3d{
namespace immutable{


class HXCPP_CLASS_ATTRIBUTES  IPlane_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IPlane_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Float distance( ::org::gameplay3d::immutable::IVector3 point)=0;
		Dynamic distance_dyn();
virtual Float getDistance( )=0;
		Dynamic getDistance_dyn();
virtual ::org::gameplay3d::immutable::IVector3 getNormal( )=0;
		Dynamic getNormal_dyn();
virtual Float intersects_BBox( ::org::gameplay3d::immutable::IBoundingBox box)=0;
		Dynamic intersects_BBox_dyn();
virtual Float intersects_BSphr( ::org::gameplay3d::immutable::IBoundingSphere sphere)=0;
		Dynamic intersects_BSphr_dyn();
virtual Float intersects_Frstm( ::org::gameplay3d::immutable::IFrustum frustum)=0;
		Dynamic intersects_Frstm_dyn();
virtual Float intersects_Plane( ::org::gameplay3d::immutable::IPlane plane)=0;
		Dynamic intersects_Plane_dyn();
virtual Float intersects_Ray( ::org::gameplay3d::Ray ray)=0;
		Dynamic intersects_Ray_dyn();
virtual bool isParallel( ::org::gameplay3d::immutable::IPlane plane)=0;
		Dynamic isParallel_dyn();
};

#define DELEGATE_org_gameplay3d_immutable_IPlane \
virtual Float distance( ::org::gameplay3d::immutable::IVector3 point) { return mDelegate->distance(point);}  \
virtual Dynamic distance_dyn() { return mDelegate->distance_dyn();}  \
virtual Float getDistance( ) { return mDelegate->getDistance();}  \
virtual Dynamic getDistance_dyn() { return mDelegate->getDistance_dyn();}  \
virtual ::org::gameplay3d::immutable::IVector3 getNormal( ) { return mDelegate->getNormal();}  \
virtual Dynamic getNormal_dyn() { return mDelegate->getNormal_dyn();}  \
virtual Float intersects_BBox( ::org::gameplay3d::immutable::IBoundingBox box) { return mDelegate->intersects_BBox(box);}  \
virtual Dynamic intersects_BBox_dyn() { return mDelegate->intersects_BBox_dyn();}  \
virtual Float intersects_BSphr( ::org::gameplay3d::immutable::IBoundingSphere sphere) { return mDelegate->intersects_BSphr(sphere);}  \
virtual Dynamic intersects_BSphr_dyn() { return mDelegate->intersects_BSphr_dyn();}  \
virtual Float intersects_Frstm( ::org::gameplay3d::immutable::IFrustum frustum) { return mDelegate->intersects_Frstm(frustum);}  \
virtual Dynamic intersects_Frstm_dyn() { return mDelegate->intersects_Frstm_dyn();}  \
virtual Float intersects_Plane( ::org::gameplay3d::immutable::IPlane plane) { return mDelegate->intersects_Plane(plane);}  \
virtual Dynamic intersects_Plane_dyn() { return mDelegate->intersects_Plane_dyn();}  \
virtual Float intersects_Ray( ::org::gameplay3d::Ray ray) { return mDelegate->intersects_Ray(ray);}  \
virtual Dynamic intersects_Ray_dyn() { return mDelegate->intersects_Ray_dyn();}  \
virtual bool isParallel( ::org::gameplay3d::immutable::IPlane plane) { return mDelegate->isParallel(plane);}  \
virtual Dynamic isParallel_dyn() { return mDelegate->isParallel_dyn();}  \


template<typename IMPL>
class IPlane_delegate_ : public IPlane_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IPlane_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_org_gameplay3d_immutable_IPlane
};

} // end namespace org
} // end namespace gameplay3d
} // end namespace immutable

#endif /* INCLUDED_org_gameplay3d_immutable_IPlane */ 
