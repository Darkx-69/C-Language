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
int main()
{ // int count=0;
     char arr[10000];
     fgets(arr, 10000, stdin);
     phraser(arr);

     puts(arr);

     return 0;
}
