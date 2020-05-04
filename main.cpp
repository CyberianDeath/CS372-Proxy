// Chaweinta Hale
// Started:     May 3, 2020
// Modified:    March, 22 2020
// Example Code for Proxy Design Pattern
//
// Main

void cleanup(){
    delete _actualhuman_;
    delete proxy
}


int main() {
    RealSubject *real_subject = new RealSubject;
    ClientCode(*real_subject);
    Proxy *proxy = new Proxy(real_subject);
    ClientCode(*proxy);

    return 0;
}