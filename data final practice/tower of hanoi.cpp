#include <stdio.h>

void tower(int n, char s1[], char s2[], char s3[])
{
    if(n==1)
    {
        printf("%s -> %s\n",s1,s3);
        return;
    }
    tower(n-1,s1,s3,s2);

    printf("%s -> %s\n",s1,s3);

    tower(n-1,s2,s1,s3);
    return;
}

int main()
{
    int i,j,k;
    char s1[]="BEG",s2[]="AUX",s3[]="END";

    printf("Enter number of disk: ");
    scanf("%d",&i);
    tower(i,s1,s2,s3);
}

