#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()

{
    int i;
    int diceroll;

    for(i=0 ; i<20 ; i++){
        diceroll = ( rand()%6 ) + 1;
        printf(" %d \n", diceroll);
    }





    return 0;
}

