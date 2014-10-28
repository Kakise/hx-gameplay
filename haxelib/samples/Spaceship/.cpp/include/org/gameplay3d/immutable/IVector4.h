#ifndef INCLUDED_org_gameplay3d_immutable_IVector4
#define INCLUDED_org_gameplay3d_immutable_IVector4

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/intern/INativeBinding.h>
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Vector4)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector4)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
namespace org{
namespace gameplay3d{
namespace immutable{


class HXCPP_CLASS_ATTRIBUTES  IVector4_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IVector4_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Float distance( ::org::gameplay3d::immutable::IVector4 v)=0;
		Dynamic distance_dyn();
virtual Float distanceSquared( ::org::gameplay3d::immutable::IVector4 v)=0;
		Dynamic distanceSquared_dyn();
virtual Float dot_V4( ::org::gameplay3d::immutable::IVector4 v)=0;
		Dynamic dot_V4_dyn();
virtual bool isOne( )=0;
		Dynamic isOne_dyn();
virtual bool isZero( )=0;
		Dynamic isZero_dyn();
virtual Float length( )=0;
		Dynamic length_dyn();
virtual Float lengthSquared( )=0;
		Dynamic lengthSquared_dyn();
virtual Void normalize_V4( ::org::gameplay3d::Vector4 dst)=0;
		Dynamic normalize_V4_dyn();
};

#define DELEGATE_org_gameplay3d_immutable_IVector4 \
virtual Float distance( ::org::gameplay3d::immutable::IVector4 v) { return mDelegate->distance(v);}  \
virtual Dynamic distance_dyn() { return mDelegate->distance_dyn();}  \
virtual Float distanceSquared( ::org::gameplay3d::immutable::IVector4 v) { return mDelegate->distanceSquared(v);}  \
virtual Dynamic distanceSquared_dyn() { return mDelegate->distanceSquared_dyn();}  \
virtual Float dot_V4( ::org::gameplay3d::immutable::IVector4 v) { return mDelegate->dot_V4(v);}  \
virtual Dynamic dot_V4_dyn() { return mDelegate->dot_V4_dyn();}  \
virtual bool isOne( ) { return mDelegate->isOne();}  \
virtual Dynamic isOne_dyn() { return mDelegate->isOne_dyn();}  \
virtual bool isZero( ) { return mDelegate->isZero();}  \
virtual Dynamic isZero_dyn() { return mDelegate->isZero_dyn();}  \
virtual Float length( ) { return mDelegate->length();}  \
virtual Dynamic length_dyn() { return mDelegate->length_dyn();}  \
virtual Float lengthSquared( ) { return mDelegate->lengthSquared();}  \
virtual Dynamic lengthSquared_dyn() { return mDelegate->lengthSquared_dyn();}  \
virtual Void normalize_V4( ::org::gameplay3d::Vector4 dst) { return mDelegate->normalize_V4(dst);}  \
virtual Dynamic normalize_V4_dyn() { return mDelegate->normalize_V4_dyn();}  \


template<typename IMPL>
class IVector4_delegate_ : public IVector4_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IVector4_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_org_gameplay3d_immutable_IVector4
};

} // end namespace org
} // end namespace gameplay3d
} // end namespace immutable

#endif /* INCLUDED_org_gameplay3d_immutable_IVector4 */ 
