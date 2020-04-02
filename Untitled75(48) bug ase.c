#include<stdio.h>
#include<stdlib.h>
int main()

{
    int i, howmany;  //'i' used as counter variable.....
    int total;
    float average = 0.0;
    int * pointsArray;

    printf("how many numbers do you want to average?\n");
    scanf(" %d", &howmany);

    pointsArray = (int *) malloc(howmany * sizeof(int));

    printf("enter them hoss! \n");

    for(i=0 ; i<howmany ; i++){
        scanf(" %d", &pointsArray);
        total += pointsArray[i];
    }

    average = (float)total / (float)howmany;
    printf("average is %.2f", average);


    return 0;
}
