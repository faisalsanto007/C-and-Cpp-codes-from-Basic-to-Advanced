#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()

{
    int year1;
    int year2;
    int age;

    printf("enter a year\n");
    scanf(" %d", &year1);

    printf("enter a year\n");
    scanf(" %d", &year2);

    age = year1 - year2;
    printf("your age is %d\n", age);

    age = abs(age);// absolute vlue er kaj hocche negative vlu k positive kre & positive k positive rakhe......
    printf("your age is %d", age);


    return 0;
}
