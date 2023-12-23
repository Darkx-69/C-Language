#include<stdio.h>
/* Function call by reference*/
void no(int*a,int*b){*a=*a+*b;
*b=*a-*b;
return;}
/*Function call by value */
int getno(int a,int b) { 

return  a-b;
   
}
/*Function call by value */
int getno1(int a,int b) { 

return  a+b;
   
}
int main()
{  int x,y;
scanf("%d %d ",&x,&y);
printf("the no is %d,%d \n",x,y);
getno(x,y);
printf("the no is %d,%d \n",getno1(x,y),getno (x,y));
no(&x,&y);
printf("the no is %d,%d \n",x,y);

    return 0;}