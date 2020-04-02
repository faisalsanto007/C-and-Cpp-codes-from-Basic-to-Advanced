#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()

{
    int i;
    int meatballs[5] = {7, 9, 43, 21, 3};
    printf("Element \t Address \t value \n");


    for(i=0 ; i<5 ; i++){
        printf("meatballs[%d] \t %p \t %d \n", i, &meatballs[i], meatballs[i]);
    }

    //array names are just pointers to the first element
    printf("\nmeatballs \t\t %p \n", meatballs);

    //eikhnae arekta comment hobe.....derefernce er banan er jnno
    printf("\nmeatballs \t\t %d \n", *meatballs);
    printf("\n*(meatballs+2) \t\t %d \n", *(meatballs+2));




    return 0;
}
