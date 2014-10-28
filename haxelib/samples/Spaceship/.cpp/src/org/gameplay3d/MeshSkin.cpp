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
#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Joint
#include <org/gameplay3d/Joint.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Matrix
#include <org/gameplay3d/Matrix.h>
#endif
#ifndef INCLUDED_org_gameplay3d_MeshSkin
#include <org/gameplay3d/MeshSkin.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Model
#include <org/gameplay3d/Model.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Node
#include <org/gameplay3d/Node.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Ref
#include <org/gameplay3d/Ref.h>
#endif
#ifndef INCLUDED_org_gameplay3d_ScriptTarget
#include <org/gameplay3d/ScriptTarget.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Transform
#include <org/gameplay3d/Transform.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Transform_Listener
#include <org/gameplay3d/Transform_Listener.h>
#endif
#ifndef INCLUDED_org_gameplay3d__MeshSkin_MatrixPalette
#include <org/gameplay3d/_MeshSkin/MatrixPalette.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IMatrix
#include <org/gameplay3d/immutable/IMatrix.h>
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
#ifndef INCLUDED_org_gameplay3d_util_INativeArray
#include <org/gameplay3d/util/INativeArray.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_NativeInterface
#include <org/gameplay3d/util/NativeInterface.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_ObjectArray
#include <org/gameplay3d/util/ObjectArray.h>
#endif
namespace org{
namespace gameplay3d{

Void MeshSkin_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.MeshSkin","new",0xd8175229,"org.gameplay3d.MeshSkin.new","org/gameplay3d/MeshSkin.hx",15,0x9d081bc7)
HX_STACK_THIS(this)
HX_STACK_ARG(nativeObjectInitializer,"nativeObjectInitializer")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(15)
	super::__construct(nativeObjectInitializer,nativeObjectInitializerParams);
}
;
	return null();
}

//MeshSkin_obj::~MeshSkin_obj() { }

Dynamic MeshSkin_obj::__CreateEmpty() { return  new MeshSkin_obj; }
hx::ObjectPtr< MeshSkin_obj > MeshSkin_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< MeshSkin_obj > result = new MeshSkin_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic MeshSkin_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MeshSkin_obj > result = new MeshSkin_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::org::gameplay3d::immutable::IMatrix MeshSkin_obj::getBindShape( ){
	HX_STACK_FRAME("org.gameplay3d.MeshSkin","getBindShape",0x476189c5,"org.gameplay3d.MeshSkin.getBindShape","org/gameplay3d/MeshSkin.hx",26,0x9d081bc7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_bindShape == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Matrix _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Matrix >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(26)
			Dynamic nativeObject = ::org::gameplay3d::MeshSkin_obj::hx_MeshSkin_getBindShape(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
		return this->_bindShape = _g1;
	}
	else{
		HX_STACK_LINE(26)
		Dynamic _g2 = ::org::gameplay3d::MeshSkin_obj::hx_MeshSkin_getBindShape(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Matrix _g3 = this->_bindShape->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_bindShape = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MeshSkin_obj,getBindShape,return )

::org::gameplay3d::Joint MeshSkin_obj::getJoint_Str( ::String id){
	HX_STACK_FRAME("org.gameplay3d.MeshSkin","getJoint_Str",0x5ffd657d,"org.gameplay3d.MeshSkin.getJoint_Str","org/gameplay3d/MeshSkin.hx",32,0x9d081bc7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(32)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Joint >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(32)
	Dynamic nativeObject = ::org::gameplay3d::MeshSkin_obj::hx_MeshSkin_getJoint_Str(this->nativeObject,id);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(32)
	if (((nativeObject == null()))){
		HX_STACK_LINE(32)
		return null();
	}
	else{
		HX_STACK_LINE(32)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(32)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(32)
			::org::gameplay3d::Joint result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(32)
			if (((result == null()))){
				HX_STACK_LINE(32)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(32)
				::org::gameplay3d::Joint _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(32)
				result = _g;
				HX_STACK_LINE(32)
				ref->set(result);
			}
			HX_STACK_LINE(32)
			return result;
		}
		else{
			HX_STACK_LINE(32)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(32)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(32)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MeshSkin_obj,getJoint_Str,return )

::org::gameplay3d::Joint MeshSkin_obj::getJoint_Int( int index){
	HX_STACK_FRAME("org.gameplay3d.MeshSkin","getJoint_Int",0x5ff5c9bb,"org.gameplay3d.MeshSkin.getJoint_Int","org/gameplay3d/MeshSkin.hx",38,0x9d081bc7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(38)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Joint >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(38)
	Dynamic nativeObject = ::org::gameplay3d::MeshSkin_obj::hx_MeshSkin_getJoint_Int(this->nativeObject,index);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(38)
	if (((nativeObject == null()))){
		HX_STACK_LINE(38)
		return null();
	}
	else{
		HX_STACK_LINE(38)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(38)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(38)
			::org::gameplay3d::Joint result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(38)
			if (((result == null()))){
				HX_STACK_LINE(38)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(38)
				::org::gameplay3d::Joint _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(38)
				result = _g;
				HX_STACK_LINE(38)
				ref->set(result);
			}
			HX_STACK_LINE(38)
			return result;
		}
		else{
			HX_STACK_LINE(38)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(38)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(38)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MeshSkin_obj,getJoint_Int,return )

int MeshSkin_obj::getJointCount( ){
	HX_STACK_FRAME("org.gameplay3d.MeshSkin","getJointCount",0x9105e264,"org.gameplay3d.MeshSkin.getJointCount","org/gameplay3d/MeshSkin.hx",44,0x9d081bc7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(44)
	return ::org::gameplay3d::MeshSkin_obj::hx_MeshSkin_getJointCount(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(MeshSkin_obj,getJointCount,return )

int MeshSkin_obj::getJointIndex( ::org::gameplay3d::Joint joint){
	HX_STACK_FRAME("org.gameplay3d.MeshSkin","getJointIndex",0x04b738a7,"org.gameplay3d.MeshSkin.getJointIndex","org/gameplay3d/MeshSkin.hx",50,0x9d081bc7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(joint,"joint")
	HX_STACK_LINE(50)
	return ::org::gameplay3d::MeshSkin_obj::hx_MeshSkin_getJointIndex(this->nativeObject,(  (((joint == null()))) ? Dynamic(null()) : Dynamic(joint->nativeObject) ));
}


HX_DEFINE_DYNAMIC_FUNC1(MeshSkin_obj,getJointIndex,return )

::org::gameplay3d::util::ObjectArray MeshSkin_obj::getMatrixPalette( ){
	HX_STACK_FRAME("org.gameplay3d.MeshSkin","getMatrixPalette",0x16653c5b,"org.gameplay3d.MeshSkin.getMatrixPalette","org/gameplay3d/MeshSkin.hx",55,0x9d081bc7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(56)
	Dynamic _g = ::org::gameplay3d::MeshSkin_obj::hx_MeshSkin_getMatrixPalette(this->nativeObject);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(56)
	int _g1 = this->getMatrixPaletteSize();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(56)
	return ::org::gameplay3d::_MeshSkin::MatrixPalette_obj::__new(_g,_g1);
}


HX_DEFINE_DYNAMIC_FUNC0(MeshSkin_obj,getMatrixPalette,return )

int MeshSkin_obj::getMatrixPaletteSize( ){
	HX_STACK_FRAME("org.gameplay3d.MeshSkin","getMatrixPaletteSize",0x5456d2bc,"org.gameplay3d.MeshSkin.getMatrixPaletteSize","org/gameplay3d/MeshSkin.hx",62,0x9d081bc7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(62)
	return ::org::gameplay3d::MeshSkin_obj::hx_MeshSkin_getMatrixPaletteSize(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(MeshSkin_obj,getMatrixPaletteSize,return )

::org::gameplay3d::Model MeshSkin_obj::getModel( ){
	HX_STACK_FRAME("org.gameplay3d.MeshSkin","getModel",0xf8d398ca,"org.gameplay3d.MeshSkin.getModel","org/gameplay3d/MeshSkin.hx",68,0x9d081bc7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(68)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Model >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(68)
	Dynamic nativeObject = ::org::gameplay3d::MeshSkin_obj::hx_MeshSkin_getModel(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(68)
	if (((nativeObject == null()))){
		HX_STACK_LINE(68)
		return null();
	}
	else{
		HX_STACK_LINE(68)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(68)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(68)
			::org::gameplay3d::Model result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(68)
			if (((result == null()))){
				HX_STACK_LINE(68)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(68)
				::org::gameplay3d::Model _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(68)
				result = _g;
				HX_STACK_LINE(68)
				ref->set(result);
			}
			HX_STACK_LINE(68)
			return result;
		}
		else{
			HX_STACK_LINE(68)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(68)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(68)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MeshSkin_obj,getModel,return )

::org::gameplay3d::Joint MeshSkin_obj::getRootJoint( ){
	HX_STACK_FRAME("org.gameplay3d.MeshSkin","getRootJoint",0x32fd5969,"org.gameplay3d.MeshSkin.getRootJoint","org/gameplay3d/MeshSkin.hx",74,0x9d081bc7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(74)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Joint >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(74)
	Dynamic nativeObject = ::org::gameplay3d::MeshSkin_obj::hx_MeshSkin_getRootJoint(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(74)
	if (((nativeObject == null()))){
		HX_STACK_LINE(74)
		return null();
	}
	else{
		HX_STACK_LINE(74)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(74)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(74)
			::org::gameplay3d::Joint result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(74)
			if (((result == null()))){
				HX_STACK_LINE(74)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(74)
				::org::gameplay3d::Joint _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(74)
				result = _g;
				HX_STACK_LINE(74)
				ref->set(result);
			}
			HX_STACK_LINE(74)
			return result;
		}
		else{
			HX_STACK_LINE(74)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(74)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(74)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MeshSkin_obj,getRootJoint,return )

Void MeshSkin_obj::setBindShape( Float matrix){
{
		HX_STACK_FRAME("org.gameplay3d.MeshSkin","setBindShape",0x5c5aad39,"org.gameplay3d.MeshSkin.setBindShape","org/gameplay3d/MeshSkin.hx",80,0x9d081bc7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(80)
		::org::gameplay3d::MeshSkin_obj::hx_MeshSkin_setBindShape(this->nativeObject,matrix);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MeshSkin_obj,setBindShape,(void))

Void MeshSkin_obj::setRootJoint( ::org::gameplay3d::Joint joint){
{
		HX_STACK_FRAME("org.gameplay3d.MeshSkin","setRootJoint",0x47f67cdd,"org.gameplay3d.MeshSkin.setRootJoint","org/gameplay3d/MeshSkin.hx",86,0x9d081bc7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(joint,"joint")
		HX_STACK_LINE(86)
		::org::gameplay3d::MeshSkin_obj::hx_MeshSkin_setRootJoint(this->nativeObject,(  (((joint == null()))) ? Dynamic(null()) : Dynamic(joint->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MeshSkin_obj,setRootJoint,(void))

Dynamic MeshSkin_obj::hx_MeshSkin_getBindShape;

Dynamic MeshSkin_obj::hx_MeshSkin_getJoint_Str;

Dynamic MeshSkin_obj::hx_MeshSkin_getJoint_Int;

Dynamic MeshSkin_obj::hx_MeshSkin_getJointCount;

Dynamic MeshSkin_obj::hx_MeshSkin_getJointIndex;

Dynamic MeshSkin_obj::hx_MeshSkin_getMatrixPalette;

Dynamic MeshSkin_obj::hx_MeshSkin_getMatrixPaletteSize;

Dynamic MeshSkin_obj::hx_MeshSkin_getModel;

Dynamic MeshSkin_obj::hx_MeshSkin_getRootJoint;

Dynamic MeshSkin_obj::hx_MeshSkin_setBindShape;

Dynamic MeshSkin_obj::hx_MeshSkin_setRootJoint;


MeshSkin_obj::MeshSkin_obj()
{
}

void MeshSkin_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MeshSkin);
	HX_MARK_MEMBER_NAME(_bindShape,"_bindShape");
	::org::gameplay3d::intern::NativeBinding_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MeshSkin_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_bindShape,"_bindShape");
	::org::gameplay3d::intern::NativeBinding_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MeshSkin_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"getModel") ) { return getModel_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_bindShape") ) { return _bindShape; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getBindShape") ) { return getBindShape_dyn(); }
		if (HX_FIELD_EQ(inName,"getJoint_Str") ) { return getJoint_Str_dyn(); }
		if (HX_FIELD_EQ(inName,"getJoint_Int") ) { return getJoint_Int_dyn(); }
		if (HX_FIELD_EQ(inName,"getRootJoint") ) { return getRootJoint_dyn(); }
		if (HX_FIELD_EQ(inName,"setBindShape") ) { return setBindShape_dyn(); }
		if (HX_FIELD_EQ(inName,"setRootJoint") ) { return setRootJoint_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getJointCount") ) { return getJointCount_dyn(); }
		if (HX_FIELD_EQ(inName,"getJointIndex") ) { return getJointIndex_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getMatrixPalette") ) { return getMatrixPalette_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_MeshSkin_getModel") ) { return hx_MeshSkin_getModel; }
		if (HX_FIELD_EQ(inName,"getMatrixPaletteSize") ) { return getMatrixPaletteSize_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_MeshSkin_getBindShape") ) { return hx_MeshSkin_getBindShape; }
		if (HX_FIELD_EQ(inName,"hx_MeshSkin_getJoint_Str") ) { return hx_MeshSkin_getJoint_Str; }
		if (HX_FIELD_EQ(inName,"hx_MeshSkin_getJoint_Int") ) { return hx_MeshSkin_getJoint_Int; }
		if (HX_FIELD_EQ(inName,"hx_MeshSkin_getRootJoint") ) { return hx_MeshSkin_getRootJoint; }
		if (HX_FIELD_EQ(inName,"hx_MeshSkin_setBindShape") ) { return hx_MeshSkin_setBindShape; }
		if (HX_FIELD_EQ(inName,"hx_MeshSkin_setRootJoint") ) { return hx_MeshSkin_setRootJoint; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_MeshSkin_getJointCount") ) { return hx_MeshSkin_getJointCount; }
		if (HX_FIELD_EQ(inName,"hx_MeshSkin_getJointIndex") ) { return hx_MeshSkin_getJointIndex; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_MeshSkin_getMatrixPalette") ) { return hx_MeshSkin_getMatrixPalette; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"hx_MeshSkin_getMatrixPaletteSize") ) { return hx_MeshSkin_getMatrixPaletteSize; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MeshSkin_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_bindShape") ) { _bindShape=inValue.Cast< ::org::gameplay3d::Matrix >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_MeshSkin_getModel") ) { hx_MeshSkin_getModel=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_MeshSkin_getBindShape") ) { hx_MeshSkin_getBindShape=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_MeshSkin_getJoint_Str") ) { hx_MeshSkin_getJoint_Str=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_MeshSkin_getJoint_Int") ) { hx_MeshSkin_getJoint_Int=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_MeshSkin_getRootJoint") ) { hx_MeshSkin_getRootJoint=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_MeshSkin_setBindShape") ) { hx_MeshSkin_setBindShape=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_MeshSkin_setRootJoint") ) { hx_MeshSkin_setRootJoint=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_MeshSkin_getJointCount") ) { hx_MeshSkin_getJointCount=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_MeshSkin_getJointIndex") ) { hx_MeshSkin_getJointIndex=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"hx_MeshSkin_getMatrixPalette") ) { hx_MeshSkin_getMatrixPalette=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"hx_MeshSkin_getMatrixPaletteSize") ) { hx_MeshSkin_getMatrixPaletteSize=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MeshSkin_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_bindShape"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("hx_MeshSkin_getBindShape"),
	HX_CSTRING("hx_MeshSkin_getJoint_Str"),
	HX_CSTRING("hx_MeshSkin_getJoint_Int"),
	HX_CSTRING("hx_MeshSkin_getJointCount"),
	HX_CSTRING("hx_MeshSkin_getJointIndex"),
	HX_CSTRING("hx_MeshSkin_getMatrixPalette"),
	HX_CSTRING("hx_MeshSkin_getMatrixPaletteSize"),
	HX_CSTRING("hx_MeshSkin_getModel"),
	HX_CSTRING("hx_MeshSkin_getRootJoint"),
	HX_CSTRING("hx_MeshSkin_setBindShape"),
	HX_CSTRING("hx_MeshSkin_setRootJoint"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::org::gameplay3d::Matrix*/ ,(int)offsetof(MeshSkin_obj,_bindShape),HX_CSTRING("_bindShape")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_bindShape"),
	HX_CSTRING("getBindShape"),
	HX_CSTRING("getJoint_Str"),
	HX_CSTRING("getJoint_Int"),
	HX_CSTRING("getJointCount"),
	HX_CSTRING("getJointIndex"),
	HX_CSTRING("getMatrixPalette"),
	HX_CSTRING("getMatrixPaletteSize"),
	HX_CSTRING("getModel"),
	HX_CSTRING("getRootJoint"),
	HX_CSTRING("setBindShape"),
	HX_CSTRING("setRootJoint"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MeshSkin_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MeshSkin_obj::hx_MeshSkin_getBindShape,"hx_MeshSkin_getBindShape");
	HX_MARK_MEMBER_NAME(MeshSkin_obj::hx_MeshSkin_getJoint_Str,"hx_MeshSkin_getJoint_Str");
	HX_MARK_MEMBER_NAME(MeshSkin_obj::hx_MeshSkin_getJoint_Int,"hx_MeshSkin_getJoint_Int");
	HX_MARK_MEMBER_NAME(MeshSkin_obj::hx_MeshSkin_getJointCount,"hx_MeshSkin_getJointCount");
	HX_MARK_MEMBER_NAME(MeshSkin_obj::hx_MeshSkin_getJointIndex,"hx_MeshSkin_getJointIndex");
	HX_MARK_MEMBER_NAME(MeshSkin_obj::hx_MeshSkin_getMatrixPalette,"hx_MeshSkin_getMatrixPalette");
	HX_MARK_MEMBER_NAME(MeshSkin_obj::hx_MeshSkin_getMatrixPaletteSize,"hx_MeshSkin_getMatrixPaletteSize");
	HX_MARK_MEMBER_NAME(MeshSkin_obj::hx_MeshSkin_getModel,"hx_MeshSkin_getModel");
	HX_MARK_MEMBER_NAME(MeshSkin_obj::hx_MeshSkin_getRootJoint,"hx_MeshSkin_getRootJoint");
	HX_MARK_MEMBER_NAME(MeshSkin_obj::hx_MeshSkin_setBindShape,"hx_MeshSkin_setBindShape");
	HX_MARK_MEMBER_NAME(MeshSkin_obj::hx_MeshSkin_setRootJoint,"hx_MeshSkin_setRootJoint");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MeshSkin_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MeshSkin_obj::hx_MeshSkin_getBindShape,"hx_MeshSkin_getBindShape");
	HX_VISIT_MEMBER_NAME(MeshSkin_obj::hx_MeshSkin_getJoint_Str,"hx_MeshSkin_getJoint_Str");
	HX_VISIT_MEMBER_NAME(MeshSkin_obj::hx_MeshSkin_getJoint_Int,"hx_MeshSkin_getJoint_Int");
	HX_VISIT_MEMBER_NAME(MeshSkin_obj::hx_MeshSkin_getJointCount,"hx_MeshSkin_getJointCount");
	HX_VISIT_MEMBER_NAME(MeshSkin_obj::hx_MeshSkin_getJointIndex,"hx_MeshSkin_getJointIndex");
	HX_VISIT_MEMBER_NAME(MeshSkin_obj::hx_MeshSkin_getMatrixPalette,"hx_MeshSkin_getMatrixPalette");
	HX_VISIT_MEMBER_NAME(MeshSkin_obj::hx_MeshSkin_getMatrixPaletteSize,"hx_MeshSkin_getMatrixPaletteSize");
	HX_VISIT_MEMBER_NAME(MeshSkin_obj::hx_MeshSkin_getModel,"hx_MeshSkin_getModel");
	HX_VISIT_MEMBER_NAME(MeshSkin_obj::hx_MeshSkin_getRootJoint,"hx_MeshSkin_getRootJoint");
	HX_VISIT_MEMBER_NAME(MeshSkin_obj::hx_MeshSkin_setBindShape,"hx_MeshSkin_setBindShape");
	HX_VISIT_MEMBER_NAME(MeshSkin_obj::hx_MeshSkin_setRootJoint,"hx_MeshSkin_setRootJoint");
};

#endif

Class MeshSkin_obj::__mClass;

void MeshSkin_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.MeshSkin"), hx::TCanCast< MeshSkin_obj> ,sStaticFields,sMemberFields,
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

void MeshSkin_obj::__boot()
{
	hx_MeshSkin_getBindShape= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::MeshSkin >(),HX_CSTRING("getBindShape"),(int)1);
	hx_MeshSkin_getJoint_Str= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::MeshSkin >(),HX_CSTRING("getJoint_Str"),(int)2);
	hx_MeshSkin_getJoint_Int= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::MeshSkin >(),HX_CSTRING("getJoint_Int"),(int)2);
	hx_MeshSkin_getJointCount= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::MeshSkin >(),HX_CSTRING("getJointCount"),(int)1);
	hx_MeshSkin_getJointIndex= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::MeshSkin >(),HX_CSTRING("getJointIndex"),(int)2);
	hx_MeshSkin_getMatrixPalette= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::MeshSkin >(),HX_CSTRING("getMatrixPalette"),(int)1);
	hx_MeshSkin_getMatrixPaletteSize= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::MeshSkin >(),HX_CSTRING("getMatrixPaletteSize"),(int)1);
	hx_MeshSkin_getModel= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::MeshSkin >(),HX_CSTRING("getModel"),(int)1);
	hx_MeshSkin_getRootJoint= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::MeshSkin >(),HX_CSTRING("getRootJoint"),(int)1);
	hx_MeshSkin_setBindShape= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::MeshSkin >(),HX_CSTRING("setBindShape"),(int)2);
	hx_MeshSkin_setRootJoint= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::MeshSkin >(),HX_CSTRING("setRootJoint"),(int)2);
}

} // end namespace org
} // end namespace gameplay3d
