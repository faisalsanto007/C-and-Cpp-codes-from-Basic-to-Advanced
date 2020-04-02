#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int main()

{
    int i, temp, swapped;
    int howmany = 10;
    int goals[howmany];

    for(i=0 ; i<howmany ; i++){
        goals[i] = ( rand()%25 )+1;
    }

    printf("original list\n");
    for(i=0 ; i<howmany ; i++){
    printf(" %d\n",goals[i]);
    }


    while(1){
        swapped = 0;

        for(i=0 ; i<howmany-1 ; i++){  //when we are gonna sort numbers we have subtract 1 for getting accurate value
                if(goals[i]>goals[i+1]){
                    int temp = goals[i];
                    goals[i] = goals[i+1];
                    goals[i+1] = temp;
                    swapped = 1; //when we swap a number it must mean that the list is not in order yet
                }
    }     //swap means SORTED...when it is sorted swap=0 otherwise swap=1,that means numbers are not sorted do loop again

    if(swapped==0){
        break;
    }

    }

    printf("\nsorted list\n");
    for(i=0 ; i<howmany ; i++){
    printf(" %d\n",goals[i]);

    }
    return 0;
}
