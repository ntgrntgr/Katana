#pragma once
#include <memory>

class SubscriberInterface;

class IEventPublisher {
public:
    virtual ~IEventPublisher() = default;
    virtual void Add(std::shared_ptr<SubscriberInterface> subscriber) = 0;
    virtual void Remove(std::shared_ptr<SubscriberInterface> subscriber) = 0;
    virtual void Notify() = 0;
};
