#include <graphics.h>
#include <stdio.h>

// Function to draw moving car
void draw_moving_car(void) {

    int i ,gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    for(;;)
{
    for (i = 0; i <= 420; i = i + 10) {

        // Set color of car as red
        setcolor(RED);

        // Thease lines for bonnet and
        // body of car
        line(0 + i, 300, 210 + i, 300);
        line(50 + i, 300, 75 + i, 270);
        line(75 + i, 270, 150 + i, 270);
        line(150 + i, 270, 165 + i, 300);
        line(0 + i, 300, 0 + i, 330);
        line(210 + i, 300, 210 + i, 330);

        // For left wheel of car
        circle(65 + i, 330, 15);
        circle(65 + i, 330, 2);

        // For right wheel of car
        circle(145 + i, 330, 15);
        circle(145 + i, 330, 2);

        // Line left of left wheel
        line(0 + i, 330, 50 + i, 330);

        // Line middle of both wheel
        line(80 + i, 330, 130 + i, 330);

        // Line right of right wheel
        line(210 + i, 330, 160 + i, 330);

        delay(30);

        // To erase previous drawn car
        // use cleardevice() function
        cleardevice();
    }

}    getch();

    closegraph();
}

// Driver code
int main()
{
    draw_moving_car();

    return 0;
}
