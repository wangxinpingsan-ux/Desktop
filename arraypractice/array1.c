#include <stdio.h>
#define size 7

int main (void){

    int element [size];
    
    for (int a = 0 ; a < size ;a++ ){

        
    element[a]=4-a;
    }

    for (int b = 0 ; b < size ;b++ ){

    
    printf("%d\n",element[b]);
    }

    return 0 ;
}