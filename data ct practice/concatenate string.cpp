#include <stdio.h>
#include <string.h>

void str_con(char a[100],char b[100])
{
    int i=0,j=0;
    while(1)
    {
        if(a[i]=='\0')
        {
            while(b[j]!='\0')
            {

                a[i]=b[j];
                i++;
                j++;

            }
            a[i]='\0';
            break;
        }
        i++;
    }
}

int main()
{
    char s2[200],s1[200];

    printf("Enter string S1 :");
    gets(s1);
    printf("Enter string S2 :");
    gets(s2);
    str_con(s1,s2);

    printf("String S1 :");
    puts(s1);
    return 0;
}

