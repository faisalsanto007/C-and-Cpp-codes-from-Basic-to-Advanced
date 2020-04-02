#include<stdio.h>
int main()

{
    int HoursStudied;
    int KidsBeatUp;

    printf("enter your HoursStudied : ");
    scanf(" %d", &HoursStudied);

    printf("enter your KidsBeatUp : ");
    scanf(" %d", &KidsBeatUp);

    if( (HoursStudied >= 10) &&  (KidsBeatUp == 0) ){
        printf("you are a good student");
    }else{
    printf("you are such a bullshit");
    }

    return 0;
}

