#include<stdio.h>
int main()

{
    double a1,a2,b1,b2,c1,c2,x,y;
    printf("enter digits :");
    scanf(" %lf %lf %lf %lf %lf %lf",&a1,&a2,&b1,&b2,&c1,&c2);
    x=(b2*c1-b1*c2)/(a1*b2-a2*b1);
    y=(a1*c2-a2*c1)/(a1*b2-a2*b1);
    printf(" result for x is %.2lf\n",x);
    printf(" result for y is %.2lf\n",y);

    return 0;
}
