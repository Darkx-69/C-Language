#include <stdio.h>

int main()
{int age;
    printf( "enter your age \n" );
    scanf("%d",&age);
    printf("This is your Age %d \n",age);
    
    if (age>=18)
    
        printf("You are eligible for vote! \n your age is=%d\n",age);
    
    else if (age>10)
    printf("You are eligible for child vote! \n your age is=%d\n",age);
    
    
    else
    
       printf("you are minor since your age is=%d\n",age);
    
    
    return 0;
}
