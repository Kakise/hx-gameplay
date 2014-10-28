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
#ifndef INCLUDED_org_gameplay3d_GameplayObject
#include <org/gameplay3d/GameplayObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsCharacter
#include <org/gameplay3d/PhysicsCharacter.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsCollisionObject
#include <org/gameplay3d/PhysicsCollisionObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_PhysicsGhostObject
#include <org/gameplay3d/PhysicsGhostObject.h>
#endif
#ifndef INCLUDED_org_gameplay3d_Vector3
#include <org/gameplay3d/Vector3.h>
#endif
#ifndef INCLUDED_org_gameplay3d_immutable_IQuaternion
#include <org/gameplay3d/immutable/IQuaternion.h>
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
#ifndef INCLUDED_org_gameplay3d_util_NativeInterface
#include <org/gameplay3d/util/NativeInterface.h>
#endif
namespace org{
namespace gameplay3d{

Void PhysicsCharacter_obj::__construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{
HX_STACK_FRAME("org.gameplay3d.PhysicsCharacter","new",0x260e3e01,"org.gameplay3d.PhysicsCharacter.new","org/gameplay3d/PhysicsCharacter.hx",14,0x366ad2ef)
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

//PhysicsCharacter_obj::~PhysicsCharacter_obj() { }

Dynamic PhysicsCharacter_obj::__CreateEmpty() { return  new PhysicsCharacter_obj; }
hx::ObjectPtr< PhysicsCharacter_obj > PhysicsCharacter_obj::__new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams)
{  hx::ObjectPtr< PhysicsCharacter_obj > result = new PhysicsCharacter_obj();
	result->__construct(nativeObjectInitializer,nativeObjectInitializerParams);
	return result;}

Dynamic PhysicsCharacter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PhysicsCharacter_obj > result = new PhysicsCharacter_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::org::gameplay3d::Vector3 PhysicsCharacter_obj::getCurrentVelocity( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsCharacter","getCurrentVelocity",0xc8676aff,"org.gameplay3d.PhysicsCharacter.getCurrentVelocity","org/gameplay3d/PhysicsCharacter.hx",25,0x366ad2ef)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->_currentVelocity == null()))){
		HX_STACK_LINE(29)
		::org::gameplay3d::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Class classObj = hx::ClassOf< ::org::gameplay3d::Vector3 >();		HX_STACK_VAR(classObj,"classObj");
			HX_STACK_LINE(25)
			Dynamic nativeObject = ::org::gameplay3d::PhysicsCharacter_obj::hx_PhysicsCharacter_getCurrentVelocity(this->nativeObject);		HX_STACK_VAR(nativeObject,"nativeObject");
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
					::org::gameplay3d::Vector3 result = ref->get();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(29)
					if (((result == null()))){
						HX_STACK_LINE(29)
						hx::IndexRef((::org::gameplay3d::GameplayObject_obj::args).mPtr,(int)0) = ::org::gameplay3d::util::NativeInterface_obj::wrapCachedReference();
						HX_STACK_LINE(29)
						::org::gameplay3d::Vector3 _g = ::Type_obj::createInstance(classObj,::org::gameplay3d::GameplayObject_obj::args);		HX_STACK_VAR(_g,"_g");
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
		return this->_currentVelocity = _g1;
	}
	else{
		HX_STACK_LINE(25)
		Dynamic _g2 = ::org::gameplay3d::PhysicsCharacter_obj::hx_PhysicsCharacter_getCurrentVelocity(this->nativeObject);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		::org::gameplay3d::Vector3 _g3 = this->_currentVelocity->impersonate(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		return this->_currentVelocity = _g3;
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsCharacter_obj,getCurrentVelocity,return )

Float PhysicsCharacter_obj::getMaxSlopeAngle( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsCharacter","getMaxSlopeAngle",0x64c389b5,"org.gameplay3d.PhysicsCharacter.getMaxSlopeAngle","org/gameplay3d/PhysicsCharacter.hx",31,0x366ad2ef)
	HX_STACK_THIS(this)
	HX_STACK_LINE(31)
	return ::org::gameplay3d::PhysicsCharacter_obj::hx_PhysicsCharacter_getMaxSlopeAngle(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsCharacter_obj,getMaxSlopeAngle,return )

Float PhysicsCharacter_obj::getMaxStepHeight( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsCharacter","getMaxStepHeight",0xdf1bb360,"org.gameplay3d.PhysicsCharacter.getMaxStepHeight","org/gameplay3d/PhysicsCharacter.hx",37,0x366ad2ef)
	HX_STACK_THIS(this)
	HX_STACK_LINE(37)
	return ::org::gameplay3d::PhysicsCharacter_obj::hx_PhysicsCharacter_getMaxStepHeight(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsCharacter_obj,getMaxStepHeight,return )

int PhysicsCharacter_obj::getType( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsCharacter","getType",0x0b03f491,"org.gameplay3d.PhysicsCharacter.getType","org/gameplay3d/PhysicsCharacter.hx",43,0x366ad2ef)
	HX_STACK_THIS(this)
	HX_STACK_LINE(43)
	return ::org::gameplay3d::PhysicsCharacter_obj::hx_PhysicsCharacter_getType(this->nativeObject);
}


bool PhysicsCharacter_obj::isPhysicsEnabled( ){
	HX_STACK_FRAME("org.gameplay3d.PhysicsCharacter","isPhysicsEnabled",0xbc24c1c3,"org.gameplay3d.PhysicsCharacter.isPhysicsEnabled","org/gameplay3d/PhysicsCharacter.hx",49,0x366ad2ef)
	HX_STACK_THIS(this)
	HX_STACK_LINE(49)
	return ::org::gameplay3d::PhysicsCharacter_obj::hx_PhysicsCharacter_isPhysicsEnabled(this->nativeObject);
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsCharacter_obj,isPhysicsEnabled,return )

Void PhysicsCharacter_obj::jump( Float height){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsCharacter","jump",0x23cf442d,"org.gameplay3d.PhysicsCharacter.jump","org/gameplay3d/PhysicsCharacter.hx",55,0x366ad2ef)
		HX_STACK_THIS(this)
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(55)
		::org::gameplay3d::PhysicsCharacter_obj::hx_PhysicsCharacter_jump(this->nativeObject,height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsCharacter_obj,jump,(void))

Void PhysicsCharacter_obj::rotate_Qtrn( ::org::gameplay3d::immutable::IQuaternion rotation){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsCharacter","rotate_Qtrn",0x0ad213c4,"org.gameplay3d.PhysicsCharacter.rotate_Qtrn","org/gameplay3d/PhysicsCharacter.hx",61,0x366ad2ef)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rotation,"rotation")
		HX_STACK_LINE(61)
		::org::gameplay3d::PhysicsCharacter_obj::hx_PhysicsCharacter_rotate_Qtrn(this->nativeObject,(  (((rotation == null()))) ? Dynamic(null()) : Dynamic(rotation->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsCharacter_obj,rotate_Qtrn,(void))

Void PhysicsCharacter_obj::rotate_V3_Flt( ::org::gameplay3d::immutable::IVector3 axis,Float angle){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsCharacter","rotate_V3_Flt",0x78619c71,"org.gameplay3d.PhysicsCharacter.rotate_V3_Flt","org/gameplay3d/PhysicsCharacter.hx",67,0x366ad2ef)
		HX_STACK_THIS(this)
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(angle,"angle")
		HX_STACK_LINE(67)
		::org::gameplay3d::PhysicsCharacter_obj::hx_PhysicsCharacter_rotate_V3_Flt(this->nativeObject,(  (((axis == null()))) ? Dynamic(null()) : Dynamic(axis->__Field(HX_CSTRING("nativeObject"),true)) ),angle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PhysicsCharacter_obj,rotate_V3_Flt,(void))

Void PhysicsCharacter_obj::setForwardVelocity( hx::Null< Float >  __o_velocity){
Float velocity = __o_velocity.Default(1.0);
	HX_STACK_FRAME("org.gameplay3d.PhysicsCharacter","setForwardVelocity",0xeb504eff,"org.gameplay3d.PhysicsCharacter.setForwardVelocity","org/gameplay3d/PhysicsCharacter.hx",73,0x366ad2ef)
	HX_STACK_THIS(this)
	HX_STACK_ARG(velocity,"velocity")
{
		HX_STACK_LINE(73)
		::org::gameplay3d::PhysicsCharacter_obj::hx_PhysicsCharacter_setForwardVelocity(this->nativeObject,velocity);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsCharacter_obj,setForwardVelocity,(void))

Void PhysicsCharacter_obj::setMaxSlopeAngle( Float angle){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsCharacter","setMaxSlopeAngle",0xbb057729,"org.gameplay3d.PhysicsCharacter.setMaxSlopeAngle","org/gameplay3d/PhysicsCharacter.hx",79,0x366ad2ef)
		HX_STACK_THIS(this)
		HX_STACK_ARG(angle,"angle")
		HX_STACK_LINE(79)
		::org::gameplay3d::PhysicsCharacter_obj::hx_PhysicsCharacter_setMaxSlopeAngle(this->nativeObject,angle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsCharacter_obj,setMaxSlopeAngle,(void))

Void PhysicsCharacter_obj::setMaxStepHeight( Float height){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsCharacter","setMaxStepHeight",0x355da0d4,"org.gameplay3d.PhysicsCharacter.setMaxStepHeight","org/gameplay3d/PhysicsCharacter.hx",85,0x366ad2ef)
		HX_STACK_THIS(this)
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(85)
		::org::gameplay3d::PhysicsCharacter_obj::hx_PhysicsCharacter_setMaxStepHeight(this->nativeObject,height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsCharacter_obj,setMaxStepHeight,(void))

Void PhysicsCharacter_obj::setPhysicsEnabled( bool enabled){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsCharacter","setPhysicsEnabled",0x4aded71d,"org.gameplay3d.PhysicsCharacter.setPhysicsEnabled","org/gameplay3d/PhysicsCharacter.hx",91,0x366ad2ef)
		HX_STACK_THIS(this)
		HX_STACK_ARG(enabled,"enabled")
		HX_STACK_LINE(91)
		::org::gameplay3d::PhysicsCharacter_obj::hx_PhysicsCharacter_setPhysicsEnabled(this->nativeObject,enabled);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsCharacter_obj,setPhysicsEnabled,(void))

Void PhysicsCharacter_obj::setRightVelocity( hx::Null< Float >  __o_velocity){
Float velocity = __o_velocity.Default(1.0);
	HX_STACK_FRAME("org.gameplay3d.PhysicsCharacter","setRightVelocity",0xd6f67ed6,"org.gameplay3d.PhysicsCharacter.setRightVelocity","org/gameplay3d/PhysicsCharacter.hx",97,0x366ad2ef)
	HX_STACK_THIS(this)
	HX_STACK_ARG(velocity,"velocity")
{
		HX_STACK_LINE(97)
		::org::gameplay3d::PhysicsCharacter_obj::hx_PhysicsCharacter_setRightVelocity(this->nativeObject,velocity);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsCharacter_obj,setRightVelocity,(void))

Void PhysicsCharacter_obj::setRotation_Qtrn( ::org::gameplay3d::immutable::IQuaternion rotation){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsCharacter","setRotation_Qtrn",0x13ba481d,"org.gameplay3d.PhysicsCharacter.setRotation_Qtrn","org/gameplay3d/PhysicsCharacter.hx",103,0x366ad2ef)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rotation,"rotation")
		HX_STACK_LINE(103)
		::org::gameplay3d::PhysicsCharacter_obj::hx_PhysicsCharacter_setRotation_Qtrn(this->nativeObject,(  (((rotation == null()))) ? Dynamic(null()) : Dynamic(rotation->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsCharacter_obj,setRotation_Qtrn,(void))

Void PhysicsCharacter_obj::setRotation_V3_Flt( ::org::gameplay3d::immutable::IVector3 axis,Float angle){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsCharacter","setRotation_V3_Flt",0xb302590a,"org.gameplay3d.PhysicsCharacter.setRotation_V3_Flt","org/gameplay3d/PhysicsCharacter.hx",109,0x366ad2ef)
		HX_STACK_THIS(this)
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(angle,"angle")
		HX_STACK_LINE(109)
		::org::gameplay3d::PhysicsCharacter_obj::hx_PhysicsCharacter_setRotation_V3_Flt(this->nativeObject,(  (((axis == null()))) ? Dynamic(null()) : Dynamic(axis->__Field(HX_CSTRING("nativeObject"),true)) ),angle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PhysicsCharacter_obj,setRotation_V3_Flt,(void))

Void PhysicsCharacter_obj::setVelocity_V3( ::org::gameplay3d::immutable::IVector3 velocity){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsCharacter","setVelocity_V3",0x5cf7aebc,"org.gameplay3d.PhysicsCharacter.setVelocity_V3","org/gameplay3d/PhysicsCharacter.hx",115,0x366ad2ef)
		HX_STACK_THIS(this)
		HX_STACK_ARG(velocity,"velocity")
		HX_STACK_LINE(115)
		::org::gameplay3d::PhysicsCharacter_obj::hx_PhysicsCharacter_setVelocity_V3(this->nativeObject,(  (((velocity == null()))) ? Dynamic(null()) : Dynamic(velocity->__Field(HX_CSTRING("nativeObject"),true)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsCharacter_obj,setVelocity_V3,(void))

Void PhysicsCharacter_obj::setVelocity_FltX3( Float x,Float y,Float z){
{
		HX_STACK_FRAME("org.gameplay3d.PhysicsCharacter","setVelocity_FltX3",0x4669626a,"org.gameplay3d.PhysicsCharacter.setVelocity_FltX3","org/gameplay3d/PhysicsCharacter.hx",121,0x366ad2ef)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(121)
		::org::gameplay3d::PhysicsCharacter_obj::hx_PhysicsCharacter_setVelocity_FltX3(this->nativeObject,x,y,z);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(PhysicsCharacter_obj,setVelocity_FltX3,(void))

Dynamic PhysicsCharacter_obj::hx_PhysicsCharacter_getCurrentVelocity;

Dynamic PhysicsCharacter_obj::hx_PhysicsCharacter_getMaxSlopeAngle;

Dynamic PhysicsCharacter_obj::hx_PhysicsCharacter_getMaxStepHeight;

Dynamic PhysicsCharacter_obj::hx_PhysicsCharacter_getType;

Dynamic PhysicsCharacter_obj::hx_PhysicsCharacter_isPhysicsEnabled;

Dynamic PhysicsCharacter_obj::hx_PhysicsCharacter_jump;

Dynamic PhysicsCharacter_obj::hx_PhysicsCharacter_rotate_Qtrn;

Dynamic PhysicsCharacter_obj::hx_PhysicsCharacter_rotate_V3_Flt;

Dynamic PhysicsCharacter_obj::hx_PhysicsCharacter_setForwardVelocity;

Dynamic PhysicsCharacter_obj::hx_PhysicsCharacter_setMaxSlopeAngle;

Dynamic PhysicsCharacter_obj::hx_PhysicsCharacter_setMaxStepHeight;

Dynamic PhysicsCharacter_obj::hx_PhysicsCharacter_setPhysicsEnabled;

Dynamic PhysicsCharacter_obj::hx_PhysicsCharacter_setRightVelocity;

Dynamic PhysicsCharacter_obj::hx_PhysicsCharacter_setRotation_Qtrn;

Dynamic PhysicsCharacter_obj::hx_PhysicsCharacter_setRotation_V3_Flt;

Dynamic PhysicsCharacter_obj::hx_PhysicsCharacter_setVelocity_V3;

Dynamic PhysicsCharacter_obj::hx_PhysicsCharacter_setVelocity_FltX3;


PhysicsCharacter_obj::PhysicsCharacter_obj()
{
}

void PhysicsCharacter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PhysicsCharacter);
	HX_MARK_MEMBER_NAME(_currentVelocity,"_currentVelocity");
	::org::gameplay3d::PhysicsCollisionObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PhysicsCharacter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_currentVelocity,"_currentVelocity");
	::org::gameplay3d::PhysicsCollisionObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PhysicsCharacter_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"jump") ) { return jump_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"rotate_Qtrn") ) { return rotate_Qtrn_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"rotate_V3_Flt") ) { return rotate_V3_Flt_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setVelocity_V3") ) { return setVelocity_V3_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_currentVelocity") ) { return _currentVelocity; }
		if (HX_FIELD_EQ(inName,"getMaxSlopeAngle") ) { return getMaxSlopeAngle_dyn(); }
		if (HX_FIELD_EQ(inName,"getMaxStepHeight") ) { return getMaxStepHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"isPhysicsEnabled") ) { return isPhysicsEnabled_dyn(); }
		if (HX_FIELD_EQ(inName,"setMaxSlopeAngle") ) { return setMaxSlopeAngle_dyn(); }
		if (HX_FIELD_EQ(inName,"setMaxStepHeight") ) { return setMaxStepHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"setRightVelocity") ) { return setRightVelocity_dyn(); }
		if (HX_FIELD_EQ(inName,"setRotation_Qtrn") ) { return setRotation_Qtrn_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"setPhysicsEnabled") ) { return setPhysicsEnabled_dyn(); }
		if (HX_FIELD_EQ(inName,"setVelocity_FltX3") ) { return setVelocity_FltX3_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getCurrentVelocity") ) { return getCurrentVelocity_dyn(); }
		if (HX_FIELD_EQ(inName,"setForwardVelocity") ) { return setForwardVelocity_dyn(); }
		if (HX_FIELD_EQ(inName,"setRotation_V3_Flt") ) { return setRotation_V3_Flt_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCharacter_jump") ) { return hx_PhysicsCharacter_jump; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCharacter_getType") ) { return hx_PhysicsCharacter_getType; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCharacter_rotate_Qtrn") ) { return hx_PhysicsCharacter_rotate_Qtrn; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCharacter_rotate_V3_Flt") ) { return hx_PhysicsCharacter_rotate_V3_Flt; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCharacter_setVelocity_V3") ) { return hx_PhysicsCharacter_setVelocity_V3; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCharacter_getMaxSlopeAngle") ) { return hx_PhysicsCharacter_getMaxSlopeAngle; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsCharacter_getMaxStepHeight") ) { return hx_PhysicsCharacter_getMaxStepHeight; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsCharacter_isPhysicsEnabled") ) { return hx_PhysicsCharacter_isPhysicsEnabled; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsCharacter_setMaxSlopeAngle") ) { return hx_PhysicsCharacter_setMaxSlopeAngle; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsCharacter_setMaxStepHeight") ) { return hx_PhysicsCharacter_setMaxStepHeight; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsCharacter_setRightVelocity") ) { return hx_PhysicsCharacter_setRightVelocity; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsCharacter_setRotation_Qtrn") ) { return hx_PhysicsCharacter_setRotation_Qtrn; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCharacter_setPhysicsEnabled") ) { return hx_PhysicsCharacter_setPhysicsEnabled; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsCharacter_setVelocity_FltX3") ) { return hx_PhysicsCharacter_setVelocity_FltX3; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCharacter_getCurrentVelocity") ) { return hx_PhysicsCharacter_getCurrentVelocity; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsCharacter_setForwardVelocity") ) { return hx_PhysicsCharacter_setForwardVelocity; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsCharacter_setRotation_V3_Flt") ) { return hx_PhysicsCharacter_setRotation_V3_Flt; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PhysicsCharacter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"_currentVelocity") ) { _currentVelocity=inValue.Cast< ::org::gameplay3d::Vector3 >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCharacter_jump") ) { hx_PhysicsCharacter_jump=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCharacter_getType") ) { hx_PhysicsCharacter_getType=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCharacter_rotate_Qtrn") ) { hx_PhysicsCharacter_rotate_Qtrn=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCharacter_rotate_V3_Flt") ) { hx_PhysicsCharacter_rotate_V3_Flt=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCharacter_setVelocity_V3") ) { hx_PhysicsCharacter_setVelocity_V3=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCharacter_getMaxSlopeAngle") ) { hx_PhysicsCharacter_getMaxSlopeAngle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsCharacter_getMaxStepHeight") ) { hx_PhysicsCharacter_getMaxStepHeight=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsCharacter_isPhysicsEnabled") ) { hx_PhysicsCharacter_isPhysicsEnabled=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsCharacter_setMaxSlopeAngle") ) { hx_PhysicsCharacter_setMaxSlopeAngle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsCharacter_setMaxStepHeight") ) { hx_PhysicsCharacter_setMaxStepHeight=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsCharacter_setRightVelocity") ) { hx_PhysicsCharacter_setRightVelocity=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsCharacter_setRotation_Qtrn") ) { hx_PhysicsCharacter_setRotation_Qtrn=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCharacter_setPhysicsEnabled") ) { hx_PhysicsCharacter_setPhysicsEnabled=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsCharacter_setVelocity_FltX3") ) { hx_PhysicsCharacter_setVelocity_FltX3=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"hx_PhysicsCharacter_getCurrentVelocity") ) { hx_PhysicsCharacter_getCurrentVelocity=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsCharacter_setForwardVelocity") ) { hx_PhysicsCharacter_setForwardVelocity=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_PhysicsCharacter_setRotation_V3_Flt") ) { hx_PhysicsCharacter_setRotation_V3_Flt=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PhysicsCharacter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_currentVelocity"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("hx_PhysicsCharacter_getCurrentVelocity"),
	HX_CSTRING("hx_PhysicsCharacter_getMaxSlopeAngle"),
	HX_CSTRING("hx_PhysicsCharacter_getMaxStepHeight"),
	HX_CSTRING("hx_PhysicsCharacter_getType"),
	HX_CSTRING("hx_PhysicsCharacter_isPhysicsEnabled"),
	HX_CSTRING("hx_PhysicsCharacter_jump"),
	HX_CSTRING("hx_PhysicsCharacter_rotate_Qtrn"),
	HX_CSTRING("hx_PhysicsCharacter_rotate_V3_Flt"),
	HX_CSTRING("hx_PhysicsCharacter_setForwardVelocity"),
	HX_CSTRING("hx_PhysicsCharacter_setMaxSlopeAngle"),
	HX_CSTRING("hx_PhysicsCharacter_setMaxStepHeight"),
	HX_CSTRING("hx_PhysicsCharacter_setPhysicsEnabled"),
	HX_CSTRING("hx_PhysicsCharacter_setRightVelocity"),
	HX_CSTRING("hx_PhysicsCharacter_setRotation_Qtrn"),
	HX_CSTRING("hx_PhysicsCharacter_setRotation_V3_Flt"),
	HX_CSTRING("hx_PhysicsCharacter_setVelocity_V3"),
	HX_CSTRING("hx_PhysicsCharacter_setVelocity_FltX3"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::org::gameplay3d::Vector3*/ ,(int)offsetof(PhysicsCharacter_obj,_currentVelocity),HX_CSTRING("_currentVelocity")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_currentVelocity"),
	HX_CSTRING("getCurrentVelocity"),
	HX_CSTRING("getMaxSlopeAngle"),
	HX_CSTRING("getMaxStepHeight"),
	HX_CSTRING("getType"),
	HX_CSTRING("isPhysicsEnabled"),
	HX_CSTRING("jump"),
	HX_CSTRING("rotate_Qtrn"),
	HX_CSTRING("rotate_V3_Flt"),
	HX_CSTRING("setForwardVelocity"),
	HX_CSTRING("setMaxSlopeAngle"),
	HX_CSTRING("setMaxStepHeight"),
	HX_CSTRING("setPhysicsEnabled"),
	HX_CSTRING("setRightVelocity"),
	HX_CSTRING("setRotation_Qtrn"),
	HX_CSTRING("setRotation_V3_Flt"),
	HX_CSTRING("setVelocity_V3"),
	HX_CSTRING("setVelocity_FltX3"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PhysicsCharacter_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PhysicsCharacter_obj::hx_PhysicsCharacter_getCurrentVelocity,"hx_PhysicsCharacter_getCurrentVelocity");
	HX_MARK_MEMBER_NAME(PhysicsCharacter_obj::hx_PhysicsCharacter_getMaxSlopeAngle,"hx_PhysicsCharacter_getMaxSlopeAngle");
	HX_MARK_MEMBER_NAME(PhysicsCharacter_obj::hx_PhysicsCharacter_getMaxStepHeight,"hx_PhysicsCharacter_getMaxStepHeight");
	HX_MARK_MEMBER_NAME(PhysicsCharacter_obj::hx_PhysicsCharacter_getType,"hx_PhysicsCharacter_getType");
	HX_MARK_MEMBER_NAME(PhysicsCharacter_obj::hx_PhysicsCharacter_isPhysicsEnabled,"hx_PhysicsCharacter_isPhysicsEnabled");
	HX_MARK_MEMBER_NAME(PhysicsCharacter_obj::hx_PhysicsCharacter_jump,"hx_PhysicsCharacter_jump");
	HX_MARK_MEMBER_NAME(PhysicsCharacter_obj::hx_PhysicsCharacter_rotate_Qtrn,"hx_PhysicsCharacter_rotate_Qtrn");
	HX_MARK_MEMBER_NAME(PhysicsCharacter_obj::hx_PhysicsCharacter_rotate_V3_Flt,"hx_PhysicsCharacter_rotate_V3_Flt");
	HX_MARK_MEMBER_NAME(PhysicsCharacter_obj::hx_PhysicsCharacter_setForwardVelocity,"hx_PhysicsCharacter_setForwardVelocity");
	HX_MARK_MEMBER_NAME(PhysicsCharacter_obj::hx_PhysicsCharacter_setMaxSlopeAngle,"hx_PhysicsCharacter_setMaxSlopeAngle");
	HX_MARK_MEMBER_NAME(PhysicsCharacter_obj::hx_PhysicsCharacter_setMaxStepHeight,"hx_PhysicsCharacter_setMaxStepHeight");
	HX_MARK_MEMBER_NAME(PhysicsCharacter_obj::hx_PhysicsCharacter_setPhysicsEnabled,"hx_PhysicsCharacter_setPhysicsEnabled");
	HX_MARK_MEMBER_NAME(PhysicsCharacter_obj::hx_PhysicsCharacter_setRightVelocity,"hx_PhysicsCharacter_setRightVelocity");
	HX_MARK_MEMBER_NAME(PhysicsCharacter_obj::hx_PhysicsCharacter_setRotation_Qtrn,"hx_PhysicsCharacter_setRotation_Qtrn");
	HX_MARK_MEMBER_NAME(PhysicsCharacter_obj::hx_PhysicsCharacter_setRotation_V3_Flt,"hx_PhysicsCharacter_setRotation_V3_Flt");
	HX_MARK_MEMBER_NAME(PhysicsCharacter_obj::hx_PhysicsCharacter_setVelocity_V3,"hx_PhysicsCharacter_setVelocity_V3");
	HX_MARK_MEMBER_NAME(PhysicsCharacter_obj::hx_PhysicsCharacter_setVelocity_FltX3,"hx_PhysicsCharacter_setVelocity_FltX3");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PhysicsCharacter_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PhysicsCharacter_obj::hx_PhysicsCharacter_getCurrentVelocity,"hx_PhysicsCharacter_getCurrentVelocity");
	HX_VISIT_MEMBER_NAME(PhysicsCharacter_obj::hx_PhysicsCharacter_getMaxSlopeAngle,"hx_PhysicsCharacter_getMaxSlopeAngle");
	HX_VISIT_MEMBER_NAME(PhysicsCharacter_obj::hx_PhysicsCharacter_getMaxStepHeight,"hx_PhysicsCharacter_getMaxStepHeight");
	HX_VISIT_MEMBER_NAME(PhysicsCharacter_obj::hx_PhysicsCharacter_getType,"hx_PhysicsCharacter_getType");
	HX_VISIT_MEMBER_NAME(PhysicsCharacter_obj::hx_PhysicsCharacter_isPhysicsEnabled,"hx_PhysicsCharacter_isPhysicsEnabled");
	HX_VISIT_MEMBER_NAME(PhysicsCharacter_obj::hx_PhysicsCharacter_jump,"hx_PhysicsCharacter_jump");
	HX_VISIT_MEMBER_NAME(PhysicsCharacter_obj::hx_PhysicsCharacter_rotate_Qtrn,"hx_PhysicsCharacter_rotate_Qtrn");
	HX_VISIT_MEMBER_NAME(PhysicsCharacter_obj::hx_PhysicsCharacter_rotate_V3_Flt,"hx_PhysicsCharacter_rotate_V3_Flt");
	HX_VISIT_MEMBER_NAME(PhysicsCharacter_obj::hx_PhysicsCharacter_setForwardVelocity,"hx_PhysicsCharacter_setForwardVelocity");
	HX_VISIT_MEMBER_NAME(PhysicsCharacter_obj::hx_PhysicsCharacter_setMaxSlopeAngle,"hx_PhysicsCharacter_setMaxSlopeAngle");
	HX_VISIT_MEMBER_NAME(PhysicsCharacter_obj::hx_PhysicsCharacter_setMaxStepHeight,"hx_PhysicsCharacter_setMaxStepHeight");
	HX_VISIT_MEMBER_NAME(PhysicsCharacter_obj::hx_PhysicsCharacter_setPhysicsEnabled,"hx_PhysicsCharacter_setPhysicsEnabled");
	HX_VISIT_MEMBER_NAME(PhysicsCharacter_obj::hx_PhysicsCharacter_setRightVelocity,"hx_PhysicsCharacter_setRightVelocity");
	HX_VISIT_MEMBER_NAME(PhysicsCharacter_obj::hx_PhysicsCharacter_setRotation_Qtrn,"hx_PhysicsCharacter_setRotation_Qtrn");
	HX_VISIT_MEMBER_NAME(PhysicsCharacter_obj::hx_PhysicsCharacter_setRotation_V3_Flt,"hx_PhysicsCharacter_setRotation_V3_Flt");
	HX_VISIT_MEMBER_NAME(PhysicsCharacter_obj::hx_PhysicsCharacter_setVelocity_V3,"hx_PhysicsCharacter_setVelocity_V3");
	HX_VISIT_MEMBER_NAME(PhysicsCharacter_obj::hx_PhysicsCharacter_setVelocity_FltX3,"hx_PhysicsCharacter_setVelocity_FltX3");
};

#endif

Class PhysicsCharacter_obj::__mClass;

void PhysicsCharacter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.gameplay3d.PhysicsCharacter"), hx::TCanCast< PhysicsCharacter_obj> ,sStaticFields,sMemberFields,
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

void PhysicsCharacter_obj::__boot()
{
	hx_PhysicsCharacter_getCurrentVelocity= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsCharacter >(),HX_CSTRING("getCurrentVelocity"),(int)1);
	hx_PhysicsCharacter_getMaxSlopeAngle= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsCharacter >(),HX_CSTRING("getMaxSlopeAngle"),(int)1);
	hx_PhysicsCharacter_getMaxStepHeight= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsCharacter >(),HX_CSTRING("getMaxStepHeight"),(int)1);
	hx_PhysicsCharacter_getType= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsCharacter >(),HX_CSTRING("getType"),(int)1);
	hx_PhysicsCharacter_isPhysicsEnabled= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsCharacter >(),HX_CSTRING("isPhysicsEnabled"),(int)1);
	hx_PhysicsCharacter_jump= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsCharacter >(),HX_CSTRING("jump"),(int)2);
	hx_PhysicsCharacter_rotate_Qtrn= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsCharacter >(),HX_CSTRING("rotate_Qtrn"),(int)2);
	hx_PhysicsCharacter_rotate_V3_Flt= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsCharacter >(),HX_CSTRING("rotate_V3_Flt"),(int)3);
	hx_PhysicsCharacter_setForwardVelocity= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsCharacter >(),HX_CSTRING("setForwardVelocity"),(int)2);
	hx_PhysicsCharacter_setMaxSlopeAngle= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsCharacter >(),HX_CSTRING("setMaxSlopeAngle"),(int)2);
	hx_PhysicsCharacter_setMaxStepHeight= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsCharacter >(),HX_CSTRING("setMaxStepHeight"),(int)2);
	hx_PhysicsCharacter_setPhysicsEnabled= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsCharacter >(),HX_CSTRING("setPhysicsEnabled"),(int)2);
	hx_PhysicsCharacter_setRightVelocity= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsCharacter >(),HX_CSTRING("setRightVelocity"),(int)2);
	hx_PhysicsCharacter_setRotation_Qtrn= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsCharacter >(),HX_CSTRING("setRotation_Qtrn"),(int)2);
	hx_PhysicsCharacter_setRotation_V3_Flt= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsCharacter >(),HX_CSTRING("setRotation_V3_Flt"),(int)3);
	hx_PhysicsCharacter_setVelocity_V3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsCharacter >(),HX_CSTRING("setVelocity_V3"),(int)2);
	hx_PhysicsCharacter_setVelocity_FltX3= ::org::gameplay3d::util::NativeInterface_obj::loadMember(hx::ClassOf< ::org::gameplay3d::PhysicsCharacter >(),HX_CSTRING("setVelocity_FltX3"),(int)4);
}

} // end namespace org
} // end namespace gameplay3d
