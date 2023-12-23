#include<stdio.h>
#include <string.h>
typedef struct student
{int id;
char name[30];
int marks;
}std ;
//struct student ravi,shubham,aman;
std ravi,shubham,aman;
void marks()
{printf("%d",ravi.marks);}
int main()
{//struct student ravi,shubham,aman;
ravi.id=1;
shubham.id=2;  
aman.id=3;
ravi.marks=60;
shubham.marks=70;  
aman.marks=80;
strcpy(ravi.name,"fool");
strcpy(shubham.name,"tool");
strcpy(aman.name,"cool");
printf("%s",aman.name);
marks();
return 0;}