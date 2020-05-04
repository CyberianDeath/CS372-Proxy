//Chaweinta Hale
// Started:     May 3, 2020
// Modified:    March, 22 2020
// Example Code for Proxy Design Pattern
//

#include "actualhuman.hpp"
#include <iostream>

void ActualHuman::Question() const override{
    std::cout << "You have touched the real human..." << std::endl;
}