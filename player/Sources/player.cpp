#include "../Headers/player.hpp"
#include "../Headers/subscriberInterface.hpp"
#include <iostream>
#include <algorithm>

Player::Player() = default;

void Player::Add(std::shared_ptr<SubscriberInterface> sub) {
    if (!sub) return;
    // Clean expired entries and avoid duplicates
    for (auto it = subscribers.begin(); it != subscribers.end();) {
        if (auto sp = it->lock()) {
            if (sp == sub) return; // already subscribed
            ++it;
        } else {
            it = subscribers.erase(it);
        }
    }
    subscribers.emplace_back(sub);
}

void Player::Remove(std::shared_ptr<SubscriberInterface> sub) {
    if (!sub) return;
    subscribers.erase(std::remove_if(subscribers.begin(), subscribers.end(),
                                     [&](const std::weak_ptr<SubscriberInterface>& w) {
                                         auto sp = w.lock();
                                         return !sp || sp == sub;
                                     }),
                      subscribers.end());
}

void Player::Notify() {
    // iterate and remove expired weak_ptrs while notifying
    auto it = subscribers.begin();
    while (it != subscribers.end()) {
        if (auto sp = it->lock()) {
            sp->Update(*this);
            ++it;
        } else {
            it = subscribers.erase(it);
        }
    }
}

void Player::setPlayerHealth(int newPlayerHealth) {
    playerHealth = newPlayerHealth;
}

int Player::getPlayerHealth() const {
    return playerHealth;
}

void Player::increasePlayerHealth(int incrementNumber) {
    setPlayerHealth(getPlayerHealth() + incrementNumber);
    Notify();
}

void Player::decreasePlayerHealth(int decrementNumber) {
    setPlayerHealth(getPlayerHealth() - decrementNumber);
    Notify();
}
