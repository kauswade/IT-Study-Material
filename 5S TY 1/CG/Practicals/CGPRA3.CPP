#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<graphics.h>
int main()
{
	int x1,y1,x2,y2,pk,dx,dy;
	int gdriver=DETECT,gmode;
	initgraph(&gdriver,&gmode,"C:\\TC\\bgi");
	clrscr();
	printf("Kaustubh Wade 160410116050 Practical 3");
	printf("Enter Coordinates of point 1\n");
	scanf("%d %d",&x1,&y1);
	printf("Enter Coordinates of point 2\n");
	scanf("%d %d",&x2,&y2);
	dx=x2-x1;
	dy=y2-y1;
	pk=2*dy-dx;
	putpixel(x1,y1,4);
	while(x1!=x2)
	{
		if(pk<0)
		{
			putpixel(++x1,y1,4);

			pk=pk+2*dy;
		}
		else
		{
			putpixel(++x1,++y1,4);
			pk=pk+2*(dy-dx);
		}
	}
	getch();
	return 0;
}