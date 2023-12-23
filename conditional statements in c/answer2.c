#include <stdio.h>

int main()
{int a , b ;
    printf( "Input your score\n" );
    scanf("%d",&a);
    scanf("%d",&b);
    if (a>100||b>100)
    {
      printf("error ocurred\n");
    }
    
   
    

    else if (a>=40 && b>=40)
    { printf("congrtulation,You recieve a gift of Rs.45\n");}
    
  else  if (b>=40)
    {
      printf("congrtulation,You recieve a gift of Rs.15\n");
    
    }
     else  if (a>=40)
    {
      printf("congrtulation,You recieve a gift of Rs.15\n");
    
    }
    
    
    else
    printf(" you are a bitch \n");
    
    



    
    return 0;
}
