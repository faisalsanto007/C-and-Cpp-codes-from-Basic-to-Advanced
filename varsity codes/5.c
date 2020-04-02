#include<stdio.h>
int main()

{
    int x, y;
    printf(" enter the value of x:");
    scanf(" %d", &x);
    if(x >= 0){
        if(x > 0){
                y = x + 5;
        printf("x + 5 = %d\n", y);
        }
    }
else{
    y = x - 10;
    printf("x - 10 = %d", y);
}


return 0;
}
