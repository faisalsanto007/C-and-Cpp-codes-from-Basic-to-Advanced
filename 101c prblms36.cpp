#include<stdio.h>
int main()

{
    int N,i;
    while(1){
            printf("enter a number[press -1 to stop the program]: ");
            scanf(" %d",&N);
    if(N==-1){
        printf("program stops\n");
        break;
    }
    if(N>-32){
        for(i=N;i>=-32;i--)
            printf(" %d",i);
            break;
    }

    else{
        for(i=N;i<=-32;i++)
            printf(" %d",i);
            break;
    }
    }
    return 0;

}
