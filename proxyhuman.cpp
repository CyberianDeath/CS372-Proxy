//Chaweinta Hale
// Started:     May 3, 2020
// Modified:    March, 22 2020
// Example Code for Proxy Design Pattern
//

#include "proxyhuman.hpp"

bool ProxyHuman::QuestionCheck() const{
    if(true){ //pseudo code
        return true;
    }else{
        return false; //unreachable state
    }
}
int ProxyHuman::QuestionMessage() const{
    std::cout << "The Question has been asked, expect a reply shortly...\n..." << std::endl
}
ProxyHuman::Proxy(ActualHuman *actual_human): _actualhuman_(new ActualHuman(*actual_human)){
}

~ProxyHuman(){
    delete actual_human;
}