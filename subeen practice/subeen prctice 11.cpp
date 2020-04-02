#include<stdio.h>
int main()

{
    int i,n,sum;
    printf("how many odd numbers u want to enter :");
    scanf(" %d",&n);
    for(i=1,sum=0;i<=n;i=i+2){
        sum=sum+i;
    }
    printf("\nsummation of the given odd numbers %d",sum);

    return 0;
}
