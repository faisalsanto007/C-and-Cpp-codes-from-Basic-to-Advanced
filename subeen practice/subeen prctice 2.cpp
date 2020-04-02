#include<stdio.h>
int main()

{
    int n,result,other,remainder,bhajjo;
    printf("enter a number u want to divide :");
    scanf(" %d", &n);
    printf("\n\nenter the number u use it for divide :");
    scanf(" %d", &bhajjo);
    result=n/bhajjo;
    other=result*bhajjo;
    remainder=n-other;
    printf("\nthe remainder is %d", remainder);
    return 0;

}
