#include<stdio.h>
int main()

{
    int x,i, sum=1;
    printf("enter a number:");
    scanf(" %d", &x);

    for(i=x ; i>0 ; i--){
        sum = sum * i;
    }

    printf("factorial x = %d\n", sum);

    return 0;
}


