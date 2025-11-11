#include "../Headers/Logger.hpp"

void Logger::Update(const IPlayerState& state) {
    std::cout << "[Logger] New player health: " << state.getPlayerHealth() << std::endl;
}
