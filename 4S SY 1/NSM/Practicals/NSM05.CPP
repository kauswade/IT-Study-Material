//program for regula falsi method
#include<iostream>
using namespace std;
#include<math.h>
#define f(x) (x*x*x-x-11)
float x0,x1,xn,x=1;
void f1()
{   for(int i=0;i<10;i++)
	{   xn=(x0*f(x1)-x1*f(x0))/(f(x1)-f(x0));
		if(f(xn)<0.0)
			x0=xn;
		else
			x1=xn;
		cout<<"\n Step "<<i+1<<"\t Root = "<<xn;
	}
}
void f2()
{	for(int i=0;i<10;i++)
	{   xn=(x0*f(x1)-x1*f(x0))/(f(x1)-f(x0));
		if(f(xn)<0.0)
			x1=xn;
		else
			x0=xn;
		cout<<"\n Step "<<i+1<<"\t Root = "<<xn;
	}
}
int main()
{   if(f(x)<0.0)
	{   while(f(x)<0.0)
            x++;
		x1=x--;
		x0=x;
		cout<<" A = "<<x0<<" and B = "<<x1<<". ";
		f1();
	}
	else
	{   while(f(x)>0.0)
		x++;
		x1=x--;
		x0=x;
		cout<<" A = "<<x0<<" and B = "<<x1<<". ";
		f2();
	}
	return 0;
}




