#include<stdio.h>
#include<string.h>
int main()

{
    int i=0;
    char a[100];

    printf("enter a string :");
    gets(a);

    while(a[i]!='\0')///'\0' means null terminator....used to signify the end of a string
        i++;

    printf("the length of string %d", i);

    return 0;
}
