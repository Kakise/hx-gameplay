#ifndef INCLUDED_org_gameplay3d__MaterialParameter_MaterialParameterBinder_Impl_
#define INCLUDED_org_gameplay3d__MaterialParameter_MaterialParameterBinder_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS2(org,gameplay3d,Texture_Sampler)
HX_DECLARE_CLASS3(org,gameplay3d,_MaterialParameter,MaterialParameterBinder_Impl_)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IMatrix)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector2)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector3)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector4)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,util,FunctionBinder)
namespace org{
namespace gameplay3d{
namespace _MaterialParameter{


class HXCPP_CLASS_ATTRIBUTES  MaterialParameterBinder_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MaterialParameterBinder_Impl__obj OBJ_;
		MaterialParameterBinder_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< MaterialParameterBinder_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MaterialParameterBinder_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("MaterialParameterBinder_Impl_"); }

		static ::org::gameplay3d::util::FunctionBinder _new( Dynamic v);
		static Dynamic _new_dyn();

		static ::org::gameplay3d::util::FunctionBinder getBinder( ::org::gameplay3d::util::FunctionBinder this1);
		static Dynamic getBinder_dyn();

		static ::org::gameplay3d::util::FunctionBinder fromFloat( Dynamic val);
		static Dynamic fromFloat_dyn();

		static ::org::gameplay3d::util::FunctionBinder fromInt( Dynamic val);
		static Dynamic fromInt_dyn();

		static ::org::gameplay3d::util::FunctionBinder fromVector2( Dynamic val);
		static Dynamic fromVector2_dyn();

		static ::org::gameplay3d::util::FunctionBinder fromVector3( Dynamic val);
		static Dynamic fromVector3_dyn();

		static ::org::gameplay3d::util::FunctionBinder fromVector4( Dynamic val);
		static Dynamic fromVector4_dyn();

		static ::org::gameplay3d::util::FunctionBinder fromMatrix( Dynamic val);
		static Dynamic fromMatrix_dyn();

		static ::org::gameplay3d::util::FunctionBinder fromSampler( Dynamic val);
		static Dynamic fromSampler_dyn();

};

} // end namespace org
} // end namespace gameplay3d
} // end namespace _MaterialParameter

#endif /* INCLUDED_org_gameplay3d__MaterialParameter_MaterialParameterBinder_Impl_ */ 
