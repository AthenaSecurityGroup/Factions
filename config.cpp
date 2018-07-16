class CfgPatches {
    class ASG_Factions {
        author = "Athena Security Group";
        name = "ASG Factions";
        url = "https://athenasecuritygroup.weebly.com/";
        units[] = {"Greek_Soldier_base_F", "Greek_Soldier_F", "Greek_Soldier_TL_F"};
        weapons[] = {};
        requiredAddons[] = {"A3_Characters_F_INDEP"};
        authors[] = {"DEL-J", "jmlane"};
    };
};

#define greek_mags \
    "30Rnd_556x45_Stanag_green", \
    "30Rnd_556x45_Stanag_green", \
    "30Rnd_556x45_Stanag_green", \
    "30Rnd_556x45_Stanag_green", \
    "30Rnd_556x45_Stanag_green", \
    "30Rnd_556x45_Stanag_green", \
    "30Rnd_556x45_Stanag_green", \
    "30Rnd_556x45_Stanag_green", \
    "SmokeShell", \
    "SmokeShell", \
    "SmokeShell", \
    "SmokeShell"

#define greek_items \
    "V_PlateCarrierIA1_dgtl", \
    "H_HelmetIA", \
    "ItemMap", \
    "ItemCompass", \
    "ItemWatch", \
    "ItemRadio"

class CfgVehicles {
    class I_Soldier_base_F;
    class Greek_Soldier_base_F : I_Soldier_base_F {
        author = "Athena Security Group";
        displayName = "Soldier";
        faction = "Greek_F";
        //identityTypes[] = {"LanguageGRE_F", "Head_Greek", "G_HAF_default"};
        weapons[] = {"arifle_Mk20C_ACO_F", "Throw", "Put"};
        respawnWeapons[] = {"arifle_Mk20C_ACO_F", "Throw", "Put"};
        magazines[] = {greek_mags};
        respawnMagazines[] = {greek_mags};
        linkedItems[] = {greek_items};
        respawnLinkedItems[] = {greek_items};
    };

    class Greek_Soldier_F : Greek_Soldier_base_F {
        cost = 100000;
        displayName = "Rifleman";
        scope = 2;
    };

    class Greek_Soldier_TL_F : Greek_Soldier_base_F {
        cost = 450000;
        displayName = "Team Leader";
        icon = "iconManLeader";
        scope = 2;
        magazines[] += {"HandGrenade", "HandGrenade"};
        respawnMagazines[] += {"HandGrenade", "HandGrenade"};
    };
};

class CfgFactionClasses {
    class IND_F;
    class Greek_F : IND_F {
        displayName = "Mediterranean";
        priority = 4;
    };
};
