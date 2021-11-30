#include <iostream>
#include "lib.h"
int main() {

    int a=0;

    std::cin>>a;



    if (primo(a,2)) {
        std::cout<<"primo";
    } else{
        std::cout<<"non primo";
    }


    return 0;
}
