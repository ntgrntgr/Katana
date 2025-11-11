#include "../Headers/HUD.hpp"

void HUD::Update(const IPlayerState& state) {
    std::cout << "[HUD] Player health updated: " << state.getPlayerHealth() << std::endl;
}
