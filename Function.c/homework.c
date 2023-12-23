#include<stdio.h>
int iterative(int n) { int a=0;
int b=1;

for (int i=0;i<n-1;i++) 
{b=a+b;
a=b-a;
printf("%d\n",a);
}
  return a; }
  int fibonacci(int n) {if(n==1||n==2)
  {return n-1;}
  else { return fibonacci(n-1)+fibonacci(n-2);}
}
int main()
{ int n;
scanf("%d",&n);
printf("Fibonaci series of %d is %d\n",n,iterative(n));
printf("Fibonaci series of %d is %d",n,fibonacci(n));
    return 0;}
  