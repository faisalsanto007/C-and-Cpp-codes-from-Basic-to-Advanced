#include<stdio.h>
int main()

{
    int a=0;
    for(a=100;a<=200;a++)
        if(a%3==0 && a%5==0)
            printf(" %d",a);

    return 0;
}
