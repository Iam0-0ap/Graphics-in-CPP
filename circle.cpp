#include <iostream>
#include<dos.h>
#include <time.h>
#include<graphics.h>
using namespace std;

void drawcircle(int x0, int y0, int radius, int color)
{
    int x = 0;
    int y = radius;
    int pk = 1- radius;

    while (x < y)
    {

putpixel(x0 + x, y0 + y, 5);
putpixel(x0 + y, y0 + x, 2);
putpixel(x0 + y, y0 - x, 4);
putpixel(x0 + x, y0 - y, 6);
putpixel(x0 - x, y0 - y, 8);
putpixel(x0 - y, y0 - x, 15);
putpixel(x0 - y, y0 + x, 11);
putpixel(x0 - x, y0 + y, 5);


if (pk < 0)
{
    x += 1;
    y=y;
    pk += 2*x + 1;
}

if (pk >= 0)
{
    x += 1;
    y -=1;
    pk += 2*(x -y) + 1;
}
    }
}

int main()
{
int gd = DETECT, gm,r,x,y,color;
initgraph(&gd,&gm,"");
x = getmaxx() / 2;
y = getmaxy() / 2;

cout<<"Enter the center co ordinates";
cin>>x>>y;
cout<<"Enter radius of circle: "<<endl;
cin>>r;

for (;;){
while(r <= y)
    {
    drawcircle(x, y, r, color);
    r=r+10;
   //delay(1);
}

while (r > 5)
{
    drawcircle(x,y, r, color);
    r=r-10;
    //delay(1);
   //cleardevice();
}
}

closegraph();
return 0;
}

