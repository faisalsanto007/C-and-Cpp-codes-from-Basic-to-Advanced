#include<stdio.h>
int main()

{
    int i, s=0;
    int n;

    printf("enter the n'th number:");
    scanf(" %d", &n);

        for(i=1 ; i<=n ; i+=2){
            s = s+i;
        }
        printf("sum= %d",s);






    return 0;
}
