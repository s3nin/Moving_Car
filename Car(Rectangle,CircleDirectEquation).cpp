#include <graphics.h>
#include <iostream>
#include <conio.h>
#include <windows.h>

#include <stdio.h>

//driver code
int main()
{
    // gm is Graphics mode which is
    // a computer display mode that
    // generates image using pixels.
    // DETECT is a macro defined in
    // "graphics.h" header file

    int gd = DETECT, gm;

    // initgraph initializes the
    // graphics system by loading a
    // graphics driver from disk
    initgraph(&gd, &gm,"");

    // Fill the background with white color
    setbkcolor(WHITE);
    int x;
    for(x=0;x<=560;x+=10)
    {
        cleardevice();

         // Fill the background with sky blue color above the road and grey color under the road
        setfillstyle(SOLID_FILL, LIGHTCYAN);
        bar(0, 0, getmaxx(), 220); // Fill sky blue color above the road//Draw a sun

        setfillstyle(SOLID_FILL, BLACK); // Using BROWN color
        bar(0, 220, getmaxx(), 275);

        setfillstyle(SOLID_FILL, GREEN); // Using BROWN color
        bar(0, 275, getmaxx(), getmaxy());

        // Drawing a rectangle representing a building in the background
        setfillstyle(SOLID_FILL, LIGHTGRAY); // Set building color
        bar(100, 70, 300, 220); // Draw building rectangle

        setfillstyle(SOLID_FILL, RED); // Set door color
        bar(230, 130, 175, 220); // Draw door rectangle

        //Draw a sun
        setcolor(BLACK);
        // Filling the circles with red color
        int redShade = COLOR(255, 20, 20);
        setfillstyle(SOLID_FILL,redShade);
        circle(450, 50, 30);

        //fillCircle(450, 50, 30, redShade);
        floodfill(450,50,BLACK);

        line(0, 220 , getmaxx(), 220);

        setcolor(BLACK);
        setfillstyle(SOLID_FILL,YELLOW);
        rectangle(50+x,100,150+x,200);
        floodfill(51 + x, 101, BLACK);

        rectangle(150+x,150,200+x,200);
        floodfill(151 + x, 151, BLACK);

        setcolor(BLACK);
        setfillstyle(SOLID_FILL,BLACKONWHITE);
        circle(75+x,210,10);
        floodfill(75+x, 210, BLACK);
        circle(175+x,210,10);
        floodfill(175+x, 210, BLACK);


        delay(100);
    }
    // ei porjonto code blocks
    getch();

    // closegraph function closes the
    // graphics mode and deallocates
    // all memory allocated by
    // graphics system .
    closegraph();

    return 0;
}

