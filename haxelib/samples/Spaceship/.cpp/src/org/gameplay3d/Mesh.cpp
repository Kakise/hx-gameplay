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
#ifndef INCLUDED_org_gameplay3d_BoundingBox
#include <org/gameplay3d/BoundingBox.h>
#endif
#ifndef INCLUDED_org_gameplay3d_BoundingSphere
#include <org/gameplay3d/BoundingSphere.h>
#endif
#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Mesh
#include <org/gameplay3d/Mesh.h>
#endif
#ifndef INCLUDED_org_gameplay3d_MeshPart
#include <org/gameplay3d/MeshPart.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Ref
#include <org/gameplay3d/Ref.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Vector3
#include <org/gameplay3d/Vector3.h>
#endif
#ifndef INCLUDED_org_gameplay3d_VertexFormat
#include <org/gameplay3d/VertexFormat.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IBoundingBox
#include <org/gameplay3d/immutable/IBoundingBox.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IBoundingSphere
#include <org/gameplay3d/immutable/IBoundingSphere.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IVector3
#include <org/gameplay3d/immutable/IVector3.h>
#endif
#ifndef INCLUDED_org_gameplay3d_intern_ConversionTools
#include <org/gameplay3d/intern/ConversionTools.h>
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
#ifndef INCLUDED_org_gameplay3d_util_IMutableNativeArray
#include <org/gameplay3d/util/IMutableNativeArray.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_INativeArray
#include <org/gameplay3d/util/INativeArray.h>
#endif
#ifndef INCLUDED_org_gameplay3d_util_NativeInterface
#include <org/gameplay3d/util/NativeInterface.h>
#endif
namespace org{
namespace gameplay3d{

Void Mesh_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.Mesh","new",0xd3dc680c,"org.gameplay3d.Mesh.new","org/gameplay3d/Mesh.hx",18,0x7898e344)
HX_STACK_THIS(this)
HX_STACK_ARG(nativeObjectInitializer,"nativeObjectInitializer")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(18)
	super::__construct(nativeObjectInitializer,nativeObjectInitializerParams);
}
;
	return null();
}

//Mesh_obj::~Mesh_obj() { }

Dynamic Mesh_obj::__CreateEmpty() { return  new Mesh_obj; }
hx::ObjectPtr< Mesh_obj > Mesh_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< Mesh_obj > result = new Mesh_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic Mesh_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Mesh_obj > result = new Mesh_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *Mesh_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::gameplay3d::intern::INativeBinding_obj)) return operator ::org::gameplay3d::intern::INativeBinding_obj *();
	if (inType==typeid( ::org::gameplay3d::Ref_obj)) return operator ::org::gameplay3d::Ref_obj *();
	return super::__ToInterface(inType);
}

::org::gameplay3d::MeshPart Mesh_obj::addPart( int primitiveType,int indexFormat,int indexCount,hx::Null< bool >  __o__dynamic){
bool _dynamic = __o__dynamic.Default(false);
	HX_STACK_FRAME("org.gameplay3d.Mesh","addPart",0x489b0460,"org.gameplay3d.Mesh.addPart","org/gameplay3d/Mesh.hx",30,0x7898e344)
	HX_STACK_THIS(this)
	HX_STACK_ARG(primitiveType,"primitiveType")
	HX_STACK_ARG(indexFormat,"indexFormat")
	HX_STACK_ARG(indexCount,"indexCount")
	HX_STACK_ARG(_dynamic,"_dynamic")
{
		HX_STACK_LINE(30)
		::Class classObj = hx::ClassOf< ::org::gameplay3d::MeshPart >();		HX_STACK_VAR(classObj,"classObj");
		HX_STACK_LINE(30)
		Dynamic nativeObject = ::org::gameplay3d::Mesh_obj::hx_Mesh_addPart(this->nativeObject,primitiveType,indexFormat,indexCount,_dynamic);		HX_STACK_VAR(nativeObject,"nativeObject");
		HX_STACK_LINE(30)
		if (((nativeObject == null()))){
			HX_STACK_LINE(30)
			return null();
		}
		else{
			HX_STACK_LINE(30)
			if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
				HX_STACK_LINE(30)
				::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
				HX_STACK_LINE(30)
				::org::gameplay3d::MeshPart result = ref->get();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(30)
				if (((result == null()))){
					HX_STACK_LINE(30)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
					HX_STACK_LINE(30)
					::org::gameplay3d::MeshPart _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(30)
					result = _g;
					HX_STACK_LINE(30)
					ref->set(result);
				}
				HX_STACK_LINE(30)
				return result;
			}
			else{
				HX_STACK_LINE(30)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
				HX_STACK_LINE(30)
				return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
			}
		}
		HX_STACK_LINE(30)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Mesh_obj,addPart,return )

::org::gameplay3d::immutable::IBoundingBox Mesh_obj::getBoundingBox( ){
	HX_STACK_FRAME("org.gameplay3d.Mesh","getBoundingBox",0x6d0457e5,"org.gameplay3d.Mesh.getBoundingBox","org/gameplay3d/Mesh.hx",72,0x7898e344)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_boundingBox == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::BoundingBox _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::BoundingBox >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(72)
			Dynamic nativeObject = ::org::gameplay3d::Mesh_obj::hx_Mesh_getBoundingBox(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
		HX_STACK_LINE(72)
		Dynamic _g2 = ::org::gameplay3d::Mesh_obj::hx_Mesh_getBoundingBox(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::BoundingBox _g3 = this->_boundingBox->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_boundingBox = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,getBoundingBox,return )

::org::gameplay3d::immutable::IBoundingSphere Mesh_obj::getBoundingSphere( ){
	HX_STACK_FRAME("org.gameplay3d.Mesh","getBoundingSphere",0xfb9b3973,"org.gameplay3d.Mesh.getBoundingSphere","org/gameplay3d/Mesh.hx",78,0x7898e344)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_boundingSphere == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::BoundingSphere _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::BoundingSphere >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(78)
			Dynamic nativeObject = ::org::gameplay3d::Mesh_obj::hx_Mesh_getBoundingSphere(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::BoundingSphere result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::BoundingSphere _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return this->_boundingSphere = _g1;
	}
	else{
		HX_STACK_LINE(78)
		Dynamic _g2 = ::org::gameplay3d::Mesh_obj::hx_Mesh_getBoundingSphere(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::BoundingSphere _g3 = this->_boundingSphere->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_boundingSphere = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,getBoundingSphere,return )

::org::gameplay3d::MeshPart Mesh_obj::getPart( int index){
	HX_STACK_FRAME("org.gameplay3d.Mesh","getPart",0xdee07155,"org.gameplay3d.Mesh.getPart","org/gameplay3d/Mesh.hx",84,0x7898e344)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(84)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::MeshPart >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(84)
	Dynamic nativeObject = ::org::gameplay3d::Mesh_obj::hx_Mesh_getPart(this->nativeObject,index);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(84)
	if (((nativeObject == null()))){
		HX_STACK_LINE(84)
		return null();
	}
	else{
		HX_STACK_LINE(84)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(84)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(84)
			::org::gameplay3d::MeshPart result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(84)
			if (((result == null()))){
				HX_STACK_LINE(84)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(84)
				::org::gameplay3d::MeshPart _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(84)
				result = _g;
				HX_STACK_LINE(84)
				ref->set(result);
			}
			HX_STACK_LINE(84)
			return result;
		}
		else{
			HX_STACK_LINE(84)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(84)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(84)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Mesh_obj,getPart,return )

int Mesh_obj::getPartCount( ){
	HX_STACK_FRAME("org.gameplay3d.Mesh","getPartCount",0x62cc4f3a,"org.gameplay3d.Mesh.getPartCount","org/gameplay3d/Mesh.hx",90,0x7898e344)
	HX_STACK_THIS(this)
	HX_STACK_LINE(90)
	return ::org::gameplay3d::Mesh_obj::hx_Mesh_getPartCount(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,getPartCount,return )

int Mesh_obj::getPrimitiveType( ){
	HX_STACK_FRAME("org.gameplay3d.Mesh","getPrimitiveType",0x9c433d5f,"org.gameplay3d.Mesh.getPrimitiveType","org/gameplay3d/Mesh.hx",96,0x7898e344)
	HX_STACK_THIS(this)
	HX_STACK_LINE(96)
	return ::org::gameplay3d::Mesh_obj::hx_Mesh_getPrimitiveType(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,getPrimitiveType,return )

::String Mesh_obj::getUrl( ){
	HX_STACK_FRAME("org.gameplay3d.Mesh","getUrl",0xf588e04d,"org.gameplay3d.Mesh.getUrl","org/gameplay3d/Mesh.hx",102,0x7898e344)
	HX_STACK_THIS(this)
	HX_STACK_LINE(102)
	return ::org::gameplay3d::Mesh_obj::hx_Mesh_getUrl(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,getUrl,return )

::org::gameplay3d::util::Handle Mesh_obj::getVertexBuffer( ){
	HX_STACK_FRAME("org.gameplay3d.Mesh","getVertexBuffer",0xfa776ee6,"org.gameplay3d.Mesh.getVertexBuffer","org/gameplay3d/Mesh.hx",108,0x7898e344)
	HX_STACK_THIS(this)
	HX_STACK_LINE(108)
	Dynamic nativeObject = ::org::gameplay3d::Mesh_obj::hx_Mesh_getVertexBuffer(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(108)
	if (((nativeObject == null()))){
		HX_STACK_LINE(108)
		return null();
	}
	else{
		HX_STACK_LINE(108)
		return ::org::gameplay3d::util::Handle_obj::__new(nativeObject);
	}
	HX_STACK_LINE(108)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,getVertexBuffer,return )

int Mesh_obj::getVertexCount( ){
	HX_STACK_FRAME("org.gameplay3d.Mesh","getVertexCount",0x45fbd1a9,"org.gameplay3d.Mesh.getVertexCount","org/gameplay3d/Mesh.hx",114,0x7898e344)
	HX_STACK_THIS(this)
	HX_STACK_LINE(114)
	return ::org::gameplay3d::Mesh_obj::hx_Mesh_getVertexCount(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,getVertexCount,return )

::org::gameplay3d::VertexFormat Mesh_obj::getVertexFormat( ){
	HX_STACK_FRAME("org.gameplay3d.Mesh","getVertexFormat",0x2771411d,"org.gameplay3d.Mesh.getVertexFormat","org/gameplay3d/Mesh.hx",120,0x7898e344)
	HX_STACK_THIS(this)
	HX_STACK_LINE(120)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::VertexFormat >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(120)
	Dynamic nativeObject = ::org::gameplay3d::Mesh_obj::hx_Mesh_getVertexFormat(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(120)
	if (((nativeObject == null()))){
		HX_STACK_LINE(120)
		return null();
	}
	else{
		HX_STACK_LINE(120)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(120)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(120)
			::org::gameplay3d::VertexFormat result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(120)
			if (((result == null()))){
				HX_STACK_LINE(120)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(120)
				::org::gameplay3d::VertexFormat _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(120)
				result = _g;
				HX_STACK_LINE(120)
				ref->set(result);
			}
			HX_STACK_LINE(120)
			return result;
		}
		else{
			HX_STACK_LINE(120)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(120)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(120)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,getVertexFormat,return )

int Mesh_obj::getVertexSize( ){
	HX_STACK_FRAME("org.gameplay3d.Mesh","getVertexSize",0x8dbded27,"org.gameplay3d.Mesh.getVertexSize","org/gameplay3d/Mesh.hx",126,0x7898e344)
	HX_STACK_THIS(this)
	HX_STACK_LINE(126)
	return ::org::gameplay3d::Mesh_obj::hx_Mesh_getVertexSize(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,getVertexSize,return )

bool Mesh_obj::isDynamic( ){
	HX_STACK_FRAME("org.gameplay3d.Mesh","isDynamic",0x7d13bd61,"org.gameplay3d.Mesh.isDynamic","org/gameplay3d/Mesh.hx",132,0x7898e344)
	HX_STACK_THIS(this)
	HX_STACK_LINE(132)
	return ::org::gameplay3d::Mesh_obj::hx_Mesh_isDynamic(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,isDynamic,return )

Void Mesh_obj::setBoundingBox( ::org::gameplay3d::immutable::IBoundingBox box){
{
		HX_STACK_FRAME("org.gameplay3d.Mesh","setBoundingBox",0x8d244059,"org.gameplay3d.Mesh.setBoundingBox","org/gameplay3d/Mesh.hx",138,0x7898e344)
		HX_STACK_THIS(this)
		HX_STACK_ARG(box,"box")
		HX_STACK_LINE(138)
		::org::gameplay3d::Mesh_obj::hx_Mesh_setBoundingBox(this->nativeObject,(  (((box == null()))) ? Dynamic(null()) : Dynamic(box->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Mesh_obj,setBoundingBox,(void))

Void Mesh_obj::setBoundingSphere( ::org::gameplay3d::immutable::IBoundingSphere sphere){
{
		HX_STACK_FRAME("org.gameplay3d.Mesh","setBoundingSphere",0x1f09117f,"org.gameplay3d.Mesh.setBoundingSphere","org/gameplay3d/Mesh.hx",144,0x7898e344)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sphere,"sphere")
		HX_STACK_LINE(144)
		::org::gameplay3d::Mesh_obj::hx_Mesh_setBoundingSphere(this->nativeObject,(  (((sphere == null()))) ? Dynamic(null()) : Dynamic(sphere->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Mesh_obj,setBoundingSphere,(void))

Void Mesh_obj::setPrimitiveType( int type){
{
		HX_STACK_FRAME("org.gameplay3d.Mesh","setPrimitiveType",0xf2852ad3,"org.gameplay3d.Mesh.setPrimitiveType","org/gameplay3d/Mesh.hx",150,0x7898e344)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_LINE(150)
		::org::gameplay3d::Mesh_obj::hx_Mesh_setPrimitiveType(this->nativeObject,type);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Mesh_obj,setPrimitiveType,(void))

Void Mesh_obj::setVertexData( ::org::gameplay3d::util::IMutableNativeArray vertexData,hx::Null< int >  __o_vertexStart,hx::Null< int >  __o_vertexCount){
int vertexStart = __o_vertexStart.Default(0);
int vertexCount = __o_vertexCount.Default(0);
	HX_STACK_FRAME("org.gameplay3d.Mesh","setVertexData",0xc8d3849c,"org.gameplay3d.Mesh.setVertexData","org/gameplay3d/Mesh.hx",156,0x7898e344)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vertexData,"vertexData")
	HX_STACK_ARG(vertexStart,"vertexStart")
	HX_STACK_ARG(vertexCount,"vertexCount")
{
		HX_STACK_LINE(156)
		::org::gameplay3d::Mesh_obj::hx_Mesh_setVertexData(this->nativeObject,(  (((vertexData == null()))) ? Dynamic(null()) : Dynamic(vertexData->__Field(HX_CSTRING("nativeObject"),true)) ),vertexStart,vertexCount);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Mesh_obj,setVertexData,(void))

::org::gameplay3d::Mesh Mesh_obj::createBoundingBox( ::org::gameplay3d::immutable::IBoundingBox box){
	HX_STACK_FRAME("org.gameplay3d.Mesh","createBoundingBox",0x4e1a9c17,"org.gameplay3d.Mesh.createBoundingBox","org/gameplay3d/Mesh.hx",36,0x7898e344)
	HX_STACK_ARG(box,"box")
	HX_STACK_LINE(36)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Mesh >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(36)
	Dynamic nativeObject = ::org::gameplay3d::Mesh_obj::hx_Mesh_static_createBoundingBox((  (((box == null()))) ? Dynamic(null()) : Dynamic(box->__Field(HX_CSTRING("nativeObject"),true)) ));		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(36)
	if (((nativeObject == null()))){
		HX_STACK_LINE(36)
		return null();
	}
	else{
		HX_STACK_LINE(36)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(36)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(36)
			::org::gameplay3d::Mesh result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(36)
			if (((result == null()))){
				HX_STACK_LINE(36)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(36)
				::org::gameplay3d::Mesh _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(36)
				result = _g;
				HX_STACK_LINE(36)
				ref->set(result);
			}
			HX_STACK_LINE(36)
			return result;
		}
		else{
			HX_STACK_LINE(36)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(36)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(36)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mesh_obj,createBoundingBox,return )

::org::gameplay3d::Mesh Mesh_obj::createLines( Array< ::Dynamic > points,int pointCount){
	HX_STACK_FRAME("org.gameplay3d.Mesh","createLines",0x5927390f,"org.gameplay3d.Mesh.createLines","org/gameplay3d/Mesh.hx",42,0x7898e344)
	HX_STACK_ARG(points,"points")
	HX_STACK_ARG(pointCount,"pointCount")
	HX_STACK_LINE(42)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Mesh >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(42)
	Dynamic _g = ::org::gameplay3d::intern::ConversionTools_obj::insertArray(points);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(42)
	Dynamic nativeObject = ::org::gameplay3d::Mesh_obj::hx_Mesh_static_createLines(_g,pointCount);		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(42)
	if (((nativeObject == null()))){
		HX_STACK_LINE(42)
		return null();
	}
	else{
		HX_STACK_LINE(42)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(42)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(42)
			::org::gameplay3d::Mesh result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(42)
			if (((result == null()))){
				HX_STACK_LINE(42)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(42)
				::org::gameplay3d::Mesh _g1 = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(42)
				result = _g1;
				HX_STACK_LINE(42)
				ref->set(result);
			}
			HX_STACK_LINE(42)
			return result;
		}
		else{
			HX_STACK_LINE(42)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(42)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(42)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Mesh_obj,createLines,return )

::org::gameplay3d::Mesh Mesh_obj::createMesh( ::org::gameplay3d::VertexFormat vertexFormat,int vertexCount,hx::Null< bool >  __o__dynamic){
bool _dynamic = __o__dynamic.Default(false);
	HX_STACK_FRAME("org.gameplay3d.Mesh","createMesh",0xb79400dd,"org.gameplay3d.Mesh.createMesh","org/gameplay3d/Mesh.hx",48,0x7898e344)
	HX_STACK_ARG(vertexFormat,"vertexFormat")
	HX_STACK_ARG(vertexCount,"vertexCount")
	HX_STACK_ARG(_dynamic,"_dynamic")
{
		HX_STACK_LINE(48)
		::Class classObj = hx::ClassOf< ::org::gameplay3d::Mesh >();		HX_STACK_VAR(classObj,"classObj");
		HX_STACK_LINE(48)
		Dynamic nativeObject = ::org::gameplay3d::Mesh_obj::hx_Mesh_static_createMesh((  (((vertexFormat == null()))) ? Dynamic(null()) : Dynamic(vertexFormat->nativeObject) ),vertexCount,_dynamic);		HX_STACK_VAR(nativeObject,"nativeObject");
		HX_STACK_LINE(48)
		if (((nativeObject == null()))){
			HX_STACK_LINE(48)
			return null();
		}
		else{
			HX_STACK_LINE(48)
			if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
				HX_STACK_LINE(48)
				::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
				HX_STACK_LINE(48)
				::org::gameplay3d::Mesh result = ref->get();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(48)
				if (((result == null()))){
					HX_STACK_LINE(48)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
					HX_STACK_LINE(48)
					::org::gameplay3d::Mesh _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(48)
					result = _g;
					HX_STACK_LINE(48)
					ref->set(result);
				}
				HX_STACK_LINE(48)
				return result;
			}
			else{
				HX_STACK_LINE(48)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
				HX_STACK_LINE(48)
				return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
			}
		}
		HX_STACK_LINE(48)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Mesh_obj,createMesh,return )

::org::gameplay3d::Mesh Mesh_obj::createQuad_V3X4( ::org::gameplay3d::immutable::IVector3 p1,::org::gameplay3d::immutable::IVector3 p2,::org::gameplay3d::immutable::IVector3 p3,::org::gameplay3d::immutable::IVector3 p4){
	HX_STACK_FRAME("org.gameplay3d.Mesh","createQuad_V3X4",0xf1d82e01,"org.gameplay3d.Mesh.createQuad_V3X4","org/gameplay3d/Mesh.hx",54,0x7898e344)
	HX_STACK_ARG(p1,"p1")
	HX_STACK_ARG(p2,"p2")
	HX_STACK_ARG(p3,"p3")
	HX_STACK_ARG(p4,"p4")
	HX_STACK_LINE(54)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Mesh >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(54)
	Dynamic nativeObject = ::org::gameplay3d::Mesh_obj::hx_Mesh_static_createQuad_V3X4((  (((p1 == null()))) ? Dynamic(null()) : Dynamic(p1->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((p2 == null()))) ? Dynamic(null()) : Dynamic(p2->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((p3 == null()))) ? Dynamic(null()) : Dynamic(p3->__Field(HX_CSTRING("nativeObject"),true)) ),(  (((p4 == null()))) ? Dynamic(null()) : Dynamic(p4->__Field(HX_CSTRING("nativeObject"),true)) ));		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(54)
	if (((nativeObject == null()))){
		HX_STACK_LINE(54)
		return null();
	}
	else{
		HX_STACK_LINE(54)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(54)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(54)
			::org::gameplay3d::Mesh result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(54)
			if (((result == null()))){
				HX_STACK_LINE(54)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(54)
				::org::gameplay3d::Mesh _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(54)
				result = _g;
				HX_STACK_LINE(54)
				ref->set(result);
			}
			HX_STACK_LINE(54)
			return result;
		}
		else{
			HX_STACK_LINE(54)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(54)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(54)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Mesh_obj,createQuad_V3X4,return )

::org::gameplay3d::Mesh Mesh_obj::createQuad_FltX8( Float x,Float y,Float width,Float height,hx::Null< Float >  __o_s1,hx::Null< Float >  __o_t1,hx::Null< Float >  __o_s2,hx::Null< Float >  __o_t2){
Float s1 = __o_s1.Default(0);
Float t1 = __o_t1.Default(0);
Float s2 = __o_s2.Default(1);
Float t2 = __o_t2.Default(1);
	HX_STACK_FRAME("org.gameplay3d.Mesh","createQuad_FltX8",0x9aa952e6,"org.gameplay3d.Mesh.createQuad_FltX8","org/gameplay3d/Mesh.hx",60,0x7898e344)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(s1,"s1")
	HX_STACK_ARG(t1,"t1")
	HX_STACK_ARG(s2,"s2")
	HX_STACK_ARG(t2,"t2")
{
		HX_STACK_LINE(60)
		::Class classObj = hx::ClassOf< ::org::gameplay3d::Mesh >();		HX_STACK_VAR(classObj,"classObj");
		HX_STACK_LINE(60)
		Dynamic nativeObject = ::org::gameplay3d::Mesh_obj::hx_Mesh_static_createQuad_FltX8(x,y,width,height,s1,t1,s2,t2);		HX_STACK_VAR(nativeObject,"nativeObject");
		HX_STACK_LINE(60)
		if (((nativeObject == null()))){
			HX_STACK_LINE(60)
			return null();
		}
		else{
			HX_STACK_LINE(60)
			if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
				HX_STACK_LINE(60)
				::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
				HX_STACK_LINE(60)
				::org::gameplay3d::Mesh result = ref->get();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(60)
				if (((result == null()))){
					HX_STACK_LINE(60)
					hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
					HX_STACK_LINE(60)
					::org::gameplay3d::Mesh _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(60)
					result = _g;
					HX_STACK_LINE(60)
					ref->set(result);
				}
				HX_STACK_LINE(60)
				return result;
			}
			else{
				HX_STACK_LINE(60)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
				HX_STACK_LINE(60)
				return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
			}
		}
		HX_STACK_LINE(60)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(Mesh_obj,createQuad_FltX8,return )

::org::gameplay3d::Mesh Mesh_obj::createQuadFullscreen( ){
	HX_STACK_FRAME("org.gameplay3d.Mesh","createQuadFullscreen",0x6cc998d2,"org.gameplay3d.Mesh.createQuadFullscreen","org/gameplay3d/Mesh.hx",66,0x7898e344)
	HX_STACK_LINE(66)
	::Class classObj = hx::ClassOf< ::org::gameplay3d::Mesh >();		HX_STACK_VAR(classObj,"classObj");
	HX_STACK_LINE(66)
	Dynamic nativeObject = ::org::gameplay3d::Mesh_obj::hx_Mesh_static_createQuadFullscreen();		HX_STACK_VAR(nativeObject,"nativeObject");
	HX_STACK_LINE(66)
	if (((nativeObject == null()))){
		HX_STACK_LINE(66)
		return null();
	}
	else{
		HX_STACK_LINE(66)
		if ((::Std_obj::is(nativeObject,hx::ClassOf< ::cpp::vm::WeakRef >()))){
			HX_STACK_LINE(66)
			::cpp::vm::WeakRef ref = nativeObject;		HX_STACK_VAR(ref,"ref");
			HX_STACK_LINE(66)
			::org::gameplay3d::Mesh result = ref->get();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(66)
			if (((result == null()))){
				HX_STACK_LINE(66)
				hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
				HX_STACK_LINE(66)
				::org::gameplay3d::Mesh _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(66)
				result = _g;
				HX_STACK_LINE(66)
				ref->set(result);
			}
			HX_STACK_LINE(66)
			return result;
		}
		else{
			HX_STACK_LINE(66)
			hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = nativeObject;
			HX_STACK_LINE(66)
			return ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);
		}
	}
	HX_STACK_LINE(66)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,createQuadFullscreen,return )

Dynamic Mesh_obj::hx_Mesh_addPart;

Dynamic Mesh_obj::hx_Mesh_static_createBoundingBox;

Dynamic Mesh_obj::hx_Mesh_static_createLines;

Dynamic Mesh_obj::hx_Mesh_static_createMesh;

Dynamic Mesh_obj::hx_Mesh_static_createQuad_V3X4;

Dynamic Mesh_obj::hx_Mesh_static_createQuad_FltX8;

Dynamic Mesh_obj::hx_Mesh_static_createQuadFullscreen;

Dynamic Mesh_obj::hx_Mesh_getBoundingBox;

Dynamic Mesh_obj::hx_Mesh_getBoundingSphere;

Dynamic Mesh_obj::hx_Mesh_getPart;

Dynamic Mesh_obj::hx_Mesh_getPartCount;

Dynamic Mesh_obj::hx_Mesh_getPrimitiveType;

Dynamic Mesh_obj::hx_Mesh_getUrl;

Dynamic Mesh_obj::hx_Mesh_getVertexBuffer;

Dynamic Mesh_obj::hx_Mesh_getVertexCount;

Dynamic Mesh_obj::hx_Mesh_getVertexFormat;

Dynamic Mesh_obj::hx_Mesh_getVertexSize;

Dynamic Mesh_obj::hx_Mesh_isDynamic;

Dynamic Mesh_obj::hx_Mesh_setBoundingBox;

Dynamic Mesh_obj::hx_Mesh_setBoundingSphere;

Dynamic Mesh_obj::hx_Mesh_setPrimitiveType;

Dynamic Mesh_obj::hx_Mesh_setVertexData;


Mesh_obj::Mesh_obj()
{
}

void Mesh_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Mesh);
	HX_MARK_MEMBER_NAME(_boundingBox,"_boundingBox");
	HX_MARK_MEMBER_NAME(_boundingSphere,"_boundingSphere");
	::org::gameplay3d::intern::NativeBinding_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Mesh_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_boundingBox,"_boundingBox");
	HX_VISIT_MEMBER_NAME(_boundingSphere,"_boundingSphere");
	::org::gameplay3d::intern::NativeBinding_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Mesh_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"getUrl") ) { return getUrl_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addPart") ) { return addPart_dyn(); }
		if (HX_FIELD_EQ(inName,"getPart") ) { return getPart_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isDynamic") ) { return isDynamic_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"createMesh") ) { return createMesh_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"createLines") ) { return createLines_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_boundingBox") ) { return _boundingBox; }
		if (HX_FIELD_EQ(inName,"getPartCount") ) { return getPartCount_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getVertexSize") ) { return getVertexSize_dyn(); }
		if (HX_FIELD_EQ(inName,"setVertexData") ) { return setVertexData_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"hx_Mesh_getUrl") ) { return hx_Mesh_getUrl; }
		if (HX_FIELD_EQ(inName,"getBoundingBox") ) { return getBoundingBox_dyn(); }
		if (HX_FIELD_EQ(inName,"getVertexCount") ) { return getVertexCount_dyn(); }
		if (HX_FIELD_EQ(inName,"setBoundingBox") ) { return setBoundingBox_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createQuad_V3X4") ) { return createQuad_V3X4_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Mesh_addPart") ) { return hx_Mesh_addPart; }
		if (HX_FIELD_EQ(inName,"hx_Mesh_getPart") ) { return hx_Mesh_getPart; }
		if (HX_FIELD_EQ(inName,"_boundingSphere") ) { return _boundingSphere; }
		if (HX_FIELD_EQ(inName,"getVertexBuffer") ) { return getVertexBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"getVertexFormat") ) { return getVertexFormat_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createQuad_FltX8") ) { return createQuad_FltX8_dyn(); }
		if (HX_FIELD_EQ(inName,"getPrimitiveType") ) { return getPrimitiveType_dyn(); }
		if (HX_FIELD_EQ(inName,"setPrimitiveType") ) { return setPrimitiveType_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"createBoundingBox") ) { return createBoundingBox_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Mesh_isDynamic") ) { return hx_Mesh_isDynamic; }
		if (HX_FIELD_EQ(inName,"getBoundingSphere") ) { return getBoundingSphere_dyn(); }
		if (HX_FIELD_EQ(inName,"setBoundingSphere") ) { return setBoundingSphere_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"createQuadFullscreen") ) { return createQuadFullscreen_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_Mesh_getPartCount") ) { return hx_Mesh_getPartCount; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hx_Mesh_getVertexSize") ) { return hx_Mesh_getVertexSize; }
		if (HX_FIELD_EQ(inName,"hx_Mesh_setVertexData") ) { return hx_Mesh_setVertexData; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Mesh_getBoundingBox") ) { return hx_Mesh_getBoundingBox; }
		if (HX_FIELD_EQ(inName,"hx_Mesh_getVertexCount") ) { return hx_Mesh_getVertexCount; }
		if (HX_FIELD_EQ(inName,"hx_Mesh_setBoundingBox") ) { return hx_Mesh_setBoundingBox; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_Mesh_getVertexBuffer") ) { return hx_Mesh_getVertexBuffer; }
		if (HX_FIELD_EQ(inName,"hx_Mesh_getVertexFormat") ) { return hx_Mesh_getVertexFormat; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_Mesh_getPrimitiveType") ) { return hx_Mesh_getPrimitiveType; }
		if (HX_FIELD_EQ(inName,"hx_Mesh_setPrimitiveType") ) { return hx_Mesh_setPrimitiveType; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_Mesh_static_createMesh") ) { return hx_Mesh_static_createMesh; }
		if (HX_FIELD_EQ(inName,"hx_Mesh_getBoundingSphere") ) { return hx_Mesh_getBoundingSphere; }
		if (HX_FIELD_EQ(inName,"hx_Mesh_setBoundingSphere") ) { return hx_Mesh_setBoundingSphere; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_Mesh_static_createLines") ) { return hx_Mesh_static_createLines; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"hx_Mesh_static_createQuad_V3X4") ) { return hx_Mesh_static_createQuad_V3X4; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"hx_Mesh_static_createQuad_FltX8") ) { return hx_Mesh_static_createQuad_FltX8; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"hx_Mesh_static_createBoundingBox") ) { return hx_Mesh_static_createBoundingBox; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"hx_Mesh_static_createQuadFullscreen") ) { return hx_Mesh_static_createQuadFullscreen; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Mesh_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"_boundingBox") ) { _boundingBox=inValue.Cast< ::org::gameplay3d::BoundingBox >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"hx_Mesh_getUrl") ) { hx_Mesh_getUrl=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hx_Mesh_addPart") ) { hx_Mesh_addPart=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Mesh_getPart") ) { hx_Mesh_getPart=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_boundingSphere") ) { _boundingSphere=inValue.Cast< ::org::gameplay3d::BoundingSphere >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"hx_Mesh_isDynamic") ) { hx_Mesh_isDynamic=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_Mesh_getPartCount") ) { hx_Mesh_getPartCount=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hx_Mesh_getVertexSize") ) { hx_Mesh_getVertexSize=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Mesh_setVertexData") ) { hx_Mesh_setVertexData=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_Mesh_getBoundingBox") ) { hx_Mesh_getBoundingBox=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Mesh_getVertexCount") ) { hx_Mesh_getVertexCount=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Mesh_setBoundingBox") ) { hx_Mesh_setBoundingBox=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_Mesh_getVertexBuffer") ) { hx_Mesh_getVertexBuffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Mesh_getVertexFormat") ) { hx_Mesh_getVertexFormat=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_Mesh_getPrimitiveType") ) { hx_Mesh_getPrimitiveType=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Mesh_setPrimitiveType") ) { hx_Mesh_setPrimitiveType=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_Mesh_static_createMesh") ) { hx_Mesh_static_createMesh=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Mesh_getBoundingSphere") ) { hx_Mesh_getBoundingSphere=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_Mesh_setBoundingSphere") ) { hx_Mesh_setBoundingSphere=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"hx_Mesh_static_createLines") ) { hx_Mesh_static_createLines=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"hx_Mesh_static_createQuad_V3X4") ) { hx_Mesh_static_createQuad_V3X4=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"hx_Mesh_static_createQuad_FltX8") ) { hx_Mesh_static_createQuad_FltX8=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"hx_Mesh_static_createBoundingBox") ) { hx_Mesh_static_createBoundingBox=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"hx_Mesh_static_createQuadFullscreen") ) { hx_Mesh_static_createQuadFullscreen=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Mesh_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_boundingBox"));
	outFields->push(HX_CSTRING("_boundingSphere"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("createBoundingBox"),
	HX_CSTRING("createLines"),
	HX_CSTRING("createMesh"),
	HX_CSTRING("createQuad_V3X4"),
	HX_CSTRING("createQuad_FltX8"),
	HX_CSTRING("createQuadFullscreen"),
	HX_CSTRING("hx_Mesh_addPart"),
	HX_CSTRING("hx_Mesh_static_createBoundingBox"),
	HX_CSTRING("hx_Mesh_static_createLines"),
	HX_CSTRING("hx_Mesh_static_createMesh"),
	HX_CSTRING("hx_Mesh_static_createQuad_V3X4"),
	HX_CSTRING("hx_Mesh_static_createQuad_FltX8"),
	HX_CSTRING("hx_Mesh_static_createQuadFullscreen"),
	HX_CSTRING("hx_Mesh_getBoundingBox"),
	HX_CSTRING("hx_Mesh_getBoundingSphere"),
	HX_CSTRING("hx_Mesh_getPart"),
	HX_CSTRING("hx_Mesh_getPartCount"),
	HX_CSTRING("hx_Mesh_getPrimitiveType"),
	HX_CSTRING("hx_Mesh_getUrl"),
	HX_CSTRING("hx_Mesh_getVertexBuffer"),
	HX_CSTRING("hx_Mesh_getVertexCount"),
	HX_CSTRING("hx_Mesh_getVertexFormat"),
	HX_CSTRING("hx_Mesh_getVertexSize"),
	HX_CSTRING("hx_Mesh_isDynamic"),
	HX_CSTRING("hx_Mesh_setBoundingBox"),
	HX_CSTRING("hx_Mesh_setBoundingSphere"),
	HX_CSTRING("hx_Mesh_setPrimitiveType"),
	HX_CSTRING("hx_Mesh_setVertexData"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::org::gameplay3d::BoundingBox*/ ,(int)offsetof(Mesh_obj,_boundingBox),HX_CSTRING("_boundingBox")},
	{hx::fsObject /*::org::gameplay3d::BoundingSphere*/ ,(int)offsetof(Mesh_obj,_boundingSphere),HX_CSTRING("_boundingSphere")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_boundingBox"),
	HX_CSTRING("_boundingSphere"),
	HX_CSTRING("addPart"),
	HX_CSTRING("getBoundingBox"),
	HX_CSTRING("getBoundingSphere"),
	HX_CSTRING("getPart"),
	HX_CSTRING("getPartCount"),
	HX_CSTRING("getPrimitiveType"),
	HX_CSTRING("getUrl"),
	HX_CSTRING("getVertexBuffer"),
	HX_CSTRING("getVertexCount"),
	HX_CSTRING("getVertexFormat"),
	HX_CSTRING("getVertexSize"),
	HX_CSTRING("isDynamic"),
	HX_CSTRING("setBoundingBox"),
	HX_CSTRING("setBoundingSphere"),
	HX_CSTRING("setPrimitiveType"),
	HX_CSTRING("setVertexData"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Mesh_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Mesh_obj::hx_Mesh_addPart,"hx_Mesh_addPart");
	HX_MARK_MEMBER_NAME(Mesh_obj::hx_Mesh_static_createBoundingBox,"hx_Mesh_static_createBoundingBox");
	HX_MARK_MEMBER_NAME(Mesh_obj::hx_Mesh_static_createLines,"hx_Mesh_static_createLines");
	HX_MARK_MEMBER_NAME(Mesh_obj::hx_Mesh_static_createMesh,"hx_Mesh_static_createMesh");
	HX_MARK_MEMBER_NAME(Mesh_obj::hx_Mesh_static_createQuad_V3X4,"hx_Mesh_static_createQuad_V3X4");
	HX_MARK_MEMBER_NAME(Mesh_obj::hx_Mesh_static_createQuad_FltX8,"hx_Mesh_static_createQuad_FltX8");
	HX_MARK_MEMBER_NAME(Mesh_obj::hx_Mesh_static_createQuadFullscreen,"hx_Mesh_static_createQuadFullscreen");
	HX_MARK_MEMBER_NAME(Mesh_obj::hx_Mesh_getBoundingBox,"hx_Mesh_getBoundingBox");
	HX_MARK_MEMBER_NAME(Mesh_obj::hx_Mesh_getBoundingSphere,"hx_Mesh_getBoundingSphere");
	HX_MARK_MEMBER_NAME(Mesh_obj::hx_Mesh_getPart,"hx_Mesh_getPart");
	HX_MARK_MEMBER_NAME(Mesh_obj::hx_Mesh_getPartCount,"hx_Mesh_getPartCount");
	HX_MARK_MEMBER_NAME(Mesh_obj::hx_Mesh_getPrimitiveType,"hx_Mesh_getPrimitiveType");
	HX_MARK_MEMBER_NAME(Mesh_obj::hx_Mesh_getUrl,"hx_Mesh_getUrl");
	HX_MARK_MEMBER_NAME(Mesh_obj::hx_Mesh_getVertexBuffer,"hx_Mesh_getVertexBuffer");
	HX_MARK_MEMBER_NAME(Mesh_obj::hx_Mesh_getVertexCount,"hx_Mesh_getVertexCount");
	HX_MARK_MEMBER_NAME(Mesh_obj::hx_Mesh_getVertexFormat,"hx_Mesh_getVertexFormat");
	HX_MARK_MEMBER_NAME(Mesh_obj::hx_Mesh_getVertexSize,"hx_Mesh_getVertexSize");
	HX_MARK_MEMBER_NAME(Mesh_obj::hx_Mesh_isDynamic,"hx_Mesh_isDynamic");
	HX_MARK_MEMBER_NAME(Mesh_obj::hx_Mesh_setBoundingBox,"hx_Mesh_setBoundingBox");
	HX_MARK_MEMBER_NAME(Mesh_obj::hx_Mesh_setBoundingSphere,"hx_Mesh_setBoundingSphere");
	HX_MARK_MEMBER_NAME(Mesh_obj::hx_Mesh_setPrimitiveType,"hx_Mesh_setPrimitiveType");
	HX_MARK_MEMBER_NAME(Mesh_obj::hx_Mesh_setVertexData,"hx_Mesh_setVertexData");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Mesh_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Mesh_obj::hx_Mesh_addPart,"hx_Mesh_addPart");
	HX_VISIT_MEMBER_NAME(Mesh_obj::hx_Mesh_static_createBoundingBox,"hx_Mesh_static_createBoundingBox");
	HX_VISIT_MEMBER_NAME(Mesh_obj::hx_Mesh_static_createLines,"hx_Mesh_static_createLines");
	HX_VISIT_MEMBER_NAME(Mesh_obj::hx_Mesh_static_createMesh,"hx_Mesh_static_createMesh");
	HX_VISIT_MEMBER_NAME(Mesh_obj::hx_Mesh_static_createQuad_V3X4,"hx_Mesh_static_createQuad_V3X4");
	HX_VISIT_MEMBER_NAME(Mesh_obj::hx_Mesh_static_createQuad_FltX8,"hx_Mesh_static_createQuad_FltX8");
	HX_VISIT_MEMBER_NAME(Mesh_obj::hx_Mesh_static_createQuadFullscreen,"hx_Mesh_static_createQuadFullscreen");
	HX_VISIT_MEMBER_NAME(Mesh_obj::hx_Mesh_getBoundingBox,"hx_Mesh_getBoundingBox");
	HX_VISIT_MEMBER_NAME(Mesh_obj::hx_Mesh_getBoundingSphere,"hx_Mesh_getBoundingSphere");
	HX_VISIT_MEMBER_NAME(Mesh_obj::hx_Mesh_getPart,"hx_Mesh_getPart");
	HX_VISIT_MEMBER_NAME(Mesh_obj::hx_Mesh_getPartCount,"hx_Mesh_getPartCount");
	HX_VISIT_MEMBER_NAME(Mesh_obj::hx_Mesh_getPrimitiveType,"hx_Mesh_getPrimitiveType");
	HX_VISIT_MEMBER_NAME(Mesh_obj::hx_Mesh_getUrl,"hx_Mesh_getUrl");
	HX_VISIT_MEMBER_NAME(Mesh_obj::hx_Mesh_getVertexBuffer,"hx_Mesh_getVertexBuffer");
	HX_VISIT_MEMBER_NAME(Mesh_obj::hx_Mesh_getVertexCount,"hx_Mesh_getVertexCount");
	HX_VISIT_MEMBER_NAME(Mesh_obj::hx_Mesh_getVertexFormat,"hx_Mesh_getVertexFormat");
	HX_VISIT_MEMBER_NAME(Mesh_obj::hx_Mesh_getVertexSize,"hx_Mesh_getVertexSize");
	HX_VISIT_MEMBER_NAME(Mesh_obj::hx_Mesh_isDynamic,"hx_Mesh_isDynamic");
	HX_VISIT_MEMBER_NAME(Mesh_obj::hx_Mesh_setBoundingBox,"hx_Mesh_setBoundingBox");
	HX_VISIT_MEMBER_NAME(Mesh_obj::hx_Mesh_setBoundingSphere,"hx_Mesh_setBoundingSphere");
	HX_VISIT_MEMBER_NAME(Mesh_obj::hx_Mesh_setPrimitiveType,"hx_Mesh_setPrimitiveType");
	HX_VISIT_MEMBER_NAME(Mesh_obj::hx_Mesh_setVertexData,"hx_Mesh_setVertexData");
};

#endif

Class Mesh_obj::__mClass;

void Mesh_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.Mesh"), hx::TCanCast< Mesh_obj> ,sStaticFields,sMemberFields,
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

void Mesh_obj::__boot()
{
	hx_Mesh_addPart= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Mesh >(),HX_CSTRING("addPart"),(int)5);
	hx_Mesh_static_createBoundingBox= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Mesh >(),HX_CSTRING("static_createBoundingBox"),(int)1);
	hx_Mesh_static_createLines= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Mesh >(),HX_CSTRING("static_createLines"),(int)2);
	hx_Mesh_static_createMesh= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Mesh >(),HX_CSTRING("static_createMesh"),(int)3);
	hx_Mesh_static_createQuad_V3X4= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Mesh >(),HX_CSTRING("static_createQuad_V3X4"),(int)4);
	hx_Mesh_static_createQuad_FltX8= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Mesh >(),HX_CSTRING("static_createQuad_FltX8"),(int)-1);
	hx_Mesh_static_createQuadFullscreen= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Mesh >(),HX_CSTRING("static_createQuadFullscreen"),(int)0);
	hx_Mesh_getBoundingBox= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Mesh >(),HX_CSTRING("getBoundingBox"),(int)1);
	hx_Mesh_getBoundingSphere= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Mesh >(),HX_CSTRING("getBoundingSphere"),(int)1);
	hx_Mesh_getPart= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Mesh >(),HX_CSTRING("getPart"),(int)2);
	hx_Mesh_getPartCount= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Mesh >(),HX_CSTRING("getPartCount"),(int)1);
	hx_Mesh_getPrimitiveType= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Mesh >(),HX_CSTRING("getPrimitiveType"),(int)1);
	hx_Mesh_getUrl= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Mesh >(),HX_CSTRING("getUrl"),(int)1);
	hx_Mesh_getVertexBuffer= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Mesh >(),HX_CSTRING("getVertexBuffer"),(int)1);
	hx_Mesh_getVertexCount= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Mesh >(),HX_CSTRING("getVertexCount"),(int)1);
	hx_Mesh_getVertexFormat= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Mesh >(),HX_CSTRING("getVertexFormat"),(int)1);
	hx_Mesh_getVertexSize= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Mesh >(),HX_CSTRING("getVertexSize"),(int)1);
	hx_Mesh_isDynamic= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Mesh >(),HX_CSTRING("isDynamic"),(int)1);
	hx_Mesh_setBoundingBox= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Mesh >(),HX_CSTRING("setBoundingBox"),(int)2);
	hx_Mesh_setBoundingSphere= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Mesh >(),HX_CSTRING("setBoundingSphere"),(int)2);
	hx_Mesh_setPrimitiveType= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Mesh >(),HX_CSTRING("setPrimitiveType"),(int)2);
	hx_Mesh_setVertexData= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::Mesh >(),HX_CSTRING("setVertexData"),(int)4);
}

} // end namespace org
} // end namespace gameplay3d
