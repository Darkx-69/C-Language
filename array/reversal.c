#include<stdio.h>
void array(int n,int *a)
{ int i=0;
printf("original element\n");
for(i=0;i<n;i++)
{printf("%d\n",*(a+i));}
printf("reversed elements\n");
for(int j=n-1;j>=0;--j)
{printf("%d\n",*(a+j));}
}
int main ()
{ int n;
scanf("%d",&n);
int a[n],i=0;
for( i=0;i<n;i++)
{scanf("%d",&a[i]);}

    array(n,a);
    return 0;}