#include<stdio.h>
int main()

{
    int i,j,k,n;
    for(i=5;i>0;i-=2){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n ");
    }

    return 0;
}
