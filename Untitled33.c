#include<stdio.h>
int main()

{
    float age1, age2, age3, age4, average;
    age1 = age2 = 8.0;

    printf("enter third age \n");
    scanf("%f", &age3);

    printf("enter last age \n");
    scanf("%f", &age4);

    average = (age1 + age2 + age3 + age4) /4;
    printf("the average age of the group is %.2f \n", average);
    return 0;
}
