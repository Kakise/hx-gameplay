#ifndef INCLUDED_org_gameplay3d_AIMessage
#define INCLUDED_org_gameplay3d_AIMessage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
HX_DECLARE_CLASS2(org,gameplay3d,AIMessage)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  AIMessage_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef AIMessage_obj OBJ_;
		AIMessage_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AIMessage_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AIMessage_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("AIMessage"); }

		virtual bool getBoolean( int index);
		Dynamic getBoolean_dyn();

		virtual Float getDouble( int index);
		Dynamic getDouble_dyn();

		virtual Float getFloat( int index);
		Dynamic getFloat_dyn();

		virtual int getId( );
		Dynamic getId_dyn();

		virtual int getInt( int index);
		Dynamic getInt_dyn();

		virtual int getLong( int index);
		Dynamic getLong_dyn();

		virtual int getParameterCount( );
		Dynamic getParameterCount_dyn();

		virtual int getParameterType( int index);
		Dynamic getParameterType_dyn();

		virtual ::String getReceiver( );
		Dynamic getReceiver_dyn();

		virtual ::String getSender( );
		Dynamic getSender_dyn();

		virtual ::String getString( int index);
		Dynamic getString_dyn();

		virtual Void setBoolean( int index,bool value);
		Dynamic setBoolean_dyn();

		virtual Void setDouble( int index,Float value);
		Dynamic setDouble_dyn();

		virtual Void setFloat( int index,Float value);
		Dynamic setFloat_dyn();

		virtual Void setInt( int index,int value);
		Dynamic setInt_dyn();

		virtual Void setLong( int index,int value);
		Dynamic setLong_dyn();

		virtual Void setString( int index,::String value);
		Dynamic setString_dyn();

		static ::org::gameplay3d::AIMessage create( int id,::String sender,::String receiver,int parameterCount);
		static Dynamic create_dyn();

		static Void destroy( ::org::gameplay3d::AIMessage message);
		static Dynamic destroy_dyn();

		static Dynamic hx_AIMessage_static_create;
		static Dynamic &hx_AIMessage_static_create_dyn() { return hx_AIMessage_static_create;}
		static Dynamic hx_AIMessage_static_destroy;
		static Dynamic &hx_AIMessage_static_destroy_dyn() { return hx_AIMessage_static_destroy;}
		static Dynamic hx_AIMessage_getBoolean;
		static Dynamic &hx_AIMessage_getBoolean_dyn() { return hx_AIMessage_getBoolean;}
		static Dynamic hx_AIMessage_getDouble;
		static Dynamic &hx_AIMessage_getDouble_dyn() { return hx_AIMessage_getDouble;}
		static Dynamic hx_AIMessage_getFloat;
		static Dynamic &hx_AIMessage_getFloat_dyn() { return hx_AIMessage_getFloat;}
		static Dynamic hx_AIMessage_getId;
		static Dynamic &hx_AIMessage_getId_dyn() { return hx_AIMessage_getId;}
		static Dynamic hx_AIMessage_getInt;
		static Dynamic &hx_AIMessage_getInt_dyn() { return hx_AIMessage_getInt;}
		static Dynamic hx_AIMessage_getLong;
		static Dynamic &hx_AIMessage_getLong_dyn() { return hx_AIMessage_getLong;}
		static Dynamic hx_AIMessage_getParameterCount;
		static Dynamic &hx_AIMessage_getParameterCount_dyn() { return hx_AIMessage_getParameterCount;}
		static Dynamic hx_AIMessage_getParameterType;
		static Dynamic &hx_AIMessage_getParameterType_dyn() { return hx_AIMessage_getParameterType;}
		static Dynamic hx_AIMessage_getReceiver;
		static Dynamic &hx_AIMessage_getReceiver_dyn() { return hx_AIMessage_getReceiver;}
		static Dynamic hx_AIMessage_getSender;
		static Dynamic &hx_AIMessage_getSender_dyn() { return hx_AIMessage_getSender;}
		static Dynamic hx_AIMessage_getString;
		static Dynamic &hx_AIMessage_getString_dyn() { return hx_AIMessage_getString;}
		static Dynamic hx_AIMessage_setBoolean;
		static Dynamic &hx_AIMessage_setBoolean_dyn() { return hx_AIMessage_setBoolean;}
		static Dynamic hx_AIMessage_setDouble;
		static Dynamic &hx_AIMessage_setDouble_dyn() { return hx_AIMessage_setDouble;}
		static Dynamic hx_AIMessage_setFloat;
		static Dynamic &hx_AIMessage_setFloat_dyn() { return hx_AIMessage_setFloat;}
		static Dynamic hx_AIMessage_setInt;
		static Dynamic &hx_AIMessage_setInt_dyn() { return hx_AIMessage_setInt;}
		static Dynamic hx_AIMessage_setLong;
		static Dynamic &hx_AIMessage_setLong_dyn() { return hx_AIMessage_setLong;}
		static Dynamic hx_AIMessage_setString;
		static Dynamic &hx_AIMessage_setString_dyn() { return hx_AIMessage_setString;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_AIMessage */ 
