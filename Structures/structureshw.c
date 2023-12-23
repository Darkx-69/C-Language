#include <stdio.h>
#include <string.h>

struct hotel
{
    char name[50];
    int id;
    char route[100];
    int km;
};

int main()
{
    int n;
    scanf("%d", &n);
    struct hotel management[n];

    for (int i = 0; i < n; i++)
    {

        printf("Input the driver's id:\n");
        scanf("%d", &management[i].id);

        printf("Input the km travelled:\n");
        scanf("%d", &management[i].km);
        getchar();

        printf("Input the driver's name:\n");
        // scanf(" %49[^\n]", management[i].name);
        fgets(management[i].name, 50, stdin);

        printf("Input the route taken:\n");
        fgets(management[i].route, 100, stdin);
    }
    for (int i = 0; i < n; i++)
    {printf("\n \n");
        printf("Driver name=%s", management[i].name);
        printf("Driver id=%d\n", management[i].id);
        printf("Distance travelled=%d\n", management[i].km);
        printf("Route travelled=%s\n", management[i].route);
    }

    return 0;
}
