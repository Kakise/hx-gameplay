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
#ifndef INCLUDED_org_gameplay3d_AnimationTarget
#include <org/gameplay3d/AnimationTarget.h>
#endif
#ifndef INCLUDED_org_gameplay3d_BoundingBox
#include <org/gameplay3d/BoundingBox.h>
#endif
#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_HeightField
#include <org/gameplay3d/HeightField.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Node
#include <org/gameplay3d/Node.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Properties
#include <org/gameplay3d/Properties.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Ref
#include <org/gameplay3d/Ref.h>
#endif
#ifndef INCLUDED_org_gameplay3d_ScriptTarget
#include <org/gameplay3d/ScriptTarget.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Terrain
#include <org/gameplay3d/Terrain.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Transform
#include <org/gameplay3d/Transform.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Transform_Listener
#include <org/gameplay3d/Transform_Listener.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Vector2
#include <org/gameplay3d/Vector2.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Vector3
#include <org/gameplay3d/Vector3.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IBoundingBox
#include <org/gameplay3d/immutable/IBoundingBox.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IVector2
#include <org/gameplay3d/immutable/IVector2.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IVector3
#include <org/gameplay3d/immutable/IVector3.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_INativeBinding
#include <org/gameplay3d/intern/INativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_NativeBinding
#include <org/gameplay3d/intern/NativeBinding.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_impl_AnimationTarget_ScriptTarget
#include <org/gameplay3d/intern/impl/AnimationTarget_ScriptTarget.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_impl_Transform_ListenerImpl
#include <org/gameplay3d/intern/impl/Transform_ListenerImpl.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_NativeInterface
#include <org/gameplay3d/util/NativeInterface.h>
#endif
namespace org{
namespace gameplay3d{

Void Terrain_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.Terrain","new",0xfa8b729a,"org.gameplay3d.Terrain.new","org/gameplay3d/Terrain.hx",14,0xc89813b6)
HX_STACK_THIS(this)
HX_STACK_ARG(nativeObjectInitializer,"nativeObjectInitializer")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(14)
	super::__construct(nativeObjectInitializer,nativeObjectInitializerParams);
}
;
	return null();
}

//Terrain_obj::~Terrain_obj() { }

Dynamic Terrain_obj::__CreateEmpty() { return  new Terrain_obj; }
hx::ObjectPtr< Terrain_obj > Terrain_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< Terrain_obj > result = new Terrain_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic Terrain_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Terrain_obj > result = new Terrain_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *Terrain_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::intern::INativeBinding_obj)) return operator ::org::gameplay3d::intern::INativeBinding_obj *();
	if (inType==typeid( ::org::gameplay3d::Ref_obj)) return operator ::org::gameplay3d::Ref_obj *();
	return super::__ToInterface(inType);
}

Void Terrain_obj::draw( hx::Null< bool >  __o_wireframe){
bool wireframe = __o_wireframe.Default(false);
	HX_STACK_FRAME("org.gameplay3d.Terrain","draw",0x38e67c8a,"org.gameplay3d.Terrain.draw","org/gameplay3d/Terrain.hx",43,0xc89813b6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(wireframe,"wireframe")
{
		HX_STACK_LINE(43)
		::org::gameplay3d::Terrain_obj::hx_Terrain_draw(this->nativeObject,wireframe);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Terrain_obj,draw,(void))

::org::gameplay3d::immutable::IBoundingBox Terrain_obj::getBoundingBox( ){
	HX_STACK_FRAME("org.gameplay3d.Terrain","getBoundingBox",0xe92c5c17,"org.gameplay3d.Terrain.getBoundingBox","org/gameplay3d/Terrain.hx",49,0xc89813b6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_boundingBox == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::BoundingBox _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::BoundingBox >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(49)
			Dynamic nativeObject = ::org::gameplay3d::Terrain_obj::hx_Terrain_getBoundingBox(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::BoundingBox result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::BoundingBox _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return this->_boundingBox = _g1;
	}
	else{
		HX_STACK_LINE(49)
		Dynamic _g2 = ::org::gameplay3d::Terrain_obj::hx_Terrain_getBoundingBox(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::BoundingBox _g3 = this->_boundingBox->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_boundingBox = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Terrain_obj,getBoundingBox,return )

Float Terrain_obj::getHeight( Float x,Float z){
	HX_STACK_FRAME("org.gameplay3d.Terrain","getHeight",0x7d1c9ad7,"org.gameplay3d.Terrain.getHeight","org/gameplay3d/Terrain.hx",55,0xc89813b6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(z,"z")
	HX_STACK_LINE(55)
	return ::org::gameplay3d::Terrain_obj::hx_Terrain_getHeight(this->nativeObject,x,z);
}


HX_DEFINE_DYNAMIC_FUNC2(Terrain_obj,getHeight,return )

::org::gameplay3d::Node Terrain_obj::getNode( ){
	HX_STACK_FRAME("org.gameplay3d.Terrain","getNode",0x4c7b00f2,"org.gameplay3d.Terrain.getNode","org/gameplay3d/Terrain.hx",61,0xc89813b6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(61)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Node >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(61)
	Dynamic nativeObject = ::org::gameplay3d::Terrain_obj::hx_Terrain_getNode(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(61)
	if (((nativeObject == null()))){
		HX_STACK_LINE(61)
		return null();
	}
	else{
		HX_STACK_LINE(61)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(61)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(61)
			::org::gameplay3d::Node result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(61)
			if (((result == null()))){
				HX_STACK_LINE(61)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(61)
				::org::gameplay3d::Node _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(61)
				result = _g;
				HX_STACK_LINE(61)
				ref->set(result);
			}
			HX_STACK_LINE(61)
			return result;
		}
		else{
			HX_STACK_LINE(61)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(61)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(61)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Terrain_obj,getNode,return )

int Terrain_obj::getPatchCount( ){
	HX_STACK_FRAME("org.gameplay3d.Terrain","getPatchCount",0x5410e3d7,"org.gameplay3d.Terrain.getPatchCount","org/gameplay3d/Terrain.hx",67,0xc89813b6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(67)
	return ::org::gameplay3d::Terrain_obj::hx_Terrain_getPatchCount(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Terrain_obj,getPatchCount,return )

int Terrain_obj::getTriangleCount( ){
	HX_STACK_FRAME("org.gameplay3d.Terrain","getTriangleCount",0xef2b0bf7,"org.gameplay3d.Terrain.getTriangleCount","org/gameplay3d/Terrain.hx",73,0xc89813b6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(73)
	return ::org::gameplay3d::Terrain_obj::hx_Terrain_getTriangleCount(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Terrain_obj,getTriangleCount,return )

int Terrain_obj::getVisiblePatchCount( ){
	HX_STACK_FRAME("org.gameplay3d.Terrain","getVisiblePatchCount",0x3bb6cb09,"org.gameplay3d.Terrain.getVisiblePatchCount","org/gameplay3d/Terrain.hx",79,0xc89813b6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(79)
	return ::org::gameplay3d::Terrain_obj::hx_Terrain_getVisiblePatchCount(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Terrain_obj,getVisiblePatchCount,return )

int Terrain_obj::getVisibleTriangleCount( ){
	HX_STACK_FRAME("org.gameplay3d.Terrain","getVisibleTriangleCount",0x6dfc3005,"org.gameplay3d.Terrain.getVisibleTriangleCount","org/gameplay3d/Terrain.hx",85,0xc89813b6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(85)
	return ::org::gameplay3d::Terrain_obj::hx_Terrain_getVisibleTriangleCount(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Terrain_obj,getVisibleTriangleCount,return )

bool Terrain_obj::isFlagSet( int flag){
	HX_STACK_FRAME("org.gameplay3d.Terrain","isFlagSet",0xe0c36246,"org.gameplay3d.Terrain.isFlagSet","org/gameplay3d/Terrain.hx",91,0xc89813b6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(flag,"flag")
	HX_STACK_LINE(91)
	return ::org::gameplay3d::Terrain_obj::hx_Terrain_isFlagSet(this->nativeObject,flag);
}


HX_DEFINE_DYNAMIC_FUNC1(Terrain_obj,isFlagSet,return )

Void Terrain_obj::setFlag( int flag,bool on){
{
		HX_STACK_FRAME("org.gameplay3d.Terrain","setFlag",0x3a3093a8,"org.gameplay3d.Terrain.setFlag","org/gameplay3d/Terrain.hx",97,0xc89813b6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(flag,"flag")
		HX_STACK_ARG(on,"on")
		HX_STACK_LINE(97)
		::org::gameplay3d::Terrain_obj::hx_Terrain_setFlag(this->nativeObject,flag,on);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Terrain_obj,setFlag,(void))

bool Terrain_obj::setLayer( int index,::String texturePath,::org::gameplay3d::Vector2 textureRepeat,::String blendPath,hx::Null< int >  __o_blendChannel,hx::Null< int >  __o_row,hx::Null< int >  __o_column){
int blendChannel = __o_blendChannel.Default(0);
int row = __o_row.Default(-1);
int column = __o_column.Default(-1);
	HX_STACK_FRAME("org.gameplay3d.Terrain","setLayer",0x1d84f655,"org.gameplay3d.Terrain.setLayer","org/gameplay3d/Terrain.hx",103,0xc89813b6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(texturePath,"texturePath")
	HX_STACK_ARG(textureRepeat,"textureRepeat")
	HX_STACK_ARG(blendPath,"blendPath")
	HX_STACK_ARG(blendChannel,"blendChannel")
	HX_STACK_ARG(row,"row")
	HX_STACK_ARG(column,"column")
{
		HX_STACK_LINE(103)
		return ::org::gameplay3d::Terrain_obj::hx_Terrain_setLayer(this->nativeObject,index,texturePath,(  (((textureRepeat == null()))) ? Dynamic(null()) : Dynamic(textureRepeat->nativeObject) ),blendPath,blendChannel,row,column);
	}
}


HX_DEFINE_DYNAMIC_FUNC7(Terrain_obj,setLayer,return )

Void Terrain_obj::transformChanged( ::org::gameplay3d::Transform transform,int cookie){
{
		HX_STACK_FRAME("org.gameplay3d.Terrain","transformChanged",0xf5b2726e,"org.gameplay3d.Terrain.transformChanged","org/gameplay3d/Terrain.hx",109,0xc89813b6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transform,"transform")
		HX_STACK_ARG(cookie,"cookie")
		HX_STACK_LINE(109)
		::org::gameplay3d::Terrain_obj::hx_Terrain_transformChanged(this->nativeObject,(  (((transform == null()))) ? Dynamic(null()) : Dynamic(transform->nativeObject) ),cookie);
	}
return null();
}


::org::gameplay3d::Terrain Terrain_obj::create_HghtFld_V3_IntX2_Flt_Str( ::org::gameplay3d::HeightField heightfield,::org::gameplay3d::Vector3 scale,hx::Null< int >  __o_patchSize,hx::Null< int >  __o_detailLevels,hx::Null< Float >  __o_skirtScale,::String normalMapPath){
int patchSize = __o_patchSize.Default(32);
int detailLevels = __o_detailLevels.Default(1);
Float skirtScale = __o_skirtScale.Default(0.0);
	HX_STACK_FRAME("org.gameplay3d.Terrain","create_HghtFld_V3_IntX2_Flt_Str",0x620372d1,"org.gameplay3d.Terrain.create_HghtFld_V3_IntX2_Flt_Str","org/gameplay3d/Terrain.hx",25,0xc89813b6)
	HX_STACK_ARG(heightfield,"heightfield")
	HX_STACK_ARG(scale,"scale")
	HX_STACK_ARG(patchSize,"patchSize")
	HX_STACK_ARG(detailLevels,"detailLevels")
	HX_STACK_ARG(skirtScale,"skirtScale")
	HX_STACK_ARG(normalMapPath,"normalMapPath")
{
		HX_STACK_LINE(25)
		return ::org::gameplay3d::Terrain_obj::hx_Terrain_static_create_HghtFld_V3_IntX2_Flt_Str((  (((heightfield == null()))) ? Dynamic(null()) : Dynamic(heightfield->nativeObject) ),(  (((scale == null()))) ? Dynamic(null()) : Dynamic(scale->nativeObject) ),patchSize,detailLevels,skirtScale,normalMapPath);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Terrain_obj,create_HghtFld_V3_IntX2_Flt_Str,return )

::org::gameplay3d::Terrain Terrain_obj::create_Prop( ::org::gameplay3d::Properties properties){
	HX_STACK_FRAME("org.gameplay3d.Terrain","create_Prop",0x96f24360,"org.gameplay3d.Terrain.create_Prop","org/gameplay3d/Terrain.hx",31,0xc89813b6)
	HX_STACK_ARG(properties,"properties")
	HX_STACK_LINE(31)
	return ::org::gameplay3d::Terrain_obj::hx_Terrain_static_create_Prop((  (((properties == null()))) ? Dynamic(null()) : Dynamic(properties->nativeObject) ));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Terrain_obj,create_Prop,return )

::org::gameplay3d::Terrain Terrain_obj::create_Str( ::String path){
	HX_STACK_FRAME("org.gameplay3d.Terrain","create_Str",0x130db394,"org.gameplay3d.Terrain.create_Str","org/gameplay3d/Terrain.hx",37,0xc89813b6)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(37)
	return ::org::gameplay3d::Terrain_obj::hx_Terrain_static_create_Str(path);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Terrain_obj,create_Str,return )

Dynamic Terrain_obj::hx_Terrain_static_create_HghtFld_V3_IntX2_Flt_Str;

Dynamic Terrain_obj::hx_Terrain_static_create_Prop;

Dynamic Terrain_obj::hx_Terrain_static_create_Str;

Dynamic Terrain_obj::hx_Terrain_draw;

Dynamic Terrain_obj::hx_Terrain_getBoundingBox;

Dynamic Terrain_obj::hx_Terrain_getHeight;

Dynamic Terrain_obj::hx_Terrain_getNode;

Dynamic Terrain_obj::hx_Terrain_getPatchCount;

Dynamic Terrain_obj::hx_Terrain_getTriangleCount;

Dynamic Terrain_obj::hx_Terrain_getVisiblePatchCount;

Dynamic Terrain_obj::hx_Terrain_getVisibleTriangleCount;

Dynamic Terrain_obj::hx_Terrain_isFlagSet;

Dynamic Terrain_obj::hx_Terrain_setFlag;

Dynamic Terrain_obj::hx_Terrain_setLayer;

Dynamic Terrain_obj::hx_Terrain_transformChanged;


Terrain_obj::Terrain_obj()
{
}

void Terrain_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Terrain);
	HX_MARK_MEMBER_NAME(_boundingBox,"_boundingBox");
	::org::gameplay3d::intern::NativeBinding_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Terrain_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_boundingBox,"_boundingBox");
	::org::gameplay3d::intern::NativeBinding_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Terrain_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getNode") ) { return getNode_dyn(); }
		if (HX_FIELD_EQ(inName,"setFlag") ) { return setFlag_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setLayer") ) { return setLayer_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getHeight") ) { return getHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"isFlagSet") ) { return isFlagSet_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"create_Str") ) { return create_Str_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"create_Prop") ) { return create_Prop_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_boundingBox") ) { return _boundingBox; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getPatchCount") ) { return getPatchCount_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getBoundingBox") ) { return getBoundingBox_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hx_Terrain_draw") ) { return hx_Terrain_draw; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getTriangleCount") ) { return getTriangleCount_dyn(); }
		if (HX_FIELD_EQ(inName,"transformChanged") ) { return transformChanged_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hx_Terrain_getNode") ) { return hx_Terrain_getNode; }
		if (HX_FIELD_EQ(inName,"hx_Terrain_setFlag") ) { return hx_Terrain_setFlag; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hx_Terrain_setLayer") ) { return hx_Terrain_setLayer; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Terrain_getHeight") ) { return hx_Terrain_getHeight; }
		if (HX_FIELD_EQ(inName,"hx_Terrain_isFlagSet") ) { return hx_Terrain_isFlagSet; }
		if (HX_FIELD_EQ(inName,"getVisiblePatchCount") ) { return getVisiblePatchCount_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getVisibleTriangleCount") ) { return getVisibleTriangleCount_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_Terrain_getPatchCount") ) { return hx_Terrain_getPatchCount; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_Terrain_getBoundingBox") ) { return hx_Terrain_getBoundingBox; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"hx_Terrain_getTriangleCount") ) { return hx_Terrain_getTriangleCount; }
		if (HX_FIELD_EQ(inName,"hx_Terrain_transformChanged") ) { return hx_Terrain_transformChanged; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_Terrain_static_create_Str") ) { return hx_Terrain_static_create_Str; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_Terrain_static_create_Prop") ) { return hx_Terrain_static_create_Prop; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"create_HghtFld_V3_IntX2_Flt_Str") ) { return create_HghtFld_V3_IntX2_Flt_Str_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Terrain_getVisiblePatchCount") ) { return hx_Terrain_getVisiblePatchCount; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"hx_Terrain_getVisibleTriangleCount") ) { return hx_Terrain_getVisibleTriangleCount; }
		break;
	case 49:
		if (HX_FIELD_EQ(inName,"hx_Terrain_static_create_HghtFld_V3_IntX2_Flt_Str") ) { return hx_Terrain_static_create_HghtFld_V3_IntX2_Flt_Str; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Terrain_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"_boundingBox") ) { _boundingBox=inValue.Cast< ::org::gameplay3d::BoundingBox >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hx_Terrain_draw") ) { hx_Terrain_draw=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hx_Terrain_getNode") ) { hx_Terrain_getNode=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Terrain_setFlag") ) { hx_Terrain_setFlag=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hx_Terrain_setLayer") ) { hx_Terrain_setLayer=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Terrain_getHeight") ) { hx_Terrain_getHeight=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Terrain_isFlagSet") ) { hx_Terrain_isFlagSet=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_Terrain_getPatchCount") ) { hx_Terrain_getPatchCount=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_Terrain_getBoundingBox") ) { hx_Terrain_getBoundingBox=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"hx_Terrain_getTriangleCount") ) { hx_Terrain_getTriangleCount=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Terrain_transformChanged") ) { hx_Terrain_transformChanged=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_Terrain_static_create_Str") ) { hx_Terrain_static_create_Str=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"hx_Terrain_static_create_Prop") ) { hx_Terrain_static_create_Prop=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"hx_Terrain_getVisiblePatchCount") ) { hx_Terrain_getVisiblePatchCount=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"hx_Terrain_getVisibleTriangleCount") ) { hx_Terrain_getVisibleTriangleCount=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 49:
		if (HX_FIELD_EQ(inName,"hx_Terrain_static_create_HghtFld_V3_IntX2_Flt_Str") ) { hx_Terrain_static_create_HghtFld_V3_IntX2_Flt_Str=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Terrain_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_boundingBox"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create_HghtFld_V3_IntX2_Flt_Str"),
	HX_CSTRING("create_Prop"),
	HX_CSTRING("create_Str"),
	HX_CSTRING("hx_Terrain_static_create_HghtFld_V3_IntX2_Flt_Str"),
	HX_CSTRING("hx_Terrain_static_create_Prop"),
	HX_CSTRING("hx_Terrain_static_create_Str"),
	HX_CSTRING("hx_Terrain_draw"),
	HX_CSTRING("hx_Terrain_getBoundingBox"),
	HX_CSTRING("hx_Terrain_getHeight"),
	HX_CSTRING("hx_Terrain_getNode"),
	HX_CSTRING("hx_Terrain_getPatchCount"),
	HX_CSTRING("hx_Terrain_getTriangleCount"),
	HX_CSTRING("hx_Terrain_getVisiblePatchCount"),
	HX_CSTRING("hx_Terrain_getVisibleTriangleCount"),
	HX_CSTRING("hx_Terrain_isFlagSet"),
	HX_CSTRING("hx_Terrain_setFlag"),
	HX_CSTRING("hx_Terrain_setLayer"),
	HX_CSTRING("hx_Terrain_transformChanged"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::org::gameplay3d::BoundingBox*/ ,(int)offsetof(Terrain_obj,_boundingBox),HX_CSTRING("_boundingBox")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_boundingBox"),
	HX_CSTRING("draw"),
	HX_CSTRING("getBoundingBox"),
	HX_CSTRING("getHeight"),
	HX_CSTRING("getNode"),
	HX_CSTRING("getPatchCount"),
	HX_CSTRING("getTriangleCount"),
	HX_CSTRING("getVisiblePatchCount"),
	HX_CSTRING("getVisibleTriangleCount"),
	HX_CSTRING("isFlagSet"),
	HX_CSTRING("setFlag"),
	HX_CSTRING("setLayer"),
	HX_CSTRING("transformChanged"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Terrain_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Terrain_obj::hx_Terrain_static_create_HghtFld_V3_IntX2_Flt_Str,"hx_Terrain_static_create_HghtFld_V3_IntX2_Flt_Str");
	HX_MARK_MEMBER_NAME(Terrain_obj::hx_Terrain_static_create_Prop,"hx_Terrain_static_create_Prop");
	HX_MARK_MEMBER_NAME(Terrain_obj::hx_Terrain_static_create_Str,"hx_Terrain_static_create_Str");
	HX_MARK_MEMBER_NAME(Terrain_obj::hx_Terrain_draw,"hx_Terrain_draw");
	HX_MARK_MEMBER_NAME(Terrain_obj::hx_Terrain_getBoundingBox,"hx_Terrain_getBoundingBox");
	HX_MARK_MEMBER_NAME(Terrain_obj::hx_Terrain_getHeight,"hx_Terrain_getHeight");
	HX_MARK_MEMBER_NAME(Terrain_obj::hx_Terrain_getNode,"hx_Terrain_getNode");
	HX_MARK_MEMBER_NAME(Terrain_obj::hx_Terrain_getPatchCount,"hx_Terrain_getPatchCount");
	HX_MARK_MEMBER_NAME(Terrain_obj::hx_Terrain_getTriangleCount,"hx_Terrain_getTriangleCount");
	HX_MARK_MEMBER_NAME(Terrain_obj::hx_Terrain_getVisiblePatchCount,"hx_Terrain_getVisiblePatchCount");
	HX_MARK_MEMBER_NAME(Terrain_obj::hx_Terrain_getVisibleTriangleCount,"hx_Terrain_getVisibleTriangleCount");
	HX_MARK_MEMBER_NAME(Terrain_obj::hx_Terrain_isFlagSet,"hx_Terrain_isFlagSet");
	HX_MARK_MEMBER_NAME(Terrain_obj::hx_Terrain_setFlag,"hx_Terrain_setFlag");
	HX_MARK_MEMBER_NAME(Terrain_obj::hx_Terrain_setLayer,"hx_Terrain_setLayer");
	HX_MARK_MEMBER_NAME(Terrain_obj::hx_Terrain_transformChanged,"hx_Terrain_transformChanged");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Terrain_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Terrain_obj::hx_Terrain_static_create_HghtFld_V3_IntX2_Flt_Str,"hx_Terrain_static_create_HghtFld_V3_IntX2_Flt_Str");
	HX_VISIT_MEMBER_NAME(Terrain_obj::hx_Terrain_static_create_Prop,"hx_Terrain_static_create_Prop");
	HX_VISIT_MEMBER_NAME(Terrain_obj::hx_Terrain_static_create_Str,"hx_Terrain_static_create_Str");
	HX_VISIT_MEMBER_NAME(Terrain_obj::hx_Terrain_draw,"hx_Terrain_draw");
	HX_VISIT_MEMBER_NAME(Terrain_obj::hx_Terrain_getBoundingBox,"hx_Terrain_getBoundingBox");
	HX_VISIT_MEMBER_NAME(Terrain_obj::hx_Terrain_getHeight,"hx_Terrain_getHeight");
	HX_VISIT_MEMBER_NAME(Terrain_obj::hx_Terrain_getNode,"hx_Terrain_getNode");
	HX_VISIT_MEMBER_NAME(Terrain_obj::hx_Terrain_getPatchCount,"hx_Terrain_getPatchCount");
	HX_VISIT_MEMBER_NAME(Terrain_obj::hx_Terrain_getTriangleCount,"hx_Terrain_getTriangleCount");
	HX_VISIT_MEMBER_NAME(Terrain_obj::hx_Terrain_getVisiblePatchCount,"hx_Terrain_getVisiblePatchCount");
	HX_VISIT_MEMBER_NAME(Terrain_obj::hx_Terrain_getVisibleTriangleCount,"hx_Terrain_getVisibleTriangleCount");
	HX_VISIT_MEMBER_NAME(Terrain_obj::hx_Terrain_isFlagSet,"hx_Terrain_isFlagSet");
	HX_VISIT_MEMBER_NAME(Terrain_obj::hx_Terrain_setFlag,"hx_Terrain_setFlag");
	HX_VISIT_MEMBER_NAME(Terrain_obj::hx_Terrain_setLayer,"hx_Terrain_setLayer");
	HX_VISIT_MEMBER_NAME(Terrain_obj::hx_Terrain_transformChanged,"hx_Terrain_transformChanged");
};

#endif

Class Terrain_obj::__mClass;

void Terrain_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.Terrain"), hx::TCanCast< Terrain_obj> ,sStaticFields,sMemberFields,
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

void Terrain_obj::__boot()
{
	hx_Terrain_static_create_HghtFld_V3_IntX2_Flt_Str= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Terrain >(),HX_CSTRING("static_create_HghtFld_V3_IntX2_Flt_Str"),(int)-1);
	hx_Terrain_static_create_Prop= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Terrain >(),HX_CSTRING("static_create_Prop"),(int)1);
	hx_Terrain_static_create_Str= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Terrain >(),HX_CSTRING("static_create_Str"),(int)1);
	hx_Terrain_draw= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Terrain >(),HX_CSTRING("draw"),(int)2);
	hx_Terrain_getBoundingBox= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Terrain >(),HX_CSTRING("getBoundingBox"),(int)1);
	hx_Terrain_getHeight= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Terrain >(),HX_CSTRING("getHeight"),(int)3);
	hx_Terrain_getNode= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Terrain >(),HX_CSTRING("getNode"),(int)1);
	hx_Terrain_getPatchCount= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Terrain >(),HX_CSTRING("getPatchCount"),(int)1);
	hx_Terrain_getTriangleCount= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Terrain >(),HX_CSTRING("getTriangleCount"),(int)1);
	hx_Terrain_getVisiblePatchCount= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Terrain >(),HX_CSTRING("getVisiblePatchCount"),(int)1);
	hx_Terrain_getVisibleTriangleCount= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Terrain >(),HX_CSTRING("getVisibleTriangleCount"),(int)1);
	hx_Terrain_isFlagSet= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Terrain >(),HX_CSTRING("isFlagSet"),(int)2);
	hx_Terrain_setFlag= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Terrain >(),HX_CSTRING("setFlag"),(int)3);
	hx_Terrain_setLayer= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Terrain >(),HX_CSTRING("setLayer"),(int)-1);
	hx_Terrain_transformChanged= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Terrain >(),HX_CSTRING("transformChanged"),(int)3);
}

} // end namespace org
} // end namespace gameplay3d
