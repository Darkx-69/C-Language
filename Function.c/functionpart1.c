#include <stdio.h>
void prints() {
    int a;
    scanf("%d",&a);
    printf("Enter the no-\n");
    for(int i=0;i<=a;i++)
    {printf ("()");}}

float divide(int a, int b)
{
     float z= (float)a /  b;
     return z;
}
void printstar(int n){
    int i;
    
    for (i=0; i < n ; i++)
    {
        printf("*");
    }
    
  
}

int no()
{
    int e;
    printf("Enter the no\n");
    scanf("%d", &e);
    return e;
}

int main()
{
    int a, b,  f;
    printf("umaaditya \n");
    printf("Enter the no-\n");
    scanf("%d\n", &a);
    scanf("%d", &b);
    float c = divide(a, b);
    printf("The result is %f\n", c);
      
   f = no(7);
    printf("The no is %d\n", f);
    printstar(6);
     prints();
  
   
    return 0;
}
