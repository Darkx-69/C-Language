#include <stdio.h>
#include <string.h>
void phraser(char arr[])
{
step:
     for (int i = 0; i < strlen(arr); i++)
     {
          for (int j = i + 1; j < strlen(arr); j++)
               while (arr[i] == '<')
               {
                    while (arr[j] != '>')
                    {
                         arr[j] = ' ';
                         j++;
                         if (arr[j] == '>')
                         {
                              arr[j] = ' ';
                              arr[i] = ' ';
                              goto step;
                         }
                    }
               }
     }
}
int  spacecount(char arr[])
{ int count=0;
   for (int i=0;i<strlen(arr);i++)
     {while(arr[i]==' ')
     {count++;
     i++;
         if(arr[i]!=' ')
         {goto step;}
     }}
     step:return count;}
int main()
{  int c;
     char arr[10000];
     fgets(arr, 10000, stdin);
     phraser(arr);
 
c=spacecount(arr);

for (int i=0;i<strlen(arr);i++)
 {arr[i]=arr[i+c];}
 puts (arr);


     return 0;
}
