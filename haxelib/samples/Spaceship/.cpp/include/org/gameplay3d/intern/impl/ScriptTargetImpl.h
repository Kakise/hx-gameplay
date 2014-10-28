#ifndef INCLUDED_org_gameplay3d_intern_impl_ScriptTargetImpl
#define INCLUDED_org_gameplay3d_intern_impl_ScriptTargetImpl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
#include <org/gameplay3d/ScriptTarget.h>
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,ScriptTarget)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,ScriptTargetImpl)
namespace org{
namespace gameplay3d{
namespace intern{
namespace impl{


class HXCPP_CLASS_ATTRIBUTES  ScriptTargetImpl_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef ScriptTargetImpl_obj OBJ_;
		ScriptTargetImpl_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ScriptTargetImpl_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ScriptTargetImpl_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		inline operator ::org::gameplay3d::intern::INativeBinding_obj *()
			{ return new ::org::gameplay3d::intern::INativeBinding_delegate_< ScriptTargetImpl_obj >(this); }
		inline operator ::org::gameplay3d::ScriptTarget_obj *()
			{ return new ::org::gameplay3d::ScriptTarget_delegate_< ScriptTargetImpl_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("ScriptTargetImpl"); }

		virtual Void addScriptCallback( ::String eventName,::String _function);
		Dynamic addScriptCallback_dyn();

		virtual Void removeScriptCallback( ::String eventName,::String _function);
		Dynamic removeScriptCallback_dyn();

		static Dynamic hx_ScriptTarget_addScriptCallback;
		static Dynamic &hx_ScriptTarget_addScriptCallback_dyn() { return hx_ScriptTarget_addScriptCallback;}
		static Dynamic hx_ScriptTarget_removeScriptCallback;
		static Dynamic &hx_ScriptTarget_removeScriptCallback_dyn() { return hx_ScriptTarget_removeScriptCallback;}
};

} // end namespace org
} // end namespace gameplay3d
} // end namespace intern
} // end namespace impl

#endif /* INCLUDED_org_gameplay3d_intern_impl_ScriptTargetImpl */ 
