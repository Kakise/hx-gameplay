#ifndef INCLUDED_org_gameplay3d_AbsoluteLayout
#define INCLUDED_org_gameplay3d_AbsoluteLayout

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/Layout.h>
HX_DECLARE_CLASS2(org,gameplay3d,AbsoluteLayout)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Layout)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  AbsoluteLayout_obj : public ::org::gameplay3d::Layout_obj{
	public:
		typedef ::org::gameplay3d::Layout_obj super;
		typedef AbsoluteLayout_obj OBJ_;
		AbsoluteLayout_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AbsoluteLayout_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AbsoluteLayout_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("AbsoluteLayout"); }

		virtual int getType( );

		static Dynamic hx_AbsoluteLayout_getType;
		static Dynamic &hx_AbsoluteLayout_getType_dyn() { return hx_AbsoluteLayout_getType;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_AbsoluteLayout */ 
