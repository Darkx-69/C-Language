#include<stdio.h>
#include <string.h>
int main()
{ char a [1000];
fgets(a,1000,stdin);
printf("%d",strlen(a)); 
    return 0;}