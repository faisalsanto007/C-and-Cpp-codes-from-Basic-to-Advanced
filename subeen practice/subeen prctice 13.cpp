#include<stdio.h>
int main()

{
    double farenhite,celsius;
    printf("enter the temperature in celsius :");
    scanf(" %lf", &celsius);
    farenhite=((celsius*9)/5)+32;
    printf("the temperature in farenhite is %.2lf\n",farenhite);

    return 0;
}
