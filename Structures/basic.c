#include<stdio.h>
#include <string.h>
struct student
{int id;
char name[30];
int marks;
} ;

int main()
{struct student stud[10];
for (int i=1;i<=3;i++)
{scanf("%d",&stud[i].id);
scanf("%d",&stud[i].marks);
scanf("%s",&stud[i].name);}
printf("%d",stud[3]);
return 0;}