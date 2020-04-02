#include<stdio.h>
#include<ctype.h>
int main()

{
    int tuna = '9';

    if( isalpha(tuna) ){

    if( isupper(tuna) )
{
    printf(" %c is an upper case letter \n", tuna);
}else{
printf(" %c is a lower case letter \n", tuna);
}
    }
else{

    if( isdigit(tuna) ){
        printf(" %c is a number \n", tuna);
    }else{
    printf(" %c is a OMG WHAT is that! \n", tuna);
    }


}


    return 0;
}
