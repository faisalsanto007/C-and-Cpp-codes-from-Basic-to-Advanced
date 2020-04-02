#include<stdio.h>
int main()

{
    int d,a,b,c,x1,x2,x3,x;

    printf("enter the data for a, b, c :");
    scanf(" %d %d %d", &a, &b, &c);

    d= b*b-(4*a*c);
    if(d>0){
        x1=(-b +sqrt(d))/2*a;
        x1=(-b -sqrt(d))/2*a;
        printf("x1= %d\n x2=%d", x1, x2);
    }
    else if(d==0){
        x=(-b/2*a);
        printf("x = %d", x);
    }
    else{
        printf("no real solution");    }

    return 0;
}
