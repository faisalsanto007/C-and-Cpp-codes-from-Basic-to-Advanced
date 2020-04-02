#include<stdio.h>
#include<string.h>
int main()

{
    char catsname[20];
    char catsfood[15];
    char sentence[30] = "";

    puts("what is the name of your cat? ");
    gets(catsname);

    puts("what does your cat eat? ");
    gets(catsfood);

    strcat(sentence, catsname );
    strcat(sentence, " loves to eat ");
    strcat(sentence, catsfood);

    puts(sentence);

    return 0;
}
