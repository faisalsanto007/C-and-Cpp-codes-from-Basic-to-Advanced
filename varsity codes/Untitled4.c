#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()

{
    char pass[30];
    printf("enter your password\n");
    scanf(" %c", &pass);


    for(pass=0; pass<30; pass++){
            pass++;
    }

    if( pass=='36' && ((pass>= '65' && pass<= '90') || (pass>= '97' && pass<= '122')) && (pass>= '48' && pass<= '57')){
        printf(" your password is ok\n");
    }else{
    printf("your password is not ok\n");
    }




    return 0;
}
