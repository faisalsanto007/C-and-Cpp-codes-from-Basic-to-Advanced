#include <stdio.h>

void qinsert(char qu[],int n,int &fr,int &rr,char iteam)
{
    if((fr==0&&rr==n-1)||fr==rr+1)
    {
        printf("Overflow\n");
        return;
    }

    if(fr==-1)
    {
        fr=0;
        rr=0;
    }
    else if(rr==n-1)
    {
        rr=0;
    }
    else
    {
        rr=rr+1;
    }
    qu[rr]=iteam;
}

void qdelete(char qu[],int n,int &fr,int &rr,char iteam)
{
    if(fr==-1)
    {
        printf("Underflow\n");
        return;
    }
    qu[fr]='_';

    if(fr==rr)
    {
        fr=-1;
        rr=-1;
    }
    else if(fr==n)
    {
        fr=0;
    }
    else
        fr=fr+1;
}

int main()
{
    int n,fr,rr,i,j,k;
    char qu[1000],iteam;

    printf("Enter N : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        qu[i]='_';

    fr=-1,rr=-1;

    while(1)
    {
        printf("Enter   1 for insert\n\t2 for delete\n\t3 for exit\n");
        scanf("%d",&i);

        if(i==1)
        {
            getchar();
            printf("Enter iteam: ");
            scanf("%c",&iteam);

            qinsert(qu,n,fr,rr,iteam);

            printf("Queue: ");
            for(i=0;i<n;i++)
                printf("%c",qu[i]);
            printf("\n");
        }
        else if(i==2)
        {
            qdelete(qu,n,fr,rr,iteam);

            printf("Queue: ");
            for(i=0;i<n;i++)
                printf("%c",qu[i]);
            printf("\n");
        }
        else if(i==3)
        {
            break;
        }
    }
    return 0;
}

