#include<stdio.h>
void strprint(char str[]){ int i=0;
while (str[i]!='\0')
{printf("%c",str[i]);
i++;
}
printf("\n");}
int main()
{ char a[]="harry";
printf("%s\n",a);
char b[]={'b','o','y','\0'};
printf("%s\n",b);
printf("\n");
char am[32];
gets(am);
printf("printing using custom function\n ");
strprint(am);
printf("printing using %s\n",am);

printf("printing using puts\n ");
puts(am);


    return 0;}