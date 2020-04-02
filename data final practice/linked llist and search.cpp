#include <stdlib.h>
#include <stdio.h>


struct node
{
    int x;
    struct node *next;
};

struct node *head;

void insert(int a)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->x=a;
    temp->next=head;
    head=temp;
}

void print(void)
{
    struct node *temp=head;
    printf("List is: ");
    while(temp!=NULL)
    {
        printf("%d ",temp->x);
        temp=temp->next;
    }
    printf("\n");
}

int main()
{
    int i,j,k,l,m;
    head=NULL;
    printf("How many numbers?\n");
    scanf("%d",&i);

    for(j=0;j<i;j++)
    {
        printf("The number: ");
        scanf("%d",&k);
        insert(k);
        print();
    }


    printf("Enter your search number: ");
    scanf("%d",&l);

    struct node *temp=head;
    m=1;
    while(temp!=NULL)
    {
        if(l==temp->x)
        {
            printf("Found\n");
            m=0;
            break;
        }
        temp=temp->next;
    }
    if(m)
        printf("Not found\n");
}


