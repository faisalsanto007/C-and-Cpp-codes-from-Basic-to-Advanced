#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()

{
    int i,j,k=0,l;
    char a[100],ch;

    printf("enter a string :");
    gets(a);

    l=strlen(a);
    ch='a';

    for(i=0;i<=25;i++)
    {
        for(j=0;j<l;j++)
        {
            if(tolower(a[j])==ch)
                k++;
        }
        if(k)
        printf(" %c appears %d times\n", ch,k);
        k=0;
        ch=ch+1;
    }

    return 0;
}

