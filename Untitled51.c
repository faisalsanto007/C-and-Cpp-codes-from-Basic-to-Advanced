#include<stdio.h>
int main()

{
   int columns;
   int rows;

   for(rows = 1;rows <=6; rows++){

        for(columns=1;columns<=4;columns++){
            printf(" %d", columns);
        }
    printf("\n");
   }

   return 0;
}
