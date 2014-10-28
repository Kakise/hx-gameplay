#ifndef INCLUDED_org_gameplay3d_AIStateMachine
#define INCLUDED_org_gameplay3d_AIStateMachine

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
HX_DECLARE_CLASS2(org,gameplay3d,AIAgent)
HX_DECLARE_CLASS2(org,gameplay3d,AIState)
HX_DECLARE_CLASS2(org,gameplay3d,AIStateMachine)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS2(org,gameplay3d,ScriptTarget)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,ScriptTargetImpl)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  AIStateMachine_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef AIStateMachine_obj OBJ_;
		AIStateMachine_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AIStateMachine_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AIStateMachine_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("AIStateMachine"); }

		virtual ::org::gameplay3d::AIState addState_Str( ::String id);
		Dynamic addState_Str_dyn();

		virtual Void addState_AIState( ::org::gameplay3d::AIState state);
		Dynamic addState_AIState_dyn();

		virtual ::org::gameplay3d::AIState getActiveState( );
		Dynamic getActiveState_dyn();

		virtual ::org::gameplay3d::AIAgent getAgent( );
		Dynamic getAgent_dyn();

		virtual ::org::gameplay3d::AIState getState( ::String id);
		Dynamic getState_dyn();

		virtual Void removeState( ::org::gameplay3d::AIState state);
		Dynamic removeState_dyn();

		virtual ::org::gameplay3d::AIState setState_Str( ::String id);
		Dynamic setState_Str_dyn();

		virtual bool setState_AIState( ::org::gameplay3d::AIState state);
		Dynamic setState_AIState_dyn();

		static Dynamic hx_AIStateMachine_addState_Str;
		static Dynamic &hx_AIStateMachine_addState_Str_dyn() { return hx_AIStateMachine_addState_Str;}
		static Dynamic hx_AIStateMachine_addState_AIState;
		static Dynamic &hx_AIStateMachine_addState_AIState_dyn() { return hx_AIStateMachine_addState_AIState;}
		static Dynamic hx_AIStateMachine_getActiveState;
		static Dynamic &hx_AIStateMachine_getActiveState_dyn() { return hx_AIStateMachine_getActiveState;}
		static Dynamic hx_AIStateMachine_getAgent;
		static Dynamic &hx_AIStateMachine_getAgent_dyn() { return hx_AIStateMachine_getAgent;}
		static Dynamic hx_AIStateMachine_getState;
		static Dynamic &hx_AIStateMachine_getState_dyn() { return hx_AIStateMachine_getState;}
		static Dynamic hx_AIStateMachine_removeState;
		static Dynamic &hx_AIStateMachine_removeState_dyn() { return hx_AIStateMachine_removeState;}
		static Dynamic hx_AIStateMachine_setState_Str;
		static Dynamic &hx_AIStateMachine_setState_Str_dyn() { return hx_AIStateMachine_setState_Str;}
		static Dynamic hx_AIStateMachine_setState_AIState;
		static Dynamic &hx_AIStateMachine_setState_AIState_dyn() { return hx_AIStateMachine_setState_AIState;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_AIStateMachine */ 
