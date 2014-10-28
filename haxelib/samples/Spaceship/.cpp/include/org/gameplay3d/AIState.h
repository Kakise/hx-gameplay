#ifndef INCLUDED_org_gameplay3d_AIState
#define INCLUDED_org_gameplay3d_AIState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/intern/impl/ScriptTargetImpl.h>
#include <org/gameplay3d/Ref.h>
HX_DECLARE_CLASS2(org,gameplay3d,AIState)
HX_DECLARE_CLASS2(org,gameplay3d,AIState_Listener)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS2(org,gameplay3d,ScriptTarget)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,ListenerWrapper)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,ScriptTargetImpl)
HX_DECLARE_CLASS3(org,gameplay3d,wrapper,AIState_ListenerWrapper)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  AIState_obj : public ::org::gameplay3d::intern::impl::ScriptTargetImpl_obj{
	public:
		typedef ::org::gameplay3d::intern::impl::ScriptTargetImpl_obj super;
		typedef AIState_obj OBJ_;
		AIState_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AIState_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AIState_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		inline operator ::org::gameplay3d::intern::INativeBinding_obj *()
			{ return new ::org::gameplay3d::intern::INativeBinding_delegate_< AIState_obj >(this); }
		inline operator ::org::gameplay3d::Ref_obj *()
			{ return new ::org::gameplay3d::Ref_delegate_< AIState_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("AIState"); }

		virtual ::String getId( );
		Dynamic getId_dyn();

		virtual Void setListener( ::org::gameplay3d::wrapper::AIState_ListenerWrapper listener);
		Dynamic setListener_dyn();

		static ::org::gameplay3d::AIState create( ::String id);
		static Dynamic create_dyn();

		static Dynamic hx_AIState_static_create;
		static Dynamic &hx_AIState_static_create_dyn() { return hx_AIState_static_create;}
		static Dynamic hx_AIState_getId;
		static Dynamic &hx_AIState_getId_dyn() { return hx_AIState_getId;}
		static Dynamic hx_AIState_setListener;
		static Dynamic &hx_AIState_setListener_dyn() { return hx_AIState_setListener;}
		static Dynamic hx_AIState_Listener_Construct;
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_AIState */ 
