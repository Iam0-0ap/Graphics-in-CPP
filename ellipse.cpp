#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void midpointellipse(int rx, int ry, int xc, int yc)
{
    float dx, dy, p1k, p2k, x, y,x1,y1;
    x = 0;
    y = ry;

    // Initial decision parameter for region 1
    p1k = (ry * ry) - (rx * rx * ry) +(0.25 * rx * rx);
    dx = 2 * ry * ry * (x);
    dy = 2 * rx * rx * (y);

    // For region 1
    cout<<"(x1k, y1k)"<<"\t"<<"p1k"<<endl;
    while (dx < dy)
    {

        cout << x  << " , " << y  << "\t"<<"\t"<< p1k<</*"\t"<<dx<<"\t"<<dy<<"\t"<<  x+xc  << " , " << y+yc << */endl;

        //decision parameter check
        if (p1k < 0)
        {
            x++;
            dx = dx + (2 * ry * ry);
            p1k = p1k + dx + (ry * ry);
        }
        else
        {
            x++;
            y--;
            dx = dx + (2 * ry * ry);
            dy = dy - (2 * rx * rx);
            p1k = p1k + dx - dy + (ry * ry);
        }
    }

    // Decision parameter for region 2
    p2k = ((ry * ry) * ((x + 0.5) * (x + 0.5))) +
        ((rx * rx) * ((y - 1) * (y - 1))) -
          (rx * rx * ry * ry);

    // Plotting points of region 2
    cout<<endl<<endl;
    cout<<"(x2k, y2k)"<<"\t"<<"p2k"<<endl;

    while (y >= 0)
    {

        cout << x << " , " << y   << "\t"<<"\t"<< p2k<< endl;


        if (p2k > 0)
        {
            y--;
            dy = dy - (2 * rx * rx);
            p2k = p2k + (rx * rx) - dy;
        }
        else
        {
            y--;
            x++;
            dx = dx + (2 * ry * ry);
            dy = dy - (2 * rx * rx);
            p2k = p2k + dx - dy + (rx * rx);
        }
    }
}

int main()
{
// midpointellipse(8, 6, 0, 0);
midpointellipse(12, 7, 19, 10);

    return 0;
}
