#include<stdio.h>
int main()

{
    double x,y,a,b,c,d;
    a=(x+y);
    b=(x-y);
    printf("enter a number:");
    scanf(" %lf", &a);
    printf("enter a number:");
    scanf(" %lf", &b);
    c=(a+b);
    x=c/2;
    d=(a-b);
    y=d/2;
    printf("result for x is %.2lf\n",x);
    printf("result for y is %.2lf\n",y);

    return 0;
}
