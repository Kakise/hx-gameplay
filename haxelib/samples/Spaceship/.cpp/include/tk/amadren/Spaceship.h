#ifndef INCLUDED_tk_amadren_Spaceship
#define INCLUDED_tk_amadren_Spaceship

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/Game.h>
HX_DECLARE_CLASS2(org,gameplay3d,Font)
HX_DECLARE_CLASS2(org,gameplay3d,Game)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS2(tk,amadren,Spaceship)
namespace tk{
namespace amadren{


class HXCPP_CLASS_ATTRIBUTES  Spaceship_obj : public ::org::gameplay3d::Game_obj{
	public:
		typedef ::org::gameplay3d::Game_obj super;
		typedef Spaceship_obj OBJ_;
		Spaceship_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Spaceship_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Spaceship_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Spaceship"); }

		::org::gameplay3d::Font _font;
		int _x;
		int _y;
		virtual Void initialize( );

		virtual Void finalize( );

		virtual Void update( Float elapsedTime);

		virtual Void render( Float elapsedTime);

		virtual Void keyEvent( int evt,int key);

		virtual Void touchEvent( int evt,int x,int y,int contactIndex);

		virtual bool mouseEvent( int evt,int x,int y,int wheelDelta);

		static ::tk::amadren::Spaceship make( );
		static Dynamic make_dyn();

		static Void main( );
		static Dynamic main_dyn();

};

} // end namespace tk
} // end namespace amadren

#endif /* INCLUDED_tk_amadren_Spaceship */ 
