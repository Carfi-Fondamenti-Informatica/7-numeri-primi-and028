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



    if (a%2==0) {
    return 0;
}


    if ((a%b==0) && (a%1==0) && (a==b))  {


        return 1;

    } else if (a%b==0) {

        return 0;

    } else {

        int contatore=0;
        contatore++;

        primo(a,b+2);



        if ((a%(b+contatore+1)==0) && (a!=(b+contatore+1))) {
            return 0;
        } else {

            return 1;
        }


    }



}

