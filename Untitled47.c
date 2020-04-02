#include<stdio.h>
int main()

{
    char BestTechnitian;
    printf("are you the best technitian in the world? (y/n)  \n ");
    scanf(" %c", &BestTechnitian);

    char MasterMind;
    printf("are you the best master mind in the world? (y/n)  \n ");
    scanf(" %c", &MasterMind);

    if( BestTechnitian== 'y'  && MasterMind== 'y' ){
        printf("congratulation sir, you are the best in the world! :-D \n");
    }else{
    printf("you are a horse shit, just get lost \n");
    }

    return 0;
}
