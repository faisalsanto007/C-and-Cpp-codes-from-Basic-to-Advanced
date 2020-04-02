#include<stdio.h>
int main()

{
    int a[100],n,i,item;
    printf("enter how many numbers u want to enter :");
    scanf(" %d", &n);

    printf(" enter the elements :");
    for(i=0;i<n;i++)
        scanf(" %d", &a[i]);

    printf("enter the item u want to search :");
    scanf(" %d", &item);

    for(i=0;i<n;i++)
    if(a[i]==item)
    {
        printf("the number is found in %d", i+1);
        break;
    }

    if(i==n)
    {
        printf("the number is not found in the list");
    }

    return 0;
}
