#include<stdio.h>
int main()

{
    int v1,v2,t1,t2,s1,s2;

    printf("enter values of v & t twice :\n");
    scanf(" %d %d\n%d %d",&v1,&t1,&v2,&t2);
    s1=2*v1*t1;
    s2=2*v2*t2;
    printf("displacement of its twice time :\n%d\n%d",s1,s2);
    return 0;
}
