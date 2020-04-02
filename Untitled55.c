#include<stdio.h>
#include<ctype.h>
int main()

{
    int tuna = '$';

    if( isalpha(tuna) ){
     printf(" %c is a letter \n", tuna);
    }
else{

    if( isdigit(tuna) ){
        printf(" %c is a number \n", tuna);
    }else{
    printf(" %c is a........OMG WHAT is that! \n", tuna);
    }


}


    return 0;
}
