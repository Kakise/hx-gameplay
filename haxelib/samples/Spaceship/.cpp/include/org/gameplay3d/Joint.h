#ifndef INCLUDED_org_gameplay3d_Joint
#define INCLUDED_org_gameplay3d_Joint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/Node.h>
HX_DECLARE_CLASS2(org,gameplay3d,AnimationTarget)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Joint)
HX_DECLARE_CLASS2(org,gameplay3d,Matrix)
HX_DECLARE_CLASS2(org,gameplay3d,Node)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS2(org,gameplay3d,ScriptTarget)
HX_DECLARE_CLASS2(org,gameplay3d,Transform)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IMatrix)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,AnimationTarget_ScriptTarget)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  Joint_obj : public ::org::gameplay3d::Node_obj{
	public:
		typedef ::org::gameplay3d::Node_obj super;
		typedef Joint_obj OBJ_;
		Joint_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Joint_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Joint_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Joint"); }

		::org::gameplay3d::Matrix _inverseBindPose;
		virtual ::org::gameplay3d::immutable::IMatrix getInverseBindPose( );
		Dynamic getInverseBindPose_dyn();

		virtual int getType( );

		static Dynamic hx_Joint_getInverseBindPose;
		static Dynamic &hx_Joint_getInverseBindPose_dyn() { return hx_Joint_getInverseBindPose;}
		static Dynamic hx_Joint_getType;
		static Dynamic &hx_Joint_getType_dyn() { return hx_Joint_getType;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_Joint */ 
