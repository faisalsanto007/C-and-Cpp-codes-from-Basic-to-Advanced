#include<stdio.h>
int main()

{
    int i, p;
    char a[11];
    scanf("%s", a);
    for(i=0;a[i]!='\0';i++){
        p=((a[i]=='$')&&(a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z')&&(a[i]>='0'&&a[i]<='9'))?1:2;
        if(p==2)
            break;
    }
    if(p==1){
        printf("password ok\n");
    }else{
    printf("your password sucks\n");
    }


    return 0;
}
