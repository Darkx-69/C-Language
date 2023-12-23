#include<stdio.h>

// Array passing through array function
int func(int arr[],int n) {
    int avg ;
     int sum=0;
    for(int i=0;i<n;i++)
    { sum +=arr[i];}
    avg=sum/n;
    return avg;}
   
  //Array passing through function using pointers 
    int func2(int*ptr,int n){ int sum=0;
    for(int i=0;i<n;i++){ sum+=*(ptr+i);}
    int avg=sum/n;
    return avg;}


int main()
{  int n;
printf("Enter the no the terms\n");
scanf("%d",&n);
printf("Enter the value of marks\n");
    int arr[n];
    for(int i=0;i<n;i++)
   { scanf("%d",&arr[i]);}
   printf("avg of marks is %d\n",func(arr,n));
printf("avg of marks is %d\n",func2(arr,n));
    return 0;}