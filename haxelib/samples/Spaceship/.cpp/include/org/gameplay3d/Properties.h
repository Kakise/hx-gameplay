#ifndef INCLUDED_org_gameplay3d_Properties
#define INCLUDED_org_gameplay3d_Properties

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Matrix)
HX_DECLARE_CLASS2(org,gameplay3d,Properties)
HX_DECLARE_CLASS2(org,gameplay3d,Quaternion)
HX_DECLARE_CLASS2(org,gameplay3d,Vector2)
HX_DECLARE_CLASS2(org,gameplay3d,Vector3)
HX_DECLARE_CLASS2(org,gameplay3d,Vector4)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IMatrix)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IQuaternion)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector2)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector3)
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IVector4)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  Properties_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef Properties_obj OBJ_;
		Properties_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Properties_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Properties_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Properties"); }

		virtual bool exists( ::String name);
		Dynamic exists_dyn();

		virtual bool getBool( ::String name,hx::Null< bool >  defaultValue);
		Dynamic getBool_dyn();

		virtual bool getColor_Str_V3( ::String name,::org::gameplay3d::Vector3 out);
		Dynamic getColor_Str_V3_dyn();

		virtual bool getColor_Str_V4( ::String name,::org::gameplay3d::Vector4 out);
		Dynamic getColor_Str_V4_dyn();

		virtual Float getFloat( ::String name);
		Dynamic getFloat_dyn();

		virtual ::String getId( );
		Dynamic getId_dyn();

		virtual int getInt( ::String name);
		Dynamic getInt_dyn();

		virtual int getLong( ::String name);
		Dynamic getLong_dyn();

		virtual bool getMatrix( ::String name,::org::gameplay3d::Matrix out);
		Dynamic getMatrix_dyn();

		virtual ::org::gameplay3d::Properties getNamespace_Str_Bool( ::String id,hx::Null< bool >  searchNames);
		Dynamic getNamespace_Str_Bool_dyn();

		virtual ::String getNamespace( );
		Dynamic getNamespace_dyn();

		virtual ::org::gameplay3d::Properties getNextNamespace( );
		Dynamic getNextNamespace_dyn();

		virtual ::String getNextProperty( Dynamic value);
		Dynamic getNextProperty_dyn();

		virtual bool getQuaternionFromAxisAngle( ::String name,::org::gameplay3d::Quaternion out);
		Dynamic getQuaternionFromAxisAngle_dyn();

		virtual ::String getString( ::String name);
		Dynamic getString_dyn();

		virtual int getType( ::String name);
		Dynamic getType_dyn();

		virtual bool getVector2( ::String name,::org::gameplay3d::Vector2 out);
		Dynamic getVector2_dyn();

		virtual bool getVector3( ::String name,::org::gameplay3d::Vector3 out);
		Dynamic getVector3_dyn();

		virtual bool getVector4( ::String name,::org::gameplay3d::Vector4 out);
		Dynamic getVector4_dyn();

		virtual Void rewind( );
		Dynamic rewind_dyn();

		static ::org::gameplay3d::Properties create( ::String url);
		static Dynamic create_dyn();

		static Dynamic hx_Properties_static_create;
		static Dynamic &hx_Properties_static_create_dyn() { return hx_Properties_static_create;}
		static Dynamic hx_Properties_exists;
		static Dynamic &hx_Properties_exists_dyn() { return hx_Properties_exists;}
		static Dynamic hx_Properties_getBool;
		static Dynamic &hx_Properties_getBool_dyn() { return hx_Properties_getBool;}
		static Dynamic hx_Properties_getColor_Str_V3;
		static Dynamic &hx_Properties_getColor_Str_V3_dyn() { return hx_Properties_getColor_Str_V3;}
		static Dynamic hx_Properties_getColor_Str_V4;
		static Dynamic &hx_Properties_getColor_Str_V4_dyn() { return hx_Properties_getColor_Str_V4;}
		static Dynamic hx_Properties_getFloat;
		static Dynamic &hx_Properties_getFloat_dyn() { return hx_Properties_getFloat;}
		static Dynamic hx_Properties_getId;
		static Dynamic &hx_Properties_getId_dyn() { return hx_Properties_getId;}
		static Dynamic hx_Properties_getInt;
		static Dynamic &hx_Properties_getInt_dyn() { return hx_Properties_getInt;}
		static Dynamic hx_Properties_getLong;
		static Dynamic &hx_Properties_getLong_dyn() { return hx_Properties_getLong;}
		static Dynamic hx_Properties_getMatrix;
		static Dynamic &hx_Properties_getMatrix_dyn() { return hx_Properties_getMatrix;}
		static Dynamic hx_Properties_getNamespace_Str_Bool;
		static Dynamic &hx_Properties_getNamespace_Str_Bool_dyn() { return hx_Properties_getNamespace_Str_Bool;}
		static Dynamic hx_Properties_getNamespace;
		static Dynamic &hx_Properties_getNamespace_dyn() { return hx_Properties_getNamespace;}
		static Dynamic hx_Properties_getNextNamespace;
		static Dynamic &hx_Properties_getNextNamespace_dyn() { return hx_Properties_getNextNamespace;}
		static Dynamic hx_Properties_getNextProperty;
		static Dynamic &hx_Properties_getNextProperty_dyn() { return hx_Properties_getNextProperty;}
		static Dynamic hx_Properties_getQuaternionFromAxisAngle;
		static Dynamic &hx_Properties_getQuaternionFromAxisAngle_dyn() { return hx_Properties_getQuaternionFromAxisAngle;}
		static Dynamic hx_Properties_getString;
		static Dynamic &hx_Properties_getString_dyn() { return hx_Properties_getString;}
		static Dynamic hx_Properties_getType;
		static Dynamic &hx_Properties_getType_dyn() { return hx_Properties_getType;}
		static Dynamic hx_Properties_getVector2;
		static Dynamic &hx_Properties_getVector2_dyn() { return hx_Properties_getVector2;}
		static Dynamic hx_Properties_getVector3;
		static Dynamic &hx_Properties_getVector3_dyn() { return hx_Properties_getVector3;}
		static Dynamic hx_Properties_getVector4;
		static Dynamic &hx_Properties_getVector4_dyn() { return hx_Properties_getVector4;}
		static Dynamic hx_Properties_rewind;
		static Dynamic &hx_Properties_rewind_dyn() { return hx_Properties_rewind;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_Properties */ 
