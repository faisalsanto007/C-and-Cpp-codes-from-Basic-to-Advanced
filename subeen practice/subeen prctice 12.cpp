#include<stdio.h>
int main()

{
    double farenhite,celsius;
    printf("enter the temperature in farenhite :");
    scanf(" %lf", &farenhite);
    celsius=((farenhite-32)*5)/9;
    printf("the temperature in celsius is %.2lf\n",celsius);

    return 0;
}
