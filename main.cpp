#include <iostream>
#include "lib.h"
int main() {

    int a=0, b=2;

    std::cin>>a;
    if (primo(a,b)) {
        std::cout<<"numero primo";
    } else {
        std::cout<<"numero non primo";
    }


    return 0;
}
