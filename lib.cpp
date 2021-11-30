#include "lib.h"
int primo (int a, int b) {

    if (a==1) {
        return 0;
    }

    return a%b==0 ? a==b : primo(a,b+1);

}



