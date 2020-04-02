#include<stdio.h>
int main()

{
    int sum,n,i;
    printf("how many numbers u want to enter :");
    scanf(" %d", &n);
    for(i=0,sum=0;i<=n;i++){
        sum=sum+i;

        }
    printf("summation of the total series %d",sum);

    return 0;
}
