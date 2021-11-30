#include "lib.h"

bool primo (int a, int b) {

    if ((a%b==0) && (a==b))  {


        return true;

    } else if (a%b==0) {

        return false;

    } else {

        primo(a,b+1);

    }



}

