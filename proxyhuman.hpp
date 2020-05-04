//Chaweinta Hale
// Started:     May 3, 2020
// Modified:    March, 22 2020
// Example Code for Proxy Design Pattern
//
#ifndef FILE_PROXYHUMAN_HPP_INCLUDED
#define FILE_PROXYHUMAN_HPP_INCLUDED

class ProxyHuman : public Human {
private:
    ActualHuman *actual_human;
    bool CheckAccess() const;
    void AccessNumber() const;
public:
    Proxy(ActualHuman);
    ~ProxyHuman();
};

#endif