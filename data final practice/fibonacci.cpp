#include<stdio.h>

int a[1000];
int recursive(int i)
{
    if(i<=1)
        return a[i];
    a[i]=recursive(i-1)+recursive(i-2);
    return a[i];
}

int main()
{
    int i,j,k,l;
    a[0]=0;
    a[1]=1;
    while(1)
    {
        printf("Enter   1 for recursive method\n\t2 for non recursive method\n\t3 for exit\n");
        scanf(" %d",&i);

        if(i==1)
        {
            printf("enter term number: ");
            scanf("%d",&j);
            k=recursive(j);
            printf("the term: %d\n",k);
        }

        else if(i==2)
        {
            printf("enter term number: ");
            scanf("%d",&j);
            if(j<2)
            {
                printf("the term: %d\n",a[j]);
            }
            else
            {
                for(k=2;k<=j;k++)
                    a[k]=a[k-1]+a[k-2];
                    printf("the term: %d\n",a[j]);
            }
        }

        else
            break;
    }
}
