package org.gameplay3d;

import org.gameplay3d.util.NativeInterface;

using org.gameplay3d.intern.NativeBinding;
using org.gameplay3d.GameplayObject;

// DECL: class Material : public RenderState
class Material extends RenderState
{
    /***************************************************************************
     * MEMBERS                                                                 *
     **************************************************************************/

    // DECL: static Material* create(Effect* effect);
    public static function create_Eff(effect:Effect):Material
    {
        return Material.wrap(hx_Material_static_create_Eff(effect.native()));
    }

    // DECL: static Material* create(Properties* materialProperties);
    public static function create_Prop(materialProperties:Properties):Material
    {
        return Material.wrap(hx_Material_static_create_Prop(materialProperties.native()));
    }

    // DECL: static Material* create(const char* url);
    public static function create_Str(url:String):Material
    {
        return Material.wrap(hx_Material_static_create_Str(url));
    }

    // DECL: static Material* create(const char* vshPath, const char* fshPath, const char* defines = NULL);
    public static function create_StrX3(vshPath:String, fshPath:String, defines:String = null):Material
    {
        return Material.wrap(hx_Material_static_create_StrX3(vshPath, fshPath, defines));
    }

    // DECL: Technique* getTechnique() const;
    public function getTechnique():Technique
    {
        return Technique.wrap(hx_Material_getTechnique(nativeObject));
    }

    // DECL: Technique* getTechnique(const char* id) const;
    public function getTechnique_Str(id:String):Technique
    {
        return Technique.wrap(hx_Material_getTechnique_Str(nativeObject, id));
    }

    // DECL: Technique* getTechniqueByIndex(unsigned int index) const;
    public function getTechniqueByIndex(index:Int):Technique
    {
        return Technique.wrap(hx_Material_getTechniqueByIndex(nativeObject, index));
    }

    // DECL: unsigned int getTechniqueCount() const;
    public function getTechniqueCount():Int
    {
        return hx_Material_getTechniqueCount(nativeObject);
    }

    // DECL: void setTechnique(const char* id);
    public function setTechnique(id:String):Void
    {
        hx_Material_setTechnique(nativeObject, id);
    }

    /***************************************************************************
     * NATIVE INTERFACE                                                        *
     **************************************************************************/

    static var hx_Material_static_create_Eff = NativeInterface.loadMember(Material, "static_create_Eff", 1);
    static var hx_Material_static_create_Prop = NativeInterface.loadMember(Material, "static_create_Prop", 1);
    static var hx_Material_static_create_Str = NativeInterface.loadMember(Material, "static_create_Str", 1);
    static var hx_Material_static_create_StrX3 = NativeInterface.loadMember(Material, "static_create_StrX3", 3);
    static var hx_Material_getTechnique = NativeInterface.loadMember(Material, "getTechnique", 1);
    static var hx_Material_getTechnique_Str = NativeInterface.loadMember(Material, "getTechnique_Str", 2);
    static var hx_Material_getTechniqueByIndex = NativeInterface.loadMember(Material, "getTechniqueByIndex", 2);
    static var hx_Material_getTechniqueCount = NativeInterface.loadMember(Material, "getTechniqueCount", 1);
    static var hx_Material_setTechnique = NativeInterface.loadMember(Material, "setTechnique", 2);
}

// END
