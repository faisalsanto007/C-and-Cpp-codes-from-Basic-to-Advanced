#include<stdio.h>
int main()

{
    int i,a[100],n;
    printf("enter array numbers :");
    scanf(" %d",&n);
    printf("enter array members :");
    for(i=1;i<=n;i++){
        scanf(" %d",&a[i]);
    }
    printf("numbers are :");
    for(i=1;i<=n;i++){
        printf(" %d\n",a[i]);
    }
    printf("\nnumbers in the 5th position is %d",a[5]);
    return 0;
}
