//Chaweinta Hale
// Started:     May 3, 2020
// Modified:    March, 22 2020
// Example Code for Proxy Design Pattern
//
#ifndef FILE_HUMAN_HPP_INCLUDED
#define FILE_HUMAN_HPP_INCLUDED

class ActualHuman : public Human {
public:
    void Question() const override;
};

#endif
