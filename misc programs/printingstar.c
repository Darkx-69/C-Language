#include<stdio.h>
void starprint(int n){ for(int i=0;i<n;i++)
{for(int j=0;j<=i;j++)
{printf("*");}
printf("\n");}}
void reversedstarprint(int n){ for(int i=0;i<n;i++)
{for(int j=0;j<=(n-i-1);j++)
{printf("*");}
printf("\n");}}
int main()
{  int n;
scanf("%d",&n);
starprint(n);
printf("hello\n");
reversedstarprint(n);
    return 0;}