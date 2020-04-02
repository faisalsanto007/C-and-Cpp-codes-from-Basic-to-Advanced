#include<stdio.h>
int main()

{
    int a[1000],i,j,k,l,temp,ptr;
    a[0]=-9999999;
    printf("enter the number of elements: ");
    scanf("%d\n",&i);
    printf("enter elements:");
    for(j=1;j<=i;j++)
        scanf(" %d",&a[j]);

    for(k=2;k<=i;k++)
    {
        temp=a[k];
        ptr=k-1;

        while(temp<a[ptr])
        {
            a[ptr+1]=a[ptr];
            ptr=ptr-1;
        }
        a[ptr+1]=temp;
    }
    for(k=0;k<=i;k++)
        printf(" %d ",a[k]);
    printf("\n");

    return 0;
}
