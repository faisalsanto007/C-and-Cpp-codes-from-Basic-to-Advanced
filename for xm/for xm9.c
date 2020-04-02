#include<stdio.h>
int main()

{
    int i=0, x=0;
    do{
        if(i%10==0){
            x++;
            printf("%d ",x);
        }++i;
    }while(i<50);
    printf("\n x= %d", x);
    return 0;
}
