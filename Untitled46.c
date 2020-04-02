#include<stdio.h>
int main()

{
    int a= 5, b= 10, answer;
    // add 1 in this line
    answer = ++a * b;
    printf("Answer is %d \n", answer);

    a= 5, b= 10, answer = 0 ;
    answer = a++ * b;
    //add 1 in this line
    printf("Answer is %d \n", answer);

    return 0;
}
