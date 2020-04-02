#include <stdio.h>

int main()
{
    int i,j,n,k,l,a[100][100];

    printf("Enter number of node: ");
    scanf("%d",&n);

    printf("Enter adjacent matrix: \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
    {
        scanf("%d",&a[i][j]);
    }
    }


    for(i=0;i<n;i++)
    {
        k=0;
        for(j=0;j<n;j++)
        {
            k=k+a[i][j];
        }
        printf("node %d out degree %d\n",i+1,k);
    }

    for(i=0;i<n;i++)
    {
        k=0;
        for(j=0;j<n;j++)
        {
            k=k+a[j][i];
        }
        printf("node %d in degree %d\n",i+1,k);
    }
}

