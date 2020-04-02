#include <stdio.h>
int main (void)
{
    int a, b, c=9;
    printf ("enter 1st number:\n");
    scanf ("%ld", &a);
    printf ("enter the 2nd number:\n\n\n");
    scanf ("%ld", &b);
    printf ("sum= %ld", a*b*c);

    return 0;
}
