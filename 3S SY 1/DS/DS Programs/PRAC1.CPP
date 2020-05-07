#include<stdio.h>
#include<conio.h>
void swap1(int x,int y)
{	int temp;
	temp = x;
	x = y;
	y = temp;
}
void swap2(int *x,int *y)
{	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
void main()
{       int a,b,c,d;
	clrscr();
	printf(" Program to show Call by Value and Call by reference\n");
	printf(" Enter two Values : ");
	scanf("%d %d",&a,&b);
	c=a;	d=b;
	printf(" A = %d, B = %d\n",a,b);
	swap1(a,b);
	swap2(&c,&d);
	printf(" Values after swapping by CBV : A = %d, B = %d\n",a,b);
	printf(" Values after swapping by CBR : A = %d, B = %d\n",c,d);
	getch();
}