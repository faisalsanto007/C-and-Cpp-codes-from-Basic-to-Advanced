#include<stdio.h>
int main()

{
    char myname[15];
    char crush[15];
    int number_of_babies;

    printf("what is your name? \n");
    scanf("%s", myname);

    printf("who is your lover? \n");
    scanf("%s", crush);

    printf("how many children will you have? \n");
    scanf("%d",&number_of_babies );

    printf("%s and %s love each other and they'll have %d babies. \n", myname, crush, number_of_babies );
    return 0;
}

