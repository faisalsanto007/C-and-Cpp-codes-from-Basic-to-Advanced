#include <stdio.h>

int main()
{
    int a[50][50],b[50][50],c[50][50],i,j,k,l,m,n,p,h;

    printf("Enter row and column number of 1st matrix :");
    scanf("%d%d",&k,&l);
    printf("Enter 1st matrix: \n");
    for(i=0;i<k;i++)
    {
        for(j=0;j<l;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter row and column number of 2nd matrix :");
    scanf("%d%d",&m,&n);
    printf("Enter 2nd matrix: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    if(l==m)
    {
        p=l;
        for(i=0;i<k;i++)
        {
            for(j=0;j<n;j++)
            {
                c[i][j]=0;
                for(k=0;k<p;k++)
                {
                    c[i][j]+=(a[i][k]*b[k][j]);
                }
            }
        }

    printf("Answer of Multiplication:\n");
        for(i=0;i<p;i++)
        {
        for(j=0;j<n;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
        }
        }
    else
        printf("Multiplication not possible.\n");



    return 0;
}



