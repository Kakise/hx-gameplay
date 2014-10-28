#ifndef INCLUDED_org_gameplay3d_HeightField
#define INCLUDED_org_gameplay3d_HeightField

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
#include <org/gameplay3d/Ref.h>
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,HeightField)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS3(org,gameplay3d,_HeightField,HeightFieldArray)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,util,IMutableNativeArray)
HX_DECLARE_CLASS3(org,gameplay3d,util,INativeArray)
HX_DECLARE_CLASS3(org,gameplay3d,util,PrimitiveArray)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  HeightField_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef HeightField_obj OBJ_;
		HeightField_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< HeightField_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HeightField_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::org::gameplay3d::intern::INativeBinding_obj *()
			{ return new ::org::gameplay3d::intern::INativeBinding_delegate_< HeightField_obj >(this); }
		inline operator ::org::gameplay3d::Ref_obj *()
			{ return new ::org::gameplay3d::Ref_delegate_< HeightField_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("HeightField"); }

		::org::gameplay3d::_HeightField::HeightFieldArray _array;
		virtual Dynamic impersonate( Dynamic nativeObject);

		virtual ::org::gameplay3d::util::IMutableNativeArray getArray( );
		Dynamic getArray_dyn();

		virtual int getColumnCount( );
		Dynamic getColumnCount_dyn();

		virtual Float getHeight( Float column,Float row);
		Dynamic getHeight_dyn();

		virtual int getRowCount( );
		Dynamic getRowCount_dyn();

		static ::org::gameplay3d::HeightField create( int rows,int columns);
		static Dynamic create_dyn();

		static ::org::gameplay3d::HeightField createFromImage( ::String path,hx::Null< Float >  heightMin,hx::Null< Float >  heightMax);
		static Dynamic createFromImage_dyn();

		static ::org::gameplay3d::HeightField createFromRAW( ::String path,int width,int height,hx::Null< Float >  heightMin,hx::Null< Float >  heightMax);
		static Dynamic createFromRAW_dyn();

		static Dynamic hx_HeightField_static_create;
		static Dynamic &hx_HeightField_static_create_dyn() { return hx_HeightField_static_create;}
		static Dynamic hx_HeightField_static_createFromImage;
		static Dynamic &hx_HeightField_static_createFromImage_dyn() { return hx_HeightField_static_createFromImage;}
		static Dynamic hx_HeightField_static_createFromRAW;
		static Dynamic &hx_HeightField_static_createFromRAW_dyn() { return hx_HeightField_static_createFromRAW;}
		static Dynamic hx_HeightField_getArray;
		static Dynamic &hx_HeightField_getArray_dyn() { return hx_HeightField_getArray;}
		static Dynamic hx_HeightField_getColumnCount;
		static Dynamic &hx_HeightField_getColumnCount_dyn() { return hx_HeightField_getColumnCount;}
		static Dynamic hx_HeightField_getHeight;
		static Dynamic &hx_HeightField_getHeight_dyn() { return hx_HeightField_getHeight;}
		static Dynamic hx_HeightField_getRowCount;
		static Dynamic &hx_HeightField_getRowCount_dyn() { return hx_HeightField_getRowCount;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_HeightField */ 
