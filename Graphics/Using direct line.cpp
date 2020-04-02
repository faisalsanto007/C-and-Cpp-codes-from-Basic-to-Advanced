#include<graphics.h>
#include<stdio.h>


int main()
{

   int gd = DETECT, gm;
   int x,x1,y,y1,dx,dy,m,c;
   initgraph(&gd, &gm, "");



printf("\n\n Enter X:");
     scanf("%d",&x);
        printf("\n\n Enter Y:");
     scanf("%d",&y);
        printf("\n\n Enter X1:");
     scanf("%d",&x1);
        printf("\n\n Enter Y1:");
     scanf("%d",&y1);
   dy=y1-y;
   dx=x1-x;
   m=dy/dx;
   c=y-(m*x);
   if(m<=1)
      {
       for(;x<=x1;x++)
             {
              y=(m*x)+c;
               putpixel(x,y,1);
              }
       }
   else
      {
       for(;y<=y1;y++)
               {
                x=(y-c)/m;
                putpixel(x,y,1);
                }
       }
  getch();
  }
