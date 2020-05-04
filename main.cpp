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

void Client((const Human &human)){
    human.Question();
}

int main() {
    std::cout << "Proxy method of question asking" << std:endl;
    ProxyHuman *proxy = new Proxy(real_subject);
    Client(*proxy);
    std::cout << "Brunt force method of question asking with the actual human" << std:endl;
    ActualHuman *actual_human = new ActualHuman;
    Client(*actual_human);

    cleanup();
    return 0;
}