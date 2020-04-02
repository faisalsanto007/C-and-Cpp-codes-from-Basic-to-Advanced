#include<stdio.h>
int main()

{
   float Toatl = 0;
   float ScoreEntered = 0;
   float NumberOfTests = 0;
   float Average = 0;

   printf("press 0 when complete. \n\n");

   do{
    printf("tests%.0f  average%.2f \n", NumberOfTests, Average);
    printf("\nenter test score");
    scanf(" %f", &ScoreEntered);
    Toatl += ScoreEntered;
    NumberOfTests++;
    Average = Toatl / NumberOfTests;
   }
    while(ScoreEntered != 0);

   return 0;
}
