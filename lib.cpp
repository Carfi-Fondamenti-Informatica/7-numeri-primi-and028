#include "lib.h"

int primo (int a, int b) {


    if (a==0) {
        return 0;
    }




    if (a==1) {
        return 0;
    }




    if (a==2) {
        return 1;
    }


    if ((a%b==0) && (a%1==0) && (a==b))  {


        return 1;

    } else if (a%b==0) {

        return 0;

    } else {

        primo(a,b+1);

        return primo(a,b+1);




    }



}
