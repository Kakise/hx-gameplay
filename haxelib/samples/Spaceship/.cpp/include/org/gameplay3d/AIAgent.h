#ifndef INCLUDED_org_gameplay3d_AIAgent
#define INCLUDED_org_gameplay3d_AIAgent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/intern/impl/ScriptTargetImpl.h>
#include <org/gameplay3d/Ref.h>
HX_DECLARE_CLASS2(org,gameplay3d,AIAgent)
HX_DECLARE_CLASS2(org,gameplay3d,AIAgent_Listener)
HX_DECLARE_CLASS2(org,gameplay3d,AIStateMachine)
HX_DECLARE_CLASS2(org,gameplay3d,AnimationTarget)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Node)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS2(org,gameplay3d,ScriptTarget)
HX_DECLARE_CLASS2(org,gameplay3d,Transform)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,ListenerWrapper)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,AnimationTarget_ScriptTarget)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,ScriptTargetImpl)
HX_DECLARE_CLASS3(org,gameplay3d,wrapper,AIAgent_ListenerWrapper)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  AIAgent_obj : public ::org::gameplay3d::intern::impl::ScriptTargetImpl_obj{
	public:
		typedef ::org::gameplay3d::intern::impl::ScriptTargetImpl_obj super;
		typedef AIAgent_obj OBJ_;
		AIAgent_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AIAgent_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AIAgent_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		inline operator ::org::gameplay3d::intern::INativeBinding_obj *()
			{ return new ::org::gameplay3d::intern::INativeBinding_delegate_< AIAgent_obj >(this); }
		inline operator ::org::gameplay3d::Ref_obj *()
			{ return new ::org::gameplay3d::Ref_delegate_< AIAgent_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("AIAgent"); }

		virtual ::String getId( );
		Dynamic getId_dyn();

		virtual ::org::gameplay3d::Node getNode( );
		Dynamic getNode_dyn();

		virtual ::org::gameplay3d::AIStateMachine getStateMachine( );
		Dynamic getStateMachine_dyn();

		virtual bool isEnabled( );
		Dynamic isEnabled_dyn();

		virtual Void setEnabled( bool enabled);
		Dynamic setEnabled_dyn();

		virtual Void setListener( ::org::gameplay3d::wrapper::AIAgent_ListenerWrapper listener);
		Dynamic setListener_dyn();

		static ::org::gameplay3d::AIAgent create( );
		static Dynamic create_dyn();

		static Dynamic hx_AIAgent_static_create;
		static Dynamic &hx_AIAgent_static_create_dyn() { return hx_AIAgent_static_create;}
		static Dynamic hx_AIAgent_getId;
		static Dynamic &hx_AIAgent_getId_dyn() { return hx_AIAgent_getId;}
		static Dynamic hx_AIAgent_getNode;
		static Dynamic &hx_AIAgent_getNode_dyn() { return hx_AIAgent_getNode;}
		static Dynamic hx_AIAgent_getStateMachine;
		static Dynamic &hx_AIAgent_getStateMachine_dyn() { return hx_AIAgent_getStateMachine;}
		static Dynamic hx_AIAgent_isEnabled;
		static Dynamic &hx_AIAgent_isEnabled_dyn() { return hx_AIAgent_isEnabled;}
		static Dynamic hx_AIAgent_setEnabled;
		static Dynamic &hx_AIAgent_setEnabled_dyn() { return hx_AIAgent_setEnabled;}
		static Dynamic hx_AIAgent_setListener;
		static Dynamic &hx_AIAgent_setListener_dyn() { return hx_AIAgent_setListener;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_AIAgent */ 
