#include<stdio.h>
#include<ctype.h>
int main()

{
    char pass[10] = "$ant0$ucks", input[10];
    int i,j = 1;

    printf("Enter Your Password\n");
    for(i=0;i<10;i++);
    scanf(" %c\n", &input[i]);

    for(i=0;i<10;i++){
        if(input[i]==pass[i])
            j++;
    }
    if(j==10){
        printf("password ok\n");
    }else{
    printf("your password sucks\n");
    }


    return 0;
}
