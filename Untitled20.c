#include<stdio.h>
int main()

{
char name[16] = ("faisal bin aziz");
printf("my name is %s \n", name);

name[7] = 'z';
printf("my name is %s \n", name);

char food[8] = ("biriani");
printf("my favourite food is %s \n", food);

char color[14] = ("black & white");
printf("my favourite color is %s \n", color);

strcpy(food, "chicken fry");
printf("my favourite food is %s \n", food);
return 0;
}
