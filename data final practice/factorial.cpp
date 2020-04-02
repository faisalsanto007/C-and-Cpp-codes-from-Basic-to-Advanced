#include<stdio.h>
int recursive(int n)
{
    int p;
    if(n<=1)
        return 1;
    p=n*recursive(n-1);
    return p;
}

int main()
{
    int i,j,k,l;
    while(1)
    {
        printf("Enter 1 for recursive\n\t2 for non recursive\n\t3 for exit\n");
        scanf(" %d",&i);
        if(i==1)
        {
            printf("enter number :");
            scanf(" %d",&j);
            j=recursive(j);
            printf("Factorial= %d\n",j);
    }
        else if(i==2)
        {
            printf("enter number :");
            scanf(" %d",&k);
            l=1;
            for(k;k>1;k--)
                l=l*k;
            printf("Factorial= %d\n",l);
        }
        else
            break;
    }
}
