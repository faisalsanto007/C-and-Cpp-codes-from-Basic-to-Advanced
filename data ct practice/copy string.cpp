#include<stdio.h>
#include<string.h>

void str_copy(char a[100], char b[100])
{
    int i=0;
    while(1)
    {
        a[i]=b[i];
        if(b[i]=='\0')
            break;
        i++;
    }
}

int main()
{
    char s2[100],s1[100];

    printf("Enter string S1 :");
    gets(s1);
    printf("Enter string S2 :");
    gets(s2);
    str_copy(s1,s2);

    printf("String S1 :");
    puts(s1);
    return 0;
}
