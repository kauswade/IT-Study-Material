#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
double x[3], y[3];
void drawline(double a[3], double b[3])
{
	for(int i=0;i<2;i++)
	{
		line(a[i],b[i],a[i+1],b[i+1]);
	}
	line(a[2],b[2],a[0],b[0]);
}
void transltion()
{
	int tx, ty;
	printf(" Enter tx, ty\n");
	scanf("%d %d",&tx,&ty);
	for(int i=0;i<3;i++)
	{
		x[i]+=tx;
		y[i]+=ty;
	}
	drawline(x,y);
}
void rotation()
{
	double ang;
	printf(" Enter Angle\n");
	scanf("%lf",&ang);
	ang=ang*(3.141592653589793/180);
	for(int i=0;i<3;i++)
	{
		x[i]=((x[i]*cos(ang))-(y[i]*sin(ang)));
		y[i]=((x[i]*sin(ang))+(y[i]*cos(ang)));
	}
	drawline(x,y);
}
void scaling()
{
	double sx, sy;
	printf(" Enter sx, sy\n");
	scanf("%lf %lf",&sx,&sy);
	for(int i=0;i<3;i++)
	{
		x[i]*=sx;
		y[i]*=sy;
	}
	drawline(x,y);
}
int main()
{
	int gdriver = DETECT, gmode;
	int i;
	initgraph(&gdriver, &gmode, "");
	clrscr();
	printf(" Kaustubh Wade (160410116050) Prctical-6\n");
	printf(" Enter 3 points of the Triangle:\n");
	for(i=0;i<3;i++)
	{
		printf(" X%d, Y%d: ",i,i);
		scanf("%lf %lf",&x[i],&y[i]);
	}
	drawline(x,y);
	printf(" Enter Option\n 1. Transltion\n 2. Rotation\n 3. Scaling\n");
	scanf("%d",&i);
	switch(i)
	{
		case 1 : transltion();	break;
		case 2 : rotation();	break;
		case 3 : scaling();	break;
		default : printf(" Default!");
	}
	getch();
	closegraph();
	return 0;
}