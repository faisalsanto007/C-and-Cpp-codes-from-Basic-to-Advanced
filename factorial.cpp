#include<stdio.h>
int main()

{
    long n,a,b,c=1;
    printf("enter a number: ");
    scanf(" %ld",&n);
    if(n<0){
        printf("\nfactorial for negative integer cant be determined");
    }
    else{
    for(b=1;b<=n;b++){
        c=c*b;
    }
    printf("\nfactorial of %ld = %ld",n,c);
    }
    return 0;

}
