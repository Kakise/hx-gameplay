#ifndef INCLUDED_org_gameplay3d_immutable_IQuaternion
#define INCLUDED_org_gameplay3d_immutable_IQuaternion

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/intern/INativeBinding.h>
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Quaternion)
HX_DECLARE_CLASS2(org,gameplay3d,Vector3)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IQuaternion)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector3)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
namespace org{
namespace gameplay3d{
namespace immutable{


class HXCPP_CLASS_ATTRIBUTES  IQuaternion_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IQuaternion_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Void conjugate_Qtrn( ::org::gameplay3d::Quaternion dst)=0;
		Dynamic conjugate_Qtrn_dyn();
virtual bool inverse_Qtrn( ::org::gameplay3d::Quaternion dst)=0;
		Dynamic inverse_Qtrn_dyn();
virtual bool isIdentity( )=0;
		Dynamic isIdentity_dyn();
virtual bool isZero( )=0;
		Dynamic isZero_dyn();
virtual Void normalize_Qtrn( ::org::gameplay3d::Quaternion dst)=0;
		Dynamic normalize_Qtrn_dyn();
virtual Float toAxisAngle( ::org::gameplay3d::Vector3 e)=0;
		Dynamic toAxisAngle_dyn();
};

#define DELEGATE_org_gameplay3d_immutable_IQuaternion \
virtual Void conjugate_Qtrn( ::org::gameplay3d::Quaternion dst) { return mDelegate->conjugate_Qtrn(dst);}  \
virtual Dynamic conjugate_Qtrn_dyn() { return mDelegate->conjugate_Qtrn_dyn();}  \
virtual bool inverse_Qtrn( ::org::gameplay3d::Quaternion dst) { return mDelegate->inverse_Qtrn(dst);}  \
virtual Dynamic inverse_Qtrn_dyn() { return mDelegate->inverse_Qtrn_dyn();}  \
virtual bool isIdentity( ) { return mDelegate->isIdentity();}  \
virtual Dynamic isIdentity_dyn() { return mDelegate->isIdentity_dyn();}  \
virtual bool isZero( ) { return mDelegate->isZero();}  \
virtual Dynamic isZero_dyn() { return mDelegate->isZero_dyn();}  \
virtual Void normalize_Qtrn( ::org::gameplay3d::Quaternion dst) { return mDelegate->normalize_Qtrn(dst);}  \
virtual Dynamic normalize_Qtrn_dyn() { return mDelegate->normalize_Qtrn_dyn();}  \
virtual Float toAxisAngle( ::org::gameplay3d::Vector3 e) { return mDelegate->toAxisAngle(e);}  \
virtual Dynamic toAxisAngle_dyn() { return mDelegate->toAxisAngle_dyn();}  \


template<typename IMPL>
class IQuaternion_delegate_ : public IQuaternion_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IQuaternion_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_org_gameplay3d_immutable_IQuaternion
};

} // end namespace org
} // end namespace gameplay3d
} // end namespace immutable

#endif /* INCLUDED_org_gameplay3d_immutable_IQuaternion */ 
