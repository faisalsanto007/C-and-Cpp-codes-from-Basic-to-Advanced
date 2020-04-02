#include<stdio.h>
int main()

{
    int a[100],n,i,m;
    printf("enter how many numbers u want to enter :");
    scanf(" %d", &n);

    printf("enter the elements :");
    for(i=1;i<=n;i++)
        scanf(" %d", &a[i]);

    printf("evens are : ");
    for(i=1;i<=n;i++)
    {
       if(a[i]%2==0)
       printf(" %d", a[i]);
    }

    printf("\nodds are : ");
    for(i=1;i<=n;i++)
    {
        if(a[i]%2!=0)
        printf(" %d", a[i]);
    }

    return 0;
}
