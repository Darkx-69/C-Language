#include <stdio.h>

int main()
{ int age;
    printf( "enter your age \n" );
    scanf( "%d",&age);
    switch (age)    
{
case 3:
printf("age is 3\n");   
    break;

default:printf("age is not 3\n"); 
    break;
}
    return 0;
}
