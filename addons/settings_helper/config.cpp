// the purpose of this PBO is to set a default file to the following path:
// userconfig/cba/settings.sqf
// this way we effectively make the file optional, as the loadFile command
// can fall back to this empty default file

#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {};
        version = VERSION;
        author[] = {"commy2"};
        authorUrl = "https://github.com/CBATeam/CBA_A3";
    };
};
