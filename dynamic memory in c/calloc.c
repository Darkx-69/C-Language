#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int n;
    printf("enter the size of the array\n ");
    scanf("%d", &n);

    ptr = (int *)calloc(n,sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The element %d of the array is %d \n", i, ptr[i]);
    }
printf("The element %d of the array is %d \n", 3, ptr[3]);
    return 0;
}