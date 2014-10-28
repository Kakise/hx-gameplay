#ifndef INCLUDED_org_gameplay3d_Technique
#define INCLUDED_org_gameplay3d_Technique

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/RenderState.h>
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Pass)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS2(org,gameplay3d,RenderState)
HX_DECLARE_CLASS2(org,gameplay3d,Technique)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  Technique_obj : public ::org::gameplay3d::RenderState_obj{
	public:
		typedef ::org::gameplay3d::RenderState_obj super;
		typedef Technique_obj OBJ_;
		Technique_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Technique_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Technique_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Technique"); }

		virtual ::String getId( );
		Dynamic getId_dyn();

		virtual ::org::gameplay3d::Pass getPass( ::String id);
		Dynamic getPass_dyn();

		virtual ::org::gameplay3d::Pass getPassByIndex( int index);
		Dynamic getPassByIndex_dyn();

		virtual int getPassCount( );
		Dynamic getPassCount_dyn();

		static Dynamic hx_Technique_getId;
		static Dynamic &hx_Technique_getId_dyn() { return hx_Technique_getId;}
		static Dynamic hx_Technique_getPass;
		static Dynamic &hx_Technique_getPass_dyn() { return hx_Technique_getPass;}
		static Dynamic hx_Technique_getPassByIndex;
		static Dynamic &hx_Technique_getPassByIndex_dyn() { return hx_Technique_getPassByIndex;}
		static Dynamic hx_Technique_getPassCount;
		static Dynamic &hx_Technique_getPassCount_dyn() { return hx_Technique_getPassCount;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_Technique */ 
