#include <stdio.h>
int main(int argc, char const *argv[])
{int t1=0,t2=1,nextterm,n,i;
scanf("%d",&n);
for(i=1;i<=n;i++)
 { printf("%d\n",nextterm);
 t1=t2;
 t2=nextterm;
 nextterm=t1+t2;}
 
    
    return 0;
}
