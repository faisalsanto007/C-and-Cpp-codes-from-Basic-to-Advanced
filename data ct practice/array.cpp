#include<stdio.h>
int main()

{
    int a[100], n,i;
    printf("enter how many elements u want to enter :");
    scanf(" %d", &n);

    printf("enter ur numbers :");
    for(i=0;i<n;i++)
        scanf(" %d", &a[i]);

    printf("elements of ur arrays are :");

    for(i=0;i<n;i++)
        printf(" %d", a[i]);

    return 0;
}
