#include<stdio.h>
int main()

{
    int x,y,z,p,q,r;
    printf("enter two number:\n");
    scanf("%d %d",&x,&y);
    if(x>0 && y>0){
        printf("First Quadrant\n");
    }

    else if(x>0 && y<0){
        printf("Fourth Quadrant\n");
    }

    else if(x<0 && y>0){
        printf("Second Quadrant\n");
    }

    else if(x<0 && y<0){///ekhane shudhu else likle o  hobe
        printf("Third Quadrant\n");
    }

    return 0;
}
