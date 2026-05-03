#include <stdio.h>


int main(void)
{
   int number[6] = {45, -7, 12, 8, 45, -20};
   int counter = 5;
   for (int i = 0; i < 5; i++)
   {

      if (number[i] > number[i + 1])
      {
         int temp =number[i];
         number[i] = number[i + 1]; 
         number[i + 1] =temp ;
         
      }
      for (; i == 4; counter--)
      {
         i = -1;
      }
      if (counter == 0)
      {
         break;
      }
   }

   for (int i = 0; i < 6; i++)
   {

      printf("%d\n", number[i]);
   }

   return 0;
}