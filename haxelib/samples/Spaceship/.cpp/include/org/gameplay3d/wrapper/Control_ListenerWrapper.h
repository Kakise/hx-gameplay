#ifndef INCLUDED_org_gameplay3d_wrapper_Control_ListenerWrapper
#define INCLUDED_org_gameplay3d_wrapper_Control_ListenerWrapper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/intern/ListenerWrapper.h>
#include <org/gameplay3d/Control_Listener.h>
HX_DECLARE_CLASS2(org,gameplay3d,AnimationTarget)
HX_DECLARE_CLASS2(org,gameplay3d,Control)
HX_DECLARE_CLASS2(org,gameplay3d,Control_Listener)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS2(org,gameplay3d,ScriptTarget)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,ListenerWrapper)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,AnimationTarget_ScriptTarget)
HX_DECLARE_CLASS3(org,gameplay3d,wrapper,Control_ListenerWrapper)
namespace org{
namespace gameplay3d{
namespace wrapper{


class HXCPP_CLASS_ATTRIBUTES  Control_ListenerWrapper_obj : public ::org::gameplay3d::intern::ListenerWrapper_obj{
	public:
		typedef ::org::gameplay3d::intern::ListenerWrapper_obj super;
		typedef Control_ListenerWrapper_obj OBJ_;
		Control_ListenerWrapper_obj();
		Void __construct(::org::gameplay3d::Control_Listener target,Dynamic nativeObject,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Control_ListenerWrapper_obj > __new(::org::gameplay3d::Control_Listener target,Dynamic nativeObject,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Control_ListenerWrapper_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		inline operator ::org::gameplay3d::Control_Listener_obj *()
			{ return new ::org::gameplay3d::Control_Listener_delegate_< Control_ListenerWrapper_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("Control_ListenerWrapper"); }

		virtual Void controlEvent( ::org::gameplay3d::Control control,int evt);
		Dynamic controlEvent_dyn();

		virtual Void controlEventWrapper( Dynamic control,int evt);
		Dynamic controlEventWrapper_dyn();

		static ::org::gameplay3d::wrapper::Control_ListenerWrapper make( ::org::gameplay3d::Control_Listener target);
		static Dynamic make_dyn();

		static Dynamic constructNativeObject( ::org::gameplay3d::wrapper::Control_ListenerWrapper thisObj);
		static Dynamic constructNativeObject_dyn();

		static Dynamic hx_Control_Listener_Construct;
		static Dynamic &hx_Control_Listener_Construct_dyn() { return hx_Control_Listener_Construct;}
};

} // end namespace org
} // end namespace gameplay3d
} // end namespace wrapper

#endif /* INCLUDED_org_gameplay3d_wrapper_Control_ListenerWrapper */ 
