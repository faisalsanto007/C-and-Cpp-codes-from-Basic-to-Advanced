#include<stdio.h>
int main()
{
    int i, j, n;

    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5; j++)
        {
            printf("*");
        }
        for(j=1; j<=5; j++)
        {
            printf("-");
        }
        printf("\n");

    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=10; j++)
        {
            printf("-");
        }
        printf("\n");
    }


    return 0;
}
