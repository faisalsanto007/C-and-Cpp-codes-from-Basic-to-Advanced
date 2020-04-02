#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()

{
    char ham[100] = "hey,";

    strcat(ham, "faisal the great");
    strcat(ham, " you");
    strcat(ham, " are");
    strcat(ham, " the");
    strcat(ham, " BEST");
    strcat(ham, "!");
    printf("%s\n", ham);


    strcpy(ham, "thats true");
    printf("%s\n", ham);


    return 0;
}
