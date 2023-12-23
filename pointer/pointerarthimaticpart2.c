#include<stdio.h>
int main()
{ int arr[]={1,5,6,7,8,9,10,88};
int *ptrarr=arr;
printf("The address of thirds element of array is %d\n",&arr[2]);
printf("The address of thirds element of array is %d\n",arr+2);
printf("The value of thirds element of array is %d\n",*(&arr[2]));
printf("The value of thirds element of array is %d\n",*(arr+2));
ptrarr++;
printf("%d",*ptrarr);

    return 0;}