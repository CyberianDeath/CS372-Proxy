//Chaweinta Hale
// Started:     May 3, 2020
// Modified:    March, 22 2020
// Example Code for Proxy Design Pattern
//
#ifndef FILE_PROXYHUMAN_HPP_INCLUDED
#define FILE_PROXYHUMAN_HPP_INCLUDED

#include "human.h"
#include "actualhuman.hpp"

class ProxyHuman : public Human {
private:
    ActualHuman *actual_human;
    bool QuestionCheck() const;
    void QuestionMessage() const;
public:
    void Question() const override;
    ProxyHuman() = delete;
    ProxyHuman(ActualHuman *actual_human);
    ~ProxyHuman();
};

#endif
