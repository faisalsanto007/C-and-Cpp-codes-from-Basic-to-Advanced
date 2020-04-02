#include<stdio.h>
#include<string.h>
#include "structure.h"
int main()

{
    //we cant put int, char, float all of it in a array.....int hat we need to use 'structure', which can contain all type of data...
    // structure is a group of variable.....individual variables are called members
    struct studentinformation faisal;
    struct studentinformation emma;

    faisal.userID = 1;//'.' is called DOT operator...its use for accesing individual element inside ur structure
    emma.userID = 2;

    puts("enter the first name of user 1");
    gets(faisal.firstname);

    puts("enter the first name of user 2");
    gets(emma.firstname);

    printf("user 1 id is %d\n", faisal.userID);
    printf("user 2 first name is %s\n", emma.firstname);

    return 0;
}
