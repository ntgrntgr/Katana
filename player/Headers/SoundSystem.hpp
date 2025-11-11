#pragma once
#include "subscriberInterface.hpp"
#include "IPlayerState.hpp"
#include <iostream>

class SoundSystem : public SubscriberInterface {
public:
    SoundSystem() = default;
    void Update(const IPlayerState& state) override;
};
