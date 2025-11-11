#pragma once
#include "subscriberInterface.hpp"
#include "IPlayerState.hpp"
#include <iostream>

class HUD : public SubscriberInterface {
public:
    HUD() = default;
    void Update(const IPlayerState& state) override;
};
