#include<stdio.h>
int main()

{
    int a[100],n,i,k,item;

    printf("enter how many numbers u want to enter :");
    scanf(" %d", &n);

    printf("enter the elements :");
    for(i=1;i<=n;i++)
        scanf(" %d", &a[i]);

    printf(" enter the item u want to delete and its position:");
    scanf(" %d %d", &item, &k);

    while(k<n)
    {
        a[k]=a[k+1];
        k=k+1;
    }

    n=n-1;

    printf("all the elements are :");
    for(i=1;i<=n;i++)
        printf(" %d", a[i]);

    return 0;
}
