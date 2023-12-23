#include <stdio.h>
int main()
{printf("pointer learning \n");
int a=55;
int* poina = &a;
int* poin = NULL ;
printf("The address of pointer of a is %p\n",&poina);
printf("The address of a is %p\n",&a);
printf("The address of a is %p\n",poina);
printf("The address of a is %p\n",poina);
printf("The value of a is %d\n",*poina);
printf("The value of a is %d\n",a);
printf("The address of pointer of a is %p \n",poin);
printf("%d\n",*poina);
printf("%d\n",poina);
printf("%d\n",&poina);

//printf("%d\n",&poina);
//poina+2;
//("%d\n",poina);


return 0;}