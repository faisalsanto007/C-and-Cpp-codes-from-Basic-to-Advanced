#include<stdio.h>
int main()

{
    int hours, rate;

    printf("enter your hours & rate\n");
    scanf(" %d\t %d", &hours, &rate);

    int gross;
    gross = hours * rate;
    printf("your total salary is %d\n", gross);



    if(gross >= 10000){
               float tax;
    tax = (float)( gross * (15/1000) );

    float net;
    net = (float)(gross - tax;);

            }
    printf("sorry buddy as we took some tax from you, your new balance is %d\n", net);
    }else{
    printf("\nalright your stands as previous %d", gross);
    }

    return 0;

}
