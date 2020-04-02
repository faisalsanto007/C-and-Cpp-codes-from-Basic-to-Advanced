#include <stdio.h>
int main()

{
    int a[100][100],i,j,k,l;

    printf("Enter row and column number of matrix :");
    scanf("%d %d",&k,&l);
    printf("Enter matrix: \n");
    for(i=0;i<k;i++)
    {
        for(j=0;j<l;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("After inter change row and column :\n");

        for(i=0;i<l;i++)
    {
        for(j=0;j<k;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }

    return 0;
}

