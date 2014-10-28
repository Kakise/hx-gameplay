#ifndef INCLUDED_tk_amadren_test_Test
#define INCLUDED_tk_amadren_test_Test

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/Game.h>
HX_DECLARE_CLASS2(org,gameplay3d,Game)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS3(tk,amadren,test,Test)
namespace tk{
namespace amadren{
namespace test{


class HXCPP_CLASS_ATTRIBUTES  Test_obj : public ::org::gameplay3d::Game_obj{
	public:
		typedef ::org::gameplay3d::Game_obj super;
		typedef Test_obj OBJ_;
		Test_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Test_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Test_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Test"); }

		virtual Void initialize( );

		virtual Void finalize( );

		virtual Void update( Float elapsedTime);

		virtual Void render( Float elapsedTime);

		virtual Void keyEvent( int evt,int key);

		virtual Void touchEvent( int evt,int x,int y,int contactIndex);

		virtual bool mouseEvent( int evt,int x,int y,int wheelDelta);

		static ::tk::amadren::test::Test make( );
		static Dynamic make_dyn();

		static Void main( );
		static Dynamic main_dyn();

};

} // end namespace tk
} // end namespace amadren
} // end namespace test

#endif /* INCLUDED_tk_amadren_test_Test */ 
