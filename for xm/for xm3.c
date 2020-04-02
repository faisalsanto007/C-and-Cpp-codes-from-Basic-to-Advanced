#include<stdio.h>
int main()

{
    int i = 1;
    for(;i<=100 && i>=-100;){
        printf("%d ",i);
        i*=2;
    }
    return 0;
}
