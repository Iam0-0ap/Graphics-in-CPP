#include<iostream>
#include<graphics.h>
#include<math.h>
#include<dos.h>
#include<direct.h>
using namespace std;

int main()
{
 int gd = DETECT, gm, x1,y1,x2,y2,lx,ly,dy,dx,pk,k;
 initgraph(&gd,&gm,"");
 initwindow(1024, 720);
 cout<<" BRESHENHAM'S LINE DRAWING ALGORITHM"<<endl;
 cout<<"Enter the values of x1 and y1"<<endl;
 cin>>x1>>y1;
 cout<<"Enter the values of x2 and y2"<<endl;
 cin>>x2>>y2;
 dx=abs(x2-x1);
 dy=abs(y2-y1);

    if(x2>x1)
        {
            lx=1;
        }
    else
        {
            lx=-1;
        }
    if(y2>y1)
        {
            ly=1;
        }
    else
        {
            ly= -1;
        }

putpixel(x1,y1,15);

if(dx>dy)
    {
    pk=2*dy-dx;
    for(k=0; k<dx; k++)
    {
        if(pk<0)
            {
                x1=x1+lx;
                y1=y1;
                pk=pk+2*dy;
            }
        else
            {
                x1=x1+lx;
                y1=y1+ly;
                pk=pk+ 2*dy - 2*dx;
            }
delay(1);
putpixel(x1,y1,15);

    }
}
else {
        pk=2*dx-dy;
        for(k=0 ; k<dy; k++)
        {
            if(pk<0)
                {
                    x1=x1;
                    y1=y1+ly;
                    pk=pk+2*dx;
                }
            else
                {
                    x1=x1+lx;
                    y1=y1+ly;
                    pk=pk+2*dx - 2*dy;
            }
delay(1);
putpixel(x1,y1, 14 );

}}
getch();
closegraph ();
return 0;
}

