#include <graphics.h>
#include<iostream>
#include<math.h>
#include<dos.h>
using namespace std;

int WIDTH = 1920, HEIGHT = 1080;

int X_CEN = WIDTH / 2, Y_CEN = HEIGHT / 2;

int main()
{
    int i, r, colour;
    int x1, y1, x2, y2, x3, y3, x4, y4, radius;

    radius = 20;
    initwindow(WIDTH, HEIGHT);

    for(;;)
            {
    for(i = 1, r = 0; i < 25; i++, r += 4)
        {
        if(i <= 15)
            colour = i;
        if(i > 15)
            colour--;
            setcolor(colour);

        // For the first quadrant
        x1 = X_CEN / 2, y1 = Y_CEN / 2;
        circle(x1, y1 - radius - r, radius + r);   // upper circle
        circle(x1, y1 + radius +  r, radius + r);   // lower circle
        circle(x1 - radius - r, y1, radius + r);   // left circle
        circle(x1 + radius + r, y1, radius + r);   // right circle

        // For the second quadrant
        x2 = WIDTH - X_CEN / 2, y2 = Y_CEN / 2;
        circle(x2, y2 - radius - r, radius + r);   // upper circle
        circle(x2, y2 + radius +  r, radius + r);   // lower circle
        circle(x2 - radius - r, y2, radius + r);   // left circle
        circle(x2 + radius + r, y2, radius + r);   // right circle


        // For the third quadrant
        x3 = WIDTH - X_CEN / 2, y3 = HEIGHT - Y_CEN / 2;
        circle(x3, y3 - radius - r, radius + r);   // upper circle
        circle(x3, y3 + radius +  r, radius + r);   // lower circle
        circle(x3 - radius - r, y3, radius + r);   // left circle
        circle(x3 + radius + r, y3, radius + r);   // right circle

        // For the fourth quadrant
        x4 = X_CEN / 2, y4 = HEIGHT - Y_CEN / 2;
        circle(x4, y4 - radius - r, radius + r);   // upper circle
        circle(x4, y4 + radius +  r, radius + r);   // lower circle
        circle(x4 - radius - r, y4, radius + r);   // left circle
        circle(x4 + radius + r, y4, radius + r);   // right circle

            for (int i = 0; i <= 1920; i = i + 10)
            {


            rectangle(i, Y_CEN, 100 + i, Y_CEN + 20);      // left to right, center
            rectangle(X_CEN, i, X_CEN + 20, 100 + i);      // top to bottom, center
            rectangle(i, 0, 100 + i, 20);                  // left to right, top
            rectangle(0, 0 + i, 20, 100 + i);              // top to bottom, left
            rectangle(WIDTH - 20, i, WIDTH, 100 + i);      // top to bottom, right

                }


        }

        for (r; r >= 0; r -= 4)
            {
            setcolor(BLACK);
            circle(x1, y1 - radius - r, radius + r);   // upper circle
            circle(x1, y1 + radius +  r, radius + r);   // lower circle
            circle(x1 - radius - r, y1, radius + r);   // left circle
            circle(x1 + radius + r, y1, radius + r);   // right circle

            // For the second quadrant
            circle(x2, y2 - radius - r, radius + r);   // upper circle
            circle(x2, y2 + radius +  r, radius + r);   // lower circle
            circle(x2 - radius - r, y2, radius + r);   // left circle
            circle(x2 + radius + r, y2, radius + r);   // right circle


            // For the third quadrant
            circle(x3, y3 - radius - r, radius + r);   // upper circle
            circle(x3, y3 + radius +  r, radius + r);   // lower circle
            circle(x3 - radius - r, y3, radius + r);   // left circle
            circle(x3 + radius + r, y3, radius + r);   // right circle

            // For the fourth quadrant
            circle(x4, y4 - radius - r, radius + r);   // upper circle
            circle(x4, y4 + radius +  r, radius + r);   // lower circle
            circle(x4 - radius - r, y4, radius + r);   // left circle
            circle(x4 + radius + r, y4, radius + r);   // right circle


            }
        }
    closegraph();
    return 0;
}





