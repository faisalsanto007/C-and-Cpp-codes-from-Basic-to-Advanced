#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int main()

{
    char movie1[] ="the return of the great!\n";//the name of the array is constant.........we cant put that array in L.H.S
    char * movie2 ="best in the world";//movie1 is a constant but movie to is a 'pointer variable'

    puts(movie2);

    movie2 = "Faisal The Great";
    puts(movie2);



    return 0;
}
