#include<stdio.h>
int main()

{
    char answer;
    printf("do you like bagels? (y/n) \n");
    scanf(" %c", &answer);

    if( answer== 'y' || answer== 'n' ){
        printf("good job, you didnt mess anything up \n");
    }else{
    printf("keyboard much? \n");
    }

    return 0;
}
