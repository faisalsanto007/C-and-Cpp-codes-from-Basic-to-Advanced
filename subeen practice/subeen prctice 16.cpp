#include<stdio.h>
int main()

{
    int a,b,x,t,lcd,gcd;
    printf("enter two numbers :");
    scanf(" %d %d",&a,&b);
    x=a*b;
    if(a==0)
        gcd=a;
    else if(b==0)
        gcd=b;
    else{
        while(b!=0){
            t=b;
            b=a%b;
            a=t;
        }
        gcd=a;
    }
    lcd=x/gcd;
    printf("LCD is %d",lcd);

    return 0;
}
