#include<iostream>
#include <stdlib.h>
#include<graphics.h>
#include<math.h>
using namespace std;

void draw(int a[2][5])
{
    int i=0;
    for(i=0;i<4;i++)
        {
            line(a[0][i],a[1][i],a[0][i+1],a[1][i+1]);
        }
}

void translate(int a[2][5])
{
    int i;
    int tx,ty;
    cout<<"Enter the translation co ordinates:"<<endl;
    cin>>tx>>ty;

    for(i=0;i<5;i++)
        {
            a[0][i]=a[0][i]+tx;
            a[1][i]=a[1][i]+ty;

        }
}

void scale(int a[2][5])
{
    int i;
    int sx,sy;
    cout<<"Enter the scaling co ordinates:"<<endl;
    cin>>sx>>sy;
    for(i=0;i<5;i++)
        {
            a[0][i]=a[0][i]*sx;
            a[1][i]=a[1][i]*sy;
        }
}

void rotate(int a[2][5])
{
    int temp1, temp2;
    float angle;
    cout<<"Enter the rotating angle:"<<endl;
    cin>>angle;
    for(int i=0;i<5;i++)
        {
            temp1=a[0][i];
            temp2=a[1][i];
            a[0][i]=temp1*cos(angle)-temp2*sin(angle);
            a[1][i]=temp1*sin(angle)+temp2*cos(angle);
        }
}



int main()
{
 int a[2][5], gd = DETECT, gm;
 initgraph(&gd,&gm, "");
 initwindow(1920, 1080);
 cout<<"Enter the pixel positions for the line"<<endl;
 for(int i=0;i<5;i++)
{
   cin>>a[0][i]>>a[1][i];
}

 draw(a);
 translate(a);
 scale(a);
 translate(a);
 draw(a);

getch();
closegraph();
return 0;
}
