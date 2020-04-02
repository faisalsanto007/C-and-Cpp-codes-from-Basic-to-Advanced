#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()

{
    int i;
    int meatballs[4] = {7,9,43,21}; /*int & float arrays are different than character arrays bcoz they dont have char and 0
     at the end......number arrays er moddhe kono 0 thakbe na.....0 is just for string 7 char arrays*/
    for(i=0 ; i<4 ; i++ ){
        printf(" element %d : %d \n", i, meatballs[i]);
    }





    return 0;
}
