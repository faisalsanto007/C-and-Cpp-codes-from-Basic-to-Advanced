#include<stdio.h>
int main()

{
    int a,b,x,gcd;
    printf("enter two numbers :");
    scanf(" %d %d", &a,&b);
    if(a>b){
        x=b;
    }else{
        x=a;
    }
    for(;x>=1;x--){
        if(b%x==0 && a%x==0){
            gcd=x;
            break;
        }
    }
    printf("GCD is %d",gcd);
}
