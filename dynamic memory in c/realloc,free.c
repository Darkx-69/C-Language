#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int n;
    printf("enter the size of the array\n ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The element %d of the array is %d \n", i, ptr[i]);
    }
     printf("enter the size of the array\n ");
    scanf("%d", &n);
    ptr=(int*)realloc(ptr,n);
for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The element %d of the array is %d \n", i+1, ptr[i]);
    }
    free(ptr);
    return 0;
}