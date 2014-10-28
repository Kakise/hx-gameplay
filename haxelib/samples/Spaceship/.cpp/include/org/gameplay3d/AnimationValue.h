#ifndef INCLUDED_org_gameplay3d_AnimationValue
#define INCLUDED_org_gameplay3d_AnimationValue

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
HX_DECLARE_CLASS2(org,gameplay3d,AnimationValue)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,util,IMutableNativeArray)
HX_DECLARE_CLASS3(org,gameplay3d,util,INativeArray)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  AnimationValue_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef AnimationValue_obj OBJ_;
		AnimationValue_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AnimationValue_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AnimationValue_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("AnimationValue"); }

		virtual Float getFloat( int index);
		Dynamic getFloat_dyn();

		virtual Void getFloats( int index,::org::gameplay3d::util::IMutableNativeArray values,int count);
		Dynamic getFloats_dyn();

		virtual Void setFloat( int index,Float value);
		Dynamic setFloat_dyn();

		virtual Void setFloats( int index,::org::gameplay3d::util::IMutableNativeArray values,int count);
		Dynamic setFloats_dyn();

		static Dynamic hx_AnimationValue_getFloat;
		static Dynamic &hx_AnimationValue_getFloat_dyn() { return hx_AnimationValue_getFloat;}
		static Dynamic hx_AnimationValue_getFloats;
		static Dynamic &hx_AnimationValue_getFloats_dyn() { return hx_AnimationValue_getFloats;}
		static Dynamic hx_AnimationValue_setFloat;
		static Dynamic &hx_AnimationValue_setFloat_dyn() { return hx_AnimationValue_setFloat;}
		static Dynamic hx_AnimationValue_setFloats;
		static Dynamic &hx_AnimationValue_setFloats_dyn() { return hx_AnimationValue_setFloats;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_AnimationValue */ 
