#include <stdio.h>

int main()
{
    int a[100][100],i,j,k,l,m=0;

    printf("Enter row and column number of matrix :");
    scanf("%d%d",&k,&l);
    printf("Enter matrix: \n");
    for(i=0;i<k;i++)
    {
        for(j=0;j<l;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Row sum:\n");
    for(i=0;i<k;i++)
    {
        for(j=0;j<l;j++)
        {
            m+=a[i][j];
        }
        printf("%d\n",m);
        m=0;

    }

    printf("Column sum:\n");
    for(i=0;i<l;i++)
    {
        for(j=0;j<k;j++)
        {
            m+=a[j][i];
        }
        printf("%d ",m);
        m=0;

    }


    return 0;
}

