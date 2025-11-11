#include "../Headers/player.hpp"
#include "../Headers/HUD.hpp"
#include "../Headers/SoundSystem.hpp"
#include "../Headers/Logger.hpp"
#include <memory>

int main() {
    Player player;

    auto hud = std::make_shared<HUD>();
    auto sound = std::make_shared<SoundSystem>();
    auto logger = std::make_shared<Logger>();

    
    player.Add(hud);
    player.Add(sound);
    player.Add(logger);

    
    player.setPlayerHealth(100);
    player.decreasePlayerHealth(30); 
    player.decreasePlayerHealth(50); 
    
    player.Remove(sound);
    std::cout << "[main] SoundSystem unsubscribed" << std::endl;
    player.decreasePlayerHealth(25); 

    return 0;
}
