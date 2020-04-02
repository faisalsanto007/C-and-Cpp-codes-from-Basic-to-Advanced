#include <stdio.h>

int main()
{
    int aa[100]={22,44,23,11,34},i,j,top;

    top=4;
    printf("Stack: ");
    for(i=0;i<=top;i++)
        printf("%d ",aa[i]);
    printf("\n");
    while(1)
    {
        printf("Enter \n1 for push\n2 for pop\n3 for exit\n");
        scanf("%d",&j);

        if(j==1)
        {
            top=top+1;
            if(top<100)
            {
                printf("Enter element: ");
                scanf("%d",&aa[top]);
                    printf("Stack: ");
                for(i=0;i<=top;i++)
                    printf("%d ",aa[i]);
                printf("\n");
            }
            else
            {
                printf("Stack overflow.\n");

            }
        }
        else if(j==2)
        {
            top=top-1;
            if(top>=0)
            {
                printf("Stack: ");
                for(i=0;i<=top;i++)
                    printf("%d ",aa[i]);
                printf("\n");
            }
            else
            {
                printf("Stack underflow.\n");
            }
        }
        else
        {
            break;
        }
    }
    return 0;
}

