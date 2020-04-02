#include<stdio.h>
int main()

{
    int a, b, c;
    printf("please enter the data: ");
    scanf(" %d\t %d\t %d", &a, &b, &c);

    int s;
    s = (a+b+c)/2;
    printf("\nsum of a+b+c= %d\n", s);

    float area;
    area = sqrt( s*(s-a)*(s-b)*(s-c) );

    printf("the area of triangle is %.2f", area);


    return 0;
}
