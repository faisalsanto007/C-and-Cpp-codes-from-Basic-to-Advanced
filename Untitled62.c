#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int main()

{
    float beef1;
    float beef2;
    float beef3;

    printf("enter 3 values of beef\n");
    scanf(" %f\n %f\n %f", &beef1, &beef2, &beef3);

    printf("beef1 is %.2f \n", floor(beef1) );
    printf("beef1 is %.2f \n", ceil(beef1) );

    printf("beef2 is %.2f \n", floor(beef2) );
    printf("beef2 is %.2f \n", ceil(beef2) );

    printf("beef3 is %.2f \n", ceil(beef3) );
    printf("beef3 is %.2f \n", floor(beef3) );


    return 0;
}
