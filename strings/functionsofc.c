#include <stdio.h>
#include <string.h>
int main()
{int count=0,n,i;
scanf("%d",&n);
char arr[n];
for(i=0;i<n;i++)
{scanf("%c",&arr[i]);
    count++;
}
printf("%d",count);
printf("%s\n",arr);
char f[n];
for(i=0;i<n;i++)
{f[i]='a';}
for(i=0;i<n;i++)
{f[i]=arr[n-i-1];
}

f[n]='\0';


printf("%s",f);
return 0;}