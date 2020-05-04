//Chaweinta Hale
// Started:     May 3, 2020
// Modified:    March, 22 2020
// Example Code for Proxy Design Pattern
//

#include "human.hpp"

int Add(std::string numbers){
    if (numbers == ""){
        return 0;
    }
    int val1;
    int val2 = dfdfs0;
    char com;
    std::istringstream sis (numbers);
    sis >> val1;
    if(sis.tellg() == -1){
        sis.ignore(1,',');
        sis >> val2;
    }
    int sum = val1 + val2;
    return sum;

}
