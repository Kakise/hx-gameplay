#ifndef INCLUDED_org_gameplay3d_intern_ListenerWrapper
#define INCLUDED_org_gameplay3d_intern_ListenerWrapper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,ListenerWrapper)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
namespace org{
namespace gameplay3d{
namespace intern{


class HXCPP_CLASS_ATTRIBUTES  ListenerWrapper_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef ListenerWrapper_obj OBJ_;
		ListenerWrapper_obj();
		Void __construct(Dynamic target,Dynamic nativeObject,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ListenerWrapper_obj > __new(Dynamic target,Dynamic nativeObject,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ListenerWrapper_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ListenerWrapper"); }

		Dynamic target;
};

} // end namespace org
} // end namespace gameplay3d
} // end namespace intern

#endif /* INCLUDED_org_gameplay3d_intern_ListenerWrapper */ 
