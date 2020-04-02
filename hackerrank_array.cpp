#include<stdio.h>
int main()

{
    int i,x,y,z,n, sum=0;
    int a[100];
    printf("enter how many number s u eant to put in the array: ");
    scanf("%d\n",&n);
    for(i=1;i<=n;i++){
        scanf(" %d", &a[i]);
    }
    for(i=1;i<=n;i++){
        sum = sum+a[i];
    }
    printf("total = %d",sum);

    return 0;
}
