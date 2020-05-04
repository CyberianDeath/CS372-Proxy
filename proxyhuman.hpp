//Chaweinta Hale
// Started:     May 3, 2020
// Modified:    March, 22 2020
// Example Code for Proxy Design Pattern
//
#ifndef FILE_PROXYHUMAN_HPP_INCLUDED
#define FILE_PROXYHUMAN_HPP_INCLUDED

class ProxyHuman : public Human {
private:
    ActualHuman *_actualhuman_;
    bool QuestionCheck() const;
    void QuestionMessage() const;
public:
    void Question() const override;
    ProxyHuman() = delete;
    Proxy(ActualHuman);
    ~ProxyHuman();
};

#endif
