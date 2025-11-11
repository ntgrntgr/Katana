#include "../Headers/SoundSystem.hpp"

void SoundSystem::Update(const IPlayerState& state) {
    int newPlayerHealth = state.getPlayerHealth();
    if (newPlayerHealth <= 0) {
        std::cout << "[SoundSystem] Play death sound" << std::endl;
    } else if (newPlayerHealth < 30) {
        std::cout << "[SoundSystem] Play low-health warning" << std::endl;
    } else {
        std::cout << "[SoundSystem] Health is fine" << std::endl;
    }
}
