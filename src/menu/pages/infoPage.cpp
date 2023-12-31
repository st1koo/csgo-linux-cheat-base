/*
 * Copyright (c) 2023 st1koo <https://github.com/st1koo>
 * 
 * This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
 * This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
 * You should have received a copy of the GNU General Public License along with this program. If not, see <https://www.gnu.org/licenses/>. 
 */


#include <dlfcn.h>

#include "../../main.h"


void Menu::showInfoPage() {
    ImGui::Text( "csgo-linux-cheat-base");
    ImGui::Text(("Version: " + version).c_str());
    ImGui::Text( "Author:  st1koo");
    ImGui::Text(("Source:  https://github.com/st1koo/csgo-linux-cheat-base"));
    ImGui::Text("");

    ImGui::Text(("Resolution: " + std::to_string(screenSizeX) + "x" + std::to_string(screenSizeY)).c_str());
    ImGui::Text(("Bhop enabled: " + std::to_string(Config::Misc::bhopEnabled)).c_str());


    if (ImGui::Button("Unhook", buttonWidth)) libUnload();
}