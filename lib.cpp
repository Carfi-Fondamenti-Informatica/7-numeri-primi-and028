#include "lib.h"

bool primo (int a, int b) {


    int modulo=a%b;


    if (modulo!=0)  {

        primo(a,b+1);

        return true;

    } else {
        return false;

    }



}
