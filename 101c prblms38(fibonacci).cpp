#include<stdio.h>
int main()

{
    int i,j=0,k,n;
    printf("enter a number: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        printf(" %d",i);
        k=i;
        i=j;
        j=j+k;
    }

    return 0;
}
