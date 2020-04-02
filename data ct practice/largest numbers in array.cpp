#include<stdio.h>
int main()

{
    int a[100],i,n,max;
    printf("enter how many numbers u want to enter :");
    scanf(" %d", &n);

    printf("enter ur elements :");
    for(i=1;i<=n;i++)
        scanf(" %d", &a[i]);

    max=a[1];

    for(i=1;i<=n;i++)
            if(max<a[i])
            max=a[i];

    printf("the largest numbers in the array : %d", max);

    return 0;


}


