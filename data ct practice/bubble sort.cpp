#include<stdio.h>
int main()

{
    int a[100],n,i,j,temp;
    printf("enter how many numbers u want to enter :");
    scanf(" %d", &n);

    printf(" enter the elements :");
    for(i=0;i<n;i++)
        scanf(" %d", &a[i]);

    for(i=0;i<n-1;i++)
        for(j=0;j<n-i-1;j++)
        if(a[j]>a[j+1])
    {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
    }

    printf("all elements are :");

    for(i=0;i<n;i++)
        printf(" %d", a[i]);

    return 0;
}