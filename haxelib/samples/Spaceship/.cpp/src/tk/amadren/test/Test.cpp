#include <hxcpp.h>

#ifndef INCLUDED_org_gameplay3d_Game
#include <org/gameplay3d/Game.h>
#endif
#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Platform
#include <org/gameplay3d/Platform.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_INativeBinding
#include <org/gameplay3d/intern/INativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_NativeBinding
#include <org/gameplay3d/intern/NativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_Handle
#include <org/gameplay3d/util/Handle.h>
#endif
#ifndef INCLUDED_tk_amadren_test_Test
#include <tk/amadren/test/Test.h>
#endif
namespace tk{
namespace amadren{
namespace test{

Void Test_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("tk.amadren.test.Test","new",0xda114dc7,"tk.amadren.test.Test.new","tk/amadren/test/Test.hx",9,0x68201daa)
HX_STACK_THIS(this)
HX_STACK_ARG(nativeObjectInitializer,"nativeObjectInitializer")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(9)
	super::__construct(nativeObjectInitializer,nativeObjectInitializerParams);
}
;
	return null();
}

//Test_obj::~Test_obj() { }

Dynamic Test_obj::__CreateEmpty() { return  new Test_obj; }
hx::ObjectPtr< Test_obj > Test_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< Test_obj > result = new Test_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic Test_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Test_obj > result = new Test_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Test_obj::initialize( ){
{
		HX_STACK_FRAME("tk.amadren.test.Test","initialize",0x19a33ec9,"tk.amadren.test.Test.initialize","tk/amadren/test/Test.hx",24,0x68201daa)
		HX_STACK_THIS(this)
	}
return null();
}


Void Test_obj::finalize( ){
{
		HX_STACK_FRAME("tk.amadren.test.Test","finalize",0x7939d2d7,"tk.amadren.test.Test.finalize","tk/amadren/test/Test.hx",33,0x68201daa)
		HX_STACK_THIS(this)
	}
return null();
}


Void Test_obj::update( Float elapsedTime){
{
		HX_STACK_FRAME("tk.amadren.test.Test","update",0x85292302,"tk.amadren.test.Test.update","tk/amadren/test/Test.hx",42,0x68201daa)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsedTime,"elapsedTime")
	}
return null();
}


Void Test_obj::render( Float elapsedTime){
{
		HX_STACK_FRAME("tk.amadren.test.Test","render",0x034d084f,"tk.amadren.test.Test.render","tk/amadren/test/Test.hx",51,0x68201daa)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsedTime,"elapsedTime")
	}
return null();
}


Void Test_obj::keyEvent( int evt,int key){
{
		HX_STACK_FRAME("tk.amadren.test.Test","keyEvent",0x3e2dfb34,"tk.amadren.test.Test.keyEvent","tk/amadren/test/Test.hx",60,0x68201daa)
		HX_STACK_THIS(this)
		HX_STACK_ARG(evt,"evt")
		HX_STACK_ARG(key,"key")
	}
return null();
}


Void Test_obj::touchEvent( int evt,int x,int y,int contactIndex){
{
		HX_STACK_FRAME("tk.amadren.test.Test","touchEvent",0x9c3db954,"tk.amadren.test.Test.touchEvent","tk/amadren/test/Test.hx",69,0x68201daa)
		HX_STACK_THIS(this)
		HX_STACK_ARG(evt,"evt")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(contactIndex,"contactIndex")
	}
return null();
}


bool Test_obj::mouseEvent( int evt,int x,int y,int wheelDelta){
	HX_STACK_FRAME("tk.amadren.test.Test","mouseEvent",0xc079c92e,"tk.amadren.test.Test.mouseEvent","tk/amadren/test/Test.hx",82,0x68201daa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(evt,"evt")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(wheelDelta,"wheelDelta")
	HX_STACK_LINE(82)
	return false;
}


::tk::amadren::test::Test Test_obj::make( ){
	HX_STACK_FRAME("tk.amadren.test.Test","make",0xf46676a7,"tk.amadren.test.Test.make","tk/amadren/test/Test.hx",13,0x68201daa)
	HX_STACK_LINE(13)
	return ::tk::amadren::test::Test_obj::__new(::org::gameplay3d::Game_obj::constructNativeObject_dyn(),Dynamic( Array_obj<Dynamic>::__new().Add(null())));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Test_obj,make,return )

Void Test_obj::main( ){
{
		HX_STACK_FRAME("tk.amadren.test.Test","main",0xf46674f2,"tk.amadren.test.Test.main","tk/amadren/test/Test.hx",90,0x68201daa)
		HX_STACK_LINE(91)
		::tk::amadren::test::Test _g = ::tk::amadren::test::Test_obj::make();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(91)
		::org::gameplay3d::Platform_obj::create(_g,null())->enterMessagePump();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Test_obj,main,(void))


Test_obj::Test_obj()
{
}

Dynamic Test_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { return make_dyn(); }
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finalize") ) { return finalize_dyn(); }
		if (HX_FIELD_EQ(inName,"keyEvent") ) { return keyEvent_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"touchEvent") ) { return touchEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseEvent") ) { return mouseEvent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Test_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Test_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("make"),
	HX_CSTRING("main"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("initialize"),
	HX_CSTRING("finalize"),
	HX_CSTRING("update"),
	HX_CSTRING("render"),
	HX_CSTRING("keyEvent"),
	HX_CSTRING("touchEvent"),
	HX_CSTRING("mouseEvent"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Test_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Test_obj::__mClass,"__mClass");
};

#endif

Class Test_obj::__mClass;

void Test_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("tk.amadren.test.Test"), hx::TCanCast< Test_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void Test_obj::__boot()
{
}

} // end namespace tk
} // end namespace amadren
} // end namespace test
