#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<process.h>
#include<string.h>
char *lname[] = {
	"SOLID_LINE",
	"DOTTED_LINE",
	"CENTER_LINE",
	"DASHED_LINE",
	"USERBIT_LINE"
};
int main()
{
	int style, n, x = 200, y=400;
	char linest[20];
	clrscr();
	int gdriver = DETECT, gmode, errorcode;
	initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
	errorcode = graphresult();
	if (errorcode != grOk)
	{
		printf("Graphics error: %s\n", grapherrormsg(errorcode));
		printf("Press any key to halt:");
		getch();
		exit(1);
	}
	printf(" 160410116050\n");
	style = SOLID_LINE;
	printf(" Enter Type of Line:\n 1. Solid Line\n 2. Dotted Line\n");
	printf(" 3. Center Line\n 4. Dashed Line\n 5. UserBit Line\n : ");
	scanf("%d",&n);
	switch(n)
	{
		case 1 :setlinestyle(style,1,1);
			line(x,x,y,x);
			strcpy(linest,lname[style]);
			outtextxy(y, x, linest);
			break;
		case 2 :setlinestyle(style+1,1,1);
			line(x,x,y,x);
			strcpy(linest,lname[style+1]);
			outtextxy(y, x, linest);
			break;
		case 3 :setlinestyle(style+2,1,1);
			line(x,x,y,x);
			strcpy(linest,lname[style+2]);
			outtextxy(y, x, linest);
			break;
		case 4 :setlinestyle(style+3,1,1);
			line(x,x,y,x);
			strcpy(linest,lname[style+3]);
			outtextxy(y, x, linest);
			break;
		case 5 :setlinestyle(style+4,1,1);
			line(x,x,y,x);
			strcpy(linest,lname[style+4]);
			outtextxy(y, x, linest);
			break;
		default: printf("Default!");
	}
	/*for(int i = 0; i<5; i++)
	{
		setlinestyle(style,1,1);
		line(100,y+50,400,y+50);
		strcpy(linest,lname[style]);
		outtextxy(400, y+50, linest);
		style++;
		y+=50;
	}*/
	getch();
	closegraph();
	return 0;
}