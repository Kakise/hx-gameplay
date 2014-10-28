#ifndef INCLUDED_org_gameplay3d_util_PrimitiveArray
#define INCLUDED_org_gameplay3d_util_PrimitiveArray

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/intern/NativeBinding.h>
#include <org/gameplay3d/intern/INativeBinding.h>
#include <org/gameplay3d/util/IMutableNativeArray.h>
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,util,IMutableNativeArray)
HX_DECLARE_CLASS3(org,gameplay3d,util,INativeArray)
HX_DECLARE_CLASS3(org,gameplay3d,util,PrimitiveArray)
namespace org{
namespace gameplay3d{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  PrimitiveArray_obj : public ::org::gameplay3d::intern::NativeBinding_obj{
	public:
		typedef ::org::gameplay3d::intern::NativeBinding_obj super;
		typedef PrimitiveArray_obj OBJ_;
		PrimitiveArray_obj();
		Void __construct(Dynamic nativeObject,Dynamic getter,Dynamic setter,int length);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PrimitiveArray_obj > __new(Dynamic nativeObject,Dynamic getter,Dynamic setter,int length);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PrimitiveArray_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::org::gameplay3d::intern::INativeBinding_obj *()
			{ return new ::org::gameplay3d::intern::INativeBinding_delegate_< PrimitiveArray_obj >(this); }
		inline operator ::org::gameplay3d::util::INativeArray_obj *()
			{ return new ::org::gameplay3d::util::INativeArray_delegate_< PrimitiveArray_obj >(this); }
		inline operator ::org::gameplay3d::util::IMutableNativeArray_obj *()
			{ return new ::org::gameplay3d::util::IMutableNativeArray_delegate_< PrimitiveArray_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("PrimitiveArray"); }

		int length;
		Dynamic getter;
		Dynamic &getter_dyn() { return getter;}
		Dynamic setter;
		Dynamic &setter_dyn() { return setter;}
		virtual Dynamic getAt( int index);
		Dynamic getAt_dyn();

		virtual Void setAt( int index,Dynamic value);
		Dynamic setAt_dyn();

		static ::org::gameplay3d::util::IMutableNativeArray constructIntArray( hx::Null< int >  length,hx::Null< bool >  reclaim);
		static Dynamic constructIntArray_dyn();

		static ::org::gameplay3d::util::IMutableNativeArray constructUintArray( hx::Null< int >  length,hx::Null< bool >  reclaim);
		static Dynamic constructUintArray_dyn();

		static ::org::gameplay3d::util::IMutableNativeArray constructShortArray( hx::Null< int >  length,hx::Null< bool >  reclaim);
		static Dynamic constructShortArray_dyn();

		static ::org::gameplay3d::util::IMutableNativeArray constructUshortArray( hx::Null< int >  length,hx::Null< bool >  reclaim);
		static Dynamic constructUshortArray_dyn();

		static ::org::gameplay3d::util::IMutableNativeArray constructCharArray( hx::Null< int >  length,hx::Null< bool >  reclaim);
		static Dynamic constructCharArray_dyn();

		static ::org::gameplay3d::util::IMutableNativeArray constructByteArray( hx::Null< int >  length,hx::Null< bool >  reclaim);
		static Dynamic constructByteArray_dyn();

		static ::org::gameplay3d::util::IMutableNativeArray constructFloatArray( hx::Null< int >  length,hx::Null< bool >  reclaim);
		static Dynamic constructFloatArray_dyn();

		static ::org::gameplay3d::util::IMutableNativeArray constructDoubleArray( hx::Null< int >  length,hx::Null< bool >  reclaim);
		static Dynamic constructDoubleArray_dyn();

		static Dynamic allocNativeArrayInt;
		static Dynamic &allocNativeArrayInt_dyn() { return allocNativeArrayInt;}
		static Dynamic allocNativeArrayUint;
		static Dynamic &allocNativeArrayUint_dyn() { return allocNativeArrayUint;}
		static Dynamic allocNativeArrayShort;
		static Dynamic &allocNativeArrayShort_dyn() { return allocNativeArrayShort;}
		static Dynamic allocNativeArrayUshort;
		static Dynamic &allocNativeArrayUshort_dyn() { return allocNativeArrayUshort;}
		static Dynamic allocNativeArrayChar;
		static Dynamic &allocNativeArrayChar_dyn() { return allocNativeArrayChar;}
		static Dynamic allocNativeArrayByte;
		static Dynamic &allocNativeArrayByte_dyn() { return allocNativeArrayByte;}
		static Dynamic allocNativeArrayFloat;
		static Dynamic &allocNativeArrayFloat_dyn() { return allocNativeArrayFloat;}
		static Dynamic allocNativeArrayDouble;
		static Dynamic &allocNativeArrayDouble_dyn() { return allocNativeArrayDouble;}
		static Dynamic getNativeArrayElementInt;
		static Dynamic &getNativeArrayElementInt_dyn() { return getNativeArrayElementInt;}
		static Dynamic getNativeArrayElementUint;
		static Dynamic &getNativeArrayElementUint_dyn() { return getNativeArrayElementUint;}
		static Dynamic getNativeArrayElementShort;
		static Dynamic &getNativeArrayElementShort_dyn() { return getNativeArrayElementShort;}
		static Dynamic getNativeArrayElementUshort;
		static Dynamic &getNativeArrayElementUshort_dyn() { return getNativeArrayElementUshort;}
		static Dynamic getNativeArrayElementChar;
		static Dynamic &getNativeArrayElementChar_dyn() { return getNativeArrayElementChar;}
		static Dynamic getNativeArrayElementByte;
		static Dynamic &getNativeArrayElementByte_dyn() { return getNativeArrayElementByte;}
		static Dynamic getNativeArrayElementFloat;
		static Dynamic &getNativeArrayElementFloat_dyn() { return getNativeArrayElementFloat;}
		static Dynamic getNativeArrayElementDouble;
		static Dynamic &getNativeArrayElementDouble_dyn() { return getNativeArrayElementDouble;}
		static Dynamic setNativeArrayElementInt;
		static Dynamic &setNativeArrayElementInt_dyn() { return setNativeArrayElementInt;}
		static Dynamic setNativeArrayElementUint;
		static Dynamic &setNativeArrayElementUint_dyn() { return setNativeArrayElementUint;}
		static Dynamic setNativeArrayElementShort;
		static Dynamic &setNativeArrayElementShort_dyn() { return setNativeArrayElementShort;}
		static Dynamic setNativeArrayElementUshort;
		static Dynamic &setNativeArrayElementUshort_dyn() { return setNativeArrayElementUshort;}
		static Dynamic setNativeArrayElementChar;
		static Dynamic &setNativeArrayElementChar_dyn() { return setNativeArrayElementChar;}
		static Dynamic setNativeArrayElementByte;
		static Dynamic &setNativeArrayElementByte_dyn() { return setNativeArrayElementByte;}
		static Dynamic setNativeArrayElementFloat;
		static Dynamic &setNativeArrayElementFloat_dyn() { return setNativeArrayElementFloat;}
		static Dynamic setNativeArrayElementDouble;
		static Dynamic &setNativeArrayElementDouble_dyn() { return setNativeArrayElementDouble;}
};

} // end namespace org
} // end namespace gameplay3d
} // end namespace util

#endif /* INCLUDED_org_gameplay3d_util_PrimitiveArray */ 
