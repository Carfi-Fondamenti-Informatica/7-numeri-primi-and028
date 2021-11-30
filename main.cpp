#include <iostream>
#include "lib.h"
int main() {

    int a=0,b=2;

    std::cin>>a;

    primo(a,b);


    if (primo(a,b)){
        std::cout<<"numero  primo"<<std::endl;
    } else {
        std::cout<<"numero non primo"<<std::endl;
    }

    return 0;
}
