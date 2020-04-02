#include <stdio.h>

int min(int a[],int k,int n)
{
    int i=k,l,m;
    for(i=i+1 ;i<n;i++)
    {
        if(a[k]>a[i])
        {
            k=i;
        }
    }
    return k;
}

int main()
{
    int i,j,k,l,a[1000],n;

    printf("Enter number of element: ");
    scanf("%d",&n);

    printf("Enter element: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n-1;i++)
    {
        l=min(a,i,n);
        k=a[i];
        a[i]=a[l];
        a[l]=k;
    }

    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");

}

