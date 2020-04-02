#include<stdio.h>
int main()

{
    int a;
    int howmany;
    int maxamount = 10;

    printf("how many times do you want this loop to loop? (up to 10) ");
    scanf(" %d", &howmany);

    for(a=1; a <=maxamount; a++){
        printf(" %d \n", a);
    if(a==howmany){
    break;
    }

    }
    return 0;
}
