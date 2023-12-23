# include <stdio.h> 


   void prints () 
   {int a;
  printf ("enter the no\n");
   scanf("%d",&a);
   for(int i=0;i<=a;i++)
   {printf(" $");} }
   int multiply(  )
   { int a,b;
   printf("enter the no\n");
    scanf("%d",&a);
    scanf("%d",&b);
    return a*b ;}
int main(int argc, char const *argv[])
{
    int f ,d;
    prints();
    d=multiply();
    printf("rhe result is %d\n",d);
    return 0;

}


