#include<stdio.h>
int main()

{
    int i,n,m=0;
    for(i=1;i<21;i++)
        for(n=1;n<11;n++){
        m=i+n;
        printf("%d*%d=%d\n",i,n,m);
    }


    return 0;

}

