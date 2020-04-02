#include<stdio.h>
int main()

{
    int a=0,b=0,c,d;
    for(a=99;a>=1;a-=2){
        b=b+a;
    }
    printf("total sum: %d\n",b);

    return 0;
}
