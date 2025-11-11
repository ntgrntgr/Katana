#pragma once
#include "IEventPublisher.hpp"
#include "IPlayerState.hpp"
#include "subscriberInterface.hpp"
#include <vector>
#include <memory>

class Player : public IEventPublisher, public IPlayerState {
public:
    Player();
    // IEventPublisher
    void Add(std::shared_ptr<SubscriberInterface> sub) override;
    void Remove(std::shared_ptr<SubscriberInterface> sub) override;
    void Notify() override;

    // IPlayerState
    int getPlayerHealth() const override;

    // Player-specific methods
    void setPlayerHealth(int newPlayerHealth);
    void increasePlayerHealth(int incrementNumber);
    void decreasePlayerHealth(int decrementNumber);

private:
    int playerHealth{100};

    std::vector<std::weak_ptr<SubscriberInterface>> subscribers;
};