#include<stdio.h>
int main()

{
    int age;
    char gender;

    printf("how old are you? \n");
    scanf(" %d", &age);

    printf("what is your gender? (m/f) \n");
    scanf(" %c", &gender);

    if(age >= 18){//ekta if er vitore jodi arekts if thake tar means 1st IF true hoile 2nd IF e dhukbe.......
        printf("you may enter this website ");
    }else{
    printf("sorry, nothing to see here ");
    }
    if(gender == 'm'){
        printf("dude !");
    }if(gender== 'f'){
    printf("my lady\n");
    }
    else{
    printf("hijra !");
    }

    return 0;
}
