#include<stdio.h>
int main()

{
    int n;
    scanf(" %d", &n);
    if(n>=80){
        printf("first");
       } else if(n>=70){
            printf("second");
        }else if(n>=60){
        printf("third");
        }
    else{
    printf("fail");
    }
    return 0;
}
