//Chaweinta Hale
// Started:     May 3, 2020
// Modified:    March, 22 2020
// Example Code for Proxy Design Pattern
//

#include "proxyhuman.hpp"

bool ProxyHuman::CheckAccess() const{

}
int ProxyHuman::AccessNumber() const{

}
ProxyHuman::Proxy(ActualHuman actual_human){

}
~ProxyHuman(){
    delete actual_human;
}