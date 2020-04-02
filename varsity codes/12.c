#include<stdio.h>
int main()

{
    int friends;
    printf("enter your friend number :");
    scanf(" %d", &friends);
if(friends != 1){
    printf("i have %d friends\n", friends);
}else{
printf("i have %d friend", friends);
}

return 0;
}
