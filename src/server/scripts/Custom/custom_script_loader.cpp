/*
 * Copyright (C) 2008-2019 TrinityCore <https://www.trinitycore.org/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

// This is where scripts' loading functions should be declared:
void AddSC_custom_npcs();
void AddSC_custom_player_script();
void AddSC_XpWeekend();
void AddSC_save_on_levelup();
void AddSC_heirloom_mount_tempfix();
void AddSC_NPC_Teleport();
void AddSC_GOMove_commandscript();

void AddSC_arwent_legit_quest_bypass();
void AddSC_arwent_gift_mount();

// ADM declaration begin
// ADM declaration end

// The name of this function should match:
// void Add${NameOfDirectory}Scripts()
void AddCustomScripts()
{
    AddSC_custom_npcs();
    AddSC_custom_player_script();
	AddSC_XpWeekend();
	AddSC_save_on_levelup();
	AddSC_heirloom_mount_tempfix();
	AddSC_NPC_Teleport();
    AddSC_GOMove_commandscript();

    AddSC_arwent_legit_quest_bypass();
    AddSC_arwent_gift_mount();
    // ADM call begin
    // ADM call end
}