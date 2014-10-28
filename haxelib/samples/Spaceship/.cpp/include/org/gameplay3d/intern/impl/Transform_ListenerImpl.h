#ifndef INCLUDED_org_gameplay3d_intern_impl_Transform_ListenerImpl
#define INCLUDED_org_gameplay3d_intern_impl_Transform_ListenerImpl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
#include <org/gameplay3d/Transform_Listener.h>
HX_DECLARE_CLASS2(org,gameplay3d,AnimationTarget)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,ScriptTarget)
HX_DECLARE_CLASS2(org,gameplay3d,Transform)
HX_DECLARE_CLASS2(org,gameplay3d,Transform_Listener)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,AnimationTarget_ScriptTarget)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,Transform_ListenerImpl)
namespace org{
namespace gameplay3d{
namespace intern{
namespace impl{


class HXCPP_CLASS_ATTRIBUTES  Transform_ListenerImpl_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef Transform_ListenerImpl_obj OBJ_;
		Transform_ListenerImpl_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Transform_ListenerImpl_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Transform_ListenerImpl_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		inline operator ::org::gameplay3d::Transform_Listener_obj *()
			{ return new ::org::gameplay3d::Transform_Listener_delegate_< Transform_ListenerImpl_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("Transform_ListenerImpl"); }

		virtual Void transformChanged( ::org::gameplay3d::Transform transform,int cookie);
		Dynamic transformChanged_dyn();

};

} // end namespace org
} // end namespace gameplay3d
} // end namespace intern
} // end namespace impl

#endif /* INCLUDED_org_gameplay3d_intern_impl_Transform_ListenerImpl */ 
