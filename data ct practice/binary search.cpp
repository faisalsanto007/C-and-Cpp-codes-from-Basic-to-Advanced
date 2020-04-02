#include<stdio.h>
int main()

{
    int a[100],n,i,lb,mid,ub,item;
    printf("enter how many numbers u want to enter :");
    scanf(" %d", &n);

    printf("enter the elements :");
    for(i=0;i<n;i++)
        scanf(" %d", &a[i]);

    printf(" enter the item u want to search :");
    scanf(" %d", &item);

    lb=0,ub=n-1;
    mid=(lb+ub)/2;

    for(lb=0,ub=n-1;lb<=ub;mid=(lb+ub)/2)
    {
        if(a[mid]==item)
        {
            printf("the item is found in %d",mid+1);
            i=0;
            break;
        }
        else if(item>a[mid])
        {
            lb=mid+1;
        }
        else{
            ub=mid-1;
        }
    }

    if(i)
    {
        printf("the number is not found in the list");
    }

    return 0;
}
