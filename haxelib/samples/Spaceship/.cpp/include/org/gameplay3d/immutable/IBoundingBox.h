#ifndef INCLUDED_org_gameplay3d_immutable_IBoundingBox
#define INCLUDED_org_gameplay3d_immutable_IBoundingBox

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/intern/INativeBinding.h>
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Ray)
HX_DECLARE_CLASS2(org,gameplay3d,Vector3)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IBoundingBox)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IBoundingSphere)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IFrustum)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IPlane)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector3)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,util,INativeArray)
namespace org{
namespace gameplay3d{
namespace immutable{


class HXCPP_CLASS_ATTRIBUTES  IBoundingBox_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IBoundingBox_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual ::org::gameplay3d::Vector3 getCenter( )=0;
		Dynamic getCenter_dyn();
virtual Void getCenter_V3( ::org::gameplay3d::Vector3 dst)=0;
		Dynamic getCenter_V3_dyn();
virtual Void getCorners( ::org::gameplay3d::util::INativeArray dst)=0;
		Dynamic getCorners_dyn();
virtual bool intersects_BBox( ::org::gameplay3d::immutable::IBoundingBox box)=0;
		Dynamic intersects_BBox_dyn();
virtual bool intersects_BSphr( ::org::gameplay3d::immutable::IBoundingSphere sphere)=0;
		Dynamic intersects_BSphr_dyn();
virtual bool intersects_Frstm( ::org::gameplay3d::immutable::IFrustum frustum)=0;
		Dynamic intersects_Frstm_dyn();
virtual Float intersects_Plane( ::org::gameplay3d::immutable::IPlane plane)=0;
		Dynamic intersects_Plane_dyn();
virtual Float intersects_Ray( ::org::gameplay3d::Ray ray)=0;
		Dynamic intersects_Ray_dyn();
virtual bool isEmpty( )=0;
		Dynamic isEmpty_dyn();
};

#define DELEGATE_org_gameplay3d_immutable_IBoundingBox \
virtual ::org::gameplay3d::Vector3 getCenter( ) { return mDelegate->getCenter();}  \
virtual Dynamic getCenter_dyn() { return mDelegate->getCenter_dyn();}  \
virtual Void getCenter_V3( ::org::gameplay3d::Vector3 dst) { return mDelegate->getCenter_V3(dst);}  \
virtual Dynamic getCenter_V3_dyn() { return mDelegate->getCenter_V3_dyn();}  \
virtual Void getCorners( ::org::gameplay3d::util::INativeArray dst) { return mDelegate->getCorners(dst);}  \
virtual Dynamic getCorners_dyn() { return mDelegate->getCorners_dyn();}  \
virtual bool intersects_BBox( ::org::gameplay3d::immutable::IBoundingBox box) { return mDelegate->intersects_BBox(box);}  \
virtual Dynamic intersects_BBox_dyn() { return mDelegate->intersects_BBox_dyn();}  \
virtual bool intersects_BSphr( ::org::gameplay3d::immutable::IBoundingSphere sphere) { return mDelegate->intersects_BSphr(sphere);}  \
virtual Dynamic intersects_BSphr_dyn() { return mDelegate->intersects_BSphr_dyn();}  \
virtual bool intersects_Frstm( ::org::gameplay3d::immutable::IFrustum frustum) { return mDelegate->intersects_Frstm(frustum);}  \
virtual Dynamic intersects_Frstm_dyn() { return mDelegate->intersects_Frstm_dyn();}  \
virtual Float intersects_Plane( ::org::gameplay3d::immutable::IPlane plane) { return mDelegate->intersects_Plane(plane);}  \
virtual Dynamic intersects_Plane_dyn() { return mDelegate->intersects_Plane_dyn();}  \
virtual Float intersects_Ray( ::org::gameplay3d::Ray ray) { return mDelegate->intersects_Ray(ray);}  \
virtual Dynamic intersects_Ray_dyn() { return mDelegate->intersects_Ray_dyn();}  \
virtual bool isEmpty( ) { return mDelegate->isEmpty();}  \
virtual Dynamic isEmpty_dyn() { return mDelegate->isEmpty_dyn();}  \


template<typename IMPL>
class IBoundingBox_delegate_ : public IBoundingBox_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IBoundingBox_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_org_gameplay3d_immutable_IBoundingBox
};

} // end namespace org
} // end namespace gameplay3d
} // end namespace immutable

#endif /* INCLUDED_org_gameplay3d_immutable_IBoundingBox */ 
