#include <stdio.h>

int main()
{
    printf( "Multiplication table \n \n" );
    int a,b;
     printf(" Enter the value of no of which you want multiply of\n");
     scanf("%d",&b);
     printf(" Enter the value of no's of which you want to multiply of\n");
     scanf("%d",&a);

    for (  b<=10000, a <=1000000;a;)
    { printf("%d X %d= %d\n",b,a,b*a ); 
    break;
        
    }
    
    return 0;
}
