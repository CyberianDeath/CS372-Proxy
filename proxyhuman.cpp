//Chaweinta Hale
// Started:     May 3, 2020
// Modified:    March, 22 2020
// Example Code for Proxy Design Pattern
//

#include "proxyhuman.hpp"
#include <iostream>

bool ProxyHuman::QuestionCheck() const{
    if(true){ //pseudo code
        return true;
    }else{
        return false; //unreachable state
    }
}
void ProxyHuman::QuestionMessage() const{
    std::cout << "This Question has been asked through a proxy\n..." << std::endl;
}
ProxyHuman::ProxyHuman(ActualHuman *actual_human): _actualhuman_(new ActualHuman(*actual_human)){};

ProxyHuman::~ProxyHuman(){
    delete _actualhuman_;
}

void ProxyHuman::Question() const override {
    if (this->QuestionCheck()) {
        this->_actualhuman_->Question() ;
        this->QuestionMessage();
    }
}
