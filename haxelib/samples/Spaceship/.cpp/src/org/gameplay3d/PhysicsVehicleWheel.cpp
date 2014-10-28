#include <hxcpp.h>

#ifndef INCLUDED_org_gameplay3d_AnimationTarget
#include <org/gameplay3d/AnimationTarget.h>
#endif
#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Node
#include <org/gameplay3d/Node.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsCollisionObject
#include <org/gameplay3d/PhysicsCollisionObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsVehicleWheel
#include <org/gameplay3d/PhysicsVehicleWheel.h>
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
#ifndef INCLUDED_org_gameplay3d_Vector3
#include <org/gameplay3d/Vector3.h>
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
#ifndef INCLUDED_org_gameplay3d_util_NativeInterface
#include <org/gameplay3d/util/NativeInterface.h>
#endif
namespace org{
namespace gameplay3d{

Void PhysicsVehicleWheel_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.PhysicsVehicleWheel","new",0xaabdbc9b,"org.gameplay3d.PhysicsVehicleWheel.new","org/gameplay3d/PhysicsVehicleWheel.hx",11,0xd70ab4d5)
HX_STACK_THIS(this)
HX_STACK_ARG(nativeObjectInitializer,"nativeObjectInitializer")
HX_STACK_ARG(nativeObjectInitializerParams,"nativeObjectInitializerParams")
{
	HX_STACK_LINE(11)
	super::__construct(nativeObjectInitializer,nativeObjectInitializerParams);
}
;
	return null();
}

//PhysicsVehicleWheel_obj::~PhysicsVehicleWheel_obj() { }

Dynamic PhysicsVehicleWheel_obj::__CreateEmpty() { return  new PhysicsVehicleWheel_obj; }
hx::ObjectPtr< PhysicsVehicleWheel_obj > PhysicsVehicleWheel_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< PhysicsVehicleWheel_obj > result = new PhysicsVehicleWheel_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic PhysicsVehicleWheel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PhysicsVehicleWheel_obj > result = new PhysicsVehicleWheel_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Float PhysicsVehicleWheel_obj::getFrictionBreakout( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsVehicleWheel","getFrictionBreakout",0x72a4373a,"org.gameplay3d.PhysicsVehicleWheel.getFrictionBreakout","org/gameplay3d/PhysicsVehicleWheel.hx",20,0xd70ab4d5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(20)
	return ::org::gameplay3d::PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_getFrictionBreakout(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsVehicleWheel_obj,getFrictionBreakout,return )

Float PhysicsVehicleWheel_obj::getRollInfluence( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsVehicleWheel","getRollInfluence",0x83722f27,"org.gameplay3d.PhysicsVehicleWheel.getRollInfluence","org/gameplay3d/PhysicsVehicleWheel.hx",26,0xd70ab4d5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(26)
	return ::org::gameplay3d::PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_getRollInfluence(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsVehicleWheel_obj,getRollInfluence,return )

Void PhysicsVehicleWheel_obj::getStrutConnectionOffset( ::org::gameplay3d::Vector3 strutConnectionOffset){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsVehicleWheel","getStrutConnectionOffset",0xdad76b30,"org.gameplay3d.PhysicsVehicleWheel.getStrutConnectionOffset","org/gameplay3d/PhysicsVehicleWheel.hx",32,0xd70ab4d5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(strutConnectionOffset,"strutConnectionOffset")
		HX_STACK_LINE(32)
		::org::gameplay3d::PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_getStrutConnectionOffset(this->nativeObject,(  (((strutConnectionOffset == null()))) ? Dynamic(null()) : Dynamic(strutConnectionOffset->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsVehicleWheel_obj,getStrutConnectionOffset,(void))

Float PhysicsVehicleWheel_obj::getStrutDampingCompression( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsVehicleWheel","getStrutDampingCompression",0xd06edc63,"org.gameplay3d.PhysicsVehicleWheel.getStrutDampingCompression","org/gameplay3d/PhysicsVehicleWheel.hx",38,0xd70ab4d5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(38)
	return ::org::gameplay3d::PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_getStrutDampingCompression(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsVehicleWheel_obj,getStrutDampingCompression,return )

Float PhysicsVehicleWheel_obj::getStrutDampingRelaxation( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsVehicleWheel","getStrutDampingRelaxation",0xd75d9bc8,"org.gameplay3d.PhysicsVehicleWheel.getStrutDampingRelaxation","org/gameplay3d/PhysicsVehicleWheel.hx",44,0xd70ab4d5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(44)
	return ::org::gameplay3d::PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_getStrutDampingRelaxation(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsVehicleWheel_obj,getStrutDampingRelaxation,return )

Float PhysicsVehicleWheel_obj::getStrutForceMax( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsVehicleWheel","getStrutForceMax",0xd7853358,"org.gameplay3d.PhysicsVehicleWheel.getStrutForceMax","org/gameplay3d/PhysicsVehicleWheel.hx",50,0xd70ab4d5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(50)
	return ::org::gameplay3d::PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_getStrutForceMax(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsVehicleWheel_obj,getStrutForceMax,return )

Float PhysicsVehicleWheel_obj::getStrutRestLength( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsVehicleWheel","getStrutRestLength",0x4726beb9,"org.gameplay3d.PhysicsVehicleWheel.getStrutRestLength","org/gameplay3d/PhysicsVehicleWheel.hx",56,0xd70ab4d5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(56)
	return ::org::gameplay3d::PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_getStrutRestLength(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsVehicleWheel_obj,getStrutRestLength,return )

Float PhysicsVehicleWheel_obj::getStrutStiffness( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsVehicleWheel","getStrutStiffness",0xf750d5c0,"org.gameplay3d.PhysicsVehicleWheel.getStrutStiffness","org/gameplay3d/PhysicsVehicleWheel.hx",62,0xd70ab4d5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(62)
	return ::org::gameplay3d::PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_getStrutStiffness(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsVehicleWheel_obj,getStrutStiffness,return )

Float PhysicsVehicleWheel_obj::getStrutTravelMax( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsVehicleWheel","getStrutTravelMax",0xdc1c22eb,"org.gameplay3d.PhysicsVehicleWheel.getStrutTravelMax","org/gameplay3d/PhysicsVehicleWheel.hx",68,0xd70ab4d5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(68)
	return ::org::gameplay3d::PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_getStrutTravelMax(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsVehicleWheel_obj,getStrutTravelMax,return )

int PhysicsVehicleWheel_obj::getType( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsVehicleWheel","getType",0x3bffc82b,"org.gameplay3d.PhysicsVehicleWheel.getType","org/gameplay3d/PhysicsVehicleWheel.hx",74,0xd70ab4d5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(74)
	return ::org::gameplay3d::PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_getType(this->nativeObject);
}


Void PhysicsVehicleWheel_obj::getWheelAxle( ::org::gameplay3d::Vector3 wheelAxle){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsVehicleWheel","getWheelAxle",0xb6cb3a5a,"org.gameplay3d.PhysicsVehicleWheel.getWheelAxle","org/gameplay3d/PhysicsVehicleWheel.hx",80,0xd70ab4d5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(wheelAxle,"wheelAxle")
		HX_STACK_LINE(80)
		::org::gameplay3d::PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_getWheelAxle(this->nativeObject,(  (((wheelAxle == null()))) ? Dynamic(null()) : Dynamic(wheelAxle->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsVehicleWheel_obj,getWheelAxle,(void))

Void PhysicsVehicleWheel_obj::getWheelDirection( ::org::gameplay3d::Vector3 wheelDirection){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsVehicleWheel","getWheelDirection",0xde698ed5,"org.gameplay3d.PhysicsVehicleWheel.getWheelDirection","org/gameplay3d/PhysicsVehicleWheel.hx",86,0xd70ab4d5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(wheelDirection,"wheelDirection")
		HX_STACK_LINE(86)
		::org::gameplay3d::PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_getWheelDirection(this->nativeObject,(  (((wheelDirection == null()))) ? Dynamic(null()) : Dynamic(wheelDirection->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsVehicleWheel_obj,getWheelDirection,(void))

Float PhysicsVehicleWheel_obj::getWheelRadius( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsVehicleWheel","getWheelRadius",0xf46589fc,"org.gameplay3d.PhysicsVehicleWheel.getWheelRadius","org/gameplay3d/PhysicsVehicleWheel.hx",92,0xd70ab4d5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(92)
	return ::org::gameplay3d::PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_getWheelRadius(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsVehicleWheel_obj,getWheelRadius,return )

bool PhysicsVehicleWheel_obj::isSteerable( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsVehicleWheel","isSteerable",0x1fc1921c,"org.gameplay3d.PhysicsVehicleWheel.isSteerable","org/gameplay3d/PhysicsVehicleWheel.hx",98,0xd70ab4d5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(98)
	return ::org::gameplay3d::PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_isSteerable(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsVehicleWheel_obj,isSteerable,return )

Void PhysicsVehicleWheel_obj::setEnabled( bool enable){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsVehicleWheel","setEnabled",0xe59c0a24,"org.gameplay3d.PhysicsVehicleWheel.setEnabled","org/gameplay3d/PhysicsVehicleWheel.hx",104,0xd70ab4d5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(enable,"enable")
		HX_STACK_LINE(104)
		::org::gameplay3d::PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setEnabled(this->nativeObject,enable);
	}
return null();
}


Void PhysicsVehicleWheel_obj::setFrictionBreakout( Float frictionBreakout){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsVehicleWheel","setFrictionBreakout",0xaf412a46,"org.gameplay3d.PhysicsVehicleWheel.setFrictionBreakout","org/gameplay3d/PhysicsVehicleWheel.hx",110,0xd70ab4d5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(frictionBreakout,"frictionBreakout")
		HX_STACK_LINE(110)
		::org::gameplay3d::PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setFrictionBreakout(this->nativeObject,frictionBreakout);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsVehicleWheel_obj,setFrictionBreakout,(void))

Void PhysicsVehicleWheel_obj::setRollInfluence( Float rollInfluence){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsVehicleWheel","setRollInfluence",0xd9b41c9b,"org.gameplay3d.PhysicsVehicleWheel.setRollInfluence","org/gameplay3d/PhysicsVehicleWheel.hx",116,0xd70ab4d5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rollInfluence,"rollInfluence")
		HX_STACK_LINE(116)
		::org::gameplay3d::PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setRollInfluence(this->nativeObject,rollInfluence);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsVehicleWheel_obj,setRollInfluence,(void))

Void PhysicsVehicleWheel_obj::setSteerable( bool steerable){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsVehicleWheel","setSteerable",0xb7d9b08e,"org.gameplay3d.PhysicsVehicleWheel.setSteerable","org/gameplay3d/PhysicsVehicleWheel.hx",122,0xd70ab4d5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(steerable,"steerable")
		HX_STACK_LINE(122)
		::org::gameplay3d::PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setSteerable(this->nativeObject,steerable);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsVehicleWheel_obj,setSteerable,(void))

Void PhysicsVehicleWheel_obj::setStrutConnectionOffset( ::org::gameplay3d::immutable::IVector3 strutConnectionOffset){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsVehicleWheel","setStrutConnectionOffset",0xedb1eca4,"org.gameplay3d.PhysicsVehicleWheel.setStrutConnectionOffset","org/gameplay3d/PhysicsVehicleWheel.hx",128,0xd70ab4d5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(strutConnectionOffset,"strutConnectionOffset")
		HX_STACK_LINE(128)
		::org::gameplay3d::PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setStrutConnectionOffset(this->nativeObject,(  (((strutConnectionOffset == null()))) ? Dynamic(null()) : Dynamic(strutConnectionOffset->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsVehicleWheel_obj,setStrutConnectionOffset,(void))

Void PhysicsVehicleWheel_obj::setStrutDampingCompression( Float strutDampingCompression){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsVehicleWheel","setStrutDampingCompression",0x3003a2d7,"org.gameplay3d.PhysicsVehicleWheel.setStrutDampingCompression","org/gameplay3d/PhysicsVehicleWheel.hx",134,0xd70ab4d5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(strutDampingCompression,"strutDampingCompression")
		HX_STACK_LINE(134)
		::org::gameplay3d::PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setStrutDampingCompression(this->nativeObject,strutDampingCompression);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsVehicleWheel_obj,setStrutDampingCompression,(void))

Void PhysicsVehicleWheel_obj::setStrutDampingRelaxation( Float strutDampingRelaxation){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsVehicleWheel","setStrutDampingRelaxation",0x43b45fd4,"org.gameplay3d.PhysicsVehicleWheel.setStrutDampingRelaxation","org/gameplay3d/PhysicsVehicleWheel.hx",140,0xd70ab4d5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(strutDampingRelaxation,"strutDampingRelaxation")
		HX_STACK_LINE(140)
		::org::gameplay3d::PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setStrutDampingRelaxation(this->nativeObject,strutDampingRelaxation);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsVehicleWheel_obj,setStrutDampingRelaxation,(void))

Void PhysicsVehicleWheel_obj::setStrutForceMax( Float strutForceMax){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsVehicleWheel","setStrutForceMax",0x2dc720cc,"org.gameplay3d.PhysicsVehicleWheel.setStrutForceMax","org/gameplay3d/PhysicsVehicleWheel.hx",146,0xd70ab4d5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(strutForceMax,"strutForceMax")
		HX_STACK_LINE(146)
		::org::gameplay3d::PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setStrutForceMax(this->nativeObject,strutForceMax);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsVehicleWheel_obj,setStrutForceMax,(void))

Void PhysicsVehicleWheel_obj::setStrutRestLength( Float strutRestLength){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsVehicleWheel","setStrutRestLength",0x23d5f12d,"org.gameplay3d.PhysicsVehicleWheel.setStrutRestLength","org/gameplay3d/PhysicsVehicleWheel.hx",152,0xd70ab4d5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(strutRestLength,"strutRestLength")
		HX_STACK_LINE(152)
		::org::gameplay3d::PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setStrutRestLength(this->nativeObject,strutRestLength);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsVehicleWheel_obj,setStrutRestLength,(void))

Void PhysicsVehicleWheel_obj::setStrutStiffness( Float strutStiffness){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsVehicleWheel","setStrutStiffness",0x1abeadcc,"org.gameplay3d.PhysicsVehicleWheel.setStrutStiffness","org/gameplay3d/PhysicsVehicleWheel.hx",158,0xd70ab4d5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(strutStiffness,"strutStiffness")
		HX_STACK_LINE(158)
		::org::gameplay3d::PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setStrutStiffness(this->nativeObject,strutStiffness);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsVehicleWheel_obj,setStrutStiffness,(void))

Void PhysicsVehicleWheel_obj::setStrutTravelMax( Float strutTravelMax){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsVehicleWheel","setStrutTravelMax",0xff89faf7,"org.gameplay3d.PhysicsVehicleWheel.setStrutTravelMax","org/gameplay3d/PhysicsVehicleWheel.hx",164,0xd70ab4d5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(strutTravelMax,"strutTravelMax")
		HX_STACK_LINE(164)
		::org::gameplay3d::PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setStrutTravelMax(this->nativeObject,strutTravelMax);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsVehicleWheel_obj,setStrutTravelMax,(void))

Void PhysicsVehicleWheel_obj::setWheelAxle( ::org::gameplay3d::immutable::IVector3 wheelAxle){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsVehicleWheel","setWheelAxle",0xcbc45dce,"org.gameplay3d.PhysicsVehicleWheel.setWheelAxle","org/gameplay3d/PhysicsVehicleWheel.hx",170,0xd70ab4d5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(wheelAxle,"wheelAxle")
		HX_STACK_LINE(170)
		::org::gameplay3d::PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setWheelAxle(this->nativeObject,(  (((wheelAxle == null()))) ? Dynamic(null()) : Dynamic(wheelAxle->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsVehicleWheel_obj,setWheelAxle,(void))

Void PhysicsVehicleWheel_obj::setWheelDirection( ::org::gameplay3d::immutable::IVector3 wheelDirection){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsVehicleWheel","setWheelDirection",0x01d766e1,"org.gameplay3d.PhysicsVehicleWheel.setWheelDirection","org/gameplay3d/PhysicsVehicleWheel.hx",176,0xd70ab4d5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(wheelDirection,"wheelDirection")
		HX_STACK_LINE(176)
		::org::gameplay3d::PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setWheelDirection(this->nativeObject,(  (((wheelDirection == null()))) ? Dynamic(null()) : Dynamic(wheelDirection->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsVehicleWheel_obj,setWheelDirection,(void))

Void PhysicsVehicleWheel_obj::setWheelRadius( Float wheelRadius){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsVehicleWheel","setWheelRadius",0x14857270,"org.gameplay3d.PhysicsVehicleWheel.setWheelRadius","org/gameplay3d/PhysicsVehicleWheel.hx",182,0xd70ab4d5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(wheelRadius,"wheelRadius")
		HX_STACK_LINE(182)
		::org::gameplay3d::PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setWheelRadius(this->nativeObject,wheelRadius);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsVehicleWheel_obj,setWheelRadius,(void))

Void PhysicsVehicleWheel_obj::transform( ::org::gameplay3d::Node node){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsVehicleWheel","transform",0x83a877e7,"org.gameplay3d.PhysicsVehicleWheel.transform","org/gameplay3d/PhysicsVehicleWheel.hx",188,0xd70ab4d5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(node,"node")
		HX_STACK_LINE(188)
		::org::gameplay3d::PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_transform(this->nativeObject,(  (((node == null()))) ? Dynamic(null()) : Dynamic(node->nativeObject) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsVehicleWheel_obj,transform,(void))

Dynamic PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_getFrictionBreakout;

Dynamic PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_getRollInfluence;

Dynamic PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_getStrutConnectionOffset;

Dynamic PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_getStrutDampingCompression;

Dynamic PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_getStrutDampingRelaxation;

Dynamic PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_getStrutForceMax;

Dynamic PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_getStrutRestLength;

Dynamic PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_getStrutStiffness;

Dynamic PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_getStrutTravelMax;

Dynamic PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_getType;

Dynamic PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_getWheelAxle;

Dynamic PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_getWheelDirection;

Dynamic PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_getWheelRadius;

Dynamic PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_isSteerable;

Dynamic PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setEnabled;

Dynamic PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setFrictionBreakout;

Dynamic PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setRollInfluence;

Dynamic PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setSteerable;

Dynamic PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setStrutConnectionOffset;

Dynamic PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setStrutDampingCompression;

Dynamic PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setStrutDampingRelaxation;

Dynamic PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setStrutForceMax;

Dynamic PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setStrutRestLength;

Dynamic PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setStrutStiffness;

Dynamic PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setStrutTravelMax;

Dynamic PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setWheelAxle;

Dynamic PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setWheelDirection;

Dynamic PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setWheelRadius;

Dynamic PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_transform;


PhysicsVehicleWheel_obj::PhysicsVehicleWheel_obj()
{
}

Dynamic PhysicsVehicleWheel_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { return transform_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setEnabled") ) { return setEnabled_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isSteerable") ) { return isSteerable_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getWheelAxle") ) { return getWheelAxle_dyn(); }
		if (HX_FIELD_EQ(inName,"setSteerable") ) { return setSteerable_dyn(); }
		if (HX_FIELD_EQ(inName,"setWheelAxle") ) { return setWheelAxle_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getWheelRadius") ) { return getWheelRadius_dyn(); }
		if (HX_FIELD_EQ(inName,"setWheelRadius") ) { return setWheelRadius_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getRollInfluence") ) { return getRollInfluence_dyn(); }
		if (HX_FIELD_EQ(inName,"getStrutForceMax") ) { return getStrutForceMax_dyn(); }
		if (HX_FIELD_EQ(inName,"setRollInfluence") ) { return setRollInfluence_dyn(); }
		if (HX_FIELD_EQ(inName,"setStrutForceMax") ) { return setStrutForceMax_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getStrutStiffness") ) { return getStrutStiffness_dyn(); }
		if (HX_FIELD_EQ(inName,"getStrutTravelMax") ) { return getStrutTravelMax_dyn(); }
		if (HX_FIELD_EQ(inName,"getWheelDirection") ) { return getWheelDirection_dyn(); }
		if (HX_FIELD_EQ(inName,"setStrutStiffness") ) { return setStrutStiffness_dyn(); }
		if (HX_FIELD_EQ(inName,"setStrutTravelMax") ) { return setStrutTravelMax_dyn(); }
		if (HX_FIELD_EQ(inName,"setWheelDirection") ) { return setWheelDirection_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getStrutRestLength") ) { return getStrutRestLength_dyn(); }
		if (HX_FIELD_EQ(inName,"setStrutRestLength") ) { return setStrutRestLength_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getFrictionBreakout") ) { return getFrictionBreakout_dyn(); }
		if (HX_FIELD_EQ(inName,"setFrictionBreakout") ) { return setFrictionBreakout_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"getStrutConnectionOffset") ) { return getStrutConnectionOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"setStrutConnectionOffset") ) { return setStrutConnectionOffset_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"getStrutDampingRelaxation") ) { return getStrutDampingRelaxation_dyn(); }
		if (HX_FIELD_EQ(inName,"setStrutDampingRelaxation") ) { return setStrutDampingRelaxation_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"getStrutDampingCompression") ) { return getStrutDampingCompression_dyn(); }
		if (HX_FIELD_EQ(inName,"setStrutDampingCompression") ) { return setStrutDampingCompression_dyn(); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_getType") ) { return hx_PhysicsVehicleWheel_getType; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_transform") ) { return hx_PhysicsVehicleWheel_transform; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_setEnabled") ) { return hx_PhysicsVehicleWheel_setEnabled; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_isSteerable") ) { return hx_PhysicsVehicleWheel_isSteerable; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_getWheelAxle") ) { return hx_PhysicsVehicleWheel_getWheelAxle; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_setSteerable") ) { return hx_PhysicsVehicleWheel_setSteerable; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_setWheelAxle") ) { return hx_PhysicsVehicleWheel_setWheelAxle; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_getWheelRadius") ) { return hx_PhysicsVehicleWheel_getWheelRadius; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_setWheelRadius") ) { return hx_PhysicsVehicleWheel_setWheelRadius; }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_getRollInfluence") ) { return hx_PhysicsVehicleWheel_getRollInfluence; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_getStrutForceMax") ) { return hx_PhysicsVehicleWheel_getStrutForceMax; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_setRollInfluence") ) { return hx_PhysicsVehicleWheel_setRollInfluence; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_setStrutForceMax") ) { return hx_PhysicsVehicleWheel_setStrutForceMax; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_getStrutStiffness") ) { return hx_PhysicsVehicleWheel_getStrutStiffness; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_getStrutTravelMax") ) { return hx_PhysicsVehicleWheel_getStrutTravelMax; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_getWheelDirection") ) { return hx_PhysicsVehicleWheel_getWheelDirection; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_setStrutStiffness") ) { return hx_PhysicsVehicleWheel_setStrutStiffness; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_setStrutTravelMax") ) { return hx_PhysicsVehicleWheel_setStrutTravelMax; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_setWheelDirection") ) { return hx_PhysicsVehicleWheel_setWheelDirection; }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_getStrutRestLength") ) { return hx_PhysicsVehicleWheel_getStrutRestLength; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_setStrutRestLength") ) { return hx_PhysicsVehicleWheel_setStrutRestLength; }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_getFrictionBreakout") ) { return hx_PhysicsVehicleWheel_getFrictionBreakout; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_setFrictionBreakout") ) { return hx_PhysicsVehicleWheel_setFrictionBreakout; }
		break;
	case 47:
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_getStrutConnectionOffset") ) { return hx_PhysicsVehicleWheel_getStrutConnectionOffset; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_setStrutConnectionOffset") ) { return hx_PhysicsVehicleWheel_setStrutConnectionOffset; }
		break;
	case 48:
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_getStrutDampingRelaxation") ) { return hx_PhysicsVehicleWheel_getStrutDampingRelaxation; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_setStrutDampingRelaxation") ) { return hx_PhysicsVehicleWheel_setStrutDampingRelaxation; }
		break;
	case 49:
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_getStrutDampingCompression") ) { return hx_PhysicsVehicleWheel_getStrutDampingCompression; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_setStrutDampingCompression") ) { return hx_PhysicsVehicleWheel_setStrutDampingCompression; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PhysicsVehicleWheel_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 30:
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_getType") ) { hx_PhysicsVehicleWheel_getType=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_transform") ) { hx_PhysicsVehicleWheel_transform=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_setEnabled") ) { hx_PhysicsVehicleWheel_setEnabled=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_isSteerable") ) { hx_PhysicsVehicleWheel_isSteerable=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_getWheelAxle") ) { hx_PhysicsVehicleWheel_getWheelAxle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_setSteerable") ) { hx_PhysicsVehicleWheel_setSteerable=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_setWheelAxle") ) { hx_PhysicsVehicleWheel_setWheelAxle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_getWheelRadius") ) { hx_PhysicsVehicleWheel_getWheelRadius=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_setWheelRadius") ) { hx_PhysicsVehicleWheel_setWheelRadius=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_getRollInfluence") ) { hx_PhysicsVehicleWheel_getRollInfluence=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_getStrutForceMax") ) { hx_PhysicsVehicleWheel_getStrutForceMax=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_setRollInfluence") ) { hx_PhysicsVehicleWheel_setRollInfluence=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_setStrutForceMax") ) { hx_PhysicsVehicleWheel_setStrutForceMax=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_getStrutStiffness") ) { hx_PhysicsVehicleWheel_getStrutStiffness=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_getStrutTravelMax") ) { hx_PhysicsVehicleWheel_getStrutTravelMax=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_getWheelDirection") ) { hx_PhysicsVehicleWheel_getWheelDirection=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_setStrutStiffness") ) { hx_PhysicsVehicleWheel_setStrutStiffness=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_setStrutTravelMax") ) { hx_PhysicsVehicleWheel_setStrutTravelMax=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_setWheelDirection") ) { hx_PhysicsVehicleWheel_setWheelDirection=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_getStrutRestLength") ) { hx_PhysicsVehicleWheel_getStrutRestLength=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_setStrutRestLength") ) { hx_PhysicsVehicleWheel_setStrutRestLength=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_getFrictionBreakout") ) { hx_PhysicsVehicleWheel_getFrictionBreakout=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_setFrictionBreakout") ) { hx_PhysicsVehicleWheel_setFrictionBreakout=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 47:
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_getStrutConnectionOffset") ) { hx_PhysicsVehicleWheel_getStrutConnectionOffset=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_setStrutConnectionOffset") ) { hx_PhysicsVehicleWheel_setStrutConnectionOffset=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 48:
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_getStrutDampingRelaxation") ) { hx_PhysicsVehicleWheel_getStrutDampingRelaxation=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_setStrutDampingRelaxation") ) { hx_PhysicsVehicleWheel_setStrutDampingRelaxation=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 49:
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_getStrutDampingCompression") ) { hx_PhysicsVehicleWheel_getStrutDampingCompression=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsVehicleWheel_setStrutDampingCompression") ) { hx_PhysicsVehicleWheel_setStrutDampingCompression=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PhysicsVehicleWheel_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("hx_PhysicsVehicleWheel_getFrictionBreakout"),
	HX_CSTRING("hx_PhysicsVehicleWheel_getRollInfluence"),
	HX_CSTRING("hx_PhysicsVehicleWheel_getStrutConnectionOffset"),
	HX_CSTRING("hx_PhysicsVehicleWheel_getStrutDampingCompression"),
	HX_CSTRING("hx_PhysicsVehicleWheel_getStrutDampingRelaxation"),
	HX_CSTRING("hx_PhysicsVehicleWheel_getStrutForceMax"),
	HX_CSTRING("hx_PhysicsVehicleWheel_getStrutRestLength"),
	HX_CSTRING("hx_PhysicsVehicleWheel_getStrutStiffness"),
	HX_CSTRING("hx_PhysicsVehicleWheel_getStrutTravelMax"),
	HX_CSTRING("hx_PhysicsVehicleWheel_getType"),
	HX_CSTRING("hx_PhysicsVehicleWheel_getWheelAxle"),
	HX_CSTRING("hx_PhysicsVehicleWheel_getWheelDirection"),
	HX_CSTRING("hx_PhysicsVehicleWheel_getWheelRadius"),
	HX_CSTRING("hx_PhysicsVehicleWheel_isSteerable"),
	HX_CSTRING("hx_PhysicsVehicleWheel_setEnabled"),
	HX_CSTRING("hx_PhysicsVehicleWheel_setFrictionBreakout"),
	HX_CSTRING("hx_PhysicsVehicleWheel_setRollInfluence"),
	HX_CSTRING("hx_PhysicsVehicleWheel_setSteerable"),
	HX_CSTRING("hx_PhysicsVehicleWheel_setStrutConnectionOffset"),
	HX_CSTRING("hx_PhysicsVehicleWheel_setStrutDampingCompression"),
	HX_CSTRING("hx_PhysicsVehicleWheel_setStrutDampingRelaxation"),
	HX_CSTRING("hx_PhysicsVehicleWheel_setStrutForceMax"),
	HX_CSTRING("hx_PhysicsVehicleWheel_setStrutRestLength"),
	HX_CSTRING("hx_PhysicsVehicleWheel_setStrutStiffness"),
	HX_CSTRING("hx_PhysicsVehicleWheel_setStrutTravelMax"),
	HX_CSTRING("hx_PhysicsVehicleWheel_setWheelAxle"),
	HX_CSTRING("hx_PhysicsVehicleWheel_setWheelDirection"),
	HX_CSTRING("hx_PhysicsVehicleWheel_setWheelRadius"),
	HX_CSTRING("hx_PhysicsVehicleWheel_transform"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("getFrictionBreakout"),
	HX_CSTRING("getRollInfluence"),
	HX_CSTRING("getStrutConnectionOffset"),
	HX_CSTRING("getStrutDampingCompression"),
	HX_CSTRING("getStrutDampingRelaxation"),
	HX_CSTRING("getStrutForceMax"),
	HX_CSTRING("getStrutRestLength"),
	HX_CSTRING("getStrutStiffness"),
	HX_CSTRING("getStrutTravelMax"),
	HX_CSTRING("getType"),
	HX_CSTRING("getWheelAxle"),
	HX_CSTRING("getWheelDirection"),
	HX_CSTRING("getWheelRadius"),
	HX_CSTRING("isSteerable"),
	HX_CSTRING("setEnabled"),
	HX_CSTRING("setFrictionBreakout"),
	HX_CSTRING("setRollInfluence"),
	HX_CSTRING("setSteerable"),
	HX_CSTRING("setStrutConnectionOffset"),
	HX_CSTRING("setStrutDampingCompression"),
	HX_CSTRING("setStrutDampingRelaxation"),
	HX_CSTRING("setStrutForceMax"),
	HX_CSTRING("setStrutRestLength"),
	HX_CSTRING("setStrutStiffness"),
	HX_CSTRING("setStrutTravelMax"),
	HX_CSTRING("setWheelAxle"),
	HX_CSTRING("setWheelDirection"),
	HX_CSTRING("setWheelRadius"),
	HX_CSTRING("transform"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PhysicsVehicleWheel_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_getFrictionBreakout,"hx_PhysicsVehicleWheel_getFrictionBreakout");
	HX_MARK_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_getRollInfluence,"hx_PhysicsVehicleWheel_getRollInfluence");
	HX_MARK_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_getStrutConnectionOffset,"hx_PhysicsVehicleWheel_getStrutConnectionOffset");
	HX_MARK_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_getStrutDampingCompression,"hx_PhysicsVehicleWheel_getStrutDampingCompression");
	HX_MARK_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_getStrutDampingRelaxation,"hx_PhysicsVehicleWheel_getStrutDampingRelaxation");
	HX_MARK_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_getStrutForceMax,"hx_PhysicsVehicleWheel_getStrutForceMax");
	HX_MARK_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_getStrutRestLength,"hx_PhysicsVehicleWheel_getStrutRestLength");
	HX_MARK_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_getStrutStiffness,"hx_PhysicsVehicleWheel_getStrutStiffness");
	HX_MARK_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_getStrutTravelMax,"hx_PhysicsVehicleWheel_getStrutTravelMax");
	HX_MARK_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_getType,"hx_PhysicsVehicleWheel_getType");
	HX_MARK_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_getWheelAxle,"hx_PhysicsVehicleWheel_getWheelAxle");
	HX_MARK_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_getWheelDirection,"hx_PhysicsVehicleWheel_getWheelDirection");
	HX_MARK_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_getWheelRadius,"hx_PhysicsVehicleWheel_getWheelRadius");
	HX_MARK_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_isSteerable,"hx_PhysicsVehicleWheel_isSteerable");
	HX_MARK_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setEnabled,"hx_PhysicsVehicleWheel_setEnabled");
	HX_MARK_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setFrictionBreakout,"hx_PhysicsVehicleWheel_setFrictionBreakout");
	HX_MARK_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setRollInfluence,"hx_PhysicsVehicleWheel_setRollInfluence");
	HX_MARK_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setSteerable,"hx_PhysicsVehicleWheel_setSteerable");
	HX_MARK_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setStrutConnectionOffset,"hx_PhysicsVehicleWheel_setStrutConnectionOffset");
	HX_MARK_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setStrutDampingCompression,"hx_PhysicsVehicleWheel_setStrutDampingCompression");
	HX_MARK_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setStrutDampingRelaxation,"hx_PhysicsVehicleWheel_setStrutDampingRelaxation");
	HX_MARK_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setStrutForceMax,"hx_PhysicsVehicleWheel_setStrutForceMax");
	HX_MARK_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setStrutRestLength,"hx_PhysicsVehicleWheel_setStrutRestLength");
	HX_MARK_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setStrutStiffness,"hx_PhysicsVehicleWheel_setStrutStiffness");
	HX_MARK_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setStrutTravelMax,"hx_PhysicsVehicleWheel_setStrutTravelMax");
	HX_MARK_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setWheelAxle,"hx_PhysicsVehicleWheel_setWheelAxle");
	HX_MARK_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setWheelDirection,"hx_PhysicsVehicleWheel_setWheelDirection");
	HX_MARK_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setWheelRadius,"hx_PhysicsVehicleWheel_setWheelRadius");
	HX_MARK_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_transform,"hx_PhysicsVehicleWheel_transform");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PhysicsVehicleWheel_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_getFrictionBreakout,"hx_PhysicsVehicleWheel_getFrictionBreakout");
	HX_VISIT_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_getRollInfluence,"hx_PhysicsVehicleWheel_getRollInfluence");
	HX_VISIT_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_getStrutConnectionOffset,"hx_PhysicsVehicleWheel_getStrutConnectionOffset");
	HX_VISIT_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_getStrutDampingCompression,"hx_PhysicsVehicleWheel_getStrutDampingCompression");
	HX_VISIT_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_getStrutDampingRelaxation,"hx_PhysicsVehicleWheel_getStrutDampingRelaxation");
	HX_VISIT_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_getStrutForceMax,"hx_PhysicsVehicleWheel_getStrutForceMax");
	HX_VISIT_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_getStrutRestLength,"hx_PhysicsVehicleWheel_getStrutRestLength");
	HX_VISIT_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_getStrutStiffness,"hx_PhysicsVehicleWheel_getStrutStiffness");
	HX_VISIT_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_getStrutTravelMax,"hx_PhysicsVehicleWheel_getStrutTravelMax");
	HX_VISIT_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_getType,"hx_PhysicsVehicleWheel_getType");
	HX_VISIT_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_getWheelAxle,"hx_PhysicsVehicleWheel_getWheelAxle");
	HX_VISIT_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_getWheelDirection,"hx_PhysicsVehicleWheel_getWheelDirection");
	HX_VISIT_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_getWheelRadius,"hx_PhysicsVehicleWheel_getWheelRadius");
	HX_VISIT_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_isSteerable,"hx_PhysicsVehicleWheel_isSteerable");
	HX_VISIT_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setEnabled,"hx_PhysicsVehicleWheel_setEnabled");
	HX_VISIT_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setFrictionBreakout,"hx_PhysicsVehicleWheel_setFrictionBreakout");
	HX_VISIT_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setRollInfluence,"hx_PhysicsVehicleWheel_setRollInfluence");
	HX_VISIT_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setSteerable,"hx_PhysicsVehicleWheel_setSteerable");
	HX_VISIT_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setStrutConnectionOffset,"hx_PhysicsVehicleWheel_setStrutConnectionOffset");
	HX_VISIT_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setStrutDampingCompression,"hx_PhysicsVehicleWheel_setStrutDampingCompression");
	HX_VISIT_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setStrutDampingRelaxation,"hx_PhysicsVehicleWheel_setStrutDampingRelaxation");
	HX_VISIT_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setStrutForceMax,"hx_PhysicsVehicleWheel_setStrutForceMax");
	HX_VISIT_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setStrutRestLength,"hx_PhysicsVehicleWheel_setStrutRestLength");
	HX_VISIT_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setStrutStiffness,"hx_PhysicsVehicleWheel_setStrutStiffness");
	HX_VISIT_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setStrutTravelMax,"hx_PhysicsVehicleWheel_setStrutTravelMax");
	HX_VISIT_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setWheelAxle,"hx_PhysicsVehicleWheel_setWheelAxle");
	HX_VISIT_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setWheelDirection,"hx_PhysicsVehicleWheel_setWheelDirection");
	HX_VISIT_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_setWheelRadius,"hx_PhysicsVehicleWheel_setWheelRadius");
	HX_VISIT_MEMBER_NAME(PhysicsVehicleWheel_obj::hx_PhysicsVehicleWheel_transform,"hx_PhysicsVehicleWheel_transform");
};

#endif

Class PhysicsVehicleWheel_obj::__mClass;

void PhysicsVehicleWheel_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.PhysicsVehicleWheel"), hx::TCanCast< PhysicsVehicleWheel_obj> ,sStaticFields,sMemberFields,
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

void PhysicsVehicleWheel_obj::__boot()
{
	hx_PhysicsVehicleWheel_getFrictionBreakout= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicleWheel >(),HX_CSTRING("getFrictionBreakout"),(int)1);
	hx_PhysicsVehicleWheel_getRollInfluence= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicleWheel >(),HX_CSTRING("getRollInfluence"),(int)1);
	hx_PhysicsVehicleWheel_getStrutConnectionOffset= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicleWheel >(),HX_CSTRING("getStrutConnectionOffset"),(int)2);
	hx_PhysicsVehicleWheel_getStrutDampingCompression= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicleWheel >(),HX_CSTRING("getStrutDampingCompression"),(int)1);
	hx_PhysicsVehicleWheel_getStrutDampingRelaxation= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicleWheel >(),HX_CSTRING("getStrutDampingRelaxation"),(int)1);
	hx_PhysicsVehicleWheel_getStrutForceMax= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicleWheel >(),HX_CSTRING("getStrutForceMax"),(int)1);
	hx_PhysicsVehicleWheel_getStrutRestLength= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicleWheel >(),HX_CSTRING("getStrutRestLength"),(int)1);
	hx_PhysicsVehicleWheel_getStrutStiffness= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicleWheel >(),HX_CSTRING("getStrutStiffness"),(int)1);
	hx_PhysicsVehicleWheel_getStrutTravelMax= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicleWheel >(),HX_CSTRING("getStrutTravelMax"),(int)1);
	hx_PhysicsVehicleWheel_getType= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicleWheel >(),HX_CSTRING("getType"),(int)1);
	hx_PhysicsVehicleWheel_getWheelAxle= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicleWheel >(),HX_CSTRING("getWheelAxle"),(int)2);
	hx_PhysicsVehicleWheel_getWheelDirection= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicleWheel >(),HX_CSTRING("getWheelDirection"),(int)2);
	hx_PhysicsVehicleWheel_getWheelRadius= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicleWheel >(),HX_CSTRING("getWheelRadius"),(int)1);
	hx_PhysicsVehicleWheel_isSteerable= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicleWheel >(),HX_CSTRING("isSteerable"),(int)1);
	hx_PhysicsVehicleWheel_setEnabled= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicleWheel >(),HX_CSTRING("setEnabled"),(int)2);
	hx_PhysicsVehicleWheel_setFrictionBreakout= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicleWheel >(),HX_CSTRING("setFrictionBreakout"),(int)2);
	hx_PhysicsVehicleWheel_setRollInfluence= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicleWheel >(),HX_CSTRING("setRollInfluence"),(int)2);
	hx_PhysicsVehicleWheel_setSteerable= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicleWheel >(),HX_CSTRING("setSteerable"),(int)2);
	hx_PhysicsVehicleWheel_setStrutConnectionOffset= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicleWheel >(),HX_CSTRING("setStrutConnectionOffset"),(int)2);
	hx_PhysicsVehicleWheel_setStrutDampingCompression= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicleWheel >(),HX_CSTRING("setStrutDampingCompression"),(int)2);
	hx_PhysicsVehicleWheel_setStrutDampingRelaxation= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicleWheel >(),HX_CSTRING("setStrutDampingRelaxation"),(int)2);
	hx_PhysicsVehicleWheel_setStrutForceMax= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicleWheel >(),HX_CSTRING("setStrutForceMax"),(int)2);
	hx_PhysicsVehicleWheel_setStrutRestLength= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicleWheel >(),HX_CSTRING("setStrutRestLength"),(int)2);
	hx_PhysicsVehicleWheel_setStrutStiffness= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicleWheel >(),HX_CSTRING("setStrutStiffness"),(int)2);
	hx_PhysicsVehicleWheel_setStrutTravelMax= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicleWheel >(),HX_CSTRING("setStrutTravelMax"),(int)2);
	hx_PhysicsVehicleWheel_setWheelAxle= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicleWheel >(),HX_CSTRING("setWheelAxle"),(int)2);
	hx_PhysicsVehicleWheel_setWheelDirection= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicleWheel >(),HX_CSTRING("setWheelDirection"),(int)2);
	hx_PhysicsVehicleWheel_setWheelRadius= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicleWheel >(),HX_CSTRING("setWheelRadius"),(int)2);
	hx_PhysicsVehicleWheel_transform= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsVehicleWheel >(),HX_CSTRING("transform"),(int)2);
}

} // end namespace org
} // end namespace gameplay3d
