#include<stdio.h>
int main()

{
    int a, b, c, d, e, f, g;
    printf(" enter the number:");
    scanf(" %d", &a);

    b = a/(24*3600);
    c = a%(24*3600);
    d = c/3600;
    e = c%3600;
    f = e/60;
    g = f%60;

    printf("day= %d \t hour= %d \t minute= %d \t second=%d", b, d, f, g);



    return 0;
}
