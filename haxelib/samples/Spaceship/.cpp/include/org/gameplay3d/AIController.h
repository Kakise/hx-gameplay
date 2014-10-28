#ifndef INCLUDED_org_gameplay3d_AIController
#define INCLUDED_org_gameplay3d_AIController

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
HX_DECLARE_CLASS2(org,gameplay3d,AIAgent)
HX_DECLARE_CLASS2(org,gameplay3d,AIController)
HX_DECLARE_CLASS2(org,gameplay3d,AIMessage)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS2(org,gameplay3d,ScriptTarget)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,ScriptTargetImpl)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  AIController_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef AIController_obj OBJ_;
		AIController_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AIController_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AIController_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("AIController"); }

		virtual ::org::gameplay3d::AIAgent findAgent( ::String id);
		Dynamic findAgent_dyn();

		virtual Void sendMessage( ::org::gameplay3d::AIMessage message,Float delay);
		Dynamic sendMessage_dyn();

		static Dynamic hx_AIController_findAgent;
		static Dynamic &hx_AIController_findAgent_dyn() { return hx_AIController_findAgent;}
		static Dynamic hx_AIController_sendMessage;
		static Dynamic &hx_AIController_sendMessage_dyn() { return hx_AIController_sendMessage;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_AIController */ 
