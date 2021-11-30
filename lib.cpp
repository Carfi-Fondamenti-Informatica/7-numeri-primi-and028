#include "lib.h"

bool primo (int a, int b) {


    if (a==0) {
        return false;
    }




    if (a==1) {
        return false;
    }




    if (a==2) {
        return true;
    }


    if ((a%b==0) && (a%1==0) && (a==b))  {


        return true;

    } else if (a%b==0) {

        return false;

    } else {

        primo(a,b+1);




    }



}

