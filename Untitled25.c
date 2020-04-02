#include<stdio.h>
int main()

{
    int n, y, m, d, div;
    printf("enter the number\n");
    scanf("%d", &n);
    y = n/365;
    div = n%365;
    m =  div/30;
    d = div%30;
    printf("year=%d, month=%d, day=%d", y, m, d);
    return 0;
}
