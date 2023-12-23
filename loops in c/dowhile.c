#include <stdio.h>

int main(int argc, char const *argv[])
{int num, index=1;
    printf("Enter a no\n");
    scanf("%d",&num);
    do
    {printf("%d\n",index*5);
    index=index*5;
    
    } while (index<num) ;
    
    return 0;
}
