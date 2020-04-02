#include<stdio.h>
int main()

{
    // (test) ? (truecode) : (falsecode)
    char lastname[20];
    printf("enter your last name \n");
    scanf(" %s", lastname);

    (lastname[0] < 'm' ) ? (printf("blue team \n")) : (printf("red team \n")) ;


    return 0;
}
