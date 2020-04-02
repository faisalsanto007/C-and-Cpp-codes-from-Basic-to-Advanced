#include<stdio.h>
int main()

{
    char ch;
    printf("enter a character :");
    scanf(" %c",&ch);
    if(ch=='a' ||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u')
        printf("\nthe character is a vowel");
    else
        printf("\nthe character is a consonant");
    return 0;
}
