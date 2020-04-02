#include<stdio.h>
int main()

{
    int a,b,c;
    printf("enter a number: ");
    scanf("%d",&a);

    for(b=1;b<=10;b++){
            c=a*b;
        printf("%d * %d = %d",a,b,c);///ekhane c kono variable na ene o sheshe diye a*b likhleo correct ans ashbe
        printf("\n");
    }
    return 0;
}
