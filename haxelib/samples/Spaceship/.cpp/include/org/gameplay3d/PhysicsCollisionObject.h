#ifndef INCLUDED_org_gameplay3d_PhysicsCollisionObject
#define INCLUDED_org_gameplay3d_PhysicsCollisionObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/gameplay3d/GameplayObject.h>
HX_DECLARE_CLASS2(org,gameplay3d,AnimationTarget)
HX_DECLARE_CLASS2(org,gameplay3d,GameplayObject)
HX_DECLARE_CLASS2(org,gameplay3d,Node)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsCharacter)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsCollisionObject)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsCollisionObject_CollisionListener)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsCollisionShape)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsGhostObject)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsRigidBody)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsVehicle)
HX_DECLARE_CLASS2(org,gameplay3d,PhysicsVehicleWheel)
HX_DECLARE_CLASS2(org,gameplay3d,Ref)
HX_DECLARE_CLASS2(org,gameplay3d,ScriptTarget)
HX_DECLARE_CLASS2(org,gameplay3d,Transform)
HX_DECLARE_CLASS3(org,gameplay3d,intern,INativeBinding)
HX_DECLARE_CLASS3(org,gameplay3d,intern,ListenerWrapper)
HX_DECLARE_CLASS3(org,gameplay3d,intern,NativeBinding)
HX_DECLARE_CLASS4(org,gameplay3d,intern,impl,AnimationTarget_ScriptTarget)
HX_DECLARE_CLASS3(org,gameplay3d,wrapper,PhysicsCollisionObject_CollisionListenerWrapper)
namespace org{
namespace gameplay3d{


class HXCPP_CLASS_ATTRIBUTES  PhysicsCollisionObject_obj : public ::org::gameplay3d::GameplayObject_obj{
	public:
		typedef ::org::gameplay3d::GameplayObject_obj super;
		typedef PhysicsCollisionObject_obj OBJ_;
		PhysicsCollisionObject_obj();
		Void __construct(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PhysicsCollisionObject_obj > __new(Dynamic nativeObjectInitializer,Dynamic nativeObjectInitializerParams);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PhysicsCollisionObject_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PhysicsCollisionObject"); }

		::org::gameplay3d::PhysicsCharacter _character;
		::org::gameplay3d::PhysicsGhostObject _ghostObject;
		::org::gameplay3d::PhysicsRigidBody _rigidBody;
		::org::gameplay3d::PhysicsVehicle _vehicle;
		::org::gameplay3d::PhysicsVehicleWheel _vehicleWheel;
		virtual Void addCollisionListener_Lsnr_ColObj( ::org::gameplay3d::wrapper::PhysicsCollisionObject_CollisionListenerWrapper listener,::org::gameplay3d::PhysicsCollisionObject object);
		Dynamic addCollisionListener_Lsnr_ColObj_dyn();

		virtual Void addCollisionListener_Str_ColObj( ::String _function,::org::gameplay3d::PhysicsCollisionObject object);
		Dynamic addCollisionListener_Str_ColObj_dyn();

		virtual ::org::gameplay3d::PhysicsCharacter asCharacter( );
		Dynamic asCharacter_dyn();

		virtual ::org::gameplay3d::PhysicsGhostObject asGhostObject( );
		Dynamic asGhostObject_dyn();

		virtual ::org::gameplay3d::PhysicsRigidBody asRigidBody( );
		Dynamic asRigidBody_dyn();

		virtual ::org::gameplay3d::PhysicsVehicle asVehicle( );
		Dynamic asVehicle_dyn();

		virtual ::org::gameplay3d::PhysicsVehicleWheel asVehicleWheel( );
		Dynamic asVehicleWheel_dyn();

		virtual bool collidesWith( ::org::gameplay3d::PhysicsCollisionObject object);
		Dynamic collidesWith_dyn();

		virtual ::org::gameplay3d::PhysicsCollisionShape getCollisionShape( );
		Dynamic getCollisionShape_dyn();

		virtual ::org::gameplay3d::Node getNode( );
		Dynamic getNode_dyn();

		virtual int getShapeType( );
		Dynamic getShapeType_dyn();

		virtual int getType( );
		Dynamic getType_dyn();

		virtual bool isDynamic( );
		Dynamic isDynamic_dyn();

		virtual bool isEnabled( );
		Dynamic isEnabled_dyn();

		virtual bool isKinematic( );
		Dynamic isKinematic_dyn();

		virtual Void removeCollisionListener_Lsnr_ColObj( ::org::gameplay3d::wrapper::PhysicsCollisionObject_CollisionListenerWrapper listener,::org::gameplay3d::PhysicsCollisionObject object);
		Dynamic removeCollisionListener_Lsnr_ColObj_dyn();

		virtual Void removeCollisionListener_Str_ColObj( ::String _function,::org::gameplay3d::PhysicsCollisionObject object);
		Dynamic removeCollisionListener_Str_ColObj_dyn();

		virtual Void setEnabled( bool enable);
		Dynamic setEnabled_dyn();

		static Dynamic hx_PhysicsCollisionObject_addCollisionListener_Lsnr_ColObj;
		static Dynamic &hx_PhysicsCollisionObject_addCollisionListener_Lsnr_ColObj_dyn() { return hx_PhysicsCollisionObject_addCollisionListener_Lsnr_ColObj;}
		static Dynamic hx_PhysicsCollisionObject_addCollisionListener_Str_ColObj;
		static Dynamic &hx_PhysicsCollisionObject_addCollisionListener_Str_ColObj_dyn() { return hx_PhysicsCollisionObject_addCollisionListener_Str_ColObj;}
		static Dynamic hx_PhysicsCollisionObject_asCharacter;
		static Dynamic &hx_PhysicsCollisionObject_asCharacter_dyn() { return hx_PhysicsCollisionObject_asCharacter;}
		static Dynamic hx_PhysicsCollisionObject_asGhostObject;
		static Dynamic &hx_PhysicsCollisionObject_asGhostObject_dyn() { return hx_PhysicsCollisionObject_asGhostObject;}
		static Dynamic hx_PhysicsCollisionObject_asRigidBody;
		static Dynamic &hx_PhysicsCollisionObject_asRigidBody_dyn() { return hx_PhysicsCollisionObject_asRigidBody;}
		static Dynamic hx_PhysicsCollisionObject_asVehicle;
		static Dynamic &hx_PhysicsCollisionObject_asVehicle_dyn() { return hx_PhysicsCollisionObject_asVehicle;}
		static Dynamic hx_PhysicsCollisionObject_asVehicleWheel;
		static Dynamic &hx_PhysicsCollisionObject_asVehicleWheel_dyn() { return hx_PhysicsCollisionObject_asVehicleWheel;}
		static Dynamic hx_PhysicsCollisionObject_collidesWith;
		static Dynamic &hx_PhysicsCollisionObject_collidesWith_dyn() { return hx_PhysicsCollisionObject_collidesWith;}
		static Dynamic hx_PhysicsCollisionObject_getCollisionShape;
		static Dynamic &hx_PhysicsCollisionObject_getCollisionShape_dyn() { return hx_PhysicsCollisionObject_getCollisionShape;}
		static Dynamic hx_PhysicsCollisionObject_getNode;
		static Dynamic &hx_PhysicsCollisionObject_getNode_dyn() { return hx_PhysicsCollisionObject_getNode;}
		static Dynamic hx_PhysicsCollisionObject_getShapeType;
		static Dynamic &hx_PhysicsCollisionObject_getShapeType_dyn() { return hx_PhysicsCollisionObject_getShapeType;}
		static Dynamic hx_PhysicsCollisionObject_getType;
		static Dynamic &hx_PhysicsCollisionObject_getType_dyn() { return hx_PhysicsCollisionObject_getType;}
		static Dynamic hx_PhysicsCollisionObject_isDynamic;
		static Dynamic &hx_PhysicsCollisionObject_isDynamic_dyn() { return hx_PhysicsCollisionObject_isDynamic;}
		static Dynamic hx_PhysicsCollisionObject_isEnabled;
		static Dynamic &hx_PhysicsCollisionObject_isEnabled_dyn() { return hx_PhysicsCollisionObject_isEnabled;}
		static Dynamic hx_PhysicsCollisionObject_isKinematic;
		static Dynamic &hx_PhysicsCollisionObject_isKinematic_dyn() { return hx_PhysicsCollisionObject_isKinematic;}
		static Dynamic hx_PhysicsCollisionObject_removeCollisionListener_Lsnr_ColObj;
		static Dynamic &hx_PhysicsCollisionObject_removeCollisionListener_Lsnr_ColObj_dyn() { return hx_PhysicsCollisionObject_removeCollisionListener_Lsnr_ColObj;}
		static Dynamic hx_PhysicsCollisionObject_removeCollisionListener_Str_ColObj;
		static Dynamic &hx_PhysicsCollisionObject_removeCollisionListener_Str_ColObj_dyn() { return hx_PhysicsCollisionObject_removeCollisionListener_Str_ColObj;}
		static Dynamic hx_PhysicsCollisionObject_setEnabled;
		static Dynamic &hx_PhysicsCollisionObject_setEnabled_dyn() { return hx_PhysicsCollisionObject_setEnabled;}
};

} // end namespace org
} // end namespace gameplay3d

#endif /* INCLUDED_org_gameplay3d_PhysicsCollisionObject */ 
