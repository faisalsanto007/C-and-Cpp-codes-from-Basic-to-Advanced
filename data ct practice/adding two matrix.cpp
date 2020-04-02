#include <stdio.h>

int main()
{
    int a[100][100],b[100][100],i,j,k,l;

    printf("Enter row and column number of matrix :");
    scanf("%d %d",&k,&l);
    printf("Enter 1st matrix: \n");
    for(i=0;i<k;i++)
    {
        for(j=0;j<l;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter 2nd matrix: \n");
    for(i=0;i<k;i++)
    {
        for(j=0;j<l;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    printf("Sum of two matrix: \n");
    for(i=0;i<k;i++)
    {
        for(j=0;j<l;j++)
        {
            printf("%d ",(a[i][j]+b[i][j]));
        }
        printf("\n");
    }

    return 0;
}



