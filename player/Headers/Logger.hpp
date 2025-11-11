#pragma once
#include "subscriberInterface.hpp"
#include "IPlayerState.hpp"
#include <iostream>

class Logger : public SubscriberInterface {
public:
    Logger() = default;
    void Update(const IPlayerState& state) override;
};
