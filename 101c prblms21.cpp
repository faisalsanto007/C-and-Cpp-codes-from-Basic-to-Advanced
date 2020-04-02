#include<stdio.h>
int main()

{
    int a,b,c,d,e;
    printf("enter three numbers:\n ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        d=a;
        printf("largest number is :\n%d",d);
    }
    else if(b>a && b>c){
        d=b;
        printf("largest number is :\n%d",d);
    }
    else if(c>a && c>b){ ///ekhane shudhu else dileo same result ashbe
        d=c;
        printf("largest number is :\n%d",d);
    }

    return 0;
}
