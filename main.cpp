// Chaweinta Hale
// Started:     May 3, 2020
// Modified:    March, 22 2020
// Example Code for Proxy Design Pattern
//
// Main
#include <iostream>
#include "human.h"
#include "actualhuman.hpp"
#include "proxyhuman.hpp"

void Client(const Human &human){
    human.Question();
}

int main() {
    std::cout << "Brunt force method of question asking with the actual human" << std::endl;
    ActualHuman *actual_human = new ActualHuman;
    Client(*actual_human);

    std::cout << "Proxy method of question asking" << std::endl;
    ProxyHuman *proxy_human = new ProxyHuman(actual_human);
    Client(*proxy_human);

    delete actual_human;
    delete proxy_human;
    return 0;
}