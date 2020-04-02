#include<stdio.h>
int main()

{
  int day = 1;
  float amount = .01;

  while(day <= 31){
   printf("day %d \t amount$%.2f \n", day, amount);
   day++;
   amount *= 2;
  }

    return 0;
}
