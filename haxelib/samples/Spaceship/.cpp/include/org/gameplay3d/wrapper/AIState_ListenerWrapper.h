#ifndef INCLUDED_org_gameplay3d_wrapper_AIState_ListenerWrapper
#define INCLUDED_org_gameplay3d_wrapper_AIState_ListenerWrapper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/intern/ListenerWrapper.h>
#include <org/gameplay3d/AIState_Listener.h>
HX_DECLARE_CLASS2(org,gameplay3d,AIAgent)
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
namespace wrapper{


class HXCPP_CLASS_ATTRIBUTES  AIState_ListenerWrapper_obj : public ::org::gameplay3d::intern::ListenerWrapper_obj{
	public:
		typedef ::org::gameplay3d::intern::ListenerWrapper_obj super;
		typedef AIState_ListenerWrapper_obj OBJ_;
		AIState_ListenerWrapper_obj();
		Void __construct(::org::gameplay3d::AIState_Listener target,Dynamic nativeObject,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AIState_ListenerWrapper_obj > __new(::org::gameplay3d::AIState_Listener target,Dynamic nativeObject,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AIState_ListenerWrapper_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		inline operator ::org::gameplay3d::AIState_Listener_obj *()
			{ return new ::org::gameplay3d::AIState_Listener_delegate_< AIState_ListenerWrapper_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("AIState_ListenerWrapper"); }

		virtual Void stateEnter( ::org::gameplay3d::AIAgent agent,::org::gameplay3d::AIState state);
		Dynamic stateEnter_dyn();

		virtual Void stateExit( ::org::gameplay3d::AIAgent agent,::org::gameplay3d::AIState state);
		Dynamic stateExit_dyn();

		virtual Void stateUpdate( ::org::gameplay3d::AIAgent agent,::org::gameplay3d::AIState state,Float elapsedTime);
		Dynamic stateUpdate_dyn();

		virtual Void stateEnterWrapper( Dynamic agent,Dynamic state);
		Dynamic stateEnterWrapper_dyn();

		virtual Void stateExitWrapper( Dynamic agent,Dynamic state);
		Dynamic stateExitWrapper_dyn();

		virtual Void stateUpdateWrapper( Dynamic agent,Dynamic state,Float elapsedTime);
		Dynamic stateUpdateWrapper_dyn();

		static ::org::gameplay3d::wrapper::AIState_ListenerWrapper make( ::org::gameplay3d::AIState_Listener target);
		static Dynamic make_dyn();

		static Dynamic constructNativeObject( ::org::gameplay3d::wrapper::AIState_ListenerWrapper thisObj);
		static Dynamic constructNativeObject_dyn();

		static Dynamic hx_AIState_Listener_Construct;
		static Dynamic &hx_AIState_Listener_Construct_dyn() { return hx_AIState_Listener_Construct;}
};

} // end namespace org
} // end namespace gameplay3d
} // end namespace wrapper

#endif /* INCLUDED_org_gameplay3d_wrapper_AIState_ListenerWrapper */ 
