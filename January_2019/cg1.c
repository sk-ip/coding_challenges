#include <stdio.h>
#include <graphics.h>

int main()
{
	int gd = DETECT, gm;
	int left = 100, top = 200, right = 400, bottom = 300;
	int left2 = 200, top2 = 100, right2 = 300, bottom2 = 400;
	int x=250,y=250,radius=40; 
    initgraph(&gd, &gm, ""); 
  
    // rectangle function 
    rectangle(left, top, right, bottom);
    rectangle(left2, top2, right2, bottom2);
    circle(x, y, radius); 
  
    getch(); 
    // closegraph function closes the graphics 
    // mode and deallocates all memory allocated 
    // by graphics system . 
    closegraph();
    return 0; 
}