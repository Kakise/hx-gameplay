#ifndef INCLUDED_org_gameplay3d_Uniform
#define INCLUDED_org_gameplay3d_Uniform

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
HX_DECLARE_CLASS2(org,gameplay3d,Effect)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS2(org,gameplay3d,Uniform)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  Uniform_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef Uniform_obj OBJ_;
		Uniform_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Uniform_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Uniform_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Uniform"); }

		virtual ::org::gameplay3d::Effect getEffect( );
		Dynamic getEffect_dyn();

		virtual ::String getName( );
		Dynamic getName_dyn();

		virtual int getType( );
		Dynamic getType_dyn();

		static Dynamic hx_Uniform_getEffect;
		static Dynamic &hx_Uniform_getEffect_dyn() { return hx_Uniform_getEffect;}
		static Dynamic hx_Uniform_getName;
		static Dynamic &hx_Uniform_getName_dyn() { return hx_Uniform_getName;}
		static Dynamic hx_Uniform_getType;
		static Dynamic &hx_Uniform_getType_dyn() { return hx_Uniform_getType;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_Uniform */ 
