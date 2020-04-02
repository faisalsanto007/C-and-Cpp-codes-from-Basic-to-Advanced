#include<stdio.h>
#include<graphics.h>
int main()
{
  int x = 100, y = 100, radius = 50;

  initwindow(1080, 720);
  setcolor(GREEN);
  while (!kbhit())
  {
    circle(x, y, radius);
    delay(20);
    setcolor(BLACK);
    circle(x, y, radius);
    x += 10;
    setcolor(GREEN);
    circle(x, y, radius);
  }

}
