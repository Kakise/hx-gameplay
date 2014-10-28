#ifndef INCLUDED_org_gameplay3d_immutable_IRectangle
#define INCLUDED_org_gameplay3d_immutable_IRectangle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/intern/INativeBinding.h>
HX_DECLARE_CLASS3(org,gameplay3d,immutable,IRectangle)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
namespace org{
namespace gameplay3d{
namespace immutable{


class HXCPP_CLASS_ATTRIBUTES  IRectangle_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IRectangle_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Float bottom( )=0;
		Dynamic bottom_dyn();
virtual bool contains_Rct( ::org::gameplay3d::immutable::IRectangle r)=0;
		Dynamic contains_Rct_dyn();
virtual bool contains_FltX2( Float x,Float y)=0;
		Dynamic contains_FltX2_dyn();
virtual bool contains_FltX4( Float x,Float y,Float width,Float height)=0;
		Dynamic contains_FltX4_dyn();
virtual bool intersects_Rct( ::org::gameplay3d::immutable::IRectangle r)=0;
		Dynamic intersects_Rct_dyn();
virtual bool intersects_FltX4( Float x,Float y,Float width,Float height)=0;
		Dynamic intersects_FltX4_dyn();
virtual bool isEmpty( )=0;
		Dynamic isEmpty_dyn();
virtual Float left( )=0;
		Dynamic left_dyn();
virtual Float right( )=0;
		Dynamic right_dyn();
virtual Float top( )=0;
		Dynamic top_dyn();
};

#define DELEGATE_org_gameplay3d_immutable_IRectangle \
virtual Float bottom( ) { return mDelegate->bottom();}  \
virtual Dynamic bottom_dyn() { return mDelegate->bottom_dyn();}  \
virtual bool contains_Rct( ::org::gameplay3d::immutable::IRectangle r) { return mDelegate->contains_Rct(r);}  \
virtual Dynamic contains_Rct_dyn() { return mDelegate->contains_Rct_dyn();}  \
virtual bool contains_FltX2( Float x,Float y) { return mDelegate->contains_FltX2(x,y);}  \
virtual Dynamic contains_FltX2_dyn() { return mDelegate->contains_FltX2_dyn();}  \
virtual bool contains_FltX4( Float x,Float y,Float width,Float height) { return mDelegate->contains_FltX4(x,y,width,height);}  \
virtual Dynamic contains_FltX4_dyn() { return mDelegate->contains_FltX4_dyn();}  \
virtual bool intersects_Rct( ::org::gameplay3d::immutable::IRectangle r) { return mDelegate->intersects_Rct(r);}  \
virtual Dynamic intersects_Rct_dyn() { return mDelegate->intersects_Rct_dyn();}  \
virtual bool intersects_FltX4( Float x,Float y,Float width,Float height) { return mDelegate->intersects_FltX4(x,y,width,height);}  \
virtual Dynamic intersects_FltX4_dyn() { return mDelegate->intersects_FltX4_dyn();}  \
virtual bool isEmpty( ) { return mDelegate->isEmpty();}  \
virtual Dynamic isEmpty_dyn() { return mDelegate->isEmpty_dyn();}  \
virtual Float left( ) { return mDelegate->left();}  \
virtual Dynamic left_dyn() { return mDelegate->left_dyn();}  \
virtual Float right( ) { return mDelegate->right();}  \
virtual Dynamic right_dyn() { return mDelegate->right_dyn();}  \
virtual Float top( ) { return mDelegate->top();}  \
virtual Dynamic top_dyn() { return mDelegate->top_dyn();}  \


template<typename IMPL>
class IRectangle_delegate_ : public IRectangle_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IRectangle_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_org_gameplay3d_immutable_IRectangle
};

} // end namespace org
} // end namespace gameplay3d
} // end namespace immutable

#endif /* INCLUDED_org_gameplay3d_immutable_IRectangle */ 
