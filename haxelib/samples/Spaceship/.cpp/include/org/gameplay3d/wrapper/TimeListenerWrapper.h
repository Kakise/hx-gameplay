#ifndef INCLUDED_org_gameplay3d_wrapper_TimeListenerWrapper
#define INCLUDED_org_gameplay3d_wrapper_TimeListenerWrapper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/intern/ListenerWrapper.h>
#include <org/gameplay3d/TimeListener.h>
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,TimeListener)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,ListenerWrapper)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,util,Handle)
HX_DECLARE_CLASS3(org,gameplay3d,wrapper,TimeListenerWrapper)
namespace org{
namespace gameplay3d{
namespace wrapper{


class HXCPP_CLASS_ATTRIBUTES  TimeListenerWrapper_obj : public ::org::gameplay3d::intern::ListenerWrapper_obj{
	public:
		typedef ::org::gameplay3d::intern::ListenerWrapper_obj super;
		typedef TimeListenerWrapper_obj OBJ_;
		TimeListenerWrapper_obj();
		Void __construct(::org::gameplay3d::TimeListener target,Dynamic nativeObject,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TimeListenerWrapper_obj > __new(::org::gameplay3d::TimeListener target,Dynamic nativeObject,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TimeListenerWrapper_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		inline operator ::org::gameplay3d::TimeListener_obj *()
			{ return new ::org::gameplay3d::TimeListener_delegate_< TimeListenerWrapper_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("TimeListenerWrapper"); }

		virtual Void timeEvent( int timeDiff,::org::gameplay3d::util::Handle cookie);
		Dynamic timeEvent_dyn();

		virtual Void timeEventWrapper( int timeDiff,Dynamic cookie);
		Dynamic timeEventWrapper_dyn();

		static ::org::gameplay3d::wrapper::TimeListenerWrapper make( ::org::gameplay3d::TimeListener target);
		static Dynamic make_dyn();

		static Dynamic constructNativeObject( ::org::gameplay3d::wrapper::TimeListenerWrapper thisObj);
		static Dynamic constructNativeObject_dyn();

		static Dynamic hx_TimeListener_Construct;
		static Dynamic &hx_TimeListener_Construct_dyn() { return hx_TimeListener_Construct;}
};

} // end namespace org
} // end namespace gameplay3d
} // end namespace wrapper

#endif /* INCLUDED_org_gameplay3d_wrapper_TimeListenerWrapper */ 
