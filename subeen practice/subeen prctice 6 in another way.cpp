#include<stdio.h>
int main()

{
    int a=0,b=0,c=0;
    for(a=1;a<=3;a++){
        for(b=1;b<=3;b++){
            for(c=1;c<=3;c++){
                if(b!=a && c!=a && c!=b){
                    printf("%d %d %d\n",a,b,c);
                }
            }
        }
    }
    return 0;
}
