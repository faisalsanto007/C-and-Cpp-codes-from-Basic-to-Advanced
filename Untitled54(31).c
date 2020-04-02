#include<stdio.h>
int main()

{
    //switch statement is same as else if statement

    char grade;
    printf("enter your grade \n");
    scanf(" %c", &grade);

    switch(grade){

    case 'a' : printf("very nice,little man \n");
    break;
    case 'b' : printf("not that good \n");
    break;
    case 'c' : printf("i think you didnt study \n");
    break;
    case 'd' : printf("thats a shame! \n");
    break;
    case 'f' : printf("you are embarassing me.  \n");
    break;
    default : printf("that doesnt make any sense! \n");
    }


    return 0;
}
