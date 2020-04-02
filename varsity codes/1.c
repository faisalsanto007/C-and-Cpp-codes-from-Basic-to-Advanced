#include<stdio.h>
int main()

{
    char color;
    printf("enter your favourite colours first letter\n");
    scanf(" %c", &color);

    switch(color){

    case 'r' :
    case 'R' : printf("red\n");
    break;
    case 'g' :
    case 'G' : printf("green\n");
    break;
    case 'b' :
    case'B' : printf("blue\n");
    break;
    default : printf("black");

    }


    return 0;
}
