#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()

{
    int i;
    int players[5] = {58, 66, 68, 71, 87};
    int goals[5] = {26, 39, 25, 29, 31};
    int gamesPlayed[5] = {30, 30, 28, 30, 26};
    float ppg[5];//points per game
    float bestPPG = 0.0;
    int bestPlayer;

    for(i=0 ; i<5 ; i++){
        ppg[i] = (float)goals[i] / (float)gamesPlayed[i];//when we wnat to get a value in exactly in float or
     printf(" %d \t %d \t %d \t %.2f \n", players[i], goals[i], gamesPlayed[i], ppg[i]);
     if(ppg[i] > bestPPG){
        bestPPG = ppg[i];
        bestPlayer = players[i];
     }

     }                                       //integer we need to put float or integer before that value....and it is called TYPECASTING

     printf("\n the best player is %d\n", bestPlayer); // used much in spreadsheet

    return 0;
}
