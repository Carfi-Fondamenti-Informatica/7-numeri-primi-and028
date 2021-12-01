#include "lib.h"
int primo (int a, int b) {





    if (a==1) {
        return 0;}
    
    if (a%b==0 && a==b){
    return 1;
} else if((a%b==0) && (a!=b)){
    return 0;
}else {
    return  primo(a,(b+1));
}

