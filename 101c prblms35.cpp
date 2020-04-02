#include<stdio.h>
int main()

{
    long int i,j,sum=0;
    for(i=5;i<=25;i++){
        j=i*i;
        printf(" + %ld",j);
        sum=sum+j;
    }
    printf("= %ld",sum);

    return 0;

}
