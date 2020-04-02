#include<stdio.h>
int main()

{
   int a,b,ad,s,m,d;
   printf(" enter two numbers:\n");
   scanf(" %d %d", &a, &b);
   ad=a+b;
   s=a-b;
   m=a*b;
   d=a/b;
   printf("addition= %d\n", ad);
   printf("subtractor= %d\n", s);
   printf("multiplication= %d\n", m);
   printf("division= %d", d);
   return 0;
}
