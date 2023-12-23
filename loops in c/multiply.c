#include <stdio.h>

int main()
{
    printf( "Multiplication table \n \n" );
    int a,b;
     printf(" Enter the value of no of which you want multiple of\n");
     scanf("%d",&b);

    for ( a= 1 ; a <=10; a++)
    { printf("%d X %d= %d\n",b,a,a*b );
        
    }
    
    return 0;
}
