#include <stdio.h>
float conv (int a,float b)
{  
     if (a==1)
{
return  b*1.61;
} 
else if (a==2)
{
    return b*100;
}  else if(a==3 )
{
    return  b*0.39;
} else if  (a==4)
{
    return b/1000;


} 


else{ return 0;}

}








int main()
{ int a;
float b;
char q=0;

  printf("Conversion Table\n");
    printf("1.km in miles\n");
    printf("2.m in cm\n");
    printf("3.cm in inch\n");
    printf("4.g into kg\n");
    printf("Enter the desired conversion no\n");
    printf("enter any no greater than 4 or 0 to exit\n");
    
    scanf("%d",&a);
    if(a<1 || a>=5)
{goto end   ;}
    printf("enter the desired value for conservesion \n");
    scanf("%f",&b);

  
 printf("Required no is %f/n", conv(a,b));
 
  end:


   
    return 0;
}
