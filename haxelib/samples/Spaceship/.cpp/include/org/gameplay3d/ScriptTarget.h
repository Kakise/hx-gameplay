#ifndef INCLUDED_org_gameplay3d_ScriptTarget
#define INCLUDED_org_gameplay3d_ScriptTarget

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/intern/INativeBinding.h>
HX_DECLARE_CLASS2(org,gameplay3d,ScriptTarget)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  ScriptTarget_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef ScriptTarget_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Void addScriptCallback( ::String eventName,::String _function)=0;
		Dynamic addScriptCallback_dyn();
virtual Void removeScriptCallback( ::String eventName,::String _function)=0;
		Dynamic removeScriptCallback_dyn();
};

#define DELEGATE_org_gameplay3d_ScriptTarget \
virtual Void addScriptCallback( ::String eventName,::String _function) { return mDelegate->addScriptCallback(eventName,_function);}  \
virtual Dynamic addScriptCallback_dyn() { return mDelegate->addScriptCallback_dyn();}  \
virtual Void removeScriptCallback( ::String eventName,::String _function) { return mDelegate->removeScriptCallback(eventName,_function);}  \
virtual Dynamic removeScriptCallback_dyn() { return mDelegate->removeScriptCallback_dyn();}  \


template<typename IMPL>
class ScriptTarget_delegate_ : public ScriptTarget_obj
{
	protected:
		IMPL *mDelegate;
	public:
		ScriptTarget_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_org_gameplay3d_ScriptTarget
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_ScriptTarget */ 
