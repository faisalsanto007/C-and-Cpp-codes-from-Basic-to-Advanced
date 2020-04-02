#include<stdio.h>
int main()
{
    int a,b,sum,i;
    while(1)
    {
    printf("enter two integer values: ");
    scanf("%d %d" ,&a,&b);
    sum=a+b;
    printf("sum= %d\na=%d\nb=%d",sum,a,b);
    }
    printf("i=%d, End", i);
    return 0;
}
