#include<stdio.h>
#include<ctype.h>
int main()

{


    char a,b,c;
    printf("enter your alphabets \n");
    scanf(" %c\n %c\n %c", &a, &b, &c);
    printf(" %c\n %c\n %c", toupper(a), toupper(b), tolower(c));
    return 0;
}
