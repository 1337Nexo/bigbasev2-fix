#include "common.hpp"
#include "imgui.h"
#include "settings_tab.h"
#include "local_player.hpp"

using namespace big;

namespace big
{
	void settings_tab::render()
	{
		if (ImGui::BeginTabItem("Settings"))
		{
			ImGui::Text(fmt::format("character_index: {}", g_local_player.character_index).c_str());
			ImGui::Separator();
			ImGui::Text("thanks to:");
			ImGui::Text("pocakking (bigbasev2)\nspankerincrease (bigbasev2-fix, diamond casino heist)\ngir489 (is the second personality of spankerincrease, lol)\ndatlimabean04 (bigbasev2-fix)\nsub1to (could not remember)\njonaaa (increment stat)\npolivilas (for the inspiration)\nShirabrixx82 (get rp value, rig slot machines, get into personal vehicle)");
			ImGui::Separator();
			if (ImGui::Button("Unload"))
			{
				g_running = false;
			}
			ImGui::EndTabItem();
		}
	}
}
