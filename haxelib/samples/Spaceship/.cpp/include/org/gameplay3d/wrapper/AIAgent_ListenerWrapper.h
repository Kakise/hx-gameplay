#ifndef INCLUDED_org_gameplay3d_wrapper_AIAgent_ListenerWrapper
#define INCLUDED_org_gameplay3d_wrapper_AIAgent_ListenerWrapper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/intern/ListenerWrapper.h>
#include <org/gameplay3d/AIAgent_Listener.h>
HX_DECLARE_CLASS2(org,gameplay3d,AIAgent_Listener)
HX_DECLARE_CLASS2(org,gameplay3d,AIMessage)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,ListenerWrapper)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,wrapper,AIAgent_ListenerWrapper)
namespace org{
namespace gameplay3d{
namespace wrapper{


class HXCPP_CLASS_ATTRIBUTES  AIAgent_ListenerWrapper_obj : public ::org::gameplay3d::intern::ListenerWrapper_obj{
	public:
		typedef ::org::gameplay3d::intern::ListenerWrapper_obj super;
		typedef AIAgent_ListenerWrapper_obj OBJ_;
		AIAgent_ListenerWrapper_obj();
		Void __construct(::org::gameplay3d::AIAgent_Listener target,Dynamic nativeObject,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AIAgent_ListenerWrapper_obj > __new(::org::gameplay3d::AIAgent_Listener target,Dynamic nativeObject,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AIAgent_ListenerWrapper_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		inline operator ::org::gameplay3d::AIAgent_Listener_obj *()
			{ return new ::org::gameplay3d::AIAgent_Listener_delegate_< AIAgent_ListenerWrapper_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("AIAgent_ListenerWrapper"); }

		virtual bool messageReceived( ::org::gameplay3d::AIMessage message);
		Dynamic messageReceived_dyn();

		virtual Void messageReceivedWrapper( Dynamic message);
		Dynamic messageReceivedWrapper_dyn();

		static ::org::gameplay3d::wrapper::AIAgent_ListenerWrapper make( ::org::gameplay3d::AIAgent_Listener target);
		static Dynamic make_dyn();

		static Dynamic constructNativeObject( ::org::gameplay3d::wrapper::AIAgent_ListenerWrapper thisObj);
		static Dynamic constructNativeObject_dyn();

		static Dynamic hx_AIAgent_Listener_Construct;
		static Dynamic &hx_AIAgent_Listener_Construct_dyn() { return hx_AIAgent_Listener_Construct;}
};

} // end namespace org
} // end namespace gameplay3d
} // end namespace wrapper

#endif /* INCLUDED_org_gameplay3d_wrapper_AIAgent_ListenerWrapper */ 
