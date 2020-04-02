#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()

{
   //pointers are important bcoz by using it we can build awesome application....
    int tuna = 19; //pointer is a special type of variable which stores memory address....
    printf("Address \t name \t value \n");

    int * pTuna = &tuna; //this is a multiplication sign
    printf("%p \t %s \t %d \n", pTuna,"tuna",tuna); //pointer is equal to variables memory address
    printf("%p \t %s \t %p \n", &pTuna,"pTuna",pTuna);

    printf("\n*pTuna: %d\n",*pTuna);// '*' = d references to pointers "tuna".......   ".."can vary

    *pTuna = 71;
    printf("\n*pTuna: %d\n", *pTuna);//'*' works is it generally goes to that variable and get the value of it....
    printf("\ntuna: %d", tuna);




    return 0;
}
