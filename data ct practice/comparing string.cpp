#include <stdio.h>
#include <string.h>

int str_com(char a[100],char b[100])
{
    int i=0,j=0,k=0,l;

        while(a[i]!='\0')       /// define length of string
    {
       i++;
    }
        while(b[j]!='\0')       /// define length of string
    {
       j++;
    }

    if(i==j)
    {
        for(l=0;l<i;l++)
        {
            if(a[l]==b[l])
                k++;
        }
        if(k==i)
            return 1;
        else
            return 0;
    }
    else
       return 0;
}

int main()
{
    int i;
    char s2[100],s1[100];

    printf("Enter string S1 :");
    gets(s1);
    printf("Enter string S2 :");
    gets(s2);

    if( i=str_com(s1,s2))
        printf("S1 and S2 are same string.\n");
    else
        printf("S1 and s2 are not same string.\n");

    return 0;
}


