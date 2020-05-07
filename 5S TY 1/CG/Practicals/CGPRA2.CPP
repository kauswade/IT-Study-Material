#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<graphics.h>
int main()
{
	int x1,y1,x2,y2,dx,dy,steps;
	float x3,y3,ddx,ddy;
	int gdriver=DETECT,gmode;
	initgraph(&gdriver,&gmode,"C:\\TC\\bgi");
	clrscr();
	printf(" Kaustubh 160410116050 Practical-2\n");
	printf(" Enter Coordinates of point 1\n");
	scanf("%d %d",&x1,&y1);
	printf(" Enter Coordinates of point 2\n");
	scanf("%d %d",&x2,&y2);
	dx=x2-x1;
	dy=y2-y1;
	if(abs(dx)>abs(dy))
		steps=abs(dx);
	else
		steps=abs(dy);
	ddx=((float)dx/(float)steps);
	ddy=((float)dy/(float)steps);
	x3=x1;
	y3=y1;
	for(int i=0;i<steps;i++)
	{
		x3+=ddx;
		y3+=ddy;
		putpixel(ceil(x3),ceil(y3),4);
	}
	getch();
	return 0;
}