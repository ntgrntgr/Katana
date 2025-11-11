#pragma once

class IPlayerState {
public:
    virtual ~IPlayerState() = default;
    virtual int getPlayerHealth() const = 0;
};
