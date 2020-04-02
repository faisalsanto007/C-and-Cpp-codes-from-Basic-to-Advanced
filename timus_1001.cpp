#include<stdio.h>
#include<bits/stdc++.h>
int main()

{
    int a[100], i, j, n,c;
    double b;
    printf("enter number: \n");
    scanf("%d", &n);
    printf("enter numbers: \n");
    for(i=1;i<=n;i++)
        scanf(" %d", &a[i]);

    printf("square roots are given below: \n");
    for(j=n;j>=1;j--){
        b=a[j];
        b = sqrt(b);
        printf(" %.4lf\n", b);
    }

    return 0;
}
