#include <stdio.h>
int factorial (int num)
{if ( num ==0||num==1)
{
    printf("1");
}
else 
{
    return(num * factorial(num-1));}
}


int main()
{ int num;
scanf("%d",&num);
printf("The factorial of the no %d is %d\n",num,factorial(num)  );
return 0;}