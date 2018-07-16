class CfgPatches {
    class ASG_Factions {
        author = "Athena Security Group";
        name = "ASG Factions";
        url = "https://athenasecuritygroup.weebly.com/";
        units[] = {
            "Greek_Soldier_base_F",
            "Greek_Soldier_F",
            "Greek_Soldier_AR_F",
            "Greek_Soldier_LAT_F",
            "Greek_Soldier_M_F",
            "Greek_Soldier_SL_F",
            "Greek_Soldier_TL_F"
    };
        weapons[] = {
            "Greek_AR_ACO_F"
};
        requiredAddons[] = {
            "A3_Characters_F_INDEP",
            "A3_Weapons_F_Exp_Machineguns_LMG_03"
        };
        authors[] = {
            "DEL-J",
            "jmlane"
        };
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

class CfgWeapons {
    class LMG_03_F;
    class Greek_AR_ACO_F : LMG_03_F {
        class LinkedItems {
            class LinkedItemsOptics {
                item = "optic_ACO_grn";
                slot = "CowsSlot";
            };
        };
    };
};

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

    class Greek_Soldier_AR_F : Greek_Soldier_base_F {
        class SpeechVariants
        {
            class Default
            {
                speechSingular[] = {"veh_infantry_MG_s"};
                speechPlural[] = {"veh_infantry_MG_p"};
            };
        };
        textSingular = "machinegunner";
        textPlural = "machinegunners";
        cost = 110000;
        displayName = "Autorifleman";
        icon = "iconManMG";
        nameSound = "veh_infantry_MG_s";
        role = "MachineGunner";
        scope = 2;
        threat[] = {1, 0.1, 0.3};
        weapons[] = {"Greek_AR_ACO_F", "Throw", "Put"};
        respawnWeapons[] = {"Greek_AR_ACO_F", "Throw", "Put"};
        magazines[] = {
            "200Rnd_556x45_Box_F",
            "200Rnd_556x45_Box_F",
            "200Rnd_556x45_Box_F",
            "SmokeShell",
            "SmokeShell",
            "SmokeShell",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "200Rnd_556x45_Box_F",
            "200Rnd_556x45_Box_F",
            "200Rnd_556x45_Box_F",
            "SmokeShell",
            "SmokeShell",
            "SmokeShell",
            "SmokeShell"
        };
    };

    class Greek_Soldier_LAT_F : Greek_Soldier_base_F {
        class SpeechVariants
        {
            class Default
            {
                speechSingular[] = {"veh_infantry_AT_s"};
                speechPlural[] = {"veh_infantry_AT_p"};
            };
        };
        textSingular = "AT soldier";
        textPlural = "AT soldiers";
        cost = 180000;
        displayName = "Rifleman (AT)";
        icon = "iconManAT";
        nameSound = "veh_infantry_AT_s";
        role = "MissileSpecialist";
        scope = 2;
        threat[] = {1, 0.7, 0.3};
        weapons[] += {"launch_NLAW_F"};
        respawnWeapons[] += {"launch_NLAW_F"};
        secondaryAmmoCoef = 0.5;
        backpack = "I_Fieldpack_oli_LAT";
    };

    class Greek_Soldier_M_F : Greek_Soldier_base_F {
        cost = 110000;
        displayName = "Marksman";
        role = "Marksman";
        scope = 2;
        weapons[] = {"arifle_Mk20_MRCO_F", "Throw", "Put"};
        respawnWeapons[] = {"arifle_Mk20_MRCO_F", "Throw", "Put"};
    };

    class Greek_Soldier_TL_F : Greek_Soldier_base_F {
        cost = 450000;
        displayName = "Team Leader";
        icon = "iconManLeader";
        scope = 2;
        magazines[] += {"HandGrenade", "HandGrenade"};
        respawnMagazines[] += {"HandGrenade", "HandGrenade"};
    };

    class Greek_Soldier_SL_F : Greek_Soldier_base_F {
        cost = 500000;
        displayName = "Squad Leader";
        icon = "iconManLeader";
        scope = 2;
        weapons[] = {"arifle_Mk20_GL_ACO_F", "Throw", "Put"};
        respawnWeapons[] = {"arifle_Mk20_GL_ACO_F", "Throw", "Put"};
        magazines[] += {
            "1Rnd_HE_Grenade_shell",
            "1Rnd_HE_Grenade_shell",
            "1Rnd_HE_Grenade_shell",
            "1Rnd_HE_Grenade_shell",
            "1Rnd_Smoke_Grenade_shell",
            "1Rnd_Smoke_Grenade_shell",
            "1Rnd_Smoke_Grenade_shell",
            "1Rnd_Smoke_Grenade_shell"
};
        respawnMagazines[] += {
            "1Rnd_HE_Grenade_shell",
            "1Rnd_HE_Grenade_shell",
            "1Rnd_HE_Grenade_shell",
            "1Rnd_HE_Grenade_shell",
            "1Rnd_Smoke_Grenade_shell",
            "1Rnd_Smoke_Grenade_shell",
            "1Rnd_Smoke_Grenade_shell",
            "1Rnd_Smoke_Grenade_shell"
        };
    };
};

class CfgFactionClasses {
    class IND_F;
    class Greek_F : IND_F {
        displayName = "Mediterranean";
        priority = 4;
    };
};

class CfgGroups {
    class Indep {
        class Greek_F {
            name = "Mediterranean";
            class Infantry {
                name = "Infantry";
                class FireTeam {
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    name = "Fire team";
                    //faction = "Greek_F";
                    //side = 2;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        //side = 2;
                        vehicle = "Greek_Soldier_TL_F";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        vehicle = "Greek_Soldier_AR_F";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        vehicle = "Greek_Soldier_F";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        vehicle = "Greek_Soldier_F";
                    };
                };
            };
        };
    };
};
