#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_cpp_vm_WeakRef
#include <cpp/vm/WeakRef.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Effect
#include <org/gameplay3d/Effect.h>
#endif
#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Material
#include <org/gameplay3d/Material.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Matrix
#include <org/gameplay3d/Matrix.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Ref
#include <org/gameplay3d/Ref.h>
#endif
#ifndef INCLUDED_org_gameplay3d_RenderState
#include <org/gameplay3d/RenderState.h>
#endif
#ifndef INCLUDED_org_gameplay3d_RenderState_StateBlock
#include <org/gameplay3d/RenderState_StateBlock.h>
#endif
#ifndef INCLUDED_org_gameplay3d_SpriteBatch
#include <org/gameplay3d/SpriteBatch.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Texture
#include <org/gameplay3d/Texture.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Texture_Sampler
#include <org/gameplay3d/Texture_Sampler.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IMatrix
#include <org/gameplay3d/immutable/IMatrix.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IRectangle
#include <org/gameplay3d/immutable/IRectangle.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IVector2
#include <org/gameplay3d/immutable/IVector2.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IVector3
#include <org/gameplay3d/immutable/IVector3.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IVector4
#include <org/gameplay3d/immutable/IVector4.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_INativeBinding
#include <org/gameplay3d/intern/INativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_NativeBinding
#include <org/gameplay3d/intern/NativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_NativeInterface
#include <org/gameplay3d/util/NativeInterface.h>
#endif
namespace org{
namespace gameplay3d{

Void SpriteBatch_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.SpriteBatch","new",0xca07a5da,"org.gameplay3d.SpriteBatch.new","org/gameplay3d/SpriteBatch.hx",16,0x78ed5876)
HX_STACK_THIS(this)
HX_STACK_ARG(nativeObjectInitializer,"nativeObjectInitializer")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(16)
	super::__construct(nativeObjectInitializer,nativeObjectInitializerParams);
}
;
	return null();
}

//SpriteBatch_obj::~SpriteBatch_obj() { }

Dynamic SpriteBatch_obj::__CreateEmpty() { return  new SpriteBatch_obj; }
hx::ObjectPtr< SpriteBatch_obj > SpriteBatch_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< SpriteBatch_obj > result = new SpriteBatch_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic SpriteBatch_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SpriteBatch_obj > result = new SpriteBatch_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void SpriteBatch_obj::draw_RctX2_V4( ::org::gameplay3d::immutable::IRectangle dst,::org::gameplay3d::immutable::IRectangle src,::org::gameplay3d::immutable::IVector4 color){
{
		HX_STACK_FRAME("org.gameplay3d.SpriteBatch","draw_RctX2_V4",0x1a8ccb15,"org.gameplay3d.SpriteBatch.draw_RctX2_V4","org/gameplay3d/SpriteBatch.hx",39,0x78ed5876)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dst,"dst")
		HX_STACK_ARG(src,"src")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(39)
		::org::gameplay3d::SpriteBatch_obj::hx_SpriteBatch_draw_RctX2_V4(this->nativeObject,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((src == null()))) ? Dynamic(null()) : Dynamic(src->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((color == null()))) ? Dynamic(null()) : Dynamic(color->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(SpriteBatch_obj,draw_RctX2_V4,(void))

Void SpriteBatch_obj::draw_V3_Rct_V2_V4( ::org::gameplay3d::immutable::IVector3 dst,::org::gameplay3d::immutable::IRectangle src,::org::gameplay3d::immutable::IVector2 scale,::org::gameplay3d::immutable::IVector4 color){
{
		HX_STACK_FRAME("org.gameplay3d.SpriteBatch","draw_V3_Rct_V2_V4",0x8f536318,"org.gameplay3d.SpriteBatch.draw_V3_Rct_V2_V4","org/gameplay3d/SpriteBatch.hx",45,0x78ed5876)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dst,"dst")
		HX_STACK_ARG(src,"src")
		HX_STACK_ARG(scale,"scale")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(45)
		::org::gameplay3d::SpriteBatch_obj::hx_SpriteBatch_draw_V3_Rct_V2_V4(this->nativeObject,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((src == null()))) ? Dynamic(null()) : Dynamic(src->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((scale == null()))) ? Dynamic(null()) : Dynamic(scale->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((color == null()))) ? Dynamic(null()) : Dynamic(color->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(SpriteBatch_obj,draw_V3_Rct_V2_V4,(void))

Void SpriteBatch_obj::draw_V3_Rct_V2_V4_V2_Flt( ::org::gameplay3d::immutable::IVector3 dst,::org::gameplay3d::immutable::IRectangle src,::org::gameplay3d::immutable::IVector2 scale,::org::gameplay3d::immutable::IVector4 color,::org::gameplay3d::immutable::IVector2 rotationPoint,Float rotationAngle){
{
		HX_STACK_FRAME("org.gameplay3d.SpriteBatch","draw_V3_Rct_V2_V4_V2_Flt",0x0a1b8bf2,"org.gameplay3d.SpriteBatch.draw_V3_Rct_V2_V4_V2_Flt","org/gameplay3d/SpriteBatch.hx",51,0x78ed5876)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dst,"dst")
		HX_STACK_ARG(src,"src")
		HX_STACK_ARG(scale,"scale")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(rotationPoint,"rotationPoint")
		HX_STACK_ARG(rotationAngle,"rotationAngle")
		HX_STACK_LINE(51)
		::org::gameplay3d::SpriteBatch_obj::hx_SpriteBatch_draw_V3_Rct_V2_V4_V2_Flt(this->nativeObject,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((src == null()))) ? Dynamic(null()) : Dynamic(src->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((scale == null()))) ? Dynamic(null()) : Dynamic(scale->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((color == null()))) ? Dynamic(null()) : Dynamic(color->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((rotationPoint == null()))) ? Dynamic(null()) : Dynamic(rotationPoint->__Field(HX_CSTRING("nativeObject"),true)) ),rotationAngle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(SpriteBatch_obj,draw_V3_Rct_V2_V4_V2_Flt,(void))

Void SpriteBatch_obj::draw_V3_FltX6_V4_V2_Flt_Bool( ::org::gameplay3d::immutable::IVector3 dst,Float width,Float height,Float u1,Float v1,Float u2,Float v2,::org::gameplay3d::immutable::IVector4 color,::org::gameplay3d::immutable::IVector2 rotationPoint,Float rotationAngle,hx::Null< bool >  __o_positionIsCenter){
bool positionIsCenter = __o_positionIsCenter.Default(false);
	HX_STACK_FRAME("org.gameplay3d.SpriteBatch","draw_V3_FltX6_V4_V2_Flt_Bool",0x22ca23dd,"org.gameplay3d.SpriteBatch.draw_V3_FltX6_V4_V2_Flt_Bool","org/gameplay3d/SpriteBatch.hx",57,0x78ed5876)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dst,"dst")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(u1,"u1")
	HX_STACK_ARG(v1,"v1")
	HX_STACK_ARG(u2,"u2")
	HX_STACK_ARG(v2,"v2")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(rotationPoint,"rotationPoint")
	HX_STACK_ARG(rotationAngle,"rotationAngle")
	HX_STACK_ARG(positionIsCenter,"positionIsCenter")
{
		HX_STACK_LINE(57)
		::org::gameplay3d::SpriteBatch_obj::hx_SpriteBatch_draw_V3_FltX6_V4_V2_Flt_Bool(this->nativeObject,(  (((dst == null()))) ? Dynamic(null()) : Dynamic(dst->__Field(HX_CSTRING("nativeObject"),true)) ),width,height,u1,v1,u2,v2,(  (((color == null()))) ? Dynamic(null()) : Dynamic(color->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((rotationPoint == null()))) ? Dynamic(null()) : Dynamic(rotationPoint->__Field(HX_CSTRING("nativeObject"),true)) ),rotationAngle,positionIsCenter);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC11(SpriteBatch_obj,draw_V3_FltX6_V4_V2_Flt_Bool,(void))

Void SpriteBatch_obj::draw_V3X3_FltX6_V4_V2_Flt( ::org::gameplay3d::immutable::IVector3 position,::org::gameplay3d::immutable::IVector3 right,::org::gameplay3d::immutable::IVector3 forward,Float width,Float height,Float u1,Float v1,Float u2,Float v2,::org::gameplay3d::immutable::IVector4 color,::org::gameplay3d::immutable::IVector2 rotationPoint,Float rotationAngle){
{
		HX_STACK_FRAME("org.gameplay3d.SpriteBatch","draw_V3X3_FltX6_V4_V2_Flt",0xeb9d2827,"org.gameplay3d.SpriteBatch.draw_V3X3_FltX6_V4_V2_Flt","org/gameplay3d/SpriteBatch.hx",63,0x78ed5876)
		HX_STACK_THIS(this)
		HX_STACK_ARG(position,"position")
		HX_STACK_ARG(right,"right")
		HX_STACK_ARG(forward,"forward")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(u1,"u1")
		HX_STACK_ARG(v1,"v1")
		HX_STACK_ARG(u2,"u2")
		HX_STACK_ARG(v2,"v2")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(rotationPoint,"rotationPoint")
		HX_STACK_ARG(rotationAngle,"rotationAngle")
		HX_STACK_LINE(63)
		::org::gameplay3d::SpriteBatch_obj::hx_SpriteBatch_draw_V3X3_FltX6_V4_V2_Flt(this->nativeObject,(  (((position == null()))) ? Dynamic(null()) : Dynamic(position->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((right == null()))) ? Dynamic(null()) : Dynamic(right->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((forward == null()))) ? Dynamic(null()) : Dynamic(forward->__Field(HX_CSTRING("nativeObject"),true)) ),width,height,u1,v1,u2,v2,(  (((color == null()))) ? Dynamic(null()) : Dynamic(color->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((rotationPoint == null()))) ? Dynamic(null()) : Dynamic(rotationPoint->__Field(HX_CSTRING("nativeObject"),true)) ),rotationAngle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC12(SpriteBatch_obj,draw_V3X3_FltX6_V4_V2_Flt,(void))

Void SpriteBatch_obj::draw_FltX8_V4( Float x,Float y,Float width,Float height,Float u1,Float v1,Float u2,Float v2,::org::gameplay3d::immutable::IVector4 color){
{
		HX_STACK_FRAME("org.gameplay3d.SpriteBatch","draw_FltX8_V4",0xe667e624,"org.gameplay3d.SpriteBatch.draw_FltX8_V4","org/gameplay3d/SpriteBatch.hx",69,0x78ed5876)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(u1,"u1")
		HX_STACK_ARG(v1,"v1")
		HX_STACK_ARG(u2,"u2")
		HX_STACK_ARG(v2,"v2")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(69)
		::org::gameplay3d::SpriteBatch_obj::hx_SpriteBatch_draw_FltX8_V4(this->nativeObject,x,y,width,height,u1,v1,u2,v2,(  (((color == null()))) ? Dynamic(null()) : Dynamic(color->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC9(SpriteBatch_obj,draw_FltX8_V4,(void))

Void SpriteBatch_obj::draw_FltX8_V4_Rct( Float x,Float y,Float width,Float height,Float u1,Float v1,Float u2,Float v2,::org::gameplay3d::immutable::IVector4 color,::org::gameplay3d::immutable::IRectangle clip){
{
		HX_STACK_FRAME("org.gameplay3d.SpriteBatch","draw_FltX8_V4_Rct",0xc8c99ca8,"org.gameplay3d.SpriteBatch.draw_FltX8_V4_Rct","org/gameplay3d/SpriteBatch.hx",75,0x78ed5876)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(u1,"u1")
		HX_STACK_ARG(v1,"v1")
		HX_STACK_ARG(u2,"u2")
		HX_STACK_ARG(v2,"v2")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(clip,"clip")
		HX_STACK_LINE(75)
		::org::gameplay3d::SpriteBatch_obj::hx_SpriteBatch_draw_FltX8_V4_Rct(this->nativeObject,x,y,width,height,u1,v1,u2,v2,(  (((color == null()))) ? Dynamic(null()) : Dynamic(color->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((clip == null()))) ? Dynamic(null()) : Dynamic(clip->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC10(SpriteBatch_obj,draw_FltX8_V4_Rct,(void))

Void SpriteBatch_obj::draw_FltX9_V4_Bool( Float x,Float y,Float z,Float width,Float height,Float u1,Float v1,Float u2,Float v2,::org::gameplay3d::immutable::IVector4 color,hx::Null< bool >  __o_positionIsCenter){
bool positionIsCenter = __o_positionIsCenter.Default(false);
	HX_STACK_FRAME("org.gameplay3d.SpriteBatch","draw_FltX9_V4_Bool",0xb0068c86,"org.gameplay3d.SpriteBatch.draw_FltX9_V4_Bool","org/gameplay3d/SpriteBatch.hx",81,0x78ed5876)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(z,"z")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(u1,"u1")
	HX_STACK_ARG(v1,"v1")
	HX_STACK_ARG(u2,"u2")
	HX_STACK_ARG(v2,"v2")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(positionIsCenter,"positionIsCenter")
{
		HX_STACK_LINE(81)
		::org::gameplay3d::SpriteBatch_obj::hx_SpriteBatch_draw_FltX9_V4_Bool(this->nativeObject,x,y,z,width,height,u1,v1,u2,v2,(  (((color == null()))) ? Dynamic(null()) : Dynamic(color->__Field(HX_CSTRING("nativeObject"),true)) ),positionIsCenter);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC11(SpriteBatch_obj,draw_FltX9_V4_Bool,(void))

Void SpriteBatch_obj::draw_FltX9_V4_V2_Flt_Bool( Float x,Float y,Float z,Float width,Float height,Float u1,Float v1,Float u2,Float v2,::org::gameplay3d::immutable::IVector4 color,::org::gameplay3d::immutable::IVector2 rotationPoint,Float rotationAngle,hx::Null< bool >  __o_positionIsCenter){
bool positionIsCenter = __o_positionIsCenter.Default(false);
	HX_STACK_FRAME("org.gameplay3d.SpriteBatch","draw_FltX9_V4_V2_Flt_Bool",0xe212c122,"org.gameplay3d.SpriteBatch.draw_FltX9_V4_V2_Flt_Bool","org/gameplay3d/SpriteBatch.hx",87,0x78ed5876)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(z,"z")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(u1,"u1")
	HX_STACK_ARG(v1,"v1")
	HX_STACK_ARG(u2,"u2")
	HX_STACK_ARG(v2,"v2")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(rotationPoint,"rotationPoint")
	HX_STACK_ARG(rotationAngle,"rotationAngle")
	HX_STACK_ARG(positionIsCenter,"positionIsCenter")
{
		HX_STACK_LINE(87)
		::org::gameplay3d::SpriteBatch_obj::hx_SpriteBatch_draw_FltX9_V4_V2_Flt_Bool(this->nativeObject,x,y,z,width,height,u1,v1,u2,v2,(  (((color == null()))) ? Dynamic(null()) : Dynamic(color->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((rotationPoint == null()))) ? Dynamic(null()) : Dynamic(rotationPoint->__Field(HX_CSTRING("nativeObject"),true)) ),rotationAngle,positionIsCenter);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC13(SpriteBatch_obj,draw_FltX9_V4_V2_Flt_Bool,(void))

Void SpriteBatch_obj::finish( ){
{
		HX_STACK_FRAME("org.gameplay3d.SpriteBatch","finish",0xa9c29319,"org.gameplay3d.SpriteBatch.finish","org/gameplay3d/SpriteBatch.hx",93,0x78ed5876)
		HX_STACK_THIS(this)
		HX_STACK_LINE(93)
		::org::gameplay3d::SpriteBatch_obj::hx_SpriteBatch_finish(this->nativeObject);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SpriteBatch_obj,finish,(void))

::org::gameplay3d::Material SpriteBatch_obj::getMaterial( ){
	HX_STACK_FRAME("org.gameplay3d.SpriteBatch","getMaterial",0xaeb5fed7,"org.gameplay3d.SpriteBatch.getMaterial","org/gameplay3d/SpriteBatch.hx",99,0x78ed5876)
	HX_STACK_THIS(this)
	HX_STACK_LINE(99)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Material >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(99)
	Dynamic nativeObject = ::org::gameplay3d::SpriteBatch_obj::hx_SpriteBatch_getMaterial(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(99)
	if (((nativeObject == null()))){
		HX_STACK_LINE(99)
		return null();
	}
	else{
		HX_STACK_LINE(99)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(99)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(99)
			::org::gameplay3d::Material result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(99)
			if (((result == null()))){
				HX_STACK_LINE(99)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(99)
				::org::gameplay3d::Material _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(99)
				result = _g;
				HX_STACK_LINE(99)
				ref->set(result);
			}
			HX_STACK_LINE(99)
			return result;
		}
		else{
			HX_STACK_LINE(99)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(99)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(99)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SpriteBatch_obj,getMaterial,return )

::org::gameplay3d::immutable::IMatrix SpriteBatch_obj::getProjectionMatrix( ){
	HX_STACK_FRAME("org.gameplay3d.SpriteBatch","getProjectionMatrix",0x7081da60,"org.gameplay3d.SpriteBatch.getProjectionMatrix","org/gameplay3d/SpriteBatch.hx",105,0x78ed5876)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_projectionMatrix == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Matrix _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Matrix >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(105)
			Dynamic nativeObject = ::org::gameplay3d::SpriteBatch_obj::hx_SpriteBatch_getProjectionMatrix(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
			HX_STACK_LINE(29)
			if (((nativeObject == null()))){
				HX_STACK_LINE(29)
				_g1 = null();
			}
			else{
				HX_STACK_LINE(29)
				if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
					HX_STACK_LINE(29)
					::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
					HX_STACK_LINE(29)
					::org::gameplay3d::Matrix result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Matrix _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(29)
						result = _g;
						HX_STACK_LINE(29)
						ref->set(result);
					}
					HX_STACK_LINE(29)
					_g1 = result;
				}
				else{
					HX_STACK_LINE(29)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
					HX_STACK_LINE(29)
					_g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
				}
			}
		}
		HX_STACK_LINE(29)
		return this->_projectionMatrix = _g1;
	}
	else{
		HX_STACK_LINE(105)
		Dynamic _g2 = ::org::gameplay3d::SpriteBatch_obj::hx_SpriteBatch_getProjectionMatrix(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Matrix _g3 = this->_projectionMatrix->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_projectionMatrix = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SpriteBatch_obj,getProjectionMatrix,return )

::org::gameplay3d::Texture_Sampler SpriteBatch_obj::getSampler( ){
	HX_STACK_FRAME("org.gameplay3d.SpriteBatch","getSampler",0x30d678d8,"org.gameplay3d.SpriteBatch.getSampler","org/gameplay3d/SpriteBatch.hx",111,0x78ed5876)
	HX_STACK_THIS(this)
	HX_STACK_LINE(111)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Texture_Sampler >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(111)
	Dynamic nativeObject = ::org::gameplay3d::SpriteBatch_obj::hx_SpriteBatch_getSampler(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(111)
	if (((nativeObject == null()))){
		HX_STACK_LINE(111)
		return null();
	}
	else{
		HX_STACK_LINE(111)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(111)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(111)
			::org::gameplay3d::Texture_Sampler result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(111)
			if (((result == null()))){
				HX_STACK_LINE(111)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(111)
				::org::gameplay3d::Texture_Sampler _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(111)
				result = _g;
				HX_STACK_LINE(111)
				ref->set(result);
			}
			HX_STACK_LINE(111)
			return result;
		}
		else{
			HX_STACK_LINE(111)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(111)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(111)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SpriteBatch_obj,getSampler,return )

::org::gameplay3d::RenderState_StateBlock SpriteBatch_obj::getStateBlock( ){
	HX_STACK_FRAME("org.gameplay3d.SpriteBatch","getStateBlock",0x02055fac,"org.gameplay3d.SpriteBatch.getStateBlock","org/gameplay3d/SpriteBatch.hx",117,0x78ed5876)
	HX_STACK_THIS(this)
	HX_STACK_LINE(117)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::RenderState_StateBlock >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(117)
	Dynamic nativeObject = ::org::gameplay3d::SpriteBatch_obj::hx_SpriteBatch_getStateBlock(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(117)
	if (((nativeObject == null()))){
		HX_STACK_LINE(117)
		return null();
	}
	else{
		HX_STACK_LINE(117)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(117)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(117)
			::org::gameplay3d::RenderState_StateBlock result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(117)
			if (((result == null()))){
				HX_STACK_LINE(117)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(117)
				::org::gameplay3d::RenderState_StateBlock _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(117)
				result = _g;
				HX_STACK_LINE(117)
				ref->set(result);
			}
			HX_STACK_LINE(117)
			return result;
		}
		else{
			HX_STACK_LINE(117)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(117)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(117)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SpriteBatch_obj,getStateBlock,return )

Void SpriteBatch_obj::setProjectionMatrix( ::org::gameplay3d::immutable::IMatrix matrix){
{
		HX_STACK_FRAME("org.gameplay3d.SpriteBatch","setProjectionMatrix",0xad1ecd6c,"org.gameplay3d.SpriteBatch.setProjectionMatrix","org/gameplay3d/SpriteBatch.hx",123,0x78ed5876)
		HX_STACK_THIS(this)
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(123)
		::org::gameplay3d::SpriteBatch_obj::hx_SpriteBatch_setProjectionMatrix(this->nativeObject,(  (((matrix == null()))) ? Dynamic(null()) : Dynamic(matrix->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SpriteBatch_obj,setProjectionMatrix,(void))

Void SpriteBatch_obj::start( ){
{
		HX_STACK_FRAME("org.gameplay3d.SpriteBatch","start",0x027b1c5c,"org.gameplay3d.SpriteBatch.start","org/gameplay3d/SpriteBatch.hx",129,0x78ed5876)
		HX_STACK_THIS(this)
		HX_STACK_LINE(129)
		::org::gameplay3d::SpriteBatch_obj::hx_SpriteBatch_start(this->nativeObject);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SpriteBatch_obj,start,(void))

::org::gameplay3d::SpriteBatch SpriteBatch_obj::create_Tex_Eff_Int( ::org::gameplay3d::Texture texture,::org::gameplay3d::Effect effect,hx::Null< int >  __o_initialCapacity){
int initialCapacity = __o_initialCapacity.Default(0);
	HX_STACK_FRAME("org.gameplay3d.SpriteBatch","create_Tex_Eff_Int",0xe7bd1620,"org.gameplay3d.SpriteBatch.create_Tex_Eff_Int","org/gameplay3d/SpriteBatch.hx",27,0x78ed5876)
	HX_STACK_ARG(texture,"texture")
	HX_STACK_ARG(effect,"effect")
	HX_STACK_ARG(initialCapacity,"initialCapacity")
{
		HX_STACK_LINE(27)
		::Class classObj = hx::ClassOf< ::org::gameplay3d::SpriteBatch >();		HX_STACK_VAR(classObj,"classObj");
		HX_STACK_LINE(27)
		Dynamic nativeObject = ::org::gameplay3d::SpriteBatch_obj::hx_SpriteBatch_static_create_Tex_Eff_Int((  (((texture == null()))) ? Dynamic(null()) : Dynamic(texture->nativeObject) ),(  (((effect == null()))) ? Dynamic(null()) : Dynamic(effect->nativeObject) ),initialCapacity);		HX_STACK_VAR(nativeObject,"nativeObject");
		HX_STACK_LINE(27)
		if (((nativeObject == null()))){
			HX_STACK_LINE(27)
			return null();
		}
		else{
			HX_STACK_LINE(27)
			if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
				HX_STACK_LINE(27)
				::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
				HX_STACK_LINE(27)
				::org::gameplay3d::SpriteBatch result = ref->get();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(27)
				if (((result == null()))){
					HX_STACK_LINE(27)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
					HX_STACK_LINE(27)
					::org::gameplay3d::SpriteBatch _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(27)
					result = _g;
					HX_STACK_LINE(27)
					ref->set(result);
				}
				HX_STACK_LINE(27)
				return result;
			}
			else{
				HX_STACK_LINE(27)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
				HX_STACK_LINE(27)
				return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
			}
		}
		HX_STACK_LINE(27)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(SpriteBatch_obj,create_Tex_Eff_Int,return )

::org::gameplay3d::SpriteBatch SpriteBatch_obj::create_Str_Eff_Int( ::String texturePath,::org::gameplay3d::Effect effect,hx::Null< int >  __o_initialCapacity){
int initialCapacity = __o_initialCapacity.Default(0);
	HX_STACK_FRAME("org.gameplay3d.SpriteBatch","create_Str_Eff_Int",0xb9933aea,"org.gameplay3d.SpriteBatch.create_Str_Eff_Int","org/gameplay3d/SpriteBatch.hx",33,0x78ed5876)
	HX_STACK_ARG(texturePath,"texturePath")
	HX_STACK_ARG(effect,"effect")
	HX_STACK_ARG(initialCapacity,"initialCapacity")
{
		HX_STACK_LINE(33)
		::Class classObj = hx::ClassOf< ::org::gameplay3d::SpriteBatch >();		HX_STACK_VAR(classObj,"classObj");
		HX_STACK_LINE(33)
		Dynamic nativeObject = ::org::gameplay3d::SpriteBatch_obj::hx_SpriteBatch_static_create_Str_Eff_Int(texturePath,(  (((effect == null()))) ? Dynamic(null()) : Dynamic(effect->nativeObject) ),initialCapacity);		HX_STACK_VAR(nativeObject,"nativeObject");
		HX_STACK_LINE(33)
		if (((nativeObject == null()))){
			HX_STACK_LINE(33)
			return null();
		}
		else{
			HX_STACK_LINE(33)
			if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
				HX_STACK_LINE(33)
				::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
				HX_STACK_LINE(33)
				::org::gameplay3d::SpriteBatch result = ref->get();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(33)
				if (((result == null()))){
					HX_STACK_LINE(33)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
					HX_STACK_LINE(33)
					::org::gameplay3d::SpriteBatch _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(33)
					result = _g;
					HX_STACK_LINE(33)
					ref->set(result);
				}
				HX_STACK_LINE(33)
				return result;
			}
			else{
				HX_STACK_LINE(33)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
				HX_STACK_LINE(33)
				return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
			}
		}
		HX_STACK_LINE(33)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(SpriteBatch_obj,create_Str_Eff_Int,return )

Dynamic SpriteBatch_obj::hx_SpriteBatch_static_create_Tex_Eff_Int;

Dynamic SpriteBatch_obj::hx_SpriteBatch_static_create_Str_Eff_Int;

Dynamic SpriteBatch_obj::hx_SpriteBatch_draw_RctX2_V4;

Dynamic SpriteBatch_obj::hx_SpriteBatch_draw_V3_Rct_V2_V4;

Dynamic SpriteBatch_obj::hx_SpriteBatch_draw_V3_Rct_V2_V4_V2_Flt;

Dynamic SpriteBatch_obj::hx_SpriteBatch_draw_V3_FltX6_V4_V2_Flt_Bool;

Dynamic SpriteBatch_obj::hx_SpriteBatch_draw_V3X3_FltX6_V4_V2_Flt;

Dynamic SpriteBatch_obj::hx_SpriteBatch_draw_FltX8_V4;

Dynamic SpriteBatch_obj::hx_SpriteBatch_draw_FltX8_V4_Rct;

Dynamic SpriteBatch_obj::hx_SpriteBatch_draw_FltX9_V4_Bool;

Dynamic SpriteBatch_obj::hx_SpriteBatch_draw_FltX9_V4_V2_Flt_Bool;

Dynamic SpriteBatch_obj::hx_SpriteBatch_finish;

Dynamic SpriteBatch_obj::hx_SpriteBatch_getMaterial;

Dynamic SpriteBatch_obj::hx_SpriteBatch_getProjectionMatrix;

Dynamic SpriteBatch_obj::hx_SpriteBatch_getSampler;

Dynamic SpriteBatch_obj::hx_SpriteBatch_getStateBlock;

Dynamic SpriteBatch_obj::hx_SpriteBatch_setProjectionMatrix;

Dynamic SpriteBatch_obj::hx_SpriteBatch_start;


SpriteBatch_obj::SpriteBatch_obj()
{
}

void SpriteBatch_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SpriteBatch);
	HX_MARK_MEMBER_NAME(_projectionMatrix,"_projectionMatrix");
	::org::gameplay3d::intern::NativeBinding_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SpriteBatch_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_projectionMatrix,"_projectionMatrix");
	::org::gameplay3d::intern::NativeBinding_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SpriteBatch_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"finish") ) { return finish_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getSampler") ) { return getSampler_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getMaterial") ) { return getMaterial_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"draw_RctX2_V4") ) { return draw_RctX2_V4_dyn(); }
		if (HX_FIELD_EQ(inName,"draw_FltX8_V4") ) { return draw_FltX8_V4_dyn(); }
		if (HX_FIELD_EQ(inName,"getStateBlock") ) { return getStateBlock_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_projectionMatrix") ) { return _projectionMatrix; }
		if (HX_FIELD_EQ(inName,"draw_V3_Rct_V2_V4") ) { return draw_V3_Rct_V2_V4_dyn(); }
		if (HX_FIELD_EQ(inName,"draw_FltX8_V4_Rct") ) { return draw_FltX8_V4_Rct_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"create_Tex_Eff_Int") ) { return create_Tex_Eff_Int_dyn(); }
		if (HX_FIELD_EQ(inName,"create_Str_Eff_Int") ) { return create_Str_Eff_Int_dyn(); }
		if (HX_FIELD_EQ(inName,"draw_FltX9_V4_Bool") ) { return draw_FltX9_V4_Bool_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getProjectionMatrix") ) { return getProjectionMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"setProjectionMatrix") ) { return setProjectionMatrix_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_SpriteBatch_start") ) { return hx_SpriteBatch_start; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hx_SpriteBatch_finish") ) { return hx_SpriteBatch_finish; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"draw_V3_Rct_V2_V4_V2_Flt") ) { return draw_V3_Rct_V2_V4_V2_Flt_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_SpriteBatch_getSampler") ) { return hx_SpriteBatch_getSampler; }
		if (HX_FIELD_EQ(inName,"draw_V3X3_FltX6_V4_V2_Flt") ) { return draw_V3X3_FltX6_V4_V2_Flt_dyn(); }
		if (HX_FIELD_EQ(inName,"draw_FltX9_V4_V2_Flt_Bool") ) { return draw_FltX9_V4_V2_Flt_Bool_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_SpriteBatch_getMaterial") ) { return hx_SpriteBatch_getMaterial; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_SpriteBatch_draw_RctX2_V4") ) { return hx_SpriteBatch_draw_RctX2_V4; }
		if (HX_FIELD_EQ(inName,"hx_SpriteBatch_draw_FltX8_V4") ) { return hx_SpriteBatch_draw_FltX8_V4; }
		if (HX_FIELD_EQ(inName,"hx_SpriteBatch_getStateBlock") ) { return hx_SpriteBatch_getStateBlock; }
		if (HX_FIELD_EQ(inName,"draw_V3_FltX6_V4_V2_Flt_Bool") ) { return draw_V3_FltX6_V4_V2_Flt_Bool_dyn(); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"hx_SpriteBatch_draw_V3_Rct_V2_V4") ) { return hx_SpriteBatch_draw_V3_Rct_V2_V4; }
		if (HX_FIELD_EQ(inName,"hx_SpriteBatch_draw_FltX8_V4_Rct") ) { return hx_SpriteBatch_draw_FltX8_V4_Rct; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"hx_SpriteBatch_draw_FltX9_V4_Bool") ) { return hx_SpriteBatch_draw_FltX9_V4_Bool; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"hx_SpriteBatch_getProjectionMatrix") ) { return hx_SpriteBatch_getProjectionMatrix; }
		if (HX_FIELD_EQ(inName,"hx_SpriteBatch_setProjectionMatrix") ) { return hx_SpriteBatch_setProjectionMatrix; }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"hx_SpriteBatch_draw_V3_Rct_V2_V4_V2_Flt") ) { return hx_SpriteBatch_draw_V3_Rct_V2_V4_V2_Flt; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"hx_SpriteBatch_static_create_Tex_Eff_Int") ) { return hx_SpriteBatch_static_create_Tex_Eff_Int; }
		if (HX_FIELD_EQ(inName,"hx_SpriteBatch_static_create_Str_Eff_Int") ) { return hx_SpriteBatch_static_create_Str_Eff_Int; }
		if (HX_FIELD_EQ(inName,"hx_SpriteBatch_draw_V3X3_FltX6_V4_V2_Flt") ) { return hx_SpriteBatch_draw_V3X3_FltX6_V4_V2_Flt; }
		if (HX_FIELD_EQ(inName,"hx_SpriteBatch_draw_FltX9_V4_V2_Flt_Bool") ) { return hx_SpriteBatch_draw_FltX9_V4_V2_Flt_Bool; }
		break;
	case 43:
		if (HX_FIELD_EQ(inName,"hx_SpriteBatch_draw_V3_FltX6_V4_V2_Flt_Bool") ) { return hx_SpriteBatch_draw_V3_FltX6_V4_V2_Flt_Bool; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SpriteBatch_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"_projectionMatrix") ) { _projectionMatrix=inValue.Cast< ::org::gameplay3d::Matrix >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_SpriteBatch_start") ) { hx_SpriteBatch_start=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hx_SpriteBatch_finish") ) { hx_SpriteBatch_finish=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_SpriteBatch_getSampler") ) { hx_SpriteBatch_getSampler=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_SpriteBatch_getMaterial") ) { hx_SpriteBatch_getMaterial=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_SpriteBatch_draw_RctX2_V4") ) { hx_SpriteBatch_draw_RctX2_V4=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_SpriteBatch_draw_FltX8_V4") ) { hx_SpriteBatch_draw_FltX8_V4=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_SpriteBatch_getStateBlock") ) { hx_SpriteBatch_getStateBlock=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"hx_SpriteBatch_draw_V3_Rct_V2_V4") ) { hx_SpriteBatch_draw_V3_Rct_V2_V4=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_SpriteBatch_draw_FltX8_V4_Rct") ) { hx_SpriteBatch_draw_FltX8_V4_Rct=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"hx_SpriteBatch_draw_FltX9_V4_Bool") ) { hx_SpriteBatch_draw_FltX9_V4_Bool=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"hx_SpriteBatch_getProjectionMatrix") ) { hx_SpriteBatch_getProjectionMatrix=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_SpriteBatch_setProjectionMatrix") ) { hx_SpriteBatch_setProjectionMatrix=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"hx_SpriteBatch_draw_V3_Rct_V2_V4_V2_Flt") ) { hx_SpriteBatch_draw_V3_Rct_V2_V4_V2_Flt=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"hx_SpriteBatch_static_create_Tex_Eff_Int") ) { hx_SpriteBatch_static_create_Tex_Eff_Int=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_SpriteBatch_static_create_Str_Eff_Int") ) { hx_SpriteBatch_static_create_Str_Eff_Int=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_SpriteBatch_draw_V3X3_FltX6_V4_V2_Flt") ) { hx_SpriteBatch_draw_V3X3_FltX6_V4_V2_Flt=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_SpriteBatch_draw_FltX9_V4_V2_Flt_Bool") ) { hx_SpriteBatch_draw_FltX9_V4_V2_Flt_Bool=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 43:
		if (HX_FIELD_EQ(inName,"hx_SpriteBatch_draw_V3_FltX6_V4_V2_Flt_Bool") ) { hx_SpriteBatch_draw_V3_FltX6_V4_V2_Flt_Bool=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SpriteBatch_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_projectionMatrix"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create_Tex_Eff_Int"),
	HX_CSTRING("create_Str_Eff_Int"),
	HX_CSTRING("hx_SpriteBatch_static_create_Tex_Eff_Int"),
	HX_CSTRING("hx_SpriteBatch_static_create_Str_Eff_Int"),
	HX_CSTRING("hx_SpriteBatch_draw_RctX2_V4"),
	HX_CSTRING("hx_SpriteBatch_draw_V3_Rct_V2_V4"),
	HX_CSTRING("hx_SpriteBatch_draw_V3_Rct_V2_V4_V2_Flt"),
	HX_CSTRING("hx_SpriteBatch_draw_V3_FltX6_V4_V2_Flt_Bool"),
	HX_CSTRING("hx_SpriteBatch_draw_V3X3_FltX6_V4_V2_Flt"),
	HX_CSTRING("hx_SpriteBatch_draw_FltX8_V4"),
	HX_CSTRING("hx_SpriteBatch_draw_FltX8_V4_Rct"),
	HX_CSTRING("hx_SpriteBatch_draw_FltX9_V4_Bool"),
	HX_CSTRING("hx_SpriteBatch_draw_FltX9_V4_V2_Flt_Bool"),
	HX_CSTRING("hx_SpriteBatch_finish"),
	HX_CSTRING("hx_SpriteBatch_getMaterial"),
	HX_CSTRING("hx_SpriteBatch_getProjectionMatrix"),
	HX_CSTRING("hx_SpriteBatch_getSampler"),
	HX_CSTRING("hx_SpriteBatch_getStateBlock"),
	HX_CSTRING("hx_SpriteBatch_setProjectionMatrix"),
	HX_CSTRING("hx_SpriteBatch_start"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::org::gameplay3d::Matrix*/ ,(int)offsetof(SpriteBatch_obj,_projectionMatrix),HX_CSTRING("_projectionMatrix")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_projectionMatrix"),
	HX_CSTRING("draw_RctX2_V4"),
	HX_CSTRING("draw_V3_Rct_V2_V4"),
	HX_CSTRING("draw_V3_Rct_V2_V4_V2_Flt"),
	HX_CSTRING("draw_V3_FltX6_V4_V2_Flt_Bool"),
	HX_CSTRING("draw_V3X3_FltX6_V4_V2_Flt"),
	HX_CSTRING("draw_FltX8_V4"),
	HX_CSTRING("draw_FltX8_V4_Rct"),
	HX_CSTRING("draw_FltX9_V4_Bool"),
	HX_CSTRING("draw_FltX9_V4_V2_Flt_Bool"),
	HX_CSTRING("finish"),
	HX_CSTRING("getMaterial"),
	HX_CSTRING("getProjectionMatrix"),
	HX_CSTRING("getSampler"),
	HX_CSTRING("getStateBlock"),
	HX_CSTRING("setProjectionMatrix"),
	HX_CSTRING("start"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SpriteBatch_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SpriteBatch_obj::hx_SpriteBatch_static_create_Tex_Eff_Int,"hx_SpriteBatch_static_create_Tex_Eff_Int");
	HX_MARK_MEMBER_NAME(SpriteBatch_obj::hx_SpriteBatch_static_create_Str_Eff_Int,"hx_SpriteBatch_static_create_Str_Eff_Int");
	HX_MARK_MEMBER_NAME(SpriteBatch_obj::hx_SpriteBatch_draw_RctX2_V4,"hx_SpriteBatch_draw_RctX2_V4");
	HX_MARK_MEMBER_NAME(SpriteBatch_obj::hx_SpriteBatch_draw_V3_Rct_V2_V4,"hx_SpriteBatch_draw_V3_Rct_V2_V4");
	HX_MARK_MEMBER_NAME(SpriteBatch_obj::hx_SpriteBatch_draw_V3_Rct_V2_V4_V2_Flt,"hx_SpriteBatch_draw_V3_Rct_V2_V4_V2_Flt");
	HX_MARK_MEMBER_NAME(SpriteBatch_obj::hx_SpriteBatch_draw_V3_FltX6_V4_V2_Flt_Bool,"hx_SpriteBatch_draw_V3_FltX6_V4_V2_Flt_Bool");
	HX_MARK_MEMBER_NAME(SpriteBatch_obj::hx_SpriteBatch_draw_V3X3_FltX6_V4_V2_Flt,"hx_SpriteBatch_draw_V3X3_FltX6_V4_V2_Flt");
	HX_MARK_MEMBER_NAME(SpriteBatch_obj::hx_SpriteBatch_draw_FltX8_V4,"hx_SpriteBatch_draw_FltX8_V4");
	HX_MARK_MEMBER_NAME(SpriteBatch_obj::hx_SpriteBatch_draw_FltX8_V4_Rct,"hx_SpriteBatch_draw_FltX8_V4_Rct");
	HX_MARK_MEMBER_NAME(SpriteBatch_obj::hx_SpriteBatch_draw_FltX9_V4_Bool,"hx_SpriteBatch_draw_FltX9_V4_Bool");
	HX_MARK_MEMBER_NAME(SpriteBatch_obj::hx_SpriteBatch_draw_FltX9_V4_V2_Flt_Bool,"hx_SpriteBatch_draw_FltX9_V4_V2_Flt_Bool");
	HX_MARK_MEMBER_NAME(SpriteBatch_obj::hx_SpriteBatch_finish,"hx_SpriteBatch_finish");
	HX_MARK_MEMBER_NAME(SpriteBatch_obj::hx_SpriteBatch_getMaterial,"hx_SpriteBatch_getMaterial");
	HX_MARK_MEMBER_NAME(SpriteBatch_obj::hx_SpriteBatch_getProjectionMatrix,"hx_SpriteBatch_getProjectionMatrix");
	HX_MARK_MEMBER_NAME(SpriteBatch_obj::hx_SpriteBatch_getSampler,"hx_SpriteBatch_getSampler");
	HX_MARK_MEMBER_NAME(SpriteBatch_obj::hx_SpriteBatch_getStateBlock,"hx_SpriteBatch_getStateBlock");
	HX_MARK_MEMBER_NAME(SpriteBatch_obj::hx_SpriteBatch_setProjectionMatrix,"hx_SpriteBatch_setProjectionMatrix");
	HX_MARK_MEMBER_NAME(SpriteBatch_obj::hx_SpriteBatch_start,"hx_SpriteBatch_start");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SpriteBatch_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SpriteBatch_obj::hx_SpriteBatch_static_create_Tex_Eff_Int,"hx_SpriteBatch_static_create_Tex_Eff_Int");
	HX_VISIT_MEMBER_NAME(SpriteBatch_obj::hx_SpriteBatch_static_create_Str_Eff_Int,"hx_SpriteBatch_static_create_Str_Eff_Int");
	HX_VISIT_MEMBER_NAME(SpriteBatch_obj::hx_SpriteBatch_draw_RctX2_V4,"hx_SpriteBatch_draw_RctX2_V4");
	HX_VISIT_MEMBER_NAME(SpriteBatch_obj::hx_SpriteBatch_draw_V3_Rct_V2_V4,"hx_SpriteBatch_draw_V3_Rct_V2_V4");
	HX_VISIT_MEMBER_NAME(SpriteBatch_obj::hx_SpriteBatch_draw_V3_Rct_V2_V4_V2_Flt,"hx_SpriteBatch_draw_V3_Rct_V2_V4_V2_Flt");
	HX_VISIT_MEMBER_NAME(SpriteBatch_obj::hx_SpriteBatch_draw_V3_FltX6_V4_V2_Flt_Bool,"hx_SpriteBatch_draw_V3_FltX6_V4_V2_Flt_Bool");
	HX_VISIT_MEMBER_NAME(SpriteBatch_obj::hx_SpriteBatch_draw_V3X3_FltX6_V4_V2_Flt,"hx_SpriteBatch_draw_V3X3_FltX6_V4_V2_Flt");
	HX_VISIT_MEMBER_NAME(SpriteBatch_obj::hx_SpriteBatch_draw_FltX8_V4,"hx_SpriteBatch_draw_FltX8_V4");
	HX_VISIT_MEMBER_NAME(SpriteBatch_obj::hx_SpriteBatch_draw_FltX8_V4_Rct,"hx_SpriteBatch_draw_FltX8_V4_Rct");
	HX_VISIT_MEMBER_NAME(SpriteBatch_obj::hx_SpriteBatch_draw_FltX9_V4_Bool,"hx_SpriteBatch_draw_FltX9_V4_Bool");
	HX_VISIT_MEMBER_NAME(SpriteBatch_obj::hx_SpriteBatch_draw_FltX9_V4_V2_Flt_Bool,"hx_SpriteBatch_draw_FltX9_V4_V2_Flt_Bool");
	HX_VISIT_MEMBER_NAME(SpriteBatch_obj::hx_SpriteBatch_finish,"hx_SpriteBatch_finish");
	HX_VISIT_MEMBER_NAME(SpriteBatch_obj::hx_SpriteBatch_getMaterial,"hx_SpriteBatch_getMaterial");
	HX_VISIT_MEMBER_NAME(SpriteBatch_obj::hx_SpriteBatch_getProjectionMatrix,"hx_SpriteBatch_getProjectionMatrix");
	HX_VISIT_MEMBER_NAME(SpriteBatch_obj::hx_SpriteBatch_getSampler,"hx_SpriteBatch_getSampler");
	HX_VISIT_MEMBER_NAME(SpriteBatch_obj::hx_SpriteBatch_getStateBlock,"hx_SpriteBatch_getStateBlock");
	HX_VISIT_MEMBER_NAME(SpriteBatch_obj::hx_SpriteBatch_setProjectionMatrix,"hx_SpriteBatch_setProjectionMatrix");
	HX_VISIT_MEMBER_NAME(SpriteBatch_obj::hx_SpriteBatch_start,"hx_SpriteBatch_start");
};

#endif

Class SpriteBatch_obj::__mClass;

void SpriteBatch_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.SpriteBatch"), hx::TCanCast< SpriteBatch_obj> ,sStaticFields,sMemberFields,
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

void SpriteBatch_obj::__boot()
{
	hx_SpriteBatch_static_create_Tex_Eff_Int= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::SpriteBatch >(),HX_CSTRING("static_create_Tex_Eff_Int"),(int)3);
	hx_SpriteBatch_static_create_Str_Eff_Int= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::SpriteBatch >(),HX_CSTRING("static_create_Str_Eff_Int"),(int)3);
	hx_SpriteBatch_draw_RctX2_V4= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::SpriteBatch >(),HX_CSTRING("draw_RctX2_V4"),(int)4);
	hx_SpriteBatch_draw_V3_Rct_V2_V4= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::SpriteBatch >(),HX_CSTRING("draw_V3_Rct_V2_V4"),(int)5);
	hx_SpriteBatch_draw_V3_Rct_V2_V4_V2_Flt= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::SpriteBatch >(),HX_CSTRING("draw_V3_Rct_V2_V4_V2_Flt"),(int)-1);
	hx_SpriteBatch_draw_V3_FltX6_V4_V2_Flt_Bool= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::SpriteBatch >(),HX_CSTRING("draw_V3_FltX6_V4_V2_Flt_Bool"),(int)-1);
	hx_SpriteBatch_draw_V3X3_FltX6_V4_V2_Flt= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::SpriteBatch >(),HX_CSTRING("draw_V3X3_FltX6_V4_V2_Flt"),(int)-1);
	hx_SpriteBatch_draw_FltX8_V4= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::SpriteBatch >(),HX_CSTRING("draw_FltX8_V4"),(int)-1);
	hx_SpriteBatch_draw_FltX8_V4_Rct= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::SpriteBatch >(),HX_CSTRING("draw_FltX8_V4_Rct"),(int)-1);
	hx_SpriteBatch_draw_FltX9_V4_Bool= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::SpriteBatch >(),HX_CSTRING("draw_FltX9_V4_Bool"),(int)-1);
	hx_SpriteBatch_draw_FltX9_V4_V2_Flt_Bool= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::SpriteBatch >(),HX_CSTRING("draw_FltX9_V4_V2_Flt_Bool"),(int)-1);
	hx_SpriteBatch_finish= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::SpriteBatch >(),HX_CSTRING("finish"),(int)1);
	hx_SpriteBatch_getMaterial= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::SpriteBatch >(),HX_CSTRING("getMaterial"),(int)1);
	hx_SpriteBatch_getProjectionMatrix= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::SpriteBatch >(),HX_CSTRING("getProjectionMatrix"),(int)1);
	hx_SpriteBatch_getSampler= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::SpriteBatch >(),HX_CSTRING("getSampler"),(int)1);
	hx_SpriteBatch_getStateBlock= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::SpriteBatch >(),HX_CSTRING("getStateBlock"),(int)1);
	hx_SpriteBatch_setProjectionMatrix= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::SpriteBatch >(),HX_CSTRING("setProjectionMatrix"),(int)2);
	hx_SpriteBatch_start= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::SpriteBatch >(),HX_CSTRING("start"),(int)1);
}

} // end namespace org
} // end namespace gameplay3d
