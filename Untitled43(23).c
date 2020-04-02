#include<stdio.h>
int main()

{
    int friends;
    printf("enter your friend number :");
    scanf(" %d", &friends);

    printf("i have %d friend%s",friends, (friends!= 1) ? "s" : "" );//it is a short hand if else statement.....
                                         // if friend is not equal to 1 than add 's' otherwisw not....

    return 0;
}
