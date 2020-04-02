#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int main()

{
    char movie [20];
    char * pMovie = movie; //when setting a pointers equal to array dont use that '&' percent......

    puts("enter the name of your favourite movie :");
    fgets(pMovie, 20, stdin); //the job of "fgets" is it takes the input from the keyboard and if entered more than certain amounts it just cuts it off......
    puts(pMovie);




    return 0;
}
