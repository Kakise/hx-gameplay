package org.gameplay3d;

import org.gameplay3d.util.NativeInterface;

using org.gameplay3d.intern.NativeBinding;
using org.gameplay3d.GameplayObject;

// DECL: class PhysicsHingeConstraint : public PhysicsConstraint
class PhysicsHingeConstraint extends PhysicsConstraint
{
    /***************************************************************************
     * MEMBERS                                                                 *
     **************************************************************************/

    // DECL: void setLimits(float minAngle, float maxAngle, float bounciness = 1.0f);
    public function setLimits(minAngle:Float, maxAngle:Float, bounciness:Float = 1.0):Void
    {
        hx_PhysicsHingeConstraint_setLimits(nativeObject, minAngle, maxAngle, bounciness);
    }

    /***************************************************************************
     * NATIVE INTERFACE                                                        *
     **************************************************************************/

    static var hx_PhysicsHingeConstraint_setLimits = NativeInterface.loadMember(PhysicsHingeConstraint, "setLimits", 4);
}

// END
