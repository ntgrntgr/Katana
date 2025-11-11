#pragma once


class IPlayerState; 

class SubscriberInterface {
public:
    virtual ~SubscriberInterface() = default;
    virtual void Update(const IPlayerState& state) = 0;
};