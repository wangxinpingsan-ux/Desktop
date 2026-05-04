#include <stdio.h>
#include <stdbool.h>




int main (void){
    int a = 0;

    int b =0 ;
    int number[10]={0};
    int index = 0;
    printf("enter number (-1 to end ):");

    while(true){
      int a=0;
        scanf("%d",& a);
          if(a==-1){
            break;
          }

    number[b]=a;
    index++;
    b++;

    }


    for(int i ; i<10 ; i++)
    {
        if(number[i]==0)
        break;
    printf("the %d  time  %d\n",i+1,number[i]);
     
    }

    









    return 0 ;
}