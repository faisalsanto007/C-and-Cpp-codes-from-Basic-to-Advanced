#include <stdio.h>
#include <string.h>

void str_rvs(char a[100])
{
    int i=0,j,k;
    char ch;
    while(a[i]!='\0')
    {
       i++;
    }
    i--;
    for(j=0,k=i;j<=i/2;j++,k--)
        {
            ch=a[j];
            a[j]=a[k];
            a[k]=ch;
        }
}

int main()
{
    char s1[100];

    printf("Enter string :");
    gets(s1);
    str_rvs(s1);

    printf("String reverse :");
    puts(s1);
    return 0;
}

