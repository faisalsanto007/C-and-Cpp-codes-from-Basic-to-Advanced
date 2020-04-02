#include<stdio.h>
int main()

{
    int a[100],n,i,j,k,item;
    printf("enter how many numbers u want to enter :");
    scanf(" %d", &n);

    printf(" enter the elements :");
    for(i=1;i<=n;i++)
        scanf(" %d", &a[i]);

    printf("enter the item & its position :");
    scanf(" %d %d", &item ,&k);

    j=n;

    while(j>=k)
    {
        a[j+1]=a[j];
        j=j-1;
    }

    a[k]=item;
    n=n+1;

    printf("all the elements are :");

    for(i=1;i<=n;i++)
        printf(" %d", a[i]);

    return 0;
}
