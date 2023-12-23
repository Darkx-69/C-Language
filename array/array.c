#include <stdio.h>
int main()
{
   printf("umaaditya\n");
   int n[3][4] = {{1,5,7,8},{23,46,67,88},{2,3,4,5}};
   for (int i = 0; i < 3; i++)
   {
      // printf("enter the value of element of array %d \n",i);
      
      // printf("the array is %d\n",n[i]);

      for (int j = 0; j < 4; j++)
      {
         // printf("enter the value of element of array %d \n",j);
        
         printf("the required array of %d,%d is %d\n", i, j, n[i][j]);
      }
   }
printf("%d",n[1][2]);
   return 0;
}
